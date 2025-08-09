#if REM
#define INCLUDE(x)
#endif
// Hyperbolic Rogue
// Copyright (C) 2011-2019 Zeno Rogue

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

/** \file hyper.cpp
 *  \brief master file which includes everything
 *  You can either compile this file, or use mymake to compile all the *.cpp files separately.
 */

#include "../hyper.h"

INCLUDE("classes")
INCLUDE("colors")
INCLUDE("glhr")
INCLUDE("shaders")
INCLUDE("raycaster")
INCLUDE("hprint")
INCLUDE("util")
INCLUDE("hyperpoint")
INCLUDE("patterns")
INCLUDE("fieldpattern")
INCLUDE("heptagon")
INCLUDE("binary-tiling")
INCLUDE("nonisotropic")
INCLUDE("asonov")
INCLUDE("kite")
INCLUDE("aperiodic-hat")
INCLUDE("archimedean")
INCLUDE("arbitrile")
INCLUDE("rulegen")
INCLUDE("rulegen3")
INCLUDE("euclid")
INCLUDE("sphere")
INCLUDE("fake")
INCLUDE("quotient")
INCLUDE("crystal")
INCLUDE("reg3")
INCLUDE("language")
INCLUDE("cell")
INCLUDE("locations")
INCLUDE("expansion")
INCLUDE("goldberg")
INCLUDE("irregular")
INCLUDE("pattern2")
INCLUDE("flags")
INCLUDE("yendor")
INCLUDE("complex")
INCLUDE("complex2")
INCLUDE("savemem")
INCLUDE("game")
INCLUDE("passable")
INCLUDE("checkmove")
INCLUDE("pcmove")
INCLUDE("environment")
INCLUDE("monstermove")
INCLUDE("mapeffects")
INCLUDE("attack")
INCLUDE("items")
INCLUDE("orbgen")
INCLUDE("monstergen")
INCLUDE("landlock")
INCLUDE("landgen")
INCLUDE("wfcgen")
INCLUDE("orbs")
INCLUDE("inventory")
INCLUDE("system")
INCLUDE("debug")
INCLUDE("geometry")
INCLUDE("embeddings")
INCLUDE("geometry2")
INCLUDE("polygons")
INCLUDE("3d-models")
INCLUDE("floorshapes")
INCLUDE("usershapes")
INCLUDE("drawing")
INCLUDE("mapeditor")
INCLUDE("netgen")
INCLUDE("nofont")
INCLUDE("basegraph")
INCLUDE("screenshot")
INCLUDE("renderbuffer")
INCLUDE("help")
INCLUDE("legacy")
INCLUDE("config")
INCLUDE("scores")
INCLUDE("dialogs")
INCLUDE("menus")
INCLUDE("geom-exp")
INCLUDE("quit")
INCLUDE("multi")
INCLUDE("shmup")
INCLUDE("racing")
INCLUDE("models")
INCLUDE("history")
INCLUDE("rug")
INCLUDE("control")
INCLUDE("hud")
INCLUDE("radar")
INCLUDE("hypgraph")
INCLUDE("textures")
INCLUDE("graph")
INCLUDE("celldrawer")
INCLUDE("sky")
INCLUDE("blizzard")
INCLUDE("sound")
INCLUDE("achievement")
INCLUDE("barriers")
INCLUDE("surface")
INCLUDE("tour")
INCLUDE("commandline")
INCLUDE("bigstuff")
INCLUDE("multigame")
INCLUDE("inforder")
INCLUDE("vr")
INCLUDE("intra")
INCLUDE("crossbow")
//#include "./archipelago/apinterface.cpp"

#if CAP_ROGUEVIZ
INCLUDE("rogueviz/rogueviz-all")
#endif

#if !CAP_DAILY
namespace hr { namespace daily { bool on; int historical; } }
#endif

INCLUDE("mobile")
INCLUDE("hyper-main")

