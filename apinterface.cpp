#include <apclient.hpp>
#include <apuuid.hpp>
#include <stdio.h>
#include <inttypes.h>
#include <unistd.h>
#include <algorithm>
#include <memory>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#include <emscripten/html5.h>
#include <emscripten/bind.h>
#else
#define EM_BOOL bool
#define EM_TRUE true
#define EM_FALSE false
#if !defined WIN32 && !defined _WIN32
#include <poll.h>
#endif
#endif
#include <math.h>
#include <limits>

#define VERSION_TUPLE {0,4,1}


/*
 * This is the entry point for our cpp ap client.
 */


using nlohmann::json;

std::unique_ptr<APClient> client;
bool ap_sync_queued = false;
bool ap_connect_sent = false; // TODO: move to APClient::State ?
bool is_https = false; // set to true if the context only supports wss://
bool is_wss = false; // set to true if the connection specifically asked for wss://
bool is_ws = false; // set to true if the connection specifically asked for ws://
unsigned connect_error_count = 0;
bool awaiting_password = false;
std::string slot = "Player";

#define OLD_DATAPACKAGE_CACHE "datapackage.json"
#define UUID_FILE "uuid" // TODO: place in %appdata%
#define CERT_STORE "cacert.pem"

#if __cplusplus < 201500L
decltype(APClient::DEFAULT_URI) constexpr APClient::DEFAULT_URI;  // c++14 needs a proper declaration
#endif

void disconnect_ap()
{
    client.reset();
}

void connect_slot(const std::string& password)
{
    if (client) {
        client->ConnectSlot(slot, password, 0b111, {}, VERSION_TUPLE);
        ap_connect_sent = true;
    } else {
        printf("Connection lost!\n");
    }
}

void connect_ap(std::string uri="", std::string newSlot="")
{
    client.reset();

    if (!newSlot.empty())
        slot = newSlot;

    is_ws = uri.rfind("ws://", 0) == 0;
    is_wss = uri.rfind("wss://", 0) == 0;

    std::string uuid = ap_get_uuid(UUID_FILE);

    printf("Connecting to AP...\n");
    client.reset(new APClient(uuid, "Hyperrogue", uri.empty() ? APClient::DEFAULT_URI : uri, CERT_STORE));

    // load DataPackage cache
    try {
        client->set_data_package_from_file(OLD_DATAPACKAGE_CACHE);
    } catch (std::exception) { /* ignore */ }

    // set state and callbacks
    ap_sync_queued = false;
    connect_error_count = 0;
    client->set_socket_connected_handler([](){
        printf("Socket connected\n");
    });
    client->set_socket_disconnected_handler([](){
        printf("Socket disconnected\n");
    });
    client->set_socket_error_handler([](const std::string& error) {
        connect_error_count++;
        if (!error.empty() && error != "Unknown")
            printf("%s\n", error.c_str());
    });
    client->set_room_info_handler([](){
        connect_slot(""); //TODO Password
    });
    client->set_slot_connected_handler([](const json&){
        printf("Slot connected\n");
        client->poll();
        // Once starting inventory has been received, (re-)start the Hyperrogue game.
        if(!ap::init::jsonInitialized){
            ap::init::jsonInitialized = true;
            hr::stop_game();
            hr::start_game();
        }
    });
    client->set_slot_disconnected_handler([](){
        printf("Slot disconnected\n");
        ap_connect_sent = false;
    });
    client->set_slot_refused_handler([](const std::list<std::string>& errors){
        ap_connect_sent = false;
        if (std::find(errors.begin(), errors.end(), "InvalidSlot") != errors.end()) {
            printf("Unknown or invalid slot: %s\n", slot.c_str());
        } else {
            printf("AP: Connection refused:");
            for (const auto& error: errors) printf(" %s", error.c_str());
            printf("\n");
        }
    });
    client->set_items_received_handler([](const std::list<APClient::NetworkItem>& items) {
        if (!client->is_data_package_valid()) {
            // NOTE: this should not happen since we ask for data package before connecting
            if (!ap_sync_queued) client->Sync();
            ap_sync_queued = true;
            return;
        }
        for (const auto& item: items) {
            ap::checks::receiveCheck(item);
            std::string itemname = client->get_item_name(item.item, client->get_player_game(client->get_player_number()));
            std::string sender = client->get_player_alias(item.player);
            std::string location = client->get_location_name(item.location, client->get_player_game(item.player));
            printf("  #%d: %s (%" PRId64 ") from %s - %s\n",
                   item.index, itemname.c_str(), item.item,
                   sender.c_str(), location.c_str());
        }
    });
    client->set_data_package_changed_handler([](const json& data) {
        printf("Data Package Changed\n");
    });
    client->set_print_handler([](const std::string& msg) {
        printf("%s\n", msg.c_str());
    });
    client->set_print_json_handler([](const std::list<APClient::TextNode>& msg) {
        printf("%s\n", client->render_json(msg, APClient::RenderFormat::ANSI).c_str());
        hr::addMessage(client->render_json(msg));
    });
}
