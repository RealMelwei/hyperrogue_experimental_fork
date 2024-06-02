#define ASIO_STANDALONE 
#define ASIO_HAS_STD_ADDRESSOF
#define ASIO_HAS_STD_ARRAY
#define ASIO_HAS_CSTDINT
#define ASIO_HAS_STD_SHARED_PTR
#define ASIO_HAS_STD_TYPE_TRAITS
#define ASIO_HAS_STD_CHRONO
#define OPENSSL_IS_BORINGSSL
#define ASIO_HAS_STD_SYSTEM_ERROR
#define ASIO_HAS_STD_SHARED_PTR
#define SSL_OP_NO_COMPRESSION

#include <asio/error_code.hpp>
#include <asio/ssl/detail/openssl_init.hpp>
#include <asio/high_resolution_timer.hpp>
#include <asio.hpp>
//#include "hyper.h"
#include <apclient.hpp>
//#include <websocketpp/transport/asio/security/tls.hpp>
//#include <wswrap.hpp>
int main(){
  return 0;
}

int landChecks[100]={0};

void init_landChecks(){
    for(int i=0;i<20;i++){
      landChecks[i] = 1;
    }
}
