// This file is generated automatically by makeh.cpp.

namespace hr {

  // implemented in: classes.cpp

#line 64 "classes.cpp"
  extern const char *trollhelp2;
#line 296 "classes.cpp"
  extern const char *rosedesc;
#line 304 "classes.cpp"
  extern const char *warpdesc;
#line 424 "classes.cpp"
  enum eSlimegroup { sgNone, sgCave, sgWater, sgFloorA, sgFloorB, sgVine, sgTree };
#line 428 "classes.cpp"
  // we use CF not MF to avoid confusion with MF_ movement flags
  static constexpr flagtype CF_NOGHOST = Flag(0);
  static constexpr flagtype CF_RAIDER = Flag(1);
  static constexpr flagtype CF_PRINCESS = Flag(2);
  static constexpr flagtype CF_MIMIC = Flag(3);
  static constexpr flagtype CF_GOK = Flag(4);
  static constexpr flagtype CF_NONLIVING = Flag(5);
  static constexpr flagtype CF_METAL = Flag(6);
  static constexpr flagtype CF_STUNNABLE = Flag(7);
  static constexpr flagtype CF_HP = Flag(8);
  static constexpr flagtype CF_MOUNTABLE = Flag(9);
  static constexpr flagtype CF_FRIENDLY = Flag(10);
  static constexpr flagtype CF_PLAYER = Flag(11);
  static constexpr flagtype CF_BUG = Flag(12);
  static constexpr flagtype CF_IVY = Flag(13);
  static constexpr flagtype CF_PART = Flag(14);
  static constexpr flagtype CF_MUTANTIVY = Flag(15);
  static constexpr flagtype CF_ANYIVY = Flag(16);
  static constexpr flagtype CF_BULLET = Flag(17);
  static constexpr flagtype CF_DEMON = Flag(18);
  static constexpr flagtype CF_WORM = Flag(19);
  static constexpr flagtype CF_WITCH = Flag(20);
  static constexpr flagtype CF_BIRD = Flag(21);
  static constexpr flagtype CF_SLOWMOVER = Flag(22);
  static constexpr flagtype CF_MAGNETIC = Flag(23);
  static constexpr flagtype CF_SWITCH = Flag(24);
  static constexpr flagtype CF_GHOST = Flag(25);
  static constexpr flagtype CF_SHARK = Flag(26);
  static constexpr flagtype CF_SLIME = Flag(27);
  static constexpr flagtype CF_DRAGON = Flag(28);
  static constexpr flagtype CF_KRAKEN = Flag(29);
  static constexpr flagtype CF_NOBLOW = Flag(30);
  static constexpr flagtype CF_MULTITILE = Flag(31);
  static constexpr flagtype CF_LEADER = Flag(32);
  static constexpr flagtype CF_FLYING = Flag(33);
  static constexpr flagtype CF_ATTACK_THRU_VINE = Flag(34);
  static constexpr flagtype CF_ATTACK_NONADJACENT = Flag(35);
  static constexpr flagtype CF_NOHIGHLIGHT = Flag(36);
  static constexpr flagtype CF_INACTIVE = Flag(37);
  static constexpr flagtype CF_UNARMED = Flag(38);
  static constexpr flagtype CF_IGNORE_PLATE = Flag(39);
  static constexpr flagtype CF_BULL = Flag(40);
  static constexpr flagtype CF_TROLL = Flag(41);
  static constexpr flagtype CF_IGNORE_SMELL = Flag(42);
  static constexpr flagtype CF_RATLING = Flag(43);
  static constexpr flagtype CF_POWER = Flag(44);
  static constexpr flagtype CF_GHOSTMOVER = Flag(45);
  static constexpr flagtype CF_TECHNICAL = Flag(46);
  static constexpr flagtype CF_MOVED = Flag(47);
  static constexpr flagtype CF_FACING = Flag(48);
  static constexpr flagtype CF_FACE_UP = Flag(49);
  static constexpr flagtype CF_FACE_SIDE = Flag(50);
  static constexpr flagtype CF_HIGH_THREAT = Flag(51);
  static constexpr flagtype CF_SPAM = Flag(52);
  
  enum eMonster {
  #define MONSTER(a,b,c,d,e,f,g,h) d,
  #include "content.cpp"
  motypes
  };
  
  struct monstertype {
  char  glyph;
  color_t color;
  const char *name;
  flagtype flags;
  enum eMonster mgroup;
  const char *help;
  };
#line 499 "classes.cpp"
  extern monstertype minf[motypes];
#line 505 "classes.cpp"
  #define NUM_GS 8
  struct genderswitch_t {
  int gender;
  eMonster m;
  const char *name;
  const char *desc;
  };
#line 514 "classes.cpp"
  extern genderswitch_t genderswitch[NUM_GS];
#line 537 "classes.cpp"
  enum eOrbshape { osNone, osLove, osRanged, osOffensive, osFriend, osUtility, osDirectional, osWarping, osFrog, osPowerUtility, osProtective, osMovement, osTerraform };
  
  static constexpr flagtype ZERO = 0;
  
  static constexpr flagtype IF_SHARD = Flag(0);
  static constexpr flagtype IF_FIREPROOF = Flag(1);
  static constexpr flagtype IF_PROTECTION = Flag(2);
  static constexpr flagtype IF_EMPATHY = Flag(3);
  static constexpr flagtype IF_RANGED = Flag(4);
  static constexpr flagtype IF_SHMUPLIFE = Flag(5);
  static constexpr flagtype IF_REVIVAL = Flag(6);
  static constexpr flagtype IF_CURSE = Flag(7);
  
  // 0 = basic treasure, 1 = other item, 2 = power orb, 3 = not an item
  #define IC_TREASURE 0
  #define IC_OTHER 1
  #define IC_ORB 2
  #define IC_NAI 3
  
  struct itemtype {
  char  glyph;
  color_t color;
  const char *name;
  int itemclass;
  flagtype flags;
  eOrbshape orbshape;
  const char *help;
  };
  
  enum eItem { 
  #define ITEM(a,b,c,d,e,f,g,h,i) d,
  #include "content.cpp"
  ittypes
  };
#line 573 "classes.cpp"
  extern itemtype iinf[ittypes];
#line 581 "classes.cpp"
  static constexpr flagtype WF_WATER = Flag(0);
  static constexpr flagtype WF_BOAT = Flag(1);
  static constexpr flagtype WF_CHASM = Flag(2);
  static constexpr flagtype WF_NOFLIGHT = Flag(3);
  static constexpr flagtype WF_FIRE = Flag(4);
  static constexpr flagtype WF_THUMPER = Flag(5);
  static constexpr flagtype WF_ACTIVABLE = Flag(6);
  static constexpr flagtype WF_ALCHEMY = Flag(7);
  static constexpr flagtype WF_RED = Flag(8);
  static constexpr flagtype WF_WALL = Flag(9);
  static constexpr flagtype WF_PUSHABLE = Flag(10);
  static constexpr flagtype WF_CONE = Flag(11);
  static constexpr flagtype WF_STDTREE = Flag(12);
  static constexpr flagtype WF_GRAVE = Flag(13);
  static constexpr flagtype WF_REPTILE = Flag(14);
  static constexpr flagtype WF_HEATCOLOR = Flag(15);
  static constexpr flagtype WF_HIGHWALL = Flag(16);
  static constexpr flagtype WF_THORNY = Flag(17);
  static constexpr flagtype WF_TIMEOUT = Flag(18);
  static constexpr flagtype WF_CISLAND = Flag(19);
  static constexpr flagtype WF_SULPHURIC = Flag(20);
  static constexpr flagtype WF_HALFVINE = Flag(21);
  static constexpr flagtype WF_NONBLOCK = Flag(22);
  static constexpr flagtype WF_ON = Flag(23); // just for grammar: 'on' not 'in'
  
  struct walltype {
  char  glyph;
  color_t color;
  const char *name;
  flagtype flags;
  int snakelevel;
  eSlimegroup sg;
  const char *help;
  };
  
  enum eWall { 
  #define WALL(a,b,c,d,e,f,g,h,i) d,
  #include "content.cpp"
  walltypes
  };
#line 623 "classes.cpp"
  extern walltype winf[walltypes];
#line 631 "classes.cpp"
  enum eCanvasFloor { caflNone, caflM, caflFull, caflWarp, caflStar, caflCloud, caflCross, caflCharged,
  caflSStar, caflOver, caflTri, caflFeather, caflBarrow, caflNew, caflTroll, caflButterfly, caflLava,
  caflPalace, caflDemon, caflCave, caflDesert, caflPower, caflRose, caflTurtle, caflDragon, caflReptile,
  caflHive, caflSwitch, caflTower, caflEND };
  
  static constexpr flagtype LF_GENERATE_ALL = Flag(0);
  static constexpr flagtype LF_ICY = Flag(1);
  static constexpr flagtype LF_GRAVITY = Flag(2);
  static constexpr flagtype LF_EQUI = Flag(3);
  static constexpr flagtype LF_WARPED = Flag(4);
  static constexpr flagtype LF_CYCLIC = Flag(5);
  static constexpr flagtype LF_TECHNICAL = Flag(6);
  static constexpr flagtype LF_MIRROR = Flag(7);
  static constexpr flagtype LF_SEA = Flag(8);
  static constexpr flagtype LF_COASTAL = Flag(9);
  static constexpr flagtype LF_PURESEA = Flag(10);
  static constexpr flagtype LF_ELEMENTAL = Flag(11);
  static constexpr flagtype LF_HAUNTED = Flag(12);
  static constexpr flagtype LF_TROLL = Flag(13);
  static constexpr flagtype LF_INMIRROR = Flag(14);
  static constexpr flagtype LF_INMIRRORORWALL = Flag(15);
  static constexpr flagtype LF_ELECTRIC = Flag(17);
  
  struct landtype {
  color_t color;
  const char *name;
  flagtype flags;
  eItem treasure;
  const char *help;
  };
  
  enum eLand {
  #define LAND(a,b,c,d,e,f,g) c,
  #include "content.cpp"
  landtypes
  };
  
  extern color_t floorcolors[landtypes];
#line 671 "classes.cpp"
  extern const char *canvasFloorNames[caflEND];
#line 678 "classes.cpp"
  extern const landtype linf[landtypes];
#line 684 "classes.cpp"
  struct landtacinfo { eLand l; int tries, multiplier; };
#line 687 "classes.cpp"
  extern vector<landtacinfo> land_tac;
#line 726 "classes.cpp"
  extern vector<eLand> randlands;
#line 734 "classes.cpp"
  enum eGeometry {
  gNormal, gEuclid, gSphere, gElliptic, gZebraQuotient, gFieldQuotient, gTorus, gOctagon, g45, g46, g47, gSmallSphere, gTinySphere, gEuclidSquare, gSmallElliptic, 
  gKleinQuartic, gBolza, gBolza2, gMinimal, gBinaryTiling, gArchimedean, 
  gMacbeath, gBring, gSchmutzM2, gSchmutzM3, gCrystal, gOctahedron, 
  gBinary3, gCubeTiling, gCell120, gECell120, gRhombic3, gBitrunc3, 
  gSpace534, gSpace435, 
  gCell5, 
  gCell16, gECell16,
  gCell8, gECell8,
  gCell24, gECell24,
  gCell600, gECell600,
  gHoroTris, gHoroRec, gHoroHex,
  gField435, gField534,
  gBinary4, gSol,
  gKiteDart2, gKiteDart3, gNil, gProduct, gRotSpace,
  gTernary, gNIH, gSolN, gInfOrder, gSpace336, gSpace344, gCrystal344,
  gArnoldCat, gArbitrary, gInfOrder4, gCrystal534,
  gSpace535, gSpace536, gSeifertCover, gSeifertWeber, gHomologySphere,
  gInfOrderMixed, gSpace436, gFake,
  gSpace345, gSpace353, gSpace354, gSpace355,
  gHalfBring,
  gAperiodicHat,
  gSierpinski3, gSierpinski4, gSixFlake, gMengerSponge, gSierpinskiTet,
  gAperiodicSpectre,
  gGUARD};
  
  enum eGeometryClass { gcHyperbolic, gcEuclid, gcSphere, gcSol, gcNIH, gcSolN, gcNil, gcProduct, gcSL2 };
  
  enum class eVariation { bitruncated, pure, goldberg, irregular, dual, untruncated, warped, unrectified, subcubes, coxeter, dual_subcubes, bch, bch_oct };
  
  typedef int modecode_t;
  
  /** only the actual geometry */
  struct geometryinfo1 {
  /** geometry class */
  eGeometryClass kind;
  /** dimension of the gameplay (2 for crystal) */
  int gameplay_dimension;
  /** dimension of the graphics, may be greater than gameplay_dimension with vid.always3 on */
  int graphical_dimension;
  /** dimension of the homogeneous vector space used, usually graphical_dimension+1, but 3 in product */
  int homogeneous_dimension;
  /** signature of the scalar product used */
  int sig[4];
  };
  
  struct geometryinfo {
  std::string tiling_name;
  std::string quotient_name;
  const char* menu_displayed_name;
  const char* shortname;
  int sides;
  int vertex;
  flagtype flags;
  geometryinfo1 g;
  std::array<int,2> distlimit; // bitrunc, non-bitrunc
  eVariation default_variation;
  };
  
  static constexpr flagtype qCLOSED         = 1;
  static constexpr flagtype qANYQ            = 2;
  static constexpr flagtype qNONORIENTABLE   = 4;
  static constexpr flagtype qSMALL           = 8;
  
  static constexpr flagtype qFIELD           = 16;
  static constexpr flagtype qDOCKS           = 32;
  static constexpr flagtype qZEBRA           = 64;
  
  static constexpr flagtype qELLIPTIC        = 128;
  
  static constexpr flagtype qBINARY          = 256;
  static constexpr flagtype qKITE            = 512;
  
  static constexpr flagtype qREGULAR         = 1024; /* not set! */
  static constexpr flagtype qARCHI           = 2048;
  static constexpr flagtype qHYBRID          = 4096;
  static constexpr flagtype qCRYSTAL         = 8192;
  static constexpr flagtype qSOL             = 16384;
  static constexpr flagtype qEXPERIMENTAL    = 32768;
  static constexpr flagtype qNIH             = 65536;
  
  static constexpr flagtype qIDEAL           = 131072;
  static constexpr flagtype qHUGE_BOUNDED    = 262144;
  static constexpr flagtype qOPTQ            = Flag(19);
  static constexpr flagtype qSINGLE          = Flag(20);
  
  static constexpr flagtype qDEPRECATED      = Flag(21);
  static constexpr flagtype qINFMIXED        = Flag(22);
  
  static constexpr flagtype qRAYONLY         = Flag(23);
  static constexpr flagtype qAFFINE          = Flag(24);
  
  static constexpr flagtype qULTRA           = Flag(25);
  
  static constexpr flagtype qPORTALSPACE     = Flag(26);
  
  static constexpr flagtype qSTRETCHABLE     = Flag(27);
  
  static constexpr flagtype qCAT             = Flag(28);
  
  static constexpr flagtype qAPERIODIC       = Flag(29);
  static constexpr flagtype qHAT             = Flag(30);
  
  static constexpr flagtype qFRACTAL         = Flag(31);
  
  // note: dnext assumes that x&7 equals 7
  static constexpr int SEE_ALL = 50;
  // note: check_football_colorability in arbitrile.cpp assumes OINF is divisible by 3
  static constexpr int OINF = 123;
  
  extern eGeometry geometry;
  extern eVariation variation;
#line 849 "classes.cpp"
  static constexpr flagtype qsNONOR           = qANYQ | qSMALL | qCLOSED | qNONORIENTABLE;
  static constexpr flagtype qsNONORE          = qsNONOR | qELLIPTIC;
  static constexpr flagtype qsBQ              = qANYQ | qSMALL | qCLOSED;
  static constexpr flagtype qsSMALL           = qANYQ | qSMALL | qCLOSED;
  static constexpr flagtype qsSMALLN          = qANYQ | qSMALL | qCLOSED | qNONORIENTABLE;
  static constexpr flagtype qsZEBRA           = qANYQ | qSMALL | qCLOSED | qZEBRA;
  static constexpr flagtype qsFIELD           = qANYQ | qFIELD | qCLOSED;
  static constexpr flagtype qsDOCKS           = qANYQ | qSMALL | qCLOSED | qDOCKS;
  static constexpr flagtype qsSMALLB          = qSMALL | qCLOSED;
  static constexpr flagtype qsSMALLBF         = qsSMALLB | qsFIELD | qANYQ;
  static constexpr flagtype qsSMALLBE         = qsSMALLB | qELLIPTIC | qANYQ;
  static constexpr flagtype qsBP              = qBINARY | qKITE;
  
  static constexpr flagtype qsSINGLE          = qANYQ | qSMALL | qCLOSED | qSINGLE;
#line 865 "classes.cpp"
  extern geometryinfo1 giEuclid2;
#line 866 "classes.cpp"
  extern geometryinfo1 giHyperb2;
#line 867 "classes.cpp"
  extern geometryinfo1 giSphere2;
#line 869 "classes.cpp"
  extern geometryinfo1 giEuclid3;
#line 870 "classes.cpp"
  extern geometryinfo1 giHyperb3;
#line 871 "classes.cpp"
  extern geometryinfo1 giSphere3;
#line 873 "classes.cpp"
  extern geometryinfo1 giSol;
#line 874 "classes.cpp"
  extern geometryinfo1 giNIH;
#line 875 "classes.cpp"
  extern geometryinfo1 giSolN;
#line 877 "classes.cpp"
  extern geometryinfo1 giNil;
#line 878 "classes.cpp"
  extern geometryinfo1 giProductH;
#line 879 "classes.cpp"
  extern geometryinfo1 giProductS;
#line 880 "classes.cpp"
  extern geometryinfo1 giProduct;
#line 881 "classes.cpp"
  extern geometryinfo1 giSL2;
#line 883 "classes.cpp"
  extern modecode_t no_code;
#line 886 "classes.cpp"
  extern vector<geometryinfo> ginf;
#line 978 "classes.cpp"
  namespace mf {
  static constexpr flagtype azimuthal = 1;
  static constexpr flagtype cylindrical = 2; /* usually you want 'band' */
  static constexpr flagtype equiarea = 4;
  static constexpr flagtype equidistant = 8;
  static constexpr flagtype conformal = 16;
  static constexpr flagtype euc_boring = 32;
  static constexpr flagtype space = 64;
  static constexpr flagtype hyper_only = 128;
  static constexpr flagtype hyper_or_torus = 256;
  static constexpr flagtype pseudocylindrical = 512; /* includes cylindrical; usually you want 'band' or 'pseudoband' */
  static constexpr flagtype equivolume = 1024;
  static constexpr flagtype twopoint = 2048;
  static constexpr flagtype uses_bandshift = 4096;
  static constexpr flagtype broken = 8192; /* in spherical case, these are broken along the meridian 180 deg */
  static constexpr flagtype technical = 16384; /* don't display in the list */
  static constexpr flagtype product_special = (1<<15);
  static constexpr flagtype axial = (1<<16);
  static constexpr flagtype perspective = (1<<17);
  static constexpr flagtype orientation = (1<<18);
  static constexpr flagtype transition = (1<<19);
  static constexpr flagtype werner = (1<<20);
  static constexpr flagtype horocyclic = (1<<21);
  
  static constexpr flagtype band = (cylindrical | pseudocylindrical | uses_bandshift | orientation);
  static constexpr flagtype pseudoband = (pseudocylindrical | uses_bandshift | orientation);
  }
  
  struct modelinfo {
  const char *name_hyperbolic;
  const char *name_euclidean;
  const char *name_spherical;  
  
  flagtype flags;
  };
  
  enum eModel : int {
  mdDisk, mdHalfplane, mdBand, mdPolygonal, mdFormula,
  // 5..8.
  mdEquidistant, mdEquiarea, mdBall, mdHyperboloid, 
  // 9..13
  mdHemisphere, mdBandEquidistant, mdBandEquiarea, mdSinusoidal, mdTwoPoint, 
  // 14..16
  mdFisheye, mdJoukowsky, mdJoukowskyInverted,
  // 17..19
  mdRotatedHyperboles, mdSpiral, mdPerspective,
  // 20..24
  mdEquivolume, mdCentralInversion, mdSimulatedPerspective, mdTwoHybrid, mdGeodesic,
  // 25..27
  mdMollweide, mdCentralCyl, mdCollignon, 
  // 28..31 
  mdHorocyclic, mdQuadrant, mdAxial, mdAntiAxial,
  // 32..38
  mdWerner, mdAitoff, mdHammer, mdLoximuthal, mdMiller, mdGallStereographic, mdWinkelTripel,
  // 39..48
  mdPoorMan, mdPanini, mdRetroCraig, mdRetroLittrow, mdRetroHammer, mdThreePoint, mdLiePerspective, mdLieOrthogonal, mdRelPerspective, mdRelOrthogonal,
  // 49..50
  mdHorocyclicEqa, mdConformalSquare, mdFisheye2, mdPolar,
  // 51..
  mdGUARD, mdPixel, mdHyperboloidFlat, mdPolynomial, mdManual
  };
#line 1047 "classes.cpp"
  extern vector<modelinfo> mdinf;
#line 1111 "classes.cpp"
  static inline bool orbProtection(eItem it) { return false; } // not implemented
  
  // these markers use lands which never appear on barrier sides
  
  const eLand NOWALLSEP = laNone;
  const eLand NOWALLSEP_SWAP = laMountain;
  const eLand NOWALLSEP_WALL = laHauntedWall;
  const eLand NOWALLSEP_USED = laWhirlpool;
  const eLand NOWALLSEP_WALL_CPOS = laBarrier;
  const eLand NOWALLSEP_WALL_CNEG = laOceanWall;
  const eLand NOWALLSEP_WALL_EPOS = laClearing;
  const eLand NOWALLSEP_WALL_ENEG = laPrincessQuest;
  

  // implemented in: locations.cpp

#line 18 "locations.cpp"
  
  extern int cellcount, heptacount;
  
  #define NODIR 126
  #define NOBARRIERS 127
  #define NOBARRIERS2 125
  
  /** \brief Cell information for the game. struct cell builds on this */
  struct gcell {
  
  #if CAP_BITFIELD
  /** \brief which land does this cell belong to */
  eLand land : 8;
  /** \brief wall type (waNone for no walls) */
  eWall wall : 8;
  /** \brief monster on this cell -- note that player characters are handled separately */
  eMonster monst : 8;
  /** \brief item on this cell */
  eItem item : 8;
  
  /** \brief if this is a barrier, what lands on are on the sides? */
  eLand barleft : 8, barright : 8; 
  
  /** \brief is it currently sparkling with lightning? */
  unsigned ligon : 1;
  
  signed 
  mpdist : 7,         ///< minimum player distance, the smaller value, the more generated it is */
  pathdist : 8,       ///< distance from the target -- actual meaning may change
  cpdist : 8;         ///< current distance to the player
  
  unsigned 
  mondir : 8,         ///< which direction the monster is facing (if relevant), also used for boats
  bardir : 8,         ///< may equal NODIR (no barrier here), NOBARRIERS (barriers not allowed here), or the barrier direction
  stuntime : 8,       ///< for stunned monsters, stun time left; also used for Mutant Ivy timing
  hitpoints : 7,      ///< hitpoints left, for Palace monsters, Dragons, Krakens etc. Also reused as cpid for mirrors
  monmirror : 1;      ///< monster mirroring state for nonorientable geometries
  
  unsigned landflags : 8; ///< some lands need additional flags
  #else
  eLand land;
  eWall wall;
  eMonster monst;
  eItem item;
  eLand barleft, barright;
  bool ligon, monmirror;
  signed char pathdist, cpdist, mpdist;
  
  unsigned char mondir, bardir, stuntime, hitpoints;
  unsigned char landflags;
  #endif
  
  /** 'landparam' is used for: 
  *  heat in Icy/Cocytus; 
  *  heat in Dry (0..10); 
  *  CR2 structure; 
  *  hive Weird Rock color / pheromones;
  *  Ocean/coast depth;
  *  Bomberbird Egg hatch time / mine marking;
  *  number of Ancient Jewelry;
  *  improved tracking in Trollheim
  */
  union { 
  int32_t landpar; 
  unsigned int landpar_color;
  float heat; 
  char bytes[4]; 
  struct fieldinfo { 
  uint16_t fieldval;
  unsigned rval : 4;
  unsigned flowerdist : 4;
  unsigned walldist : 4;
  unsigned walldist2 : 4;
  } fi;
  
  } LHU;
  
  /** \brief wall parameter, used e.g. for remaining power of Bonfires and Thumpers */
  char wparam;
  
  #ifdef CELLID
  int cellid;
  #endif
  
  gcell() {
  #ifdef CELLID
  cellid = cellcount;  
  #endif
  }
  };
  
  #define landparam LHU.landpar
  #define landparam_color LHU.landpar_color
  #define fval LHU.fi.fieldval
  
  #define FULL_EDGE 120
  
  template<class T> struct walker;
  
  /** Connection tables are used by heptagon and cell structures. They basically
  *  describe the structure of the graph on the given manifold. We assume that 
  *  the class T has a field c of type connection_table<T>,
  *  as its last field. Edges are listed in the clockwise order (for 2D tilings, 
  *  for 3D tilings the order is more arbitrary). For each edge we remember which other T
  *  we are connected to, as well as the index of this edge in the other T, and whether it is 
  *  mirrored (for graphs on non-orientable manifolds).
  *  To conserve memory, these classes need to be allocated with tailored_alloc
  *  and freed with tailored_free.
  */
  
  int gmod(int i, int j);
  
  template<class T> struct connection_table {
  
  /** \brief Table of moves. This is the maximum size, but tailored_alloc allocates less. */
  T* move_table[FULL_EDGE + (FULL_EDGE + sizeof(char*) - 1) / sizeof(char*)];
  
  unsigned char *spintable() { return (unsigned char*) (&move_table[full()->degree()]); }
  
  /** \brief get the full T from the pointer to this connection table */
  T* full() { return (T*)((char*)this - offsetof(T, c)); }
  /** \brief for the edge d, set the `spin` and `mirror` attributes */
  void setspin(int d, int spin, bool mirror) { 
  unsigned char& c = spintable() [d];
  c = spin;
  if(mirror) c |= 128;
  }
  /** \brief we are spin(i)-th neighbor of move[i] */
  int spin(int d) { return spintable() [d] & 127; }
  /** \brief on non-orientable surfaces, the d-th edge may be mirrored */
  bool mirror(int d) { return spintable() [d] & 128; }  
  /** \brief 'fix' the edge number d to get the actual index in [0, degree()) */
  int fix(int d) { return gmod(d, full()->degree()); }
  /** \brief T in the direction i */
  T*& move(int i) { return move_table[i]; }
  /** \brief T in the direction i, modulo degree() */
  T*& modmove(int i) { return move(fix(i)); }
  unsigned char modspin(int i) { return spin(fix(i)); }
  /** \brief initialize the table */
  void fullclear() { 
  for(int i=0; i<full()->degree(); i++) move_table[i] = NULL;
  }
  /** \brief connect this in direction d0 to c1 in direction d1, possibly mirrored */
  void connect(int d0, T* c1, int d1, bool m) {
  move(d0) = c1;
  c1->move(d1) = full();
  setspin(d0, d1, m);
  c1->c.setspin(d1, d0, m);    
  }
  /* like the other connect, but take the parameters of the other cell from a walker */
  void connect(int d0, walker<T> hs) {
  connect(d0, hs.at, hs.spin, hs.mirrored);
  }
  };
  
  /** \brief Allocate a class T with a connection_table, but with only `degree` connections. 
  *
  *  Also set yet unknown connections to NULL.
  *
  * Generating the hyperbolic world consumes lots of
  * RAM, so we really need to be careful on low memory devices. 
  */
  
  template<class T> T* tailored_alloc(int degree) {
  T* result;
  #ifndef NO_TAILORED_ALLOC
  int b = offsetof(T, c) + offsetof(connection_table<T>, move_table) + sizeof(T*) * degree + degree;
  result = (T*) new char[b];
  new (result) T();
  #else
  result = new T;
  #endif
  result->type = degree;
  for(int i=0; i<degree; i++) result->c.move_table[i] = NULL;
  return result;
  }
  
  /** \brief Counterpart to hr::tailored_alloc(). */
  template<class T> void tailored_delete(T* x) {
  x->~T();  
  delete[] ((char*) (x));
  }
  
  static constexpr struct wstep_t {} wstep = {};
  static constexpr struct wmirror_t {} wmirror = {};
  static constexpr struct rev_t {} rev = {};
  static constexpr struct revstep_t {} revstep = {};
  
  extern int hrand(int);
  
  /** \brief the walker structure is used for walking on surfaces defined via \ref connection_table. */
  template<class T> struct walker {
  /** \brief where we are at */
  T *at;
  /** \brief in which direction (edge) we are facing */
  int spin;
  /** \brief are we mirrored */
  bool mirrored;
  walker(T *at = NULL, int s = 0, bool m = false) : at(at), spin(s), mirrored(m) { if(at) s = at->c.fix(s); }
  /** \brief spin by i to the left (or right, when mirrored */
  walker<T>& operator += (int i) {
  spin = at->c.fix(spin+(mirrored?-i:i));
  return (*this);
  }
  /** \brief spin by i to the right (or left, when mirrored */
  walker<T>& operator -= (int i) {
  spin = at->c.fix(spin-(mirrored?-i:i));
  return (*this);
  }
  /** \brief add wmirror to mirror this walker */
  walker<T>& operator += (wmirror_t) {
  mirrored = !mirrored;
  return (*this);
  }
  /** \brief add wstep to make a single step, after which we are facing the T we were originally on */
  walker<T>& operator += (wstep_t) {
  at->cmove(spin);
  int nspin = at->c.spin(spin);
  if(at->c.mirror(spin)) mirrored = !mirrored;
  at = at->move(spin);
  spin = nspin;
  return (*this);
  }
  /** \brief add wrev to face the other direction, may be non-deterministic and use hrand */
  walker<T>& operator += (rev_t) {
  auto rd = reverse_directions(at, spin);
  if(rd.size() == 1) spin = rd[0];
  else spin = rd[hrand(rd.size())];
  return (*this);
  }
  /** \brief adding revstep is equivalent to adding rev and step */
  walker<T>& operator += (revstep_t) {
  (*this) += rev; return (*this) += wstep; 
  }
  bool operator != (const walker<T>& x) const {
  return at != x.at || spin != x.spin || mirrored != x.mirrored;
  }
  bool operator == (const walker<T>& x) const {
  return at == x.at && spin == x.spin && mirrored == x.mirrored;
  }
  
  bool operator < (const walker<T>& cw2) const {
  return tie(at, spin, mirrored) < tie(cw2.at, cw2.spin, cw2.mirrored);
  }
  
  /** how much should we spin to face direction dir */
  int to_spin(int dir) {
  return gmod(dir - spin, at->type) * (mirrored ? -1 : 1);
  }
  
  walker<T>& operator ++ (int) { return (*this) += 1; }
  walker<T>& operator -- (int) { return (*this) -= 1; }
  template<class U> walker operator + (U t) const { walker<T> w = *this; w += t; return w; }
  template<class U> walker operator - (U t) const { walker<T> w = *this; w += (-t); return w; }
  /** \brief what T are we facing, without creating it */
  T*& peek() const { return at->move(spin); }
  /** \brief what T are we facing, with creating it */
  T* cpeek() { return at->cmove(spin); }
  /** \brief would we create a new T if we stepped forwards? */
  bool creates() { return !peek(); }
  /** \brief mirror this walker with respect to the d-th edge */
  walker<T> mirrorat(int d) { return walker<T> (at, at->c.fix(d+d - spin), !mirrored); }
  };
  
  struct cell;
  
  // automaton state
  enum hstate { hsOrigin, hsA, hsB, hsError, hsA0, hsA1, hsB0, hsB1, hsC };
  
  struct cell *createMov(struct cell *c, int d);
  struct heptagon *createStep(struct heptagon *c, int d);
  
  struct cdata_or_heptagon { virtual ~cdata_or_heptagon() = default; };
  
  struct cdata : cdata_or_heptagon {
  int val[4];
  int bits;
  };
  
  /** \brief Limit on the 'distance' value in heptagon. 
  * 
  *  This value is signed (negative distances are used
  *  in horocycle implementation. Distance is currently a short, and we need a bit of breathing room.
  *  It would not be a technical problem to use a larger type, but 32000 is close to what fits in
  *  the memory of a normal computer. Farlands appear close to this limit.
  **/
  
  constexpr int global_distance_limit = 32000;
  
  /** This value is used in iterative algorithms to prevent infinite loops created by incorrect
  data (e.g., circular dragon). It should be larger than global_distance_limit */
  constexpr int iteration_limit = 10000000;
  
  /** \brief underlying tiling
  *  in bitruncated/irregular/Goldberg geometries, heptagons form the 
  *  underlying regular tiling (not necessarily heptagonal); in pure
  *  geometries, they correspond 1-1 to tiles; in 'masterless' geometries
  *  heptagons are unused
  */
  
  struct heptagon : cdata_or_heptagon {
  /** \brief Automata are used to generate the standard maps. s is the state of this automaton */
  hstate s : 6;
  /** \brief distance modulo 4, in heptagons */
  unsigned int dm4: 2;
  /** \brief distance from the origin; based on the final geometry of cells, not heptagons themselves */
  short distance;
  /** \brief Emerald/wineyard generator. May have different meaning in other geometries. */
  short emeraldval;
  /** \brief Palace pattern generator. May have different meaning in other geometries. */
  short fiftyval;
  /** \brief Zebra pattern generator. May have different meaning in other geometries. */
  short zebraval;
  /** \brief Field quotient pattern ID. May have different meaning in other geometries. */
  int fieldval : 24;
  /** \brief the number of adjacent heptagons */
  unsigned char type : 8;
  /** \brief data for fractal landscapes */
  short rval0, rval1;
  /** for the main map, it contains the fractal landscape data
  *
  *  For alternate structures, cdata contains the pointer to the original.
  */
  struct cdata *cdata;
  /** \brief which central cell does this heptagon correspond too
  *  
  *  For alternate geometries, c7 is NULL
  */
  cell *c7;
  /** \brief associated generator of alternate structure, for Camelot and horocycles */
  heptagon *alt;
  /** \brief connection table */
  connection_table<heptagon> c;
  // DO NOT add any fields after connection_table! (see tailored_alloc)
  heptagon*& move(int d) { return c.move(d); }
  heptagon*& modmove(int d) { return c.modmove(d); }
  // functions
  heptagon () { heptacount++; }
  ~heptagon () { heptacount--; }
  heptagon *cmove(int d) { return createStep(this, d); }
  heptagon *cmodmove(int d) { return createStep(this, c.fix(d)); }
  inline int degree() { return type; }
  
  // prevent accidental copying
  heptagon(const heptagon&) = delete;
  heptagon& operator=(const heptagon&) = delete;
  };
  
  struct cell : gcell {
  char type;        ///< our degree
  int degree() { return type; }
  
  int listindex;    ///< used by celllister  
  heptagon *master; ///< heptagon who owns us; for 'masterless' tilings it contains coordinates instead
  
  connection_table<cell> c;
  // DO NOT add any fields after connection_table! (see tailored_alloc)
  
  cell*& move(int d) { return c.move(d); }
  cell*& modmove(int d) { return c.modmove(d); }
  cell* cmove(int d) { return createMov(this, d); }
  cell* cmodmove(int d) { return createMov(this, c.fix(d)); }
  cell() {}
  
  // prevent accidental copying
  cell(const cell&) = delete;
  heptagon& operator=(const cell&) = delete;
  };
  
  /** abbreviations */
  typedef walker<heptagon> heptspin;
  typedef walker<cell> cellwalker;
  
  /** \brief A structure useful when walking on the cell graph in arbitrary way, or listing cells in general.
  *
  * Only one celllister may be active at a time, using the stack semantics.
  * Only the most recently created one works; the previous one will resume 
  * working when this one is destroyed.
  */
  struct manual_celllister {
  /** \brief list of cells in this list */
  vector<cell*> lst;
  vector<int> tmps;
  
  /** \brief is the given cell on the list? */
  bool listed(cell *c) {
  return c->listindex >= 0 && c->listindex < isize(lst) && lst[c->listindex] == c;
  }
  
  /** \brief add a cell to the list */
  bool add(cell *c) {
  if(listed(c)) return false;
  tmps.push_back(c->listindex);
  c->listindex = isize(lst);
  lst.push_back(c);
  return true;
  }
  
  ~manual_celllister() {     
  for(int i=0; i<isize(lst); i++) lst[i]->listindex = tmps[i];
  }  
  };
  
  /** \brief automatically generate a list of nearby cells */
  struct celllister : manual_celllister {
  vector<int> dists;
  
  void add_at(cell *c, int d) {
  if(add(c)) dists.push_back(d);
  }
  
  /** \brief automatically generate a list of nearby cells
  @param orig where to start
  @param maxdist maximum distance to cover
  @param maxcount maximum number of cells to cover
  @param breakon we are actually looking for this cell, so stop when reaching it
  */
  celllister(cell *orig, int maxdist, int maxcount, cell *breakon) {
  add_at(orig, 0);
  cell *last = orig;
  for(int i=0; i<isize(lst); i++) {
  cell *c = lst[i];
  if(maxdist) forCellCM(c2, c) {
  add_at(c2, dists[i]+1);
  if(c2 == breakon) return;
  }
  if(c == last) {
  if(isize(lst) >= maxcount || dists[i]+1 == maxdist) break;
  last = lst[isize(lst)-1];
  }
  }
  }
  
  /** \brief for a given cell c on the list, return its distance from orig */
  int getdist(cell *c) { return dists[c->listindex]; }
  };
  
  /** \brief translate heptspins to cellwalkers and vice versa */
  static constexpr struct cth_t {} cth = {};
  inline heptspin operator+ (cellwalker cw, cth_t) { return heptspin(cw.at->master, cw.spin * DUALMUL, cw.mirrored); }
  inline cellwalker operator+ (heptspin hs, cth_t) { return cellwalker(hs.at->c7, hs.spin / DUALMUL, hs.mirrored); }
  
#line 462 "locations.cpp"
  bool proper(cell *c, int d);
#line 465 "locations.cpp"
  
  constexpr int STRONGWIND = 199;
  constexpr int FALL = 198;
  constexpr int NO_SPACE = 197;
  constexpr int TELEPORT = 196;
  constexpr int JUMP = 195;
  constexpr int STAY = 194;
  constexpr int NOMOVEI = 193;
  
  namespace whirlwind { cell *jumpDestination(cell*); }
  
  /** \brief a structure for representing movements 
  *
  *  mostly for 'proper' moves where s->move(d) == t,
  *  but also sometimes for other moves
  */
  
  struct movei {
  cell *s;
  cell *t;
  int d;
  bool op() { return s != t; }
  bool proper() const { return d >= 0 && d < s->type && s->move(d) == t; }
  movei(cell *_s, int _d) : s(_s), d(_d) {
  if(d == STRONGWIND) t = whirlwind::jumpDestination(s);
  else if(d < 0 || d >= s->type) t = s;
  else t = s->cmove(d);
  }
  movei(cell *_s, cell *_t, int _d) : s(_s), t(_t), d(_d) {}
  movei(cellwalker cw) : s(cw.at), t(cw.cpeek()), d(cw.spin) {}
  movei rev() const { return movei(t, s, rev_dir_or(d)); }
  int dir_or(int x) const { return proper() ? d : x; }
  int rev_dir_or(int x) const { return proper() ? s->c.spin(d) : x; }
  int rev_dir_mirror() const { return proper() ? s->c.spin(d) : d; }
  int rev_dir_force() const { hassert(proper()); return s->c.spin(d); }
  int dir_force() const { hassert(proper()); return d; }
  bool mirror() { return s->c.mirror(d); }
  };
#line 505 "locations.cpp"
  movei moveimon(cell *c);
#line 507 "locations.cpp"
  movei match(cell *f, cell *t);

  // implemented in: colors.cpp

#line 14 "colors.cpp"
  unsigned char& part(color_t& col, int i);
#line 28 "colors.cpp"
  static constexpr color_t NOCOLOR = 0;
  
  struct colortable: vector<color_t> {
  color_t& operator [] (int i) { i %= size(); if(i<0) i += size(); return ((vector<color_t>&)(*this)) [i]; }
  const color_t& operator [] (int i) const { i %= size(); if(i<0) i += size(); return ((vector<color_t>&)(*this)) [i]; }
  colortable(std::initializer_list<color_t> v) : vector(v) {}
  colortable() : vector({0}) {}
  void allocate(int num) {
  int q = size();
  for(int i=q; i<num; i++) push_back((*this)[i % q]);
  }
  };
#line 44 "colors.cpp"
  color_t darkena3(color_t c, int lev, int a);
#line 48 "colors.cpp"
  color_t darkena(color_t c, int lev, int a);
#line 52 "colors.cpp"
  int darkenedby(int c, int lev);
#line 62 "colors.cpp"
  color_t darkened(color_t c);
#line 79 "colors.cpp"
  color_t gradient(color_t c0, color_t c1, ld v0, ld v, ld v1);
#line 90 "colors.cpp"
  color_t rcolor();
#line 100 "colors.cpp"
  color_t rainbow_color(ld sat, ld hue);
#line 120 "colors.cpp"
  color_t align(color_t col);
#line 129 "colors.cpp"
  enum class eNeon { none, neon, no_boundary, neon2, illustration};
#line 132 "colors.cpp"
  extern eNeon neon_mode;
#line 133 "colors.cpp"
  extern bool neon_nofill;
#line 135 "colors.cpp"
  void apply_neon(color_t& col, int& r);
#line 153 "colors.cpp"
  color_t magentize(color_t x);
#line 165 "colors.cpp"
  color_t monochromatize(color_t x);
#line 173 "colors.cpp"
  extern bool cblind;
#line 176 "colors.cpp"
  void apply_neon_color(color_t col, color_t& pcolor, color_t& poutline, flagtype flags);
#line 234 "colors.cpp"
  int cloakcolor(int rtr);
#line 247 "colors.cpp"
  int firegradient(double p);
#line 253 "colors.cpp"
  int firecolor(int phase IS(0), int mul IS(1));
#line 257 "colors.cpp"
  int watercolor(int phase);
#line 261 "colors.cpp"
  int aircolor(int phase);
#line 265 "colors.cpp"
  int fghostcolor(cell *c);
#line 274 "colors.cpp"
  int weakfirecolor(int phase);
#line 280 "colors.cpp"
  extern vector<pair<const char*, color_t>> color_names;
#line 307 "colors.cpp"
  pair<const char*, color_t>* find_color_by_name(const string& s);

  // implemented in: hyperpoint.cpp

#line 16 "hyperpoint.cpp"
  
  #ifndef M_PI
  #define M_PI 3.14159265358979
  #endif
  
  static constexpr ld A_PI = M_PI;
  static constexpr ld TAU = 2 * A_PI;
  static constexpr ld degree = A_PI / 180;
  static const ld golden_phi = (sqrt(5)+1)/2;
  static const ld log_golden_phi = log(golden_phi);
  
  constexpr ld operator"" _deg(long double deg) { return deg * A_PI / 180; }
#line 35 "hyperpoint.cpp"
  /** \brief A point in our continuous space
  *
  *  Originally used for representing points in the hyperbolic plane.
  *  Currently used for all kinds of supported spaces, as well as
  *  for all vector spaces (up to 4 dimensions). We are using
  *  the normalized homogeneous coordinates, which allows us to work with most
  *  geometries in HyperRogue in a uniform way.
  
  *  In the hyperbolic plane, this is the Minkowski hyperboloid model:
  *  (x,y,z) such that x*x+y*y-z*z == -1 and z > 0.
  *
  *  In spherical geometry, we have x*x+y*y+z*z == 1.
  *
  *  In Euclidean geometry, we have z = 1.
  *
  *  In isotropic 3D geometries an extra coordinate is added.
  *
  *  In nonisotropic coordinates h[3] == 1.
  *
  *  In product geometries the 'z' coordinate is modelled by multiplying all 
  *  three coordinates with exp(z).
  *
  */
  
  struct hyperpoint : array<ld, MAXMDIM> {
  hyperpoint() {}
  
  #if MAXMDIM == 4
  constexpr hyperpoint(ld x, ld y, ld z, ld w) : array<ld, MAXMDIM> {{x,y,z,w}} {}
  #else
  constexpr hyperpoint(ld x, ld y, ld z, ld w) : array<ld, MAXMDIM> {{x,y,z}} {}
  #endif
  
  inline hyperpoint& operator *= (ld d) {
  for(int i=0; i<MXDIM; i++) selfhr[i] *= d;
  return selfhr;
  }
  
  inline hyperpoint& operator /= (ld d) { 
  for(int i=0; i<MXDIM; i++) selfhr[i] /= d;
  return selfhr;
  }
  
  inline hyperpoint& operator += (const hyperpoint h2) { 
  for(int i=0; i<MXDIM; i++) selfhr[i] += h2[i];
  return selfhr;
  }
  
  inline hyperpoint& operator -= (const hyperpoint h2) { 
  for(int i=0; i<MXDIM; i++) selfhr[i] -= h2[i];
  return selfhr;
  }
  
  inline friend hyperpoint operator * (ld d, hyperpoint h) { return h *= d; }  
  inline friend hyperpoint operator * (hyperpoint h, ld d) { return h *= d; }  
  inline friend hyperpoint operator / (hyperpoint h, ld d) { return h /= d; }  
  inline friend hyperpoint operator + (hyperpoint h, hyperpoint h2) { return h += h2; }
  inline friend hyperpoint operator - (hyperpoint h, hyperpoint h2) { return h -= h2; }
  
  inline friend hyperpoint operator - (hyperpoint h) { return h * -1; }
  
  // cross product  
  inline friend hyperpoint operator ^ (hyperpoint h1, hyperpoint h2) {
  return hyperpoint(
  h1[1] * h2[2] - h1[2] * h2[1],
  h1[2] * h2[0] - h1[0] * h2[2],
  h1[0] * h2[1] - h1[1] * h2[0],
  0
  );
  }
  
  friend ld dot_d(int c, hyperpoint h1, hyperpoint h2) {
  ld sum = 0;
  for(int i=0; i<c; i++) sum += h1[i] * h2[i];
  return sum;
  }
  
  // Euclidean inner product
  inline friend ld operator | (hyperpoint h1, hyperpoint h2) {
  return dot_d(MXDIM, h1, h2);
  }    
  };
  
  /** \brief A matrix acting on hr::hyperpoint 
  *
  *  Since we are using homogeneous coordinates for hr::hyperpoint,
  *  rotations and translations can be represented
  *  as matrix multiplications. Other applications of matrices in HyperRogue 
  *  (in dimension up to 4) are also implemented using transmatrix.
  */
  struct transmatrix {
  ld tab[MAXMDIM][MAXMDIM];
  hyperpoint& operator [] (int i) { return (hyperpoint&)tab[i][0]; }
  const hyperpoint& operator [] (int i) const { return (const hyperpoint&)tab[i]; }
  
  inline friend hyperpoint operator * (const transmatrix& T, const hyperpoint& H) {
  hyperpoint z;
  for(int i=0; i<MXDIM; i++) {
  z[i] = 0;
  for(int j=0; j<MXDIM; j++) z[i] += T[i][j] * H[j];
  }
  return z;
  }
  
  inline friend transmatrix operator * (const transmatrix& T, const transmatrix& U) {
  transmatrix R;
  for(int i=0; i<MXDIM; i++) for(int j=0; j<MXDIM; j++) {
  R[i][j] = 0;
  for(int k=0; k<MXDIM; k++)
  R[i][j] += T[i][k] * U[k][j];
  }
  return R;
  }  
  };
  
  /** @brief hyperpoint with shift 
  *  shift has two uses:
  *  (1) in the 'universal cover of SL' geometry, shift is used for the extra angular coordinate
  *  (2) in band models, shift is used to draw faraway points correctly
  */
  struct shiftpoint {
  hyperpoint h;
  ld shift;
  ld& operator [] (int i) { return h[i]; }
  const ld& operator [] (int i) const { return h[i]; }
  inline friend shiftpoint operator + (const shiftpoint& h, const hyperpoint& h2) {
  return shiftpoint{h.h+h2, h.shift};
  }
  inline friend shiftpoint operator - (const shiftpoint& h, const hyperpoint& h2) {
  return shiftpoint{h.h-h2, h.shift};
  }
  };
  
  inline shiftpoint shiftless(const hyperpoint& h, ld shift = 0) {
  shiftpoint res; res.h = h; res.shift = shift; return res;
  }
  
  struct shiftmatrix {
  transmatrix T;
  ld shift;
  hyperpoint& operator [] (int i) { return T[i]; }
  const hyperpoint& operator [] (int i) const { return T[i]; }
  inline friend shiftpoint operator * (const shiftmatrix& T, const hyperpoint& h) {
  return shiftpoint{T.T*h, T.shift};
  }
  inline friend shiftmatrix operator * (const shiftmatrix& T, const transmatrix& U) {
  return shiftmatrix{T.T*U, T.shift};
  }
  };
  
  inline shiftmatrix shiftless(const transmatrix& T, ld shift = 0) {
  shiftmatrix res; res.T = T; res.shift = shift; return res;
  }
  
  /** returns a diagonal matrix */
  constexpr transmatrix diag(ld a, ld b, ld c, ld d) {
  #if MAXMDIM==3
  return transmatrix{{{a,0,0}, {0,b,0}, {0,0,c}}};
  #else
  return transmatrix{{{a,0,0,0}, {0,b,0,0}, {0,0,c,0}, {0,0,0,d}}};
  #endif
  }
  
  constexpr hyperpoint Hypc = hyperpoint(0, 0, 0, 0);
  
  /** identity matrix */
  constexpr transmatrix Id = diag(1,1,1,1);
  
  /** zero matrix */
  constexpr transmatrix Zero = diag(0,0,0,0);
  
  /** a transmatrix with 2D and 3D version, useful for configuration */
  struct trans23 {
  transmatrix v2, v3;
  transmatrix& get() { return MDIM == 3 ? v2 : v3; }
  const transmatrix& get() const { return MDIM == 3 ? v2 : v3; }
  trans23() { v2 = Id; v3 = Id; }
  trans23(const transmatrix& T) { v2 = T; v3 = T; }
  trans23(const transmatrix& T2, const transmatrix& T3) { v2 = T2; v3 = T3; }
  bool operator == (const trans23& b) const;
  bool operator != (const trans23& b) const { return !(selfhr == b); }
  trans23 operator * (trans23 T) {
  trans23 t;
  auto& dim = cginf.g.homogeneous_dimension;
  dynamicval<int> d1(dim, dim);
  dim = 3; t.v2 = v2 * T.v2;
  dim = 4; t.v3 = v3 * T.v3;
  return t;
  }
  friend trans23 operator * (transmatrix M, trans23 T) {
  trans23 t(M);
  return t * T;
  }
  };
  
  /** mirror image */
  constexpr transmatrix Mirror = diag(1,-1,1,1);
  
  /** mirror image: flip in the Y coordinate */
  constexpr transmatrix MirrorY = diag(1,-1,1,1);
  
  /** mirror image: flip in the X coordinate */
  constexpr transmatrix MirrorX = diag(-1,1,1,1);
  
  /** mirror image: flip in the Z coordinate */
  constexpr transmatrix MirrorZ = diag(1,1,-1,1);
  
  /** rotate by PI in the XY plane */
  constexpr transmatrix pispin = diag(-1,-1,1,1);
  
  /** central symmetry matrix */
  constexpr transmatrix centralsym = diag(-1,-1,-1,-1);
  
  inline hyperpoint hpxyz(ld x, ld y, ld z) { return MDIM == 3 ? hyperpoint(x,y,z,0) : hyperpoint(x,y,0,z); }
  inline hyperpoint hpxyz3(ld x, ld y, ld z, ld w) { return MDIM == 3 ? hyperpoint(x,y,w,0) : hyperpoint(x,y,z,w); }
  constexpr hyperpoint point3(ld x, ld y, ld z) { return hyperpoint(x,y,z,0); }
  constexpr hyperpoint point30(ld x, ld y, ld z) { return hyperpoint(x,y,z,0); }
  constexpr hyperpoint point31(ld x, ld y, ld z) { return hyperpoint(x,y,z,1); }
  constexpr hyperpoint point2(ld x, ld y) { return hyperpoint(x,y,0,0); }
  
  constexpr hyperpoint C02 = hyperpoint(0,0,1,0);
  constexpr hyperpoint C03 = hyperpoint(0,0,0,1);
  
  /** C0 is the origin in our space */
  #define C0 (MDIM == 3 ? C02 : C03)
#line 267 "hyperpoint.cpp"
  ld squar(ld x);
#line 269 "hyperpoint.cpp"
  int sig(int z);
#line 271 "hyperpoint.cpp"
  int curvature();
#line 281 "hyperpoint.cpp"
  ld sin_auto(ld x);
#line 292 "hyperpoint.cpp"
  ld asin_auto(ld x);
#line 303 "hyperpoint.cpp"
  ld acos_auto(ld x);
#line 314 "hyperpoint.cpp"
  ld volume_auto(ld r);
#line 324 "hyperpoint.cpp"
  ld area_auto(ld r);
#line 334 "hyperpoint.cpp"
  ld wvolarea_auto(ld r);
#line 339 "hyperpoint.cpp"
  ld asin_clamp(ld x);
#line 341 "hyperpoint.cpp"
  ld acos_clamp(ld x);
#line 343 "hyperpoint.cpp"
  ld asin_auto_clamp(ld x);
#line 354 "hyperpoint.cpp"
  ld acos_auto_clamp(ld x);
#line 364 "hyperpoint.cpp"
  ld cos_auto(ld x);
#line 375 "hyperpoint.cpp"
  ld tan_auto(ld x);
#line 386 "hyperpoint.cpp"
  ld atan_auto(ld x);
#line 397 "hyperpoint.cpp"
  ld atan2_auto(ld y, ld x);
#line 411 "hyperpoint.cpp"
  ld edge_of_triangle_with_angles(ld alpha, ld beta, ld gamma);
#line 415 "hyperpoint.cpp"
  hyperpoint hpxy(ld x, ld y);
#line 427 "hyperpoint.cpp"
  hyperpoint hpxy3(ld x, ld y, ld z);
#line 432 "hyperpoint.cpp"
  // a point (I hope this number needs no comments ;) )
  constexpr hyperpoint Cx12 = hyperpoint(1,0,1.41421356237,0);
  constexpr hyperpoint Cx13 = hyperpoint(1,0,0,1.41421356237);
  
  #define Cx1 (GDIM==2?Cx12:Cx13)
#line 439 "hyperpoint.cpp"
  bool zero_d(int d, hyperpoint h);
#line 450 "hyperpoint.cpp"
  ld intval(const hyperpoint &h1, const hyperpoint &h2);
#line 461 "hyperpoint.cpp"
  ld quickdist(const hyperpoint &h1, const hyperpoint &h2);
#line 467 "hyperpoint.cpp"
  ld sqhypot_d(int d, const hyperpoint& h);
#line 474 "hyperpoint.cpp"
  ld hypot_d(int d, const hyperpoint& h);
#line 481 "hyperpoint.cpp"
  transmatrix to_other_side(hyperpoint h1, hyperpoint h2);
#line 518 "hyperpoint.cpp"
  ld material(const hyperpoint& h);
#line 527 "hyperpoint.cpp"
  int safe_classify_ideals(hyperpoint h);
#line 538 "hyperpoint.cpp"
  extern ld ideal_limit;
#line 539 "hyperpoint.cpp"
  extern ld ideal_each;
#line 541 "hyperpoint.cpp"
  hyperpoint safe_approximation_of_ideal(hyperpoint h);
#line 546 "hyperpoint.cpp"
  hyperpoint closest_to_zero(hyperpoint a, hyperpoint b);
#line 562 "hyperpoint.cpp"
  ld zlevel(const hyperpoint &h);
#line 571 "hyperpoint.cpp"
  ld hypot_auto(ld x, ld y);
#line 585 "hyperpoint.cpp"
  hyperpoint normalize(hyperpoint H);
#line 593 "hyperpoint.cpp"
  hyperpoint ultra_normalize(hyperpoint H);
#line 601 "hyperpoint.cpp"
  hyperpoint mid(const hyperpoint& H1, const hyperpoint& H2);
#line 612 "hyperpoint.cpp"
  shiftpoint mid(const shiftpoint& H1, const shiftpoint& H2);
#line 617 "hyperpoint.cpp"
  hyperpoint midz(const hyperpoint& H1, const hyperpoint& H2);
#line 633 "hyperpoint.cpp"
  transmatrix cspin(int a, int b, ld alpha);
#line 640 "hyperpoint.cpp"
  transmatrix lorentz(int a, int b, ld v);
#line 648 "hyperpoint.cpp"
  transmatrix cspin90(int a, int b);
#line 656 "hyperpoint.cpp"
  transmatrix cspin180(int a, int b);
#line 662 "hyperpoint.cpp"
  transmatrix random_spin3();
#line 669 "hyperpoint.cpp"
  transmatrix random_spin();
#line 674 "hyperpoint.cpp"
  transmatrix eupush(ld x, ld y);
#line 681 "hyperpoint.cpp"
  transmatrix euclidean_translate(ld x, ld y, ld z);
#line 689 "hyperpoint.cpp"
  transmatrix euscale(ld x, ld y);
#line 696 "hyperpoint.cpp"
  transmatrix euscale3(ld x, ld y, ld z);
#line 704 "hyperpoint.cpp"
  transmatrix eupush(hyperpoint h, ld co IS(1));
#line 712 "hyperpoint.cpp"
  transmatrix eupush3(ld x, ld y, ld z);
#line 717 "hyperpoint.cpp"
  transmatrix euscalezoom(hyperpoint h);
#line 726 "hyperpoint.cpp"
  transmatrix euaffine(hyperpoint h);
#line 733 "hyperpoint.cpp"
  transmatrix cpush(int cid, ld alpha);
#line 745 "hyperpoint.cpp"
  transmatrix cmirror(int cid);
#line 752 "hyperpoint.cpp"
  transmatrix xpush(ld alpha);
#line 754 "hyperpoint.cpp"
  bool eqmatrix(transmatrix A, transmatrix B, ld eps IS(.01));
#line 763 "hyperpoint.cpp"
  transmatrix ypush(ld alpha);
#line 765 "hyperpoint.cpp"
  transmatrix zpush(ld z);
#line 767 "hyperpoint.cpp"
  transmatrix matrix3(ld a, ld b, ld c, ld d, ld e, ld f, ld g, ld h, ld i);
#line 778 "hyperpoint.cpp"
  transmatrix matrix4(ld a, ld b, ld c, ld d, ld e, ld f, ld g, ld h, ld i, ld j, ld k, ld l, ld m, ld n, ld o, ld p);
#line 786 "hyperpoint.cpp"
  transmatrix parabolic1(ld u);
#line 802 "hyperpoint.cpp"
  transmatrix parabolic13(ld u, ld v);
#line 825 "hyperpoint.cpp"
  hyperpoint kleinize(hyperpoint h);
#line 834 "hyperpoint.cpp"
  hyperpoint deparabolic13(hyperpoint h);
#line 850 "hyperpoint.cpp"
  hyperpoint parabolic13(hyperpoint h);
#line 861 "hyperpoint.cpp"
  transmatrix parabolic13_at(hyperpoint h);
#line 872 "hyperpoint.cpp"
  transmatrix spintoc(const hyperpoint& H, int t, int f);
#line 886 "hyperpoint.cpp"
  transmatrix rspintoc(const hyperpoint& H, int t, int f);
#line 899 "hyperpoint.cpp"
  transmatrix spintox(const hyperpoint& H);
#line 907 "hyperpoint.cpp"
  transmatrix rspintox(const hyperpoint& H);
#line 917 "hyperpoint.cpp"
  transmatrix pushxto0(const hyperpoint& H);
#line 925 "hyperpoint.cpp"
  void set_column(transmatrix& T, int i, const hyperpoint& H);
#line 930 "hyperpoint.cpp"
  hyperpoint get_column(transmatrix& T, int i);
#line 938 "hyperpoint.cpp"
  transmatrix build_matrix(hyperpoint h1, hyperpoint h2, hyperpoint h3, hyperpoint h4);
#line 953 "hyperpoint.cpp"
  transmatrix rpushxto0(const hyperpoint& H);
#line 960 "hyperpoint.cpp"
  transmatrix ggpushxto0(const hyperpoint& H, ld co);
#line 983 "hyperpoint.cpp"
  transmatrix gpushxto0(const hyperpoint& H);
#line 988 "hyperpoint.cpp"
  transmatrix rgpushxto0(const hyperpoint& H);
#line 992 "hyperpoint.cpp"
  shiftmatrix rgpushxto0(const shiftpoint& H);
#line 1003 "hyperpoint.cpp"
  void fixmatrix(transmatrix& T);
#line 1018 "hyperpoint.cpp"
  void fixmatrix_euclid(transmatrix& T);
#line 1031 "hyperpoint.cpp"
  void orthonormalize(transmatrix& T);
#line 1043 "hyperpoint.cpp"
  void fix_rotation(transmatrix& rot);
#line 1050 "hyperpoint.cpp"
  ld det2(const transmatrix& T);
#line 1055 "hyperpoint.cpp"
  ld det3(const transmatrix& T);
#line 1065 "hyperpoint.cpp"
  ld det(const transmatrix& T);
#line 1097 "hyperpoint.cpp"
  transmatrix inverse3(const transmatrix& T);
#line 1112 "hyperpoint.cpp"
  transmatrix inverse(const transmatrix& T);
#line 1152 "hyperpoint.cpp"
  transmatrix ortho_inverse(transmatrix T);
#line 1160 "hyperpoint.cpp"
  transmatrix pseudo_ortho_inverse(transmatrix T);
#line 1171 "hyperpoint.cpp"
  transmatrix iso_inverse(const transmatrix& T);
#line 1197 "hyperpoint.cpp"
  transmatrix rot_inverse(const transmatrix& T);
#line 1202 "hyperpoint.cpp"
  trans23 rot_inverse(const trans23& T);
#line 1207 "hyperpoint.cpp"
  transmatrix z_inverse(const transmatrix& T);
#line 1212 "hyperpoint.cpp"
  transmatrix view_inverse(transmatrix T);
#line 1219 "hyperpoint.cpp"
  transmatrix iview_inverse(transmatrix T);
#line 1225 "hyperpoint.cpp"
  pair<ld, hyperpoint> product_decompose(hyperpoint h);
#line 1231 "hyperpoint.cpp"
  ld hdist0(const hyperpoint& mh);
#line 1263 "hyperpoint.cpp"
  ld hdist0(const shiftpoint& mh);
#line 1268 "hyperpoint.cpp"
  ld circlelength(ld r);
#line 1282 "hyperpoint.cpp"
  ld hdist(const hyperpoint& h1, const hyperpoint& h2);
#line 1306 "hyperpoint.cpp"
  ld hdist(const shiftpoint& h1, const shiftpoint& h2);
#line 1311 "hyperpoint.cpp"
  hyperpoint orthogonal_move_fol(const hyperpoint& h, double fol);
#line 1317 "hyperpoint.cpp"
  transmatrix orthogonal_move_fol(const transmatrix& T, double fol);
#line 1323 "hyperpoint.cpp"
  shiftmatrix orthogonal_move_fol(const shiftmatrix& T, double fol);
#line 1329 "hyperpoint.cpp"
  transmatrix scale_matrix(const transmatrix& t, ld scale_factor);
#line 1341 "hyperpoint.cpp"
  shiftmatrix scale_matrix(const shiftmatrix& t, ld scale_factor);
#line 1346 "hyperpoint.cpp"
  hyperpoint scale_point(const hyperpoint& h, ld scale_factor);
#line 1355 "hyperpoint.cpp"
  transmatrix orthogonal_move(const transmatrix& t, double level);
#line 1360 "hyperpoint.cpp"
  shiftmatrix orthogonal_move(const shiftmatrix& t, double level);
#line 1365 "hyperpoint.cpp"
  void fix4(transmatrix& t);
#line 1373 "hyperpoint.cpp"
  transmatrix fix4_f(transmatrix t);
#line 1375 "hyperpoint.cpp"
  transmatrix xyscale(const transmatrix& t, double fac);
#line 1386 "hyperpoint.cpp"
  transmatrix xyzscale(const transmatrix& t, double fac, double facz);
#line 1399 "hyperpoint.cpp"
  shiftmatrix xyzscale(const shiftmatrix& t, double fac, double facz);
#line 1403 "hyperpoint.cpp"
  transmatrix mzscale(const transmatrix& t, double fac);
#line 1417 "hyperpoint.cpp"
  shiftmatrix mzscale(const shiftmatrix& t, double fac);
#line 1421 "hyperpoint.cpp"
  hyperpoint mid3(hyperpoint h1, hyperpoint h2, hyperpoint h3);
#line 1425 "hyperpoint.cpp"
  hyperpoint mid_at(hyperpoint h1, hyperpoint h2, ld v);
#line 1430 "hyperpoint.cpp"
  hyperpoint mid_at_actual(hyperpoint h, ld v);
  #if MAXMDIM >= 4
#line 1436 "hyperpoint.cpp"
  hyperpoint orthogonal_of_C0(hyperpoint h0, hyperpoint h1, hyperpoint h2);
  #endif
#line 1451 "hyperpoint.cpp"
  hyperpoint hpxd(ld d, ld x, ld y, ld z);
#line 1457 "hyperpoint.cpp"
  ld signum(ld x);
#line 1459 "hyperpoint.cpp"
  bool asign(ld y1, ld y2);
#line 1461 "hyperpoint.cpp"
  ld xcross(ld x1, ld y1, ld x2, ld y2);
#line 1464 "hyperpoint.cpp"
  enum eShiftMethod { smProduct, smIsotropic, smEmbedded, smLie, smGeodesic };
  enum eEmbeddedShiftMethodChoice { smcNone, smcBoth, smcAuto };
  enum eShiftMethodApplication { smaManualCamera, smaAutocenter, smaObject, smaWallRadar, smaAnimation };
#line 1469 "hyperpoint.cpp"
  extern eEmbeddedShiftMethodChoice embedded_shift_method_choice;
#line 1471 "hyperpoint.cpp"
  bool use_embedded_shift(eShiftMethodApplication sma);
#line 1481 "hyperpoint.cpp"
  eShiftMethod shift_method(eShiftMethodApplication sma);
#line 1490 "hyperpoint.cpp"
  transmatrix shift_object(transmatrix Position, const transmatrix& ori, const hyperpoint direction, eShiftMethod sm IS(shift_method(smaObject)));
#line 1531 "hyperpoint.cpp"
  void apply_shift_object(transmatrix& Position, const transmatrix orientation, const hyperpoint direction, eShiftMethod sm IS(shift_method(smaObject)));
#line 1535 "hyperpoint.cpp"
  void rotate_object(transmatrix& Position, transmatrix& orientation, transmatrix R);
#line 1541 "hyperpoint.cpp"
  transmatrix spin_towards(const transmatrix Position, transmatrix& ori, const hyperpoint goal, int dir, int back);
#line 1565 "hyperpoint.cpp"
  shiftmatrix spin_towards(const shiftmatrix Position, transmatrix& ori, const shiftpoint goal, int dir, int back);
#line 1569 "hyperpoint.cpp"
  ld ortho_error(transmatrix T);
#line 1584 "hyperpoint.cpp"
  transmatrix transpose(transmatrix T);
#line 1593 "hyperpoint.cpp"
  namespace slr { 
  hyperpoint xyz_point(ld x, ld y, ld z); 
  hyperpoint polar(ld r, ld theta, ld phi); 
  }
  
  inline hyperpoint cpush0(int c, ld x) { 
  hyperpoint h = Hypc;
  if(sl2) return slr::xyz_point(c==0?x:0, c==1?x:0, c==2?x:0);
  if(c == 2 && gproduct) {
  h[2] = exp(x);
  return h;
  }
  h[LDIM] = cos_auto(x);
  h[c] = sin_auto(x);
  return h;
  }
  
  inline hyperpoint xpush0(ld x) { return cpush0(0, x); }
  inline hyperpoint ypush0(ld x) { return cpush0(1, x); }
  inline hyperpoint zpush0(ld x) { return cpush0(2, x); }
  
  /** T * C0, optimized */
  inline hyperpoint tC0(const transmatrix &T) {
  hyperpoint z;
  for(int i=0; i<MXDIM; i++) z[i] = T[i][LDIM];
  return z;
  }
  
  inline hyperpoint tC0_t(const transmatrix &T) { return tC0(T); }
  
  inline shiftpoint tC0(const shiftmatrix &T) {
  return shiftpoint{tC0(T.T), T.shift};
  }
#line 1629 "hyperpoint.cpp"
  hyperpoint ctangent(int c, ld x);
#line 1632 "hyperpoint.cpp"
  hyperpoint xtangent(ld x);
#line 1635 "hyperpoint.cpp"
  hyperpoint ztangent(ld z);
#line 1638 "hyperpoint.cpp"
  hyperpoint tangent_length(hyperpoint dir, ld length);
#line 1645 "hyperpoint.cpp"
  hyperpoint direct_exp(hyperpoint v);
#line 1661 "hyperpoint.cpp"
  constexpr flagtype pfNO_INTERPOLATION = 1; /**< in tables (sol/nih geometries), do not use interpolations */
  constexpr flagtype pfNO_DISTANCE      = 2; /**< we just need the directions -- this makes it a bit faster in sol/nih geometries */
  constexpr flagtype pfLOW_BS_ITER      = 4; /**< low iterations in binary search (nil geometry, sl2 not affected currently) */
  
  constexpr flagtype pQUICK     = pfNO_INTERPOLATION | pfLOW_BS_ITER;
  
  constexpr flagtype pNORMAL    = 0;
#line 1671 "hyperpoint.cpp"
  hyperpoint inverse_exp(const shiftpoint h, flagtype prec IS(pNORMAL));
#line 1693 "hyperpoint.cpp"
  hyperpoint inverse_exp_newton(hyperpoint h, int iter);
#line 1708 "hyperpoint.cpp"
  ld geo_dist(const hyperpoint h1, const hyperpoint h2, flagtype prec IS(pNORMAL));
#line 1713 "hyperpoint.cpp"
  ld geo_dist(const shiftpoint h1, const shiftpoint h2, flagtype prec IS(pNORMAL));
#line 1718 "hyperpoint.cpp"
  ld geo_dist_q(const hyperpoint h1, const hyperpoint h2, flagtype prec IS(pNORMAL));
#line 1724 "hyperpoint.cpp"
  hyperpoint lp_iapply(const hyperpoint h);
#line 1728 "hyperpoint.cpp"
  hyperpoint lp_apply(const hyperpoint h);
#line 1732 "hyperpoint.cpp"
  hyperpoint smalltangent();
#line 1734 "hyperpoint.cpp"
  void cyclefix(ld& a, ld b);
#line 1739 "hyperpoint.cpp"
  ld raddif(ld a, ld b);
#line 1747 "hyperpoint.cpp"
  extern int bucket_scale;
#line 1749 "hyperpoint.cpp"
  unsigned bucketer(ld x);
#line 1753 "hyperpoint.cpp"
  unsigned bucketer(hyperpoint h);
  #if MAXMDIM >= 4
#line 1769 "hyperpoint.cpp"
  hyperpoint project_on_triangle(hyperpoint h1, hyperpoint h2, hyperpoint h3);
  #endif
#line 1786 "hyperpoint.cpp"
  hyperpoint lerp(hyperpoint a0, hyperpoint a1, ld x);
#line 1790 "hyperpoint.cpp"
  hyperpoint linecross(hyperpoint a, hyperpoint b, hyperpoint c, hyperpoint d);
#line 1812 "hyperpoint.cpp"
  ld inner2(hyperpoint h1, hyperpoint h2);
#line 1819 "hyperpoint.cpp"
  hyperpoint circumscribe(hyperpoint a, hyperpoint b, hyperpoint c);
#line 1868 "hyperpoint.cpp"
  ld inner3(hyperpoint h1, hyperpoint h2);
  #if MAXMDIM >= 4
#line 1877 "hyperpoint.cpp"
  hyperpoint circumscribe(hyperpoint a, hyperpoint b, hyperpoint c, hyperpoint d);
  #endif
#line 1908 "hyperpoint.cpp"
  hyperpoint towards_inf(hyperpoint material, hyperpoint dir, ld dist IS(1));
#line 1914 "hyperpoint.cpp"
  bool clockwise(hyperpoint h1, hyperpoint h2);
#line 1918 "hyperpoint.cpp"
  extern ld worst_precision_error;
#line 1921 "hyperpoint.cpp"
  struct hr_precision_error : hr_exception { hr_precision_error() : hr_exception("precision error") {} };
#line 1925 "hyperpoint.cpp"
  bool same_point_may_warn(hyperpoint a, hyperpoint b);

  // implemented in: geometry.cpp

#line 12 "geometry.cpp"
  struct usershapelayer {
  vector<hyperpoint> list;
  bool sym;
  int rots;
  color_t color;
  hyperpoint shift, spin;
  ld zlevel;
  int texture_offset;
  PPR prio;
  };
  
  extern int usershape_changes;
  
  static constexpr int USERLAYERS = 32;
  
  struct usershape { usershapelayer d[USERLAYERS]; };
  
  struct hpcshape {
  int s, e;
  PPR prio;
  int flags;
  hyperpoint intester;
  struct basic_textureinfo *tinf;
  int texture_offset;
  int shs, she;
  void clear() { s = e = shs = she = texture_offset = 0; prio = PPR::ZERO; tinf = NULL; flags = 0; }
  hpcshape() { clear(); }
  };
  
  #define SIDE_SLEV 0
  #define SIDE_WTS3 3
  #define SIDE_WALL 4
  #define SIDE_LAKE 5
  #define SIDE_LTOB 6
  #define SIDE_BTOI 7
  #define SIDE_SKY  8
  #define SIDE_HIGH 9
  #define SIDE_HIGH2 10
  #define SIDE_ASHA 11
  #define SIDE_BSHA 12
  #define SIDEPARS  13
  
  /** GOLDBERG_BITS controls the size of tables for Goldberg. see gp::check_limits */
  
  #ifndef GOLDBERG_BITS
  #define GOLDBERG_BITS 5
  #endif
  
  static constexpr int GOLDBERG_LIMIT = (1<<GOLDBERG_BITS);
  static constexpr int GOLDBERG_MASK = (GOLDBERG_LIMIT-1);
  
  #ifndef BADMODEL
  #define BADMODEL 0
  #endif
  
  #ifndef WINGS
  static constexpr int WINGS = (BADMODEL ? 1 : 4);
  #endif
  
  typedef array<hpcshape, WINGS+1> hpcshape_animated;
  
  extern vector<hpcshape> shPlainWall3D, shWireframe3D, shWall3D, shMiniWall3D;
  
  struct floorshape {
  bool is_plain;
  int shapeid;
  int id;
  int pstrength; // pattern strength in 3D
  int fstrength; // frame strength in 3D
  PPR prio;
  vector<hpcshape> b, shadow, side[SIDEPARS], levels[SIDEPARS], cone[2];
  vector<vector<hpcshape>> gpside[SIDEPARS];
  floorshape() { prio = PPR::FLOOR; pstrength = fstrength = 10; }
  };
  
  struct plain_floorshape : floorshape {
  ld rad0, rad1;
  void configure(ld r0, ld r1) { rad0 = r0; rad1 = r1; }
  };
  
  extern vector<ld> equal_weights;
  
  // noftype: 0 (shapeid2 is heptagonal or just use shapeid1), 1 (shapeid2 is pure heptagonal), 2 (shapeid2 is Euclidean), 3 (shapeid2 is hexagonal)
  struct escher_floorshape : floorshape {
  int shapeid0, shapeid1, noftype, shapeid2;
  ld scale;
  };
  
  struct basic_textureinfo {
  int texture_id;
  vector<glvertex> tvertices; 
  vector<glvertex> colors; 
  };
  
  /** additional modules can add extra shapes etc. */
  struct gi_extension {
  virtual ~gi_extension() {}
  };
  
  struct expansion_analyzer;
  
  /** both for 'heptagon' 3D cells and subdivided 3D cells */
  struct subcellshape {
  /** \brief raw coordinates of vertices of all faces */
  vector<vector<hyperpoint>> faces;
  /** \brief raw coordinates of all vertices in one vector */
  vector<hyperpoint> vertices_only;
  /** \brief cooked coordinates of vertices of all faces, computed from faces as: from_cellcenter * final_coords(v) */
  vector<vector<hyperpoint>> faces_local;
  /** \brief cooked coordinates of all vertices in one vector */
  vector<hyperpoint> vertices_only_local;
  /** \brief weights -- used to generate wall shapes in some geometries, empty otherwise */
  vector<vector<double>> weights;
  /** the center of every raw face */
  vector<hyperpoint> face_centers;
  vector<vector<char>> dirdist;
  hyperpoint cellcenter;
  transmatrix to_cellcenter;
  transmatrix from_cellcenter;
  /** \brief for adjacent directions a,b, next_dir[a][b] is the next direction adjacent to a, in (counter?)clockwise order from b */
  vector<vector<char>> next_dir;
  /** useful in product geometries */
  vector<hyperpoint> walltester;
  
  /** compute all the properties based on `faces`, for the main heptagon cellshape */
  void compute_hept();
  
  /** compute all the properties based on `faces`, for subcells */
  void compute_sub();
  
  /** common part of compute_hept and compute_sub */
  void compute_common();
  };
  
  enum class ePipeEnd {sharp, ball};
  
  struct embedding_method;
  
  /** basic geometry parameters */
  struct geometry_information {
  
  /** distance from heptagon center to another heptagon center */
  ld tessf;
  
  /** distance from heptagon center to adjacent cell center (either hcrossf or tessf) */
  ld crossf;
  
  /** distance from heptagon center to small heptagon vertex */
  ld hexf;
  
  /** distance from heptagon center to big heptagon vertex */
  ld hcrossf;
  
  /** distance between adjacent hexagon vertices */
  ld hexhexdist;
  
  /** distance between hexagon vertex and hexagon center */
  ld hexvdist;
  
  /** distance between heptagon vertex and hexagon center (either hcrossf or something else) */
  ld hepvdist;
  
  /** distance from heptagon center to heptagon vertex (either hexf or hcrossf) */
  ld rhexf;
  
  /** edge length */
  ld edgelen;
  
  /** basic parameters for 3D geometries */
  map<int, int> close_distances;
  
  int loop, face, schmid;
  
  transmatrix spins[32], adjmoves[32];
  
  unique_ptr<struct subcellshape> heptshape;  
  vector<struct subcellshape> subshapes;
  
  ld adjcheck;
  ld strafedist;
  
  ld ultra_mirror_dist, ultra_material_part, ultra_mirror_part;
  
  vector<transmatrix> ultra_mirrors;  
  
  int xp_order, r_order, rx_order;
  
  transmatrix full_X, full_R, full_P;
  
  /** for 2D geometries */
  vector<transmatrix> heptmove, hexmove, invhexmove;
  
  int base_distlimit;
  
  unique_ptr<embedding_method> emb;
  
  /** size of the Sword (from Orb of the Sword), used in the shmup mode */
  ld sword_size;
  /** scale factor for the graphics of most things*/
  ld scalefactor;
  ld orbsize, floorrad0, floorrad1, zhexf;
  ld corner_bonus;
  ld hexshift;
  ld asteroid_size[8];
  ld wormscale;
  ld tentacle_length;
  /** level in product geometries */
  ld plevel;
  /** level for a z-step */
  int single_step;
  /** the number of levels in PSL */
  int psl_steps;
  
  /** for binary tilings */
  transmatrix direct_tmatrix[14];
  transmatrix inverse_tmatrix[14];
  
  /** a bitmask for hr::bt::use_direct_for */  
  int use_direct;
  
  /** various parameters related to the 3D view */
  ld INFDEEP, BOTTOM, HELLSPIKE, LAKE, WALL, FLOOR, STUFF,
  SLEV[4], FLATEYE,
  LEG0, LEG1, LEG, LEG3, GROIN, GROIN1, GHOST,
  BODY, BODY1, BODY2, BODY3,
  NECK1, NECK, NECK3, HEAD, HEAD1, HEAD2, HEAD3,
  ALEG0, ALEG, ABODY, AHEAD, BIRD, LOWSKY, SKY, HIGH, HIGH2,
  HELL, STAR, SHALLOW;
  ld human_height, slev;
  
  ld eyelevel_familiar, eyelevel_human, eyelevel_dog;
  
  #if CAP_SHAPES
  hpcshape 
  shSemiFloorSide[SIDEPARS],
  shBFloor[2],
  shWave[8][2],  
  shCircleFloor,
  shBarrel,
  shWall[2], shMineMark[2], shBigMineMark[2], shFan,
  shZebra[5],
  shSwitchDisk,
  shTower[11],
  shEmeraldFloor[6],
  shSemiFeatherFloor[2], 
  shSemiFloor[2], shSemiBFloor[2], shSemiFloorShadow,
  shMercuryBridge[2],
  shTriheptaSpecial[14], 
  shCross, shGiantStar[2], shLake, shMirror,
  shHalfFloor[6], shHalfMirror[3],
  shGem[2], shStar, shFlash, shDisk, shHalfDisk, shDiskT, shDiskS, shDiskM, shDiskSq, shEccentricDisk, shDiskSegment,
  shHeptagon, shHeptagram,
  shTinyBird, shTinyShark,
  shEgg, shSmallEgg,
  shRing, shSpikedRing, shTargetRing, shSawRing, shGearRing, shPeaceRing,
  shHeptaRing, shSpearRing, shLoveRing, shFrogRing,
  shPowerGearRing, shProtectiveRing, shTerraRing, shMoveRing,
  shReserved4, shMoonDisk,
  shDaisy, shSnowflake, shTriangle, shNecro, shStatue, shKey, shWindArrow,
  shGun,
  shFigurine, shTreat, shSmallTreat,
  shElementalShard,
  // shBranch, 
  shIBranch, shTentacle, shTentacleX, shILeaf[3], 
  shMovestar,
  shWolf, shYeti, shDemon, shGDemon, shEagle, shGargoyleWings, shGargoyleBody,
  shFoxTail1, shFoxTail2,
  shDogBody, shDogHead, shDogFrontLeg, shDogRearLeg, shDogFrontPaw, shDogRearPaw,
  shDogTorso,
  shHawk,
  shCatBody, shCatLegs, shCatHead, shFamiliarHead, shFamiliarEye,
  shWolf1, shWolf2, shWolf3,
  shRatEye1, shRatEye2, shRatEye3,
  shDogStripes,
  shPBody, shSmallPBody, shPSword, shSmallPSword, shPKnife,
  shFerocityM, shFerocityF, 
  shHumanFoot, shHumanLeg, shHumanGroin, shHumanNeck, shSkeletalFoot, shYetiFoot,
  shMagicSword, shSmallSword, shMagicShovel, shSeaTentacle, shKrakenHead, shKrakenEye, shKrakenEye2,
  shArrow,
  shPHead, shPFace, shGolemhead, shHood, shArmor, 
  shAztecHead, shAztecCap,
  shSabre, shTurban1, shTurban2, shVikingHelmet, shRaiderHelmet, shRaiderArmor, shRaiderBody, shRaiderShirt,
  shWestHat1, shWestHat2, shGunInHand,
  shKnightArmor, shKnightCloak, shWightCloak,
  shGhost, shEyes, shSlime, shJelly, shJoint, shWormHead, shSmallWormHead, shTentHead, shShark, shWormSegment, shSmallWormSegment, shWormTail, shSmallWormTail,
  shSlimeEyes, shDragonEyes, shSmallDragonEyes, shWormEyes, shSmallWormEyes, shGhostEyes,
  shMiniGhost, shSmallEyes, shMiniEyes,
  shHedgehogBlade, shSmallHedgehogBlade, shHedgehogBladePlayer,
  shWolfBody, shWolfHead, shWolfLegs, shWolfEyes,
  shWolfFrontLeg, shWolfRearLeg, shWolfFrontPaw, shWolfRearPaw,
  shFemaleBody, shFemaleHair, shFemaleDress, shWitchDress,
  shWitchHair, shBeautyHair, shFlowerHair, shFlowerHand, shSuspenders, shTrophy,
  shBugBody, shBugArmor, shBugLeg, shBugAntenna,
  shPickAxe, shSmallPickAxe, shPike, shFlailBall, shSmallFlailBall, shFlailTrunk, shSmallFlailTrunk, shFlailChain, shHammerHead, shSmallHammerHead,
  shBook, shBookCover, shGrail,
  shBoatOuter, shBoatInner, shCompass1, shCompass2, shCompass3,
  shKnife, shTongue, shFlailMissile, shTrapArrow,
  shPirateHook, shSmallPirateHook, shPirateHood, shEyepatch, shPirateX,
  // shScratch, 
  shHeptaMarker, shSnowball, shHugeDisk, shSkyboxSun, shSun, shNightStar, shEuclideanSky,
  shSkeletonBody, shSkull, shSkullEyes, shFatBody, shWaterElemental,
  shPalaceGate, shFishTail,
  shMouse, shMouseLegs, shMouseEyes,
  shPrincessDress, shPrinceDress,
  shWizardCape1, shWizardCape2,
  shBigCarpet1, shBigCarpet2, shBigCarpet3,
  shGoatHead, shRose, shRoseItem, shSmallRose, shThorns,
  shRatHead, shRatTail, shRatEyes, shRatCape1, shRatCape2,
  shWizardHat1, shWizardHat2,
  shTortoise[13][6],
  shDragonLegs, shDragonTail, shDragonHead, shSmallDragonHead, shDragonSegment, shDragonNostril, shSmallDragonNostril,
  shDragonWings, 
  shSolidBranch, shWeakBranch, shBead0, shBead1,
  shBatWings, shBatBody, shBatMouth, shBatFang, shBatEye,
  shParticle[16], shAsteroid[8],
  shReptile[5][4],
  shReptileBody, shReptileHead, shReptileFrontFoot, shReptileRearFoot,
  shReptileFrontLeg, shReptileRearLeg, shReptileTail, shReptileEye,
  
  shTrylobite, shTrylobiteHead, shTrylobiteBody,
  shTrylobiteFrontLeg, shTrylobiteRearLeg, shTrylobiteFrontClaw, shTrylobiteRearClaw,
  
  shBullBody, shBullHead, shBullHorn, shBullRearHoof, shBullFrontHoof,
  shSmallBullHead, shSmallBullHorn,
  shTinyBullHead, shTinyBullHorn, shTinyBullBody,
  
  shButterflyBody, shButterflyWing, shGadflyBody, shGadflyWing, shGadflyEye,
  
  shTerraArmor1, shTerraArmor2, shTerraArmor3, shTerraHead, shTerraFace, 
  shJiangShi, shJiangShiDress, shJiangShiCap1, shJiangShiCap2,
  
  shPikeBody, shPikeEye,
  
  shAsymmetric,
  
  shPBodyOnly, shPBodyArm, shPBodyHand, shPHeadOnly,
  
  shDodeca, shSmallerDodeca,
  
  shLightningBolt, shHumanoid, shHalfHumanoid, shHourglass,
  shShield, shSmallFan, shTreeIcon, shLeafIcon;
  
  hpcshape shFrogRearFoot, shFrogFrontFoot, shFrogRearLeg, shFrogFrontLeg, shFrogRearLeg2, shFrogBody, shFrogEye, shFrogStripe, shFrogJumpFoot, shFrogJumpLeg, shSmallFrogRearFoot, shSmallFrogFrontFoot, shSmallFrogRearLeg, shSmallFrogFrontLeg, shSmallFrogRearLeg2, shSmallFrogBody;
  
  hpcshape_animated 
  shAnimatedEagle, shAnimatedTinyEagle, shAnimatedGadfly, shAnimatedHawk, shAnimatedButterfly, 
  shAnimatedGargoyle, shAnimatedGargoyle2, shAnimatedBat, shAnimatedBat2;
  
  hpcshape shTinyArrow;
  
  hpcshape shCrossbow, shCrossbowBolt, shCrossbowstringLoaded, shCrossbowstringUnloaded, shCrossbowstringSemiloaded, shCrossbowIcon, shCrossbowstringIcon;
  
  hpcshape shReserved[16];
  
  int orb_inner_ring; //< for shDisk* shapes, the number of vertices in the inner ring
  int res1, res2;
  
  map<int, hpcshape> shPipe;
  
  vector<hpcshape> shPlainWall3D, shWireframe3D, shWall3D, shMiniWall3D;
  vector<hyperpoint> walltester;
  
  vector<int> wallstart;
  vector<transmatrix> raywall;
  
  vector<struct plain_floorshape*> all_plain_floorshapes;
  vector<struct escher_floorshape*> all_escher_floorshapes;
  
  plain_floorshape
  shFloor, 
  shMFloor, shMFloor2, shMFloor3, shMFloor4, shFullFloor,
  shBigTriangle, shTriheptaFloor, shBigHepta;
  
  escher_floorshape    
  shStarFloor, shCloudFloor, shCrossFloor, shChargedFloor,
  shSStarFloor, shOverFloor, shTriFloor, shFeatherFloor,
  shBarrowFloor, shNewFloor, shTrollFloor, shButterflyFloor,
  shLavaFloor, shLavaSeabed, shSeabed, shCloudSeabed,
  shCaveSeabed, shPalaceFloor, shDemonFloor, shCaveFloor,
  shDesertFloor, shPowerFloor, shRoseFloor, shSwitchFloor,
  shTurtleFloor, shRedRockFloor[3], shDragonFloor;
  
  ld dlow_table[SIDEPARS], dhi_table[SIDEPARS], dfloor_table[SIDEPARS];
  
  int prehpc;
  /** list of points in all shapes */
  vector<hyperpoint> hpc;
  /** what shape are we currently creating */
  hpcshape *last;
  /** is the current shape already started? first = not yet */
  bool first;
  /** starting point of the current shape, can be ultraideal */
  hyperpoint starting_point;
  /** first ideal point of the current shape */
  hyperpoint starting_ideal;
  /** last added point of the current shape, can be ultraideal */
  hyperpoint last_point;
  /** last ideal point of the current shape */
  hyperpoint last_ideal;
  
  bool validsidepar[SIDEPARS];
  
  vector<glvertex> ourshape;
  #endif
  
  hpcshape shFullCross[2];
  
  int SD3, SD6, SD7, S12, S14, S21, S28, S42, S36, S84;
  ld S_step;
  
  vector<pair<int, cell*>> walloffsets;
  
  vector<array<int, 3>> symmetriesAt;
  
  struct cellrotation_t {
  transmatrix M;
  vector<int> mapping;
  int inverse_id;
  };
  
  vector<cellrotation_t> cellrotations;  
  
  #ifndef SCALETUNER
  static constexpr
  #endif
  double bscale7 = 1, brot7 = 0, bscale6 = 1, brot6 = 0;
  
  vector<hpcshape*> allshapes;
  
  transmatrix shadowmulmatrix;
  
  map<usershapelayer*, hpcshape> ushr;
  
  void prepare_basics();
  void prepare_compute3();
  void prepare_shapes();
  void prepare_usershapes();
  
  void hpcpush(hyperpoint h);
  void hpc_connect_ideal(hyperpoint a, hyperpoint b);
  void hpcsquare(hyperpoint h1, hyperpoint h2, hyperpoint h3, hyperpoint h4);
  void chasmifyPoly(double fac, double fac2, int k);
  void shift(hpcshape& sh, double dx, double dy, double dz);
  void initPolyForGL();
  void extra_vertices();
  transmatrix ddi(int a, ld x);
  void drawTentacle(hpcshape &h, ld rad, ld var, ld divby);
  hyperpoint hpxyzsc(double x, double y, double z);
  hyperpoint turtlevertex(int u, double x, double y, double z);
  
  void bshape(hpcshape& sh, PPR prio);
  void finishshape();
  void bshape(hpcshape& sh, PPR prio, double shzoom, int shapeid, double bonus = 0, flagtype flags = 0);
  
  void copyshape(hpcshape& sh, hpcshape& orig, PPR prio);
  void zoomShape(hpcshape& old, hpcshape& newsh, double factor, PPR prio);
  void pushShape(usershapelayer& ds);
  void make_sidewalls();
  void procedural_shapes();
  void make_wall(int id, const vector<hyperpoint> vertices, vector<ld> weights = equal_weights);
  
  void reserve_wall3d(int i);
  void compute_cornerbonus();
  void create_wall3d();
  void configure_floorshapes();
  
  void init_floorshapes();
  void bshape2(hpcshape& sh, PPR prio, int shapeid, struct matrixlist& m);
  void bshape_regular(floorshape &fsh, int id, int sides, ld shift, ld size, cell *model);
  void generate_floorshapes_for(int id, cell *c, int siid, int sidir);
  void generate_floorshapes();
  void make_floor_textures_here();
  void finish_apeirogon(hyperpoint center);
  
  vector<hyperpoint> get_shape(hpcshape sh);
  void add_cone(ld z0, const vector<hyperpoint>& vh, ld z1);
  void add_prism_sync(ld z0, vector<hyperpoint> vh0, ld z1, vector<hyperpoint> vh1);
  void add_prism(ld z0, vector<hyperpoint> vh0, ld z1, vector<hyperpoint> vh1);
  void shift_last(ld z);
  void shift_shape(hpcshape& sh, ld z);
  void shift_shape_orthogonally(hpcshape& sh, ld z);
  void add_texture(hpcshape& sh);
  void make_ha_3d(hpcshape& sh, bool isarmor, ld scale);
  void make_humanoid_3d(hpcshape& sh);
  void addtri(array<hyperpoint, 3> hs, int kind);
  void make_armor_3d(hpcshape& sh, int kind = 1); 
  void make_foot_3d(hpcshape& sh);
  void make_head_only();
  void make_head_3d(hpcshape& sh);
  void make_paw_3d(hpcshape& sh, hpcshape& legsh);
  void make_abody_3d(hpcshape& sh, ld tail);
  void make_ahead_3d(hpcshape& sh);
  void make_skeletal(hpcshape& sh, ld push = 0);
  void make_revolution(hpcshape& sh, int mx = 180, ld push = 0);
  void make_revolution_cut(hpcshape &sh, int each = 180, ld push = 0, ld width = 99);
  void clone_shape(hpcshape& sh, hpcshape& target);
  void animate_bird(hpcshape& orig, hpcshape_animated& animated, ld body);
  void slimetriangle(hyperpoint a, hyperpoint b, hyperpoint c, ld rad, int lev);
  void balltriangle(hyperpoint a, hyperpoint b, hyperpoint c, ld rad, int lev);
  void make_ball(hpcshape& sh, ld rad, int lev);
  void make_star(hpcshape& sh, ld rad);
  void make_euclidean_sky();
  void adjust_eye(hpcshape& eye, hpcshape head, ld shift_eye, ld shift_head, int q, ld zoom=1);
  void shift_last_straight(ld z);
  void queueball(const transmatrix& V, ld rad, color_t col, eItem what);
  void make_shadow(hpcshape& sh);
  void make_3d_models();
  
  /* Goldberg parameters */
  #if CAP_GP
  struct gpdata_t {
  vector<array<array<array<transmatrix, 6>, GOLDBERG_LIMIT>, GOLDBERG_LIMIT>> Tf;
  transmatrix corners;
  ld alpha;
  int area;
  int pshid[3][8][GOLDBERG_LIMIT][GOLDBERG_LIMIT][8];
  int nextid;
  };
  shared_ptr<gpdata_t> gpdata = nullptr;
  #endif
  
  shared_ptr<expansion_analyzer> expansion = nullptr;
  
  int state = 0;
  int usershape_state = 0;
  
  /** contains the texture point coordinates for 3D models */
  basic_textureinfo models_texture;
  
  geometry_information() { last = NULL; use_count = 0; }
  
  void require_basics() { if(state & 1) return; state |= 1; prepare_basics(); }
  void require_shapes() { if(state & 2) return; state |= 2; prepare_shapes(); }
  void require_usershapes() { if(usershape_state == usershape_changes) return; usershape_state = usershape_changes; prepare_usershapes(); }
  int timestamp;
  
  hpcshape& gen_pipe(hpcshape& pipe, ePipeEnd endtype, ld ratio, const hr::function<hyperpoint(ld,ld,ld)>& f);
  hpcshape& get_pipe_iso(ld length, ld width, ePipeEnd endtype = ePipeEnd::sharp);
  hpcshape& get_pipe_noniso(hyperpoint target, ld width, ePipeEnd endtype = ePipeEnd::sharp);
  
  map<string, unique_ptr<gi_extension>> ext;
  
  /** prevent from being destroyed */
  int use_count;
  };
#line 559 "geometry.cpp"
  subcellshape& get_hsh();
#line 564 "geometry.cpp"
  void add_wall(int i, const vector<hyperpoint>& h);
#line 576 "geometry.cpp"
  static constexpr ld hcrossf7 = 0.620672, hexf7 = 0.378077, tessf7 = 1.090550, hexhexdist7 = 0.566256;
#line 579 "geometry.cpp"
  bool is_subcube_based(eVariation var);
#line 583 "geometry.cpp"
  bool is_reg3_variation(eVariation var);
#line 864 "geometry.cpp"
  extern purehookset hooks_swapdim;
  namespace geom3 {
#line 875 "geometry.cpp"
    ld abslev_to_projection(ld abslev);
#line 894 "geometry.cpp"
    ld factor_to_projection(ld fac);
#line 898 "geometry.cpp"
    ld lev_to_factor(ld lev);
#line 904 "geometry.cpp"
    ld factor_to_lev(ld fac);
#line 911 "geometry.cpp"
    ld to_wh(ld val);
#line 915 "geometry.cpp"
    void do_auto_eye();
#line 927 "geometry.cpp"
    ld scale_at_lev(ld lev);
#line 932 "geometry.cpp"
    extern string invalid;
#line 933 "geometry.cpp"
    extern bool changing_embedded_settings;
#line 935 "geometry.cpp"
    ld actual_wall_height();
    }
  namespace geom3 {
#line 1091 "geometry.cpp"
    extern int swap_direction;
#line 1093 "geometry.cpp"
    void swapdim(int dir);
    #if MAXMDIM >= 4
#line 1103 "geometry.cpp"
    void switch_always3();
    #endif
#line 1116 "geometry.cpp"
    void switch_tpp();
#line 1138 "geometry.cpp"
    void switch_fpp();
#line 1179 "geometry.cpp"
    void apply_settings_full();
#line 1193 "geometry.cpp"
    void apply_settings_light();
    }
#line 1206 "geometry.cpp"
  extern geometry_information *cgip;
#line 1207 "geometry.cpp"
  extern map<string, geometry_information> cgis;
#line 1210 "geometry.cpp"
  #define cgi (*cgip)
#line 1213 "geometry.cpp"
  extern int last_texture_step;
#line 1217 "geometry.cpp"
  extern hookset<void(string&)> hooks_cgi_string;
#line 1219 "geometry.cpp"
  string cgi_string();
#line 1332 "geometry.cpp"
  void check_cgi();

  // implemented in: embeddings.cpp

  namespace geom3 {
#line 25 "embeddings.cpp"
    enum eSpatialEmbedding {
    seNone,
    seDefault,
    seLowerCurvature,
    seMuchLowerCurvature,
    seProduct,
    seNil,
    seSol,
    seNIH,
    seSolN,
    seCliffordTorus,
    seProductH,
    seProductS,
    seSL2,
    seCylinderE,
    seCylinderH,
    seCylinderHE,
    seCylinderNil,
    seCylinderHoro,
    seCylinderSL2
    };
#line 48 "embeddings.cpp"
    extern vector<pair<string, string>> spatial_embedding_options;
#line 70 "embeddings.cpp"
    bool clifford_torus_valid();
#line 80 "embeddings.cpp"
    string why_wrong(eSpatialEmbedding sp);
#line 98 "embeddings.cpp"
    extern eSpatialEmbedding spatial_embedding;
#line 99 "embeddings.cpp"
    extern ld euclid_embed_scale;
#line 100 "embeddings.cpp"
    extern ld euclid_embed_scale_y;
#line 101 "embeddings.cpp"
    extern ld euclid_embed_rotate;
#line 102 "embeddings.cpp"
    extern bool auto_configure;
#line 103 "embeddings.cpp"
    extern bool flat_embedding;
#line 104 "embeddings.cpp"
    extern bool inverted_embedding;
#line 105 "embeddings.cpp"
    extern bool apply_break_cylinder;
#line 107 "embeddings.cpp"
    ld euclid_embed_scale_mean();
#line 108 "embeddings.cpp"
    void set_euclid_embed_scale(ld x);
#line 110 "embeddings.cpp"
    bool supports_flat();
#line 111 "embeddings.cpp"
    bool supports_invert();
#line 113 "embeddings.cpp"
    extern vector<geometryinfo> ginf_backup;
#line 115 "embeddings.cpp"
    eGeometryClass mgclass();
#line 119 "embeddings.cpp"
    eGeometryClass ggclass();
#line 123 "embeddings.cpp"
    bool any_cylinder(eSpatialEmbedding e);
#line 127 "embeddings.cpp"
    bool in_product();
#line 131 "embeddings.cpp"
    extern bool flipped;
#line 133 "embeddings.cpp"
    extern geometry_information* unflipped;
#line 135 "embeddings.cpp"
    void light_flip_geom();
#line 151 "embeddings.cpp"
    void light_flip(bool f);
#line 163 "embeddings.cpp"
    template<class T> auto in_flipped(const T& f) -> decltype(f()) {
    light_flip(true);
    finalizer ff([] { light_flip(false); });
    return f();
    }
    
    template<class T> auto in_not_flipped(const T& f) -> decltype(f()) {
    light_flip(false);
    finalizer ff([] { light_flip(true); });
    return f();
    }
    
    #define IPF(x) geom3::in_flipped([&] { return (x); })
#line 178 "embeddings.cpp"
    void apply_always3();
#line 190 "embeddings.cpp"
    void apply_always3_to(geometryinfo& gi);
#line 225 "embeddings.cpp"
    void configure_clifford_torus();
#line 252 "embeddings.cpp"
    void configure_cylinder();
    }
#line 270 "embeddings.cpp"
  struct embedding_method {
  virtual ld center_z() { return 0; }
  virtual hyperpoint tile_center();
  virtual transmatrix intermediate_to_actual_translation(hyperpoint i) = 0;
  virtual hyperpoint intermediate_to_actual(hyperpoint i) { return intermediate_to_actual_translation(i) * tile_center(); }
  virtual hyperpoint actual_to_intermediate(hyperpoint a) = 0;
  virtual hyperpoint orthogonal_move(const hyperpoint& a, ld z);
  virtual transmatrix map_relative_push(hyperpoint h);
  virtual ld get_logical_z(hyperpoint a) { return (intermediate_to_logical_scaled * actual_to_intermediate(a))[2]; }
  virtual hyperpoint logical_to_actual(hyperpoint l) { return intermediate_to_actual(logical_to_intermediate * l); }
  virtual hyperpoint actual_to_logical(hyperpoint a) { return intermediate_to_logical * actual_to_intermediate(a); }
  virtual hyperpoint base_to_actual(hyperpoint h) = 0;
  virtual transmatrix base_to_actual(const transmatrix &T) = 0;
  virtual hyperpoint actual_to_base(hyperpoint h) = 0;
  virtual transmatrix actual_to_base(const transmatrix &T) = 0;
  virtual hyperpoint normalize_flat(hyperpoint a) { return flatten(normalize(a)); }
  virtual hyperpoint flatten(hyperpoint a);
  virtual void set_radar_transform();
  virtual transmatrix get_lsti() { return Id; }
  virtual transmatrix get_lti() { return logical_scaled_to_intermediate; }
  virtual hyperpoint base_to_logical(hyperpoint h) = 0;
  virtual hyperpoint logical_to_base(hyperpoint h) = 0;
  virtual ld anim_center_z() { return center_z(); }
  virtual hyperpoint anim_tile_center();
  virtual void logical_fix(transmatrix&) = 0;
  virtual ld height_limit(ld sign);
  
  virtual bool is_euc_in_product() { return false; }
  virtual bool is_product_embedding() { return false; }
  virtual bool is_euc_in_sl2() { return false; }
  virtual bool is_same_in_same() { return false; }
  virtual bool is_sph_in_low() { return false; }
  virtual bool is_hyp_in_solnih() { return false; }
  virtual bool is_euc_scalable() { return false; }
  virtual bool is_euc_in_hyp() { return false; }
  virtual bool is_euc_in_sph() { return false; }
  virtual bool is_euc_in_nil() { return false; }
  virtual bool is_euc_in_noniso() { return false; }
  virtual bool is_in_noniso() { return false; }
  virtual bool is_cylinder() { return false; }
  virtual bool no_spin() { return false; }
  
  /* convert the tangent space in logical coordinates to actual coordinates */
  transmatrix logical_to_intermediate;
  
  /* convert the tangent space in actual coordinates to logical coordinates */
  transmatrix intermediate_to_logical;
  
  /* convert the tangent space in logical coordinates to actual coordinates */
  transmatrix logical_scaled_to_intermediate;
  
  /* convert the tangent space in actual coordinates to logical coordinates */
  transmatrix intermediate_to_logical_scaled;
  
  void prepare_lta();
  void auto_configure();
  virtual ~embedding_method() {}
  
  /* should we break cylinder between M1 and M2 */
  virtual bool break_cylinder(const shiftmatrix& M1, const shiftmatrix& M2) { return false; }
  };
  
#line 334 "embeddings.cpp"
  extern geometry_information *swapper;
#line 1015 "embeddings.cpp"
  unique_ptr<embedding_method> make_embed();
#line 1057 "embeddings.cpp"
  hyperpoint orthogonal_move(hyperpoint h, ld z );
#line 1059 "embeddings.cpp"
  transmatrix unswap_spin(transmatrix T);
#line 1064 "embeddings.cpp"
  transmatrix spin(ld alpha);
#line 1074 "embeddings.cpp"
  transmatrix spin90();
#line 1084 "embeddings.cpp"
  transmatrix spin180();
#line 1094 "embeddings.cpp"
  transmatrix spin270();
#line 1103 "embeddings.cpp"
  transmatrix lzpush(ld z);
#line 1112 "embeddings.cpp"
  transmatrix lxpush(ld alpha);
#line 1124 "embeddings.cpp"
  hyperpoint lxpush0(ld x);
#line 1126 "embeddings.cpp"
  transmatrix lspintox(const hyperpoint& H);
#line 1137 "embeddings.cpp"
  transmatrix lrspintox(const hyperpoint& H);
#line 1149 "embeddings.cpp"
  hyperpoint lztangent(ld z);
#line 1153 "embeddings.cpp"
  hyperpoint tile_center();
#line 1155 "embeddings.cpp"
  hyperpoint lspinpush0(ld alpha, ld x);
#line 1165 "embeddings.cpp"
  hyperpoint xspinpush0(ld alpha, ld x);
#line 1175 "embeddings.cpp"
  transmatrix xspinpush(ld dir, ld dist);
#line 1188 "embeddings.cpp"
  const transmatrix& lmirror();
#line 1218 "embeddings.cpp"
  void swapmatrix(transmatrix& T);
#line 1223 "embeddings.cpp"
  void swappoint(hyperpoint& h);
#line 1237 "embeddings.cpp"
  void swapmatrix_iview(transmatrix& ori, transmatrix& V);
#line 1273 "embeddings.cpp"
  void swapmatrix_view(transmatrix& lp, transmatrix& V);
#line 1367 "embeddings.cpp"
  void invoke_embed(geom3::eSpatialEmbedding se);

  // implemented in: goldberg.cpp

#line 14 "goldberg.cpp"
  struct hrmap;
  extern hrmap *currentmap;
  namespace gp {
#line 21 "goldberg.cpp"
    struct loc : pair<int, int> {
    loc() {}
    
    loc(int x, int y) : pair<int,int> (x,y) {}
    
    loc operator+(loc e2) {
    return loc(first+e2.first, second+e2.second);
    }
    
    loc operator-(loc e2) {
    return loc(first-e2.first, second-e2.second);
    }
    
    loc operator*(loc e2) {
    return loc(first*e2.first-second*e2.second, 
    first*e2.second + e2.first*second + (hr__S3 == 3 ? second*e2.second : 0));
    }
    
    loc operator*(int i) {
    return loc(first*i, second*i);
    }  
    
    int operator %(int i) {
    return gmod(first, i) + gmod(second, i);
    }
    
    loc operator /(int i) {
    return loc(first/i, second/i);
    }
    
    loc conj() {
    if(hr__S3 == 4) return loc(first, -second);
    return loc(first+second, -second);
    }
    
    };
    
    struct local_info {
    int last_dir;
    loc relative;
    int first_dir;
    int total_dir;
    };
#line 66 "goldberg.cpp"
    extern local_info current_li;
#line 67 "goldberg.cpp"
    extern cell *li_for;
#line 69 "goldberg.cpp"
    loc eudir(int d);
#line 91 "goldberg.cpp"
    int length(loc p);
    #if CAP_GP
#line 96 "goldberg.cpp"
    extern loc param;
#line 98 "goldberg.cpp"
    extern hyperpoint next;
#line 108 "goldberg.cpp"
    int fixg6(int x);
#line 113 "goldberg.cpp"
    int get_code(const local_info& li);
#line 121 "goldberg.cpp"
    local_info get_local_info(cell *c);
#line 157 "goldberg.cpp"
    int last_dir(cell *c);
#line 161 "goldberg.cpp"
    loc get_coord(cell *c);
#line 165 "goldberg.cpp"
    int pseudohept_val(cell *c);
#line 231 "goldberg.cpp"
    extern bool do_adjm;
#line 287 "goldberg.cpp"
    extern map<pair<cell*, int>, transmatrix> gp_adj;
#line 288 "goldberg.cpp"
    extern set<pair<cell*, int>> gp_swapped;
#line 290 "goldberg.cpp"
    transmatrix& get_adj(cell *c, int i);
#line 300 "goldberg.cpp"
    void extend_map(cell *c, int d);
#line 602 "goldberg.cpp"
    hyperpoint loctoh_ort(loc at);
#line 667 "goldberg.cpp"
    void prepare_matrices(bool inv);
#line 706 "goldberg.cpp"
    hyperpoint get_corner_position(const local_info& li, int cid, ld cf IS(3));
#line 716 "goldberg.cpp"
    hyperpoint get_corner_position(cell *c, int cid, ld cf IS(3));
#line 722 "goldberg.cpp"
    void compute_geometry(bool inv);
#line 758 "goldberg.cpp"
    bool rotate_and_check_limits(loc& v);
#line 765 "goldberg.cpp"
    bool check_limits(loc v);
#line 778 "goldberg.cpp"
    loc human_representation(loc v);
#line 785 "goldberg.cpp"
    eVariation variation_for(loc xy);
#line 793 "goldberg.cpp"
    void whirl_set(loc xy);
#line 816 "goldberg.cpp"
    bool check_whirl_set(loc xy);
#line 1016 "goldberg.cpp"
    loc univ_param();
#line 1022 "goldberg.cpp"
    void configure();
#line 1029 "goldberg.cpp"
    void be_in_triangle(local_info& li);
#line 1046 "goldberg.cpp"
    int solve_triangle(int dmain, int d0, int d1, loc at);
#line 1097 "goldberg.cpp"
    hyperpoint get_master_coordinates(cell *c);
#line 1103 "goldberg.cpp"
    int compute_dist(cell *c, int master_function(cell*));
#line 1127 "goldberg.cpp"
    int dist_2();
#line 1131 "goldberg.cpp"
    int dist_3();
#line 1135 "goldberg.cpp"
    int dist_1();
#line 1139 "goldberg.cpp"
    int dist_1();
#line 1140 "goldberg.cpp"
    int dist_2();
#line 1141 "goldberg.cpp"
    int dist_3();
    #endif
#line 1144 "goldberg.cpp"
    array<heptagon*, 3> get_masters(cell *c);
#line 1167 "goldberg.cpp"
    string operation_name();
#line 1219 "goldberg.cpp"
    extern hrmap *pmap;
#line 1446 "goldberg.cpp"
    hrmap* new_inverse();
#line 1450 "goldberg.cpp"
    bool inverse_pseudohept(cell *c);
#line 1456 "goldberg.cpp"
    hrmap* get_underlying_map();
#line 1457 "goldberg.cpp"
    cell* get_mapped(cell *c);
#line 1458 "goldberg.cpp"
    int untruncated_shift(cell *c);
#line 1460 "goldberg.cpp"
    void delete_mapped(cell *c);
#line 1467 "goldberg.cpp"
    cell *inverse_move(cell *c, int d);
#line 1470 "goldberg.cpp"
    template<class T> auto in_underlying_geometry(const T& f) -> decltype(f()) {
    if(!INVERSE) return f();
    dynamicval<hrmap*> gpm(pmap, currentmap);
    dynamicval<eVariation> gva(variation, variation_for(param));
    dynamicval<hrmap*> gu(currentmap, get_underlying_map());
    // dynamicval<geometry_information*> gc(cgip, underlying_cgip);
    return f();
    }
    
    #define UIU(x) hr::gp::in_underlying_geometry([&] { return (x); })
    }

  // implemented in: floorshapes.cpp

  #if CAP_SHAPES
#line 14 "floorshapes.cpp"
  struct qfloorinfo {
  transmatrix spin;
  const struct hpcshape *shape;
  floorshape *fshape;
  struct textureinfo *tinf;
  int usershape;
  };
  
  extern qfloorinfo qfi;
#line 25 "floorshapes.cpp"
  extern vector<basic_textureinfo> floor_texture_vertices;
#line 26 "floorshapes.cpp"
  extern vector<glvertex> floor_texture_map;
#line 27 "floorshapes.cpp"
  extern struct renderbuffer *floor_textures;
#line 29 "floorshapes.cpp"
  basic_textureinfo* get_floor_texture_vertices(int index);
#line 35 "floorshapes.cpp"
  extern int floorshapes_level;
#line 37 "floorshapes.cpp"
  extern ld global_boundary_ratio;
#line 145 "floorshapes.cpp"
  hyperpoint may_kleinize(hyperpoint h);
#line 833 "floorshapes.cpp"
  extern hookset<bool(cell*)> hooks_floorshapes;
  #if CAP_GP
  namespace gp {
#line 986 "floorshapes.cpp"
    void clear_plainshapes();
#line 1011 "floorshapes.cpp"
    int get_plainshape_id(cell *c);
    }
  #endif
#line 1061 "floorshapes.cpp"
  void set_no_floor();
#line 1068 "floorshapes.cpp"
  void set_floor(floorshape& sh);
#line 1075 "floorshapes.cpp"
  void set_floor(hpcshape& sh);
#line 1083 "floorshapes.cpp"
  void set_floor(const transmatrix& spin, hpcshape& sh);
#line 1091 "floorshapes.cpp"
  void ensure_floorshape_generated(int id, cell *c);
#line 1107 "floorshapes.cpp"
  int shvid(cell *c);
#line 1154 "floorshapes.cpp"
  struct dqi_poly *draw_shapevec(cell *c, const shiftmatrix& V, const vector<hpcshape> &shv, color_t col, PPR prio IS(PPR::DEFAULT));
#line 1195 "floorshapes.cpp"
  void draw_floorshape(cell *c, const shiftmatrix& V, const floorshape &fsh, color_t col, PPR prio IS(PPR::DEFAULT));
#line 1200 "floorshapes.cpp"
  void draw_qfi(cell *c, const shiftmatrix& V, color_t col, PPR prio IS(PPR::DEFAULT), vector<hpcshape> floorshape::* tab IS(&floorshape::b));
#line 1219 "floorshapes.cpp"
  extern bool floorshape_debug;
#line 1220 "floorshapes.cpp"
  void viewmat();
  #endif
  #if MAXMDIM < 4 || !CAP_GL
#line 1251 "floorshapes.cpp"
  void ensure_vertex_number(basic_textureinfo& bti, int qty);
#line 1252 "floorshapes.cpp"
  void ensure_vertex_number(hpcshape& sh);
#line 1253 "floorshapes.cpp"
  void bind_floor_texture(hpcshape& li, int id);
  #endif
  #if MAXMDIM >= 4 && CAP_GL
#line 1258 "floorshapes.cpp"
  extern ld floor_texture_square_size;
#line 1354 "floorshapes.cpp"
  void ensure_vertex_number(basic_textureinfo& bti, int qty);
#line 1363 "floorshapes.cpp"
  void ensure_vertex_number(hpcshape& sh);
#line 1368 "floorshapes.cpp"
  void bind_floor_texture(hpcshape& li, int id);
#line 1374 "floorshapes.cpp"
  const int FLOORTEXTURESIZE = 4096;
#line 1462 "floorshapes.cpp"
  void make_floor_textures();
  #endif

  // implemented in: cell.cpp

#line 14 "cell.cpp"
  extern int default_levs();
  
  struct hrmap {
  virtual heptagon *getOrigin() { return NULL; }
  virtual cell *gamestart() { return getOrigin()->c7; }
  virtual ~hrmap() { }
  virtual vector<cell*>& allcells();
  virtual void verify() { }
  virtual void on_dim_change() { }
  virtual bool link_alt(heptagon *h, heptagon *alt, hstate firststate, int dir);
  virtual void extend_altmap(heptagon *h, int levs = default_levs(), bool link_cdata = true);
  heptagon *may_create_step(heptagon *h, int direction) {
  if(h->move(direction)) return h->move(direction);
  return create_step(h, direction);
  }
  virtual heptagon *create_step(heptagon *h, int direction);
  protected:
  virtual transmatrix relative_matrixh(heptagon *h2, heptagon *h1, const hyperpoint& hint);
  virtual transmatrix relative_matrixc(cell *c2, cell *c1, const hyperpoint& hint);
  public:
  transmatrix relative_matrix(heptagon *h2, heptagon *h1, const hyperpoint& hint) { return relative_matrixh(h2, h1, hint); }
  transmatrix relative_matrix(cell *h2, cell *h1, const hyperpoint& hint) { return relative_matrixc(h2, h1, hint); }
  
  virtual transmatrix adj(cell *c, int i) { return adj(c->master, i); }
  virtual transmatrix adj(heptagon *h, int i);
  transmatrix iadj(cell *c, int i) { cell *c1 = c->cmove(i); return adj(c1, c->c.spin(i)); }
  transmatrix iadj(heptagon *h, int d) { 
  heptagon *h1 = h->cmove(d); return adj(h1, h->c.spin(d));
  }
  virtual void draw_all();
  virtual void draw_at(cell *at, const shiftmatrix& where);
  
  virtual void virtualRebase(heptagon*& base, transmatrix& at);
  
  static constexpr ld SPIN_NOT_AVAILABLE = 1e5;
  virtual ld spin_angle(cell *c, int d) { return SPIN_NOT_AVAILABLE; }
  
  virtual transmatrix spin_to(cell *c, int d, ld bonus=0);
  virtual transmatrix spin_from(cell *c, int d, ld bonus=0);
  
  virtual double spacedist(cell *c, int i);
  
  virtual bool strict_tree_rules() { return false; }
  
  virtual void find_cell_connection(cell *c, int d);
  virtual int shvid(cell *c) { return 0; }
  virtual int full_shvid(cell *c) { return shvid(c); }
  virtual hyperpoint get_corner(cell *c, int cid, ld cf=3) { return C0; }
  virtual transmatrix master_relative(cell *c, bool get_inverse = false) { return Id; }
  virtual int wall_offset(cell *c);
  
  virtual transmatrix ray_iadj(cell *c, int i);
  
  virtual subcellshape& get_cellshape(cell *c);
  
  /** \brief in 3D honeycombs, returns a cellwalker res at cw->move(j) such that the face pointed at by cw and res share an edge */
  virtual cellwalker strafe(cellwalker cw, int j);
  
  /** \brief in 3D honeycombs, returns a vector<bool> v, where v[j] iff faces i and j are adjacent */
  const vector<char>& dirdist(cellwalker cw) { return get_cellshape(cw.at).dirdist[cw.spin]; }
  
  /** \brief the sequence of heptagon movement direction to get from c->master to c->move(i)->master; implemented only for reg3 */
  virtual const vector<int>& get_move_seq(cell *c, int i);
  
  /** generate a new map that is disconnected from what we already have, disconnected from the map we have so far */
  virtual cell* gen_extra_origin(int fv) { throw hr_exception("gen_extra_origin not supported on this map"); }
  
  transmatrix adjmod(cell *c, int i) { return adj(c, gmod(i, c->type)); }
  transmatrix adjmod(heptagon *h, int i) { return adj(h, gmod(i, h->type)); }
  transmatrix iadjmod(cell *c, int i) { return iadj(c, gmod(i, c->type)); }
  transmatrix iadjmod(heptagon *h, int i) { return iadj(h, gmod(i, h->type)); }
  };
  
  /** hrmaps which are based on regular non-Euclidean 2D tilings, possibly quotient  
  *  Operators can be applied to these maps. 
  *  Liskov substitution warning: maps which produce both tiling like above and 3D tilings
  *  (e.g. Euclidean and Crystal) also inherit from hrmap_standard
  **/
  struct hrmap_standard : hrmap {
  void draw_at(cell *at, const shiftmatrix& where) override;
  transmatrix relative_matrixh(heptagon *h2, heptagon *h1, const hyperpoint& hint) override;
  transmatrix relative_matrixc(cell *c2, cell *c1, const hyperpoint& hint) override;
  heptagon *create_step(heptagon *h, int direction) override;
  transmatrix adj(cell *c, int d) override;
  transmatrix adj(heptagon *h, int d) override;
  ld spin_angle(cell *c, int d) override;
  double spacedist(cell *c, int i) override;
  void find_cell_connection(cell *c, int d) override;
  int shvid(cell *c) override;
  hyperpoint get_corner(cell *c, int cid, ld cf) override;
  transmatrix master_relative(cell *c, bool get_inverse) override;
  bool link_alt(heptagon *h, heptagon *alt, hstate firststate, int dir) override;
  void on_dim_change() override;
  };
  
  void clearfrom(heptagon*);
  void verifycells(heptagon*);
  
  struct hrmap_hyperbolic : hrmap_standard {
  heptagon *origin;
  hrmap_hyperbolic();
  hrmap_hyperbolic(heptagon *origin);
  heptagon *getOrigin() override { return origin; }
  ~hrmap_hyperbolic() {
  // verifycells(origin);
  // printf("Deleting hyperbolic map: %p\n", hr::voidp(this));
  clearfrom(origin);
  }
  void verify() override { verifycells(origin); }
  void virtualRebase(heptagon*& base, transmatrix& at) override;
  };
#line 217 "cell.cpp"
  int dirdiff(int dd, int t);
#line 224 "cell.cpp"
  extern int cellcount;
#line 226 "cell.cpp"
  void destroy_cell(cell *c);
#line 231 "cell.cpp"
  cell *newCell(int type, heptagon *master);
#line 243 "cell.cpp"
  extern hrmap *currentmap;
#line 244 "cell.cpp"
  extern vector<hrmap*> allmaps;
#line 246 "cell.cpp"
  hrmap *newAltMap(heptagon *o);
#line 257 "cell.cpp"
  heptagon* hyperbolic_origin();
#line 332 "cell.cpp"
  cell *createMov(cell *c, int d);
#line 340 "cell.cpp"
  void eumerge(cell* c1, int s1, cell *c2, int s2, bool mirror);
#line 348 "cell.cpp"
  extern hookset<hrmap*()> hooks_newmap;
#line 351 "cell.cpp"
  enum eDiskShape { dshTiles, dshVertices, dshGeometric };
#line 355 "cell.cpp"
  extern int req_disksize;
#line 357 "cell.cpp"
  extern int disksize;
#line 359 "cell.cpp"
  extern vector<cell*> all_disk_cells;
#line 361 "cell.cpp"
  extern vector<cell*> all_disk_cells_sorted;
#line 363 "cell.cpp"
  extern eDiskShape diskshape;
#line 365 "cell.cpp"
  void init_disk_cells();
#line 410 "cell.cpp"
  bool is_in_disk(cell *c);
#line 494 "cell.cpp"
  bool is_in_fractal(cell *c);
#line 513 "cell.cpp"
  cell *fractal_rep(cell *c);
#line 552 "cell.cpp"
  void initcells();
#line 608 "cell.cpp"
  void clearcell(cell *c);
#line 625 "cell.cpp"
  extern heptagon deletion_marker;
#line 638 "cell.cpp"
  void clearHexes(heptagon *at);
#line 657 "cell.cpp"
  void clear_heptagon(heptagon *at);
#line 662 "cell.cpp"
  void clearfrom(heptagon *at);
#line 706 "cell.cpp"
  void verifycell(cell *c);
#line 720 "cell.cpp"
  void verifycells(heptagon *at);
#line 731 "cell.cpp"
  int compdist(int dx[]);
#line 748 "cell.cpp"
  int celldist(cell *c);
#line 775 "cell.cpp"
  static constexpr int ALTDIST_BOUNDARY = 99999;
  static constexpr int ALTDIST_UNKNOWN = 99998;
  static constexpr int ALTDIST_ERROR = 90000;
#line 780 "cell.cpp"
  int celldistAlt(cell *c);
#line 836 "cell.cpp"
  int updir(heptagon *h);
#line 852 "cell.cpp"
  int updir_alt(heptagon *h);
#line 866 "cell.cpp"
  static constexpr int RPV_MODULO = 5;
  static constexpr int RPV_RAND = 0;
  static constexpr int RPV_ZEBRA = 1;
  static constexpr int RPV_EMERALD = 2;
  static constexpr int RPV_PALACE = 3;
  static constexpr int RPV_CYCLE = 4;
#line 880 "cell.cpp"
  bool randpattern(cell *c, int rval);
#line 923 "cell.cpp"
  string describeRPM(eLand l);
#line 943 "cell.cpp"
  int randpatternCode(cell *c, int rval);
#line 958 "cell.cpp"
  #define RANDITER 31
#line 963 "cell.cpp"
  void clearMemoRPM();
#line 968 "cell.cpp"
  bool randpatternMajority(cell *c, int ival, int iterations);
#line 995 "cell.cpp"
  bool geometry_supports_cdata();
#line 1018 "cell.cpp"
  bool dmeq(int a, int b);
  #if CAP_ARCM
#line 1236 "cell.cpp"
  gp::loc pseudocoords(cell *c);
#line 1241 "cell.cpp"
  cdata *arcmCdata(cell *c);
  #endif
#line 1255 "cell.cpp"
  int getCdata(cell *c, int j);
#line 1282 "cell.cpp"
  int getBits(cell *c);
#line 1309 "cell.cpp"
  cell *heptatdir(cell *c, int d);
#line 1319 "cell.cpp"
  int heptdistance(heptagon *h1, heptagon *h2);
#line 1337 "cell.cpp"
  int heptdistance(cell *c1, cell *c2);
#line 1347 "cell.cpp"
  extern set<cell*> keep_distances_from;
#line 1353 "cell.cpp"
  void compute_saved_distances(cell *c1, int max_range, int climit);
#line 1361 "cell.cpp"
  void permanent_long_distances(cell *c1);
#line 1369 "cell.cpp"
  void erase_saved_distances();
#line 1376 "cell.cpp"
  int max_saved_distance(cell *c);
#line 1382 "cell.cpp"
  cell *random_in_distance(cell *c, int d);
#line 1390 "cell.cpp"
  int bounded_celldistance(cell *c1, cell *c2);
#line 1413 "cell.cpp"
  int clueless_celldistance(cell *c1, cell *c2);
#line 1430 "cell.cpp"
  int celldistance(cell *c1, cell *c2);
#line 1485 "cell.cpp"
  vector<cell*> build_shortest_path(cell *c1, cell *c2);
#line 1538 "cell.cpp"
  void clearCellMemory();
#line 1560 "cell.cpp"
  bool isNeighbor(cell *c1, cell *c2);
#line 1565 "cell.cpp"
  bool isNeighborCM(cell *c1, cell *c2);
#line 1570 "cell.cpp"
  int neighborId(cell *ofWhat, cell *whichOne);
#line 1575 "cell.cpp"
  extern int mine_adjacency_rule;
#line 1578 "cell.cpp"
  struct adj_data {
  cell *c;
  bool mirrored;
  transmatrix T;
  };
#line 1585 "cell.cpp"
  extern array<map<cell*, vector<adj_data>>, 2> adj_memo;
#line 1587 "cell.cpp"
  bool geometry_has_alt_mine_rule();
#line 1595 "cell.cpp"
  vector<adj_data> adj_minefield_cells_full(cell *c);
#line 1646 "cell.cpp"
  vector<cell*> adj_minefield_cells(cell *c);
#line 1658 "cell.cpp"
  vector<int> reverse_directions(cell *c, int dir);
#line 1667 "cell.cpp"
  vector<int> reverse_directions(heptagon *c, int dir);
#line 1710 "cell.cpp"
  bool standard_tiling();
#line 1714 "cell.cpp"
  int valence();
#line 1725 "cell.cpp"
  bool is_boundary(cell *c);
#line 1731 "cell.cpp"
  int auto_compute_range(cell *c);
#line 1751 "cell.cpp"
  extern cell out_of_bounds;
#line 1752 "cell.cpp"
  extern heptagon oob;

  // implemented in: multi.cpp

  namespace multi {
#line 14 "multi.cpp"
    static constexpr int SCANCODES = 512;
    static constexpr int MAXJOY = 8;
    static constexpr int MAXBUTTON = 64;
    static constexpr int MAXAXE = 16;
    static constexpr int MAXHAT = 4;
    
    struct config {
    int keyaction[SCANCODES];
    int joyaction[MAXJOY][MAXBUTTON];
    int axeaction[MAXJOY][MAXAXE];
    int hataction[MAXJOY][MAXHAT][4];
    int deadzoneval[MAXJOY][MAXAXE];
    };
#line 29 "multi.cpp"
    extern config scfg_default;
#line 30 "multi.cpp"
    extern charstyle scs[MAXPLAYER];
#line 32 "multi.cpp"
    extern bool split_screen;
#line 33 "multi.cpp"
    extern bool pvp_mode;
#line 34 "multi.cpp"
    extern bool friendly_fire;
#line 35 "multi.cpp"
    extern bool self_hits;
#line 36 "multi.cpp"
    extern bool two_focus;
#line 38 "multi.cpp"
    extern int players;
#line 39 "multi.cpp"
    extern cellwalker player[MAXPLAYER];
#line 40 "multi.cpp"
    extern vector<int> revive_queue; // queue for revival
#line 42 "multi.cpp"
    extern cell *origpos[MAXPLAYER], *origtarget[MAXPLAYER];
#line 44 "multi.cpp"
    extern bool flipped[MAXPLAYER];
#line 47 "multi.cpp"
    extern int treasures[MAXPLAYER], kills[MAXPLAYER], deaths[MAXPLAYER], pkills[MAXPLAYER], suicides[MAXPLAYER];
#line 49 "multi.cpp"
    extern bool alwaysuse;
#line 51 "multi.cpp"
    void recall();
#line 65 "multi.cpp"
    extern shiftmatrix whereis[MAXPLAYER];
#line 66 "multi.cpp"
    extern shiftmatrix crosscenter[MAXPLAYER];
#line 67 "multi.cpp"
    extern double ccdist[MAXPLAYER];
#line 68 "multi.cpp"
    extern cell *ccat[MAXPLAYER];
#line 72 "multi.cpp"
    extern int cpid; // player id -- an extra parameter for player-related functions
#line 73 "multi.cpp"
    extern int cpid_edit; // cpid currently being edited
#line 75 "multi.cpp"
    extern movedir whereto[MAXPLAYER]; // player's target cell  
#line 77 "multi.cpp"
    extern double mdx[MAXPLAYER], mdy[MAXPLAYER]; // movement vector for the next move
#line 120 "multi.cpp"
    #define SHMUPAXES_BASE 4
    #define SHMUPAXES ((SHMUPAXES_BASE) + 4 * (MAXPLAYER))
    #define SHMUPAXES_CUR ((SHMUPAXES_BASE) + 4 * playercfg)
#line 125 "multi.cpp"
    extern const char* axemodes[SHMUPAXES];
#line 160 "multi.cpp"
    extern const char* axemodes3[4];
#line 167 "multi.cpp"
    extern int centerplayer;
#line 214 "multi.cpp"
    void resetScores();
#line 223 "multi.cpp"
    string player_count_name(int p);
#line 314 "multi.cpp"
    reaction_t get_key_configurer(int sc, vector<string>& sct, string caption);
#line 318 "multi.cpp"
    reaction_t get_key_configurer(int sc, vector<string>& sct, string caption, config &cfg);
#line 322 "multi.cpp"
    reaction_t get_key_configurer(int sc, vector<string>& sct);
#line 399 "multi.cpp"
    extern const char *axmodes[7];
#line 510 "multi.cpp"
    void configure();
#line 514 "multi.cpp"
    void showConfigureMultiplayer();
#line 572 "multi.cpp"
    #define NUMACT 128
    
    enum pcmds {
    pcForward, pcBackward, pcTurnLeft, pcTurnRight,
    pcMoveUp, pcMoveRight, pcMoveDown, pcMoveLeft,
    pcFire, pcFace, pcFaceFire,
    pcDrop, pcCenter, pcOrbPower, pcOrbKey
    };
#line 582 "multi.cpp"
    extern int actionspressed[NUMACT], axespressed[SHMUPAXES], lactionpressed[NUMACT];
#line 589 "multi.cpp"
    int key_to_scan(int sym);
#line 597 "multi.cpp"
    bool notremapped(int sym);
#line 608 "multi.cpp"
    void sconfig_savers(config& scfg, string prefix);
#line 627 "multi.cpp"
    void clear_config(config& scfg);
#line 631 "multi.cpp"
    void initConfig();
#line 788 "multi.cpp"
    void get_actions(config& scfg);
#line 829 "multi.cpp"
    void handleInput(int delta, config &scfg);
#line 895 "multi.cpp"
    void handleInput(int delta);
#line 897 "multi.cpp"
    extern int tableid[7];
#line 899 "multi.cpp"
    void leaveGame(int i);
#line 906 "multi.cpp"
    bool playerActive(int p);
#line 911 "multi.cpp"
    int activePlayers();
#line 917 "multi.cpp"
    cell *multiPlayerTarget(int i);
#line 928 "multi.cpp"
    void checklastmove();
#line 942 "multi.cpp"
    void handleMulti(int delta);
#line 1083 "multi.cpp"
    void mousemovement(cell *c);
    }

  // implemented in: shmup.cpp

  namespace shmupballs {
#line 13 "shmup.cpp"
    extern int xmove, xfire, yb, rad;
#line 15 "shmup.cpp"
    void calc();
    }
#line 30 "shmup.cpp"
  #define SCALE cgi.scalefactor
  #define SCALE2 (SCALE*SCALE)
  namespace shmup {
#line 37 "shmup.cpp"
    struct monster {
    eMonster type;
    cell *base;      ///< on which base cell this monster currently is
    cell *torigin;   ///< tortoises: origin, butterflies: last position
    transmatrix at;  ///< position relative to base
    shiftmatrix pat; ///< position relative to current projection center
    transmatrix ori; ///< orientation for the product geometry
    eMonster stk;
    bool dead;
    bool notpushed;
    bool inBoat;
    bool no_targetting;
    monster *parent; ///< who shot this missile
    int nextshot;    ///< when will it be able to shot (players/flailers)
    int pid;         ///< player ID
    int hitpoints;   ///< hitpoints; or time elapsed in Asteroids
    int stunoff;     ///< when does the stun end
    int blowoff;     ///< when does the blow end
    int fragoff;     ///< when does the frag end in PvP
    double swordangle; ///< sword angle wrt at
    double vel;        ///< velocity, for flail balls
    double footphase;
    bool isVirtual;    ///< off the screen: gmatrix is unknown, and pat equals at
    hyperpoint inertia;///< for frictionless lands
    
    int refs;         ///< +1 for every reference (parent, lists of active monsters)
    
    int split_owner;  ///< in splitscreen mode, which player handles this
    int split_tick;   ///< in which tick was split_owner computed
    
    void reset();
    
    monster() {
    reset();
    refs = 1; split_tick = -1; split_owner = -1;
    no_targetting = false;
    dead = false; inBoat = false; parent = NULL;
    }
    
    eMonster get_parenttype() { return parent ? parent->type : moNone; }
    
    void store();
    
    void findpat();
    
    cell *findbase(const shiftmatrix& T, int maxsteps);
    
    void rebasePat(const shiftmatrix& new_pat, cell *tgt);
    
    void remove_reference() {
    refs--;
    if(!refs) {
    if(parent) parent->remove_reference();
    delete this;
    }
    }
    
    void set_parent(monster *par) {
    if(parent) parent->remove_reference();
    parent = par;
    parent->refs++;
    }
    
    };  
#line 117 "shmup.cpp"
    extern bool on;
#line 118 "shmup.cpp"
    extern bool delayed_safety;
#line 119 "shmup.cpp"
    extern eLand delayed_safety_land;
#line 123 "shmup.cpp"
    extern multimap<cell*, monster*> monstersAt;
#line 126 "shmup.cpp"
    typedef multimap<cell*, monster*>::iterator mit;
#line 248 "shmup.cpp"
    extern monster *pc[MAXPLAYER], *mousetarget, *lmousetarget;
#line 250 "shmup.cpp"
    extern int curtime, nextmove, nextdragon;
#line 258 "shmup.cpp"
    extern hookset<bool(shmup::monster*)> hooks_kill;
#line 292 "shmup.cpp"
    void pushmonsters();
#line 302 "shmup.cpp"
    void popmonsters();
#line 321 "shmup.cpp"
    void degradeDemons();
#line 329 "shmup.cpp"
    extern double playerturn[MAXPLAYER], playergo[MAXPLAYER], playerstrafe[MAXPLAYER], playerturny[MAXPLAYER], playergoturn[MAXPLAYER], godir[MAXPLAYER];
#line 330 "shmup.cpp"
    extern transmatrix playersmallspin[MAXPLAYER];
#line 377 "shmup.cpp"
    void visibleFor(int t);
#line 442 "shmup.cpp"
    void killThePlayer(eMonster m);
#line 609 "shmup.cpp"
    extern transmatrix swordmatrix[MAXPLAYER];
#line 652 "shmup.cpp"
    void activateArrow(cell *c);
#line 1406 "shmup.cpp"
    monster *getPlayer();
#line 1429 "shmup.cpp"
    int reflect(cell*& c2, cell*& mbase, shiftmatrix& nat);
#line 1521 "shmup.cpp"
    bool verifyTeleport();
#line 1533 "shmup.cpp"
    void teleported();
#line 1582 "shmup.cpp"
    eItem targetRangedOrb(orbAction a);
#line 1666 "shmup.cpp"
    int protect_pid(int i);
#line 1671 "shmup.cpp"
    bool check_split(monster *m);
#line 1927 "shmup.cpp"
    monster *create_bullet(monster *m, eMonster type);
#line 1939 "shmup.cpp"
    bool dragonbreath(cell *dragon);
#line 2547 "shmup.cpp"
    void fixStorage();
#line 2559 "shmup.cpp"
    extern hookset<bool(int)> hooks_turn;
#line 2562 "shmup.cpp"
    extern int pvp_delay;
#line 2564 "shmup.cpp"
    extern int count_pauses;
#line 2565 "shmup.cpp"
    extern bool in_pause;
#line 2567 "shmup.cpp"
    void turn(int delta);
#line 2847 "shmup.cpp"
    void recall();
#line 2861 "shmup.cpp"
    void init();
#line 2891 "shmup.cpp"
    bool boatAt(cell *c);
#line 2901 "shmup.cpp"
    extern hookset<bool(const shiftmatrix&, cell*, shmup::monster*)> hooks_draw;
#line 2903 "shmup.cpp"
    void clearMonsters();
#line 2913 "shmup.cpp"
    void clearMemory();
#line 2943 "shmup.cpp"
    cell *playerpos(int i);
#line 2948 "shmup.cpp"
    bool playerInBoat(int i);
#line 2953 "shmup.cpp"
    void destroyBoats(cell *c);
#line 2959 "shmup.cpp"
    void virtualRebase(shmup::monster *m);
#line 2963 "shmup.cpp"
    extern hookset<bool(shmup::monster*, string&)> hooks_describe;
#line 2965 "shmup.cpp"
    void addShmupHelp(string& out);
#line 2987 "shmup.cpp"
    void switch_shmup();
#line 3000 "shmup.cpp"
    shiftmatrix at_missile_level(const shiftmatrix& T);
    }

  // implemented in: pattern2.cpp

#line 15 "pattern2.cpp"
  enum cpatterntype { 
  cpFootball, cpThree, cpChess, cpSingle, cpSingleSym, cpOddEven, cpLarge, cpZebra, cpUnknown
  };
#line 20 "pattern2.cpp"
  void enable_canvas();
#line 26 "pattern2.cpp"
  int ctof(cell *c);
#line 38 "pattern2.cpp"
  int ctof012(cell *c);
#line 67 "pattern2.cpp"
  bool ishept(cell *c);
#line 75 "pattern2.cpp"
  bool ishex1(cell *c);
#line 95 "pattern2.cpp"
  int chessvalue(cell *c);
#line 131 "pattern2.cpp"
  int emeraldval(heptagon *h);
#line 133 "pattern2.cpp"
  int emeraldval(cell *c);
#line 182 "pattern2.cpp"
  int cdist50(cell *c);
#line 214 "pattern2.cpp"
  bool polara50(cell *c);
#line 226 "pattern2.cpp"
  bool polarb50(cell *c);
#line 243 "pattern2.cpp"
  int fiftyval049(heptagon *h);
#line 259 "pattern2.cpp"
  int fiftyval049(cell *c);
#line 296 "pattern2.cpp"
  int fiftyval200(cell *c);
#line 334 "pattern2.cpp"
  int zebra40(cell *c);
#line 396 "pattern2.cpp"
  int zebra3(cell *c);
  #if CAP_FIELD
  namespace fieldpattern {
#line 416 "pattern2.cpp"
    pair<int, bool> fieldval(cell *c);
#line 422 "pattern2.cpp"
    int fieldval_uniq(cell *c);
#line 465 "pattern2.cpp"
    int fieldval_uniq_rand(cell *c, int randval);
    }
  #endif
#line 512 "pattern2.cpp"
  int getHemisphere(heptagon *h, int which);
#line 541 "pattern2.cpp"
  int getHemisphere(cell *c, int which);
  namespace patterns {
#line 617 "pattern2.cpp"
    enum ePattern : char {
    PAT_NONE = 0,
    PAT_TYPES = 'T',
    PAT_ZEBRA = 'z',
    PAT_EMERALD = 'f',
    PAT_PALACE = 'p',
    PAT_FIELD = 'F',
    PAT_DOWN = 'H',
    PAT_COLORING = 'C',
    PAT_SIBLING = 'S',
    PAT_CHESS = 'c',
    PAT_SINGLETYPE = 't'
    };  
    
    static constexpr int SPF_ROT = 1;
    static constexpr int SPF_SYM01 = 2;
    static constexpr int SPF_SYM02 = 4;
    static constexpr int SPF_SYM03 = 8;
    static constexpr int SPF_CHANGEROT = 16;
    static constexpr int SPF_TWOCOL = 32;
    static constexpr int SPF_EXTRASYM = 64;
    static constexpr int SPF_ALTERNATE = 128;
    static constexpr int SPF_FOOTBALL = 256;
    static constexpr int SPF_FULLSYM = 512;
    static constexpr int SPF_DOCKS = 1024;
    static constexpr int SPF_NO_SUBCODES = 2048;
    
    static constexpr int SPF_SYM0123 = SPF_SYM01 | SPF_SYM02 | SPF_SYM03;
    
    struct patterninfo {
    int id;
    int dir;
    bool reflect;
    /** 1 if all symmetries, c->type if no symmetries */
    int symmetries;
    };
#line 702 "pattern2.cpp"
    int downdir(cell *c, const cellfunction& cf);
#line 785 "pattern2.cpp"
    void val38(cell *c, patterninfo &si, int sub, int pat);
#line 1013 "pattern2.cpp"
    extern ePattern whichPattern;
#line 1015 "pattern2.cpp"
    extern int subpattern_flags;
#line 1052 "pattern2.cpp"
    patterninfo getpatterninfo(cell *c, ePattern pat, int sub);
#line 1275 "pattern2.cpp"
    inline patterninfo getpatterninfo0(cell *c) {
    return getpatterninfo(c, whichPattern, subpattern_flags);
    }
    }
#line 1282 "pattern2.cpp"
  bool geosupport_chessboard();
#line 1295 "pattern2.cpp"
  int geosupport_threecolor();
#line 1316 "pattern2.cpp"
  int geosupport_football();
#line 1346 "pattern2.cpp"
  int pattern_threecolor(cell *c);
#line 1470 "pattern2.cpp"
  bool pseudohept(cell *c);
#line 1506 "pattern2.cpp"
  bool pseudohept_r(cell *c);
#line 1514 "pattern2.cpp"
  bool kraken_pseudohept(cell *c);
#line 1538 "pattern2.cpp"
  bool warptype(cell *c);
  namespace ccolor {
#line 1550 "pattern2.cpp"
    struct data;
    using color_function = std::function<color_t(cell *c, data& cco)>;
    
    struct data {
    string name;
    bool_reaction_t available;
    color_function f;
    colortable ctab;
    data(string name, bool_reaction_t av, color_function f, const colortable& ctab) : name(name), available(av), f(f), ctab(ctab) {}
    color_t operator () (cell *c) { return f(c, *this); }
    };
#line 1563 "pattern2.cpp"
    extern color_t apeirogonal_color;
#line 1565 "pattern2.cpp"
    extern int jhole;
#line 1566 "pattern2.cpp"
    extern int jblock;
#line 1567 "pattern2.cpp"
    extern ld rwalls;
#line 1568 "pattern2.cpp"
    extern bool live_canvas;
#line 1570 "pattern2.cpp"
    void edit_rwalls();
#line 1575 "pattern2.cpp"
    extern hookset<int(cell*)> hooks_generate_canvas;
#line 1577 "pattern2.cpp"
    int generateCanvas(cell *c);
#line 1588 "pattern2.cpp"
    bool always_available();
#line 1607 "pattern2.cpp"
    extern data shape;
#line 1629 "pattern2.cpp"
    extern data shape_mirror;
#line 1639 "pattern2.cpp"
    extern data sides;
#line 1650 "pattern2.cpp"
    extern map<cell*, pair<int, ld>> percentages;
#line 1653 "pattern2.cpp"
    extern data plain;
#line 1665 "pattern2.cpp"
    extern ld random_bright;
#line 1667 "pattern2.cpp"
    extern data random;
#line 1675 "pattern2.cpp"
    extern string color_formula;
#line 1677 "pattern2.cpp"
    extern data formula;
#line 1684 "pattern2.cpp"
    extern data threecolor;
#line 1688 "pattern2.cpp"
    extern data football;
#line 1692 "pattern2.cpp"
    extern data chessboard;
#line 1696 "pattern2.cpp"
    extern data landscape;
#line 1700 "pattern2.cpp"
    extern data landscape_dark;
#line 1704 "pattern2.cpp"
    extern data seven;
#line 1708 "pattern2.cpp"
    extern data crystal_colors;
#line 1711 "pattern2.cpp"
    extern data crystal_cage;
#line 1714 "pattern2.cpp"
    extern data crystal_hyperplanes;
#line 1717 "pattern2.cpp"
    extern data crystal_honeycomb;
#line 1720 "pattern2.cpp"
    extern data crystal_diagonal;
#line 1723 "pattern2.cpp"
    extern data nil_penrose;
#line 1726 "pattern2.cpp"
    extern data jmap;
#line 1738 "pattern2.cpp"
    extern data distance;
#line 1748 "pattern2.cpp"
    extern data randbw;
    #if CAP_FIELD
#line 1755 "pattern2.cpp"
    extern data field_c;
#line 1766 "pattern2.cpp"
    extern data field_d;
#line 1773 "pattern2.cpp"
    extern data field_n;
#line 1783 "pattern2.cpp"
    extern data field_s;
    #endif
#line 1789 "pattern2.cpp"
    extern data zebra_pattern;
#line 1793 "pattern2.cpp"
    extern data zebra_triangles;
#line 1799 "pattern2.cpp"
    extern data zebra_stripes;
#line 1805 "pattern2.cpp"
    extern data emerald_pattern;
#line 1809 "pattern2.cpp"
    extern data palace_elements;
#line 1813 "pattern2.cpp"
    extern data palace_domains;
#line 1819 "pattern2.cpp"
    extern data masters;
#line 1823 "pattern2.cpp"
    extern data hat_in_cluster;
#line 1828 "pattern2.cpp"
    extern data hat_clusters;
#line 1833 "pattern2.cpp"
    extern data hat_superclusters;
#line 1838 "pattern2.cpp"
    extern data manifold_nearer;
#line 1842 "pattern2.cpp"
    extern data manifold_furthest;
#line 1846 "pattern2.cpp"
    extern vector<data*> all;
#line 1860 "pattern2.cpp"
    extern data *which;
#line 1862 "pattern2.cpp"
    void set_plain(color_t col);
#line 1863 "pattern2.cpp"
    void set_random(int r);
#line 1864 "pattern2.cpp"
    void set_formula(const string& s);
#line 1865 "pattern2.cpp"
    void set_colors(data& d, const colortable& tab);
#line 1888 "pattern2.cpp"
    void config_formula(bool instant);
#line 1959 "pattern2.cpp"
    data *legacy(char c);
    }
#line 1967 "pattern2.cpp"
  color_t random_landscape(cell *c, int mul, int div, int step, color_t base);
  namespace patterns {
#line 1986 "pattern2.cpp"
    extern int subcanvas;
#line 1987 "pattern2.cpp"
    extern bool displaycodes;
#line 1988 "pattern2.cpp"
    extern char whichShape;
#line 1989 "pattern2.cpp"
    extern bool innerwalls;
#line 1991 "pattern2.cpp"
    int sevenval(cell *c);
#line 1999 "pattern2.cpp"
    color_t nearer_map(cell *c);
#line 2039 "pattern2.cpp"
    color_t furthest_map(cell *c, int reduce);
#line 2066 "pattern2.cpp"
    color_t compute_map_function(cell *c, const string& formula);
#line 2209 "pattern2.cpp"
    void showPrePattern();
#line 2210 "pattern2.cpp"
    void showPrePatternNoninstant();
#line 2219 "pattern2.cpp"
    void showPattern();
#line 2395 "pattern2.cpp"
    bool compatible(cpatterntype oldp, cpatterntype newp);
#line 2505 "pattern2.cpp"
    extern cpatterntype cgroup, old_cgroup;
#line 2576 "pattern2.cpp"
    void computeCgroup();
#line 2603 "pattern2.cpp"
    void pushChangeablePatterns();
    }
#line 2609 "pattern2.cpp"
  bool is_master(cell *c);
  namespace linepatterns {
#line 2617 "pattern2.cpp"
    struct linepattern {
    string lpname;
    color_t color;
    ld multiplier;
    function<bool()> is_available;
    function<void(linepattern*)> renderer;
    
    linepattern(string _lpname, color_t _color, function<bool()> _av, function<void(linepattern*)> _rend) : 
    lpname(_lpname), color(_color), multiplier(1), is_available(_av), renderer(_rend) {}
    };
#line 2682 "pattern2.cpp"
    extern ld dual_length;
#line 2683 "pattern2.cpp"
    extern trans23 dual_angle;
#line 2761 "pattern2.cpp"
    extern ld tree_starter;
#line 2763 "pattern2.cpp"
    extern linepattern patTree;
#line 2798 "pattern2.cpp"
    extern linepattern patZebraTriangles;
#line 2811 "pattern2.cpp"
    extern linepattern patZebraLines;
#line 2864 "pattern2.cpp"
    extern linepattern patPalace;
#line 2924 "pattern2.cpp"
    extern linepattern patTriRings;
#line 2941 "pattern2.cpp"
    extern linepattern patTriTree;
#line 2952 "pattern2.cpp"
    extern linepattern patTriWalls;
#line 2992 "pattern2.cpp"
    extern ld mp_ori;
#line 2993 "pattern2.cpp"
    extern ld meridian_max;
#line 2994 "pattern2.cpp"
    extern ld meridian_count;
#line 2995 "pattern2.cpp"
    extern ld meridian_length;
#line 2996 "pattern2.cpp"
    extern ld meridian_prec;
#line 2997 "pattern2.cpp"
    extern ld meridian_prec2;
#line 2998 "pattern2.cpp"
    extern linepattern patMeridians;
#line 3014 "pattern2.cpp"
    extern ld parallel_count;
#line 3015 "pattern2.cpp"
    extern ld parallel_max;
#line 3016 "pattern2.cpp"
    extern ld parallel_length;
#line 3085 "pattern2.cpp"
    extern linepattern patTriTree, patTriRings, patTriWalls, patDual;
#line 3088 "pattern2.cpp"
    extern vector<linepattern*> patterns;
#line 3099 "pattern2.cpp"
    void clearAll();
#line 3103 "pattern2.cpp"
    extern ld width;
#line 3105 "pattern2.cpp"
    void drawAll();
#line 3124 "pattern2.cpp"
    void showMenu();
    }

  // implemented in: mapeditor.cpp

  namespace mapeditor {
#line 14 "mapeditor.cpp"
    extern int map_version;
#line 16 "mapeditor.cpp"
    extern bool drawing_tool;
#line 17 "mapeditor.cpp"
    extern bool intexture;
#line 18 "mapeditor.cpp"
    extern bool snapping;
#line 19 "mapeditor.cpp"
    extern bool building_mode;
#line 22 "mapeditor.cpp"
    enum eShapegroup { sgPlayer, sgMonster, sgItem, sgFloor, sgWall };
    static constexpr int USERSHAPEGROUPS = 5;
#line 26 "mapeditor.cpp"
    extern color_t dtfill;
#line 27 "mapeditor.cpp"
    extern color_t dtcolor;
#line 28 "mapeditor.cpp"
    extern ld dtwidth;
#line 162 "mapeditor.cpp"
    void clear_dtshapes();
#line 164 "mapeditor.cpp"
    shiftpoint full_mouseh();
#line 172 "mapeditor.cpp"
    void draw_dtshapes();
#line 214 "mapeditor.cpp"
    void dt_add_line(shiftpoint h1, shiftpoint h2, int maxl);
#line 237 "mapeditor.cpp"
    void dt_add_circle(shiftpoint h1, shiftpoint h2);
#line 252 "mapeditor.cpp"
    void dt_add_text(shiftpoint h, ld size, string cap);
#line 286 "mapeditor.cpp"
    void dt_finish();
#line 291 "mapeditor.cpp"
    void torus_rug_jump(shiftpoint& h, shiftpoint last);
#line 305 "mapeditor.cpp"
    void dt_add_free(shiftpoint h);
#line 327 "mapeditor.cpp"
    void dt_erase(shiftpoint h);
#line 345 "mapeditor.cpp"
    extern shiftpoint lstart;
#line 346 "mapeditor.cpp"
    extern hyperpoint lstart_rel;
#line 354 "mapeditor.cpp"
    struct editwhat {
    double dist;
    int rotid, symid, pointid;
    bool side;
    cell *c;
    };
#line 361 "mapeditor.cpp"
    extern editwhat ew, ewsearch;
#line 362 "mapeditor.cpp"
    extern bool autochoose;
#line 364 "mapeditor.cpp"
    void scaleall(ld z, bool keep_mouse);
    #if CAP_EDIT
#line 391 "mapeditor.cpp"
    extern map<int, cell*> modelcell;
#line 395 "mapeditor.cpp"
    void applyModelcell(cell *c);
    #endif
    }
#line 420 "mapeditor.cpp"
  struct hstream;
  struct fhstream;
  namespace mapstream {
    #if CAP_EDIT
#line 427 "mapeditor.cpp"
    extern std::map<cell*, int> cellids;
#line 428 "mapeditor.cpp"
    extern vector<cell*> cellbyid;
#line 429 "mapeditor.cpp"
    extern vector<char> relspin;
#line 472 "mapeditor.cpp"
    int fixspin(int rspin, int dir, int t, int vernum);
    #endif
#line 484 "mapeditor.cpp"
    void save_geometry(hstream& f);
#line 580 "mapeditor.cpp"
    void load_geometry(hstream& f);
#line 728 "mapeditor.cpp"
    extern hookset<void(hstream&)> hooks_savemap, hooks_loadmap_old;
#line 729 "mapeditor.cpp"
    extern hookset<void(hstream&, int)> hooks_loadmap;
#line 731 "mapeditor.cpp"
    cell *save_start();
    #if CAP_EDIT  
#line 1195 "mapeditor.cpp"
    bool saveMap(const char *fname);
#line 1202 "mapeditor.cpp"
    void saveMap(hstream& f);
#line 1232 "mapeditor.cpp"
    bool loadMap(const string& fname);
#line 1238 "mapeditor.cpp"
    bool loadMap(hstream& f);
    #endif
    }
  namespace mapeditor {
#line 1288 "mapeditor.cpp"
    extern bool drawplayer;
#line 1290 "mapeditor.cpp"
    extern cell *drawcell;
    #if CAP_EDIT
#line 1426 "mapeditor.cpp"
    extern set<cell*> affected;
#line 1427 "mapeditor.cpp"
    extern set<int> affected_id;
#line 1429 "mapeditor.cpp"
    void showMapEditor();
#line 1487 "mapeditor.cpp"
    eShapegroup drawcellShapeGroup();
#line 1495 "mapeditor.cpp"
    int drawcellShapeID();
#line 1921 "mapeditor.cpp"
    extern shiftmatrix drawtrans, drawtransnew;
#line 1933 "mapeditor.cpp"
    void drawGhosts(cell *c, const shiftmatrix& V, int ct);
#line 1962 "mapeditor.cpp"
    shiftpoint find_mouseh3();
#line 2004 "mapeditor.cpp"
    void drawGrid();
#line 2122 "mapeditor.cpp"
    shiftpoint mouse_snap();
#line 2143 "mapeditor.cpp"
    void showDrawEditor();
    #endif
#line 3051 "mapeditor.cpp"
    void initdraw(cell *c);
#line 3066 "mapeditor.cpp"
    void queue_hcircle(shiftmatrix Ctr, ld radius);
    #if CAP_POLY
#line 3080 "mapeditor.cpp"
    bool haveUserShape(eShapegroup group, int id);
    #endif
    #if CAP_TEXTURE      
#line 3090 "mapeditor.cpp"
    void draw_texture_ghosts(cell *c, const shiftmatrix& V);
    #endif
    #if CAP_POLY
#line 3126 "mapeditor.cpp"
    bool drawUserShape(const shiftmatrix& V, eShapegroup group, int id, color_t color, cell *c, PPR prio IS(PPR::DEFAULT));
    #endif
#line 3271 "mapeditor.cpp"
    string canvasFloorName(int id);
#line 3284 "mapeditor.cpp"
    void map_settings();
    }
  #if CAP_EDIT
#line 3350 "mapeditor.cpp"
  extern string levelfile;
#line 3351 "mapeditor.cpp"
  extern const char *loadlevel;
#line 3352 "mapeditor.cpp"
  extern string picfile;
  #endif

  // implemented in: graph.cpp

#line 11 "graph.cpp"
  extern int last_firelimit;
#line 12 "graph.cpp"
  extern int firelimit;
#line 14 "graph.cpp"
  extern int inmirrorcount;
#line 17 "graph.cpp"
  extern bool wallopt;
#line 19 "graph.cpp"
  bool in_wallopt();
#line 21 "graph.cpp"
  extern bool spatial_graphics;
#line 22 "graph.cpp"
  extern bool wmspatial, wmescher, wmplain, wmblack, wmascii, wmascii3;
#line 23 "graph.cpp"
  extern bool mmspatial, mmhigh, mmmon, mmitem;
#line 25 "graph.cpp"
  extern int detaillevel;
#line 27 "graph.cpp"
  extern bool first_cell_to_draw;
#line 29 "graph.cpp"
  bool in_perspective();
#line 33 "graph.cpp"
  bool in_perspective_v();
#line 37 "graph.cpp"
  bool hide_player();
#line 45 "graph.cpp"
  transmatrix ddspin180(cell *c, int dir);
#line 46 "graph.cpp"
  transmatrix iddspin180(cell *c, int dir);
#line 49 "graph.cpp"
  template<class T>
  class span {
  T *begin_ = nullptr;
  T *end_ = nullptr;
  
  public:
  explicit span() = default;
  explicit span(T *p, int n) : begin_(p), end_(p + n) {}
  T *begin() const { return begin_; }
  T *end() const { return end_; }
  };
  
  template<class Map, class Key>
  hr::span<const shiftmatrix> span_at(const Map& map, const Key& key) {
  auto it = map.find(key);
  return (it == map.end()) ? hr::span<const shiftmatrix>() : hr::span<const shiftmatrix>(it->second.data(), it->second.size());
  }
#line 68 "graph.cpp"
  extern hookset<bool(int sym, int uni)> hooks_handleKey;
#line 69 "graph.cpp"
  extern hookset<bool(cell *c, const shiftmatrix& V)> hooks_drawcell;
#line 70 "graph.cpp"
  extern purehookset hooks_frame, hooks_markers;
#line 72 "graph.cpp"
  extern ld animation_factor;
#line 73 "graph.cpp"
  extern int animation_lcm;
#line 75 "graph.cpp"
  ld ptick(int period, ld phase IS(0));
#line 80 "graph.cpp"
  ld fractick(int period, ld phase IS(0));
#line 87 "graph.cpp"
  ld sintick(int period, ld phase IS(0));
#line 91 "graph.cpp"
  transmatrix spintick(int period, ld phase IS(0));
#line 103 "graph.cpp"
  extern bool inHighQual; // taking high quality screenshot
#line 104 "graph.cpp"
  extern bool auraNOGL;    // aura without GL
#line 109 "graph.cpp"
  extern int ticks;
#line 110 "graph.cpp"
  extern int frameid;
#line 112 "graph.cpp"
  extern bool camelotcheat;
#line 113 "graph.cpp"
  extern bool nomap;
#line 115 "graph.cpp"
  extern eItem orbToTarget;
#line 116 "graph.cpp"
  extern eMonster monsterToSummon;
#line 118 "graph.cpp"
  extern int sightrange_bonus;
#line 120 "graph.cpp"
  extern string mouseovers;
#line 122 "graph.cpp"
  extern int darken;
#line 133 "graph.cpp"
  bool doHighlight();
#line 145 "graph.cpp"
  int flip_dark(int f, int a0, int a1);
#line 167 "graph.cpp"
  extern int lightat, safetyat;
#line 168 "graph.cpp"
  void drawLightning();
#line 169 "graph.cpp"
  void drawSafety();
#line 171 "graph.cpp"
  void drawShield(const shiftmatrix& V, eItem it);
#line 249 "graph.cpp"
  ld cheilevel(ld v);
#line 253 "graph.cpp"
  transmatrix chei(const transmatrix V, int a, int b);
#line 262 "graph.cpp"
  shiftmatrix chei(const shiftmatrix V, int a, int b);
#line 346 "graph.cpp"
  transmatrix lpispin();
#line 350 "graph.cpp"
  void drawPlayerEffects(const shiftmatrix& V, const shiftmatrix& Vparam, cell *c, eMonster m);
  namespace tortoise {
#line 520 "graph.cpp"
    int getMatchColor(int bits);
    }
#line 541 "graph.cpp"
  extern bool ivoryz;
#line 544 "graph.cpp"
  transmatrix at_smart_lof(const transmatrix& V, ld lev);
#line 550 "graph.cpp"
  shiftmatrix at_smart_lof(const shiftmatrix& V, ld lev);
#line 607 "graph.cpp"
  extern bool noshadow;
  #if CAP_SHAPES
#line 610 "graph.cpp"
  void ShadowV(const shiftmatrix& V, const hpcshape& bp, PPR prio IS(PPR::MONSTER_SHADOW));
  #endif
#line 738 "graph.cpp"
  bool drawstar(cell *c);
#line 746 "graph.cpp"
  bool drawing_usershape_on(cell *c, mapeditor::eShapegroup sg);
#line 754 "graph.cpp"
  color_t kind_outline(eItem it);
#line 764 "graph.cpp"
  shiftmatrix face_the_player(const shiftmatrix V);
#line 782 "graph.cpp"
  hpcshape& orbshape(eOrbshape s);
#line 814 "graph.cpp"
  color_t orb_auxiliary_color(eItem it);
#line 836 "graph.cpp"
  color_t orb_inner_color(eItem it);
#line 847 "graph.cpp"
  void draw_ascii(const shiftmatrix& V, char glyph, color_t col, ld size);
#line 857 "graph.cpp"
  void queue_goal_text(shiftpoint P1, ld sizemul, const string& s, color_t color);
#line 870 "graph.cpp"
  bool mark_compass(cell *c, shiftpoint& P1);
#line 887 "graph.cpp"
  bool drawItemType(eItem it, cell *c, const shiftmatrix& V, color_t icol, int pticks, bool hidden);
  #if CAP_SHAPES
#line 1285 "graph.cpp"
  void drawTerraWarrior(const shiftmatrix& V, int t, int hp, double footphase);
  #endif
#line 1305 "graph.cpp"
  void drawPlayer(eMonster m, cell *where, const shiftmatrix& V, color_t col, double footphase, bool stop IS(false));
#line 1502 "graph.cpp"
  int wingphase(int period, int phase IS(0));
#line 1613 "graph.cpp"
  bool drawMonsterType(eMonster m, cell *where, const shiftmatrix& V1, color_t col, double footphase, color_t asciicol);
#line 2658 "graph.cpp"
  extern shiftmatrix playerV;
#line 2660 "graph.cpp"
  bool applyAnimation(cell *c, shiftmatrix& V, double& footphase, int layer);
#line 2760 "graph.cpp"
  int cellcolor(cell *c);
#line 2805 "graph.cpp"
  extern bool dont_face_pc;
#line 2807 "graph.cpp"
  extern shiftmatrix die_target;
#line 2809 "graph.cpp"
  bool drawMonster(const shiftmatrix& Vparam, int ct, cell *c, color_t col, color_t asciicol);
#line 3292 "graph.cpp"
  int haveaura();
#line 3306 "graph.cpp"
  void clearaura();
#line 3326 "graph.cpp"
  void addauraspecial(shiftpoint h, color_t col, int dir);
#line 3333 "graph.cpp"
  void addaura(shiftpoint h, color_t col, int fd);
#line 3366 "graph.cpp"
  void drawaura();
#line 3521 "graph.cpp"
  extern colortable minecolors;
#line 3526 "graph.cpp"
  extern colortable distcolors;
#line 3531 "graph.cpp"
  extern const char* minetexts[8];
#line 3542 "graph.cpp"
  int countMinesAround(cell *c);
#line 3550 "graph.cpp"
  transmatrix applyPatterndir(cell *c, const patterns::patterninfo& si);
#line 3558 "graph.cpp"
  transmatrix applyDowndir(cell *c, const cellfunction& cf);
#line 3609 "graph.cpp"
  int celldistAltPlus(cell *c);
#line 3615 "graph.cpp"
  color_t reptilecolor(cell *c);
#line 3645 "graph.cpp"
  extern colortable nestcolors;
#line 3649 "graph.cpp"
  void init_floorcolors();
#line 3696 "graph.cpp"
  color_t magma_color(int id);
#line 3710 "graph.cpp"
  bool has_nice_dual();
#line 3730 "graph.cpp"
  bool is_nice_dual(cell *c);
#line 3734 "graph.cpp"
  bool use_swapped_duals();
  #if CAP_SHAPES
#line 3739 "graph.cpp"
  void floorShadow(cell *c, const shiftmatrix& V, color_t col);
#line 3752 "graph.cpp"
  bool use_warp_graphics();
#line 3759 "graph.cpp"
  void escherSidewall(cell *c, int sidepar, const shiftmatrix& V, color_t col);
#line 3788 "graph.cpp"
  bool placeSidewall(cell *c, int i, int sidepar, const shiftmatrix& V, color_t col);
  #endif
#line 3855 "graph.cpp"
  extern color_t stdgridcolor;
#line 3857 "graph.cpp"
  int gridcolor(cell *c1, cell *c2);
  #if CAP_SHAPES
#line 3881 "graph.cpp"
  void pushdown(cell *c, int& q, const shiftmatrix &V, double down, bool rezoom, bool repriority);
  #endif
#line 3942 "graph.cpp"
  int shallow(cell *c);
#line 3963 "graph.cpp"
  extern bool bright;
#line 3964 "graph.cpp"
  extern int canvasdark;
#line 3967 "graph.cpp"
  int getfd(cell *c);
#line 4027 "graph.cpp"
  extern bool just_gmatrix;
#line 4029 "graph.cpp"
  int colorhash(color_t i);
#line 4033 "graph.cpp"
  extern int mine_opacity;
#line 4035 "graph.cpp"
  bool isWall3(cell *c, color_t& wcol);
#line 4046 "graph.cpp"
  bool isWall3(cell *c);
#line 4048 "graph.cpp"
  bool isSulphuric(eWall w);
#line 4056 "graph.cpp"
  color_t transcolor(cell *c, cell *c2, color_t wcol);
#line 4091 "graph.cpp"
  int get_darkval(cell *c, int d);
#line 4130 "graph.cpp"
  ld mousedist(shiftmatrix T);
#line 4141 "graph.cpp"
  extern int noclipped;
#line 4143 "graph.cpp"
  extern bool frustum_culling;
#line 4145 "graph.cpp"
  extern ld threshold, xyz_threshold;
#line 4147 "graph.cpp"
  extern bool clip_checked;
#line 4149 "graph.cpp"
  bool other_stereo_mode();
#line 4251 "graph.cpp"
  extern ld precise_width;
#line 4255 "graph.cpp"
  extern bool fat_edges;
#line 4257 "graph.cpp"
  void gridline(const shiftmatrix& V1, const hyperpoint h1, const shiftmatrix& V2, const hyperpoint h2, color_t col, int prec);
#line 4321 "graph.cpp"
  void gridline(const shiftmatrix& V, const hyperpoint h1, const hyperpoint h2, color_t col, int prec);
#line 4325 "graph.cpp"
  subcellshape& generate_subcellshape_if_needed(cell *c, int id);
#line 4410 "graph.cpp"
  void queue_transparent_wall(const shiftmatrix& V, hpcshape& sh, color_t color);
  #if MAXMDIM >= 4
#line 4423 "graph.cpp"
  int ceiling_category(cell *c);
  #endif
#line 4540 "graph.cpp"
  void set_detail_level(const shiftmatrix& V);
#line 4578 "graph.cpp"
  void drawBubble(cell *c, color_t col, string s, ld size);
#line 4586 "graph.cpp"
  void drawFlash(cell *c);
#line 4589 "graph.cpp"
  void drawBigFlash(cell *c);
#line 4593 "graph.cpp"
  void drawParticleSpeed(cell *c, color_t col, int speed);
#line 4598 "graph.cpp"
  void drawParticle(cell *c, color_t col, int maxspeed IS(100));
#line 4602 "graph.cpp"
  void drawDirectionalParticle(cell *c, int dir, color_t col, int maxspeed IS(100));
#line 4614 "graph.cpp"
  void drawParticles(cell *c, color_t col, int qty, int maxspeed IS(100));
#line 4618 "graph.cpp"
  void drawFireParticles(cell *c, int qty, int maxspeed IS(100));
#line 4623 "graph.cpp"
  void fallingFloorAnimation(cell *c, eWall w IS(waNone), eMonster m IS(moNone));
#line 4631 "graph.cpp"
  void fallingMonsterAnimation(cell *c, eMonster m, int id IS(multi::cpid));
  #if CAP_QUEUE
#line 4691 "graph.cpp"
  void queuecircleat1(cell *c, const shiftmatrix& V, double rad, color_t col);
#line 4730 "graph.cpp"
  void queuecircleat(cell *c, double rad, color_t col);
  #endif
#line 4743 "graph.cpp"
  cell *forwardcell();
#line 4754 "graph.cpp"
  extern bool draw_centerover;
#line 4756 "graph.cpp"
  bool should_draw_mouse_cursor();
#line 4763 "graph.cpp"
  void drawMarkers();
  #if CAP_QUEUE
#line 5011 "graph.cpp"
  void draw_flash(struct flashdata& f, const shiftmatrix& V, bool& kill);
  #endif
#line 5100 "graph.cpp"
  bool allowIncreasedSight();
#line 5114 "graph.cpp"
  bool allowChangeRange();
#line 5125 "graph.cpp"
  extern purehookset hooks_drawmap;
#line 5127 "graph.cpp"
  extern transmatrix actual_view_transform;
#line 5129 "graph.cpp"
  ld wall_radar(cell *c, transmatrix T, transmatrix LPe, ld max);
#line 5150 "graph.cpp"
  extern bool nonisotropic_weird_transforms;
#line 5152 "graph.cpp"
  void decide_lpu();
#line 5156 "graph.cpp"
  void make_actual_view();
#line 5190 "graph.cpp"
  shiftmatrix cview(ld base_shift IS(0));
#line 5194 "graph.cpp"
  extern int point_direction;
#line 5196 "graph.cpp"
  int through_wall(cell *c, hyperpoint at);
#line 5206 "graph.cpp"
  void precise_mouseover();
#line 5275 "graph.cpp"
  extern transmatrix Viewbase;
#line 5277 "graph.cpp"
  extern bool no_wall_rendering;
#line 5279 "graph.cpp"
  extern bool set_multi;
#line 5280 "graph.cpp"
  extern hyperpoint multi_point;
#line 5282 "graph.cpp"
  void center_multiplayer_map(const vector<hyperpoint>& hs);
#line 5294 "graph.cpp"
  void drawthemap();
#line 5459 "graph.cpp"
  void drawmovestar(double dx, double dy);
#line 5514 "graph.cpp"
  extern bool dronemode;
#line 5518 "graph.cpp"
  extern int corner_centering;
#line 5520 "graph.cpp"
  extern bool permaside;
#line 5522 "graph.cpp"
  extern bool old_center;
#line 5524 "graph.cpp"
  extern ld min_scale;
#line 5526 "graph.cpp"
  extern int forced_center_down;
#line 5528 "graph.cpp"
  ld get_stereo_param();
#line 5533 "graph.cpp"
  void calcparam();
#line 5600 "graph.cpp"
  extern function<void()> wrap_drawfullmap;
#line 5604 "graph.cpp"
  void drawfullmap();
#line 5672 "graph.cpp"
  extern bool just_refreshing;
#line 5674 "graph.cpp"
  extern int menu_darkening;
#line 5675 "graph.cpp"
  extern bool centered_menus;
#line 5677 "graph.cpp"
  extern string menu_format;
#line 5679 "graph.cpp"
  void gamescreen();
#line 5782 "graph.cpp"
  void emptyscreen();
#line 5788 "graph.cpp"
  extern int nohelp;
#line 5789 "graph.cpp"
  extern bool no_find_player;
#line 5791 "graph.cpp"
  void normalscreen();
#line 5825 "graph.cpp"
  extern vector< function<void()> > screens;
#line 5828 "graph.cpp"
  template<class T> void pushScreen(const T& x) { screens.push_back(x); } 
  inline void popScreen() { if(isize(screens)>1) screens.pop_back(); }
  inline void popScreenAll() { while(isize(screens)>1) popScreen(); }
  typedef void (*cfunction)();
#line 5834 "graph.cpp"
  cfunction current_screen_cfunction();
#line 5841 "graph.cpp"
  namespace sm {
  static constexpr int NORMAL = 1;
  static constexpr int MISSION = 2;
  static constexpr int HELP = 4;
  static constexpr int MAP = 8;
  static constexpr int DRAW = 16;
  static constexpr int NUMBER = 32;
  static constexpr int SHMUPCONFIG = 64;
  static constexpr int OVERVIEW = 128;
  static constexpr int SIDE = 256;
  static constexpr int DOTOUR = 512;
  static constexpr int CENTER = 1024;
  static constexpr int ZOOMABLE = 4096;
  static constexpr int TORUSCONFIG = 8192;
  static constexpr int MAYDARK = 16384;
  static constexpr int DIALOG_STRICT_X = 32768; // do not interpret dialog clicks outside of the X region
  static constexpr int EXPANSION = (1<<16);
  static constexpr int HEXEDIT = (1<<17);
  static constexpr int VR_MENU = (1<<18); // always show the menu in VR
  static constexpr int SHOWCURSOR = (1<<19); // despite MAP/DRAW always show the cursor, no panning
  static constexpr int PANNING = (1<<20); // smooth scrolling works
  static constexpr int DARKEN = (1<<21); // darken the game background
  static constexpr int NOSCR = (1<<22); // do not show the game background
  static constexpr int AUTO_VALUES = (1<<23); // automatic place for values
  static constexpr int NARROW_LINES = (1<<24); // do make the lines narrower if we needed to reduce width
  static constexpr int EDIT_BEFORE_WALLS = (1<<25); // mouseover targets before walls
  static constexpr int EDIT_INSIDE_WALLS = (1<<26); // mouseover targets inside walls
  static constexpr int DIALOG_WIDE = (1<<27); // make dialogs wide
  static constexpr int MOUSEAIM = (1<<28); // mouse aiming active here
  }
#line 5873 "graph.cpp"
  extern int cmode;
#line 5875 "graph.cpp"
  extern bool dont_display_minecount;
#line 5877 "graph.cpp"
  extern color_t titlecolor;
#line 5879 "graph.cpp"
  void drawscreen();
#line 6009 "graph.cpp"
  void restartGraph();
#line 6016 "graph.cpp"
  void clearAnimations();
#line 6041 "graph.cpp"
  struct animation {
  int ltick;
  double footphase;
  transmatrix wherenow;
  int attacking; /** 0 = no attack animation, 1 = first phase, 2 = second phase, 3 = hugging */
  transmatrix attackat;
  bool mirrored;
  eItem thrown_item; /** for thrown items */
  };
  
  // we need separate animation layers for Orb of Domination and Tentacle+Ghost,
  // and also to mark Boats
  #define ANIMLAYERS 4
  #define LAYER_BIG   0 // for worms and krakens
  #define LAYER_SMALL 1 // for others
  #define LAYER_BOAT  2 // mark that a boat has moved
  #define LAYER_THROW 3 // for thrown items
#line 6060 "graph.cpp"
  extern array<map<cell*, animation>, ANIMLAYERS> animations;
#line 6062 "graph.cpp"
  int revhint(cell *c, int hint);
#line 6067 "graph.cpp"
  transmatrix adj(const movei& m);
#line 6072 "graph.cpp"
  transmatrix iadj(const movei& m);
#line 6077 "graph.cpp"
  void animateMovement(const movei& m, int layer);
#line 6100 "graph.cpp"
  void animate_item_throw(cell *from, cell *to, eItem it);
#line 6119 "graph.cpp"
  void animateAttackOrHug(const movei& m, int layer, int phase, ld ratio, ld delta);
#line 6131 "graph.cpp"
  void animateAttack(const movei& m, int layer);
#line 6135 "graph.cpp"
  void animateHug(const movei& m, int layer);
#line 6141 "graph.cpp"
  void indAnimateMovement(const movei& m, int layer);
#line 6161 "graph.cpp"
  void commitAnimations(int layer);
#line 6168 "graph.cpp"
  void drawBug(const cellwalker& cw, color_t col);
#line 6178 "graph.cpp"
  bool inscreenrange(cell *c);

  // implemented in: textures.cpp

  #if CAP_TEXTURE
#line 13 "textures.cpp"
  struct texture_triangle {
  array<hyperpoint, 3> v;
  array<shiftpoint, 3> tv;
  texture_triangle(array<hyperpoint, 3> _v, array<shiftpoint, 3> _tv) : v(_v), tv(_tv) {}
  };
  
  struct textureinfo : basic_textureinfo {
  shiftmatrix M;
  vector<texture_triangle> triangles;
  vector<glvertex> vertices;
  cell *c;
  vector<shiftmatrix> matrices;
  
  // these are required to adjust to geometry changes
  int current_type, symmetries;
  };
#line 32 "textures.cpp"
  string find_file(string s);
  namespace texture {
#line 38 "textures.cpp"
    enum eTextureState {
    tsOff, tsAdjusting, tsActive
    };
    
    struct texture_data {
    GLuint textureid;
    
    int twidth, theight;
    bool stretched, original;
    int tx, ty, origdim;
    
    int strx, stry, base_x, base_y;
    
    texture_data() { textureid = 0; twidth = 2048; theight = 0; stretched = false; original = false; }
    
    vector<color_t> texture_pixels;
    
    color_t& get_texture_pixel(int x, int y) {
    return texture_pixels[(y&(theight-1))*twidth+(x&(twidth-1))];
    }
    
    vector<pair<color_t*, color_t>> undos;
    vector<tuple<cell*, shiftpoint, int> > pixels_to_draw;
    
    bool loadTextureGL();
    bool whitetexture();
    bool readtexture(string tn);
    void saveRawTexture(string tn);
    
    void undo();
    void undoLock();
    void update();
    };
    
    struct texture_config {
    string texturename;
    string configname;
    eTextureState tstate;
    eTextureState tstate_max;
    
    transmatrix itt;
    
    color_t grid_color;
    color_t mesh_color;
    color_t master_color;
    color_t slave_color;
    
    int color_alpha;
    
    int gsplits;
    
    int recolor(color_t col);
    
    typedef tuple<eGeometry, eVariation, char, int, eModel, ld, ld> texture_parameters; 
    texture_parameters orig_texture_parameters;
    
    map<int, textureinfo> texture_map, texture_map_orig;
    set<cell*> models;
    
    basic_textureinfo tinf3;
    
    bool texture_tuned;
    string texture_tuner;
    vector<shiftpoint*> tuned_vertices;
    
    bool apply(cell *c, const shiftmatrix &V, color_t col);
    void mark_triangles();
    
    void clear_texture_map();
    void perform_mapping();
    void mapTextureTriangle(textureinfo &mi, const array<hyperpoint, 3>& v, const array<shiftpoint, 3>& tv, int splits);
    void mapTextureTriangle(textureinfo &mi, const array<hyperpoint, 3>& v, const array<shiftpoint, 3>& tv) { mapTextureTriangle(mi, v, tv, gsplits); }
    void mapTexture2(textureinfo& mi);
    void finish_mapping();
    void true_remap();
    void remap();
    bool correctly_mapped;
    hyperpoint texture_coordinates(shiftpoint);
    
    void drawRawTexture();
    void saveFullTexture(string tn);
    
    bool save();
    bool load();
    
    texture_data data;
    
    texture_config() {
    // argh, no member initialization in some of my compilers
    texturename = find_file("textures/hyperrogue-texture.png");
    configname = find_file("textures/hyperrogue.txc");
    itt = Id; 
    grid_color = 0;
    mesh_color = 0;
    master_color = 0xFFFFFF30;
    slave_color = 0xFF000008;
    color_alpha = 128;
    gsplits = 1;
    texture_tuned = false;
    }
    
    };
#line 142 "textures.cpp"
    extern cpatterntype cgroup;
#line 176 "textures.cpp"
    extern texture_config config;
#line 178 "textures.cpp"
    extern bool saving;
#line 491 "textures.cpp"
    extern bool texture_aura;
#line 493 "textures.cpp"
    bool using_aura();
#line 736 "textures.cpp"
    extern vector<string> mpnames;
    #if CAP_EDIT
#line 1262 "textures.cpp"
    void start_editor();
    #endif
#line 1275 "textures.cpp"
    void showMenu();
#line 1581 "textures.cpp"
    extern bool texturesym;
#line 1598 "textures.cpp"
    void drawPixel(cell *c, shiftpoint h, color_t col);
#line 1602 "textures.cpp"
    extern cell *where;
#line 1604 "textures.cpp"
    void drawPixel(shiftpoint h, color_t col);
#line 1626 "textures.cpp"
    void drawLine(shiftpoint h1, shiftpoint h2, color_t col, int steps IS(10));
    #if CAP_TEXTURE
#line 1715 "textures.cpp"
    double get_txp(ld x, ld y, int p);
    #endif
    }
  #endif

  // implemented in: hprint.cpp

#line 11 "hprint.cpp"
  extern FILE *debugfile;
#line 14 "hprint.cpp"
  #define DF_INIT              1 // always display these
  #define DF_MSG               2 // always display these
  #define DF_WARN              4 // always display these
  #define DF_ERROR             8 // always display these
  #define DF_STEAM            16
  #define DF_GRAPH            32
  #define DF_TURN             64
  #define DF_FIELD           128
  #define DF_GEOM            256
  #define DF_MEMORY          512
  #define DF_TIME           1024 // a flag to display timestamps
  #define DF_GP             2048
  #define DF_POLY           4096
  #define DF_LOG            8192
  #define DF_VERTEX        16384
  #define DF_KEYS "imwesxufgbtoplv"
#line 32 "hprint.cpp"
  extern int debugflags;
#line 34 "hprint.cpp"
  extern string s0;
#line 36 "hprint.cpp"
  string its(int i);
#line 38 "hprint.cpp"
  string itsh8(int i);
#line 39 "hprint.cpp"
  string itsh6(int i);
#line 41 "hprint.cpp"
  string fts(ld x, int prec IS(6));
#line 48 "hprint.cpp"
  extern map<void*, int> pointer_indices;
#line 50 "hprint.cpp"
  int index_pointer_int(void *v);
#line 59 "hprint.cpp"
  string index_pointer(void *v);
#line 67 "hprint.cpp"
  extern int stamplen;
#line 69 "hprint.cpp"
  string get_stamp();
#line 82 "hprint.cpp"
  inline string ONOFF(bool b) { return b ? XLAT("ON") : XLAT("OFF"); }
  
  struct hstream {
  color_t vernum;
  virtual void write_char(char c) = 0;
  virtual void write_chars(const char* c, size_t q) { while(q--) write_char(*(c++)); }
  virtual char read_char() = 0;
  virtual void read_chars(char* c, size_t q) { while(q--) *(c++) = read_char(); }
  virtual color_t get_vernum() { return vernum; }
  virtual void flush() {}
  
  hstream() { vernum = VERNUM_HEX; }
  
  template<class T> void write(const T& t) { hwrite(*this, t); }
  template<class T> void read(T& t) { hread(*this, t); }
  template<class T> T get() { T t; hread(*this, t); return t; }
  template<class T> T get_raw() { T t; hread_raw(*this, t); return t; }
  };
  
  template<class T> void hwrite_raw(hstream& hs, const T& c) { hs.write_chars((char*) &c, sizeof(T)); }
  template<class T> void hread_raw(hstream& hs, T& c) { hs.read_chars((char*) &c, sizeof(T)); }
  
  template<class T, typename = typename std::enable_if<std::is_integral<T>::value || std::is_enum<T>::value>::type> void hwrite(hstream& hs, const T& c) { hwrite_raw(hs, c); }
  template<class T, typename = typename std::enable_if<std::is_integral<T>::value || std::is_enum<T>::value>::type> void hread(hstream& hs, T& c) { hread_raw(hs, c); }
  
  inline void hwrite(hstream& hs, const string& s) {
  if(isize(s) >= 255) {
  hs.write_char((char)255);
  hs.write<int>(isize(s));
  }
  else 
  hs.write_char(isize(s));    
  for(char c: s) hs.write_char(c);
  }
  inline void hread(hstream& hs, string& s) {
  s = ""; int l = (unsigned char) hs.read_char(); 
  if(l == 255) l = hs.get<int>();
  for(int i=0; i<l; i++) s += hs.read_char();
  }
  inline void hwrite(hstream& hs, const ld& h) { double d = h; hs.write_chars((char*) &d, sizeof(double)); }
  inline void hread(hstream& hs, ld& h) { double d; hs.read_chars((char*) &d, sizeof(double)); h = d; }
  
  template<class T, size_t X> void hwrite(hstream& hs, const array<T, X>& a) { for(auto &ae: a) hwrite(hs, ae); }
  template<class T, size_t X> void hread(hstream& hs, array<T, X>& a) { for(auto &ae: a) hread(hs, ae); }
  
  inline void hread(hstream& hs, hyperpoint& h) { for(int i=0; i<MDIM; i++) hread(hs, h[i]); }
  inline void hwrite(hstream& hs, hyperpoint h) { for(int i=0; i<MDIM; i++) hwrite(hs, h[i]); }
  
  template<class T> void hwrite(hstream& hs, const vector<T>& a) { hwrite<int>(hs, isize(a)); for(auto &ae: a) hwrite(hs, ae); }
  template<class T> void hread(hstream& hs, vector<T>& a) { a.resize(hs.get<int>()); for(auto &ae: a) hread(hs, ae); }
  
  template<class T, class U> void hwrite(hstream& hs, const map<T,U>& a) { 
  hwrite<int>(hs, isize(a)); for(auto &ae: a) hwrite(hs, ae.first, ae.second);
  }
  template<class T, class U> void hread(hstream& hs, map<T,U>& a) { 
  a.clear();
  int N = hs.get<int>();
  for(int i=0; i<N; i++) {
  T key; hread(hs, key);
  hread(hs, a[key]);
  }
  }
  
  template<class C, class C1, class... CS> void hwrite(hstream& hs, const C& c, const C1& c1, const CS&... cs) { hwrite(hs, c); hwrite(hs, c1, cs...); }
  template<class C, class C1, class... CS> void hread(hstream& hs, C& c, C1& c1, CS&... cs) { hread(hs, c); hread(hs, c1, cs...); }
  
  struct hstream_exception : hr_exception {
  hstream_exception() : hr_exception("hstream_exception") {}
  hstream_exception(const std::string &s) : hr_exception(s) {}
  };
  
  struct fhstream : hstream {
  FILE *f;
  explicit fhstream() { f = NULL; }
  explicit fhstream(const string pathname, const char *mode) { f = fopen(pathname.c_str(), mode); vernum = VERNUM_HEX; }
  ~fhstream() { if(f) fclose(f); }
  void write_char(char c) override { write_chars(&c, 1); }
  void write_chars(const char* c, size_t i) override { if(fwrite(c, i, 1, f) != 1) throw hstream_exception(); }
  void read_chars(char* c, size_t i) override { if(fread(c, i, 1, f) != 1) throw hstream_exception(); }
  char read_char() override { char c; read_chars(&c, 1); return c; }
  void flush() override { fflush(f); }
  };
  
  struct shstream : hstream { 
  string s;
  int pos;
  explicit shstream(const string& t = "") : s(t) { pos = 0; vernum = VERNUM_HEX; }
  void write_char(char c) override { s += c; }
  char read_char() override { if(pos == isize(s)) throw hstream_exception(); return s[pos++]; }
  };
  
  inline void print(hstream& hs) {}
  
  template<class... CS> string sprint(const CS&... cs) { shstream hs; print(hs, cs...); return hs.s; }
  
  template<class C, class C1, class... CS> void print(hstream& hs, const C& c, const C1& c1, const CS&... cs) { print(hs, c); print(hs, c1, cs...); }
  
  template<class... CS> void println(hstream& hs, const CS&... cs) { print(hs, cs...); hs.write_char('\n'); }
  
  inline string spaced(int i) { return its(i); }
  inline string spaced(color_t col) { return itsh8(col); }
  inline string spaced(const string& s) { return s; }
  inline string spaced(ld x) { return fts(x, 10); }
  template<class T> string spaced_of(T a[], int q) { string s = spaced(a[0]); for(int i=1; i<q; i++) s += ' ', s += spaced(a[i]); return s; }
  template<class T, int i> string spaced(const array<T,i>& a) { return spaced_of(&a[0], isize(a)); }
  template<class C, class C1, class... CS> string spaced(const C& c, const C1& c1, const CS&... cs) { return spaced(c) + " " + spaced(c1, cs...); }
  
  bool scan(fhstream& hs, int&);
  bool scan(fhstream& hs, ld&);
  bool scan(fhstream& hs, string&);
  bool scan(fhstream& hs, color_t& c);
  template<class C, class C1, class... CS> bool scan(fhstream& hs, C& c, C1& c1, CS&... cs) { return scan(hs, c) && scan(hs, c1, cs...); }
  
  string scanline(fhstream& hs);
  template<class T> T scan(fhstream& hs) { T t {}; scan(hs, t); return t; }
  
  // copied from: https://stackoverflow.com/questions/16387354/template-tuple-calling-a-function-on-each-element
  
  namespace detail
  {
  template<int... Is>
  struct seq { };
  
  template<int N, int... Is>
  struct gen_seq : gen_seq<N - 1, N - 1, Is...> { };
  
  template<int... Is>
  struct gen_seq<0, Is...> : seq<Is...> { };
  
  template<typename T, typename F, int... Is>
  void for_each(T&& t, F f, seq<Is...>)
  {
  auto l = { (f(std::get<Is>(t)), 0)... }; ignore(l);
  }
  }
  
  template<typename... Ts, typename F>
  void for_each_in_tuple(std::tuple<Ts...> const& t, F f)
  {
  detail::for_each(t, f, detail::gen_seq<sizeof...(Ts)>());
  }
  
  inline void print(hstream& hs, const string& s) { hs.write_chars(s.c_str(), isize(s)); }
  inline void print(hstream& hs, int i) { print(hs, its(i)); }
  inline void print(hstream& hs, ld x) { print(hs, fts(x, 6)); }
  inline void print(hstream& hs, color_t col) { print(hs, itsh8(col)); }
  
  template<class T> void print(hstream& hs, const walker<T>& w) { print(hs, "[", w.at, "/", w.spin, "/", w.mirrored, "]"); }
  
  struct comma_printer {
  bool first;
  hstream& hs;
  template<class T> void operator() (const T& t) { if(first) first = false; else print(hs, ","); print(hs, t); }
  comma_printer(hstream& hs) : first(true), hs(hs) {}
  };
  
  template<class T, size_t X> void print(hstream& hs, const array<T, X>& a) { print(hs, "("); comma_printer c(hs); for(const T& t: a) c(t); print(hs, ")"); }
  template<class T> void print(hstream& hs, const vector<T>& a) { print(hs, "("); comma_printer c(hs); for(const T& t: a) c(t); print(hs, ")"); }
  
  template<class T, class U> void print(hstream& hs, const map<T,U>& a) { print(hs, "("); comma_printer c(hs); for(auto& t: a) c(t); print(hs, ")"); }
  template<class T> void print(hstream& hs, const set<T>& a) { print(hs, "("); comma_printer c(hs); for(auto& t: a) c(t); print(hs, ")"); }
  
  template<class T> string separated(string separator, const vector<T>& a) {
  shstream ss;
  bool first = true;
  for(auto& v: a) { if(first) first = false; else print(ss, separator); print(ss, v); }
  return ss.s;
  }
  
  inline void print(hstream& hs, const hyperpoint h) { print(hs, "("); for(int i=0; i<MDIM; i++) { if(i) print(hs, ","); print(hs, h[i]); } print(hs, ")"); } // (const array<ld, MAXMDIM>&)h); }
  inline void print(hstream& hs, const transmatrix T) { 
  print(hs, "("); comma_printer c(hs);
  for(int i=0; i<MDIM; i++)
  for(int j=0; j<MDIM; j++) c(T[i][j]);
  print(hs, ")"); }
  
  inline void print(hstream& hs, const shiftpoint h) { print(hs, h.h, "@", h.shift); }
  inline void print(hstream& hs, const shiftmatrix T) { print(hs, T.T, "@", T.shift); }
  
  template<class T, class U> void print(hstream& hs, const pair<T, U> & t) { print(hs, "(", t.first, ",", t.second, ")"); }
  
  template<class... T> void print(hstream& hs, const tuple<T...> & t) { 
  print(hs, "(");
  comma_printer p(hs);
  for_each_in_tuple(t, p);
  print(hs, ")");
  }
  
  #ifndef SPECIAL_LOGGER
  inline void special_log(char c) { if(debugfile) fputc(c, debugfile); putchar(c); }
  #endif
  
  #if !CAP_SDL && CAP_TIMEOFDAY
  int SDL_GetTicks();
  #endif
  
  struct logger : hstream {
  int indentation;
  bool doindent;
  explicit logger() { doindent = false; }
  void write_char(char c) override;  
  char read_char() override { throw hstream_exception(); }
  void flush() override { fflush(stdout); }
  };
  
  extern logger hlog;
  template<class... T> void println_log(T... t) { println(hlog, t...); }
  template<class... T> void print_log(T... t) { print(hlog, t...); }
  
  #ifdef __GNUC__
  __attribute__((__format__ (__printf__, 1, 2)))
  #endif
  inline string format(const char *fmt, ...) {
  char buf[1000];
  va_list ap;
  va_start(ap, fmt);
  vsnprintf(buf, 1000, fmt, ap);
  va_end(ap);
  return buf;
  }
  
  inline void print(hstream& hs, heptagon* h) { print(hs, "H", index_pointer(h)); }
  inline void print(hstream& hs, cell* h) { print(hs, "C", index_pointer(h)); }
  inline void print(hstream& hs, hrmap* h) { print(hs, "M", index_pointer(h)); }
  
  inline void print(hstream& hs, cellwalker cw) { 
  if(cw.at) print(hs, "[", cw.at, "/", cw.at->type, ":", cw.spin, ":", cw.mirrored, "]");
  else print(hs, "[NULL]");
  }
  
  struct indenter {
  dynamicval<int> ind;
  
  explicit indenter(int i = 2) : ind(hlog.indentation, hlog.indentation + (i)) {}
  };
  
  struct indenter_finish : indenter {
  explicit indenter_finish(bool b = true): indenter(b ? 2:0) {}
  explicit indenter_finish(string s): indenter(2) {
  indenter tmp(-2);
  println(hlog, s);
  }
  ~indenter_finish() { if(hlog.indentation != ind.backup) println(hlog, "(done)"); }
  };
  
#line 345 "hprint.cpp"
  void print(hstream& hs, cld x);
#line 361 "hprint.cpp"
  string fts_fixed(ld x, int prec IS(6));
#line 374 "hprint.cpp"
  string scanline_noblank(fhstream& hs);
#line 404 "hprint.cpp"
  string cts(char c);
#line 405 "hprint.cpp"
  string llts(long long i);
#line 411 "hprint.cpp"
  string itsh(unsigned int i);
#line 412 "hprint.cpp"
  string itsh(int i);
#line 413 "hprint.cpp"
  string itsh2(int i);
#line 415 "hprint.cpp"
  string itsh(unsigned long long i);
#line 422 "hprint.cpp"
  extern logger hlog;
#line 427 "hprint.cpp"
  ld kz(ld x);
#line 432 "hprint.cpp"
  hyperpoint kz(hyperpoint h);
#line 437 "hprint.cpp"
  transmatrix kz(transmatrix h);
#line 444 "hprint.cpp"
  shiftmatrix kz(shiftmatrix h);
#line 449 "hprint.cpp"
  shiftpoint kz(shiftpoint h);
#line 454 "hprint.cpp"
  bool scan(shstream& hs, ld& val);
#line 462 "hprint.cpp"
  template<class T> vector<T> kz(vector<T> v) {
  for(auto& el: v) el = kz(el);
  return v;
  }
  
  template<class T, size_t N> array<T,N> kz(array<T,N> v) {
  for(auto& el: v) el = kz(el);
  return v;
  }
#line 473 "hprint.cpp"
  string pick123();
#line 474 "hprint.cpp"
  string pick12();
#line 477 "hprint.cpp"
  template<class T> string serialize(const T& data) {
  shstream shs;
  hwrite(shs, data);
  return shs.s;
  }
  
  template<class T> T deserialize(const string& s) {
  shstream shs;
  shs.s = s;
  T data;
  hread(shs, data);
  return data;
  }
#line 492 "hprint.cpp"
  string as_hexstring(string o);
#line 500 "hprint.cpp"
  string from_hexstring(string o);
#line 514 "hprint.cpp"
  string as_cstring(string o);
#line 522 "hprint.cpp"
  string as_nice_cstring(string o);
#line 536 "hprint.cpp"
  #if ISANDROID
  #define DEBB(r,x)
  #define DEBB0(r,x)
  #define DEBBI(r,x)
  #else
  #define DEBB(r,x) { if(debugflags & (r)) { println_log x; } }
  #define DEBB0(r,x) { if(debugflags & (r)) { print_log x; } }
  #define DEBBI(r,x) { if(debugflags & (r)) { println_log x; } } indenter_finish _debbi(debugflags & (r));
  #endif
  #if CAP_GMP
#line 548 "hprint.cpp"
  string its(mpq_class x);
#line 549 "hprint.cpp"
  void print(hstream& hs, const mpq_class& x);
  #endif
#line 555 "hprint.cpp"
  template<class... T> string lalign(int len, T... t) {
  shstream hs;
  print(hs, t...);
  while(isize(hs.s) < len) hs.s += " ";
  return hs.s;
  }
#line 565 "hprint.cpp"
  void debug_view(string context, string s);
#line 570 "hprint.cpp"
  vector<string> split_string(const string& s, char sep);

  // implemented in: language.cpp

#line 13 "language.cpp"
  const string dnameof(eMonster m);
#line 14 "language.cpp"
  const string dnameof(eLand l);
#line 15 "language.cpp"
  const string dnameof(eWall w);
#line 16 "language.cpp"
  const string dnameof(eItem i);
#line 19 "language.cpp"
  #define NUMLAN 8
  
  struct stringpar {
  string v;
  stringpar(string s) : v(s) { }
  stringpar(const char* s) : v(s) { }
  stringpar(eMonster m) { v= minf[m].name; }
  stringpar(eLand l) { v= linf[l].name; }
  stringpar(eWall w) { v= winf[w].name; }
  stringpar(eItem i) { v= iinf[i].name; }  
  };
  #if !CAP_TRANS
#line 66 "language.cpp"
  #define NUMEXTRA 13
  extern const char* natchars[NUMEXTRA];
  #endif
  #if CAP_TRANS
#line 125 "language.cpp"
  bool translation_exists(const string& x);
  #endif
#line 343 "language.cpp"
  string XLAT(string x);
#line 348 "language.cpp"
  string XLAT(string x, stringpar p1);
#line 354 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2);
#line 361 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2, stringpar p3);
#line 369 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2, stringpar p3, stringpar p4);
#line 378 "language.cpp"
  string XLAT(string x, stringpar p1, stringpar p2, stringpar p3, stringpar p4, stringpar p5);
#line 390 "language.cpp"
  string XLATN(string x);
#line 400 "language.cpp"
  string XLAT1(string x);
#line 410 "language.cpp"
  string XLATT1(stringpar p);
#line 412 "language.cpp"
  bool shapename_available(int id);
#line 414 "language.cpp"
  string shapename(int id);

  // implemented in: util.cpp

  #if CAP_TIMEOFDAY
  #if !CAP_SDL
#line 16 "util.cpp"
  int SDL_GetTicks();
  #endif
  #endif
#line 30 "util.cpp"
  long double sqr(long double x);
#line 32 "util.cpp"
  ld round_nearest(ld x);
#line 33 "util.cpp"
  ld round_nearest(ld x, ld multiple_of);
#line 35 "util.cpp"
  int gcd(int i, int j);
#line 39 "util.cpp"
  int gmod(int i, int j);
#line 44 "util.cpp"
  int zgmod(int a, int b);
#line 46 "util.cpp"
  int szgmod(int a, int b);
#line 53 "util.cpp"
  int gdiv(int i, int j);
#line 57 "util.cpp"
  ld frac(ld x);
#line 63 "util.cpp"
  ld lerp(ld a0, ld a1, ld x);
#line 67 "util.cpp"
  ld clamp(ld a, ld v0, ld v1);
#line 73 "util.cpp"
  cld lerp(cld a0, cld a1, ld x);
#line 77 "util.cpp"
  ld ilerp(ld a0, ld a1, ld x);
#line 81 "util.cpp"
  extern purehookset hooks_tests;
#line 83 "util.cpp"
  string simplify(const string& s);
#line 89 "util.cpp"
  bool appears(const string& haystack, const string& needle);
#line 94 "util.cpp"
  struct hr_parse_exception : hr_exception {
  string s;
  const char *what() const noexcept override { return s.c_str(); }
  hr_parse_exception(const string& z) : s(z) {}
  ~hr_parse_exception() noexcept(true) {}
  };
  
  struct exp_parser {
  string s;
  int at;
  int line_number, last_line;
  exp_parser() { at = 0; line_number = 1; last_line = 0; }
  
  string where() { 
  if(s.find('\n')) return "(line " + its(line_number) + ", pos " + its(at-last_line) + ")";
  else return "(pos " + its(at) + ")";
  }
  
  map<string, cld> extra_params;
  
  bool ok() { return at == isize(s); }
  char next(int step=0) { if(at >= isize(s)-step) return 0; else return s[at+step]; }
  
  char eatchar() {
  return s[at++];
  }
  
  bool eat(const char *c) {
  int orig_at = at;
  while(*c && *c == next()) at++, c++;
  if(*c == 0) return true;
  else at = orig_at;
  return false;
  }
  
  void skip_white();
  
  string next_token();
  
  char snext(int step=0) { skip_white(); return next(step); }
  
  vector<pair<ld, ld>> parse_with_reps();
  
  cld parse(int prio = 0);
  
  transmatrix parsematrix(int prio = 0);
  color_t parsecolor(int prio = 0);
  
  ld rparse(int prio = 0) { return validate_real(parse(prio)); }
  int iparse(int prio = 0) { return int(floor(rparse(prio) + .5)); }
  
  cld parsepar() {
  cld res = parse();
  force_eat(")");
  return res;
  }
  
  ld validate_real(cld x) {
  if(kz(imag(x))) throw hr_parse_exception("expected real number but " + lalign(-1, x) + " found at " + where());
  return real(x);
  }
  
  void force_eat(const char *c) {
  skip_white();
  if(!eat(c)) throw hr_parse_exception("expected: " + string(c) + " at " + where());
  }
  
  };
#line 621 "util.cpp"
  ld parseld(const string& s);
#line 627 "util.cpp"
  transmatrix parsematrix(const string& s);
#line 633 "util.cpp"
  color_t parsecolor(const string& s, bool has_alpha);
#line 641 "util.cpp"
  colortable parsecolortable(const string& s);
#line 652 "util.cpp"
  trans23 parsematrix23(const string& s);
#line 665 "util.cpp"
  int parseint(const string& s);
#line 671 "util.cpp"
  string available_functions();
#line 676 "util.cpp"
  string available_constants();
#line 682 "util.cpp"
  struct bignum {
  static constexpr int BASE = 1000000000;
  static constexpr long long BASE2 = BASE * (long long)BASE;
  vector<int> digits;
  bignum() {}
  bignum(int i) : digits() { digits.push_back(i); }
  void be(int i) { digits.resize(1); digits[0] = i; }
  bignum& operator +=(const bignum& b);
  void addmul(const bignum& b, int factor);
  string get_str(int max_length) const;
  bignum(ld d);
  
  bool operator < (const bignum&) const;
  bool operator > (const bignum& b) const { return b < selfhr; }
  
  ld leading() const {
  switch(isize(digits)) {
  case 0:
  return 0;
  case 1:
  return digits.back();
  default:
  return digits.back() + ld(digits[isize(digits)-2]) / BASE;
  }
  }
  
  ld approx() const {
  return leading() * pow(BASE, isize(digits) - 1);
  }
  
  ld log_approx() const {
  return log(leading()) * log(BASE) * (isize(digits) - 1);
  }
  
  ld approx_div(const bignum& b) const {
  return leading() / b.leading() * pow(BASE, isize(digits) - isize(b.digits));
  }
  
  int approx_int() const {
  if(isize(digits) > 1) return BASE;
  if(digits.empty()) return 0;
  return digits[0];
  }
  
  bool nonzero() { return approx_ld() != 0; }
  
  bignum randomized_div(int x) const;
  
  ld approx_ld() const {
  ld res = 0;
  for(int i=0; i<isize(digits); i++) res += digits[i] * pow(BASE, i);
  return res;
  }
  
  long long approx_ll() const {
  if(isize(digits) > 2) return BASE2;
  if(digits.empty()) return 0;
  if(isize(digits) == 1) return digits[0];
  return digits[0] + digits[1] * (long long) BASE;
  }
  
  #if CAP_GMP
  mpq_class as_mpq() const {
  string s = get_str(999999);
  string t;
  for(char c: s) if(c != ' ') t += c;
  return mpq_class(t);
  }
  #endif
  
  friend inline bignum operator +(bignum a, const bignum& b) { a.addmul(b, 1); return a; }
  friend inline bignum operator -(bignum a, const bignum& b) { a.addmul(b, -1); return a; }
  };
#line 819 "util.cpp"
  bignum hrand(bignum b);
#line 830 "util.cpp"
  void operator ++(bignum &b, int);
#line 845 "util.cpp"
  void operator --(bignum &b, int);
#line 877 "util.cpp"
  string short_form(bignum b);
#line 910 "util.cpp"
  void replace_str(string& s, string a, string b);
  #if CAP_ZLIB
#line 918 "util.cpp"
  string compress_string(string s);
#line 940 "util.cpp"
  string decompress_string(string s);
  #endif
#line 960 "util.cpp"
  bool file_exists(string fname);
#line 965 "util.cpp"
  string find_file(string s);
#line 977 "util.cpp"
  void open_url(string s);
#line 999 "util.cpp"
  void open_wiki(const char *title);
#line 1018 "util.cpp"
  string read_file_as_string(string fname);
#line 1033 "util.cpp"
  string eval_programmable_string(const string& fmt);
#line 1066 "util.cpp"
  void floyd_warshall(vector<vector<char>>& v);

  // implemented in: complex.cpp

  namespace whirlwind {
#line 15 "complex.cpp"
    int fzebra3(cell *c);
#line 34 "complex.cpp"
    void switchTreasure(cell *c);
#line 44 "complex.cpp"
    int cat(cell *c);
#line 56 "complex.cpp"
    extern int dfrom[2], dto[2];
#line 57 "complex.cpp"
    extern int qdirs;
#line 61 "complex.cpp"
    void calcdirs(cell *c);
#line 91 "complex.cpp"
    int winddir(int d);
#line 151 "complex.cpp"
    void move();
#line 165 "complex.cpp"
    cell *jumpFromWhereTo(cell *c, bool player);
#line 179 "complex.cpp"
    cell *jumpDestination(cell *c);
    }
  namespace elec { 
#line 193 "complex.cpp"
    extern bool havecharge, haveelec, havethunder;
#line 194 "complex.cpp"
    extern bool afterOrb; // extra charge from the Orb of Lightning
#line 197 "complex.cpp"
    enum eCharge {
    ecCharged, ecGrounded, ecIsolator, ecConductor
    };
#line 208 "complex.cpp"
    eCharge getCharge(cell *c);
#line 393 "complex.cpp"
    void init();
#line 432 "complex.cpp"
    void cleanup();
#line 456 "complex.cpp"
    bool affected(cell *c);
#line 463 "complex.cpp"
    struct builder {
    builder() { init(); }
    ~builder() { cleanup(); }
    };
#line 469 "complex.cpp"
    void act();
#line 481 "complex.cpp"
    extern int lightningfast;
#line 482 "complex.cpp"
    void checklightningfast();
    }
  namespace princess {
#line 501 "complex.cpp"
    #define OUT_OF_PRISON 200
    #define OUT_OF_PALACE 250
    #define PRADIUS0 (141)
    #define PRADIUS1 (150)
    
    struct info {
    int id;         // id of this info
    cell *prison;   // where was the Princess locked
    heptagon *alt;  // alt of the prison
    int bestdist;   // best dist achieved
    int bestnear;   // best dist achieved, by the player
    int value;      // number of Rugs at 120
    cell *princess; // where is the Princess currently
    int together;   // in which turn have we been together -- for the hug animation
    };
    
#line 519 "complex.cpp"
    gp::loc coords();
#line 521 "complex.cpp"
    extern bool generating;
#line 522 "complex.cpp"
    extern bool challenge;
#line 523 "complex.cpp"
    extern bool saved;
#line 524 "complex.cpp"
    extern bool everSaved;
#line 526 "complex.cpp"
    extern bool forceVizier;
#line 527 "complex.cpp"
    extern bool forceMouse;
#line 528 "complex.cpp"
    extern bool gotoPrincess;
#line 529 "complex.cpp"
    extern bool nodungeon;
#line 530 "complex.cpp"
    extern bool squeaked;
#line 532 "complex.cpp"
    extern int saveHP;
#line 533 "complex.cpp"
    extern int saveArmedHP;
#line 535 "complex.cpp"
    extern int reviveAt;
#line 537 "complex.cpp"
    extern vector<info*> infos;
#line 543 "complex.cpp"
    int newInfo(cell *c);
#line 557 "complex.cpp"
    void newFakeInfo(cell *c);
#line 570 "complex.cpp"
    info *getPrisonInfo(cell *c);
#line 580 "complex.cpp"
    info *getPrincessInfo(cell *c);
#line 593 "complex.cpp"
    int dist(cell *c);
#line 625 "complex.cpp"
    void bringBack();
#line 661 "complex.cpp"
    void save(cell *princess);
#line 668 "complex.cpp"
    void move(const movei& mi);
#line 701 "complex.cpp"
    void mouseSqueak(cell *c);
#line 725 "complex.cpp"
    void line(cell *c);
#line 796 "complex.cpp"
    void playernear(cell *c);
    }
  namespace clearing {
#line 816 "complex.cpp"
    struct clearingdata {
    cell *root;
    int dist;
    bool buggy;
    clearingdata() { root = nullptr; }
    };
#line 824 "complex.cpp"
    extern std::map<heptagon*, clearingdata> bpdata;
#line 826 "complex.cpp"
    extern cell *current_root;
#line 828 "complex.cpp"
    void new_root();
#line 895 "complex.cpp"
    void generate(cell *c);
#line 1002 "complex.cpp"
    extern bignum imputed;
#line 1005 "complex.cpp"
    extern int direct;
#line 1020 "complex.cpp"
    void imput(cell *c);
    }
  namespace whirlpool {
#line 1046 "complex.cpp"
    extern bool escaped;
#line 1050 "complex.cpp"
    cell *get(cell *c, int next);
#line 1082 "complex.cpp"
    void generate(cell *wto);
#line 1164 "complex.cpp"
    void move();
    }
  namespace mirror {
#line 1182 "complex.cpp"
    static constexpr int SPINSINGLE = 1;
    static constexpr int SPINMULTI = 2;
    static constexpr int GO = 4;
    static constexpr int ATTACK = 8;
#line 1188 "complex.cpp"
    bool build(cell *c);
#line 1221 "complex.cpp"
    extern vector<pair<int, cellwalker>> mirrors;
#line 1223 "complex.cpp"
    constexpr int LIGHTNING = -1; // passed instead of cpid
#line 1241 "complex.cpp"
    void destroyKilled();
#line 1262 "complex.cpp"
    void destroyAll();
#line 1268 "complex.cpp"
    void createMirror(cellwalker cw, int cpid);
#line 1320 "complex.cpp"
    void createMirrors(cellwalker cw, int cpid);
#line 1358 "complex.cpp"
    void createMirages(cellwalker cw, int cpid);
#line 1410 "complex.cpp"
    void createHere(cellwalker cw, int cpid);
#line 1418 "complex.cpp"
    void breakMirror(cellwalker cw, int pid);
#line 1433 "complex.cpp"
    bool isKilledByMirror(cell *c);
#line 1500 "complex.cpp"
    void act(int d, int flags);
#line 1517 "complex.cpp"
    void breakAll();
#line 1536 "complex.cpp"
    int mirrordir(cell *c);
#line 1654 "complex.cpp"
    cellwalker reflect(const cellwalker& cw);
    }
  namespace hive {
#line 1684 "complex.cpp"
    int hivehard();
#line 1689 "complex.cpp"
    eMonster randomHyperbug();
#line 1724 "complex.cpp"
    extern int bugcount[BUGCOLORS];
#line 1829 "complex.cpp"
    void movebugs();
#line 1959 "complex.cpp"
    void createBugArmy(cell *c);
    }
#line 2050 "complex.cpp"
  inline float& HEAT(cell *c) { return c->LHU.heat; }
  namespace heat {
#line 2055 "complex.cpp"
    void affect(cell *c, double delta);
#line 2059 "complex.cpp"
    double absheat(cell *c);
#line 2065 "complex.cpp"
    double celsius(cell *c);
#line 2070 "complex.cpp"
    extern vector<cell*> offscreen_heat, offscreen_fire; // offscreen cells to take care off
#line 2072 "complex.cpp"
    void processheat(double rate IS(1));
#line 2202 "complex.cpp"
    #define MELTCOLOR 0xA04040
#line 2235 "complex.cpp"
    void processfires();
    }
#line 2351 "complex.cpp"
  void livecaves();
  namespace tortoise {
#line 2522 "complex.cpp"
    extern map<cell*, int> emap;
#line 2523 "complex.cpp"
    extern map<cell*, int> babymap;
#line 2524 "complex.cpp"
    extern int last;
#line 2525 "complex.cpp"
    extern int last21tort;
#line 2528 "complex.cpp"
    enum tflag {
    tfShell, tfScute0, tfScute1, tfScute2, tfScute3,
    tfEdge1, tfEdge, tfEdge3,
    tfLongNeck, tfFront, tfRear, tfTail,
    tfEyeHue, tfShellHue, tfScuteHue, tfSkinHue,
    tfShellSat, tfScuteSat, tfSkinSat,
    tfShellDark, tfSkinDark,
    tfCOUNT
    };
#line 2539 "complex.cpp"
    extern const int numbits;
#line 2540 "complex.cpp"
    extern const int mask;
#line 2542 "complex.cpp"
    int getb(cell *where);
#line 2547 "complex.cpp"
    int countBits(int c);
#line 2553 "complex.cpp"
    int getBit(int bits, int id);
#line 2555 "complex.cpp"
    int getRandomBits();
#line 2557 "complex.cpp"
    bool seek();
#line 2558 "complex.cpp"
    extern int seekbits;
#line 2570 "complex.cpp"
    extern bool shading_enabled;
#line 2572 "complex.cpp"
    bool shading_on();
#line 2576 "complex.cpp"
    void updateVals(int delta);
#line 2584 "complex.cpp"
    double getScent(int bits);
#line 2603 "complex.cpp"
    int diff(int bits);
#line 2606 "complex.cpp"
    string measure(int bits);
#line 2610 "complex.cpp"
    void move_baby(cell *c1, cell *c2);
#line 2614 "complex.cpp"
    void move_adult(cell *c1, cell *c2);
    }
  namespace dragon {
#line 2621 "complex.cpp"
    extern int whichturn; // which turn has the target been set on
#line 2622 "complex.cpp"
    extern cell *target; // actually for all Orb of Domination
#line 2640 "complex.cpp"
    cell *findhead(cell *c);
#line 2669 "complex.cpp"
    int bodypart(cell *c, cell *head);
#line 2686 "complex.cpp"
    void kill(cell *c, eMonster who);
#line 2718 "complex.cpp"
    int totalhp(cell *c);
#line 2772 "complex.cpp"
    bool move(const movei& mi);
    }
  namespace sword {
#line 2810 "complex.cpp"
    struct sworddir {
    int angle;
    transmatrix T;
    };
    
    /** dimensions available to the Sword */
    #define SWORDDIM (mhybrid ? 2 : WDIM)
    
#line 2820 "complex.cpp"
    extern int sword_angles;
#line 2822 "complex.cpp"
    extern array<sworddir, MAXPLAYER> dir;
#line 2826 "complex.cpp"
    void determine_sword_angles();
#line 2847 "complex.cpp"
    cell *pos2(cell *c, int s);
#line 2861 "complex.cpp"
    cell *pos(cell *c, const sworddir& sd, bool rev);
#line 2876 "complex.cpp"
    int orbcount(bool rev);
#line 2878 "complex.cpp"
    cell *pos(int id, bool rev);
#line 2883 "complex.cpp"
    bool at(cell *where, bool noplayer IS(false));
#line 2891 "complex.cpp"
    bool isnear(cell *where);
#line 2898 "complex.cpp"
    sworddir shift(movei mi, sworddir d);
#line 2930 "complex.cpp"
    sworddir initial(cell *c);
#line 2944 "complex.cpp"
    void reset();
    }
  namespace kraken {
#line 2956 "complex.cpp"
    extern map<cell*, bool> half_killed;
#line 2958 "complex.cpp"
    cell *head(cell *c);
#line 2964 "complex.cpp"
    void kill(cell *c, eMonster who);
#line 2986 "complex.cpp"
    int totalhp(cell *c);
#line 3002 "complex.cpp"
    void attacks();
#line 3039 "complex.cpp"
    void trymove(cell *c);
    }
  #if CAP_FIELD
  namespace prairie {
#line 3116 "complex.cpp"
    void spread(cell *c, cell *from);
#line 3200 "complex.cpp"
    int get_val(cell *c);
#line 3210 "complex.cpp"
    bool no_worms(cell *c);
#line 3216 "complex.cpp"
    bool isriver(cell *c);
#line 3226 "complex.cpp"
    bool nearriver(cell *c);
#line 3249 "complex.cpp"
    cell *next(cell *c, int pv IS(1));
#line 3274 "complex.cpp"
    extern vector<cell*> beaststogen;
#line 3276 "complex.cpp"
    void generateBeast(cell *c);
#line 3335 "complex.cpp"
    void move();
#line 3359 "complex.cpp"
    void generateTreasure_here(cell *c);
#line 3373 "complex.cpp"
    void generateTreasure(cell *c);
#line 3392 "complex.cpp"
    void treasures();
    }
  #endif
  namespace ca {
#line 3422 "complex.cpp"
    extern ld prob;
#line 3426 "complex.cpp"
    extern eWall wlive;
#line 3428 "complex.cpp"
    extern set<cell*> changed;
#line 3430 "complex.cpp"
    void list_adj(cell *c);
#line 3438 "complex.cpp"
    string fillup(string s);
#line 3443 "complex.cpp"
    void init();
#line 3488 "complex.cpp"
    void simulate();
    }
  #if CAP_FIELD
  namespace windmap {
#line 3599 "complex.cpp"
    static constexpr int NOWINDBELOW = 8;
    static constexpr int NOWINDFROM = 120;  
#line 3607 "complex.cpp"
    int getId(cell *c);
#line 3619 "complex.cpp"
    extern vector<unsigned char> windcodes;
#line 3635 "complex.cpp"
    void create();
#line 3726 "complex.cpp"
    int at(cell *c);
    }
  #endif
  namespace halloween {
#line 3736 "complex.cpp"
    extern cell *dragoncells[4];
#line 3739 "complex.cpp"
    void generate();
#line 3861 "complex.cpp"
    void getTreat(cell *where);
#line 3867 "complex.cpp"
    void after_treat();
#line 4033 "complex.cpp"
    void start_all();
    }
  namespace dungeon {
#line 4372 "complex.cpp"
    void all(cell *c, int d);
    }

  // implemented in: multigame.cpp

#line 12 "multigame.cpp"
  /** gamedata structure, for recording the game data in memory temporarily */
  struct gamedata {
  /** important parameters should be visible */
  eGeometry geo;
  eVariation var;
  eLand specland;
  bool active;
  /** other properties are recorded here */
  vector<char> record;
  int index, mode;
  void storegame();
  void restoregame();
  template<class T> void store(T& x) {
  int ssize = sizeof(x);
  if(ssize & 7) ssize = (ssize | 7) + 1;
  if(mode == 0) {
  record.resize(index+ssize);
  ::new (&record[index]) T(std::move(x));
  }
  else {
  T& at = *((T*) (void*) &(record[index]));
  x = std::move(at);
  at.~T();
  }
  index += ssize;
  }
  template<class T> void store_ptr(T& x) {
  if(mode == 0) {
  T* copy = new T(std::move(x));
  store(copy);
  }
  else {
  T* copy = nullptr;
  store(copy);
  x = std::move(*copy);
  delete copy;
  }
  }
  };
#line 106 "multigame.cpp"
  extern hookset<void(gamedata*)> hooks_gamedata;
  namespace gamestack {
#line 112 "multigame.cpp"
    bool pushed();
#line 114 "multigame.cpp"
    void push();
#line 119 "multigame.cpp"
    void pop();
    }
  namespace dual {
#line 130 "multigame.cpp"
    extern int state;
#line 133 "multigame.cpp"
    extern bool one_euclidean;
#line 135 "multigame.cpp"
    extern int currently_loaded;
#line 136 "multigame.cpp"
    extern int main_side;
#line 137 "multigame.cpp"
    extern bool affect_both;
#line 140 "multigame.cpp"
    extern transmatrix player_orientation[2];
#line 144 "multigame.cpp"
    extern purehookset hooks_after_move;
#line 163 "multigame.cpp"
    transmatrix get_orientation();
#line 174 "multigame.cpp"
    void switch_to(int k);
#line 185 "multigame.cpp"
    bool movepc(int d, int subdir, bool checkonly);
#line 266 "multigame.cpp"
    void in_subscreen(reaction_t what);
#line 272 "multigame.cpp"
    bool split(reaction_t what);
#line 285 "multigame.cpp"
    void enable();
#line 329 "multigame.cpp"
    void disable();
#line 363 "multigame.cpp"
    bool check_side(eLand l);
#line 367 "multigame.cpp"
    void assign_landsides();
#line 435 "multigame.cpp"
    void add_choice();
#line 448 "multigame.cpp"
    void split_or_do(reaction_t what);
#line 453 "multigame.cpp"
    bool may_split(reaction_t what);
#line 461 "multigame.cpp"
    void may_split_or_do(reaction_t what);
#line 470 "multigame.cpp"
    inline reaction_t mayboth(reaction_t what) { return [=] { may_split_or_do(what); }; }
    }

  // implemented in: arbitrile.cpp

  namespace arb {
#line 15 "arbitrile.cpp"
    extern int affine_limit;
#line 18 "arbitrile.cpp"
    
    /** a type used to specify the connections between shapes */
    struct connection_t {
    /** the index of the connected shape in the 'shapes' table */
    int sid;
    /** the index of the edge in the 'shapes' table */
    int eid;
    /** 1 if this connection mirrored, 0 otherwise. do_unmirror() removes all mirrors by doubling shapes */
    int mirror;
    bool operator == (const arb::connection_t& b) const { return tie(sid, eid, mirror) == tie(b.sid, b.eid, b.mirror); }
    bool operator < (const arb::connection_t& b) const { return tie(sid, eid, mirror) < tie(b.sid, b.eid, b.mirror); }
    };
    
    inline void print(hstream& hs, const connection_t& conn) { print(hs, tie(conn.sid, conn.eid, conn.mirror)); }
    
    /** \brief each shape of the arb tessellation
    *  note: the usual HyperRogue convention is: vertex 0, edge 0, vertex 1, edge 1, ... 
    *  note: the tesfile convention is: edge 0, vertex 0, edge 1, vertex 1, ...
    */
    
    /** edge with infinite end on the left */
    constexpr ld INFINITE_LEFT = -1;
    /** edge with infinite end on the right */
    constexpr ld INFINITE_RIGHT = -2;
    /** edge with two infinite ends */
    constexpr ld INFINITE_BOTH = -3;
    
    struct shape {
    /** index in the arbi_tiling::shapes */
    int id;
    /** index in the original file */
    int orig_id;
    /** flags such as sfLINE and sfPH */
    int flags;
    /** list of vertices in the usual convention */
    vector<hyperpoint> vertices;
    /** list of angles in the tesfile convention */
    vector<ld> angles;
    /** list of edge lengths */
    vector<ld> edges;
    /** list of input edges */
    vector<ld> in_edges;
    /** list of input angles */
    vector<ld> in_angles;
    /** (ultra)ideal markers */
    vector<bool> ideal_markers;
    /** list of edge connections */
    vector<connection_t> connections;
    int size() const { return isize(vertices); }
    void build_from_angles_edges(bool is_comb);
    vector<pair<int, int> > sublines;
    vector<pair<ld, ld>> stretch_shear;
    /** '*inf' was applied to represent an apeirogon/pseudogon */
    bool apeirogonal;
    /** connections repeat `repeat_value` times */
    int repeat_value;
    /** 0 if the no mirror symmetries are declared; otherwise, edge i is the mirror of edge gmod(symmetric_value-i, size()). Make sure symmetric_value != 0, e.g., by adding size() */
    int symmetric_value;
    /** if a tile/edge combination may be connected to edges j1 and j2 of this, j1-j2 must be divisible by cycle_length */
    int cycle_length;
    /** list of valences of vertices in the tesfile convention */
    vector<int> vertex_valence;
    /** list of periods of vertices in the tesfile convention */
    vector<int> vertex_period;
    /** list of angles at vertices in the tesfile convention */
    vector<vector<ld>> vertex_angles;
    /** football types */
    int football_type;
    /** is it a mirrored version of an original tile */
    bool is_mirrored;
    /** auxiliary function for symmetric_value: is the edge index reflectable? */
    bool reflectable(int id) {
    if(!symmetric_value) return false;
    if(apeirogonal && gmod(id, size()) >= size() - 2) return false;
    return true;
    }
    /** reflect a reflectable reflect index */
    int reflect(int id) {
    return gmod(symmetric_value - id, size() - (apeirogonal ? 2 : 0));
    }
    };
    
    struct slider {
    string name;
    ld zero;
    ld current;
    ld min;
    ld max;
    };
    
    struct intslider {
    string name;
    int zero;
    int current;
    int min;
    int max;
    };
    
    struct arbi_tiling {
    
    int order;
    /* line flags have been marked for tiles */
    bool have_line;
    /* pseudohept flags have been marked for tiles (1), or the tiling is football-colorable (2), or neither (0) */
    int have_ph;
    /* is the tree structure given in the tes file */
    bool have_tree;
    /* is the valence data reliable */
    bool have_valence;
    /* use "star." if the tessellation includs star polygons */
    bool is_star;
    /* use "combinatorial." for combinatorial tessellations; vertex valences computed based on their angles. Currently only rulegen works for combinatorial tessellations */
    bool is_combinatorial;
    /* reserved for future flags */
    bool res0, res1, res2, res3;
    
    int yendor_backsteps;
    
    vector<shape> shapes;
    string name;
    string comment;
    
    vector<slider> sliders;
    vector<intslider> intsliders;
    
    ld cscale;
    int range;
    ld floor_scale;
    ld boundary_ratio;
    string filename;
    int mirror_rules;
    
    vector<string> options;
    
    int min_valence, max_valence;
    bool is_football_colorable;
    bool was_unmirrored;
    bool was_split_for_football;
    
    geometryinfo1& get_geometry();
    eGeometryClass get_class() { return get_geometry().kind; }
    
    ld scale();
    };
#line 165 "arbitrile.cpp"
    extern arbi_tiling current;
#line 168 "arbitrile.cpp"
    extern bool using_slided;
#line 171 "arbitrile.cpp"
    extern arbi_tiling slided;
#line 173 "arbitrile.cpp"
    bool in_slided();
#line 175 "arbitrile.cpp"
    arbi_tiling& current_or_slided();
#line 181 "arbitrile.cpp"
    short& id_of(heptagon *h);
#line 184 "arbitrile.cpp"
    struct hr_polygon_error : hr_exception {
    vector<transmatrix> v;
    eGeometryClass c;
    int id;
    transmatrix end;
    map<string, cld> params;
    hr_polygon_error(const vector<transmatrix>& _v, int _id, transmatrix _e) : v(_v), c(cgclass), id(_id), end(_e) {}
    ~hr_polygon_error() noexcept(true) {}
    string generate_error();
    };
#line 351 "arbitrile.cpp"
    bool correct_index(int index, int size);
#line 358 "arbitrile.cpp"
    void load_tile(exp_parser& ep, arbi_tiling& c, bool unit);
#line 466 "arbitrile.cpp"
    extern bool do_unmirror;
#line 473 "arbitrile.cpp"
    void unmirror(arbi_tiling& c);
#line 541 "arbitrile.cpp"
    void mirror_connection(arb::arbi_tiling& ac, connection_t& co);
#line 548 "arbitrile.cpp"
    void compute_vertex_valence_prepare(arb::arbi_tiling& ac);
#line 596 "arbitrile.cpp"
    bool compute_vertex_valence_flat(arb::arbi_tiling& ac);
#line 644 "arbitrile.cpp"
    bool compute_vertex_valence_generic(arb::arbi_tiling& ac);
#line 691 "arbitrile.cpp"
    void compute_vertex_valence(arb::arbi_tiling& ac);
#line 718 "arbitrile.cpp"
    extern bool extended_football;
#line 720 "arbitrile.cpp"
    void check_football_colorability(arbi_tiling& c);
#line 886 "arbitrile.cpp"
    void add_connection_sub(arbi_tiling& c, int ai, int as, int bi, int bs, int m);
#line 902 "arbitrile.cpp"
    void add_connection(arbi_tiling& c, int ai, int as, int bi, int bs, int m);
#line 919 "arbitrile.cpp"
    void set_defaults(arb::arbi_tiling& c, bool keep_sliders, string fname);
#line 945 "arbitrile.cpp"
    void load(const string& fname, bool load_as_slided IS(false), bool keep_sliders IS(false));
#line 1348 "arbitrile.cpp"
    extern map<heptagon*, pair<heptagon*, transmatrix>> arbi_matrix;
#line 1350 "arbitrile.cpp"
    extern hrmap *current_altmap;
#line 1355 "arbitrile.cpp"
    hyperpoint get_midedge(ld len, const hyperpoint &l, const hyperpoint &r);
#line 1368 "arbitrile.cpp"
    bool is_apeirogonal(cell *c);
#line 1373 "arbitrile.cpp"
    bool is_apeirogonal();
#line 1380 "arbitrile.cpp"
    extern bool apeirogon_consistent_coloring;
#line 1381 "arbitrile.cpp"
    extern bool apeirogon_hide_grid_edges;
#line 1382 "arbitrile.cpp"
    extern bool apeirogon_simplified_display;
#line 1385 "arbitrile.cpp"
    transmatrix get_adj(arbi_tiling& c, int t, int dl, int t1, int xdl, bool xmirror);
#line 1451 "arbitrile.cpp"
    transmatrix get_adj(arbi_tiling& c, int t, int dl);
#line 1458 "arbitrile.cpp"
    bool find_connection(const transmatrix& T, const transmatrix& F, connection_t& co);
#line 1638 "arbitrile.cpp"
    hrmap *new_map();
#line 1640 "arbitrile.cpp"
    void run_raw(string fname);
#line 1649 "arbitrile.cpp"
    void run(string fname);
#line 1688 "arbitrile.cpp"
    void sliders_changed(bool need_restart, bool need_start);
#line 1711 "arbitrile.cpp"
    void set_sliders();
    namespace convert {
#line 1741 "arbitrile.cpp"
      extern eGeometry base_geometry;
#line 1742 "arbitrile.cpp"
      extern eVariation base_variation;
#line 1818 "arbitrile.cpp"
      extern bool reverse_order;
#line 1819 "arbitrile.cpp"
      extern bool minimize_on_convert;
#line 1821 "arbitrile.cpp"
      void convert_max();
#line 1873 "arbitrile.cpp"
      void convert_minimize(int N, vector<int>& old_shvids, map<int, int>& old_to_new);
#line 1966 "arbitrile.cpp"
      void convert();
#line 2070 "arbitrile.cpp"
      bool in();
#line 2075 "arbitrile.cpp"
      void activate();
      }
#line 2144 "arbitrile.cpp"
    bool in();
#line 2146 "arbitrile.cpp"
    extern string tes;
#line 2148 "arbitrile.cpp"
    bool linespattern(cell *c);
#line 2152 "arbitrile.cpp"
    bool pseudohept(cell *c);
#line 2157 "arbitrile.cpp"
    void choose();
#line 2169 "arbitrile.cpp"
    pair<ld, ld> rep_ideal(ld e, ld u IS(1));
#line 2185 "arbitrile.cpp"
    void swap_vertices();
    }

  // implemented in: rulegen.cpp

  namespace rulegen {
#line 15 "rulegen.cpp"
    extern int max_retries;
#line 16 "rulegen.cpp"
    extern int max_tcellcount;
#line 17 "rulegen.cpp"
    extern int max_adv_steps;
#line 18 "rulegen.cpp"
    extern int max_examine_branch;
#line 19 "rulegen.cpp"
    extern int max_bdata;
#line 20 "rulegen.cpp"
    extern int max_getside;
#line 21 "rulegen.cpp"
    extern int rulegen_timeout;
#line 22 "rulegen.cpp"
    extern int max_shortcut_length;
#line 23 "rulegen.cpp"
    extern int first_restart_on;
#line 26 "rulegen.cpp"
    /** exception thrown by this algoritm in case of any problems */
    struct rulegen_failure : hr_exception {
    rulegen_failure(string _s) : hr_exception(_s) {}
    };
    
    /** this exception is thrown if we want to restart the computation -- this is normal, but if thrown more than max_retries times, just surrender */
    struct rulegen_retry : rulegen_failure {
    rulegen_retry(string _s) : rulegen_failure(_s) {}
    };
    
    /** this exception is thrown in case if we run into a special case that is not implemented yet */
    struct rulegen_surrender : rulegen_failure {
    rulegen_surrender(string _s) : rulegen_failure(_s) {}
    };
    
    const int MYSTERY = 31999;
    const int MYSTERY_LARGE = 31999999;
#line 48 "rulegen.cpp"
    extern int tcellcount;
#line 50 "rulegen.cpp"
    extern int tunified;
#line 52 "rulegen.cpp"
    extern int hard_parents;
#line 54 "rulegen.cpp"
    extern int single_live_branches;
#line 56 "rulegen.cpp"
    extern int double_live_branches;
#line 58 "rulegen.cpp"
    extern int states_premini;
#line 61 "rulegen.cpp"
    /** change some flags -- they usually make it worse */
    static constexpr flagtype w_numerical = Flag(1); /*< build trees numerically */
    static constexpr flagtype w_near_solid = Flag(2); /*< solid's pre-parent is also solid */
    static constexpr flagtype w_no_shortcut = Flag(3); /*< generate no shortcuts */
    static constexpr flagtype w_no_restart = Flag(4); /*< do not restart at powers of two */
    static constexpr flagtype w_no_sidecache = Flag(5); /*< do not cache get_side */
    static constexpr flagtype w_no_relative_distance = Flag(6); /*< do not build relative distances into codes */
    static constexpr flagtype w_examine_once = Flag(7); /*< restart after first conflict found in analysis */
    static constexpr flagtype w_examine_all = Flag(8); /*< focus on all conflicts found in analysis even if we know them */
    static constexpr flagtype w_conflict_all = Flag(9); /*< full extension in case of conflicts */
    static constexpr flagtype w_parent_always = Flag(10); /*< always consider the full parent rule */
    static constexpr flagtype w_parent_reverse = Flag(11); /*< reverse paths in parent_dir */
    static constexpr flagtype w_parent_side = Flag(12); /*< allow side paths in parent_dir */
    static constexpr flagtype w_parent_never = Flag(13); /*< never consider the full parent rule */
    static constexpr flagtype w_always_clean = Flag(14); /*< restart following phases after any distance errors */
    static constexpr flagtype w_single_origin = Flag(15); /*< consider only one origin */
    static constexpr flagtype w_slow_side = Flag(16); /*< do not try get_side optimization */
    static constexpr flagtype w_bfs = Flag(17); /*< compute distances using BFS */
    static constexpr flagtype w_numerical_fix = Flag(18); /*< when doing numerical, find out filled vertices */
    static constexpr flagtype w_known_structure = Flag(19); /*< do flagless first, then use the known distances from there (handled in ruletest) */
    static constexpr flagtype w_known_distances = Flag(20); /*< with, use the actual distances */
    static constexpr flagtype w_no_smart_shortcuts = Flag(21); /*< disable the 'smart shortcut' optimization */
    static constexpr flagtype w_less_smart_retrace = Flag(22); /*< stop early when examining smart shortcut retraction */
    static constexpr flagtype w_less_smart_advance = Flag(23); /*< stop early when examining smart shortcut advancement */
    static constexpr flagtype w_no_queued_extensions = Flag(24); /*< consider extensions one by one */
    static constexpr flagtype w_no_branch_skipping = Flag(24); /*< do not skip branches */
    
    /* extra */
    static constexpr flagtype w_optimize2 = Flag(25); /*< optimize in 2D */
    
    /* for 3D honeycombs */
    static constexpr flagtype w_skip_transducers = Flag(32); /*< skip the transducer test */
    static constexpr flagtype w_skip_transducer_loops = Flag(33); /*< skip loops during the transducer test */
    static constexpr flagtype w_skip_transducer_terminate = Flag(34); /*< skip termination during the transducer test */
    static constexpr flagtype w_r3_all_errors = Flag(35); /*< consider all errors for R3 */
    static constexpr flagtype w_r3_no_road_shortcuts = Flag(36); /*< consider all errors for R3 */
    static constexpr flagtype w_ignore_transducer_dist = Flag(37); /*< ignore distance errors while testing the transducers */
#line 101 "rulegen.cpp"
    extern flagtype rdebug_flags;
#line 103 "rulegen.cpp"
    extern flagtype flags;
#line 105 "rulegen.cpp"
    extern int64_t movecount;
#line 107 "rulegen.cpp"
    extern int current_getside, current_examine_branch;
#line 110 "rulegen.cpp"
    struct tcell* tmove(tcell *c, int d);
    
    /** rulegen algorithm works on tcells which have their own map generation */
    struct tcell {
    /** tcells form a list */
    tcell *next;
    /** shape ID in arb::current */
    int id;
    /** degree */
    int type;
    /** distance from the root */
    short dist;
    /** cached code */
    int code;
    /** direction to the parent in the tree */
    short parent_dir;
    /** direction to the OLD parent in the tree */
    short old_parent_dir;
    /** direction to anyone closer */
    short any_nearer;
    /** can we assume that dist is correct? if we assumed that the dist is correct but then find out it was wrong, throw an error */
    bool is_solid;
    bool distance_fixed;
    /** is side info cached? */
    unsigned long long known_sides;
    /** which side is it */
    unsigned long long which_side;
    /** sometimes we find out that multiple tcells represent the same actual cell -- in this case we unify them; unified_to is used for the union-find algorithm */
    walker<tcell> unified_to;
    int degree() { return type; }
    connection_table<tcell> c;
    tcell*& move(int d) { movecount++; return c.move(d); }
    tcell*& modmove(int d) { movecount++; return c.modmove(d); }
    tcell* cmove(int d) { movecount++; return tmove(this, d); }
    tcell* cmodmove(int d) { movecount++; return tmove(this, c.fix(d)); }
    tcell() { }
    };
    
    inline void print(hstream& hs, tcell* h) { print(hs, "P", index_pointer(h)); }
    
    using twalker = walker<tcell>;
#line 153 "rulegen.cpp"
    extern hookset<void(int, twalker)> hooks_gen_tcell;
#line 180 "rulegen.cpp"
    void ufind(twalker& p);
#line 188 "rulegen.cpp"
    void ufindc(tcell*& c);
#line 192 "rulegen.cpp"
    extern tcell *first_tcell;
#line 201 "rulegen.cpp"
    extern int less_states;
#line 203 "rulegen.cpp"
    int number_of_types();
#line 211 "rulegen.cpp"
    int get_id(cell *c);
#line 255 "rulegen.cpp"
    extern map<cell*, tcell*> cell_to_tcell;
#line 256 "rulegen.cpp"
    extern map<tcell*, cell*> tcell_to_cell;
#line 413 "rulegen.cpp"
    void connect_and_check(twalker p1, twalker p2);
#line 422 "rulegen.cpp"
    void unify(twalker pw1, twalker pw2);
#line 468 "rulegen.cpp"
    extern vector<twalker> t_origin;
#line 470 "rulegen.cpp"
    void delete_tmap();
#line 483 "rulegen.cpp"
    extern vector<twalker> debuglist;
#line 485 "rulegen.cpp"
    extern vector<twalker> solid_errors_list;
#line 496 "rulegen.cpp"
    extern int solid_errors;
#line 499 "rulegen.cpp"
    extern int all_solid_errors;
#line 502 "rulegen.cpp"
    extern int next_distance_warning;
#line 505 "rulegen.cpp"
    extern int distance_warnings;
#line 508 "rulegen.cpp"
    struct shortcut {
    vector<int> pre;
    vector<int> post;
    tcell *sample;
    int delta;
    int last_dir;
    };
#line 517 "rulegen.cpp"
    extern vector<vector<unique_ptr<shortcut>> > shortcuts;
#line 541 "rulegen.cpp"
    extern void calc_distances(tcell *c);
#line 543 "rulegen.cpp"
    void shortcut_found(tcell *c, tcell *alt, vector<twalker> &walkers, vector<twalker> &walkers2, const vector<int>& walkerdir, const vector<int>& walkerdir2, int wpos);
#line 587 "rulegen.cpp"
    void find_new_shortcuts(tcell *c, int d, tcell *alt, int newdir, int delta);
#line 661 "rulegen.cpp"
    void remove_parentdir(tcell *c);
#line 677 "rulegen.cpp"
    void fix_distances(tcell *c);
#line 743 "rulegen.cpp"
    void unify_distances(tcell *c1, tcell *c2, int delta);
#line 757 "rulegen.cpp"
    void handle_distance_errors();
#line 778 "rulegen.cpp"
    void be_solid(tcell *c);
#line 800 "rulegen.cpp"
    void look_for_shortcuts(tcell *c, shortcut& sh);
#line 887 "rulegen.cpp"
    void look_for_shortcuts(tcell *c);
#line 893 "rulegen.cpp"
    void ensure_shorter(twalker cw);
#line 944 "rulegen.cpp"
    extern int parent_updates;
#line 948 "rulegen.cpp"
    twalker get_parent_dir(twalker& cw);
#line 1044 "rulegen.cpp"
    using aid_t = pair<int, int>;
    
    /* for leaves, id equals MYSTERY and dir equals treestate ID for this code */
    
    struct analyzer_state {
    int analyzer_id;
    int id, dir;
    map<int, analyzer_state*> substates;
    analyzer_state() { id = MYSTERY; dir = MYSTERY_LARGE; } // for(int i=0; i<10; i++) substates[i] = nullptr; }
    vector<twalker> inhabitants;
    };
    
#line 1060 "rulegen.cpp"
    extern vector<vector<analyzer_state*>> analyzers;
#line 1061 "rulegen.cpp"
    extern vector<analyzer_state*> all_analyzers;
#line 1070 "rulegen.cpp"
    aid_t get_aid(twalker cw);
#line 1150 "rulegen.cpp"
    
    struct treestate {
    int id;
    bool known;
    vector<int> rules;
    twalker giver;
    int sid;
    int parent_dir;
    int astate;
    twalker where_seen;
    bool is_live;
    bool is_possible_parent;
    bool is_root;
    vector<pair<int, int>> possible_parents;
    };
    
    static constexpr int C_IGNORE = 0;
    static constexpr int C_CHILD = 1;
    static constexpr int C_UNCLE = 2;
    static constexpr int C_EQUAL = 4;
    static constexpr int C_NEPHEW = 6;  
    static constexpr int C_PARENT = 8;
#line 1174 "rulegen.cpp"
    extern vector<treestate> treestates;
#line 1176 "rulegen.cpp"
    extern set<tcell*> single_live_branch_close_to_root;
#line 1191 "rulegen.cpp"
    extern vector<tcell*> sidecaches_to_clear;
#line 1322 "rulegen.cpp"
    int move_code(twalker cs);
#line 1357 "rulegen.cpp"
    void id_at_spin(twalker cw, vector<twalker>& sprawl, vector<analyzer_state*>& states);
#line 1394 "rulegen.cpp"
    pair<int, int> get_code(twalker& cw);
#line 1420 "rulegen.cpp"
    pair<int, int> get_treestate_id(twalker& cw);
#line 1440 "rulegen.cpp"
    extern int rule_root;
#line 1444 "rulegen.cpp"
    extern int try_count;
#line 1445 "rulegen.cpp"
    extern vector<twalker> important;
#line 1450 "rulegen.cpp"
    /* special codes */
    static constexpr int DIR_UNKNOWN = -1;
    static constexpr int DIR_LEFT = -4;
    static constexpr int DIR_RIGHT = -5;
    static constexpr int DIR_PARENT = -6;
#line 1493 "rulegen.cpp"
    void rules_iteration_for(twalker& cw);
#line 1830 "rulegen.cpp"
    void clear_codes();
#line 1859 "rulegen.cpp"
    void clean_analyzers();
#line 1867 "rulegen.cpp"
    void clean_data();
#line 1873 "rulegen.cpp"
    void clear_sidecache_and_codes();
#line 1878 "rulegen.cpp"
    void update_all_codes(analyzer_state *a);
#line 1888 "rulegen.cpp"
    void clean_parents();
#line 1907 "rulegen.cpp"
    void rules_iteration();
#line 2093 "rulegen.cpp"
    void cleanup();
#line 2104 "rulegen.cpp"
    void clear_all();
#line 2109 "rulegen.cpp"
    extern int origin_id;
#line 2111 "rulegen.cpp"
    extern unsigned start_time;
#line 2113 "rulegen.cpp"
    void check_timeout();
#line 2118 "rulegen.cpp"
    void generate_rules();
#line 2208 "rulegen.cpp"
    void rule_iterations();
#line 2411 "rulegen.cpp"
    extern vector<treestate> alt_treestates;
#line 2413 "rulegen.cpp"
    void swap_treestates();
#line 2417 "rulegen.cpp"
    void add_other_origins(int qty);
#line 2430 "rulegen.cpp"
    int get_arb_dir(cell *c, int dir);
#line 2434 "rulegen.cpp"
    hrmap *new_hrmap_rulegen_alt(heptagon *h);
#line 2438 "rulegen.cpp"
    hrmap *new_hrmap_rulegen();
#line 2440 "rulegen.cpp"
    int get_state(cell *c);
#line 2444 "rulegen.cpp"
    extern string rules_known_for;
#line 2447 "rulegen.cpp"
    bool known();
#line 2451 "rulegen.cpp"
    bool prepare_rules();
#line 2524 "rulegen.cpp"
    void parse_treestate(arb::arbi_tiling& c, exp_parser& ep);
#line 2562 "rulegen.cpp"
    void verify_parsed_treestates(arb::arbi_tiling& c);
#line 2575 "rulegen.cpp"
    void show();
    }

  // implemented in: 3d-models.cpp

  #if MAXMDIM >= 4
#line 24 "3d-models.cpp"
  extern hyperpoint front_leg, rear_leg;
#line 25 "3d-models.cpp"
  extern transmatrix front_leg_move, rear_leg_move, front_leg_move_inverse, rear_leg_move_inverse;
#line 26 "3d-models.cpp"
  extern ld leg_length;
#line 41 "3d-models.cpp"
  ld zc(ld z);
#line 833 "3d-models.cpp"
  void queueball(const shiftmatrix& V, ld rad, color_t col, eItem what);
  #endif

  // implemented in: achievement.cpp

#line 14 "achievement.cpp"
  #define NUMLEADER 90
#line 17 "achievement.cpp"
  extern bool test_achievements;
#line 19 "achievement.cpp"
  extern bool offlineMode;
#line 21 "achievement.cpp"
  extern const char* leadernames[NUMLEADER];
#line 92 "achievement.cpp"
  #define LB_PRINCESS 36
  #define LB_STATISTICS 62
  #define LB_HALLOWEEN 63
  #define LB_YENDOR_CHALLENGE 40
  #define LB_PURE_TACTICS 41
  #define LB_PURE_TACTICS_SHMUP 49
  #define LB_PURE_TACTICS_COOP 50
  #define LB_RACING 81
#line 102 "achievement.cpp"
  extern void achievement_init();
#line 103 "achievement.cpp"
  extern string myname();
#line 104 "achievement.cpp"
  extern void achievement_close();
#line 105 "achievement.cpp"
  extern void achievement_pump();
#line 111 "achievement.cpp"
  extern void achievement_gain(const char* s, char flags IS(0));
#line 113 "achievement.cpp"
  extern bool haveLeaderboard(int id);
#line 114 "achievement.cpp"
  extern int get_currentscore(int id);
#line 115 "achievement.cpp"
  extern void set_priority_board(int id);
#line 116 "achievement.cpp"
  extern int get_sync_status();
#line 117 "achievement.cpp"
  extern bool score_loaded(int id);
#line 118 "achievement.cpp"
  extern int score_default(int id);
#line 119 "achievement.cpp"
  extern void improveItemScores();
#line 120 "achievement.cpp"
  extern void upload_score(int id, int v);
#line 122 "achievement.cpp"
  extern string achievementMessage[3];
#line 123 "achievement.cpp"
  extern int achievementTimer;
#line 125 "achievement.cpp"
  extern vector<string> achievementsReceived;
#line 130 "achievement.cpp"
  bool wrongMode(char flags);
#line 176 "achievement.cpp"
  extern set<string> got_achievements;
#line 178 "achievement.cpp"
  void achievement_gain_once(const string& s, char flags IS(0));
#line 193 "achievement.cpp"
  char specgeom_zebra();
#line 194 "achievement.cpp"
  char specgeom_lovasz();
#line 195 "achievement.cpp"
  char specgeom_halloween();
#line 196 "achievement.cpp"
  char specgeom_heptagonal();
#line 197 "achievement.cpp"
  char specgeom_euclid_gen();
#line 198 "achievement.cpp"
  char specgeom_crystal1();
#line 199 "achievement.cpp"
  char specgeom_crystal2();
#line 201 "achievement.cpp"
  extern vector<std::function<char()>> all_specgeom_checks;
#line 203 "achievement.cpp"
  char any_specgeom();
#line 208 "achievement.cpp"
  void achievement_log(const char* s, char flags);
  #if !CAP_ACHIEVE
#line 258 "achievement.cpp"
  int get_sync_status();
#line 259 "achievement.cpp"
  void set_priority_board(int);
  #endif
#line 263 "achievement.cpp"
  void achievement_collection(eItem it);
#line 267 "achievement.cpp"
  void achievement_collection2(eItem it, int q);
#line 607 "achievement.cpp"
  void achievement_count(const string& s, int current, int prev);
#line 661 "achievement.cpp"
  void improve_score(int i, eItem what);
#line 676 "achievement.cpp"
  void achievement_score(int cat, int number);
#line 705 "achievement.cpp"
  void improveItemScores();
#line 779 "achievement.cpp"
  void achievement_final(bool really_final);
#line 899 "achievement.cpp"
  extern bool hadtotalvictory;
#line 901 "achievement.cpp"
  void check_total_victory();
#line 916 "achievement.cpp"
  void achievement_victory(bool bHyper);
#line 992 "achievement.cpp"
  extern void achievement_pump();
#line 994 "achievement.cpp"
  string get_rich_presence_text();
#line 1054 "achievement.cpp"
  void achievement_display();
#line 1076 "achievement.cpp"
  bool isAscending(int i);
#line 1080 "achievement.cpp"
  int score_default(int i);

  // implemented in: aperiodic-hat.cpp

  namespace hat {
#line 13 "aperiodic-hat.cpp"
    bool in();
#line 784 "aperiodic-hat.cpp"
    extern ld hat_param;
#line 785 "aperiodic-hat.cpp"
    extern ld hat_param_imag;
#line 1186 "aperiodic-hat.cpp"
    hrmap *new_map();
#line 1190 "aperiodic-hat.cpp"
    bool pseudohept(cell *c);
#line 1195 "aperiodic-hat.cpp"
    int get_hat_id(cell *c);
#line 1199 "aperiodic-hat.cpp"
    void reshape();
#line 1206 "aperiodic-hat.cpp"
    transmatrix get_long_transform(int level, int dir);
#line 1214 "aperiodic-hat.cpp"
    color_t hatcolor(cell *c, int mode);
    }

  // implemented in: archimedean.cpp

  namespace arcm {
#line 15 "archimedean.cpp"
    bool in();
#line 17 "archimedean.cpp"
    extern ld euclidean_edge_length;
#line 20 "archimedean.cpp"
    struct hr_archimedean_error : hr_exception {
    hr_archimedean_error(string _s) : hr_exception(_s) {}
    };
    
    struct archimedean_tiling {
    
    int coloring;
    
    string symbol;
    
    vector<int> faces;
    vector<int> adj;
    vector<bool> invert;
    vector<int> nflags;
    
    bool have_ph, have_line, have_symmetry;
    int real_faces;
    int real_face_type;
    
    int repetition;
    int N;
    
    bool regular;
    
    ld euclidean_angle_sum;
    
    vector<int> flags;
    
    vector<vector<pair<int, int>>> adjacent;
    vector<vector<pair<ld, ld>>> triangles;
    
    void make_match(int a, int i, int b, int j);
    void prepare();
    void compute_sum();
    void compute_geometry();
    
    void parse();
    void parse(string s) { symbol = s; parse(); }
    
    ld edgelength;
    
    vector<ld> inradius, circumradius, alphas;
    
    vector<vector<int>> matches;
    vector<int> periods;
    vector<int> tilegroup;
    vector<int> groupoffset;
    int tilegroups;
    
    int errors;
    string errormsg;
    
    pair<int, int>& get_adj(heptagon *h, int cid);
    pair<int, int>& get_adj(heptspin hs) { return get_adj(hs.at, hs.spin); }
    pair<ld, ld>& get_triangle(heptagon *h, int cid);
    pair<ld, ld>& get_triangle(heptspin hs) { return get_triangle(hs.at, hs.spin); }
    pair<ld, ld>& get_triangle(const pair<int, int>& p, int delta = 0);
    pair<int, int>& get_adj(const pair<int, int>& p, int delta = 0);
    
    int support_threecolor();
    int support_threecolor_bitruncated();
    int support_football();
    bool support_chessboard();
    void regroup();
    string world_size();
    void get_nom_denom(int& anom, int& adenom);
    
    geometryinfo1& get_geometry(ld mul = 1);
    eGeometryClass get_class() { return get_geometry().kind; }
    
    bool get_step_values(int& steps, int& single_step);
    
    transmatrix adjcell_matrix(heptagon *h, int d);
    
    ld scale();
    };
#line 99 "archimedean.cpp"
    static constexpr int sfPH = 1;
    static constexpr int sfLINE = 2;
    static constexpr int sfCHESS = 4;
    static constexpr int sfTHREE = 8;
    static constexpr int sfSEMILINE = 16;
    #if CAP_ARCM
#line 108 "archimedean.cpp"
    extern archimedean_tiling current;
#line 109 "archimedean.cpp"
    extern archimedean_tiling fake_current;
#line 111 "archimedean.cpp"
    archimedean_tiling& current_or_fake();
#line 122 "archimedean.cpp"
    short& id_of(heptagon *h);
#line 128 "archimedean.cpp"
    short& parent_index_of(heptagon *h);
#line 134 "archimedean.cpp"
    int neighbors_of(heptagon *h);
#line 138 "archimedean.cpp"
    int gcd(int x, int y);
#line 156 "archimedean.cpp"
    ld compute_edgelength(vector<pair<ld, ld>> facemul, ld halftotal IS(M_PI));
#line 557 "archimedean.cpp"
    extern map<heptagon*, pair<heptagon*, transmatrix>> archimedean_gmatrix;
#line 559 "archimedean.cpp"
    extern hrmap *current_altmap;
#line 569 "archimedean.cpp"
    extern bool use_gmatrix;
#line 575 "archimedean.cpp"
    extern geometry_information *alt_cgip[2];
#line 577 "archimedean.cpp"
    geometry_information *find_alt_cgip();
#line 891 "archimedean.cpp"
    hrmap *new_map();
#line 1011 "archimedean.cpp"
    int fix(heptagon *h, int spin);
#line 1081 "archimedean.cpp"
    bool load_symbol(const string& s, bool switch_geom);
#line 1164 "archimedean.cpp"
    bool pseudohept(cell *c);
#line 1175 "archimedean.cpp"
    bool chessvalue(cell *c);
#line 1181 "archimedean.cpp"
    bool linespattern(cell *c);
#line 1185 "archimedean.cpp"
    int threecolor(cell *c);
#line 1208 "archimedean.cpp"
    extern vector<pair<string, int> > samples;
#line 1312 "archimedean.cpp"
    void next_variation();
#line 1320 "archimedean.cpp"
    void enable(archimedean_tiling& arct);
#line 1361 "archimedean.cpp"
    void init_symbol_edit();
#line 1368 "archimedean.cpp"
    void show();
#line 1575 "archimedean.cpp"
    int degree(heptagon *h);
#line 1579 "archimedean.cpp"
    bool is_vertex(heptagon *h);
#line 1583 "archimedean.cpp"
    int get_graphical_id(cell *c);
#line 1609 "archimedean.cpp"
    int valence();
#line 1622 "archimedean.cpp"
    map<gp::loc, cdata>& get_cdata();
    #endif
    }

  // implemented in: asonov.cpp

  namespace asonov {
    #if !CAP_SOLV
#line 20 "asonov.cpp"
    inline bool in() { return false; }
    #endif
#line 24 "asonov.cpp"
    extern int period_xy;
#line 25 "asonov.cpp"
    extern int period_z;
    #if CAP_SOLV
#line 29 "asonov.cpp"
    bool in();
#line 31 "asonov.cpp"
    extern hyperpoint tx, ty, tz;
#line 32 "asonov.cpp"
    extern transmatrix straighten;
#line 35 "asonov.cpp"
    struct coord: public array<int,3> {
    coord() {}
    coord(int x, int y, int z) : array<int,3>(make_array(zgmod(x, period_xy), zgmod(y, period_xy), zgmod(z, period_z))) {}
    coord shift(int x, int y, int z=0) { return coord(selfhr[0]+x, selfhr[1]+y, selfhr[2]+z); }
    coord up() { return coord(selfhr[0]*2-selfhr[1], selfhr[1]-selfhr[0], selfhr[2]+1); }
    coord down() { return coord(selfhr[0]+selfhr[1], selfhr[0]+selfhr[1]*2, selfhr[2]-1); }  
    coord addmove(int d);
    coord operator - (coord b);
    };
#line 64 "asonov.cpp"
    void prepare();
#line 111 "asonov.cpp"
    void prepare_walls();
#line 158 "asonov.cpp"
    transmatrix adjmatrix(int i);
#line 206 "asonov.cpp"
    hrmap *new_map();
#line 208 "asonov.cpp"
    coord get_coord(heptagon *h);
#line 210 "asonov.cpp"
    heptagon *get_at(coord where);
#line 212 "asonov.cpp"
    extern int period_xy_edit, period_z_edit;
#line 214 "asonov.cpp"
    void set_flags();
#line 222 "asonov.cpp"
    void prepare_config();
#line 227 "asonov.cpp"
    void show_config();
    #endif
    }

  // implemented in: attack.cpp

#line 12 "attack.cpp"
  extern array<int, motypes> kills;
#line 64 "attack.cpp"
  int tkills();
#line 70 "attack.cpp"
  int killtypes();
#line 77 "attack.cpp"
  bool arrow_stuns(eMonster m);
#line 81 "attack.cpp"
  bool canAttack(cell *c1, eMonster m1, cell *c2, eMonster m2, flagtype flags);
#line 182 "attack.cpp"
  bool petrify(cell *c, eWall walltype, eMonster m);
#line 222 "attack.cpp"
  void killIvy(cell *c, eMonster who);
#line 240 "attack.cpp"
  void reset_spill();
#line 244 "attack.cpp"
  void record_spillinfo(cell *c, eWall t);
#line 253 "attack.cpp"
  void prespill(cell* c, eWall t, int rad, cell *from);
#line 337 "attack.cpp"
  eWall conditional_flip_slime(bool flip, eWall t);
#line 343 "attack.cpp"
  void chainspill(cell *c);
#line 347 "attack.cpp"
  void spillfix(cell* c, eWall t, int rad);
#line 358 "attack.cpp"
  void spill(cell* c, eWall t, int rad);
#line 374 "attack.cpp"
  void degradeDemons();
#line 390 "attack.cpp"
  void stunMonster(cell *c2, eMonster killer, flagtype flags);
#line 423 "attack.cpp"
  bool attackJustStuns(cell *c2, flagtype f, eMonster attacker);
#line 438 "attack.cpp"
  void minerEffect(cell *c);
#line 461 "attack.cpp"
  void killMutantIvy(cell *c, eMonster who);
#line 471 "attack.cpp"
  bignum ivy_total();
#line 477 "attack.cpp"
  void killMonster(cell *c, eMonster who, flagtype deathflags IS(0));
#line 889 "attack.cpp"
  void fightmessage(eMonster victim, eMonster attacker, bool stun, flagtype flags);
#line 999 "attack.cpp"
  bool notthateasy(eMonster m);
#line 1004 "attack.cpp"
  bool attackMonster(cell *c, flagtype flags, eMonster killer);
#line 1082 "attack.cpp"
  void pushMonster(const movei& mi);
#line 1111 "attack.cpp"
  void killFriendlyIvy();
#line 1116 "attack.cpp"
  bool monsterPushable(cell *c2);
#line 1122 "attack.cpp"
  bool should_switchplace(cell *c1, cell *c2);
#line 1130 "attack.cpp"
  bool switchplace_prevent(cell *c1, cell *c2, struct pcmove& m);
#line 1145 "attack.cpp"
  void handle_switchplaces(cell *c1, cell *c2, bool& switchplaces);
#line 1166 "attack.cpp"
  bool flashWouldKill(cell *c, flagtype extra);
#line 1183 "attack.cpp"
  vector<cell*> gun_targets(cell *c);
#line 1197 "attack.cpp"
  void fallMonster(cell *c, flagtype flags IS(0));
#line 1201 "attack.cpp"
  void killHardcorePlayer(int id, flagtype flags);
#line 1229 "attack.cpp"
  extern bool suicidal;
#line 1231 "attack.cpp"
  void killThePlayer(eMonster m, int id, flagtype flags);
#line 1266 "attack.cpp"
  void killThePlayerAt(eMonster m, cell *c, flagtype flags);
#line 1273 "attack.cpp"
  template<class T> void do_swords(movei mi, eMonster who, const T& f) {
  for(int bb=0; bb<2; bb++) if(who == moPlayer && sword::orbcount(bb)) {
  cell *sf = sword::pos(mi.s, sword::dir[multi::cpid], bb);
  cell *st = sword::pos(mi.t, sword::shift(mi, sword::dir[multi::cpid]), bb);
  f(st, bb);
  if(sf != st && !isNeighbor(sf,st)) {
  // also attack the in-transit cell
  if(hr__S3 == 3) {
  forCellEx(sb, sf) if(isNeighbor(sb, st) && sb != mi.s && sb != mi.t) f(sb, bb);
  }
  else {
  forCellEx(sb, mi.s) if(isNeighbor(sb, st) && sb != mi.t) f(sb, bb);
  forCellEx(sb, mi.t) if(isNeighbor(sb, sf) && sb != mi.s) f(sb, bb);
  }
  }
  }
  }
#line 1294 "attack.cpp"
  void stabbingAttack(movei mi, eMonster who, int bonuskill IS(0));

  // implemented in: barriers.cpp

#line 11 "barriers.cpp"
  bool checkBarriersFront(cellwalker bb, int q IS(5), bool cross IS(false));
#line 36 "barriers.cpp"
  bool hasbardir(cell *c);
#line 40 "barriers.cpp"
  void preventbarriers(cell *c);
#line 45 "barriers.cpp"
  bool checkBarriersBack(cellwalker bb, int q IS(5), bool cross IS(false));
#line 70 "barriers.cpp"
  bool warped_version(eLand l1, eLand l2);
#line 74 "barriers.cpp"
  int get_valence(cellwalker bb, int dir, bool& ok);
#line 93 "barriers.cpp"
  void set_and_wall(cell *c, eLand l);
#line 101 "barriers.cpp"
  void surround_by(bool setit, cellwalker bb, int dir, int a, int b, eLand which, bool swapped, bool& ok);
#line 117 "barriers.cpp"
  void spin_around_by(cellwalker& bb, int dir, int q);
#line 124 "barriers.cpp"
  bool on_wall(eLand ws);
#line 140 "barriers.cpp"
  bool general_barrier_advance(cellwalker& bb, int& dir, eLand& l1, eLand& l2, eLand& ws, bool setit);
#line 258 "barriers.cpp"
  bool general_barrier_check(cellwalker bb, int q, int dir, eLand ws, eLand l1 IS(laNone), eLand l2 IS(laNone));
#line 281 "barriers.cpp"
  bool general_barrier_check_after(cellwalker bb, int steps, int q, int dir, eLand ws, eLand l1 IS(laNone), eLand l2 IS(laNone));
#line 286 "barriers.cpp"
  eWall getElementalWall(eLand l);
#line 294 "barriers.cpp"
  void setbarrier(cell *c, eLand l1, eLand l2, bool setbar);
#line 323 "barriers.cpp"
  void setbarrier(cell *c);
#line 327 "barriers.cpp"
  extern int setland_max;
#line 329 "barriers.cpp"
  void setland(cell *c, eLand l);
#line 340 "barriers.cpp"
  void extendcheck(cell *c);
#line 347 "barriers.cpp"
  bool mirrorwall(cell *c);
#line 351 "barriers.cpp"
  void extendBarrierFront(cell *c);
#line 401 "barriers.cpp"
  void extendBarrierBack(cell *c);
#line 433 "barriers.cpp"
  void general_barrier_extend(cell *c);
#line 527 "barriers.cpp"
  void extendCR5(cell *c);
#line 554 "barriers.cpp"
  bool isbar4(cell *c);
#line 561 "barriers.cpp"
  bool barrier_cross(eLand l, eLand r);
#line 569 "barriers.cpp"
  void extendBarrier(cell *c);
#line 662 "barriers.cpp"
  void buildBarrierForce(cell *c, int d, eLand l);
#line 677 "barriers.cpp"
  void buildBarrier(cell *c, int d, eLand l IS(laNone));
#line 692 "barriers.cpp"
  bool buildBarrier6(cellwalker cw, int type);
#line 810 "barriers.cpp"
  extern int curse_percentage;
#line 813 "barriers.cpp"
  bool buildBarrier6(cellwalker cw, eLand m0, eLand m1);
#line 852 "barriers.cpp"
  bool buildBarrier4(cell *c, int d, int mode, eLand ll, eLand lr);
#line 913 "barriers.cpp"
  void buildBarrierStrong(cell *c, int d, bool oldleft, eLand newland);
#line 926 "barriers.cpp"
  void buildBarrierStrong(cell *c, int d, bool oldleft);
#line 930 "barriers.cpp"
  void buildCrossroads2(cell *c);
  #if MAXMDIM >= 4
#line 1030 "barriers.cpp"
  bool bufferzone();
#line 1031 "barriers.cpp"
  int basic_tests();
#line 1033 "barriers.cpp"
  bool valid_dir(const vector<char>& ad, int j, cell *c);
#line 1047 "barriers.cpp"
  void extend3D(cell *c);
#line 1104 "barriers.cpp"
  bool buildBarrier3D(cell *c, eLand l2, int forced_dir);
  #endif
#line 1159 "barriers.cpp"
  bool buildBarrierNowall(cell *c, eLand l2, int forced_dir IS(NODIR));
#line 1164 "barriers.cpp"
  bool general_barrier_build(eLand ws, cell *c, eLand l2, int forced_dir IS(NODIR));

  // implemented in: basegraph.cpp

#line 16 "basegraph.cpp"
  struct radarpoint {
  hyperpoint h;
  char glyph;
  color_t color;
  color_t line;
  };
  
  struct radarline {
  hyperpoint h1, h2;
  color_t line;
  };
  
  /** configuration of the current view */
  struct display_data {
  /** The cell which is currently in the center. */
  cell *precise_center;
  /** The current rotation, relative to precise_center. */
  transmatrix view_matrix;
  /** Camera rotation, used in nonisotropic geometries. */
  transmatrix local_perspective;
  /** The view relative to the player character. */
  shiftmatrix player_matrix;
  /** On-screen coordinates for all the visible cells. */
  map<cell*, shiftmatrix> cellmatrices, old_cellmatrices;
  /** Position of the current map view, relative to the screen (0 to 1). */
  ld xmin, ymin, xmax, ymax;
  /** Position of the current map view, in pixels. */
  ld xtop, ytop, xsize, ysize;
  display_data() { xmin = ymin = 0; xmax = ymax = 1; }
  
  /** Center of the current map view, in pixels. */
  int xcenter, ycenter;
  ld radius;
  int scrsize;  
  bool sidescreen;
  
  ld tanfov;
  flagtype next_shader_flags;
  
  vector<radarpoint> radarpoints;
  vector<radarline> radarlines;
  transmatrix radar_transform;
  transmatrix radar_transform_post;
  
  ld eyewidth();
  bool separate_eyes();
  bool in_anaglyph();
  
  void set_viewport(int ed);
  void set_projection(int ed, ld shift);
  void set_mask(int ed);
  
  void set_all(int ed, ld shift);
  /** Which copy of the player cell? */
  transmatrix which_copy;
  /** On-screen coordinates for all the visible cells. */
  map<cell*, vector<shiftmatrix>> all_drawn_copies;
  };
  
  #define View (::hr::current_display->view_matrix)
  #define cwtV (::hr::current_display->player_matrix)
  #define centerover (::hr::current_display->precise_center)
  #define gmatrix (::hr::current_display->cellmatrices)
  #define gmatrix0 (::hr::current_display->old_cellmatrices)
  #define NLP (::hr::current_display->local_perspective)
  
#line 84 "basegraph.cpp"
  extern display_data default_display;
#line 85 "basegraph.cpp"
  extern display_data *current_display;
#line 88 "basegraph.cpp"
  extern unsigned backcolor;
#line 89 "basegraph.cpp"
  extern unsigned bordcolor;
#line 90 "basegraph.cpp"
  extern unsigned forecolor;
#line 100 "basegraph.cpp"
  int get_sightrange();
#line 102 "basegraph.cpp"
  int get_sightrange_ambush();
#line 128 "basegraph.cpp"
  int getnext(const char* s, int& i);
  #if CAP_SDL
  #if !CAP_SDL2
#line 166 "basegraph.cpp"
  typedef SDL_Surface SDL_Renderer;
  #define srend s
  #endif
#line 171 "basegraph.cpp"
  extern SDL_Surface *s;
#line 172 "basegraph.cpp"
  extern SDL_Surface *s_screen;
  #if CAP_SDL2
#line 174 "basegraph.cpp"
  extern SDL_Renderer *s_renderer, *s_software_renderer;
#line 176 "basegraph.cpp"
  #define srend s_software_renderer
#line 178 "basegraph.cpp"
  extern SDL_Texture *s_texture;
#line 179 "basegraph.cpp"
  extern SDL_Window *s_window;
#line 180 "basegraph.cpp"
  extern SDL_GLContext s_context;
#line 181 "basegraph.cpp"
  extern bool s_have_context;
  #endif
#line 184 "basegraph.cpp"
  extern color_t qpixel_pixel_outside;
#line 186 "basegraph.cpp"
  color_t& qpixel(SDL_Surface *surf, int x, int y);
#line 194 "basegraph.cpp"
  void present_surface();
#line 205 "basegraph.cpp"
  void present_screen();
  #endif
  #if CAP_SDLTTF
  #ifdef FONTCONFIG
#line 227 "basegraph.cpp"
  extern string font_to_find;
  #endif
#line 231 "basegraph.cpp"
  extern string fontpath;
  #endif
  #if !CAP_GL
#line 308 "basegraph.cpp"
  void setcameraangle(bool b);
  #endif
  #if !CAP_GL
#line 312 "basegraph.cpp"
  void reset_projection();
#line 313 "basegraph.cpp"
  void glflush();
#line 314 "basegraph.cpp"
  bool model_needs_depth();
  #endif
  #if CAP_GL
#line 320 "basegraph.cpp"
  void eyewidth_translate(int ed);
#line 326 "basegraph.cpp"
  extern bool new_projection_needed;
#line 328 "basegraph.cpp"
  inline void reset_projection() { new_projection_needed = true; }
#line 331 "basegraph.cpp"
  extern ld lband_shift;
#line 371 "basegraph.cpp"
  bool model_needs_depth();
#line 375 "basegraph.cpp"
  void setGLProjection(color_t col IS(backcolor));
#line 424 "basegraph.cpp"
   int next_p2 (int a );
  #if CAP_GLFONT
#line 436 "basegraph.cpp"
  struct charinfo_t {
  int w, h;
  float tx0, ty0, tx1, ty1;
  };
  
  struct glfont_t {
  GLuint texture;                                     // Holds The Texture Id
  //GLuint list_base;                                   // Holds The First Display List ID  
  vector<charinfo_t> chars; 
  };
  
  const int max_glfont_size = 72;
#line 450 "basegraph.cpp"
  extern glfont_t *glfont[max_glfont_size+1];
#line 496 "basegraph.cpp"
  void init_glfont(int size);
  #endif
#line 682 "basegraph.cpp"
  extern purehookset hooks_resetGL;
#line 684 "basegraph.cpp"
  void resetGL();
  #endif
  #if CAP_XGD
#line 726 "basegraph.cpp"
  void gdpush(int t);
#line 730 "basegraph.cpp"
  bool displaychr(int x, int y, int shift, int size, char chr, color_t col);
#line 765 "basegraph.cpp"
  bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 777 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const string &s, color_t color, int align);
#line 781 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, char const *s, color_t color, int align);
  #endif
  #if !CAP_XGD
#line 787 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const char *str, color_t color, int align);
#line 855 "basegraph.cpp"
  bool displaystr(int x, int y, int shift, int size, const string &s, color_t color, int align);
#line 859 "basegraph.cpp"
  bool displayfrSP(int x, int y, int sh, int b, int size, const string &s, color_t color, int align, int p);
#line 876 "basegraph.cpp"
  bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 880 "basegraph.cpp"
  bool displaychr(int x, int y, int shift, int size, char chr, color_t col);
  #endif
#line 889 "basegraph.cpp"
  struct msginfo {
  int stamp;
  time_t rtstamp;
  int gtstamp;
  int turnstamp;
  char flashout;
  char spamtype;
  int quantity;
  string msg;
  };
#line 901 "basegraph.cpp"
  extern vector<msginfo> msgs;
#line 903 "basegraph.cpp"
  extern vector<msginfo> gamelog;
#line 905 "basegraph.cpp"
  void flashMessages();
#line 913 "basegraph.cpp"
  string fullmsg(msginfo& m);
#line 937 "basegraph.cpp"
  void clearMessages();
#line 939 "basegraph.cpp"
  void addMessage(string s, char spamtype);
#line 954 "basegraph.cpp"
  color_t colormix(color_t a, color_t b, color_t c);
#line 961 "basegraph.cpp"
  int color_diff(color_t a, color_t b);
#line 967 "basegraph.cpp"
  int rhypot(int a, int b);
#line 969 "basegraph.cpp"
  ld realradius();
#line 983 "basegraph.cpp"
  void drawmessage(const string& s, int& y, color_t col);
#line 1020 "basegraph.cpp"
  void drawmessages();
#line 1055 "basegraph.cpp"
  void drawCircle(int x, int y, int size, color_t color, color_t fillcolor IS(0));
#line 1106 "basegraph.cpp"
  void displayButton(int x, int y, const string& name, int key, int align, int rad IS(0));
#line 1114 "basegraph.cpp"
  #define SETMOUSEKEY 5000
#line 1117 "basegraph.cpp"
  extern char mousekey;
#line 1118 "basegraph.cpp"
  extern char newmousekey;
#line 1120 "basegraph.cpp"
  void displaymm(char c, int x, int y, int rad, int size, const string& title, int align);
#line 1127 "basegraph.cpp"
  bool displayButtonS(int x, int y, const string& name, color_t col, int align, int size);
#line 1135 "basegraph.cpp"
  void displayColorButton(int x, int y, const string& name, int key, int align, int rad, color_t color, color_t color2 IS(0));
#line 1146 "basegraph.cpp"
  void compute_fsize();
#line 1156 "basegraph.cpp"
  extern bool graphics_on;
#line 1158 "basegraph.cpp"
  extern bool request_resolution_change;
#line 1160 "basegraph.cpp"
  void do_request_resolution_change();
#line 1162 "basegraph.cpp"
  bool want_vsync();
#line 1168 "basegraph.cpp"
  bool need_to_reopen_window();
#line 1180 "basegraph.cpp"
  bool need_to_apply_screen_settings();
#line 1190 "basegraph.cpp"
  void close_renderer();
#line 1199 "basegraph.cpp"
  void close_window();
#line 1209 "basegraph.cpp"
  void apply_screen_settings();
#line 1240 "basegraph.cpp"
  pair<int, int> get_requested_resolution();
#line 1258 "basegraph.cpp"
  extern bool resizable;
#line 1260 "basegraph.cpp"
  void setvideomode_android();
  #if CAP_SDL
#line 1268 "basegraph.cpp"
  extern int current_window_flags;
#line 1270 "basegraph.cpp"
  void setvideomode();
  #endif
#line 1418 "basegraph.cpp"
  extern bool noGUI;
  #if CAP_SDL
#line 1421 "basegraph.cpp"
  extern bool sdl_on;
#line 1422 "basegraph.cpp"
  int SDL_Init1(Uint32 flags);
  #endif
#line 1432 "basegraph.cpp"
  void init_font();
#line 1441 "basegraph.cpp"
  void close_font();
#line 1457 "basegraph.cpp"
  void init_graph();
#line 1515 "basegraph.cpp"
  void initialize_all();
#line 1574 "basegraph.cpp"
  void quit_all();
#line 1586 "basegraph.cpp"
  int calcfps();
  namespace subscreens {
#line 1599 "basegraph.cpp"
    extern vector<display_data> player_displays;
#line 1601 "basegraph.cpp"
    extern bool in;
#line 1602 "basegraph.cpp"
    extern int current_player;
#line 1604 "basegraph.cpp"
    bool is_current_player(int id);
#line 1609 "basegraph.cpp"
    void prepare();
#line 1629 "basegraph.cpp"
    bool split(reaction_t what);
    }

  // implemented in: bigstuff.cpp

#line 18 "bigstuff.cpp"
  extern bool disable_bigstuff;
#line 22 "bigstuff.cpp"
  int newRoundTableRadius();
  #if CAP_COMPLEX2
#line 28 "bigstuff.cpp"
  bool anthrax();
#line 32 "bigstuff.cpp"
  int getAnthraxData(cell *c, bool b);
  #endif
#line 49 "bigstuff.cpp"
  int roundTableRadius(cell *c);
#line 58 "bigstuff.cpp"
  int celldistAltRelative(cell *c);
#line 75 "bigstuff.cpp"
  gp::loc camelot_coords();
#line 77 "bigstuff.cpp"
  int euclidAlt(short x, short y);
#line 104 "bigstuff.cpp"
  int cylinder_alt(cell *c);
#line 118 "bigstuff.cpp"
  int compassDist(cell *c);
#line 125 "bigstuff.cpp"
  cell *findcompass(cell *c);
#line 144 "bigstuff.cpp"
  bool grailWasFound(cell *c);
#line 149 "bigstuff.cpp"
  int default_levs();
#line 162 "bigstuff.cpp"
  namespace altmap {
  
  /* in quotient space we cannot use alt for quotient */
  extern map<heptagon*, short> quotient_relspins;
  
  /** h->move(relspin(h->alt)) corresponds to h->alt->move(0) */
  inline short& relspin(heptagon *alt) { return quotient ? quotient_relspins[alt] : alt->zebraval; }
  
  /** for Camelot, the radius */
  inline short& radius(heptagon *alt) { return alt->emeraldval; }
  
  /** type of the horocycle -- currently used in Land of Storms which has two types */
  inline short& which(heptagon *alt) { return alt->emeraldval; }
  
  /** the original land, for altmaps which may appear in multiple lands (Camelot) */
  inline short& orig_land(heptagon *alt) { return alt->fiftyval; }
  
  /** NOTE: do not use fieldval, because it would conflict with the map generation for hrmap_h3_rule and hrmap_rulegen */
  }
#line 351 "bigstuff.cpp"
  pair<heptagon*, int> get_voronoi_winner(cell *c);
  #if MAXMDIM >= 4
#line 399 "bigstuff.cpp"
  int hrandom_adjacent(cellwalker cw);
  #endif
#line 407 "bigstuff.cpp"
  heptagon *create_altmap(cell *c, int rad, hstate firststate, int special IS(0));
#line 505 "bigstuff.cpp"
  void beCIsland(cell *c);
#line 513 "bigstuff.cpp"
  void generateTreasureIsland(cell *c);
#line 587 "bigstuff.cpp"
  extern bool generatingEquidistant;
#line 589 "bigstuff.cpp"
  cell *buildAnotherEquidistant(cell *c, int radius);
#line 679 "bigstuff.cpp"
  void buildAnotherEquidistant(cell *c);
#line 693 "bigstuff.cpp"
  int coastval(cell *c, eLand base);
#line 721 "bigstuff.cpp"
  bool checkInTree(cell *c, int maxv);
#line 741 "bigstuff.cpp"
  void buildEquidistant(cell *c);
#line 1015 "bigstuff.cpp"
  cell *randomDown(cell *c);
#line 1024 "bigstuff.cpp"
  int edgeDepth(cell *c);
#line 1034 "bigstuff.cpp"
  int getHauntedDepth(cell *c);
#line 1042 "bigstuff.cpp"
  int towerval(cell *c, const cellfunction& cf);
#line 1053 "bigstuff.cpp"
  void setLandWeird(cell *c);
#line 1064 "bigstuff.cpp"
  void setLandQuotient(cell *c);
#line 1084 "bigstuff.cpp"
  void elementalXY(cell *c, int x, int y, bool make_wall);
#line 1103 "bigstuff.cpp"
  void setLandSphere(cell *c);
#line 1138 "bigstuff.cpp"
  extern map<array<int, 3>, eLand> landscape_lands;
#line 1140 "bigstuff.cpp"
  eLand& get_euland(int c);
#line 1145 "bigstuff.cpp"
  void clear_euland(eLand first);
#line 1160 "bigstuff.cpp"
  eLand switchable(eLand nearland, eLand farland, int c);
#line 1191 "bigstuff.cpp"
  eLand getEuclidLand(int c);
#line 1204 "bigstuff.cpp"
  void setLandSol(cell *c);
#line 1229 "bigstuff.cpp"
  void setLandHybrid(cell *c);
#line 1271 "bigstuff.cpp"
  void setLandNil(cell *c);
#line 1325 "bigstuff.cpp"
  void setLandEuclid(cell *c);
#line 1449 "bigstuff.cpp"
  eLand get_euland3(int x);
#line 1456 "bigstuff.cpp"
  void set_euland3(cell *c, int co10, int co11, int alt, int hash);
#line 1510 "bigstuff.cpp"
  extern bool easy_to_find_specialland;
#line 1512 "bigstuff.cpp"
  bool quickfind(eLand l);
#line 1525 "bigstuff.cpp"
  extern hookset<int(cell*, bool)> hooks_wallchance;
#line 1527 "bigstuff.cpp"
  int wallchance(cell *c, bool deepOcean);
#line 1565 "bigstuff.cpp"
  bool horo_ok();
#line 1576 "bigstuff.cpp"
  bool horo_or_eubinary();
#line 1581 "bigstuff.cpp"
  bool have_alt(cell *c);
#line 1586 "bigstuff.cpp"
  void gen_alt(cell *c);
#line 1591 "bigstuff.cpp"
  void gen_alt_around(cell *c);
#line 1600 "bigstuff.cpp"
  bool greater_alt(cell *c, cell *c2);
#line 1604 "bigstuff.cpp"
  int horo_gen_distance();
#line 1608 "bigstuff.cpp"
  bool single_horo(eLand horoland);
#line 1612 "bigstuff.cpp"
  bool in_single_horo(cell *c, eLand horoland);
#line 1616 "bigstuff.cpp"
  bool inside_starting_horo(cell *c, eLand horoland);
#line 1620 "bigstuff.cpp"
  bool extend_alt(cell *c, eLand horoland, eLand overland, bool extend_in_single IS(true), int dist IS(horo_gen_distance()));
#line 1631 "bigstuff.cpp"
  bool can_start_horo(cell *c, bool allowed_in_horo IS(false));
#line 1639 "bigstuff.cpp"
  bool gp_wall_test();
#line 1649 "bigstuff.cpp"
  bool deep_ocean_at(cell *c, cell *from);
#line 1679 "bigstuff.cpp"
  bool good_for_wall(cell *c);
#line 1687 "bigstuff.cpp"
  bool walls_not_implemented();
#line 1693 "bigstuff.cpp"
  bool old_nice_walls();
#line 1697 "bigstuff.cpp"
  bool nice_walls_available();
#line 1703 "bigstuff.cpp"
  void build_barrier_good(cell *c, eLand l IS(laNone));
#line 1715 "bigstuff.cpp"
  void build_walls(cell *c, cell *from);
#line 1865 "bigstuff.cpp"
  void start_camelot(cell *c);
#line 1875 "bigstuff.cpp"
  extern bool debug_voronoi;
#line 1876 "bigstuff.cpp"
  extern map<heptagon*, eLand> hv_land;
#line 1878 "bigstuff.cpp"
  void build_horocycles(cell *c, cell *from);
#line 1948 "bigstuff.cpp"
  void buildBigStuff(cell *c, cell *from);
#line 1964 "bigstuff.cpp"
  bool openplains(cell *c);
#line 1990 "bigstuff.cpp"
  void buildCamelotWall(cell *c);
#line 2002 "bigstuff.cpp"
  bool no_barriers_in_radius(cell *c, int rad);
#line 2008 "bigstuff.cpp"
  eMonster camelot_monster();
#line 2018 "bigstuff.cpp"
  void buildCamelot(cell *c);
#line 2090 "bigstuff.cpp"
  int masterAlt(cell *c);
#line 2099 "bigstuff.cpp"
  int temple_layer_size();
#line 2110 "bigstuff.cpp"
  void gen_temple(cell *c);
#line 2181 "bigstuff.cpp"
  extern int horodisk_from;
#line 2183 "bigstuff.cpp"
  void pick_hv_subland(cell *c, eLand l, int depth);
#line 2208 "bigstuff.cpp"
  void moreBigStuff(cell *c);
#line 2318 "bigstuff.cpp"
  void generate_mines();
#line 2334 "bigstuff.cpp"
  extern vector<eLand> currentlands;
#line 2336 "bigstuff.cpp"
  void pregen();

  // implemented in: binary-tiling.cpp

  namespace bt {
#line 14 "binary-tiling.cpp"
    bool in();
    #if !CAP_BT
#line 23 "binary-tiling.cpp"
    int updir();
    #endif
    #if CAP_BT
#line 28 "binary-tiling.cpp"
    enum bindir {
    bd_right = 0,
    bd_up_right = 1,
    bd_up = 2,
    bd_up_left = 3,
    bd_left = 4,
    bd_down = 5, /* for cells of degree 6 */
    bd_down_left = 5, /* for cells of degree 7 */
    bd_down_right = 6 /* for cells of degree 7 */
    };
#line 40 "binary-tiling.cpp"
    int type_of(heptagon *h);
#line 45 "binary-tiling.cpp"
    int mapside(heptagon *h);
#line 67 "binary-tiling.cpp"
    heptagon *path(heptagon *h, int d, int d1, std::initializer_list<int> p);
#line 98 "binary-tiling.cpp"
    heptagon *pathc(heptagon *h, int d, int d1, std::vector<std::initializer_list<int>> p);
#line 104 "binary-tiling.cpp"
    extern ld hororec_scale;
#line 105 "binary-tiling.cpp"
    extern ld horohex_scale;
#line 107 "binary-tiling.cpp"
    void make_binary_lands(heptagon *parent, heptagon *h);
#line 124 "binary-tiling.cpp"
    heptagon *build(heptagon *parent, int d, int d1, int t, int side, int delta);
    #if MAXMDIM==4
#line 176 "binary-tiling.cpp"
    heptagon *build3(heptagon *parent, int d, int d1, int delta);
    #endif
#line 547 "binary-tiling.cpp"
    hrmap *new_map();
#line 555 "binary-tiling.cpp"
    hrmap *new_alt_map(heptagon *o);
#line 561 "binary-tiling.cpp"
    bool use_direct_for(int dir);
#line 566 "binary-tiling.cpp"
    int expansion_coordinate();
#line 572 "binary-tiling.cpp"
    ld area_expansion_rate();
#line 605 "binary-tiling.cpp"
    ld expansion();
#line 626 "binary-tiling.cpp"
    transmatrix normalized_at(hyperpoint h);
#line 667 "binary-tiling.cpp"
    transmatrix normalized_at(ld x, ld y, ld z IS(0));
#line 671 "binary-tiling.cpp"
    int updir();
#line 680 "binary-tiling.cpp"
    int dirs_outer();
#line 690 "binary-tiling.cpp"
    int dirs_inner();
#line 695 "binary-tiling.cpp"
    void build_tmatrix();
    #if MAXMDIM == 4
#line 780 "binary-tiling.cpp"
    void queuecube(const shiftmatrix& V, ld size, color_t linecolor, color_t facecolor);
    #endif
#line 813 "binary-tiling.cpp"
    ld xy_mul();
#line 815 "binary-tiling.cpp"
    transmatrix parabolic(ld u);
#line 819 "binary-tiling.cpp"
    transmatrix parabolic3(ld y, ld z);
#line 825 "binary-tiling.cpp"
    ld horo_level(hyperpoint h);
#line 837 "binary-tiling.cpp"
    hyperpoint bt_to_minkowski(hyperpoint h);
#line 844 "binary-tiling.cpp"
    hyperpoint minkowski_to_bt(hyperpoint h);
#line 856 "binary-tiling.cpp"
    bool pseudohept(cell *c);
#line 888 "binary-tiling.cpp"
    pair<gp::loc, gp::loc> gpvalue(heptagon *h);
#line 895 "binary-tiling.cpp"
    int tridist(gp::loc v);
#line 904 "binary-tiling.cpp"
    int equalize(heptagon*& c1, heptagon*& c2);
#line 913 "binary-tiling.cpp"
    int celldistance3_tri(heptagon *c1, heptagon *c2);
#line 940 "binary-tiling.cpp"
    int celldistance3_rec(heptagon *c1, heptagon *c2);
#line 961 "binary-tiling.cpp"
    int celldistance3_square(heptagon *c1, heptagon *c2);
#line 986 "binary-tiling.cpp"
    int celldistance3_hex(heptagon *c1, heptagon *c2);
#line 1017 "binary-tiling.cpp"
    int celldistance3_approx(heptagon *c1, heptagon *c2);
#line 1034 "binary-tiling.cpp"
    int celldistance3(heptagon *c1, heptagon *c2);
#line 1048 "binary-tiling.cpp"
    int celldistance3(cell *c1, cell *c2);
#line 1050 "binary-tiling.cpp"
    hyperpoint get_horopoint(ld y, ld x);
#line 1054 "binary-tiling.cpp"
    hyperpoint get_horopoint(hyperpoint h);
#line 1058 "binary-tiling.cpp"
    hyperpoint inverse_horopoint(hyperpoint h);
#line 1064 "binary-tiling.cpp"
    hyperpoint get_corner_horo_coordinates(cell *c, int i);
#line 1116 "binary-tiling.cpp"
    void create_faces();
    #endif
    }

  // implemented in: blizzard.cpp

#line 21 "blizzard.cpp"
  struct blizzardcell;
#line 37 "blizzard.cpp"
  extern map<cell*, blizzardcell> blizzardcells;
#line 39 "blizzard.cpp"
  void set_blizzard_frame(cell *c, int frameid);
#line 43 "blizzard.cpp"
  extern vector<blizzardcell*> bcells;
#line 47 "blizzard.cpp"
  blizzardcell* getbcell(cell *c);
#line 54 "blizzard.cpp"
  void drawBlizzards();
#line 218 "blizzard.cpp"
  extern vector<cell*> arrowtraps;
#line 220 "blizzard.cpp"
  void drawArrowTraps();

  // implemented in: celldrawer.cpp

#line 5 "celldrawer.cpp"
  int coastvalEdge(cell *c);
  
  struct celldrawer {
  cell *c;
  shiftmatrix V;
  
  color_t fcol;
  color_t wcol;
  color_t asciicol;
  color_t aura_color;
  int fd;
  int chasmg;
  int ct6;
  bool error;
  bool onradar;
  char asciichar;
  shiftmatrix Vboat;
  shiftmatrix Vd;
  int sl;
  color_t asciiborder;
  color_t asciicol1;
  char asciichar1;
  
  void addaura();
  void setcolors();
  void tune_colors();
  int getSnakelevColor(int i, int last);
  void draw_wall();
  void draw_boat();
  void draw_grid();
  void draw_grid_edge(int t, color_t col, int prec);
  void draw_ceiling();
  void draw_halfvine();
  void draw_mirrorwall();
  bool set_randompattern_floor();
  void draw_features();
  void draw_features_and_walls_3d();
  void check_rotations();
  void drawcell_in_radar();
  void bookkeeping();
  void draw_cellstat();
  void draw_wall_full();
  void draw_wallshadow();
  void draw_item_full();
  void draw_monster_full();
  void add_map_effects();
  void draw();
  bool cell_clipped();
  void draw_fallanims();
  bool draw_shmup_monster();
  void draw_gravity_particles();
  
  void set_land_floor(const shiftmatrix& Vf);
  void set_towerfloor(const cellfunction& cf = coastvalEdge);
  void set_zebrafloor();
  void set_maywarp_floor();
  void set_reptile_floor(const shiftmatrix& V, color_t col, bool nodetails = false);
  void set_emeraldfloor();
  void shmup_gravity_floor();
  
  void draw_reptile(color_t col);
  
  void radar_grid();
  
  void do_viewdist();
  
  void draw_bowpath();
  };
  
  inline void drawcell(cell *c, const shiftmatrix& V) {
  celldrawer dd;
  dd.c = c;
  dd.V = V;
  dd.draw();
  }
#line 97 "celldrawer.cpp"
  color_t apply_mine_knowledge(color_t wcol, cell* c);
#line 624 "celldrawer.cpp"
  color_t w_monochromatize(color_t x, int d);
#line 837 "celldrawer.cpp"
  int grid_prec();
#line 844 "celldrawer.cpp"
  bool pick_for_grid(cell *c, int t);
#line 1081 "celldrawer.cpp"
  extern int canvasfloor;
#line 1386 "celldrawer.cpp"
  extern bool numerical_minefield;
#line 1387 "celldrawer.cpp"
  extern int mine_zero_display;
#line 1388 "celldrawer.cpp"
  extern bool mine_hollow;
#line 1389 "celldrawer.cpp"
  extern bool mine_markers;
#line 1391 "celldrawer.cpp"
  void draw_mine_numbers(int mines, const shiftmatrix& V, int ct6);
#line 1411 "celldrawer.cpp"
  void draw_mine_markers(cell *c, const shiftmatrix& V);
#line 1938 "celldrawer.cpp"
  struct downseek_t {
  cell *best;
  hyperpoint total;
  hyperpoint point;
  ld speed;
  ld depth;
  int qty;
  void reset() {
  qty = 0;
  total = Hypc;
  depth = 0;
  best = nullptr;
  }
  };
#line 1954 "celldrawer.cpp"
  extern downseek_t downseek;
#line 2020 "celldrawer.cpp"
  extern int debug_tiles;
#line 2083 "celldrawer.cpp"
  extern bool draw_plain_floors;
#line 2181 "celldrawer.cpp"
  extern int default_flooralpha;
  #if CAP_SHAPES
#line 2853 "celldrawer.cpp"
  extern shiftmatrix ocwtV;
  #endif

  // implemented in: checkmove.cpp

#line 13 "checkmove.cpp"
  #define PUREHARDCORE_LEVEL 10
#line 17 "checkmove.cpp"
  extern bool hardcore;
#line 19 "checkmove.cpp"
  extern int hardcoreAt;
#line 21 "checkmove.cpp"
  extern bool casual;
#line 23 "checkmove.cpp"
  bool pureHardcore();
#line 26 "checkmove.cpp"
  extern bool canmove;
#line 29 "checkmove.cpp"
  extern eMonster who_kills_me;
#line 30 "checkmove.cpp"
  extern cell *who_kills_me_cell;
#line 32 "checkmove.cpp"
  extern int lastkills;
#line 34 "checkmove.cpp"
  extern vector<bool> legalmoves;
#line 37 "checkmove.cpp"
  struct moveissue {
  int type;
  int subtype;
  eMonster monster;
  cell *where;
  };
  
  static constexpr int miVALID = 10000;
  static constexpr int miENTITY = 11000;
  static constexpr int miRESTRICTED = 10100;
  static constexpr int miTHREAT = 10010;
  static constexpr int miWALL = 10001;
  
  static constexpr int siWALL = 1;
  static constexpr int siMONSTER = 2;
  static constexpr int siGRAVITY = 3;
  static constexpr int siROSE = 4;
  static constexpr int siITEM = 5;
  static constexpr int siWIND = 6;
  static constexpr int siCURRENT = 7;
  static constexpr int siFATIGUE = 8;
  static constexpr int siWARP = 9;
  static constexpr int siUNKNOWN = 10;
#line 63 "checkmove.cpp"
  extern vector<moveissue> move_issues;
#line 65 "checkmove.cpp"
  extern moveissue checked_move_issue;
#line 66 "checkmove.cpp"
  extern moveissue stay_issue;
#line 67 "checkmove.cpp"
  extern int yasc_code;
#line 69 "checkmove.cpp"
  void check_if_monster();
#line 75 "checkmove.cpp"
  bool hasSafeOrb(cell *c);
#line 84 "checkmove.cpp"
  struct player_move_info {
  movei mi;
  cell *swordlast[2], *swordtransit[2], *swordnext[2];
  player_move_info(movei mi);
  };
#line 91 "checkmove.cpp"
  extern vector<player_move_info> pmi;
#line 92 "checkmove.cpp"
  extern vector<cell*> pushes;
#line 114 "checkmove.cpp"
  bool krakensafe(cell *c);
#line 120 "checkmove.cpp"
  bool monstersnear(cell *c, eMonster who);
#line 217 "checkmove.cpp"
  bool monstersnear_aux();
#line 258 "checkmove.cpp"
  bool monstersnear_add_pmi(player_move_info pmi0);
#line 269 "checkmove.cpp"
  bool multimove();
  namespace multi { 
#line 288 "checkmove.cpp"
    extern bool checkonly;
#line 289 "checkmove.cpp"
    extern bool aftermove;
    }
#line 292 "checkmove.cpp"
  bool swordConflict(const player_move_info& sm1, const player_move_info& sm2);
#line 301 "checkmove.cpp"
  extern string yasc_message;
#line 303 "checkmove.cpp"
  string blocking_monster_name(const moveissue& mi);
#line 310 "checkmove.cpp"
  void create_yasc_message();
#line 405 "checkmove.cpp"
  void checkmove();

  // implemented in: commandline.cpp

  #ifdef RESOURCEDESTDIR
#line 12 "commandline.cpp"
  extern string rsrcdir;
  #endif
  #ifndef RESOURCEDESTDIR
#line 16 "commandline.cpp"
  extern string rsrcdir;
  #endif
  #if CAP_COMMANDLINE
#line 20 "commandline.cpp"
  extern string scorefile;
  namespace arg {
#line 23 "commandline.cpp"
    eLand readland(const string& ss);
#line 35 "commandline.cpp"
    eItem readItem(const string& ss);
#line 43 "commandline.cpp"
    eMonster readMonster(const string& ss);
    }
#line 53 "commandline.cpp"
  void initializeCLI();
  namespace arg {
#line 73 "commandline.cpp"
    extern int curphase;
#line 75 "commandline.cpp"
    extern vector<string> argument;
#line 76 "commandline.cpp"
    extern int pos;
#line 78 "commandline.cpp"
    void lshift();
#line 79 "commandline.cpp"
    void unshift();
#line 81 "commandline.cpp"
    void shift();
#line 85 "commandline.cpp"
    bool nomore();
#line 87 "commandline.cpp"
    const string& args();
#line 88 "commandline.cpp"
    const char* argcs();
#line 89 "commandline.cpp"
    int argi();
#line 90 "commandline.cpp"
    long long argll();
#line 92 "commandline.cpp"
    int shift_argi();
#line 93 "commandline.cpp"
    const string& shift_args();
#line 95 "commandline.cpp"
    unsigned arghex();
#line 96 "commandline.cpp"
    ld argf();
#line 105 "commandline.cpp"
    bool argis(const string& s);
#line 107 "commandline.cpp"
    color_t argcolor(int bits);
#line 113 "commandline.cpp"
    void shift_arg_formula(ld& x, const reaction_t& r IS(reaction_t()));
#line 121 "commandline.cpp"
    
    // an useful macro
    #define PHASE(x) { if(arg::curphase > x) arg::phaseerror(x); else if(arg::curphase < x) return 2; }
    #define PHASEFROM(x) { if(arg::curphase < x) return 2; }
    
    #define TOGGLE(x, param, act) \
    else if(args()[0] == '-' && args()[1] == x && !args()[2]) { PHASEFROM(2); showstartmenu = false; act; } \
    else if(args()[0] == '-' && args()[1] == x && args()[2] == '1') { PHASEFROM(2); showstartmenu = false; if(!param) act; } \
    else if(args()[0] == '-' && args()[1] == x && args()[2] == '0') { PHASEFROM(2); showstartmenu = false; if(param) act; }
    
#line 133 "commandline.cpp"
    void cheat();
#line 135 "commandline.cpp"
    void run_arguments(const vector<string> vec);
#line 141 "commandline.cpp"
    void init(int argc, char **argv);
#line 143 "commandline.cpp"
    void phaseerror(int x);
#line 150 "commandline.cpp"
    void launch_dialog(const reaction_t& r IS(reaction_t()));
#line 159 "commandline.cpp"
    extern int readCommon();
#line 160 "commandline.cpp"
    extern int readLocal();  
#line 161 "commandline.cpp"
    extern void read(int phase);
    }
#line 438 "commandline.cpp"
  extern purehookset hooks_config;
#line 440 "commandline.cpp"
  extern hookset<int()> hooks_args;
#line 442 "commandline.cpp"
  extern map<string, pair<int, reaction_t>> *added_commands;
#line 444 "commandline.cpp"
  extern bool delayed_start;
  namespace arg {
#line 462 "commandline.cpp"
    int add_at(const string& s, int at, const reaction_t& r);
#line 469 "commandline.cpp"
    int add1(const string& s, const reaction_t& r);
#line 470 "commandline.cpp"
    int add2(const string& s, const reaction_t& r);
#line 471 "commandline.cpp"
    int add3(const string& s, const reaction_t& r);
    }
  #endif
  #if !CAP_COMMANDLINE
  namespace arg {
#line 494 "commandline.cpp"
    int add1(const string& s, const reaction_t& r);
#line 495 "commandline.cpp"
    int add2(const string& s, const reaction_t& r);
#line 496 "commandline.cpp"
    int add3(const string& s, const reaction_t& r);
    }
  #endif

  // implemented in: complex2.cpp

  #if CAP_COMPLEX2
  namespace brownian {
#line 18 "complex2.cpp"
    const int level = 5;
#line 82 "complex2.cpp"
    void dissolve_brownian(cell *c, int x);
#line 94 "complex2.cpp"
    void dissolve(cell *c, int x);
#line 109 "complex2.cpp"
    void init(cell *c);
#line 115 "complex2.cpp"
    void init_further(cell *c);
#line 149 "complex2.cpp"
    void apply_futures(cell *c);
#line 160 "complex2.cpp"
    void build(cell *c, int d);
#line 180 "complex2.cpp"
    extern colortable colors;
#line 182 "complex2.cpp"
    color_t get_color(int y);
#line 190 "complex2.cpp"
    color_t& get_color_edit(int y);
    }
  namespace westwall {
#line 210 "complex2.cpp"
    void switchTreasure(cell *c);
#line 219 "complex2.cpp"
    int coastvalEdge1(cell *c);
#line 261 "complex2.cpp"
    void move();
    }
  namespace variant {
#line 282 "complex2.cpp"
    struct feature {
    color_t color_change;
    int rate_change;
    eMonster wanderer;
    void (*build)(cell*);
    };
    
    extern array<feature, 21> features;
    }
  namespace camelot {
#line 335 "complex2.cpp"
    extern int knighted;
#line 338 "complex2.cpp"
    extern int anthraxBonus;
#line 363 "complex2.cpp"
    string knight_name(cell *c);
#line 368 "complex2.cpp"
    void move_knight(cell *c1, cell *c2);
#line 376 "complex2.cpp"
    void roundTableMessage(cell *c2);
#line 403 "complex2.cpp"
    void knightFlavorMessage(cell *c2);
    }
  namespace mine {
#line 521 "complex2.cpp"
    extern int victory_time;
#line 523 "complex2.cpp"
    void count_status();
#line 535 "complex2.cpp"
    bool in_minesweeper();
#line 539 "complex2.cpp"
    bool uncoverMines(cell *c, int lev, int dist, bool just_checking);
#line 580 "complex2.cpp"
    bool mightBeMine(cell *c);
#line 584 "complex2.cpp"
    extern hookset<bool(cell*)> hooks_mark;
#line 586 "complex2.cpp"
    extern bool mark_always;
#line 588 "complex2.cpp"
    void performMarkCommand(cell *c);
#line 608 "complex2.cpp"
    bool marked_mine(cell *c);
#line 615 "complex2.cpp"
    bool marked_safe(cell *c);
#line 622 "complex2.cpp"
    bool safe();
#line 626 "complex2.cpp"
    void uncover_full(cell *c2);
#line 644 "complex2.cpp"
    void auto_teleport_charges();
    }
  namespace terracotta {
#line 655 "complex2.cpp"
    // predictable or not
    static constexpr bool randterra = false;
#line 659 "complex2.cpp"
    void check(cell *c);
#line 681 "complex2.cpp"
    void check_around(cell *c);
#line 686 "complex2.cpp"
    void check();
    }
  namespace ambush {
#line 701 "complex2.cpp"
    void mark(cell *c, manual_celllister& cl);
#line 708 "complex2.cpp"
    extern int distance;
#line 709 "complex2.cpp"
    extern bool ambushed;
#line 711 "complex2.cpp"
    void check_state();
#line 748 "complex2.cpp"
    extern int fixed_size;
#line 750 "complex2.cpp"
    int size(cell *c, eItem what);
#line 838 "complex2.cpp"
    void ambush(cell *c, int dogs);
#line 910 "complex2.cpp"
    void guard_attack();
    }
  namespace dice {
#line 979 "complex2.cpp"
    extern vector<struct die_structure*> die_list;
    
    struct die_data {
    struct die_structure *which;
    int val; /* the current face value */
    int dir; /* which direction is the first side (which->sides[val][0]) of the current face */
    bool mirrored;
    int happy();
    };
#line 990 "complex2.cpp"
    int shape_faces(die_structure *w);
#line 992 "complex2.cpp"
    string die_name(die_structure *w);
#line 1000 "complex2.cpp"
    die_structure *get_by_id(unsigned i);
#line 1001 "complex2.cpp"
    int get_die_id(die_structure *ds);
#line 1008 "complex2.cpp"
    extern map<cell*, die_data> data;
#line 1010 "complex2.cpp"
    void generate_specific(cell *c, die_structure *ds, int min_hardness, int max_hardness);
#line 1029 "complex2.cpp"
    int die_possible(cell *c);
#line 1038 "complex2.cpp"
    bool can_roll(int sides, int cur, movei mi);
#line 1044 "complex2.cpp"
    bool can_roll(movei mi);
#line 1050 "complex2.cpp"
    bool generate_random(cell *c);
#line 1060 "complex2.cpp"
    void generate_full(cell *c, int hard);
#line 1128 "complex2.cpp"
    die_data roll_effect(movei mi, die_data dd);
#line 1169 "complex2.cpp"
    bool on(cell *c);
#line 1173 "complex2.cpp"
    string describe(cell *c);
#line 1179 "complex2.cpp"
    void roll(movei mi);
#line 1189 "complex2.cpp"
    void draw_die(cell *c, const shiftmatrix& V, ld scale, color_t color);
#line 1451 "complex2.cpp"
    bool swap_forbidden(cell *ca, cell *cb);
#line 1456 "complex2.cpp"
    void chaos_swap(cellwalker wa, cellwalker wb);
    }
  #endif
  #if !CAP_COMPLEX2
  namespace dice {
#line 1477 "complex2.cpp"
    bool on(cell *c);
#line 1478 "complex2.cpp"
    bool swap_forbidden(cell *a, cell *b);
#line 1479 "complex2.cpp"
    void chaos_swap(cellwalker wa, cellwalker wb);
    }
  namespace mine {
#line 1483 "complex2.cpp"
    bool in_minesweeper();
    }
  #endif

  // implemented in: config.cpp

#line 12 "config.cpp"
  enum eCentering { face, edge, vertex };
#line 15 "config.cpp"
  extern eCentering centering;
#line 17 "config.cpp"
  extern function<bool()> auto_restrict;
#line 19 "config.cpp"
  extern void add_to_changed(struct parameter *f);
#line 21 "config.cpp"
  bool return_false();
#line 23 "config.cpp"
  extern bool use_bool_dialog;
#line 25 "config.cpp"
  extern string param_esc(string s);
#line 27 "config.cpp"
  void non_editable_pre();
#line 28 "config.cpp"
  void non_editable_post();
#line 31 "config.cpp"
  
  struct param_exception : hr_exception {
  struct parameter *which;
  param_exception() : hr_exception("param_exception"), which(nullptr) {}
  param_exception(const std::string &s, parameter *p) : hr_exception(s), which(p) {}
  };
  
  struct parameter_names {
  string name;
  string legacy_config_name;
  parameter_names(const string& s) { name = param_esc(s); legacy_config_name = s; }
  parameter_names(const char* s) { name = param_esc(s); legacy_config_name = s; }
  parameter_names(const string& p, const string& s) { name = p; legacy_config_name = s; }
  };
  
  struct parameter : public std::enable_shared_from_this<parameter> {
  function<bool()> restrict;
  string name;
  string legacy_config_name;
  string menu_item_name;
  bool menu_item_name_modified;
  string help_text;
  reaction_t pre_reaction, reaction;
  char default_key;
  bool is_editable;
  bool needs_confirm;
  virtual bool available() { if(restrict) return restrict(); return true; }
  virtual bool affects(void *v) { return false; }
  void show_edit_option() { show_edit_option(default_key); }
  virtual void show_edit_option(int key) {
  println(hlog, "warning: no edit option defined for ", name);
  }
  virtual string search_key() { 
  return name + "|" + legacy_config_name + "|" + menu_item_name + "|" + help_text;
  }
  explicit parameter() { restrict = auto_restrict; is_editable = false; needs_confirm = false; }
  void be_non_editable() {
  pre_reaction = non_editable_pre;
  reaction = non_editable_post;
  }
  virtual void check_change() { }
  reaction_t sets;
  parameter *set_sets(const reaction_t& s) { sets = s; return this; }
  parameter *set_extra(const reaction_t& r);
  parameter *set_reaction(const reaction_t& r);
  virtual ~parameter() = default;
  virtual bool load_from_animation(const string& s) {
  load(s); return false;
  }
  virtual void load_as_animation(const string& s) {
  load(s);
  }
  virtual bool anim_unchanged() { return true; }
  virtual void anim_restore() { }
  virtual cld get_cld() { throw param_exception("parameter has no complex value", this); }
  virtual void set_cld_raw(cld x) { throw param_exception("parameter has no complex value", this); }
  virtual void set_cld(cld value) {
  auto bak = get_cld();
  set_cld_raw(value);
  if(value != bak && reaction) reaction();
  }
  
  virtual string save() = 0;
  virtual void load(const string& s) {
  throw param_exception("parameter cannot be loaded", this);
  }
  virtual bool dosave() = 0;
  virtual void reset() = 0;
  virtual void swap_with(parameter*) = 0;
  
  virtual shared_ptr<parameter> clone(struct local_parameter_set& lps, void *value) { throw param_exception("not cloneable", this); }
  
  void setup(const parameter_names& s);
  };
  
  struct local_parameter_set {
  string label;
  local_parameter_set* extends;
  vector<pair<shared_ptr<parameter>, shared_ptr<parameter>>> swaps;
  void pswitch();
  local_parameter_set(string l, local_parameter_set *ext = nullptr) : label(l), extends(ext) {}
  parameter_names mod(parameter *t);
  };
#line 125 "config.cpp"
  using paramlist = map<string, std::shared_ptr<parameter>>;
#line 128 "config.cpp"
  extern paramlist params;
#line 130 "config.cpp"
  extern void show_edit_option_enum(char* value, const string& name, const vector<pair<string, string>>& options, char key, parameter *s);
#line 133 "config.cpp"
  struct list_parameter : parameter {
  virtual int get_value() = 0;
  virtual void set_value(int i) = 0;
  vector<pair<string, string> > options;
  list_parameter* editable(const vector<pair<string, string> >& o, string menu_item_name, char key) {
  is_editable = true;
  options = o;
  this->menu_item_name = menu_item_name;
  menu_item_name_modified = true;
  default_key = key;
  return this;
  }
  void show_edit_option(int key) override;
  };
  
  namespace anims {
  extern void animate_parameter(parameter*, string);
  }
  
  template<class T> struct enum_parameter : list_parameter {
  T *value, last_value, dft, anim_value;
  int get_value() override { return (int) *value; }
  hr::function<void(T)> set_value_to;
  void set_value(int i) override { set_value_to((T)i); }
  bool affects(void* v) override { return v == value; }
  virtual void load_from_raw(const string& s) {
  int N = isize(options);
  for(int i=0; i<N; i++) if(appears(options[i].first, s)) {
  set_value_to((T)i);
  return;
  }
  *value = (T) parseint(s);
  }
  void check_change() override {
  if(*value != last_value) {
  last_value = *value;
  add_to_changed(this);
  }
  }
  
  void load(const string& s) override {
  auto bak = *value;
  load_from_raw(s);
  if(*value != bak && pre_reaction) { swap(*value, bak); pre_reaction(); swap(*value, bak); }
  if(*value != bak && reaction) reaction();
  }
  bool load_from_animation(const string& s) override {
  if(anim_value != *value) return false;
  load(s);
  anim_value = *value;
  return true;
  }
  void load_as_animation(const string& s) override {
  load(s);
  anim_value = *value;
  anims::animate_parameter(this, s);
  }
  
  enum_parameter<T>* editable(const vector<pair<string, string> >& o, string menu_item_name, char key) {
  list_parameter::editable(o, menu_item_name, key);
  return this;
  }
  enum_parameter<T>* set_need_confirm() {
  needs_confirm = true;
  return this;
  }
  virtual cld get_cld() override { return get_value(); }
  
  bool dosave() override { return *value != dft; }
  void reset() override { *value = dft; }
  string save() override { return its(int(*value)); }
  shared_ptr<parameter> clone(struct local_parameter_set& lps, void *value) override;
  void swap_with(parameter *s) override { swap(*value, *(((enum_parameter<T>*)s)->value)); }
  };
  
  template<class T> struct val_parameter;
  
  template<class T> struct val_parameter : public parameter {
  T *value, last_value, anim_value, dft;
  
  bool dosave() override { return *value != dft; }
  void reset() override { *value = dft; }
  bool affects(void* v) override { return v == value; }
  
  void check_change() override {
  if(*value != last_value) {
  last_value = *value;
  add_to_changed(this);
  }
  }
  
  bool anim_unchanged() override { return *value == anim_value; }
  void anim_restore() override { *value = anim_value; if(reaction) reaction(); }
  
  virtual void load_from_raw(const string& s) { throw param_exception("load_from_raw not defined", this); }
  
  void load(const string& s) override {
  auto bak = *value;
  load_from_raw(s);
  if(*value != bak && pre_reaction) { swap(*value, bak); pre_reaction(); swap(*value, bak); }
  if(*value != bak && reaction) reaction();
  }
  bool load_from_animation(const string& s) override {
  if(anim_value != *value) return false;
  load(s);
  anim_value = *value;
  return true;
  }
  void load_as_animation(const string& s) override {
  load(s);
  anim_value = *value;
  anims::animate_parameter(this, s);
  }
  void swap_with(parameter *s) override { swap(*value, *(((val_parameter<T>*)s)->value)); }  
  };
  
  struct float_parameter : public val_parameter<ld> {
  ld min_value, max_value, step;
  string unit;
  float_parameter *editable(ld min_value, ld max_value, ld step, string menu_item_name, string help_text, char key) {
  is_editable = true;
  this->min_value = min_value;
  this->max_value = max_value;
  this->menu_item_name = menu_item_name;
  menu_item_name_modified = true;
  this->help_text = help_text;
  this->step = step;
  default_key = key;
  return this;
  }
  function<void(float_parameter*)> modify_me;
  float_parameter *modif(const function<void(float_parameter*)>& r) { modify_me = r; return this; }
  void show_edit_option(int key) override;
  void load_from_raw(const string& s) override { *value = parseld(s); }
  cld get_cld() override { return *value; }
  void set_cld_raw(cld x) override { *value = real(x); }
  string save() override { return fts(*value, 10); }
  shared_ptr<parameter> clone(struct local_parameter_set& lps, void *value) override;
  };
  
  struct float_parameter_dft : public float_parameter {
  void show_edit_option(int key) override;
  function<ld()> get_hint;
  float_parameter_dft* set_hint(const function<ld()>& f) { get_hint = f; return this; }
  };
  
  struct int_parameter : public val_parameter<int> {
  int min_value, max_value;
  ld step;
  function<void(int_parameter*)> modify_me;
  int_parameter *modif(const function<void(int_parameter*)>& r) { modify_me = r; return this; }
  void show_edit_option(int key) override;
  int_parameter *editable(int min_value, int max_value, ld step, string menu_item_name, string help_text, char key) {
  this->is_editable = true;
  this->min_value = min_value;
  this->max_value = max_value;
  this->menu_item_name = menu_item_name;
  menu_item_name_modified = true;
  this->help_text = help_text;
  this->step = step;
  default_key = key;
  return this;
  }
  
  cld get_cld() override { return *value; }
  
  void load_from_raw(const string& s) override { *value = parseint(s); }
  void set_cld_raw(cld x) override { *value = (int)(real(x) + .5); }
  
  void check_change() override {
  if(*value != last_value) {
  last_value = *value;
  add_to_changed(this);
  }
  }
  
  string save() override { return its(*value); }
  shared_ptr<parameter> clone(struct local_parameter_set& lps, void *value) override;
  };
  
  struct string_parameter: public val_parameter<string> {
  reaction_t editor;
  string save() override { return *value; }
  void load_from_raw(const string& s) override { *value = s; }
  void show_edit_option(int key) override;
  string_parameter* set_standard_editor(bool direct);
  string_parameter* set_file_editor(string ext);
  string_parameter* editable(string cap, string help, char key ) {
  is_editable = true;
  menu_item_name = cap;
  default_key = key;
  menu_item_name_modified = true;
  help_text = help;
  return this;
  }
  };
  
  struct char_parameter : public val_parameter<char> {
  string save() override { return "\\" + its(*value); }
  void show_edit_option(int key) override;
  void load_from_raw(const string& s) override {
  if(s[0] == '\\' && s.size() > 1) *value = parseint(s.substr(1));
  else sscanf(s.c_str(), "%c", value);
  }
  };
  
  struct bool_parameter : public val_parameter<bool> {
  string save() override { return (*value) ? "yes" : "no"; }
  reaction_t switcher;
  bool_parameter* editable(string cap, char key ) {
  is_editable = true;
  menu_item_name = cap; default_key = key;
  menu_item_name_modified = true;
  return this;
  }
  bool_parameter* help(string help) {
  help_text = help;
  return this;
  }
  void show_edit_option(int key) override;
  
  void load_from_raw(const string& s) override {
  if(s == "yes") *value = true;
  else if(s == "no") *value = false;
  else *value = parseint(s);
  }
  
  cld get_cld() override { return *value; }
  shared_ptr<parameter> clone(struct local_parameter_set& lps, void *value) override;
  };
  
  struct color_parameter : public val_parameter<color_t> {
  bool has_alpha;
  void show_edit_option(int key) override;
  color_parameter *editable(string menu_item_name, string help_text, char key) {
  this->is_editable = true;
  this->menu_item_name = menu_item_name;
  menu_item_name_modified = true;
  this->help_text = help_text;
  default_key = key;
  return this;
  }
  
  cld get_cld() override { return has_alpha ? *value : (*value * 256 + 0xFF); }
  void load_from_raw(const string& s) override { 
  try {
  *value = parsecolor(s, has_alpha);
  } catch(hr_parse_exception& e) {
  sscanf(s.c_str(), "%x", value);
  }
  }
  string save() override { return has_alpha ? itsh8(*value) : itsh6(*value); }
  shared_ptr<parameter> clone(struct local_parameter_set& lps, void *value) override;
  };
  
  /** transmatrix with equality, so we can construct val_parameter<matrix_eq> */
  struct matrix_eq : transmatrix {
  bool operator == (const transmatrix& t) const {
  for(int i=0; i<MAXMDIM; i++) for(int j=0; j<MAXMDIM; j++)  if(selfhr[i][j] != t[i][j]) return false;
  return true;
  }
  bool operator != (const transmatrix& t) const {
  return ! (selfhr == t);
  }
  };
  
  struct matrix_parameter : public val_parameter<matrix_eq> {
  
  void reset() override { *value = dft; }
  bool dosave() override { return !eqmatrix(*value, dft); }
  
  int dim;
  void show_edit_option(int key) override;
  matrix_parameter *editable(string menu_item_name, string help_text, char key) {
  this->is_editable = true;
  this->menu_item_name = menu_item_name;
  menu_item_name_modified = true;
  this->help_text = help_text;
  default_key = key;
  return this;
  }
  
  string save() override {
  shstream ss;
  print(ss, "matrix ");
  for(int a=0; a<4; a++) for(int b=0; b<4; b++) print(ss, (*value)[a][b], " ");
  return ss.s;
  }
  void load_from_raw(const string& s) override {
  if(s.substr(0, 7) == "matrix ") {
  shstream ss;
  ss.s = s.substr(7);
  for(int a=0; a<4; a++) for(int b=0; b<4; b++) scan(ss, (*value)[a][b]);
  }
  else {
  (transmatrix&)*value = parsematrix(s);
  }
  }
  };
  
  struct custom_parameter : public parameter {
  cld last_value, anim_value;
  function<void(char)> custom_viewer;
  function<cld()> custom_value;
  function<bool(void*)> custom_affect;
  function<void(const string&)> custom_load;
  function<string()> custom_save;
  function<bool()> custom_do_save;
  reaction_t custom_reset;
  function<shared_ptr<parameter>(struct local_parameter_set& lps, void *value)> custom_clone;
  
  virtual shared_ptr<parameter> clone(struct local_parameter_set& lps, void *value) override {
  if(custom_clone) return custom_clone(lps, value);
  return parameter::clone(lps, value);
  }
  
  void show_edit_option(int key) override { custom_viewer(key); }
  bool affects(void *v) override { return custom_affect(v); }
  void check_change() override {
  if(custom_value() != last_value) {
  last_value = custom_value();
  add_to_changed(this);
  }
  }
  virtual void load_from_raw(const string& s) {
  if(!custom_load) {
  throw param_exception("parameter cannot be loaded", this);
  }
  custom_load(s);
  }
  void load(const string& s) override {
  auto bak = get_cld();
  load_from_raw(s);
  if(bak != get_cld() && reaction) reaction();
  }
  bool load_from_animation(const string& s) override {
  if(anim_value != get_cld()) return false;
  load(s);
  anim_value = get_cld();
  return true;
  }
  void load_as_animation(const string& s) override {
  load(s);
  anim_value = get_cld();
  anims::animate_parameter(this, s);
  }
  
  virtual cld get_cld() override { return custom_value(); }
  virtual string save() override { if(custom_save) return custom_save(); else return "not saveable"; }
  virtual bool dosave() override { if(custom_do_save) return custom_do_save(); else return false; }
  virtual void reset() override { if(custom_reset) custom_reset(); }
  virtual void swap_with(parameter*) override {}
  };
#line 624 "config.cpp"
  shared_ptr<float_parameter> param_f(ld& val, const parameter_names& n, ld dft);
#line 643 "config.cpp"
  shared_ptr<float_parameter_dft> param_fd(ld& val, const parameter_names& n, ld dft IS(use_the_default_value) );
#line 656 "config.cpp"
  string param_esc(string s);
#line 666 "config.cpp"
  shared_ptr<int_parameter> param_i(int& val, const parameter_names& n, int dft);
#line 684 "config.cpp"
  shared_ptr<int_parameter> param_i(int& val, const parameter_names& n);
#line 686 "config.cpp"
  shared_ptr<bool_parameter> param_b(bool& val, const parameter_names& n, bool dft);
#line 697 "config.cpp"
  shared_ptr<color_parameter> param_color(color_t& val, const parameter_names& n, bool has_alpha, color_t dft);
#line 708 "config.cpp"
  shared_ptr<matrix_parameter> param_matrix(transmatrix& val0, const parameter_names& n, int dim);
#line 719 "config.cpp"
  shared_ptr<char_parameter> param_char(char& val, const parameter_names& n, char dft);
#line 729 "config.cpp"
  shared_ptr<string_parameter> param_str(string& val, const parameter_names& n, const string dft);
#line 739 "config.cpp"
  shared_ptr<string_parameter> param_str(string& val, const parameter_names& n);
#line 741 "config.cpp"
  shared_ptr<color_parameter> param_color(color_t& val, const parameter_names& n, bool has_alpha);
#line 743 "config.cpp"
  shared_ptr<bool_parameter> param_b(bool& val, const parameter_names& n);
#line 746 "config.cpp"
  template<class T> shared_ptr<enum_parameter<T>> param_enum(T& val, const parameter_names& n, T dft) {
  shared_ptr<enum_parameter<T>> u ( new enum_parameter<T> );
  u->setup(n);
  u->value = &val;
  u->dft = dft;
  val = dft;
  u->last_value = dft;
  auto f = &*u;
  u->set_value_to = [f] (T val) { *f->value = val; };
  return u;
  }
  
  template<class T> shared_ptr<enum_parameter<T>> param_enum(T& val, const parameter_names& n) { return param_enum(val, n, val); }
  
  template<class T> shared_ptr<parameter> enum_parameter<T>::clone(struct local_parameter_set& lps, void *value) { return param_enum(*(T*) value, lps.mod(this), *(T*) value); }
#line 763 "config.cpp"
  shared_ptr<float_parameter> param_f(ld& val, const parameter_names& n);
#line 792 "config.cpp"
  template<class T>
  shared_ptr<custom_parameter> param_custom_int(T& val, const parameter_names& n, function<void(char)> menuitem, char key) {
  shared_ptr<custom_parameter> u ( new custom_parameter );
  u->setup(n);
  int dft = (int) val;
  u->last_value = dft;
  u->custom_viewer = menuitem;
  u->custom_value = [&val] () { return (int) val; };
  u->custom_affect = [&val] (void *v) { return &val == v; };
  u->custom_load = [&val] (const string& s) { val = (T) parseint(s); };
  u->custom_save = [&val] { return its(int(val)); };
  u->custom_do_save = [dft, &val] { return int(val) != dft; };
  u->custom_clone = [u] (struct local_parameter_set& lps, void *value) { auto val = (int*) value; return param_i(*val, lps.mod(&*u), *val); };
  u->custom_reset = [dft, &val] { val = (T) dft; };
  u->default_key = key;
  u->is_editable = true;
  return u;
  }
#line 812 "config.cpp"
  shared_ptr<custom_parameter> param_custom_ld(ld& val, const parameter_names& n, function<void(char)> menuitem, char key);
#line 831 "config.cpp"
  shared_ptr<custom_parameter> param_colortable(colortable& val, const parameter_names& n);
#line 857 "config.cpp"
  extern ld bounded_mine_percentage;
#line 858 "config.cpp"
  extern int bounded_mine_quantity, bounded_mine_max;
#line 860 "config.cpp"
  extern const char *conffile;
#line 863 "config.cpp"
  extern array<ld, gGUARD+64> sightranges;
#line 865 "config.cpp"
  extern bool logfog;
#line 867 "config.cpp"
  extern videopar vid;
#line 872 "config.cpp"
  void android_settings_changed();
#line 880 "config.cpp"
  charstyle& getcs(int id IS(multi::cpid));
#line 899 "config.cpp"
  void hread(hstream& hs, charstyle& cs);
#line 931 "config.cpp"
  void hwrite(hstream& hs, const charstyle& cs);
#line 938 "config.cpp"
  string csnameid(int id);
#line 949 "config.cpp"
  string csname(charstyle& cs);
#line 953 "config.cpp"
  int playergender();
#line 956 "config.cpp"
  int princessgender();
#line 962 "config.cpp"
  extern int default_language;
#line 964 "config.cpp"
  int lang();
#line 970 "config.cpp"
  extern bool autojoy;
#line 972 "config.cpp"
  void paramset(charstyle& cs, string s);
#line 995 "config.cpp"
  void initcs(charstyle &cs);
#line 1009 "config.cpp"
  extern purehookset hooks_configfile;
#line 1011 "config.cpp"
  extern ld mapfontscale;
#line 1013 "config.cpp"
  void initConfig();
#line 1705 "config.cpp"
  bool inSpecialMode();
#line 1716 "config.cpp"
  bool have_current_settings();
#line 1737 "config.cpp"
  bool have_current_graph_settings();
#line 1748 "config.cpp"
  void reset_graph_settings();
#line 1759 "config.cpp"
  void resetModes(char leave IS('c'));
  #if CAP_CONFIG  
#line 1797 "config.cpp"
  void resetConfig();
  #endif
  #if CAP_CONFIG
#line 1809 "config.cpp"
  void saveConfig();
#line 1849 "config.cpp"
  void parseline(const string& str);
#line 1864 "config.cpp"
  void loadNewConfig(FILE *f);
#line 1880 "config.cpp"
  void loadConfig();
  #endif
#line 1909 "config.cpp"
  void add_cells_drawn(char c IS('C'));
#line 1940 "config.cpp"
  void menuitem_sightrange_bonus(char c);
#line 1953 "config.cpp"
  void edit_sightrange_3d(char key, bool fog);
#line 1970 "config.cpp"
  void edit_sightrange();
#line 2042 "config.cpp"
  void menuitem_sightrange_style(char c IS('c'));
#line 2069 "config.cpp"
  void menuitem_sightrange(char c IS('c'));
#line 2084 "config.cpp"
  void sets_sfx_volume();
#line 2097 "config.cpp"
  void sets_music_volume();
#line 2118 "config.cpp"
  void showSpecialEffects();
#line 2134 "config.cpp"
  void show_vector_settings();
#line 2183 "config.cpp"
  void showGraphConfig();
#line 2342 "config.cpp"
  void edit_whatever(char type, int index);
#line 2363 "config.cpp"
  void configureOther();
#line 2404 "config.cpp"
  void configureInterface();
  #if CAP_SDLJOY
#line 2474 "config.cpp"
  void showJoyConfig();
  #endif
#line 2528 "config.cpp"
  void projectionDialog();
#line 2560 "config.cpp"
  void menuitem_projection_distance(char key);
#line 2565 "config.cpp"
  void explain_detail();
#line 2574 "config.cpp"
  ld max_fov_angle();
#line 2580 "config.cpp"
  void edit_fov_screen();
#line 2603 "config.cpp"
  void add_edit_fov(char key IS('f'));
#line 2618 "config.cpp"
  void showStereo();
#line 2692 "config.cpp"
  void add_edit_wall_quality(char c);
#line 2718 "config.cpp"
  void edit_levellines(char c);
#line 2740 "config.cpp"
  geom3::eSpatialEmbedding shown_spatial_embedding();
#line 2745 "config.cpp"
  bool in_tpp();
#line 2747 "config.cpp"
  void display_embedded_errors();
#line 2813 "config.cpp"
  void show_spatial_embedding();
#line 2876 "config.cpp"
  void show3D_height_details();
#line 2931 "config.cpp"
  void show3D();
#line 3096 "config.cpp"
  namespace ccolor { struct data; }
#line 3099 "config.cpp"
  shared_ptr<custom_parameter> param_ccolor(ccolor::data*& val, const parameter_names& n);
#line 3112 "config.cpp"
  extern int config3;
#line 3416 "config.cpp"
  void switchcolor(unsigned int& c, unsigned int* cs);
#line 3424 "config.cpp"
  void showCustomizeChar();
#line 3503 "config.cpp"
  void refresh_canvas();
#line 3505 "config.cpp"
  color_t addalpha(color_t c);
#line 3507 "config.cpp"
  void edit_color_table(colortable& ct, const reaction_t& r IS(reaction_t()), bool has_bit IS(false));
#line 3545 "config.cpp"
  void show_color_dialog();
  #if CAP_CONFIG
#line 3666 "config.cpp"
  void resetConfigMenu();
  #endif
  #if CAP_TRANS
#line 3698 "config.cpp"
  void selectLanguageScreen();
  #endif
#line 3757 "config.cpp"
  void configureMouse();
#line 3802 "config.cpp"
  void add_to_changed(parameter *f);
#line 3813 "config.cpp"
  parameter *find_edit(void *val);
#line 3822 "config.cpp"
  void add_edit_ptr(void *val);
#line 3832 "config.cpp"
  void add_edit_ptr(void *val, char key);
#line 3843 "config.cpp"
  template<class T> void add_edit(T& val) {
  add_edit_ptr(&val);
  }
  
  template<class T> void add_edit(T& val, char key) {
  add_edit_ptr(&val, key);
  }
#line 3852 "config.cpp"
  void find_parameter();
#line 3886 "config.cpp"
  void edit_all_parameters();
#line 3949 "config.cpp"
  void showSettings();
  #if CAP_COMMANDLINE
#line 4004 "config.cpp"
  int read_color_args();
#line 4053 "config.cpp"
  int read_config_args();
#line 4280 "config.cpp"
  void set_char_by_name(charstyle& cs, const string& s);
#line 4332 "config.cpp"
  int read_param_args();
#line 4349 "config.cpp"
  int read_gamemode_args();
  #endif
#line 4384 "config.cpp"
  void lps_enable(local_parameter_set *lps);
#line 4392 "config.cpp"
  //template<class T> vector<std::unique_ptr<T>> lps_of_type;
  extern vector<void*> lps_of_type;
  
  template<class T, class U> void lps_add(local_parameter_set& lps, T&val, U nvalue) {
  int found = 0;
  for(auto& fs: params) {
  if(fs.second->affects(&val)) {
  found++;
  T* nv = new T(nvalue);
  lps_of_type.emplace_back(nv);
  println(hlog, lps.label, " found saver: ", fs.second->name);
  auto fs2 = fs.second->clone(lps, nv);
  lps.swaps.emplace_back(fs.second, fs2);
  return;
  }
  }
  if(found != 1) println(hlog, lps.label, " saver not found");
  }

  // implemented in: control.cpp

#line 11 "control.cpp"
  extern int frames;
#line 12 "control.cpp"
  extern bool outoffocus;
#line 14 "control.cpp"
  extern int mousex, mousey;
#line 15 "control.cpp"
  extern shiftpoint mouseh, mouseoh;
#line 17 "control.cpp"
  extern bool pandora_leftclick, pandora_rightclick;
#line 19 "control.cpp"
  extern bool lshiftclick, rshiftclick, lctrlclick, rctrlclick, anyshiftclick, anyctrlclick, wheelclick;
#line 21 "control.cpp"
  extern bool targetclick, hiliteclick, forcetarget, numlock_on;
#line 22 "control.cpp"
  extern bool gtouched;
#line 24 "control.cpp"
  extern bool holdmouse;
#line 26 "control.cpp"
  extern int getcstat, lgetcstat;
#line 27 "control.cpp"
  extern ld getcshift;
#line 28 "control.cpp"
  extern bool inslider;
#line 29 "control.cpp"
  extern bool invslider;
#line 30 "control.cpp"
  extern int slider_x;
#line 32 "control.cpp"
  extern function <void(int sym, int uni)> keyhandler;
#line 33 "control.cpp"
  extern function <bool(SDL_Event &ev)> joyhandler;
#line 36 "control.cpp"
  // what part of the compass does 'skip turn'
  static constexpr auto SKIPFAC = .4;
#line 41 "control.cpp"
  extern bool mousing;
#line 45 "control.cpp"
  extern int which_pointer;
#line 48 "control.cpp"
  extern bool mousepressed;
#line 49 "control.cpp"
  extern bool mousemoved;
#line 50 "control.cpp"
  extern bool actonrelease;
#line 52 "control.cpp"
  extern bool mousepan, oldmousepan;
  #if CAP_MOUSEGRAB
#line 54 "control.cpp"
  extern ld mouseaim_x, mouseaim_y;
  #endif
#line 56 "control.cpp"
  extern ld mouseaim_sensitivity;
#line 58 "control.cpp"
  extern int timetowait;
  #if CAP_SDLJOY
#line 61 "control.cpp"
  extern int joyx, joyy, panjoyx, panjoyy; 
#line 62 "control.cpp"
  extern movedir joydir;
  #endif
#line 65 "control.cpp"
  extern movedir mousedest;
#line 66 "control.cpp"
  extern ld shiftmul;
#line 68 "control.cpp"
  extern cell *mouseover, *mouseover2, *lmouseover, *lmouseover_distant;
#line 69 "control.cpp"
  extern ld modist, modist2;
#line 70 "control.cpp"
  extern shiftmatrix mouseoverV;
#line 72 "control.cpp"
  extern int lastt;
#line 74 "control.cpp"
  bool mouseout();
#line 79 "control.cpp"
  bool mouseout2();
#line 84 "control.cpp"
  movedir vectodir(hyperpoint P);
#line 122 "control.cpp"
  void remission();
#line 126 "control.cpp"
  hyperpoint move_destination_vec(int d);
#line 132 "control.cpp"
  void movepckeydir(int d);
#line 143 "control.cpp"
  void movevrdir(hyperpoint vec);
#line 148 "control.cpp"
  void calcMousedest();
#line 181 "control.cpp"
  void mousemovement();
  #if CAP_SDLJOY
#line 212 "control.cpp"
  extern SDL_Joystick* sticks[8];
#line 213 "control.cpp"
  extern int numsticks;
#line 215 "control.cpp"
  extern bool joysticks_initialized;
#line 218 "control.cpp"
  enum eJoystickInit { jiNoJoystick, jiFast, jiWait };
#line 220 "control.cpp"
  extern eJoystickInit joy_init;
  #if CAP_THREAD
#line 223 "control.cpp"
  extern std::thread *joythread;
  #endif
#line 227 "control.cpp"
  void initJoysticks_async();
#line 237 "control.cpp"
  void countJoysticks();
#line 252 "control.cpp"
  void initJoysticks();
#line 268 "control.cpp"
  void closeJoysticks();
#line 277 "control.cpp"
  extern bool joy_ignore_next;
#line 279 "control.cpp"
  void checkjoy();
#line 316 "control.cpp"
  void checkpanjoy(double t);
  #endif
#line 333 "control.cpp"
  extern bool quitmainloop;
#line 335 "control.cpp"
  bool doexiton(int sym, int uni);
#line 352 "control.cpp"
  extern bool didsomething;
#line 356 "control.cpp"
  extern bool smooth_scrolling;
#line 365 "control.cpp"
  void zoom_or_fov(ld t);
#line 377 "control.cpp"
  extern ld camera_speed;
#line 378 "control.cpp"
  extern ld camera_rot_speed;
#line 380 "control.cpp"
  void full_forward_camera(ld t);
#line 390 "control.cpp"
  void full_cstrafe_camera(int dir, ld t);
#line 398 "control.cpp"
  void full_strafe_camera(ld t);
#line 400 "control.cpp"
  void full_ystrafe_camera(ld t);
#line 406 "control.cpp"
  extern ld third_person_rotation;
#line 408 "control.cpp"
  void full_rotate_camera(int dir, ld val);
#line 463 "control.cpp"
  void full_rotate_view(ld h, ld v);
#line 474 "control.cpp"
  void handlePanning(int sym, int uni);
#line 533 "control.cpp"
  extern purehookset hooks_fixticks;
#line 535 "control.cpp"
  extern array<int, 8> keys_vi;
#line 536 "control.cpp"
  extern array<int, 8> keys_wasd;
#line 537 "control.cpp"
  extern array<int, 8> keys_numpad;
#line 539 "control.cpp"
  void handleKeyNormal(int sym, int uni);
#line 677 "control.cpp"
  extern bool need_mouseh;
#line 679 "control.cpp"
  void fix_mouseh();
#line 704 "control.cpp"
  void handlekey(int sym, int uni);
#line 711 "control.cpp"
  extern void resize_screen_to(int x, int y);
  #if !CAP_SDL
#line 714 "control.cpp"
  void mainloopiter();
  #endif
#line 718 "control.cpp"
  extern bool game_keys_scroll;
  #if CAP_SDL
#line 726 "control.cpp"
  void resize_screen_to(int x, int y);
#line 744 "control.cpp"
  extern int sc_ticks, sc_ticks2;
#line 746 "control.cpp"
  bool mouseaiming(bool shmupon);
#line 751 "control.cpp"
  extern purehookset hooks_control;
#line 753 "control.cpp"
  void mainloopiter();
#line 1051 "control.cpp"
  extern bool need_refresh;
#line 1053 "control.cpp"
  void handle_event(SDL_Event& ev);
  #endif
#line 1345 "control.cpp"
  void mainloop();
  #if ISMOBILE
#line 1357 "control.cpp"
  void displayabutton(int px, int py, string s, int col);
  #endif
#line 1382 "control.cpp"
  bool interpret_as_direction(int sym, int uni);
#line 1390 "control.cpp"
  int get_direction_key(int sym, int uni);
#line 1407 "control.cpp"
  bool gmodekeys(int sym, int uni);
#line 1446 "control.cpp"
  bool haveMobileCompass();
#line 1456 "control.cpp"
  bool handleCompass();
  #if CAP_ORIENTATION
#line 1481 "control.cpp"
  extern transmatrix getOrientation();
  #endif
  namespace ors {
#line 1487 "control.cpp"
    extern int mode;
#line 1494 "control.cpp"
    extern string choices[3];
    #if CAP_ORIENTATION
#line 1497 "control.cpp"
    transmatrix getOrientation();
    #endif
#line 1502 "control.cpp"
    void reset();
#line 1515 "control.cpp"
    void show();
#line 1598 "control.cpp"
    void unrotate(transmatrix& T);
#line 1602 "control.cpp"
    void rerotate(transmatrix& T);
#line 1608 "control.cpp"
    void check_orientation();
    }

  // implemented in: crossbow.cpp

  namespace bow {
#line 29 "crossbow.cpp"
    enum eWeapon { wBlade, wCrossbow };
    enum eCrossbowStyle { cbBull, cbGeodesic, cbGeometric };
    const string bowName[] = { "bull", "geod", "geom" };
#line 34 "crossbow.cpp"
    extern eWeapon weapon;
#line 35 "crossbow.cpp"
    extern eCrossbowStyle style;
#line 36 "crossbow.cpp"
    extern bool bump_to_shoot;
#line 38 "crossbow.cpp"
    bool crossbow_mode();
#line 41 "crossbow.cpp"
    struct bowpoint {
    cellwalker prev, next;
    flagtype flags;
    bowpoint() {}
    };
    
    struct bowscore {
    int total;
    cellwalker last;
    int turns;
    };
#line 55 "crossbow.cpp"
    static constexpr flagtype bpFIRST = 1;
    static constexpr flagtype bpLAST = 2;
    static constexpr flagtype bpCOPIED = 4;
#line 60 "crossbow.cpp"
    extern vector<bowpoint> bowpath;
#line 62 "crossbow.cpp"
    extern map<cell*, vector<bowpoint>> bowpath_map;
#line 64 "crossbow.cpp"
    extern map<int, cell*> target_at;
#line 66 "crossbow.cpp"
    int loading_time();
#line 70 "crossbow.cpp"
    bool blocks(cell *c);
#line 77 "crossbow.cpp"
    int qadd(cellwalker a, cellwalker b);
#line 85 "crossbow.cpp"
    int bolt_score(cellwalker cw2);
#line 114 "crossbow.cpp"
    vector<int> create_dirseq();
#line 170 "crossbow.cpp"
    vector<int> create_dirseq_geometric();
#line 210 "crossbow.cpp"
    int create_path();
#line 262 "crossbow.cpp"
    void clear_bowpath();
#line 266 "crossbow.cpp"
    void gen_bowpath_map();
#line 271 "crossbow.cpp"
    bool auto_path();
#line 277 "crossbow.cpp"
    extern bool fire_mode;
#line 279 "crossbow.cpp"
    void switch_fire_mode();
#line 294 "crossbow.cpp"
    void add_fire(cell *c);
#line 333 "crossbow.cpp"
    enum eMouseFireMode { mfmNone, mfmPriority, mfmAlways };
#line 336 "crossbow.cpp"
    extern eMouseFireMode mouse_fire_mode;
#line 338 "crossbow.cpp"
    bool fire_on_mouse(cell *c);
#line 373 "crossbow.cpp"
    extern int rusalka_curses;
#line 375 "crossbow.cpp"
    void shoot();
#line 511 "crossbow.cpp"
    bool have_bow_target();
#line 535 "crossbow.cpp"
    void showMenu();
    }

  // implemented in: crystal.cpp

  namespace crystal {
#line 14 "crystal.cpp"
    static constexpr int MAXDIM = 7;
    static constexpr int MAX_EDGE_CRYSTAL = 2 * MAXDIM;
    
    struct coord : public array<int, MAXDIM> {
    coord operator + (coord b) { for(int i=0; i<MAXDIM; i++) b[i] += selfhr[i]; return b; }  
    coord operator - (coord b) { for(int i=0; i<MAXDIM; i++) b[i] = selfhr[i] - b[i]; return b; }  
    coord operator * (int x) { coord res; for(int i=0; i<MAXDIM; i++) res[i] = x * selfhr[i]; return res; } 
    };
    
    static constexpr coord c0 = {};
    
    struct ldcoord : public array<ld, MAXDIM> {
    friend ldcoord operator + (ldcoord a, ldcoord b) { ldcoord r; for(int i=0; i<MAXDIM; i++) r[i] = a[i] + b[i]; return r; }
    friend ldcoord operator - (ldcoord a, ldcoord b) { ldcoord r; for(int i=0; i<MAXDIM; i++) r[i] = a[i] - b[i]; return r; }
    friend ldcoord operator * (ldcoord a, ld v) { ldcoord r; for(int i=0; i<MAXDIM; i++) r[i] = a[i] * v; return r; }
    friend ldcoord operator / (ldcoord a, ld v) { ldcoord r; for(int i=0; i<MAXDIM; i++) r[i] = a[i] / v; return r; }
    friend ld operator | (ldcoord a, ldcoord b) { ld r=0; for(int i=0; i<MAXDIM; i++) r += a[i] * b[i]; return r; }
    };
    
    static constexpr ldcoord ldc0 = {};
    #if CAP_CRYSTAL
#line 47 "crystal.cpp"
    bool pure();
#line 51 "crystal.cpp"
    extern bool view_coordinates;
#line 54 "crystal.cpp"
    extern bool used_compass_inside;
#line 56 "crystal.cpp"
    ldcoord told(coord c);
#line 60 "crystal.cpp"
    extern ld compass_probability;
#line 465 "crystal.cpp"
    extern int crystal_period;
#line 699 "crystal.cpp"
    heptagon *get_heptagon_at(coord c);
#line 700 "crystal.cpp"
    coord get_coord(heptagon *h);
#line 701 "crystal.cpp"
    ldcoord get_ldcoord(cell *c);
#line 703 "crystal.cpp"
    int get_dim();
    #if MAXMDIM >= 4
#line 706 "crystal.cpp"
    transmatrix get_adj(heptagon *h, int d);
    #endif
#line 719 "crystal.cpp"
    color_t colorize(cell *c, char whichCanvas);
#line 800 "crystal.cpp"
    extern colortable coordcolors;
#line 802 "crystal.cpp"
    ld compass_angle();
#line 807 "crystal.cpp"
    bool crystal_cell(cell *c, shiftmatrix V);
#line 838 "crystal.cpp"
    vector<cell*> build_shortest_path(cell *c1, cell *c2);
#line 891 "crystal.cpp"
    int precise_distance(cell *c1, cell *c2);
#line 955 "crystal.cpp"
    ld space_distance(cell *c1, cell *c2);
#line 962 "crystal.cpp"
    ld space_distance_camelot(cell *c);
#line 967 "crystal.cpp"
    int dist_relative(cell *c);
#line 1090 "crystal.cpp"
    int dist_alt(cell *c);
#line 1112 "crystal.cpp"
    void init_rotation();
#line 1134 "crystal.cpp"
    void random_rotation();
#line 1152 "crystal.cpp"
    void next_home_orientation();
#line 1157 "crystal.cpp"
    void flip_z();
    #if CAP_RUG
#line 1175 "crystal.cpp"
    void switch_z_coordinate();
#line 1184 "crystal.cpp"
    void apply_rotation(const transmatrix t);
#line 1194 "crystal.cpp"
    void centerrug(ld aspd);
    #if MAXMDIM >= 4
#line 1240 "crystal.cpp"
    void build_rugdata();
    #endif
    #endif
#line 1301 "crystal.cpp"
    void set_land(cell *c);
#line 1315 "crystal.cpp"
    void set_crystal(int sides);
#line 1355 "crystal.cpp"
    void set_crystal_period_flags();
#line 1415 "crystal.cpp"
    hrmap *new_map();
#line 1419 "crystal.cpp"
    string compass_help();
#line 1444 "crystal.cpp"
    void crystal_knight_help();
#line 1468 "crystal.cpp"
    void show();
#line 1583 "crystal.cpp"
    string get_table_volume();
#line 1631 "crystal.cpp"
    string get_table_boundary();
#line 1641 "crystal.cpp"
    void may_place_compass(cell *c);
    #endif
    #if CAP_CRYSTAL && MAXMDIM >= 4
#line 1803 "crystal.cpp"
    void add_crystal_transform(char c);
    #endif
    }

  // implemented in: debug.cpp

#line 11 "debug.cpp"
  extern int steplimit;
#line 12 "debug.cpp"
  extern int cstep;
#line 13 "debug.cpp"
  extern bool buggyGeneration;
#line 14 "debug.cpp"
  extern bool debug_cellnames;
#line 16 "debug.cpp"
  extern vector<cell*> buggycells;
#line 19 "debug.cpp"
  template<class... T>
  void limitgen(T... args) {
  if(steplimit) {
  cstep++;
  printf("%6d ", cstep);
  printf(args...);
  if(cstep == steplimit) buggyGeneration = true;
  }
  }
#line 30 "debug.cpp"
  cell *pathTowards(cell *pf, cell *pt);
#line 46 "debug.cpp"
  void describeCell(cell *c);
#line 90 "debug.cpp"
  extern eLand cheatdest;
#line 92 "debug.cpp"
  void cheatMoveTo(eLand l);
#line 255 "debug.cpp"
  bool applyCheat(char u);
#line 273 "debug.cpp"
  extern vector<pair<cellwalker,int> > drawbugs;
#line 462 "debug.cpp"
  void push_debug_screen();
#line 468 "debug.cpp"
  void showCheatMenu();
#line 482 "debug.cpp"
  void viewall();
#line 546 "debug.cpp"
  void modalDebug(cell *c);
#line 569 "debug.cpp"
  void raiseBuggyGeneration(cell *c, const char *s);
#line 901 "debug.cpp"
  extern bool ldebug;
#line 903 "debug.cpp"
  void breakhere();

  // implemented in: dialogs.cpp

#line 11 "dialogs.cpp"
  extern const char* COLORBAR;
  namespace dialog {
#line 16 "dialogs.cpp"
    #define IFM(x) (mousing?"":x)
    
    static constexpr int DONT_SHOW = 16;
    
    enum tDialogItem {diTitle, diItem, diBreak, diHelp, diInfo, diIntSlider, diSlider, diBigItem, diKeyboard, diCustom, diColorItem, diListStart, diListEnd, diMatrixItem};
    
    struct item {
    tDialogItem type;
    string body;
    string value;
    int key;
    color_t color, colorv, colork, colors, colorc;
    int scale;
    double param;
    int p1, p2, p3;
    int position;
    void *ptr;
    reaction_t customfun;
    item(tDialogItem t = diBreak);
    };
    
    struct scaler {
    ld (*direct) (ld);
    ld (*inverse) (ld);
    bool positive;
    };
    
    static inline ld identity_f(ld x) { return x; }
    
    const static scaler identity = {identity_f, identity_f, false};
    const static scaler logarithmic = {log, exp, true};
    const static scaler asinhic = {asinh, sinh, false};
    const static scaler asinhic100 = {[] (ld x) { return asinh(x*100); }, [] (ld x) { return sinh(x)/100; }, false};
    
    /** extendable dialog */
    struct extdialog : funbase {
    string title, help;
    int dialogflags;
    reaction_t reaction;
    reaction_t reaction_final;
    reaction_t extra_options;
    virtual void draw() = 0;
    void operator() () { draw(); }
    virtual ~extdialog() {};
    extdialog();
    /** Pop screen, then call the final reaction. A bit more complex because it eeds to backup reaction_final due to popScreen */
    void popfinal() { auto rf = std::move(reaction_final); popScreen(); if(rf) rf(); }
    };
    
    /** number dialog */
    struct number_dialog : extdialog {
    ld *editwhat;
    string s;
    ld vmin, vmax, step, dft;
    scaler sc;
    int *intval; ld intbuf;
    bool animatable;
    bool *boolval;
    void draw() override;
    void apply_edit();
    void apply_slider();
    string disp(ld x);
    void reset_str() { s = disp(*editwhat); }
    };
    
    /** bool dialog */
    struct bool_dialog : extdialog {
    bool *editwhat, dft;
    reaction_t switcher;
    void draw() override;
    };
#line 89 "dialogs.cpp"
    number_dialog& get_ne();
#line 95 "dialogs.cpp"
    extdialog& get_di();
#line 101 "dialogs.cpp"
    void scaleLog();
#line 102 "dialogs.cpp"
    void scaleSinh();
#line 103 "dialogs.cpp"
    void scaleSinh100();
#line 105 "dialogs.cpp"
    extern color_t dialogcolor;
#line 106 "dialogs.cpp"
    extern color_t dialogcolor_clicked;
#line 107 "dialogs.cpp"
    extern color_t dialogcolor_selected;
#line 108 "dialogs.cpp"
    extern color_t dialogcolor_key;
#line 109 "dialogs.cpp"
    extern color_t dialogcolor_value;
#line 110 "dialogs.cpp"
    extern color_t dialogcolor_off;
#line 111 "dialogs.cpp"
    extern color_t dialogcolor_on;
#line 112 "dialogs.cpp"
    extern color_t dialogcolor_big;
#line 115 "dialogs.cpp"
    color_t dialogcolor_over(bool b);
#line 121 "dialogs.cpp"
    void addBack();
#line 128 "dialogs.cpp"
    void addHelp();
    namespace zoom {
#line 152 "dialogs.cpp"
      bool displayfr(int x, int y, int b, int size, const string &s, color_t color, int align);
#line 156 "dialogs.cpp"
      bool displayfr_highlight(int x, int y, int b, int size, const string &s, color_t color, int align, int hicolor IS(0xFFFF00));
      }
    #if CAP_MENUSCALING && CAP_SDL
#line 164 "dialogs.cpp"
    void handleZooming(SDL_Event &ev);
    #endif
    #if !(CAP_MENUSCALING && CAP_SDL)
#line 174 "dialogs.cpp"
    void handleZooming(SDL_Event &ev);
    #endif
#line 177 "dialogs.cpp"
    extern vector<item> items;
#line 179 "dialogs.cpp"
    item& lastItem();
#line 181 "dialogs.cpp"
    item& titleItem();
#line 183 "dialogs.cpp"
    extern map<int, reaction_t> key_actions;
#line 185 "dialogs.cpp"
    void add_key_action(int key, const reaction_t& action);
#line 189 "dialogs.cpp"
    void add_key_action_adjust(int& key, const reaction_t& action);
#line 194 "dialogs.cpp"
    void extend();
#line 198 "dialogs.cpp"
    void add_action(const reaction_t& action);
#line 202 "dialogs.cpp"
    void add_action_push(const reaction_t& action);
#line 204 "dialogs.cpp"
    void add_action_push_clear(const reaction_t& action);
#line 206 "dialogs.cpp"
    void handler(int sym, int uni);
#line 212 "dialogs.cpp"
    extern int list_size_min, list_size_max, list_fake_key;
#line 213 "dialogs.cpp"
    extern const int first_list_fake_key;
#line 215 "dialogs.cpp"
    void init();
#line 223 "dialogs.cpp"
    string keyname(int k);
#line 257 "dialogs.cpp"
    void addSlider(double d1, double d2, double d3, int key);
#line 264 "dialogs.cpp"
    void addIntSlider(int d1, int d2, int d3, int key);
#line 272 "dialogs.cpp"
    void addSelItem(string body, string value, int key);
#line 282 "dialogs.cpp"
    void addBoolItem(string body, bool value, int key);
#line 286 "dialogs.cpp"
    int displaycolor(color_t col);
#line 292 "dialogs.cpp"
    void addKeyboardItem(string keys);
#line 299 "dialogs.cpp"
    void addCustom(int size, reaction_t custom);
#line 306 "dialogs.cpp"
    void addColorItem(string body, int value, int key);
#line 321 "dialogs.cpp"
    void addMatrixItem(string body, transmatrix& value, int key, int dim IS(GDIM));
#line 347 "dialogs.cpp"
    void addHelp(string body);
#line 356 "dialogs.cpp"
    void addInfo(string body, color_t color IS(dialogcolor));
#line 363 "dialogs.cpp"
    void addItem(string body, int key);
#line 370 "dialogs.cpp"
    void addBigItem(string body, int key);
#line 379 "dialogs.cpp"
    int addBreak(int val);
#line 386 "dialogs.cpp"
    void start_list(int size_min, int size_max, int key_start IS(0));
#line 396 "dialogs.cpp"
    void end_list();
#line 402 "dialogs.cpp"
    void addTitle(string body, color_t color, int scale);
#line 410 "dialogs.cpp"
    void init(string title, color_t color IS(0xE8E8E8), int scale IS(150), int brk IS(60));
#line 416 "dialogs.cpp"
    extern int dcenter, dwidth;
#line 418 "dialogs.cpp"
    int displayLong(string str, int siz, int y, bool measure);
#line 451 "dialogs.cpp"
    extern int tothei, dialogwidth, dfsize, dfspace, odfspace, leftwidth, rightwidth, innerwidth, itemx, keyx, valuex, top, list_starts_at, list_ends_at, list_full_size, list_actual_size, list_skip, fwidth;
#line 453 "dialogs.cpp"
    extern string highlight_text;
#line 454 "dialogs.cpp"
    extern int highlight_key;
#line 456 "dialogs.cpp"
    bool is_highlight(item& I);
#line 457 "dialogs.cpp"
    void set_highlight(item& I);
#line 458 "dialogs.cpp"
    void find_highlight(const string& s);
#line 463 "dialogs.cpp"
    void measure();
#line 508 "dialogs.cpp"
    extern purehookset hooks_display_dialog;
#line 510 "dialogs.cpp"
    extern vector<int> key_queue;
#line 512 "dialogs.cpp"
    void queue_key(int key);
#line 514 "dialogs.cpp"
    int uishape();
#line 521 "dialogs.cpp"
    void draw_list_slider(int x, int yt);
#line 556 "dialogs.cpp"
    void draw_slider(int sl, int sr, int y, item& I);
#line 620 "dialogs.cpp"
    void visualize_matrix(const trans23& T, ld x, ld y, ld r, int dim, ld tsize);
#line 655 "dialogs.cpp"
    void display();
#line 925 "dialogs.cpp"
    void handle_actions(int &sym, int &uni);
#line 938 "dialogs.cpp"
    void handleNavigation(int &sym, int &uni);
#line 1026 "dialogs.cpp"
    extern color_t *palette;
#line 1036 "dialogs.cpp"
    void handleKeyColor(int sym, int uni, struct color_dialog& ne);
#line 1077 "dialogs.cpp"
    extern bool colorAlpha;
#line 1145 "dialogs.cpp"
    void openColorDialog(unsigned int& col, unsigned int *pal IS(palette));
#line 1153 "dialogs.cpp"
    struct matrix_dialog : extdialog {
    transmatrix *edit_matrix;
    int dim;
    void draw() override;
    void large_viz();
    };
#line 1251 "dialogs.cpp"
    void editMatrix(transmatrix& T, string t, string h, int dim);
#line 1260 "dialogs.cpp"
    bool editingDetail();
#line 1289 "dialogs.cpp"
    void use_hexeditor();
#line 1317 "dialogs.cpp"
    void bound_low(ld val);
#line 1329 "dialogs.cpp"
    void bound_up(ld val);
#line 1341 "dialogs.cpp"
    void formula_keyboard(bool lr);
#line 1350 "dialogs.cpp"
    extern bool onscreen_keyboard;
#line 1398 "dialogs.cpp"
    void parser_help();
#line 1542 "dialogs.cpp"
    int handlePage(int& nl, int& nlm, int perpage);
#line 1563 "dialogs.cpp"
    void displayPageButtons(int i, bool pages);
#line 1580 "dialogs.cpp"
    bool handlePageButtons(int uni);
#line 1598 "dialogs.cpp"
    number_dialog& editNumber(ld& x, ld vmin, ld vmax, ld step, ld dft, string title, string help);
#line 1618 "dialogs.cpp"
    extdialog& editBool(bool& b, bool dft, string title, string help, const reaction_t& switcher);
#line 1629 "dialogs.cpp"
    number_dialog& editNumber(int& x, int vmin, int vmax, ld step, int dft, string title, string help);
#line 1637 "dialogs.cpp"
    void helpToEdit(int& x, int vmin, int vmax, int step, int dft);
#line 1773 "dialogs.cpp"
    void handleKeyFile(int sym, int uni);
#line 1798 "dialogs.cpp"
    void openFileDialog(string& filename, string fcap, string ext, bool_reaction_t action);
#line 1809 "dialogs.cpp"
    extern string infix;
#line 1814 "dialogs.cpp"
    string human_simplify(const string &s, bool include_symbols);
#line 1836 "dialogs.cpp"
    bool hasInfix(const string &s);
#line 1841 "dialogs.cpp"
    bool has_substring(const string &s, const string& needle);
#line 1850 "dialogs.cpp"
    bool editInfix(int uni);
#line 1859 "dialogs.cpp"
    extern vector<pair<string, color_t> > v;  
#line 1861 "dialogs.cpp"
    void vpush(color_t color, const char *name);
#line 1867 "dialogs.cpp"
    string editchecker(int sym, int uni);
#line 1873 "dialogs.cpp"
    struct string_dialog : extdialog {
    int editpos = 0;
    string *edited_string;
    string view_edited_string();
    void draw() override;
    void start_editing(string& s);
    bool handle_edit_string(int sym, int uni, function<string(int, int)> checker = editchecker);
    };
#line 1944 "dialogs.cpp"
    void edit_string(string& s, string title, string help);
#line 1952 "dialogs.cpp"
    void confirm_dialog(const string& text, const reaction_t& act);
#line 1967 "dialogs.cpp"
    void addBoolItem_action(const string& s, bool& b, int c);
#line 1972 "dialogs.cpp"
    void addBoolItem_action_neg(const string& s, bool& b, int c);
#line 1977 "dialogs.cpp"
    bool cheat_forbidden();
#line 1989 "dialogs.cpp"
    void add_action_confirmed(const reaction_t& act);
#line 1994 "dialogs.cpp"
    
    template<class T> void addBoolItem_choice(const string&  s, T& b, T val, char c) {
    addBoolItem(s, b == val, c);
    add_action([&b, val] { b = val; });
    }
    
    inline void cheat_if_confirmed(const reaction_t& act) {
    if(cheat_forbidden())
    return;
    if(needConfirmationEvenIfSaved()) pushScreen([act] () { confirm_dialog(XLAT("This will enable the cheat mode, making this game ineligible for scoring. Are you sure?"), act); });
    else act();
    }
    
    inline void do_if_confirmed(const reaction_t& act) {
    if(needConfirmationEvenIfSaved()) pushScreen([act] () { confirm_dialog(XLAT("This will end your current game and start a new one. Are you sure?"), act); });
    else act();
    }
    
    inline void push_confirm_dialog(const reaction_t& act, const string& s) {
    pushScreen([act, s] () { confirm_dialog(s, act); });
    }
    
    inline reaction_t add_confirmation(const reaction_t& act) {
    return [act] { do_if_confirmed(act); };
    }
    }

  // implemented in: drawing.cpp

#line 12 "drawing.cpp"
  static constexpr int POLY_DRAWLINES = 1;            // draw the lines
  static constexpr int POLY_DRAWAREA = 2;             // draw the area
  static constexpr int POLY_INVERSE = 4;              // draw the inverse -- useful in stereographic projection
  static constexpr int POLY_ISSIDE = 8;               // never draw in inverse
  static constexpr int POLY_BEHIND = 16;              // there are points behind the camera
  static constexpr int POLY_TOOLARGE = 32;            // some coordinates are too large -- best not to draw to avoid glitches
  static constexpr int POLY_INFRONT = 64;             // on the sphere (orthogonal projection), do not draw without any points in front
  static constexpr int POLY_HASWALLS = 128;           // floor shapes which have their sidewalls
  static constexpr int POLY_PLAIN = 256;              // plain floors
  static constexpr int POLY_FULL = 512;               // full floors
  static constexpr int POLY_HASSHADOW = 1024;         // floor shapes which have their shadows, or can use shFloorShadow
  static constexpr int POLY_GP = 2048;                // Goldberg shapes
  static constexpr int POLY_VCONVEX = 4096;           // Convex shape (vertex)
  static constexpr int POLY_CCONVEX = 8192;           // Convex shape (central)
  static constexpr int POLY_CENTERIN = 16384;         // new system of side checking 
  static constexpr int POLY_FORCEWIDE = (1<<15);      // force wide lines
  static constexpr int POLY_NOTINFRONT = (1<<16);     // points not in front
  static constexpr int POLY_NIF_ERROR = (1<<17);      // points moved to the outline cross the image, disable
  static constexpr int POLY_BADCENTERIN = (1<<18);    // new system of side checking 
  static constexpr int POLY_PRECISE_WIDE = (1<<19);   // precise width calculation
  static constexpr int POLY_FORCE_INVERTED = (1<<20); // force inverted
  static constexpr int POLY_ALWAYS_IN = (1<<21);      // always draw this
  static constexpr int POLY_TRIANGLES = (1<<22);      // made of TRIANGLES, not TRIANGLE_FAN
  static constexpr int POLY_INTENSE = (1<<23);        // extra intense colors
  static constexpr int POLY_DEBUG = (1<<24);          // debug this shape
  static constexpr int POLY_PRINTABLE = (1<<25);      // these walls are printable
  static constexpr int POLY_FAT = (1<<26);            // fatten this model in WRL export (used for Rug)
  static constexpr int POLY_SHADE_TEXTURE = (1<<27);  // texture has 'z' coordinate for shading
  static constexpr int POLY_ONE_LEVEL = (1<<28);      // only one level of the universal cover in SL(2,R)
  static constexpr int POLY_APEIROGONAL = (1<<29);    // only vertices indexed up to she are drawn as the boundary
  static constexpr int POLY_NO_FOG = (1<<30);         // disable fog for this
  
  /** \brief A graphical element that can be drawn. Objects are not drawn immediately but rather queued.
  *
  *  HyperRogue map rendering functions do not draw its data immediately; instead, they call the 'queue' functions
  *  which store the data to draw in hr::ptds. This approach lets us draw the elements in the correct order. 
  */
  
  struct drawqueueitem {
  /** \brief The higher the priority, the earlier we should draw this object. */
  PPR prio;
  /** \brief Color of this object. */
  color_t color;
  /** \brief Some priorities need extra sorting inside the given class. This attribute is used to specify the inner sorting priority. */
  int subprio;
  /** \brief Draw the object. */
  virtual void draw() = 0;
  /** \brief Draw the object as background. */
  virtual void draw_back() {}
  virtual ~drawqueueitem() = default;
  /** \brief When minimizing OpenGL calls, we need to group items of the same color, etc. together. This value is used as an extra sorting key. */
  virtual color_t outline_group() = 0;
  };
  
  /** \brief Drawqueueitem used to draw polygons. The majority of drawqueueitems fall here. */
  struct dqi_poly : drawqueueitem {
  /** \brief matrix used to transform the model */
  shiftmatrix V;
  /** \brief a vector of GL vertices where the model is stored */
  const vector<glvertex> *tab;
  /** \brief the where does the model start */
  int offset;
  /** \brief how many vertices in the model */
  int cnt;
  /** cnt for POLY_APEIROGONAL */
  int apeiro_cnt;
  /** \brief the offset in the texture vertices */
  int offset_texture;
  /** \brief outline color */
  color_t outline;
  /** \brief width of boundary lines */
  double linewidth;
  /** \brief various flags */
  int flags;
  /** \brief Texture data for textured polygons. Requires POLY_TRIANGLES flag */
  struct basic_textureinfo *tinf;
  /** \brief used to find the correct side to draw in spherical geometries */
  hyperpoint intester;
  /** \brief temporarily cached data */
  float cache;
  void draw() override;
  #if CAP_GL
  void gldraw();
  #endif
  void draw_back() override;
  color_t outline_group() override { return outline; }
  };
  
  /** \brief Drawqueueitem used to draw lines */
  struct dqi_line : drawqueueitem {
  /** \brief starting and ending point */
  shiftpoint H1, H2;
  /** \brief how accurately to render the line */
  int prf;
  /** \brief width of this line */
  double width;
  void draw() override;
  void draw_back() override;
  color_t outline_group() override { return color; }
  };
  
  /** \brief Drawqueueitem used to draw strings, using sccreen coodinates */      
  struct dqi_string : drawqueueitem {
  /** \brief text */
  string str;
  /** onscreen position */
  int x, y;
  /** shift in anaglyph mode */
  int shift;
  /** font size */
  int size;
  /** frame color */
  int frame;
  /** alignment (0-8-16) */
  int align;
  void draw() override;
  color_t outline_group() override { return 1; }
  };
  
  /** Drawqueueitem used to draw circles, using screen coordinates */
  struct dqi_circle : drawqueueitem {
  /** \brief onscreen position */
  int x, y;
  /** \brief circle size */
  int size;
  /** \brief which color should it be filled with */
  color_t fillcolor;
  /** \brief width of the circle */
  double linewidth;
  void draw() override;
  color_t outline_group() override { return 2; }
  };
  
  /** \brief Perform an arbitrary action. May temporarily change the model, etc. */
  struct dqi_action : drawqueueitem {
  reaction_t action;
  explicit dqi_action(const reaction_t& a) : action(a) {}
  void draw() override { action(); }
  color_t outline_group() override { return 2; }
  };
#line 154 "drawing.cpp"
  extern bool in_vr_sphere;
#line 159 "drawing.cpp"
  extern color_t poly_outline;
#line 161 "drawing.cpp"
  extern vector<unique_ptr<drawqueueitem>> ptds;
  #if CAP_GL
#line 164 "drawing.cpp"
  extern color_t text_color;
#line 165 "drawing.cpp"
  extern int text_shift;
#line 166 "drawing.cpp"
  extern GLuint text_texture;
#line 167 "drawing.cpp"
  extern int texts_merged;
#line 168 "drawing.cpp"
  extern int shapes_merged;
#line 177 "drawing.cpp"
  void glflush();
  #endif
  #if CAP_POLY
#line 261 "drawing.cpp"
  #define POLYMAX 60000
#line 264 "drawing.cpp"
  extern vector<glvertex> glcoords;
  #endif
#line 268 "drawing.cpp"
  extern int spherespecial, spherephase;
  #if CAP_POLY
#line 273 "drawing.cpp"
  extern int polyx[POLYMAX], polyxr[POLYMAX], polyy[POLYMAX];
#line 308 "drawing.cpp"
  bool two_sided_model();
#line 326 "drawing.cpp"
  int get_side(const hyperpoint& H);
#line 380 "drawing.cpp"
  bool correct_side(const hyperpoint& H);
  #if CAP_SDLGFX
#line 595 "drawing.cpp"
  void filledPolygonColorI(SDL_Renderer *s, int* px, int *py, int polyi, color_t col);
  #endif
#line 646 "drawing.cpp"
  extern int global_projection;
#line 830 "drawing.cpp"
  ld scale_at(const shiftmatrix& T);
#line 855 "drawing.cpp"
  extern int perfect_linewidth;
#line 857 "drawing.cpp"
  ld linewidthat(const shiftpoint& h);
#line 888 "drawing.cpp"
  void set_width(ld w);
  namespace s2xe {
#line 1168 "drawing.cpp"
    extern int qrings;
    }
#line 1421 "drawing.cpp"
  extern int berger_limit;
  namespace ods {
    #if CAP_ODS
#line 1516 "drawing.cpp"
    bool project(hyperpoint h, hyperpoint& h1, hyperpoint& h2, bool eye);
    #endif
    }
#line 2160 "drawing.cpp"
  void prettypoint(const hyperpoint& h);
#line 2164 "drawing.cpp"
  void prettylinesub(const hyperpoint& h1, const hyperpoint& h2, int lev);
#line 2173 "drawing.cpp"
  void prettyline(hyperpoint h1, hyperpoint h2, ld shift, color_t col, int lev, int flags, PPR prio);
#line 2192 "drawing.cpp"
  void prettypoly(const vector<hyperpoint>& t, color_t fillcol, color_t linecol, int lev);
#line 2211 "drawing.cpp"
  extern vector<glvertex> curvedata;
#line 2212 "drawing.cpp"
  extern int curvestart;
#line 2213 "drawing.cpp"
  extern bool keep_curvedata;
#line 2215 "drawing.cpp"
  void queuereset(eModel m, PPR prio);
#line 2249 "drawing.cpp"
  void initquickqueue();
#line 2254 "drawing.cpp"
  void sortquickqueue();
#line 2263 "drawing.cpp"
  void quickqueue();
#line 2284 "drawing.cpp"
  extern ld backbrightness;
#line 2286 "drawing.cpp"
  extern purehookset hooks_drawqueue;
#line 2314 "drawing.cpp"
  void sort_drawqueue();
#line 2354 "drawing.cpp"
  void reverse_priority(PPR p);
#line 2358 "drawing.cpp"
  void reverse_side_priorities();
#line 2365 "drawing.cpp"
  void draw_backside();
#line 2400 "drawing.cpp"
  void reverse_transparent_walls();
#line 2405 "drawing.cpp"
  void set_vr_sphere();
#line 2421 "drawing.cpp"
  extern int hemi_side;
#line 2423 "drawing.cpp"
  void draw_main();
#line 2547 "drawing.cpp"
  void drawqueue();
#line 2704 "drawing.cpp"
  template<class T, class... U> T& queuea(PPR prio, U... u) {
  ptds.push_back(unique_ptr<T>(new T (u...)));
  ptds.back()->prio = prio;  
  return (T&) *ptds.back();
  }
  #if CAP_SHAPES
#line 2712 "drawing.cpp"
  dqi_poly& queuepolyat(const shiftmatrix& V, const hpcshape& h, color_t col, PPR prio);
  #endif
#line 2734 "drawing.cpp"
  dqi_poly& queuetable(const shiftmatrix& V, const vector<glvertex>& f, int cnt, color_t linecol, color_t fillcol, PPR prio);
  #if CAP_SHAPES
#line 2752 "drawing.cpp"
  dqi_poly& queuepoly(const shiftmatrix& V, const hpcshape& h, color_t col);
  #endif
#line 2761 "drawing.cpp"
  void curvepoint(const hyperpoint& H1);
#line 2765 "drawing.cpp"
  void curvepoint_first();
#line 2769 "drawing.cpp"
  dqi_poly& queuecurve_reuse(const shiftmatrix& V, color_t linecol, color_t fillcol, PPR prio);
#line 2775 "drawing.cpp"
  dqi_poly& queuecurve(const shiftmatrix& V, color_t linecol, color_t fillcol, PPR prio);
#line 2781 "drawing.cpp"
  dqi_action& queueaction(PPR prio, const reaction_t& action);
#line 2785 "drawing.cpp"
  dqi_line& queueline(const shiftpoint& H1, const shiftpoint& H2, color_t col, int prf IS(0), PPR prio IS(PPR::LINE));
#line 2797 "drawing.cpp"
  void queuestr(int x, int y, int shift, int size, string str, color_t col, int frame IS(0), int align IS(8));
#line 2809 "drawing.cpp"
  void queuecircle(int x, int y, int size, color_t color, PPR prio IS(PPR::CIRCLE), color_t fillcolor IS(0));
#line 2819 "drawing.cpp"
  void getcoord0(const shiftpoint& h, int& xc, int &yc, int &sc);
#line 2828 "drawing.cpp"
  ld scale_in_pixels(const shiftmatrix& V);
#line 2832 "drawing.cpp"
  bool getcoord0_checked(const shiftpoint& h, int& xc, int &yc, int &zc);
#line 2839 "drawing.cpp"
  void queuestr(const shiftpoint& h, int size, const string& chr, color_t col, int frame IS(0));
#line 2845 "drawing.cpp"
  extern basic_textureinfo finf;
  #if CAP_GL
#line 2849 "drawing.cpp"
  using pointfunction = function<hyperpoint(ld, ld)>;
#line 2852 "drawing.cpp"
  hyperpoint default_pointfunction(ld x, ld y);
  #if !CAP_EXTFONT
#line 2857 "drawing.cpp"
  void write_in_space(const shiftmatrix& V, int fsize, double size, const string& s, color_t col, int frame IS(0), int align IS(8), PPR prio IS(PPR::TEXT), pointfunction pf IS(default_pointfunction));
  #endif
  #endif
#line 2913 "drawing.cpp"
  void queuestr(const shiftmatrix& V, double size, const string& chr, color_t col, int frame IS(0), int align IS(8));
#line 2933 "drawing.cpp"
  void queuestrn(const shiftmatrix& V, double size, const string& chr, color_t col, int frame IS(0), int align IS(8));
#line 2966 "drawing.cpp"
  void queuecircle(const shiftmatrix& V, double size, color_t col);
  #endif

  // implemented in: environment.cpp

#line 14 "environment.cpp"
  #define HF_BUG        Flag(0)
  #define HF_EARTH      Flag(1)
  #define HF_BIRD       Flag(2)
  #define HF_LEADER     Flag(3)
  #define HF_HEX        Flag(4)
  #define HF_WHIRLPOOL  Flag(5)
  #define HF_WATER      Flag(6)
  #define HF_AIR        Flag(7)
  #define HF_MUTANT     Flag(8)
  #define HF_OUTLAW     Flag(9)
  #define HF_WHIRLWIND  Flag(10)
  #define HF_ROSE       Flag(11)
  #define HF_DRAGON     Flag(12)
  #define HF_KRAKEN     Flag(13)
  #define HF_SHARK      Flag(14)
  #define HF_BATS       Flag(15)
  #define HF_REPTILE    Flag(16)
  #define HF_EAGLES     Flag(17)
  #define HF_SLOW       Flag(18)
  #define HF_FAST       Flag(19)
  #define HF_WARP       Flag(20)
  #define HF_MOUSE      Flag(21)
  #define HF_RIVER      Flag(22)
  #define HF_MIRROR     Flag(23)
  #define HF_VOID       Flag(24)
  #define HF_HUNTER     Flag(25)
  #define HF_FAILED_AMBUSH     Flag(26)
  #define HF_MAGNET     Flag(27)
  #define HF_HEXD       Flag(28)
  #define HF_ALT        Flag(29)
  #define HF_MONK       Flag(30)
  #define HF_WESTWALL   Flag(31)
  #define HF_JUMP       Flag(32)
  #define HF_DICE       Flag(33)
#line 50 "environment.cpp"
  extern flagtype havewhat, hadwhat;
#line 53 "environment.cpp"
  extern vector<cell*> worms, ivies, ghosts, golems, hexsnakes;
#line 59 "environment.cpp"
  extern int first7;           
#line 62 "environment.cpp"
  extern vector<cell*> dcal;
#line 65 "environment.cpp"
  extern vector<cellwalker> pathq;
#line 68 "environment.cpp"
  extern int statuecount;
#line 71 "environment.cpp"
  extern int wetslime;
#line 74 "environment.cpp"
  extern vector<cell*> pathqm;
#line 77 "environment.cpp"
  extern set<int> snaketypes;
#line 79 "environment.cpp"
  extern int gamerange_bonus;
#line 80 "environment.cpp"
  int gamerange();
#line 83 "environment.cpp"
  extern cell *pd_from;
#line 84 "environment.cpp"
  extern int pd_range;
#line 87 "environment.cpp"
  /** The pathdata is used to keep a list of visited cells. It is used as follows:
  *  1) create pathdata object: pathdata pd(identifier)
  *  2) use one of the following methods to mark cells as visited:
  *  2a) onpath_with_dir or onpath_random_dir, to mark a cell together with its distance and the direction we came from (used by computePathdist to make pathfinding not sensitive to direction indexing)
  *  2b) onpath, to mark a cell at its distance (used when ordering is irrelevant: compute_graphical_distance and in shmup)
  *  2c) onpatk_mark, to just mark a cell (used in groupmove2)
  *  3) All the visited cells are listed in pathq, and they have 'pathdist' set to their recorded distance (0 in case of onpath_mark).
  *  4) When the pathdata object is deleted, all the pathdist values are cleared back to PINFD.
  *  The variable 'pathlock' ensures that we do not use two pathdata objects at once.
  **/
  
  struct pathdata {
  void checklock();
  ~pathdata();
  pathdata(eMonster m, bool include_allies IS(true));
  pathdata(int i);
  };
#line 107 "environment.cpp"
  void onpath_with_dir(cellwalker cw, int d);
#line 116 "environment.cpp"
  void onpath_random_dir(cell *c, int d);
#line 120 "environment.cpp"
  void onpath(cell *c, int d);
#line 124 "environment.cpp"
  void onpath_mark(cell *c);
#line 128 "environment.cpp"
  void clear_pathdata();
#line 135 "environment.cpp"
  extern int pathlock;
#line 141 "environment.cpp"
  void compute_graphical_distance();
#line 205 "environment.cpp"
  void computePathdist(eMonster param, bool include_allies IS(true));
#line 303 "environment.cpp"
  extern vector<int> bfs_reachedfrom;
#line 306 "environment.cpp"
  void bfs();
#line 551 "environment.cpp"
  void moverefresh(bool turn IS(true));
#line 773 "environment.cpp"
  void settemp(cell *c);
#line 778 "environment.cpp"
  void findWormIvy(cell *c);
#line 824 "environment.cpp"
  void advance_tides();
#line 833 "environment.cpp"
  void monstersTurn();
#line 916 "environment.cpp"
  bool looped(vector<cell*>& whirlline);

  // implemented in: euclid.cpp

  namespace euc {
#line 14 "euclid.cpp"
    struct coord : array<int, 3> {
    explicit coord() = default;
    constexpr explicit coord(int x, int y, int z) : array<int,3> {{x,y,z}} {}
    coord& operator += (coord b) { for(int i: {0,1,2}) selfhr[i] += b[i]; return selfhr; }
    coord& operator -= (coord b) { for(int i: {0,1,2}) selfhr[i] -= b[i]; return selfhr; }
    coord operator + (coord b) const { coord a = selfhr; return a += b; }
    coord operator - (coord b) const { coord a = selfhr; return a -= b; }
    coord operator -() const { return coord(-selfhr[0], -selfhr[1], -selfhr[2]); }
    coord& operator +() { return selfhr; }
    const coord& operator +() const { return selfhr; }
    coord operator *(int x) const { return coord(x*selfhr[0], x*selfhr[1], x*selfhr[2]); }
    friend coord operator *(int x, const coord& y) { return coord(x*y[0], x*y[1], x*y[2]); }
    };
    
    typedef array<coord, 3> intmatrix;
#line 31 "euclid.cpp"
    extern const coord euzero;
#line 32 "euclid.cpp"
    extern const coord eutester;
#line 33 "euclid.cpp"
    extern intmatrix euzeroall;
#line 37 "euclid.cpp"
    vector<coord> get_shifttable();
#line 83 "euclid.cpp"
    extern coord basic_canonicalize(coord x);
#line 86 "euclid.cpp"
    struct torus_config {
    /** periods entered by the user */
    intmatrix user_axes;
    /** OR'ed flags: 1 -- flip X in 3D, 2 -- flip Y in 3D, 4 -- flip X/Y in 3D, 8 -- Klein bottle in 2D, 16 -- third turn in 3D, 32 -- Hantzsche-Wendt in 3D */
    int twisted;
    
    torus_config() {}
    torus_config(intmatrix user_axes, int twisted) : user_axes(user_axes), twisted(twisted) {}
    };
    
    struct torus_config_full : torus_config {
    /** optimal representation of the periods */
    intmatrix optimal_axes;
    /** regular axes (?) */
    intmatrix regular_axes;
    /** in 2D: the period vector which is reflected */
    gp::loc twisted_vec;
    /** in 2D: a vector orthogonal to twisted_vec */
    gp::loc ortho_vec;
    /** determinant */
    int det;
    /** the number of infinite dimensions */
    int infinite_dims;
    /** ? */  
    intmatrix inverse_axes;
    /** for canonicalization on tori */
    map<coord, int> hash;
    vector<coord> seq;
    int index;
    
    void reset() { index = 0; hash.clear(); seq.clear(); }
    
    /** add to the tori canonicalization list */
    void add(coord val);
    
    /** get the representative on the tori canonicalization list */
    coord get(coord x);
    
    /** find the equivalence class of coo */
    coord compute_cat(coord coo);
    
    /** canonicalize coord x; in case of twisting, adjust d, M, and mirr accordingly */
    void canonicalize(coord& x, coord& d, transmatrix& M, bool& mirr);
    };
#line 131 "euclid.cpp"
    extern torus_config eu_input, eu_edit;
#line 132 "euclid.cpp"
    extern torus_config_full eu;
#line 317 "euclid.cpp"
    vector<coord>& get_current_shifttable();
#line 318 "euclid.cpp"
    map<coord, heptagon*>& get_spacemap();
#line 319 "euclid.cpp"
    map<heptagon*, coord>& get_ispacemap();
#line 320 "euclid.cpp"
    cell *& get_camelot_center();
#line 322 "euclid.cpp"
    heptagon* get_at(coord co);
#line 324 "euclid.cpp"
    hrmap* new_map();
#line 328 "euclid.cpp"
    transmatrix move_matrix(heptagon *h, int i);
#line 332 "euclid.cpp"
    bool pseudohept(cell *c);
#line 344 "euclid.cpp"
    int dist_alt(cell *c);
#line 356 "euclid.cpp"
    bool get_emerald(cell *c);
#line 376 "euclid.cpp"
    int celldistance(coord v);
#line 401 "euclid.cpp"
    int celldistance(cell *c1, cell *c2);
#line 408 "euclid.cpp"
    void set_land(cell *c);
#line 423 "euclid.cpp"
    int dist_relative(cell *c);
#line 456 "euclid.cpp"
    torus_config torus3(int x, int y, int z);
#line 462 "euclid.cpp"
    torus_config clear_torus3();
#line 477 "euclid.cpp"
    bool valid_third_turn(const intmatrix& m);
#line 487 "euclid.cpp"
    torus_config make_hantzsche_wendt(int v);
#line 500 "euclid.cpp"
    bool valid_hantzsche_wendt(const intmatrix& m);
#line 504 "euclid.cpp"
    torus_config make_third_turn(int a, int b, int c);
#line 517 "euclid.cpp"
    torus_config make_quarter_turn(int a, int b, int c);
#line 540 "euclid.cpp"
    bool valid_irr_torus();
#line 559 "euclid.cpp"
    void build_torus3(eGeometry g);
#line 655 "euclid.cpp"
    void build_torus3();
#line 823 "euclid.cpp"
    void prepare_torus3();
#line 827 "euclid.cpp"
    void show_fundamental();
#line 871 "euclid.cpp"
    torus_config rectangular_torus(int x, int y, bool klein);
#line 886 "euclid.cpp"
    extern int quotient_size;
#line 888 "euclid.cpp"
    void show_torus3();
#line 1138 "euclid.cpp"
    int dscalar(gp::loc e1, gp::loc e2);
#line 1142 "euclid.cpp"
    int dsquare(gp::loc e);
#line 1144 "euclid.cpp"
    int dcross(gp::loc e1, gp::loc e2);
#line 1148 "euclid.cpp"
    gp::loc full_coords2(cell *c);
#line 1175 "euclid.cpp"
    cell* at(gp::loc p);
#line 1183 "euclid.cpp"
    coord to_coord(gp::loc p);
#line 1185 "euclid.cpp"
    gp::loc sdxy();
#line 1187 "euclid.cpp"
    pair<bool, string> coord_display(const shiftmatrix& V, cell *c);
#line 1200 "euclid.cpp"
    gp::loc to_loc(const coord& v);
#line 1202 "euclid.cpp"
    map<gp::loc, cdata>& get_cdata();
#line 1204 "euclid.cpp"
    transmatrix eumove(coord co);
#line 1222 "euclid.cpp"
    transmatrix eumove(gp::loc co);
#line 1224 "euclid.cpp"
    bool chiral(gp::loc g);
#line 1236 "euclid.cpp"
    void twist_once(gp::loc coo);
#line 1248 "euclid.cpp"
    int dist(int sx, int sy, bool reduce IS(true));
#line 1258 "euclid.cpp"
    int dist(gp::loc a, gp::loc b);
#line 1262 "euclid.cpp"
    int cyldist(gp::loc a, gp::loc b);
#line 1282 "euclid.cpp"
    void generate();
#line 1366 "euclid.cpp"
    bool in();
#line 1373 "euclid.cpp"
    bool in(int dim);
#line 1374 "euclid.cpp"
    bool in(int dim, int s7);
    }
#line 1378 "euclid.cpp"
  gp::loc euc2_coordinates(cell *c);

  // implemented in: expansion.cpp

#line 25 "expansion.cpp"
  struct expansion_analyzer {
  int sibling_limit;
  vector<int> gettype(cell *c);
  int N;
  vector<cell*> samples;  
  map<vector<int>, int> codeid;  
  vector<vector<int> > children;  
  int rootid, diskid;
  int coefficients_known;
  #if CAP_GMP
  vector<mpq_class> coef;
  #else
  vector<int> coef;
  #endif
  int valid_from, tested_to;
  ld growth;
  
  int sample_id(cell *c);
  void preliminary_grouping();
  void reduce_grouping();
  vector<vector<bignum>> descendants;
  bignum& get_descendants(int level);
  bignum& get_descendants(int level, int type);
  void find_coefficients();
  void reset();
  
  expansion_analyzer() { reset(); }
  
  string approximate_descendants(int d, int max_length);
  void view_distances_dialog();
  ld get_growth();
  
  private:
  bool verify(int id);
  int valid(int v, int step);
  };
#line 361 "expansion.cpp"
  int type_in(expansion_analyzer& ea, cell *c, const cellfunction& f);
#line 400 "expansion.cpp"
  bool sizes_known();
#line 416 "expansion.cpp"
  bool trees_known();
#line 435 "expansion.cpp"
  enum eDistanceFrom { dfPlayer, dfStart, dfWorld };
#line 437 "expansion.cpp"
  extern string dfnames[3];
#line 439 "expansion.cpp"
  extern eDistanceFrom distance_from;
#line 442 "expansion.cpp"
  enum eNumberCoding { ncNone, ncDistance, ncType, ncDebug, ncError };
#line 444 "expansion.cpp"
  extern string ncnames[5];
#line 445 "expansion.cpp"
  extern eNumberCoding number_coding;
#line 447 "expansion.cpp"
  bool mod_allowed();
#line 451 "expansion.cpp"
  bool distances_legal(cell *c);
#line 464 "expansion.cpp"
  int curr_dist(cell *c);
#line 483 "expansion.cpp"
  int type_in_reduced(expansion_analyzer& ea, cell *c, const cellfunction& f);
#line 496 "expansion.cpp"
  int parent_id(cell *c, int which, const cellfunction& cf);
#line 517 "expansion.cpp"
  void generate_around(cell *c);
  namespace ts {
#line 522 "expansion.cpp"
    cell *verified_add(cell *c, int which, int bonus, const cellfunction& cf);
#line 528 "expansion.cpp"
    cell *verified_add_gen(cell *c, int which, int bonus, const cellfunction& cf);
#line 532 "expansion.cpp"
    cell *add(cell *c, int which, int bonus, const cellfunction& cf);
#line 538 "expansion.cpp"
    cell *left_of(cell *c, const cellfunction& cf);
#line 545 "expansion.cpp"
    cell *right_of(cell *c, const cellfunction& cf);
#line 552 "expansion.cpp"
    cell *child_number(cell *c, int id, const cellfunction& cf);
#line 558 "expansion.cpp"
    cell *get_child(cell *c, const cellfunction& cf, int v);
#line 564 "expansion.cpp"
    cell *right_child(cell *c, const cellfunction& cf);
#line 565 "expansion.cpp"
    cell *left_child(cell *c, const cellfunction& cf);
#line 568 "expansion.cpp"
    inline cell *left_parent(cell *c, const cellfunction& cf) { return verified_add(c, 1, 0, cf); }
    inline cell *right_parent(cell *c, const cellfunction& cf) { return verified_add(c, -1, 0, cf); }
    }
#line 574 "expansion.cpp"
  extern bool viewdists;
#line 575 "expansion.cpp"
  extern bool use_color_codes;
#line 576 "expansion.cpp"
  extern bool use_analyzer;
#line 577 "expansion.cpp"
  extern bool show_distance_lists;
#line 582 "expansion.cpp"
  extern map<int, color_t> expcolors;
#line 591 "expansion.cpp"
  extern bool dist_label_colored;
#line 592 "expansion.cpp"
  extern color_t dist_label_color;
#line 661 "expansion.cpp"
  void viewdist_configure_dialog();
#line 734 "expansion.cpp"
  extern bool auto_extend;
#line 831 "expansion.cpp"
  void enable_viewdists();
#line 990 "expansion.cpp"
  expansion_analyzer& get_expansion();
#line 995 "expansion.cpp"
  void set_sibling_limit();
#line 1045 "expansion.cpp"
  int hyperbolic_celldistance(cell *c1, cell *c2);

  // implemented in: fake.cpp

  namespace fake {
#line 9 "fake.cpp"
    extern ld scale;
#line 11 "fake.cpp"
    extern bool multiple;
#line 13 "fake.cpp"
    extern bool multiple_special_draw;
#line 14 "fake.cpp"
    extern bool recursive_draw;
#line 16 "fake.cpp"
    extern eGeometry underlying;
#line 17 "fake.cpp"
    extern geometry_information *underlying_cgip;
#line 18 "fake.cpp"
    extern hrmap *pmap;
#line 19 "fake.cpp"
    extern geometry_information *pcgip;
#line 20 "fake.cpp"
    extern eGeometry actual_geometry;
#line 22 "fake.cpp"
    extern int ordered_mode;
#line 24 "fake.cpp"
    bool in();
#line 26 "fake.cpp"
    void on_dim_change();
#line 29 "fake.cpp"
    bool split();
#line 31 "fake.cpp"
    bool available();
#line 412 "fake.cpp"
    hrmap* new_map();
#line 414 "fake.cpp"
    hrmap* get_umap();
#line 417 "fake.cpp"
    template<class T> auto in_underlying_geometry(const T& f) -> decltype(f()) {
    if(!fake::in()) return f();
    pcgip = cgip; 
    dynamicval<eGeometry> g(geometry, underlying);
    dynamicval<eGeometry> gag(actual_geometry, geometry);
    dynamicval<geometry_information*> gc(cgip, underlying_cgip);
    dynamicval<hrmap*> gpm(pmap, currentmap);
    dynamicval<hrmap*> gm(currentmap, get_umap());
    return f();
    }
    
    #define FPIU(x) hr::fake::in_underlying_geometry([&] { return (x); })
#line 431 "fake.cpp"
    hyperpoint befake(hyperpoint h);
#line 439 "fake.cpp"
    vector<hyperpoint> befake(const vector<hyperpoint>& v);
#line 445 "fake.cpp"
    vector<vector<hyperpoint>> befake(const vector<vector<hyperpoint>>& v);
#line 451 "fake.cpp"
    ld compute_around(bool setup);
#line 507 "fake.cpp"
    void generate();
#line 548 "fake.cpp"
    extern ld around;
#line 551 "fake.cpp"
    ld compute_euclidean();
#line 568 "fake.cpp"
    ld around_orig();
#line 584 "fake.cpp"
    geometryinfo1 geometry_of_curvature(ld curvature, int dim);
#line 594 "fake.cpp"
    void compute_scale();
#line 687 "fake.cpp"
    void change_around();
#line 723 "fake.cpp"
    void configure();
    }

  // implemented in: fieldpattern.cpp

  #if CAP_FIELD
  namespace fieldpattern {
#line 14 "fieldpattern.cpp"
    extern bool use_rule_fp;
#line 16 "fieldpattern.cpp"
    extern bool use_quotient_fp;
#line 23 "fieldpattern.cpp"
    #define currfp fieldpattern::getcurrfp()
    
    struct primeinfo {
    int p;
    int cells;
    bool squared;
    };  
    
    struct fgeomextra {
    eGeometry base;
    vector<primeinfo> primes;
    vector<int> dualval;
    int current_prime_id;
    fgeomextra(eGeometry b, int i) : base(b), current_prime_id(i) {}
    };
#line 40 "fieldpattern.cpp"
    bool isprime(int n);
#line 46 "fieldpattern.cpp"
    #define MWDIM (mproduct ? 3 : WDIM+1)
    
    struct matrix : array<array<int, MAXMDIM>, MAXMDIM> {
    bool operator == (const matrix& B) const {
    for(int i=0; i<MWDIM; i++) for(int j=0; j<MWDIM; j++)
    if(selfhr[i][j] != B[i][j]) return false;
    return true;
    }
    
    bool operator != (const matrix& B) const {
    for(int i=0; i<MWDIM; i++) for(int j=0; j<MWDIM; j++)
    if(selfhr[i][j] != B[i][j]) return true;
    return false;
    }
    
    bool operator < (const matrix& B) const {
    for(int i=0; i<MWDIM; i++) for(int j=0; j<MWDIM; j++)
    if(selfhr[i][j] != B[i][j]) return selfhr[i][j] < B[i][j];
    return false;
    }
    
    };
#line 70 "fieldpattern.cpp"
    int groupspin(int id, int d, int group);
#line 74 "fieldpattern.cpp"
    int btspin(int id, int d);
#line 79 "fieldpattern.cpp"
    
    static constexpr int ERR = -99;
    
    struct triplet_info {
    int i, j, size;
    };
    
    struct fpattern {
    
    unsigned force_hash;
    
    int Prime, wsquare, Field, dual;
    // we perform our computations in the field Z_Prime[w] where w^2 equals wsquare
    // (or simply Z_Prime for wsquare == 0)
    
    #define EASY
    // 'easy' assumes that all elements of the field actually used
    // are of form n or mw (not n+mw), and cs and ch are both of form n
    // by experimentation, such cs and ch always exist
    // many computations are much simpler under that assumption
    
    #ifndef EASY
    static int neasy;
    
    int m(int x) { x %= Prime; if(x<0) x+= Prime; return x; }
    #endif
    
    int sub(int a, int b) { 
    #ifdef EASY
    return (a + b * (Prime-1)) % Prime;
    #else
    return m(a%Prime-b%Prime) + Prime * m(a/Prime-b/Prime);
    #endif
    }
    
    int add(int a, int b) { 
    #ifdef EASY
    if(a == ERR || b == ERR || a*b<0) return ERR;
    return (a+b)%Prime;
    #else
    return m(a%Prime+b%Prime) + Prime * m(a/Prime+b/Prime);
    #endif
    }
    
    int mul(int tx, int ty) {
    #ifdef EASY
    return (tx*ty*((tx<0&&ty<0)?wsquare:1)) % Prime;
    #else
    if(tx >= Prime && tx % Prime) neasy++; 
    if(ty >= Prime && ty % Prime) neasy++; 
    int x[2], y[2], z[3];
    for(int i=0; i<3; i++) z[i] = 0;
    for(int i=0; i<2; i++) 
    x[i] = tx%Prime, tx /= Prime;
    for(int i=0; i<2; i++) 
    y[i] = ty%Prime, ty /= Prime;
    for(int i=0; i<2; i++)
    for(int j=0; j<2; j++)
    z[i+j] = (z[i+j] + x[i] * y[j]) % Prime;
    z[0] += z[2] * wsquare;
    
    return m(z[0]) + Prime * m(z[1]);
    #endif
    }
    
    int sqr(int x) { return mul(x,x); }
    
    int err;
    
    matrix mmul(const matrix& A, const matrix& B) {
    matrix res;
    for(int i=0; i<MWDIM; i++) for(int k=0; k<MWDIM; k++) {
    int t = 0;
    #ifdef EASY
    int tp = 0, tn = 0;
    for(int j=0; j<MWDIM; j++) {
    int val = mul(A[i][j], B[j][k]);
    if(val > 0) tp += val;
    else tn += val;
    }
    tp %= Prime; tn %= Prime;
    if(tp && tn) err++;
    t = tp + tn;
    #else
    for(int j=0; j<MWDIM; j++) t = add(t, mul(A[i][j], B[j][k]));
    #endif
    res[i][k] = t;
    }
    return res;
    }
    
    map<matrix, int> matcode;
    vector<matrix> matrices;
    
    vector<string> qpaths;
    
    vector<matrix> qcoords;
    
    // S7 in 2D, but e.g. 4 for a 3D cube
    int rotations;
    
    // S7 in 2D, but e.g. 24 for a 3D cube
    int local_group;
    
    // Id: Identity
    // R : rotate by 1/rotations of the full circle
    // P : make a step and turn backwards
    // X : in 3-dim, turn by 90 degrees
    
    matrix Id, R, P, X;
    
    matrix strtomatrix(string s) {
    matrix res = Id;
    matrix m = Id;
    for(int i=isize(s)-1; i>=0; i--)
    if(s[i] == 'R') res = mmul(R, res);
    else if (s[i] == 'P') res = mmul(P, res);
    else if (s[i] == 'x') { m[0][0] = -1; res = mmul(m, res); m[0][0] = +1; }
    else if (s[i] == 'y') { m[1][1] = -1; res = mmul(m, res); m[1][1] = +1; }
    else if (s[i] == 'z') { m[2][2] = -1; res = mmul(m, res); m[2][2] = +1; }
    return res;
    }
    
    void addas(const matrix& M, int i) {
    if(!matcode.count(M)) {
    matcode[M] = i;
    for(int j=0; j<isize(qcoords); j++)
    addas(mmul(M, qcoords[j]), i);
    }
    }
    
    void add(const matrix& M) {
    if(!matcode.count(M)) {
    int i = isize(matrices);
    matcode[M] = i, matrices.push_back(M);
    for(int j=0; j<isize(qcoords); j++)
    addas(mmul(M, qcoords[j]), i);
    if(WDIM == 3) add(mmul(X, M));
    add(mmul(R, M));
    }
    }
    
    #define MXF 1000000
    
    vector<int> connections;
    
    vector<int> inverses; // NYI in 3D
    
    // 2D only
    vector<int> rrf; // rrf[i] equals gmul(i, rotations-1)
    vector<int> rpf; // rpf[i] equals gmul(i, rotations)
    
    matrix mpow(matrix M, int N) {
    while((N&1) == 0) N >>= 1, M = mmul(M, M);
    matrix res = M;
    N >>= 1;
    while(N) {      
    M = mmul(M,M); if(N&1) res = mmul(res, M);
    N >>= 1;
    }
    return res;
    }
    
    int gmul(int a, int b) { return matcode[mmul(matrices[a], matrices[b])]; }
    int gpow(int a, int N) { return matcode[mpow(matrices[a], N)]; }
    
    int gorder(int a) {
    int b = a;
    int q = 1;
    while(b) b = gmul(b, a), q++;
    return q;
    }
    
    pair<int,bool> gmul(pair<int, bool> a, int b) { 
    return make_pair(gmul(a.first,b), a.second); 
    }
    
    int order(const matrix& M);
    
    string decodepath(int i) {
    string s;
    while(i) {
    if(i % S7) i--, s += 'R';
    else i = connections[i], s += 'P';
    }
    return s;
    }
    
    int orderstats();
    
    int cs, sn, ch, sh;
    
    int solve();
    
    void build();
    
    static constexpr int MAXDIST = 120;
    
    vector<char> disthep;
    vector<char> disthex;
    
    vector<char> distwall, distriver, distwall2, distriverleft, distriverright, distflower;
    int distflower0;
    
    vector<eItem> markers;
    
    int getdist(pair<int,bool> a, vector<char>& dists);
    int getdist(pair<int,bool> a, pair<int,bool> b);
    int dijkstra(vector<char>& dists, vector<int> indist[MAXDIST]);
    void analyze();
    
    int maxdist, otherpole, circrad, wallid, wallorder, riverid;
    
    bool easy(int i) {
    return i < Prime || !(i % Prime);
    }
    
    // 11 * 25
    // (1+z+z^3) * (1+z^3+z^4) ==
    // 1+z+z^7 == 1+z+z^2(z^5) == 1+z+z^2(1+z^2) = 1+z+z^2+z^4
    
    void init(int p) {
    Prime = p;
    if(solve()) {
    printf("error: could not solve the fieldpattern\n");
    exit(1);
    }
    build();
    analyze();
    }
    
    fpattern(int p) {
    force_hash = 0;
    #if CAP_THREAD && MAXMDIM >= 4
    dis = nullptr;
    #endif
    if(!p) return;
    init(p);
    }
    
    void findsubpath();
    
    vector<matrix> generate_isometries();
    
    bool check_order(matrix M, int req);
    
    unsigned compute_hash();
    
    void set_field(int p, int sq);
    
    unsigned hashv;
    
    #if MAXMDIM >= 4
    // general 4D
    vector<transmatrix> fullv;
    
    void add1(const matrix& M);
    void add1(const matrix& M, const transmatrix& Full);
    vector<matrix> generate_isometries3();
    int solve3();
    bool generate_all3();
    
    #if CAP_THREAD
    struct discovery *dis;
    #endif
    #endif
    
    vector<triplet_info> find_triplets();
    void generate_quotientgroup();
    };
    
    #if CAP_THREAD && MAXMDIM >= 4
    struct discovery {
    fpattern experiment;
    std::shared_ptr<std::thread> discoverer;
    std::mutex lock;
    std::condition_variable cv;
    bool is_suspended;
    bool stop_it;
    
    map<unsigned, tuple<int, int, matrix, matrix, matrix, int> > hashes_found;
    discovery() : experiment(0) { is_suspended = false; stop_it = false; experiment.dis = this; experiment.Prime = experiment.Field = experiment.wsquare = 0; }
    
    void activate();
    void suspend();
    void check_suspend();
    void schedule_destruction();
    void discovered();
    ~discovery();
    };
    #endif
    
    #if MAXMDIM >= 4
#line 603 "fieldpattern.cpp"
    extern purehookset hooks_solve3;
    #endif
#line 773 "fieldpattern.cpp"
    extern int triplet_id;
#line 1239 "fieldpattern.cpp"
    void info();
#line 1271 "fieldpattern.cpp"
    extern fpattern current_quotient_field;
#line 1272 "fieldpattern.cpp"
    extern fpattern fp_invalid;
#line 1273 "fieldpattern.cpp"
    extern bool quotient_field_changed;
#line 1278 "fieldpattern.cpp"
    struct fpattern& getcurrfp();
#line 1446 "fieldpattern.cpp"
    extern int subpathid;
#line 1447 "fieldpattern.cpp"
    extern int subpathorder;
#line 1451 "fieldpattern.cpp"
    extern vector<fgeomextra> fgeomextras;
#line 1465 "fieldpattern.cpp"
    extern int current_extra;
#line 1467 "fieldpattern.cpp"
    void nextPrime(fgeomextra& ex);
#line 1489 "fieldpattern.cpp"
    void nextPrimes(fgeomextra& ex);
#line 1494 "fieldpattern.cpp"
    void enableFieldChange();
#line 1509 "fieldpattern.cpp"
    extern eGeometry underlying_geometry;
#line 1511 "fieldpattern.cpp"
    void field_from_current();
    #if CAP_THREAD && MAXMDIM >= 4
#line 1527 "fieldpattern.cpp"
    extern map<string, discovery> discoveries;
    #endif
#line 1588 "fieldpattern.cpp"
    extern purehookset hooks_on_geometry_change;
#line 1590 "fieldpattern.cpp"
    int field_celldistance(cell *c1, cell *c2);
    }
#line 1603 "fieldpattern.cpp"
  int currfp_gmul(int a, int b);
#line 1604 "fieldpattern.cpp"
  int currfp_inverses(int i);
#line 1605 "fieldpattern.cpp"
  int currfp_distwall(int i);
#line 1606 "fieldpattern.cpp"
  int currfp_n();
#line 1607 "fieldpattern.cpp"
  int currfp_get_R();
#line 1608 "fieldpattern.cpp"
  int currfp_get_P();
#line 1609 "fieldpattern.cpp"
  int currfp_get_X();
#line 1611 "fieldpattern.cpp"
  void hread_fpattern(hstream& hs, fieldpattern::fpattern& fp);
#line 1623 "fieldpattern.cpp"
  void hwrite_fpattern(hstream& hs, fieldpattern::fpattern& fp);
  #endif

  // implemented in: flags.cpp

#line 13 "flags.cpp"
  const inline flagtype& classflag(eItem it) { return iinf[it].flags; }
  const inline flagtype& classflag(eWall w) { return winf[w].flags; }
  const inline flagtype& classflag(eMonster m) { return minf[m].flags; }
  const inline flagtype& classflag(eLand l) { return linf[l].flags; }
  
  #define ANYFLAGCHECK(name, cond, field, enum) inline bool name(enum w) { flagtype flag = classflag(w); return cond; } inline bool name(cell *c) { return name(c->field); }
  
  #define MONFLAGCHECK(name, cond) ANYFLAGCHECK(name, cond, monst, eMonster)
  #define WALLFLAGCHECK(name, cond) ANYFLAGCHECK(name, cond, wall, eWall)
  #define ITEMFLAGCHECK(name, cond) ANYFLAGCHECK(name, cond, item, eItem)
  #define LANDFLAGCHECK(name, cond) ANYFLAGCHECK(name, cond, land, eLand)
  
  WALLFLAGCHECK(isWatery, flag & WF_WATER)
  WALLFLAGCHECK(isBoat, flag & WF_BOAT)
  WALLFLAGCHECK(isChasmy, flag & WF_CHASM)
  WALLFLAGCHECK(isWateryOrBoat, (flag & WF_WATER) || w == waBoat)
  WALLFLAGCHECK(isNoFlight, flag & WF_NOFLIGHT)
  WALLFLAGCHECK(isFire, flag & WF_FIRE)
  WALLFLAGCHECK(isThumper, flag & WF_THUMPER)
  WALLFLAGCHECK(isActivable, flag & WF_ACTIVABLE)
  WALLFLAGCHECK(hasTimeout, flag & WF_TIMEOUT)
  WALLFLAGCHECK(isOnCIsland, flag & WF_CISLAND)
  WALLFLAGCHECK(cellHalfvine, flag & WF_HALFVINE)
  WALLFLAGCHECK(isAlch, flag & WF_ALCHEMY)
  WALLFLAGCHECK(isAlchAny, flag & WF_ALCHEMY)
  WALLFLAGCHECK(realred, flag & WF_RED)
  WALLFLAGCHECK(isWall, flag & WF_WALL)
  WALLFLAGCHECK(isNonblock, flag & WF_NONBLOCK)
  WALLFLAGCHECK(isPushable, flag & WF_PUSHABLE)
  WALLFLAGCHECK(conegraphtype, flag & WF_CONE)
  WALLFLAGCHECK(isStandardTree, flag & WF_STDTREE)
  WALLFLAGCHECK(isGrave, flag & WF_GRAVE)
  WALLFLAGCHECK(isReptile, flag & WF_REPTILE)
  WALLFLAGCHECK(useHeatColoring, flag & WF_HEATCOLOR)
  WALLFLAGCHECK(isThorny, flag & WF_THORNY)
  
  LANDFLAGCHECK(generateAll, flag & LF_GENERATE_ALL)
  LANDFLAGCHECK(isIcyLand, flag & LF_ICY)
  LANDFLAGCHECK(isGravityLand, flag & LF_GRAVITY)
  LANDFLAGCHECK(isEquidLand, flag & LF_EQUI)
  LANDFLAGCHECK(isWarpedType, flag & LF_WARPED)
  LANDFLAGCHECK(isCyclic, flag & LF_CYCLIC)
  LANDFLAGCHECK(isTechnicalLand, flag & LF_TECHNICAL)
  LANDFLAGCHECK(is_mirrorland, flag & LF_MIRROR)
  LANDFLAGCHECK(isSealand, flag & LF_SEA)
  LANDFLAGCHECK(isCoastal, flag & LF_COASTAL)
  LANDFLAGCHECK(isPureSealand, flag & LF_PURESEA)
  LANDFLAGCHECK(isElemental, flag & LF_ELEMENTAL)
  LANDFLAGCHECK(isHaunted, flag & LF_HAUNTED)
  LANDFLAGCHECK(isTrollLand, flag & LF_TROLL)
  LANDFLAGCHECK(inmirror, flag & LF_INMIRROR)
  LANDFLAGCHECK(inmirrororwall, flag & LF_INMIRRORORWALL)
  LANDFLAGCHECK(isElectricLand, flag & LF_ELECTRIC)
  
  MONFLAGCHECK(isGhostable, !(flag & CF_NOGHOST))
  MONFLAGCHECK(isRaider, flag & CF_RAIDER)
  MONFLAGCHECK(isMimic, flag & CF_MIMIC)
  MONFLAGCHECK(isPrincess, flag & CF_PRINCESS)
  MONFLAGCHECK(isGolemOrKnight, flag & CF_GOK)
  MONFLAGCHECK(isNonliving, flag & CF_NONLIVING)
  MONFLAGCHECK(isMetalBeast, flag & CF_METAL)
  MONFLAGCHECK(isStunnable, flag & CF_STUNNABLE)
  MONFLAGCHECK(hasHitpoints, flag & CF_HP)
  MONFLAGCHECK(isMountable, flag & CF_MOUNTABLE)
  MONFLAGCHECK(isFriendlyType, flag & CF_FRIENDLY)
  MONFLAGCHECK(isFriendlyOrPlayer, flag & (CF_FRIENDLY | CF_PLAYER))
  MONFLAGCHECK(isBug, flag & CF_BUG)
  MONFLAGCHECK(isIvy, flag & CF_IVY)
  MONFLAGCHECK(isMonsterPart, flag & CF_PART)
  MONFLAGCHECK(isMutantIvy, flag & CF_MUTANTIVY)
  MONFLAGCHECK(isAnyIvy, flag & CF_ANYIVY)
  MONFLAGCHECK(isBulletType, flag & CF_BULLET)
  MONFLAGCHECK(isDemon, flag & CF_DEMON)
  MONFLAGCHECK(isWorm, flag & CF_WORM)
  MONFLAGCHECK(isWitch, flag & CF_WITCH)
  MONFLAGCHECK(isAngryBird, (flag & CF_BIRD) && !(flag & CF_FRIENDLY))
  MONFLAGCHECK(isBird, flag & CF_BIRD)
  MONFLAGCHECK(slowMover, flag & CF_SLOWMOVER)
  MONFLAGCHECK(isMagneticPole, flag & CF_MAGNETIC)
  MONFLAGCHECK(isSwitch, flag & CF_SWITCH)
  MONFLAGCHECK(isGhost, flag & CF_GHOST)
  MONFLAGCHECK(isShark, flag & CF_SHARK)
  MONFLAGCHECK(isSlimeMover, flag & CF_SLIME)
  MONFLAGCHECK(isDragon, flag & CF_DRAGON)
  MONFLAGCHECK(isKraken, flag & CF_KRAKEN)
  MONFLAGCHECK(isBlowableMonster, !(flag & CF_NOBLOW))
  MONFLAGCHECK(isMultitile, flag & CF_MULTITILE)
  MONFLAGCHECK(isLeader, flag & CF_LEADER)
  MONFLAGCHECK(isFlyingType, flag & CF_FLYING)
  MONFLAGCHECK(attackThruVine, flag & CF_ATTACK_THRU_VINE)
  MONFLAGCHECK(attackNonAdjacent, flag & CF_ATTACK_NONADJACENT)
  MONFLAGCHECK(noHighlight, flag & CF_NOHIGHLIGHT)
  MONFLAGCHECK(isInactiveEnemyType, flag & CF_INACTIVE)
  MONFLAGCHECK(isUnarmed, flag & CF_UNARMED)
  MONFLAGCHECK(ignoresPlatesType, flag & CF_IGNORE_PLATE)
  MONFLAGCHECK(isBull, flag & CF_BULL)
  MONFLAGCHECK(isTroll, flag & CF_TROLL)
  MONFLAGCHECK(ignoresSmellType, flag & CF_IGNORE_SMELL)
  MONFLAGCHECK(isRatling, flag & CF_RATLING)
  MONFLAGCHECK(isGhostMover, flag & CF_GHOSTMOVER)
  MONFLAGCHECK(isPowerMonster, flag & CF_POWER)
  MONFLAGCHECK(hasFacing, flag & CF_FACING)
  
  ITEMFLAGCHECK(isElementalShard, flag & IF_SHARD)
  ITEMFLAGCHECK(itemBurns, !(flag & IF_FIREPROOF))
  ITEMFLAGCHECK(isProtectionOrb, flag & IF_PROTECTION)
  ITEMFLAGCHECK(isEmpathyOrb, flag & IF_EMPATHY)
  ITEMFLAGCHECK(isRangedOrb, flag & IF_RANGED)
  ITEMFLAGCHECK(isRevivalOrb, flag & IF_REVIVAL)
#line 128 "flags.cpp"
  bool boatStrandable(cell *c);
#line 134 "flags.cpp"
  bool isFireOrMagma(cell *w);
#line 138 "flags.cpp"
  int mirrorcolor(bool mirrored);
#line 142 "flags.cpp"
  bool isMounted(cell *c);
#line 154 "flags.cpp"
  int itemclass(eItem it);
#line 156 "flags.cpp"
  bool isFriendly(eMonster m);
#line 158 "flags.cpp"
  bool isFriendly(cell *c);
#line 162 "flags.cpp"
  eThreatLevel get_threat_level(cell *c);
#line 170 "flags.cpp"
  bool isFriendlyOrBug(cell *c);
#line 176 "flags.cpp"
  bool cellUnstable(cell *c);
#line 180 "flags.cpp"
  bool cellUnstableOrChasm(cell *c);
#line 186 "flags.cpp"
  eMonster elementalOf(eLand l);
#line 194 "flags.cpp"
  eItem localshardof(eLand l);
#line 198 "flags.cpp"
  int snakelevel(cell *c);
#line 207 "flags.cpp"
  eSlimegroup slimegroup(cell *c);
#line 211 "flags.cpp"
  bool isFlying(eMonster m);
#line 215 "flags.cpp"
  bool survivesChasm(eMonster m);
#line 219 "flags.cpp"
  bool ignoresPlates(eMonster m);
#line 223 "flags.cpp"
  bool isInactiveEnemy(cell *w, eMonster forwho);
#line 235 "flags.cpp"
  bool isActiveEnemy(cell *w, eMonster forwho);
#line 245 "flags.cpp"
  bool isArmedEnemy(cell *w, eMonster forwho);
#line 249 "flags.cpp"
  bool eternalFire(cell *c);
#line 254 "flags.cpp"
  bool haveRangedOrb();
#line 264 "flags.cpp"
  bool isFriendlyGhost(eMonster m);
#line 268 "flags.cpp"
  bool isGhostAether(eMonster m);
#line 272 "flags.cpp"
  bool survivesWater(eMonster m);
#line 285 "flags.cpp"
  bool survivesPoison(eMonster m, eWall p);
#line 292 "flags.cpp"
  bool isPermanentFlying(eMonster m);
#line 296 "flags.cpp"
  bool isLuckyLand(eLand l);
#line 300 "flags.cpp"
  bool survivesFire(eMonster m);
#line 308 "flags.cpp"
  bool survivesWall(eMonster m);
#line 312 "flags.cpp"
  bool survivesThorns(eMonster m);
#line 316 "flags.cpp"
  bool survivesFall(eMonster m);
#line 320 "flags.cpp"
  bool checkOrb(eMonster m1, eItem orb);
#line 326 "flags.cpp"
  bool checkOrb2(eMonster m1, eItem orb);
#line 332 "flags.cpp"
  bool ignoresSmell(eMonster m);
#line 336 "flags.cpp"
  bool highwall(cell *c);
#line 347 "flags.cpp"
  int chasmgraph(cell *c);
#line 357 "flags.cpp"
  bool conegraph(cell *c);
#line 362 "flags.cpp"
  eItem frog_power(eMonster m);
#line 369 "flags.cpp"
  bool hornStuns(cell *c);
#line 380 "flags.cpp"
  bool do_not_touch_this_wall(cell *c);
#line 384 "flags.cpp"
  bool is_paired(eMonster m);
#line 388 "flags.cpp"
  bool isDie(eMonster m);
#line 392 "flags.cpp"
  bool isDie(eWall w);

  // implemented in: game.cpp

#line 19 "game.cpp"
  extern std::mt19937 hrngen;
#line 22 "game.cpp"
  void shrand(int i);
#line 27 "game.cpp"
  int hrandpos();
#line 35 "game.cpp"
  int hrand(int i);
#line 45 "game.cpp"
  template<class T, class... U> T pick(T x, U... u) { std::initializer_list<T> i = {x,u...}; return *(i.begin() + hrand(1+sizeof...(u))); }
  template<class T> void hrandom_shuffle(T* x, int n) { for(int k=1; k<n; k++) swap(x[k], x[hrand(k+1)]); }
  template<class T> void hrandom_shuffle(T& container) { hrandom_shuffle(container.data(), isize(container)); }
  template<class U> auto hrand_elt(U& container) -> decltype(container[0]) { return container[hrand(isize(container))]; }
  template<class T, class U> T hrand_elt(U& container, T default_value) { 
  if(container.empty()) return default_value; 
  return container[hrand(isize(container))]; 
  }
#line 55 "game.cpp"
  vector<int> hrandom_permutation(int qty);
#line 65 "game.cpp"
  ld hrandf();
#line 71 "game.cpp"
  int hrandstate();
#line 76 "game.cpp"
  extern int lastsafety;
#line 78 "game.cpp"
  extern bool usedSafety;
#line 79 "game.cpp"
  extern eLand safetyland;
#line 80 "game.cpp"
  extern int safetyseed;
#line 82 "game.cpp"
  extern bool childbug;
#line 85 "game.cpp"
  bool isChild(cell *w, cell *killed);
#line 106 "game.cpp"
  eMonster active_switch();
#line 110 "game.cpp"
  extern vector<cell*> crush_now, crush_next;
#line 112 "game.cpp"
  int getDistLimit();
#line 114 "game.cpp"
  extern void activateFlashFrom(cell *cf, eMonster who, flagtype flags);
#line 116 "game.cpp"
  bool saved_tortoise_on(cell *c);
#line 122 "game.cpp"
  bool normal_gravity_at(cell *c);
#line 126 "game.cpp"
  int countMyGolems(eMonster m);
#line 135 "game.cpp"
  int savePrincesses();
#line 144 "game.cpp"
  int countMyGolemsHP(eMonster m);
#line 153 "game.cpp"
  void restoreGolems(int qty, eMonster m, int hp IS(0));
#line 168 "game.cpp"
  extern cellwalker recallCell;
#line 169 "game.cpp"
  extern display_data recallDisplay;
#line 171 "game.cpp"
  bool activateRecall();
#line 214 "game.cpp"
  void saveRecall(cellwalker cw2);
#line 222 "game.cpp"
  void teleportToLand(eLand l, bool make_it_safe);
#line 260 "game.cpp"
  void activateSafety(eLand l);
#line 275 "game.cpp"
  void placeGolem(cell *on, cell *moveto, eMonster m);
#line 307 "game.cpp"
  bool multiRevival(cell *on, cell *moveto);
#line 329 "game.cpp"
  extern eMonster passive_switch;
#line 331 "game.cpp"
  void checkSwitch();
#line 335 "game.cpp"
  void pushThumper(const movei& mi);
#line 427 "game.cpp"
  bool canPushThumperOn(movei mi, cell *player);
#line 446 "game.cpp"
  void activateActiv(cell *c, bool msg);
#line 466 "game.cpp"
  void fixWormBug(cell *c);
#line 474 "game.cpp"
  bool isWormhead(eMonster m);
#line 480 "game.cpp"
  cell *worm_tohead(cell *c);
#line 487 "game.cpp"
  cell *wormhead(cell *c);
#line 503 "game.cpp"
  bool sameMonster(cell *c1, cell *c2);
#line 513 "game.cpp"
  eMonster haveMount();
#line 521 "game.cpp"
  eMonster otherpole(eMonster m);

  // implemented in: geom-exp.cpp

#line 141 "geom-exp.cpp"
  extern string bitruncnames[5];
#line 152 "geom-exp.cpp"
  extern bool showquotients;
#line 156 "geom-exp.cpp"
  void gen_landvisited();
#line 179 "geom-exp.cpp"
  void ge_land_selection();
#line 243 "geom-exp.cpp"
  void activate_ge_land_selection();
#line 250 "geom-exp.cpp"
  struct geometry_filter {
  string name;
  int hotkey;
  /** test if the current geometry matches the filter */
  function<bool()> test; 
  };
#line 258 "geom-exp.cpp"
  extern geometry_filter *current_filter;
#line 262 "geom-exp.cpp"
  extern geometry_filter gf_hyperbolic;
#line 263 "geom-exp.cpp"
  extern geometry_filter gf_spherical;
#line 264 "geom-exp.cpp"
  extern geometry_filter gf_euclidean;
#line 265 "geom-exp.cpp"
  extern geometry_filter gf_other;
#line 266 "geom-exp.cpp"
  extern geometry_filter gf_regular_2d;
#line 269 "geom-exp.cpp"
  extern geometry_filter gf_regular_3d;
#line 273 "geom-exp.cpp"
  extern geometry_filter gf_quotient;
#line 276 "geom-exp.cpp"
  extern geometry_filter gf_tes_file;
#line 277 "geom-exp.cpp"
  extern geometry_filter gf_no_filters;
#line 279 "geom-exp.cpp"
  extern vector<geometry_filter*> available_filters;
#line 427 "geom-exp.cpp"
  string current_proj_name();
#line 451 "geom-exp.cpp"
  string dim_name();
  #if CAP_THREAD && MAXMDIM >= 4
#line 456 "geom-exp.cpp"
  void showQuotientConfig3();
  #endif
#line 516 "geom-exp.cpp"
  string geometry_name(eGeometryClass gc);
#line 550 "geom-exp.cpp"
  string geometry_name();
#line 563 "geom-exp.cpp"
  void select_quotient_screen();
#line 610 "geom-exp.cpp"
  void select_quotient();
#line 646 "geom-exp.cpp"
  string full_geometry_name();
#line 678 "geom-exp.cpp"
  void menuitem_change_variation(char key);
#line 683 "geom-exp.cpp"
  void menuitem_change_geometry(char key);
#line 688 "geom-exp.cpp"
  void menuitem_projection(char key);
#line 693 "geom-exp.cpp"
  void menuitem_binary_width(char key);
#line 708 "geom-exp.cpp"
  void menuitem_nilwidth(char key);
#line 717 "geom-exp.cpp"
  void edit_stretch();
#line 730 "geom-exp.cpp"
  struct geometry_data {
  int ts, tv, nom, denom, euler, demigenus, worldsize;
  int area;
  string spf;
  string size_str;
  };
#line 738 "geom-exp.cpp"
  geometry_data compute_geometry_data();
#line 947 "geom-exp.cpp"
  void add_size_action();
#line 954 "geom-exp.cpp"
  void showEuclideanMenu();
#line 1176 "geom-exp.cpp"
  void runGeometryExperiments();
  #if CAP_COMMANDLINE
#line 1184 "geom-exp.cpp"
  eGeometry readGeo(const string& ss);
#line 1196 "geom-exp.cpp"
  void field_quotient_3d(int p, unsigned hash);
#line 1209 "geom-exp.cpp"
  void field_quotient_2d(int group, int id, int triplet);
  #endif

  // implemented in: geometry2.cpp

#line 13 "geometry2.cpp"
  void fixelliptic(transmatrix& at);
#line 20 "geometry2.cpp"
  void fixelliptic(hyperpoint& h);
#line 26 "geometry2.cpp"
  transmatrix relative_matrix_recursive(heptagon *h2, heptagon *h1);
#line 90 "geometry2.cpp"
  transmatrix calc_relative_matrix(cell *c2, cell *c1, const hyperpoint& hint);
#line 114 "geometry2.cpp"
  transmatrix relative_matrix_via_masters(cell *c2, cell *c1, const hyperpoint& hint);
#line 203 "geometry2.cpp"
  shiftmatrix &ggmatrix(cell *c);
#line 213 "geometry2.cpp"
  struct horo_distance {
  ld a, b;
  
  void become(hyperpoint h1);
  horo_distance(hyperpoint h) { become(h); }
  horo_distance(shiftpoint h1, const shiftmatrix& T);
  bool operator < (const horo_distance z) const;
  friend void print(hstream& hs, horo_distance x) { print(hs, "[", x.a, ":", x.b, "]"); }
  };
#line 403 "geometry2.cpp"
  void virtualRebase(cell*& base, transmatrix& at);
#line 407 "geometry2.cpp"
  void virtualRebase(cell*& base, hyperpoint& h);
#line 450 "geometry2.cpp"
  bool no_easy_spin();
#line 454 "geometry2.cpp"
  extern bool never_invert;
#line 456 "geometry2.cpp"
  bool dont_inverse();
#line 476 "geometry2.cpp"
  transmatrix ddspin(cell *c, int d, ld bonus IS(0));
#line 477 "geometry2.cpp"
  transmatrix iddspin(cell *c, int d, ld bonus IS(0));
#line 478 "geometry2.cpp"
  ld cellgfxdist(cell *c, int d);
#line 480 "geometry2.cpp"
  transmatrix ddspin_side(cell *c, int d, ld bonus IS(0));
#line 493 "geometry2.cpp"
  transmatrix iddspin_side(cell *c, int d, ld bonus IS(0));
#line 562 "geometry2.cpp"
  double randd();
#line 564 "geometry2.cpp"
  hyperpoint randomPointIn(int t);
#line 584 "geometry2.cpp"
  hyperpoint get_corner_position(cell *c, int cid, ld cf IS(3));
#line 613 "geometry2.cpp"
  extern bool approx_nearcorner;
#line 617 "geometry2.cpp"
  hyperpoint nearcorner(cell *c, int i);
#line 714 "geometry2.cpp"
  hyperpoint farcorner(cell *c, int i, int which);
#line 782 "geometry2.cpp"
  hyperpoint midcorner(cell *c, int i, ld v);
#line 788 "geometry2.cpp"
  hyperpoint get_warp_corner(cell *c, int cid);
#line 799 "geometry2.cpp"
  extern map<cell*, map<cell*, vector<transmatrix>>> brm_structure;
#line 801 "geometry2.cpp"
  void generate_brm(cell *c1);
#line 857 "geometry2.cpp"
  const transmatrix& brm_get(cell *c1, hyperpoint h1, cell *c2, hyperpoint h2);
#line 873 "geometry2.cpp"
  bool exhaustive_distance_appropriate();
#line 888 "geometry2.cpp"
  struct pathgen {
  cellwalker start;
  cellwalker last;
  vector<cell*> path;
  bignum full_id_0;
  int last_id;
  };
#line 897 "geometry2.cpp"
  pathgen generate_random_path_randomdir(cellwalker start, int length, bool for_yendor);
#line 902 "geometry2.cpp"
  pathgen generate_random_path(cellwalker start, int length, bool for_yendor, bool randomdir);

  // implemented in: glhr.cpp

#line 14 "glhr.cpp"
  extern bool detailed_shader;
  namespace glhr {
#line 17 "glhr.cpp"
    glvertex pointtogl(const hyperpoint& t);
#line 24 "glhr.cpp"
    hyperpoint gltopoint(const glvertex& t);
    #if CAP_SHADER
#line 32 "glhr.cpp"
    extern bool noshaders;
    #endif
    #if !CAP_SHADER
#line 35 "glhr.cpp"
    extern bool noshaders;
    #endif
#line 39 "glhr.cpp"
    inline glvertex makevertex(GLfloat x, GLfloat y, GLfloat z) {
    #if SHDIM == 3
    return make_array(x, y, z);
    #else
    return make_array<GLfloat>(x, y, z, 1);
    #endif
    }
    }
  #if CAP_GL
#line 57 "glhr.cpp"
  void glError(const char* GLcall, const char* file, const int line);
#line 65 "glhr.cpp"
  struct glwrap {
  const char* msg;
  int line;
  void act(const char *when);
  glwrap(const char *m, int l) : msg(m), line(l) { act("before"); }
  ~glwrap() { act("after"); }
  };
  #define GLWRAP glwrap w##__line(__FILE__, __LINE__)
#line 83 "glhr.cpp"
  #if CAP_SHADER && CAP_NOSHADER
  #define WITHSHADER(x, y) if(glhr::noshaders) y else x
  #else
  #if CAP_NOSHADER
  #define WITHSHADER(x, y) if(1) y
  #else
  #define WITHSHADER(x, y) if(1) x
  #endif
  #endif
  namespace glhr {
#line 96 "glhr.cpp"
    string to_glsl(ld x);
#line 103 "glhr.cpp"
    struct glmatrix {
    GLfloat a[4][4];
    GLfloat* operator[] (int i) { return a[i]; }
    const GLfloat* operator[] (int i) const { return a[i]; }
    GLfloat* as_array() { return a[0]; }
    const GLfloat* as_array() const { return a[0]; }
    array<float, 16>& as_stdarray() { return *(array<float, 16>*)this; }
    const array<float, 16>& as_stdarray() const { return *(array<float, 16>*)this; }
    };
    
    struct colored_vertex {
    glvertex coords;
    glvec4 color;
    colored_vertex() {}
    colored_vertex(GLfloat x, GLfloat y, GLfloat r, GLfloat g, GLfloat b) {
    coords[0] = x;
    coords[1] = y;
    coords[2] = 0;
    coords[3] = 1;
    color[0] = r;
    color[1] = g;
    color[2] = b;
    color[3] = 1;
    }
    void set_color(color_t col) {
    for(int i=0; i<4; i++)
    color[i] = part(col, 3-i) / 255.0;
    }
    colored_vertex(hyperpoint h, color_t col) {
    coords = pointtogl(h);
    set_color(col);
    }
    };
    
    struct textured_vertex {
    glvertex coords;
    /* texture uses the 'z' for shading with POLY_SHADE_TEXTURE */
    glvec3 texture;
    };
    
    struct ct_vertex {
    glvertex coords;
    glvec4 color;
    glvec2 texture;
    ct_vertex() {}
    ct_vertex(const hyperpoint& h, ld x1, ld y1, ld col) {
    coords = pointtogl(h);
    texture[0] = x1;
    texture[1] = y1;
    color[0] = color[1] = color[2] = col;
    color[3] = 1;
    }
    };  
    
#line 159 "glhr.cpp"
    extern bool glew;
#line 165 "glhr.cpp"
    typedef const void *constvoidptr;
#line 168 "glhr.cpp"
    extern constvoidptr current_vertices, buffered_vertices;
#line 169 "glhr.cpp"
    extern ld current_linewidth;
#line 182 "glhr.cpp"
    glmatrix operator * (glmatrix m1, glmatrix m2);
#line 193 "glhr.cpp"
    extern glmatrix id;
#line 195 "glhr.cpp"
    glmatrix scale(ld x, ld y, ld z);
#line 206 "glhr.cpp"
    glmatrix tmtogl(const transmatrix& T);
#line 214 "glhr.cpp"
    transmatrix gltotm(const glmatrix& T);
#line 222 "glhr.cpp"
    glmatrix tmtogl_transpose(const transmatrix& T);
#line 230 "glhr.cpp"
    glmatrix tmtogl_transpose3(const transmatrix& T);
#line 242 "glhr.cpp"
    glmatrix ortho(ld x, ld y, ld z);
#line 246 "glhr.cpp"
    glmatrix& as_glmatrix(GLfloat o[16]);
#line 251 "glhr.cpp"
    extern ld vnear_default;
#line 252 "glhr.cpp"
    extern ld vfar_default;
#line 254 "glhr.cpp"
    glmatrix frustum(ld x, ld y, ld vnear IS(vnear_default), ld vfar IS(vfar_default));
#line 263 "glhr.cpp"
    glmatrix translate(ld x, ld y, ld z);
#line 278 "glhr.cpp"
    extern glmatrix projection;
#line 280 "glhr.cpp"
    void new_projection();
#line 292 "glhr.cpp"
    void projection_multiply(const glmatrix& m);
#line 301 "glhr.cpp"
    extern void init();
#line 304 "glhr.cpp"
    struct GLprogram {
    GLuint _program;
    GLuint vertShader, fragShader;
    
    GLint uFog, uFogColor, uColor, tTexture, tInvExpTable, tAirMap, uMV, uProjection, uAlpha, uFogBase, uPP;
    GLint uPRECX, uPRECY, uPRECZ, uIndexSL, uIterations, uLevelLines, uSV, uRadarTransform;
    GLint uRotSin, uRotCos, uRotNil;
    GLint uDepthScaling, uCamera, uDepth;
    
    flagtype shader_flags;
    
    string _vsh, _fsh;
    
    GLprogram(string vsh, string fsh);
    
    ~GLprogram();
    };
#line 323 "glhr.cpp"
    extern shared_ptr<GLprogram> current_glprogram;
#line 325 "glhr.cpp"
    extern bool debug_gl;
#line 327 "glhr.cpp"
    int compileShader(int type, const string& s);
#line 469 "glhr.cpp"
    void set_index_sl(ld x);
#line 473 "glhr.cpp"
    void set_sv(ld x);
#line 477 "glhr.cpp"
    void set_sl_iterations(int steps);
#line 481 "glhr.cpp"
    void set_solv_prec(int x, int y, int z);
#line 488 "glhr.cpp"
    extern glmatrix current_matrix, current_modelview, current_projection;
#line 501 "glhr.cpp"
    extern glmatrix eyeshift;
#line 502 "glhr.cpp"
    extern bool using_eyeshift;
#line 504 "glhr.cpp"
    void set_modelview(const glmatrix& modelview);
#line 536 "glhr.cpp"
    void id_modelview();
#line 547 "glhr.cpp"
    array<GLfloat, 4> acolor(color_t color, ld scale IS(1));
#line 555 "glhr.cpp"
    void color2(color_t color, ld scale IS(1));
#line 567 "glhr.cpp"
    void colorClear(color_t color);
#line 571 "glhr.cpp"
    void full_enable(shared_ptr<GLprogram> p);
#line 677 "glhr.cpp"
    void fog_max(ld fogmax, color_t fogcolor);
#line 692 "glhr.cpp"
    void set_fogbase(ld _fogbase);
#line 701 "glhr.cpp"
    void set_ualpha(ld alpha);
    #if CAP_VERTEXBUFFER
#line 755 "glhr.cpp"
    void bindbuffer_vertex(vector<glvertex>& v);
    #endif
#line 761 "glhr.cpp"
    void vertices(const vector<glvertex>& v, int vshift IS(0));
#line 782 "glhr.cpp"
    void vertices_texture(const vector<glvertex>& v, const vector<glvertex>& t, int vshift IS(0), int tshift IS(0));
#line 801 "glhr.cpp"
    void vertices_texture_color(const vector<glvertex>& v, const vector<glvertex>& t, const vector<glvertex>& c, int vshift IS(0), int tshift IS(0));
#line 827 "glhr.cpp"
    void prepare(vector<colored_vertex>& v);
#line 845 "glhr.cpp"
    void prepare(vector<textured_vertex>& v);
#line 864 "glhr.cpp"
    void prepare(vector<ct_vertex>& v);
#line 885 "glhr.cpp"
    void store_in_buffer(vector<glvertex>& v);
#line 900 "glhr.cpp"
    void set_depthtest(bool b);
#line 909 "glhr.cpp"
    void set_depthwrite(bool b);
#line 917 "glhr.cpp"
    void set_linewidth(ld lw);
#line 924 "glhr.cpp"
    void switch_to_text(const vector<glvertex>& v, const vector<glvertex>& t);
#line 931 "glhr.cpp"
    void be_nontextured();
#line 932 "glhr.cpp"
    void be_textured();
#line 933 "glhr.cpp"
    void be_color_textured();
    }
#line 937 "glhr.cpp"
  extern vector<glhr::textured_vertex> text_vertices;
#line 939 "glhr.cpp"
  void texture_vertices(GLfloat *f, int qty, int stride IS(2));
#line 946 "glhr.cpp"
  void oldvertices(GLfloat *f, int qty);
  #endif

  // implemented in: help.cpp

#line 11 "help.cpp"
  extern string help;
#line 13 "help.cpp"
  extern function<void()> help_delegate;
#line 16 "help.cpp"
  struct help_extension {
  int key;
  string text;
  string subtext;
  color_t color;
  reaction_t action;
  help_extension() { color = forecolor; }
  help_extension(char k, string t, reaction_t a) : key(k), text(t), action(a) { color = forecolor; }
  };
#line 27 "help.cpp"
  extern vector<help_extension> help_extensions;
#line 88 "help.cpp"
  void buildHelpText();
#line 220 "help.cpp"
  string standard_help();
#line 225 "help.cpp"
  void buildCredits();
#line 274 "help.cpp"
  string helptitle(string s, color_t col);
#line 346 "help.cpp"
  string generateHelpForItem(eItem it);
#line 615 "help.cpp"
  string generateHelpForWall(eWall w);
#line 634 "help.cpp"
  string generateHelpForMonster(eMonster m);
#line 757 "help.cpp"
  string generateHelpForLand(eLand l);
#line 851 "help.cpp"
  extern bool instat;
#line 859 "help.cpp"
  string bygen(reaction_t h);
#line 878 "help.cpp"
  void appendHelp(string s);
#line 889 "help.cpp"
  extern hookset<void(cell*)> hooks_mouseover;
#line 898 "help.cpp"
  void describeMouseover();
#line 1133 "help.cpp"
  void addHelpWithTitle();
#line 1146 "help.cpp"
  void showHelp();
#line 1194 "help.cpp"
  extern hookset<bool()> hooks_default_help;
#line 1196 "help.cpp"
  void gotoHelp(const string& h);
#line 1225 "help.cpp"
  void subhelp(const string& h);
#line 1238 "help.cpp"
  void gotoHelpFor(eLand l);

  // implemented in: heptagon.cpp

#line 27 "heptagon.cpp"
  hstate transition(hstate s, int dir);
#line 73 "heptagon.cpp"
  heptagon *buildHeptagon1(heptagon *h, heptagon *parent, int d, hstate s, int pard IS(0));
#line 81 "heptagon.cpp"
  heptagon *init_heptagon(int type);
#line 258 "heptagon.cpp"
  extern hookset<void(heptagon*, int)> hooks_createStep;

  // implemented in: history.cpp

  namespace history {
#line 192 "history.cpp"
    void progress_screen();
#line 197 "history.cpp"
    extern int progress_each;
#line 199 "history.cpp"
    void progress(string str);
#line 211 "history.cpp"
    extern bool on;
#line 212 "history.cpp"
    extern vector<shmup::monster*> v;
#line 214 "history.cpp"
    extern double phase;
#line 216 "history.cpp"
    extern vector<pair<cell*, eMonster> > killhistory;
#line 217 "history.cpp"
    extern vector<pair<cell*, eItem> > findhistory;
#line 218 "history.cpp"
    extern vector<cell*> movehistory;
#line 220 "history.cpp"
    extern bool includeHistory;
#line 221 "history.cpp"
    extern ld lvspeed;
#line 222 "history.cpp"
    extern int bandhalf;
#line 223 "history.cpp"
    extern int bandsegment;
#line 225 "history.cpp"
    extern int saved_ends;
#line 227 "history.cpp"
    extern cell* first_center_at;
#line 228 "history.cpp"
    extern transmatrix first_center_view;
#line 230 "history.cpp"
    void save_end();
#line 260 "history.cpp"
    extern bool autoband;
#line 261 "history.cpp"
    extern bool autobandhistory;
#line 262 "history.cpp"
    extern bool dospiral;
#line 264 "history.cpp"
    extern ld extra_line_steps;
#line 266 "history.cpp"
    extern vector<cell*> path_for_lineanimation;
#line 268 "history.cpp"
    void clear();
#line 275 "history.cpp"
    void smoothen_line();
#line 306 "history.cpp"
    void create(cell *start, cell *target, transmatrix last);
#line 339 "history.cpp"
    void create_playerpath();
#line 343 "history.cpp"
    void create_recenter_to_view(bool precise);
#line 348 "history.cpp"
    void movetophase();
#line 392 "history.cpp"
    void apply();
    #if CAP_SDL
#line 437 "history.cpp"
    void createImage(const string& name_format, bool dospiral);
#line 564 "history.cpp"
    void open_filedialog_to_create_image(bool ds);
    #endif
#line 574 "history.cpp"
    bool band_renderable_now();
#line 578 "history.cpp"
    void history_menu();
#line 691 "history.cpp"
    extern set<cell*> inmovehistory, inkillhistory, infindhistory;
#line 693 "history.cpp"
    void restore();
#line 715 "history.cpp"
    void restoreBack();
#line 730 "history.cpp"
    void renderAutoband();
    }

  // implemented in: hud.cpp

#line 11 "hud.cpp"
  extern purehookset hooks_stats;
#line 13 "hud.cpp"
  int monsterclass(eMonster m);
#line 19 "hud.cpp"
  int glyphclass(int i);
#line 30 "hud.cpp"
  int subclass(int i);
#line 52 "hud.cpp"
  enum eGlyphsortorder {
  gsoFirstTop, gsoFirstBottom,
  gsoLastTop, gsoLastBottom,
  gsoLand, gsoValue,
  gsoMAX
  };
#line 60 "hud.cpp"
  extern eGlyphsortorder glyphsortorder;
#line 103 "hud.cpp"
  void preparesort();
#line 185 "hud.cpp"
  bool graphglyph(bool isMonster);
#line 372 "hud.cpp"
  extern bool nohud, nomenukey, nomsg;
#line 374 "hud.cpp"
  extern hookset<bool()> hooks_prestats;
#line 417 "hud.cpp"
  extern bool nofps;
#line 419 "hud.cpp"
  extern color_t crosshair_color;
#line 420 "hud.cpp"
  extern ld crosshair_size;
#line 422 "hud.cpp"
  extern bool long_kills;
#line 425 "hud.cpp"
  int hud_margin(int side);
#line 432 "hud.cpp"
  void draw_crosshair();
#line 449 "hud.cpp"
  extern bool less_in_portrait, less_in_landscape;
#line 451 "hud.cpp"
  string mode_description();
#line 473 "hud.cpp"
  string mode_description1();
#line 479 "hud.cpp"
  void drawStats();

  // implemented in: hyper-main.cpp

#line 32 "hyper-main.cpp"
  extern hookset<bool(int argc, char** argv)> hooks_main;
#line 34 "hyper-main.cpp"
  extern bool initialized;
#line 37 "hyper-main.cpp"
  int hyper_init(int argc, char **argv);
#line 62 "hyper-main.cpp"
  int hyper_init();
#line 73 "hyper-main.cpp"
  void hyper_loop();
#line 79 "hyper-main.cpp"
  int hyper_main(int argc, char **argv);

  // implemented in: hyperweb.cpp

#line 60 "hyperweb.cpp"
  string get_value(string name);
#line 75 "hyperweb.cpp"
  void offer_download(string sfilename, string smimetype);
#line 108 "hyperweb.cpp"
  void offer_choose_file(reaction_t r);
#line 215 "hyperweb.cpp"
  void get_canvas_size();
#line 244 "hyperweb.cpp"
  void initweb();
#line 265 "hyperweb.cpp"
  void emscripten_get_commandline();

  // implemented in: hypgraph.cpp

#line 14 "hypgraph.cpp"
  extern ld flip_limit;
#line 16 "hypgraph.cpp"
  bool flip_sphere();
#line 18 "hypgraph.cpp"
  extern bool sphere_flipped;
#line 26 "hypgraph.cpp"
  void camrotate(ld& hx, ld& hy);
#line 32 "hypgraph.cpp"
  bool non_spatial_model();
#line 44 "hypgraph.cpp"
  hyperpoint perspective_to_space(hyperpoint h, ld alpha IS(pconf.alpha), eGeometryClass gc IS(ginf[geometry].cclass));
#line 79 "hypgraph.cpp"
  hyperpoint space_to_perspective(hyperpoint z, ld alpha IS(pconf.alpha));
#line 92 "hypgraph.cpp"
  hyperpoint pointable();
#line 98 "hypgraph.cpp"
  shiftmatrix minimize_point_value(shiftmatrix T, function<ld(const shiftmatrix&)> value);
#line 121 "hypgraph.cpp"
  shiftpoint find_on_screen(hyperpoint hxy, const shiftmatrix& T);
#line 131 "hypgraph.cpp"
  shiftpoint gethyper(ld x, ld y);
#line 212 "hypgraph.cpp"
  ld find_zlev(hyperpoint& H);
#line 230 "hypgraph.cpp"
  ld atan2(hyperpoint h);
#line 278 "hypgraph.cpp"
  void makeband_f(shiftpoint H, hyperpoint& ret, const hr::function<void(ld&,ld&)>& f);
#line 373 "hypgraph.cpp"
  ld signed_sqrt(ld x);
#line 375 "hypgraph.cpp"
  extern int axial_x, axial_y;
#line 378 "hypgraph.cpp"
  extern bool semidirect_rendering;
#line 381 "hypgraph.cpp"
  extern bool computing_semidirect;
#line 383 "hypgraph.cpp"
  void apply_perspective(const hyperpoint& H, hyperpoint& ret);
#line 393 "hypgraph.cpp"
  void apply_nil_rotation(hyperpoint& H);
#line 402 "hypgraph.cpp"
  void applymodel(shiftpoint H_orig, hyperpoint& ret);
#line 406 "hypgraph.cpp"
  void vr_sphere(hyperpoint& ret, hyperpoint& H, eModel md);
  #if MAXMDIM >= 4
#line 448 "hypgraph.cpp"
  void threepoint_projection(const hyperpoint& H, hyperpoint& ret);
  #endif
#line 503 "hypgraph.cpp"
  extern vector<hr::function<void(shiftpoint& H_orig, hyperpoint& H, hyperpoint& ret)>> extra_projections;
#line 505 "hypgraph.cpp"
  void make_axial(hyperpoint H, hyperpoint& ret, const hr::function<ld(hyperpoint)>& f);
#line 562 "hypgraph.cpp"
  hyperpoint to_square(hyperpoint H);
#line 605 "hypgraph.cpp"
  hyperpoint hyperboloid_form(hyperpoint ret);
#line 612 "hypgraph.cpp"
  void apply_other_model(shiftpoint H_orig, hyperpoint& ret, eModel md);
#line 1588 "hypgraph.cpp"
  extern transmatrix sphereflip; // on the sphere, flip
#line 1589 "hypgraph.cpp"
  extern bool playerfound; // has player been found in the last drawing?
#line 1591 "hypgraph.cpp"
  bool outofmap(hyperpoint h);
#line 1602 "hypgraph.cpp"
  hyperpoint mirrorif(const hyperpoint& V, bool b);
#line 1607 "hypgraph.cpp"
  shiftmatrix mirrorif(const shiftmatrix& V, bool b);
#line 1613 "hypgraph.cpp"
  int away(const transmatrix& V2);
#line 1624 "hypgraph.cpp"
  double zgrad0(double l1, double l2, int nom, int den);
#line 1629 "hypgraph.cpp"
  bool behindsphere(const hyperpoint& h);
#line 1651 "hypgraph.cpp"
  ld spherity(const hyperpoint& h);
#line 1665 "hypgraph.cpp"
  bool behindsphere(const transmatrix& V);
#line 1669 "hypgraph.cpp"
  bool behindsphere(const shiftmatrix& V);
#line 1673 "hypgraph.cpp"
  ld spherity(const transmatrix& V);
#line 1677 "hypgraph.cpp"
  bool confusingGeometry();
#line 1684 "hypgraph.cpp"
  ld master_to_c7_angle();
#line 1695 "hypgraph.cpp"
  transmatrix actualV(const heptspin& hs, const transmatrix& V);
#line 1712 "hypgraph.cpp"
  shiftmatrix actualV(const heptspin& hs, const shiftmatrix& V);
#line 1716 "hypgraph.cpp"
  bool point_behind(const shiftpoint h);
#line 1730 "hypgraph.cpp"
  bool invalid_matrix(const transmatrix T);
#line 1742 "hypgraph.cpp"
  bool invalid_point(const hyperpoint h);
#line 1746 "hypgraph.cpp"
  bool invalid_point(const shiftpoint h);
#line 1748 "hypgraph.cpp"
  bool in_smart_range(const shiftmatrix& T);
#line 1886 "hypgraph.cpp"
  bool drawcell_subs(cell *c, const shiftmatrix& V);
#line 2023 "hypgraph.cpp"
  bool keep_vertical();
#line 2029 "hypgraph.cpp"
  hyperpoint vertical_vector();
#line 2046 "hypgraph.cpp"
  void spinEdge(ld aspd);
#line 2133 "hypgraph.cpp"
  void spinEdge_full();
#line 2138 "hypgraph.cpp"
  transmatrix back_to_view(const shiftmatrix& V);
#line 2144 "hypgraph.cpp"
  void fix_whichcopy(cell *c);
#line 2156 "hypgraph.cpp"
  void adjust_eye(transmatrix& T, cell *c, ld sign);
#line 2166 "hypgraph.cpp"
  bool shmup_inverted();
#line 2171 "hypgraph.cpp"
  void centerpc(ld aspd);
#line 2283 "hypgraph.cpp"
  extern transmatrix oView;
#line 2285 "hypgraph.cpp"
  extern purehookset hooks_preoptimize, hooks_postoptimize;
#line 2287 "hypgraph.cpp"
  void optimizeview();
#line 2348 "hypgraph.cpp"
  void resetview();
#line 2394 "hypgraph.cpp"
  void panning(shiftpoint hf0, shiftpoint ht0);
#line 2402 "hypgraph.cpp"
  extern int cells_drawn, cells_generated;
#line 2404 "hypgraph.cpp"
  void fullcenter();
#line 2430 "hypgraph.cpp"
  extern int flat_on;
#line 2438 "hypgraph.cpp"
  void enable_flat_model(int val);
#line 2482 "hypgraph.cpp"
  struct flat_model_enabler {
  flat_model_enabler() { enable_flat_model(+1); }
  ~flat_model_enabler() { enable_flat_model(-1); }
  };
#line 2488 "hypgraph.cpp"
  transmatrix atscreenpos(ld x, ld y, ld size);
#line 2540 "hypgraph.cpp"
  extern color_t periodcolor;
#line 2541 "hypgraph.cpp"
  extern color_t ringcolor;
#line 2542 "hypgraph.cpp"
  extern color_t modelcolor;
#line 2543 "hypgraph.cpp"
  extern ld periodwidth;
#line 2545 "hypgraph.cpp"
  extern ld twopoint_xscale;
#line 2546 "hypgraph.cpp"
  extern ld twopoint_xwidth;
#line 2547 "hypgraph.cpp"
  extern int twopoint_xshape;
#line 2549 "hypgraph.cpp"
  void put_x(shiftmatrix S, color_t col);
  #if CAP_QUEUE
#line 2564 "hypgraph.cpp"
  void draw_model_elements();
#line 2769 "hypgraph.cpp"
  void draw_boundary(int w);
  #endif
#line 3056 "hypgraph.cpp"
  void change_shift(shiftpoint& h, ld by);
#line 3071 "hypgraph.cpp"
  void change_shift(shiftmatrix& T, ld by);
#line 3089 "hypgraph.cpp"
  transmatrix unshift(shiftmatrix T, ld to IS(0));
#line 3094 "hypgraph.cpp"
  hyperpoint unshift(shiftpoint T, ld to IS(0));
#line 3099 "hypgraph.cpp"
  transmatrix inverse_shift(const shiftmatrix& T1, const shiftmatrix& T2);
#line 3103 "hypgraph.cpp"
  hyperpoint inverse_shift(const shiftmatrix& T1, const shiftpoint& T2);
#line 3107 "hypgraph.cpp"
  void optimize_shift(shiftpoint& h);
#line 3113 "hypgraph.cpp"
  void optimize_shift(shiftmatrix& T);
#line 3145 "hypgraph.cpp"
  shiftmatrix optimized_shift(const shiftmatrix& T);
  namespace dq {
#line 3152 "hypgraph.cpp"
    extern queue<pair<heptagon*, shiftmatrix>> drawqueue;
#line 3154 "hypgraph.cpp"
    unsigned bucketer(const shiftpoint& T);
#line 3162 "hypgraph.cpp"
    extern set<heptagon*> visited;
#line 3163 "hypgraph.cpp"
    void enqueue(heptagon *h, const shiftmatrix& T);
#line 3169 "hypgraph.cpp"
    extern set<unsigned> visited_by_matrix;
#line 3170 "hypgraph.cpp"
    void enqueue_by_matrix(heptagon *h, const shiftmatrix& T);
#line 3178 "hypgraph.cpp"
    extern queue<pair<cell*, shiftmatrix>> drawqueue_c;
#line 3179 "hypgraph.cpp"
    extern set<cell*> visited_c;
#line 3181 "hypgraph.cpp"
    void enqueue_c(cell *c, const shiftmatrix& T);
#line 3187 "hypgraph.cpp"
    void enqueue_by_matrix_c(cell *c, const shiftmatrix& T);
#line 3195 "hypgraph.cpp"
    void clear_all();
    }
#line 3206 "hypgraph.cpp"
  bool do_draw(cell *c);
#line 3218 "hypgraph.cpp"
  extern ld extra_generation_distance;
#line 3221 "hypgraph.cpp"
  bool limited_generation(cell *c);
#line 3229 "hypgraph.cpp"
  extern int min_cells_drawn;
#line 3231 "hypgraph.cpp"
  extern hookset<int(cell*,const shiftmatrix&)>  hooks_do_draw;
#line 3233 "hypgraph.cpp"
  bool do_draw(cell *c, const shiftmatrix& T);
#line 3305 "hypgraph.cpp"
  int cone_side(const shiftpoint H);
#line 3334 "hypgraph.cpp"
  transmatrix& get_view_orientation();
#line 3338 "hypgraph.cpp"
  extern hookset<bool(const transmatrix&)> hooks_rotate_view;
#line 3339 "hypgraph.cpp"
  extern hookset<bool(const hyperpoint&)> hooks_shift_view;
#line 3342 "hypgraph.cpp"
  void rotate_view(transmatrix T);
#line 3349 "hypgraph.cpp"
  shiftpoint lie_exp(hyperpoint h1);
  #if MAXMDIM >= 4
#line 3416 "hypgraph.cpp"
  hyperpoint rel_log(shiftpoint h, bool relativistic_length);
  #endif
#line 3461 "hypgraph.cpp"
  bool lie_movement_available();
#line 3467 "hypgraph.cpp"
  hyperpoint lie_log(const shiftpoint h1);
#line 3520 "hypgraph.cpp"
  hyperpoint lie_log_correct(const shiftpoint H_orig, hyperpoint& H);
#line 3530 "hypgraph.cpp"
  void shift_v_by_vector(transmatrix& V, const hyperpoint H, eShiftMethod sm IS(shift_method(smaManualCamera)));
#line 3556 "hypgraph.cpp"
  transmatrix get_shift_view_of(const hyperpoint H, transmatrix V, eShiftMethod sm IS(shift_method(smaManualCamera)));
#line 3562 "hypgraph.cpp"
  void shift_view(hyperpoint H, eShiftMethod sm IS(shift_method(smaManualCamera)));
#line 3578 "hypgraph.cpp"
  void shift_v_embedded(transmatrix& V, const transmatrix T);
#line 3587 "hypgraph.cpp"
  void shift_v_by_matrix(transmatrix& V, const transmatrix T, eShiftMethod sm);
#line 3600 "hypgraph.cpp"
  void shift_view_to(shiftpoint H, eShiftMethod sm IS(shift_method(smaManualCamera)));
#line 3605 "hypgraph.cpp"
  void shift_v_to(transmatrix& V, shiftpoint H, eShiftMethod sm IS(shift_method(smaManualCamera)));
#line 3621 "hypgraph.cpp"
  void shift_view_towards(shiftpoint H, ld l, eShiftMethod sm IS(shift_method(smaManualCamera)));
#line 3626 "hypgraph.cpp"
  void shift_v_towards(transmatrix& V, shiftpoint H, ld l, eShiftMethod sm IS(shift_method(smaManualCamera)));
#line 3644 "hypgraph.cpp"
  void set_view(hyperpoint camera, hyperpoint forward, hyperpoint upward);

  // implemented in: inforder.cpp

  namespace inforder {
#line 16 "inforder.cpp"
    bool in();
#line 18 "inforder.cpp"
    bool mixed();
#line 20 "inforder.cpp"
    extern int alt_degree;
#line 40 "inforder.cpp"
    hrmap* new_map();
#line 42 "inforder.cpp"
    int celldistance(cell *c1, cell *c2);
    }

  // implemented in: intra.cpp

  namespace intra {
#line 7 "intra.cpp"
    extern bool in;
    #if CAP_PORTALS
#line 11 "intra.cpp"
    /** information per every space connected with intra-portals */
    struct intra_data {
    gamedata gd;
    geometryinfo gi;
    int wallindex;  
    };
#line 19 "intra.cpp"
    extern vector<intra_data> data;
#line 22 "intra.cpp"
    extern bool switching;
#line 25 "intra.cpp"
    extern int current;
#line 28 "intra.cpp"
    extern int debug_portal;
#line 31 "intra.cpp"
    extern map<cell*, int> intra_id;
#line 34 "intra.cpp"
    /** information about portal (one side) */
    struct portal_data {
    int kind;
    hyperpoint v0;
    ld d;
    transmatrix T;
    transmatrix iT;
    hyperpoint co0;
    hyperpoint co1;
    ld scale;
    /* convert h to portal coordinates ('poco') to usual coordinates */
    hyperpoint to_poco(hyperpoint h) const;
    /* convert h from portal coordinates ('poco') to usual coordinates */
    hyperpoint from_poco(hyperpoint h) const;
    };
#line 150 "intra.cpp"
    portal_data make_portal(cellwalker cw, int spin);
#line 309 "intra.cpp"
    /** information about connection (portal-to-portal) */
    struct connection_data {
    int source_world;
    int target_world;
    cellwalker scw, tcw;
    portal_data id1;
    portal_data id2;
    transmatrix T;
    int spin_value;
    bool mirrored; /* not implemented */
    };
#line 322 "intra.cpp"
    extern map<cellwalker, connection_data> connections;
#line 324 "intra.cpp"
    connection_data* find_connection(int a, int b);
#line 331 "intra.cpp"
    void switch_to(int id);
#line 410 "intra.cpp"
    extern vector<pair<int, cell*>> full_sample_list;
#line 412 "intra.cpp"
    void connect_portal(cellwalker cw1, cellwalker cw2, int spin);
#line 417 "intra.cpp"
    void generate_sample_list_for_current();
#line 430 "intra.cpp"
    void regenerate_full_sample_list();
#line 441 "intra.cpp"
    void become();
#line 467 "intra.cpp"
    void start(int id IS(0));
#line 490 "intra.cpp"
    /** a convenience struct to switch back after a temporary switch_to */
    struct resetter {
    int ic;
    resetter() { ic = current; }
    ~resetter() { if(in) switch_to(ic); }
    };
#line 498 "intra.cpp"
    void may_switch_to(cell *c);
#line 502 "intra.cpp"
    int full_wall_offset(cell *c);
#line 516 "intra.cpp"
    void analyze_orthonormal(array<hyperpoint, 4> ds, ld sca);
#line 529 "intra.cpp"
    void shift_view_portal(hyperpoint H);
#line 547 "intra.cpp"
    const connection_data* through_portal();
#line 555 "intra.cpp"
    extern ld scale;
#line 557 "intra.cpp"
    void check_portal_movement();
#line 632 "intra.cpp"
    void apply_scale();
#line 654 "intra.cpp"
    extern string portal_help;
#line 668 "intra.cpp"
    void become_menu();
#line 689 "intra.cpp"
    void world_list();
#line 731 "intra.cpp"
    void show_portals();
#line 845 "intra.cpp"
    struct portal_to_save {
    cellwalker cw1;
    cellwalker cw2;
    int spin;
    bool mirrored;
    };
#line 853 "intra.cpp"
    extern vector<portal_to_save> portals_to_save;
#line 855 "intra.cpp"
    void prepare_to_save();
#line 862 "intra.cpp"
    void load_saved_portals();
#line 866 "intra.cpp"
    void be_ratio(ld v IS(1));
#line 874 "intra.cpp"
    ld get_edge_length(cell *c, int i);
#line 879 "intra.cpp"
    ld get_ratio_edge(cell *c, int i);
#line 884 "intra.cpp"
    void be_ratio_edge(cell *c, int i, ld v IS(1));
#line 891 "intra.cpp"
    void be_ratio_edge(int i, ld v IS(1));
#line 897 "intra.cpp"
    void kill(int id);
#line 919 "intra.cpp"
    void erase_all_maps();
#line 936 "intra.cpp"
    extern set<cell*> need_to_save;
#line 938 "intra.cpp"
    void prepare_need_to_save();
    #endif
    }
  namespace walking {
#line 976 "intra.cpp"
    extern bool on;
#line 978 "intra.cpp"
    extern bool auto_eyelevel;
#line 980 "intra.cpp"
    extern int floor_dir;
#line 981 "intra.cpp"
    extern cell *on_floor_of;
#line 982 "intra.cpp"
    extern ld eye_level;
#line 983 "intra.cpp"
    extern ld eye_angle;
#line 984 "intra.cpp"
    extern ld eye_angle_scale;
#line 986 "intra.cpp"
    extern int ticks_end, ticks_last;
#line 988 "intra.cpp"
    extern set<color_t> colors_of_floors;
#line 990 "intra.cpp"
    bool isFloor(cell *c);
#line 997 "intra.cpp"
    void handle();
#line 1156 "intra.cpp"
    void switch_walking();
#line 1165 "intra.cpp"
    void add_options();
    }

  // implemented in: inventory.cpp

  namespace inv {
    #if CAP_INV
#line 19 "inventory.cpp"
    extern bool on;
#line 21 "inventory.cpp"
    extern array<int, ittypes> usedup;
#line 23 "inventory.cpp"
    extern array<int, ittypes> remaining;
#line 25 "inventory.cpp"
    extern array<int, ittypes> extra_orbs;
#line 28 "inventory.cpp"
    extern int rseed;
#line 30 "inventory.cpp"
    extern bool usedForbidden;
#line 33 "inventory.cpp"
    void init();
#line 131 "inventory.cpp"
    extern eItem whichorbinfo;
#line 132 "inventory.cpp"
    extern string orbinfoline, extra;
#line 284 "inventory.cpp"
    void compute();
#line 431 "inventory.cpp"
    extern const char* helptext;
#line 476 "inventory.cpp"
    string osminfo(eItem orb);
#line 484 "inventory.cpp"
    extern bool activating;
#line 487 "inventory.cpp"
    void show();
    #if CAP_SAVE
#line 703 "inventory.cpp"
    void applyBox(eItem it);
    #endif
#line 708 "inventory.cpp"
    extern int incheck;
#line 710 "inventory.cpp"
    void check(int delta);
    #endif
    #if !CAP_INV
#line 722 "inventory.cpp"
    extern always_false on, activating;
    #endif
    }

  // implemented in: irregular.cpp

  namespace irr {
#line 13 "irregular.cpp"
    extern int irrid;
    #if CAP_IRR
#line 16 "irregular.cpp"
    extern ld density;
#line 17 "irregular.cpp"
    extern ld quality;
#line 18 "irregular.cpp"
    extern int place_attempts;
#line 19 "irregular.cpp"
    extern int rearrange_max_attempts;
#line 20 "irregular.cpp"
    extern int rearrange_less;
#line 22 "irregular.cpp"
    extern int cellcount;
#line 25 "irregular.cpp"
    struct cellinfo {
    cell *owner;
    map<cell*, transmatrix> relmatrices;
    vector<hyperpoint> jpoints;
    hyperpoint p;
    transmatrix pusher, rpusher;
    vector<int> neid;
    vector<int> spin;
    vector<hyperpoint> vertices;
    int localindex;
    bool is_pseudohept;
    int patterndir;
    int generation;
    };
#line 41 "irregular.cpp"
    extern map<cell*, int> cellindex;
#line 43 "irregular.cpp"
    extern vector<cellinfo> cells;
#line 45 "irregular.cpp"
    extern map<heptagon*, vector<int> > cells_of_heptagon;
#line 62 "irregular.cpp"
    extern hrmap *base;
#line 64 "irregular.cpp"
    extern euc::torus_config_full base_config;
#line 66 "irregular.cpp"
    extern bool gridmaking;
#line 72 "irregular.cpp"
    extern int bitruncations_requested;
#line 73 "irregular.cpp"
    extern int bitruncations_performed;
#line 479 "irregular.cpp"
    void compute_geometry();
#line 513 "irregular.cpp"
    struct heptinfo {
    heptspin base;
    vector<cell*> subcells;
    vector<int> celldists[2];
    };
#line 520 "irregular.cpp"
    extern map<heptagon*, heptinfo> periodmap;
#line 522 "irregular.cpp"
    void link_to_base(heptagon *h, heptspin base);
#line 534 "irregular.cpp"
    void clear_links(heptagon *h);
#line 545 "irregular.cpp"
    void link_start(heptagon *h);
#line 549 "irregular.cpp"
    void link_next(heptagon *parent, int d);
#line 558 "irregular.cpp"
    void may_link_next(heptagon *parent, int d);
#line 564 "irregular.cpp"
    void link_cell(cell *c, int d);
#line 747 "irregular.cpp"
    int celldist(cell *c, bool alts);
#line 808 "irregular.cpp"
    void save_map_bin(hstream& f);
#line 879 "irregular.cpp"
    void load_map_bin(hstream& f);
#line 918 "irregular.cpp"
    void load_map_full(hstream& f);
#line 931 "irregular.cpp"
    void cancel_map_creation();
#line 1040 "irregular.cpp"
    void init();
#line 1067 "irregular.cpp"
    void visual_creator();
#line 1074 "irregular.cpp"
    void auto_creator();
#line 1123 "irregular.cpp"
    unsigned char density_code();
#line 1132 "irregular.cpp"
    bool pseudohept(cell* c);
#line 1136 "irregular.cpp"
    bool ctof(cell* c);
#line 1140 "irregular.cpp"
    bool supports(eGeometry g);
#line 1145 "irregular.cpp"
    array<heptagon*, 3> get_masters(cell *c);
#line 1152 "irregular.cpp"
    void swap_vertices();
    #endif
    }

  // implemented in: items.cpp

#line 12 "items.cpp"
  extern int currentLocalTreasure;
#line 15 "items.cpp"
  extern array<int, ittypes> items;
#line 17 "items.cpp"
  extern map<modecode_t, array<int, ittypes> > hiitems;
#line 19 "items.cpp"
  bool pickable_from_water(eItem it);
#line 23 "items.cpp"
  bool cannotPickupItem(cell *c, bool telekinesis);
#line 28 "items.cpp"
  bool canPickupItemWithMagnetism(cell *c, cell *from);
#line 36 "items.cpp"
  bool doPickupItemsWithMagnetism(cell *c);
#line 77 "items.cpp"
  void pickupMovedItems(cell *c, cell *from);
#line 90 "items.cpp"
  bool in_lovasz();
#line 94 "items.cpp"
  int threshold_met(int i);
#line 100 "items.cpp"
  bool collectItem(cell *c2, cell *last, bool telekinesis IS(false));
#line 362 "items.cpp"
  void glance_message();
#line 379 "items.cpp"
  void dropGreenStone(cell *c);
#line 414 "items.cpp"
  void moveItem1(cell *from, cell *to, bool activateYendor);
#line 442 "items.cpp"
  void moveItem (cell *from, cell *to, bool activateYendor);
#line 450 "items.cpp"
  bool itemHidden(cell *c);
#line 454 "items.cpp"
  eItem localTreasureType();
#line 459 "items.cpp"
  void countLocalTreasure();
#line 472 "items.cpp"
  static constexpr int NO_TREASURE = 1;
  static constexpr int NO_YENDOR = 2;
  static constexpr int NO_GRAIL = 4;
  static constexpr int NO_LOVE = 8;
#line 478 "items.cpp"
  int gold(int no IS(0));
#line 501 "items.cpp"
  int maxgold();
#line 509 "items.cpp"
  void updateHi_for_code(eItem it, int v, modecode_t xcode);
#line 515 "items.cpp"
  void updateHi(eItem it, int v);
#line 519 "items.cpp"
  void gainItem(eItem it);
#line 580 "items.cpp"
  string itemcounter(int qty);
#line 584 "items.cpp"
  void gainShard(cell *c2, const char *msg);
#line 600 "items.cpp"
  void placeItems(int qty, eItem it);
#line 609 "items.cpp"
  bool cantGetGrimoire(cell *c2, bool verbose IS(true));
#line 620 "items.cpp"
  void gainLife();
#line 625 "items.cpp"
  void collectMessage(cell *c2, eItem which);
#line 743 "items.cpp"
  bool itemHiddenFromSight(cell *c);

  // implemented in: kite.cpp

  namespace kite {
#line 13 "kite.cpp"
    bool in();
    #if CAP_BT
#line 18 "kite.cpp"
    enum pshape {pDart, pKite};
#line 62 "kite.cpp"
    pshape getshape(heptagon *h);
#line 64 "kite.cpp"
    pair<vector<vector<hyperpoint>>, vector<vector<ld>>> make_walls();
#line 124 "kite.cpp"
    extern bool no_adj;
#line 371 "kite.cpp"
    hrmap *new_map();
#line 378 "kite.cpp"
    void find_cell_connection(cell *c, int d);
    #endif
    }

  // implemented in: landgen.cpp

#line 15 "landgen.cpp"
  extern int explore[10], exploreland[10][landtypes], landcount[landtypes];
#line 17 "landgen.cpp"
  extern bool safety;
#line 19 "landgen.cpp"
  extern eLand lastland;
#line 21 "landgen.cpp"
  extern int lastexplore;
#line 23 "landgen.cpp"
  extern bool randomPatternsMode;
#line 24 "landgen.cpp"
  extern int randompattern[landtypes];
#line 26 "landgen.cpp"
  extern int genrange_bonus;
#line 28 "landgen.cpp"
  extern bool chaosUnlocked;
#line 29 "landgen.cpp"
  extern bool chaosAchieved;
#line 31 "landgen.cpp"
  void doOvergenerate();
#line 36 "landgen.cpp"
  bool notDippingFor(eItem i);
#line 45 "landgen.cpp"
  bool notDippingForExtra(eItem i, eItem x);
#line 69 "landgen.cpp"
  extern bool reptilecheat;
#line 107 "landgen.cpp"
  eMonster genRuinMonster(cell *c);
#line 122 "landgen.cpp"
  void createArrowTrapAt(cell *c, eLand land);
#line 148 "landgen.cpp"
  eMonster emerald_monster();
#line 156 "landgen.cpp"
  void build_pool(cell *c, bool with_boat);
#line 167 "landgen.cpp"
  void place_elemental_wall(cell *c);
#line 175 "landgen.cpp"
  int hrand_monster_in(eLand l, int x);
#line 192 "landgen.cpp"
  bool is_zebra_trapdoor(cell *c);
#line 237 "landgen.cpp"
  void gen_eclectic_monster(cell *c);
#line 277 "landgen.cpp"
  void place_random_gate_continuous(cell *c);
#line 283 "landgen.cpp"
  void gen_baby_tortoise(cell *c);
#line 288 "landgen.cpp"
  int rebalance_treasure(int x, int y, eLand l);
#line 295 "landgen.cpp"
  eItem random_curse();
#line 299 "landgen.cpp"
  void clear_item(cell *c);
#line 305 "landgen.cpp"
  void giantLandSwitch(cell *c, int d, cell *from);
#line 2848 "landgen.cpp"
  void repairLandgen(cell *c);
#line 2900 "landgen.cpp"
  extern int randomwalk_size;
#line 2902 "landgen.cpp"
  void setland_randomwalk(cell *c);
#line 2914 "landgen.cpp"
  eLand random_land();
#line 2918 "landgen.cpp"
  void share_land(cell *c, cell *c2);
#line 2924 "landgen.cpp"
  extern int landscape_div;
#line 2926 "landgen.cpp"
  void set_land_for_geometry(cell *c);
#line 2998 "landgen.cpp"
  extern hookset<bool(cell *c, int d, cell *from)> hooks_cellgen;
#line 3000 "landgen.cpp"
  void setdist(cell *c, int d, cell *from);

  // implemented in: landlock.cpp

#line 12 "landlock.cpp"
  bool in_full_game();
#line 17 "landlock.cpp"
  bool nodisplay(eMonster m);
#line 27 "landlock.cpp"
  int isNative(eLand l, eMonster m);
#line 38 "landlock.cpp"
  eItem treasureType(eLand l);
#line 40 "landlock.cpp"
  eItem treasureTypeUnlock(eLand l, eItem u);
#line 46 "landlock.cpp"
  eLand landof(eItem it);
#line 51 "landlock.cpp"
  int landMultiplier(eLand l);
#line 56 "landlock.cpp"
  bool isCrossroads(eLand l);
#line 61 "landlock.cpp"
  bool bearsCamelot(eLand l);
#line 65 "landlock.cpp"
  bool inmirror(const cellwalker& cw);
#line 69 "landlock.cpp"
  eLand oppositeElement(eLand l, eLand l2);
#line 81 "landlock.cpp"
  extern eLand firstland;
#line 82 "landlock.cpp"
  extern eLand specialland;
#line 85 "landlock.cpp"
  enum eLandStructure { lsNiceWalls, lsChaos, lsPatchedChaos, lsTotalChaos, lsChaosRW, lsWallChaos, lsSingle, lsNoWalls, lsHorodisks, lsVoronoi, lsLandscape, lsCrossWalls, lsVineWalls, lsCursedWalls, lsGUARD };
#line 88 "landlock.cpp"
  extern eLandStructure land_structure;
  namespace ls {
#line 92 "landlock.cpp"
    bool single();
#line 94 "landlock.cpp"
    bool any_chaos();
#line 95 "landlock.cpp"
    bool std_chaos();
#line 96 "landlock.cpp"
    bool wall_chaos();
#line 97 "landlock.cpp"
    bool patched_chaos();
#line 99 "landlock.cpp"
    bool any_order();
#line 100 "landlock.cpp"
    bool nice_walls();
#line 101 "landlock.cpp"
    bool no_walls();
#line 102 "landlock.cpp"
    bool horodisk_structure();
#line 103 "landlock.cpp"
    bool voronoi_structure();
#line 104 "landlock.cpp"
    bool hv_structure();
#line 106 "landlock.cpp"
    bool any_nowall();
#line 107 "landlock.cpp"
    bool any_wall();
#line 109 "landlock.cpp"
    int chaoticity();
#line 124 "landlock.cpp"
    int ls_mul();
#line 133 "landlock.cpp"
    int ls_mul_big();
#line 141 "landlock.cpp"
    bool tame_chaos();
    }
#line 144 "landlock.cpp"
  string land_structure_name(bool which);
#line 179 "landlock.cpp"
  void fix_land_structure_choice();
#line 214 "landlock.cpp"
  bool landUnlockedRPM(eLand n);
#line 221 "landlock.cpp"
  int lands_for_hell();
#line 225 "landlock.cpp"
  int lands_for_cr3();
#line 229 "landlock.cpp"
  int variant_unlock_value();
#line 233 "landlock.cpp"
  bool landUnlocked(eLand l);
#line 246 "landlock.cpp"
  bool landUnlockedLegacy(eLand l);
#line 291 "landlock.cpp"
  bool required_for_hyperstones(eItem ttype);
#line 303 "landlock.cpp"
  void countHyperstoneQuest(int& i1, int& i2);
#line 317 "landlock.cpp"
  bool hyperstonesUnlocked();
#line 325 "landlock.cpp"
  int isRandland(eLand l);
#line 332 "landlock.cpp"
  int voronoi_sea_category(eLand l);
#line 339 "landlock.cpp"
  bool voronoi_sea_incompatible(eLand l1, eLand l2);
#line 346 "landlock.cpp"
  bool incompatible1(eLand l1, eLand l2);
#line 376 "landlock.cpp"
  eLand randomElementalLand();
#line 382 "landlock.cpp"
  int elementalKills();
#line 387 "landlock.cpp"
  eLand randomElementalLandWeighted();
#line 398 "landlock.cpp"
  bool incompatible(eLand nw, eLand old);
#line 402 "landlock.cpp"
  bool rlyehComplete();
#line 414 "landlock.cpp"
  eLand pickLandRPM(eLand old);
#line 422 "landlock.cpp"
  eLand pickluck(eLand l1, eLand l2);
#line 442 "landlock.cpp"
  eLand getNewSealand(eLand old);
#line 460 "landlock.cpp"
  bool createOnSea(eLand old);
#line 468 "landlock.cpp"
  extern hookset<eLand(eLand)> hooks_nextland;
#line 470 "landlock.cpp"
  extern bool all_unlocked;
#line 472 "landlock.cpp"
  extern vector<eLand> cheatdest_list;
#line 474 "landlock.cpp"
  eLand getNewLand(eLand old);
#line 709 "landlock.cpp"
  eLand getNewLand2(vector<eLand> olds);
#line 723 "landlock.cpp"
  extern vector<eLand> land_over;
#line 745 "landlock.cpp"
  extern vector<eLand> landlist;
#line 748 "landlock.cpp"
  template<class T> void generateLandList(T t) {
  landlist.clear();
  for(auto l: land_over) if(t(l)) landlist.push_back(l);    
  }
#line 755 "landlock.cpp"
  namespace lv {
  static constexpr flagtype appears_in_geom_exp = 1;
  static constexpr flagtype display_error_message = 2;
  static constexpr flagtype appears_in_full = 4;
  static constexpr flagtype appears_in_ptm = 8;
  static constexpr flagtype display_in_help = 16;
  static constexpr flagtype one_and_half = 32;
  static constexpr flagtype switch_to_single = 64;
  }
  
  struct land_validity_t {
  int quality_level; // 0 (dont show), 1 (1/2), 2 (ok), 3(1!)
  flagtype flags;
  string msg;
  };
#line 772 "landlock.cpp"
  eLand getLandForList(cell *c);
#line 785 "landlock.cpp"
  extern bool use_custom_land_list;
#line 786 "landlock.cpp"
  extern array<bool, landtypes> custom_land_list;
#line 787 "landlock.cpp"
  extern array<int, landtypes> custom_land_treasure;
#line 788 "landlock.cpp"
  extern array<int, landtypes> custom_land_difficulty;
#line 789 "landlock.cpp"
  extern array<int, landtypes> custom_land_wandering;
#line 791 "landlock.cpp"
  bool isLandIngame(eLand l);
#line 800 "landlock.cpp"
  bool landUnlockedIngame(eLand l);
#line 878 "landlock.cpp"
  extern int old_daily_id;
#line 882 "landlock.cpp"
  extern const int frog_when;
#line 884 "landlock.cpp"
  extern const int cursed_when;
#line 886 "landlock.cpp"
  extern const int walls_when;
#line 888 "landlock.cpp"
  void mark_tamper();
#line 890 "landlock.cpp"
  void customize_land_in_list(eLand l);
#line 936 "landlock.cpp"
  void customize_land_list();
#line 1015 "landlock.cpp"
  land_validity_t& land_validity(eLand l);

  // implemented in: language-data.cpp

#line 558 "language-data.cpp"
  #if CAP_TRANS
  #define NUMEXTRA 160
  #define NATCHARS {"¨","°","²","´","½","À","Á","Ä","Ç","È","É","Ê","Í","Î","Ö","Ú","Ü","ß","à","á","â","ã","ä","ç","è","é","ê","ì","í","î","ï","ò","ó","ô","õ","ö","ø","ù","ú","û","ü","ý","Ą","ą","ć","Č","č","Ď","ď","Ę","ę","Ě","ě","ğ","İ","ı","Ł","ł","ń","ň","Œ","œ","Ř","ř","Ś","ś","Ş","ş","Š","š","Ť","ť","ů","Ź","ź","Ż","ż","Ž","ž","Θ","δ","λ","π","ϕ","Ё","А","Б","В","Г","Д","Е","Ж","З","И","Й","К","Л","М","Н","О","П","Р","С","Т","У","Ф","Х","Ц","Ч","Ш","Щ","Ы","Ь","Э","Ю","Я","а","б","в","г","д","е","ж","з","и","й","к","л","м","н","о","п","р","с","т","у","ф","х","ц","ч","ш","щ","ъ","ы","ь","э","ю","я","ё","ᵈ","ᶻ","’","⁻","←","→","√","∞","⌫","⏎","�",}
  extern const char* natchars[NUMEXTRA];
  #endif
#line 567 "language-data.cpp"
  extern int transcompleteness[NUMLAN];

  // implemented in: legacy.cpp

#line 205 "legacy.cpp"
  modecode_t legacy_modecode();
#line 248 "legacy.cpp"
  void legacy_modecode_read(modecode_t mc);
  #if CAP_RACING
#line 284 "legacy.cpp"
  bool legacy_racing();
#line 288 "legacy.cpp"
  bool rcheck(string which, int qty, int x);
#line 292 "legacy.cpp"
  int wallchance_legacy(cell *c, bool deepOcean);
#line 303 "legacy.cpp"
  void buildBigStuff_legacy(cell *c, cell *from);
  #endif

  // implemented in: mapeffects.cpp

#line 11 "mapeffects.cpp"
  void initcell(cell *c);
#line 29 "mapeffects.cpp"
  bool doesnotFall(cell *c);
#line 40 "mapeffects.cpp"
  bool doesFall(cell *c);
#line 42 "mapeffects.cpp"
  bool doesFallSound(cell *c);
#line 48 "mapeffects.cpp"
  void destroyBoats(cell *c, cell *c2, bool strandedToo);
#line 56 "mapeffects.cpp"
  enum eGravity { gsNormal, gsLevitation, gsAnti };
#line 58 "mapeffects.cpp"
  extern eGravity gravity_state, last_gravity_state;
#line 60 "mapeffects.cpp"
  bool bird_disruption(cell *c);
#line 64 "mapeffects.cpp"
  bool in_gravity_zone(cell *c);
#line 68 "mapeffects.cpp"
  int gravity_zone_diff(cell *c);
#line 76 "mapeffects.cpp"
  bool isJWall(cell *c);
#line 80 "mapeffects.cpp"
  eGravity get_static_gravity(cell *c);
#line 92 "mapeffects.cpp"
  eGravity get_move_gravity(cell *c, cell *c2);
#line 119 "mapeffects.cpp"
  bool isWarped(cell *c);
#line 123 "mapeffects.cpp"
  bool nonAdjacent(cell *c, cell *c2);
#line 134 "mapeffects.cpp"
  bool nonAdjacentPlayer(cell *c, cell *c2);
#line 138 "mapeffects.cpp"
  bool thruVine(cell *c, cell *c2);
#line 143 "mapeffects.cpp"
  void useup(cell *c);
#line 158 "mapeffects.cpp"
  bool earthFloor(cell *c);
#line 208 "mapeffects.cpp"
  bool earthWall(cell *c);
#line 284 "mapeffects.cpp"
  bool snakepile(cell *c, eMonster m);
#line 355 "mapeffects.cpp"
  bool makeflame(cell *c, int timeout, bool checkonly);
#line 431 "mapeffects.cpp"
  bool makeshallow(cell *c, int timeout, bool checkonly);
#line 477 "mapeffects.cpp"
  void explosion(cell *c, int power, int central);
#line 523 "mapeffects.cpp"
  void explodeMine(cell *c);
#line 535 "mapeffects.cpp"
  void explodeBarrel(cell *c);
#line 544 "mapeffects.cpp"
  bool mayExplodeMine(cell *c, eMonster who);
#line 551 "mapeffects.cpp"
  void flameHalfvine(cell *c, int val);
#line 561 "mapeffects.cpp"
  bool destroyHalfvine(cell *c, eWall newwall IS(waNone), int tval IS(6));
#line 577 "mapeffects.cpp"
  int coastvalEdge(cell *c);
#line 578 "mapeffects.cpp"
  int coastvalWest(cell *c);
#line 580 "mapeffects.cpp"
  int gravityLevel(cell *c);
#line 594 "mapeffects.cpp"
  int gravityLevelDiff(cell *c, cell *d);
#line 616 "mapeffects.cpp"
  bool canUnstable(eWall w, flagtype flags);
#line 622 "mapeffects.cpp"
  bool cellEdgeUnstable(cell *c, flagtype flags IS(0));
#line 644 "mapeffects.cpp"
  extern int tidalphase;
#line 646 "mapeffects.cpp"
  extern int tidalsize, tide[200];
#line 648 "mapeffects.cpp"
  void calcTidalPhase();
#line 680 "mapeffects.cpp"
  int tidespeed();
#line 684 "mapeffects.cpp"
  extern bool recalcTide;
#line 687 "mapeffects.cpp"
  #define SEADIST LHU.bytes[0]
  #define LANDDIST LHU.bytes[1]
  #define CHAOSPARAM LHU.bytes[2]
  #if CAP_FIELD
#line 693 "mapeffects.cpp"
  int lavatide(cell *c, int t);
  #endif
#line 699 "mapeffects.cpp"
  void checkTide(cell *c);
#line 755 "mapeffects.cpp"
  bool makeNoMonster(cell *c);
#line 773 "mapeffects.cpp"
  bool makeEmpty(cell *c);
#line 846 "mapeffects.cpp"
  void toggleGates(cell *c, eWall type, int rad);
#line 874 "mapeffects.cpp"
  int toggle_radius(eWall type);
#line 881 "mapeffects.cpp"
  void toggleGates(cell *ct, eWall type);
#line 891 "mapeffects.cpp"
  void destroyTrapsOn(cell *c);
#line 900 "mapeffects.cpp"
  void destroyTrapsAround(cell *c);
#line 904 "mapeffects.cpp"
  void destroyWeakBranch(cell *cf, cell *ct, eMonster who);
#line 923 "mapeffects.cpp"
  bool isCentralTrap(cell *c);
#line 935 "mapeffects.cpp"
  array<cell*, 5> traplimits(cell *c);
#line 955 "mapeffects.cpp"
  void activateArrowTrap(cell *c);
#line 966 "mapeffects.cpp"
  template<class T> 
  movei determinePush(cellwalker who, int subdir, const T& valid) {
  if(subdir != 1 && subdir != -1) {
  subdir = 1;
  static bool first = true;
  if(first)
  first = false,
  addMessage("bad push: " + its(subdir));
  }
  cellwalker push = who;
  push += wstep;
  cell *c2 = push.at;
  if(bt::in()) {
  auto rd = reverse_directions(push.at, push.spin);
  for(int i: rd) {
  push.spin = i;
  movei mi = movei(push.at, i);
  if(valid(mi)) return mi;
  }
  return movei(c2, NO_SPACE);
  }
  int pd = push.at->type/2;
  push += pd * -subdir;
  movei mi(push.at, push.spin);
  push += wstep;
  if(valid(mi)) return mi;
  if(c2->type&1) {
  push = push + wstep - subdir + wstep;
  if(valid(mi)) return mi;
  }
  if(gravityLevelDiff(push.at, c2) < 0) {
  push = push + wstep + 1 + wstep;
  if(gravityLevelDiff(push.at, c2) < 0) {
  push = push + wstep - 2 + wstep;
  }
  if(gravityLevelDiff(push.at, c2) < 0) {
  push = push + wstep + 1 + wstep;
  }
  movei mi = movei(c2, (push+wstep).spin);
  if(valid(mi)) return mi;
  }
  return movei(c2, NO_SPACE);
  }
#line 1012 "mapeffects.cpp"
  void explodeAround(cell *c);
#line 1052 "mapeffects.cpp"
  bool earthMove(const movei& mi);
#line 1066 "mapeffects.cpp"
  bool cellDangerous(cell *c);

  // implemented in: menus.cpp

#line 15 "menus.cpp"
  extern ld whatever[16];
#line 16 "menus.cpp"
  extern int whateveri[16];
#line 24 "menus.cpp"
  void showOverview();
#line 218 "menus.cpp"
  void editScale();
#line 224 "menus.cpp"
  extern const char *wdmodes[7];
#line 225 "menus.cpp"
  extern const char *mdmodes[6];
#line 226 "menus.cpp"
  extern const char *hlmodes[3];
#line 228 "menus.cpp"
  void showGraphQuickKeys();
#line 261 "menus.cpp"
  void enable_cheat();
#line 285 "menus.cpp"
  void switchHardcore_quiet();
#line 294 "menus.cpp"
  void switchHardcore();
#line 303 "menus.cpp"
  void switch_casual();
#line 320 "menus.cpp"
  void showCreative();
#line 397 "menus.cpp"
  void show_achievement_eligibility();
#line 434 "menus.cpp"
  void show_chaos();
#line 490 "menus.cpp"
  extern string custom_welcome;
#line 496 "menus.cpp"
  void show_custom();
#line 555 "menus.cpp"
  void mode_higlights();
#line 722 "menus.cpp"
  eLandStructure default_land_structure();
#line 731 "menus.cpp"
  void menuitem_land_structure(char key);
#line 740 "menus.cpp"
  void showChangeMode();
#line 840 "menus.cpp"
  extern bool showstartmenu;
#line 842 "menus.cpp"
  bool showHalloween();
#line 869 "menus.cpp"
  void showStartMenu();
#line 1131 "menus.cpp"
  struct named_functionality {
  std::string first;
  reaction_t second;
  explicit named_functionality() = default;
  explicit named_functionality(std::string s, reaction_t r) : first(std::move(s)), second(std::move(r)) {}
  friend bool operator==(const named_functionality& a, const named_functionality& b) { return a.first == b.first; }
  friend bool operator!=(const named_functionality& a, const named_functionality& b) { return a.first != b.first; }
  };
  inline named_functionality named_dialog(string x, reaction_t dialog) { return named_functionality(x, [dialog] () { pushScreen(dialog); }); }
#line 1143 "menus.cpp"
  using o_funcs = vector<named_functionality>;
#line 1146 "menus.cpp"
  extern hookset<void(o_funcs&)> hooks_o_key;
#line 1148 "menus.cpp"
  named_functionality get_o_key();
#line 1201 "menus.cpp"
  extern int messagelogpos;
#line 1202 "menus.cpp"
  extern int timeformat;
#line 1203 "menus.cpp"
  extern int stampbase;
#line 1205 "menus.cpp"
  string gettimestamp(msginfo& m);
#line 1229 "menus.cpp"
  void showMessageLog();

  // implemented in: mobile.cpp

  #if ISMOBILE
#line 48 "mobile.cpp"
  extern bool clicked;
#line 49 "mobile.cpp"
  extern bool buttonclicked;
#line 199 "mobile.cpp"
  void mobile_draw(MOBPAR_FORMAL);
  #endif

  // implemented in: models.cpp

  namespace polygonal {
#line 23 "models.cpp"
    static constexpr int MSI = 120;
#line 30 "models.cpp"
    extern int SI;
#line 31 "models.cpp"
    extern ld  STAR;
#line 33 "models.cpp"
    extern int deg;
#line 39 "models.cpp"
    extern ld coefr[MSI], coefi[MSI]; 
#line 40 "models.cpp"
    extern int maxcoef, coefid;
#line 42 "models.cpp"
    void solve();
#line 82 "models.cpp"
    pair<ld, ld> compute(ld x, ld y, int prec);
#line 107 "models.cpp"
    pair<ld, ld> compute(ld x, ld y);
    }
#line 111 "models.cpp"
  inline bool mdAzimuthalEqui() { return (mdinf[pmodel].flags & mf::azimuthal) && (mdinf[pmodel].flags & (mf::equidistant | mf::equiarea | mf::equivolume) && !(mdinf[pmodel].flags & mf::twopoint)); }
  inline bool mdBandAny() { return mdinf[pmodel].flags & mf::pseudocylindrical; }
  inline bool mdPseudocylindrical() { return mdBandAny() && !(mdinf[pmodel].flags & mf::cylindrical); }
  namespace models {
#line 147 "models.cpp"
    extern trans23 rotation;
#line 148 "models.cpp"
    extern int do_rotate;
#line 149 "models.cpp"
    extern bool model_straight, model_straight_yz, camera_straight;
#line 152 "models.cpp"
    void ori_to_scr(hyperpoint& h);
#line 153 "models.cpp"
    void ori_to_scr(transmatrix& h);
#line 156 "models.cpp"
    void scr_to_ori(hyperpoint& h);
#line 157 "models.cpp"
    void scr_to_ori(transmatrix& h);
#line 159 "models.cpp"
    transmatrix rotmatrix();
#line 166 "models.cpp"
    extern cld spiral_multiplier;
#line 167 "models.cpp"
    extern ld spiral_cone_rad;
#line 168 "models.cpp"
    extern bool ring_not_spiral;
#line 171 "models.cpp"
    extern transmatrix euclidean_spin;
#line 173 "models.cpp"
    void configure();
#line 206 "models.cpp"
    extern bool desitter_projections;
#line 208 "models.cpp"
    extern vector<bool_reaction_t> avail_checkers;
#line 210 "models.cpp"
    bool model_available(eModel pm);
#line 237 "models.cpp"
    bool has_orientation(eModel m);
#line 244 "models.cpp"
    int get_broken_coord(eModel m);
#line 250 "models.cpp"
    bool is_hyperboloid(eModel m);
#line 254 "models.cpp"
    bool is_perspective(eModel m);
#line 258 "models.cpp"
    bool is_3d(const projection_configuration& p);
#line 263 "models.cpp"
    bool has_transition(eModel m);
#line 267 "models.cpp"
    bool product_model(eModel m);
#line 275 "models.cpp"
    string get_model_name(eModel m);
#line 329 "models.cpp"
    void edit_formula();
#line 360 "models.cpp"
    void model_list();
#line 420 "models.cpp"
    void model_menu();
#line 711 "models.cpp"
    void quick_model();
    #if CAP_COMMANDLINE
#line 797 "models.cpp"
    eModel read_model(const string& ss);
    #endif
    }

  // implemented in: monstergen.cpp

#line 11 "monstergen.cpp"
  extern int avengers, mirrorspirits, wandering_jiangshi, jiangshi_on_screen, splitrocks;
#line 13 "monstergen.cpp"
  extern bool timerghost;
#line 14 "monstergen.cpp"
  extern bool gen_wandering;
#line 16 "monstergen.cpp"
  int buildIvy(cell *c, int children, int minleaf);
#line 49 "monstergen.cpp"
  void chasmify(cell *c);
#line 61 "monstergen.cpp"
  void chasmifyEarth(cell *c);
#line 86 "monstergen.cpp"
  void chasmifyElemental(cell *c);
#line 113 "monstergen.cpp"
  eMonster crossroadsMonster();
#line 139 "monstergen.cpp"
  eMonster wanderingCrossroadsMonster();
#line 146 "monstergen.cpp"
  int palaceHP();
#line 162 "monstergen.cpp"
  int hardness_empty();
#line 166 "monstergen.cpp"
  bool redtrolls(cell *c);
#line 173 "monstergen.cpp"
  eMonster pickTroll(cell *c);
#line 180 "monstergen.cpp"
  void dieTroll(cell *c, eMonster m);
#line 187 "monstergen.cpp"
  int reptilemax();
#line 237 "monstergen.cpp"
  int getGhostTimer();
#line 241 "monstergen.cpp"
  int getGhostcount();
#line 256 "monstergen.cpp"
  bool canReachPlayer(cell *cf, eMonster m);
#line 280 "monstergen.cpp"
  bool haveOrbPower();
#line 294 "monstergen.cpp"
  bool haveKraken();
#line 302 "monstergen.cpp"
  eItem wanderingTreasure(cell *c);
#line 325 "monstergen.cpp"
  void wandering();
#line 793 "monstergen.cpp"
  void generateSnake(cell *c, int i, int snakecolor);

  // implemented in: monstermove.cpp

#line 12 "monstermove.cpp"
  extern int turncount;
#line 14 "monstermove.cpp"
  extern int mutantphase;
#line 16 "monstermove.cpp"
  extern int sagephase;
#line 19 "monstermove.cpp"
  extern vector<cell*> targets;
#line 24 "monstermove.cpp"
  extern vector<pair<cell*, int> > butterflies;
#line 26 "monstermove.cpp"
  void addButterfly(cell *c);
#line 36 "monstermove.cpp"
  void makeTrollFootprints(cell *c);
#line 42 "monstermove.cpp"
  bool hasPrincessWeapon(eMonster m);
#line 46 "monstermove.cpp"
  void sageheat(cell *c, double v);
#line 58 "monstermove.cpp"
  void moveEffect(const movei& mi, eMonster m);
#line 113 "monstermove.cpp"
  void check_beauty(cell *ct, cell *cf, eMonster m);
#line 129 "monstermove.cpp"
  void moveMonster(const movei& mi);
#line 348 "monstermove.cpp"
  bool cannotGo(eMonster m, cell *c);
#line 354 "monstermove.cpp"
  bool wantsToStay(eMonster m);
#line 358 "monstermove.cpp"
  bool batsAfraid(cell *c);
#line 377 "monstermove.cpp"
  int angledist(int t, int d1, int d2);
#line 385 "monstermove.cpp"
  int angledistButterfly(int t, int d1, int d2, bool mirrored);
#line 392 "monstermove.cpp"
  int angledist(cell *c, int d1, int d2);
#line 396 "monstermove.cpp"
  bool anglestraight(cell *c, int d1, int d2);
#line 400 "monstermove.cpp"
  int bulldist(cell *c);
#line 406 "monstermove.cpp"
  int bulldistance(cell *c, cell *d);
#line 413 "monstermove.cpp"
  int landheattype(cell *c);
#line 423 "monstermove.cpp"
  int moveval(cell *c1, cell *c2, int d, flagtype mf);
#line 546 "monstermove.cpp"
  int stayval(cell *c, flagtype mf);
#line 572 "monstermove.cpp"
  int totalbulldistance(cell *c, int k);
#line 582 "monstermove.cpp"
  void determinizeBull(cell *c, vector<int>& posdir);
#line 599 "monstermove.cpp"
  int determinizeBullPush(cellwalker bull);
#line 615 "monstermove.cpp"
  int pickMoveDirection(cell *c, flagtype mf);
#line 634 "monstermove.cpp"
  int pickDownDirection(cell *c, flagtype mf);
#line 656 "monstermove.cpp"
  void beastAttack(cell *c, bool player, bool targetdir);
#line 692 "monstermove.cpp"
  extern bool quantum;
#line 694 "monstermove.cpp"
  cell *moveNormal(cell *c, flagtype mf);
#line 779 "monstermove.cpp"
  void mountmove(const movei& mi, bool fp);
#line 804 "monstermove.cpp"
  void moveWorm(cell *c);
#line 944 "monstermove.cpp"
  void ivynext(cell *c);
#line 980 "monstermove.cpp"
  void removeIvy(cell *c);
#line 997 "monstermove.cpp"
  void moveivy();
#line 1067 "monstermove.cpp"
  bool isTargetOrAdjacent(cell *c);
#line 1074 "monstermove.cpp"
  void groupmove2(const movei& mi, eMonster movtype, flagtype mf);
#line 1181 "monstermove.cpp"
  void groupmove(eMonster movtype, flagtype mf);
#line 1244 "monstermove.cpp"
  void moveHexSnake(const movei& mi, bool mounted);
#line 1270 "monstermove.cpp"
  void snakeAttack(cell *c, bool mounted);
#line 1281 "monstermove.cpp"
  bool goodmount(cell *c, bool mounted);
#line 1286 "monstermove.cpp"
  int inpair(cell *c, int colorpair);
#line 1290 "monstermove.cpp"
  int snake_pair(cell *c);
#line 1298 "monstermove.cpp"
  void hexvisit(cell *c, cell *from, int d, bool mounted, int colorpair);
#line 1333 "monstermove.cpp"
  void movehex(bool mounted, int colorpair);
#line 1362 "monstermove.cpp"
  void movehex_rest(bool mounted);
#line 1394 "monstermove.cpp"
  void movemutant();
#line 1442 "monstermove.cpp"
  #define SHSIZE 16
#line 1445 "monstermove.cpp"
  extern vector<array<cell*, MAXPLAYER>> shpos;
#line 1446 "monstermove.cpp"
  extern int cshpos;
#line 1448 "monstermove.cpp"
  extern cell *lastmountpos[MAXPLAYER];
#line 1450 "monstermove.cpp"
  void clearshadow();
#line 1457 "monstermove.cpp"
  void kill_shadow_at(cell *c);
#line 1464 "monstermove.cpp"
  void moveshadow();
#line 1501 "monstermove.cpp"
  void moveghosts();
#line 1558 "monstermove.cpp"
  int stayvalue(eMonster m, cell *c);
#line 1568 "monstermove.cpp"
  int movevalue(eMonster m, cell *c, int dir, flagtype flags);
#line 1675 "monstermove.cpp"
  void movegolems(flagtype flags);
#line 1772 "monstermove.cpp"
  void moveButterflies();
#line 1795 "monstermove.cpp"
  void specialMoves();
#line 1962 "monstermove.cpp"
  void moveworms();
#line 1971 "monstermove.cpp"
  void refreshFriend(cell *c);
#line 1980 "monstermove.cpp"
  void consMove(cell *c, eMonster param);
#line 2006 "monstermove.cpp"
  void moveNormals(eMonster param);
#line 2027 "monstermove.cpp"
  void movehex_all();
#line 2036 "monstermove.cpp"
  void movemonsters();
#line 2163 "monstermove.cpp"
  bool nogoSlow(cell *to, cell *from);
#line 2169 "monstermove.cpp"
  void beastcrash(cell *c, cell *beast);
#line 2207 "monstermove.cpp"
  void stayEffect(cell *c);
#line 2220 "monstermove.cpp"
  int realstuntime(cell *c);

  // implemented in: netgen.cpp

  #if CAP_MODEL
  namespace netgen {
#line 76 "netgen.cpp"
    extern int mode;
#line 78 "netgen.cpp"
    void buildVertexInfo(cell *c, transmatrix V);
#line 771 "netgen.cpp"
    void run();
    }
  #endif

  // implemented in: nofont.cpp

  #if CAP_TABFONT
#line 132 "nofont.cpp"
  void resetTabFont();
#line 136 "nofont.cpp"
  void loadCompressedChar(int &otwidth, int &otheight, unsigned char *tpix);
  #endif
  #if CAP_CREATEFONT
#line 161 "nofont.cpp"
  void generateFont(int ch, SDL_Surface *txt);
  #endif

  // implemented in: nonisotropic.cpp

  namespace nisot {
#line 13 "nonisotropic.cpp"
    extern bool local_perspective_used;
#line 15 "nonisotropic.cpp"
    extern bool geodesic_movement;
#line 17 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h, ld co IS(1));
    }
  #if !CAP_SOLV
  namespace sn {
#line 46 "nonisotropic.cpp"
    always_false in();
    }
  #endif
  #if CAP_SOLV
  namespace sn {
#line 53 "nonisotropic.cpp"
    bool in();
#line 55 "nonisotropic.cpp"
    eGeometryClass geom();
#line 60 "nonisotropic.cpp"
    typedef array<float, 3> compressed_point;
    
    inline hyperpoint decompress(compressed_point p) { return point3(p[0], p[1], p[2]); }
    inline compressed_point compress(hyperpoint h) { return make_array<float>(h[0], h[1], h[2]); }
    
    struct tabled_inverses {
    int PRECX, PRECY, PRECZ;
    vector<compressed_point> tab;
    string fname;
    bool loaded;
    
    void load();
    hyperpoint get(ld ix, ld iy, ld iz, bool lazy);
    
    compressed_point& get_int(int ix, int iy, int iz) { return tab[(iz*PRECY+iy)*PRECX+ix]; }
    
    GLuint texture_id;
    bool toload;
    
    GLuint get_texture_id();
    
    tabled_inverses(string s) : fname(s), texture_id(0), toload(true) {}  
    };
#line 173 "nonisotropic.cpp"
    ld x_to_ix(ld u);
#line 187 "nonisotropic.cpp"
    ld ix_to_x(ld ix);
#line 199 "nonisotropic.cpp"
    ld z_to_iz(ld z);
#line 205 "nonisotropic.cpp"
    ld iz_to_z(ld iz);
#line 218 "nonisotropic.cpp"
    hyperpoint azeq_to_table(hyperpoint x);
#line 227 "nonisotropic.cpp"
    hyperpoint table_to_azeq(hyperpoint x);
#line 454 "nonisotropic.cpp"
    pair<heptagon*,heptagon*> getcoord(heptagon *h);
#line 458 "nonisotropic.cpp"
    heptagon *get_at(heptagon *h1, heptagon *h2, bool gen);
#line 464 "nonisotropic.cpp"
    extern string common;
#line 521 "nonisotropic.cpp"
    hyperpoint get_inverse_exp_symsol(hyperpoint h, flagtype flags);
#line 541 "nonisotropic.cpp"
    hyperpoint get_inverse_exp_nsym(hyperpoint h, flagtype flags);
#line 558 "nonisotropic.cpp"
    extern string shader_symsol;
#line 605 "nonisotropic.cpp"
    extern string shader_nsymsol;
#line 643 "nonisotropic.cpp"
    extern string shader_nsym;
#line 665 "nonisotropic.cpp"
    extern ld solrange_xy;
#line 666 "nonisotropic.cpp"
    extern ld solrange_z;
#line 668 "nonisotropic.cpp"
    bool in_table_range(hyperpoint h);
#line 672 "nonisotropic.cpp"
    extern tabled_inverses solt;
#line 673 "nonisotropic.cpp"
    extern tabled_inverses niht;
#line 674 "nonisotropic.cpp"
    extern tabled_inverses sont;
#line 676 "nonisotropic.cpp"
    tabled_inverses& get_tabled();
#line 685 "nonisotropic.cpp"
    int approx_distance(heptagon *h1, heptagon *h2);
#line 694 "nonisotropic.cpp"
    void create_faces();
    }
  #endif
  namespace nilv {
#line 750 "nonisotropic.cpp"
    /** nmSym is the rotationally symmetric model of Nil, while nmHeis is the Heisenberg model. */
    constexpr ld nmSym = 0, nmHeis = 1;
#line 755 "nonisotropic.cpp"
    extern ld model_used;
#line 758 "nonisotropic.cpp"
    ld sym_to_heis_bonus(const hyperpoint& H);
#line 762 "nonisotropic.cpp"
    hyperpoint convert(hyperpoint H, ld from, ld to);
#line 767 "nonisotropic.cpp"
    void convert_ref(hyperpoint& H, ld from, ld to);
#line 771 "nonisotropic.cpp"
    void convert_tangent_ref(hyperpoint at, hyperpoint& v, ld from, ld to);
#line 775 "nonisotropic.cpp"
    void convert_ref(transmatrix& T, ld from, ld to);
#line 783 "nonisotropic.cpp"
    hyperpoint checked_convert(hyperpoint H, ld from, ld to);
#line 816 "nonisotropic.cpp"
    hyperpoint formula_exp(hyperpoint v);
#line 837 "nonisotropic.cpp"
    hyperpoint get_inverse_exp(hyperpoint h, flagtype prec IS(pNORMAL));
#line 879 "nonisotropic.cpp"
    string nilshader();
#line 908 "nonisotropic.cpp"
    struct mvec : array<int, 3> {
    /** these are in nmHeis */
    explicit mvec() = default;
    constexpr explicit mvec(int x, int y, int z) : array<int, 3>{{x, y, z}} {}
    mvec inverse() {  
    auto& a = *this;
    return mvec(-a[0], -a[1], -a[2]+a[1] * a[0]); 
    }
    mvec operator * (const mvec b) {
    auto& a = *this;
    return mvec(a[0] + b[0], a[1] + b[1], a[2] + b[2] + a[0] * b[1]);
    }
    };
#line 925 "nonisotropic.cpp"
    extern ld nilwidth;
#line 930 "nonisotropic.cpp"
    struct nilstructure {
    vector<mvec> movevectors;
    vector<vector<hyperpoint>> facevertices;
    };
#line 936 "nonisotropic.cpp"
    hyperpoint heis(ld x, ld y, ld z);
#line 966 "nonisotropic.cpp"
    nilstructure& current_ns();
#line 968 "nonisotropic.cpp"
    extern array<int,3> nilperiod, nilperiod_edit;
#line 971 "nonisotropic.cpp"
    transmatrix adjmatrix(int i);
#line 1016 "nonisotropic.cpp"
    mvec get_coord(heptagon *h);
#line 1018 "nonisotropic.cpp"
    heptagon *get_heptagon_at(mvec m);
#line 1020 "nonisotropic.cpp"
    void set_flags();
#line 1028 "nonisotropic.cpp"
    hyperpoint on_geodesic(hyperpoint s0, hyperpoint s1, ld x);
#line 1034 "nonisotropic.cpp"
    color_t colorize(cell *c, char whichCanvas);
#line 1055 "nonisotropic.cpp"
    void prepare_niltorus3();
#line 1060 "nonisotropic.cpp"
    void show_niltorus3();
#line 1099 "nonisotropic.cpp"
    void create_faces();
    }
#line 1111 "nonisotropic.cpp"
  bool in_s2xe();
#line 1112 "nonisotropic.cpp"
  bool in_h2xe();
#line 1113 "nonisotropic.cpp"
  bool in_e2xe();
  namespace hybrid {
#line 1117 "nonisotropic.cpp"
    extern eGeometry underlying;
#line 1118 "nonisotropic.cpp"
    extern geometry_information *underlying_cgip;
#line 1120 "nonisotropic.cpp"
    eGeometryClass under_class();
#line 1129 "nonisotropic.cpp"
    extern int csteps;
#line 1131 "nonisotropic.cpp"
    extern int disc_quotient;
#line 1133 "nonisotropic.cpp"
    extern map<heptagon*, short> altmap_heights;
#line 1135 "nonisotropic.cpp"
    void configure(eGeometry g);
#line 1174 "nonisotropic.cpp"
    void reconfigure();
#line 1183 "nonisotropic.cpp"
    extern hrmap *pmap;
#line 1184 "nonisotropic.cpp"
    extern geometry_information *pcgip;
#line 1185 "nonisotropic.cpp"
    extern eGeometry actual_geometry;
#line 1188 "nonisotropic.cpp"
    template<class T> auto in_actual(const T& t) -> decltype(t()) {
    if(pmap == nullptr) return t();
    dynamicval<eGeometry> g(geometry, actual_geometry);
    dynamicval<geometry_information*> gc(cgip, pcgip);
    dynamicval<hrmap*> gu(currentmap, pmap);
    dynamicval<hrmap*> gup(pmap, NULL);
    return t();  
    }
    
    #define PIA(x) hr::hybrid::in_actual([&] { return (x); })
#line 1215 "nonisotropic.cpp"
    vector<int>& make_shift(cell *c);
#line 1221 "nonisotropic.cpp"
    int& get_shift_current(cellwalker cw);
#line 1225 "nonisotropic.cpp"
    bool have_shift(cellwalker cw);
#line 1229 "nonisotropic.cpp"
    int get_shift(cellwalker cw0);
#line 1273 "nonisotropic.cpp"
    void ensure_shifts(cell *c);
#line 1289 "nonisotropic.cpp"
    int cycle_discrepancy(cellwalker cw0);
#line 1301 "nonisotropic.cpp"
    void fix_bounded_cycles();
#line 1401 "nonisotropic.cpp"
    cell *get_at(cell *base, int level);
#line 1405 "nonisotropic.cpp"
    pair<cell*, int> get_where(cell *c);
#line 1407 "nonisotropic.cpp"
    void find_cell_connection(cell *c, int d);
#line 1430 "nonisotropic.cpp"
    hrmap* get_umap();
#line 1433 "nonisotropic.cpp"
    template<class T> auto in_underlying_geometry(const T& f) -> decltype(f()) {
    if(!mhybrid && !gproduct) return f();
    if(embedded_plane) {
    if(cgi.emb->is_euc_in_product()) {
    dynamicval<eGeometryClass> dgc(cginf.g.kind, cginf.g.sig[2] < 0 ? gcHyperbolic : gcSphere);
    return f();
    }
    if(cgi.emb->is_cylinder()) {
    dynamicval<eGeometryClass> dgc(cginf.g.kind, cginf.g.sig[2] < 0 ? gcHyperbolic : gcSphere);
    return f();
    }
    geom3::light_flip(true);
    finalizer ff([] { geom3::light_flip(false); });
    return f();
    }
    if(geom3::flipped) throw hr_exception("called in_underlying_geometry in flipped");
    pcgip = cgip;
    dynamicval<eGeometry> gag(actual_geometry, geometry);
    dynamicval<eGeometry> g(geometry, underlying);
    dynamicval<int> gss(underlying_cgip->single_step, cgi.single_step);
    dynamicval<int> gsp(underlying_cgip->psl_steps, cgi.psl_steps);
    dynamicval<geometry_information*> gc(cgip, underlying_cgip);
    dynamicval<hrmap*> gpm(pmap, currentmap);
    dynamicval<hrmap*> gm(currentmap, get_umap());
    return f();
    }
    
    #define PIU(x) hr::hybrid::in_underlying_geometry([&] { return (x); })
#line 1464 "nonisotropic.cpp"
    void switch_to_underlying();
#line 1479 "nonisotropic.cpp"
    void switch_to_actual();
#line 1488 "nonisotropic.cpp"
    hyperpoint get_corner(cell *c, int i, int next, ld z);
#line 1533 "nonisotropic.cpp"
    vector<pair<int, cell*>> gen_sample_list();
#line 1547 "nonisotropic.cpp"
    void will_link(cell *c);
#line 1549 "nonisotropic.cpp"
    extern bool in_link;
#line 1551 "nonisotropic.cpp"
    void link();
#line 1575 "nonisotropic.cpp"
    int celldistance(cell *c1, cell *c2);
#line 1602 "nonisotropic.cpp"
    void configure_period();
    }
  namespace product {
#line 1716 "nonisotropic.cpp"
    extern bool current_spin_invalid, cmirror;
#line 1717 "nonisotropic.cpp"
    extern int cspin;
#line 1720 "nonisotropic.cpp"
    hyperpoint inverse_exp(hyperpoint h);
#line 1742 "nonisotropic.cpp"
    hyperpoint direct_exp(hyperpoint h);
#line 1752 "nonisotropic.cpp"
    bool validate_spin();
#line 1774 "nonisotropic.cpp"
    void show_config();
    }
  namespace slr {
#line 1814 "nonisotropic.cpp"
    extern ld range_xy;
#line 1817 "nonisotropic.cpp"
    extern ld range_z;
#line 1820 "nonisotropic.cpp"
    extern int shader_iterations;
#line 1822 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h);
#line 1831 "nonisotropic.cpp"
    hyperpoint polar(ld r, ld theta, ld phi);
#line 1835 "nonisotropic.cpp"
    hyperpoint xyz_point(ld x, ld y, ld z);
#line 1841 "nonisotropic.cpp"
    hyperpoint get_inverse_exp(shiftpoint h);
#line 2018 "nonisotropic.cpp"
    extern string slshader;
    }
  namespace rots {
#line 2162 "nonisotropic.cpp"
    extern ld underlying_scale;
    #if MAXMDIM >= 4
#line 2165 "nonisotropic.cpp"
    transmatrix uxpush(ld x);
#line 2170 "nonisotropic.cpp"
    transmatrix uypush(ld y);
#line 2175 "nonisotropic.cpp"
    transmatrix uzpush(ld z);
#line 2180 "nonisotropic.cpp"
    transmatrix lift_matrix(const transmatrix& T);
#line 2196 "nonisotropic.cpp"
    extern std::map<int, transmatrix> saved_matrices_ray;
#line 2260 "nonisotropic.cpp"
    transmatrix qtm(hyperpoint h);
#line 2307 "nonisotropic.cpp"
    extern bool drawing_underlying;
#line 2309 "nonisotropic.cpp"
    void draw_underlying(bool cornermode);
#line 2373 "nonisotropic.cpp"
    hyperpoint formula_exp(hyperpoint vel);
    #endif
    }
  namespace stretch {
#line 2437 "nonisotropic.cpp"
    extern ld factor;
#line 2439 "nonisotropic.cpp"
    extern bool mstretch;
#line 2441 "nonisotropic.cpp"
    extern transmatrix m_itoa, m_atoi, m_pd;
#line 2442 "nonisotropic.cpp"
    extern ld ms_christoffel[3][3][3];
#line 2444 "nonisotropic.cpp"
    extern transmatrix mstretch_matrix;
#line 2446 "nonisotropic.cpp"
    void enable_mstretch();
#line 2557 "nonisotropic.cpp"
    bool applicable();
#line 2561 "nonisotropic.cpp"
    bool in();
#line 2565 "nonisotropic.cpp"
    transmatrix translate(hyperpoint h);
#line 2575 "nonisotropic.cpp"
    transmatrix itranslate(hyperpoint h);
#line 2589 "nonisotropic.cpp"
    ld squared();
#line 2593 "nonisotropic.cpp"
    ld not_squared();
#line 2597 "nonisotropic.cpp"
    hyperpoint isometric_to_actual(const hyperpoint at, const hyperpoint velocity);
#line 2604 "nonisotropic.cpp"
    hyperpoint actual_to_isometric(const hyperpoint at, const hyperpoint velocity);
#line 2611 "nonisotropic.cpp"
    hyperpoint christoffel(const hyperpoint at, const hyperpoint velocity, const hyperpoint transported);
#line 2637 "nonisotropic.cpp"
    ld sqnorm(hyperpoint at, hyperpoint h);
#line 2644 "nonisotropic.cpp"
    vector<hyperpoint> inverse_exp_all(hyperpoint h, int generations);
    }
  namespace nisot {
#line 2778 "nonisotropic.cpp"
    hyperpoint christoffel(const hyperpoint at, const hyperpoint velocity, const hyperpoint transported);
#line 2787 "nonisotropic.cpp"
    bool in_table_range(hyperpoint h);
#line 2794 "nonisotropic.cpp"
    hyperpoint get_acceleration(const hyperpoint& at, const hyperpoint& vel);
#line 2798 "nonisotropic.cpp"
    void geodesic_step(hyperpoint& at, hyperpoint& vel);
#line 2809 "nonisotropic.cpp"
    extern int rk_steps;
#line 2811 "nonisotropic.cpp"
    hyperpoint numerical_exp(hyperpoint v);
#line 2819 "nonisotropic.cpp"
    transmatrix parallel_transport_bare(transmatrix Pos, hyperpoint h);
#line 2910 "nonisotropic.cpp"
    void fixmatrix(transmatrix& T);
#line 2919 "nonisotropic.cpp"
    transmatrix parallel_transport(const transmatrix Position, const hyperpoint direction);
#line 2925 "nonisotropic.cpp"
    transmatrix lie_transport(const transmatrix Position, const hyperpoint direction);
#line 2932 "nonisotropic.cpp"
    transmatrix spin_towards(const transmatrix Position, const hyperpoint goal, flagtype prec IS(pNORMAL));
#line 2944 "nonisotropic.cpp"
    hrmap *new_map();
    }

  // implemented in: orbgen.cpp

#line 14 "orbgen.cpp"
  enum eOrbLandRelation { 
  olrForbidden, // never appears: forbidden
  olrDangerous, // never appears: would be dangerous
  olrUseless,   // never appears: useless here
  olrNoPrizes,  // no prizes in this land
  olrNoPrizeOrb,// orb not allowed as a prize
  olrPrize25,   // prize for collecting 25
  olrPrize3,    // prize for collecting 3
  olrNative,    // native orb in this land
  olrNative1,   // native orb in this land (1)
  olrGuest,     // extra orb in this land
  olrPNative,   // Land of Power: native
  olrPBasic,    // Land of Power: basic orbs
  olrPPrized,   // Land of Power: prized orbs
  olrPNever,    // Land of Power: foreign orbs
  olrHub,       // hub lands
  olrMonster,   // available from a monster
  olrAlways,    // always available
  olrBurns      // burns
  };
#line 37 "orbgen.cpp"
  namespace orbgenflags {
  // generates in the given land from 10 treasures, in the classic mode
  static constexpr int LOCAL10 = 1;
  // generates in the Crossroads from 10 treasures, in the classic mode
  static constexpr int CROSS10 = 2;
  // generates in other places from 25 treasures, in the classic mode
  static constexpr int GLOBAL25 = 4;
  // in OSM you get it once at 10 treasures
  static constexpr int OSM_AT10 = 8;
  
  
  // 'native' functions return this
  static constexpr int NATIVE = 64;
  // 'local' orb will be also placed in OSM (at 25 treasures); needs LOCAL10
  static constexpr int OSM_LOCAL25 = 128;
  // 'crossroads' orb will be also placed in OSM (at 50 treasures)
  static constexpr int OSM_CROSS50 = 256;
  // 'crossroads' orb will be also placed in OSM (at 25 treasures)
  static constexpr int OSM_CROSS25 = 512;
  // 'global' orb will be also placed in OSM (at 100 treasures)
  static constexpr int OSM_GLOBAL100 = 1024;
  // do not create in the Crossroads in the tactics mode
  static constexpr int NO_TACTIC = (1<<11);
  // guest Orb
  static constexpr int GUEST = (1<<12);
  
  // typical combinations
  static constexpr int S_NATIVE = LOCAL10 | CROSS10 | GLOBAL25 | NATIVE;
  static constexpr int S_GUEST  = LOCAL10 | OSM_AT10 | GUEST;
  static constexpr int S_YENDOR = S_NATIVE | OSM_LOCAL25 | OSM_CROSS50 | OSM_GLOBAL100 | NO_TACTIC;
  static constexpr int S_NAT_NT = S_NATIVE | NO_TACTIC;
  static constexpr int S_NA_O25 = S_NATIVE | OSM_CROSS25;
  }
  
  struct orbinfo {
  int flags;
  eLand l;
  int lchance;
  int gchance;
  eItem orb;
  bool is_native() const { using namespace orbgenflags; return flags & NATIVE; }
  };
#line 81 "orbgen.cpp"
  extern vector<orbinfo> orbinfos;
#line 176 "orbgen.cpp"
  eItem nativeOrbType(eLand l);
#line 196 "orbgen.cpp"
  extern string olrDescriptions[18];
#line 217 "orbgen.cpp"
  eOrbLandRelation getOLR(eItem it, eLand l);
#line 415 "orbgen.cpp"
  int orbsUnlocked();
#line 423 "orbgen.cpp"
  ld orbprizefun(int tr);
#line 429 "orbgen.cpp"
  ld orbcrossfun(int tr);
#line 436 "orbgen.cpp"
  bool buildPrizeMirror(cell *c, int freq);
#line 445 "orbgen.cpp"
  extern cellwalker cwt;
#line 448 "orbgen.cpp"
  eLand getPrizeLand(cell *c IS(cwt.at));
#line 459 "orbgen.cpp"
  void placePrizeOrb(cell *c);
#line 511 "orbgen.cpp"
  int treasureForLocal();
#line 515 "orbgen.cpp"
  bool extra_safety_for_memory(cell *c);
#line 525 "orbgen.cpp"
  void placeLocalOrbs(cell *c);
#line 567 "orbgen.cpp"
  void placeLocalSpecial(cell *c, int outof, int loc IS(1), int priz IS(1));
#line 576 "orbgen.cpp"
  void placeCrossroadOrbs(cell *c);
#line 613 "orbgen.cpp"
  void placeOceanOrbs(cell *c);

  // implemented in: orbs.cpp

#line 12 "orbs.cpp"
  extern array<bool, ittypes> orbused;
#line 13 "orbs.cpp"
  extern array<bool, ittypes> lastorbused;
#line 15 "orbs.cpp"
  bool markOrb(eItem it);
#line 21 "orbs.cpp"
  bool markEmpathy(eItem it);
#line 28 "orbs.cpp"
  bool markEmpathy2(eItem it);
#line 35 "orbs.cpp"
  bool markOrb2(eItem it);
#line 42 "orbs.cpp"
  int fixpower(int qty, bool checking);
#line 47 "orbs.cpp"
  void useupOrb(eItem it, int qty);
#line 52 "orbs.cpp"
  void drainOrb(eItem it, int target IS(0));
#line 56 "orbs.cpp"
  void empathyMove(const movei& mi);
#line 81 "orbs.cpp"
  int intensify(int val);
#line 85 "orbs.cpp"
  bool reduceOrbPower(eItem it, int cap);
#line 107 "orbs.cpp"
  void reduceOrbPowerAlways(eItem it);
#line 114 "orbs.cpp"
  void reverse_curse(eItem curse, eItem orb, bool cancel);
#line 127 "orbs.cpp"
  void reduceOrbPowers();
#line 229 "orbs.cpp"
  void flashAlchemist(cell *c);
#line 236 "orbs.cpp"
  void flashCell(cell *c, eMonster killer, flagtype flags);
#line 299 "orbs.cpp"
  void activateFlashFrom(cell *cf, eMonster who, flagtype flags);
#line 316 "orbs.cpp"
  bool distanceBound(cell *c1, cell *c2, int d);
#line 324 "orbs.cpp"
  void checkFreedom(cell *cf);
#line 360 "orbs.cpp"
  void activateFlash();
#line 378 "orbs.cpp"
  bool reflectingBarrierAt(cell *c);
#line 385 "orbs.cpp"
  bool reflectingBarrierAt(cellwalker& c, int d);
#line 401 "orbs.cpp"
  void killAdjacentSharks(cell *c);
#line 425 "orbs.cpp"
  void castLightningBolt(cellwalker lig);
#line 558 "orbs.cpp"
  void castLightningBoltFrom(cell *c);
#line 563 "orbs.cpp"
  void activateLightning();
#line 587 "orbs.cpp"
  bool haveRangedTarget();
#line 615 "orbs.cpp"
  void teleportTo(cell *dest);
#line 667 "orbs.cpp"
  bool jumpTo(orbAction a, cell *dest, eItem byWhat, int bonuskill IS(0), eMonster dashmon IS(moNone), cell *phasecell IS(nullptr));
#line 846 "orbs.cpp"
  eMonster summonedAt(cell *dest);
#line 1071 "orbs.cpp"
  void checkStunKill(cell *dest);
#line 1212 "orbs.cpp"
  bool monstersnearO(orbAction a, cell *c);
#line 1221 "orbs.cpp"
  bool isCheck(orbAction a);
#line 1222 "orbs.cpp"
  bool isWeakCheck(orbAction a);
#line 1224 "orbs.cpp"
  movei blowoff_destination_dir(cell *c, int& di, int rev);
#line 1239 "orbs.cpp"
  movei blowoff_destination(cell *c, int& di);
#line 1244 "orbs.cpp"
  int check_jump(cell *cf, cell *ct, flagtype flags, cell*& jumpthru);
#line 1260 "orbs.cpp"
  int check_phase(cell *cf, cell *ct, flagtype flags, cell*& jumpthru);
#line 1276 "orbs.cpp"
  cell *common_neighbor(cell *cf, cell *ct);
#line 1283 "orbs.cpp"
  void apply_impact(cell *c);
#line 1296 "orbs.cpp"
  int check_vault(cell *cf, cell *ct, flagtype flags, cell*& jumpthru);
#line 1314 "orbs.cpp"
  extern bool disable_orb_range;
#line 1316 "orbs.cpp"
  eItem targetRangedOrb(cell *c, orbAction a);
#line 1683 "orbs.cpp"
  int orbcharges(eItem it);
#line 1805 "orbs.cpp"
  bool isShmupLifeOrb(eItem it);
#line 1813 "orbs.cpp"
  void makelava(cell *c, int i);
#line 1821 "orbs.cpp"
  void orboflava(int i);

  // implemented in: passable.cpp

#line 15 "passable.cpp"
  bool againstCurrent(cell *w, cell *from);
#line 32 "passable.cpp"
  bool boatGoesThrough(cell *c);
#line 44 "passable.cpp"
  void become_water(cell *c);
#line 53 "passable.cpp"
  void placeWater(cell *c, cell *c2);
#line 63 "passable.cpp"
  int incline(cell *cfrom, cell *cto);
#line 69 "passable.cpp"
  bool checkflags(flagtype flags, flagtype x);
#line 85 "passable.cpp"
  bool strictlyAgainstGravity(cell *w, cell *from, bool revdir, flagtype flags);
#line 91 "passable.cpp"
  bool anti_alchemy(cell *w, cell *from);
#line 105 "passable.cpp"
  #define P_MONSTER    Flag(0)  // can move through monsters
  #define P_MIRROR     Flag(1)  // can move through mirrors
  // unused
  #define P_WIND       Flag(3)  // can move against the wind
  #define P_GRAVITY    Flag(4)  // can move against the gravity
  #define P_ISPLAYER   Flag(5)  // player-only moves (like the Round Table jump)
  #define P_ONPLAYER   Flag(6)  // always can step on the player
  #define P_FLYING     Flag(7)  // is flying
  #define P_BULLET     Flag(8)  // bullet can fly through more things
  #define P_MIRRORWALL Flag(9)  // mirror images go through mirror walls
  #define P_JUMP1      Flag(10) // first part of a jump
  #define P_JUMP2      Flag(11) // second part of a jump
  #define P_TELE       Flag(12) // teleport onto
  #define P_BLOW       Flag(13) // Orb of Air -- blow, or push
  #define P_AETHER     Flag(14) // aethereal
  #define P_FISH       Flag(15) // swimming
  #define P_WINTER     Flag(16) // fire resistant
  #define P_USEBOAT    Flag(17) // can use boat
  #define P_NOAETHER   Flag(18) // disable AETHER
  #define P_FRIENDSWAP Flag(19) // can move on friends (to swap with tem)
  #define P_ISFRIEND   Flag(20) // is a friend (can use Empathy + Winter/Aether/Fish combo)
  #define P_LEADER     Flag(21) // can push statues and use boats
  #define P_MARKWATER  Flag(22) // mark Orb of Water as used
  #define P_EARTHELEM  Flag(23) // Earth Elemental
  #define P_WATERELEM  Flag(24) // Water Elemental
  #define P_IGNORE37   Flag(25) // ignore the triheptagonal board
  #define P_CHAIN      Flag(26) // for chaining moves with boats
  #define P_DEADLY     Flag(27) // suicide moves allowed
  #define P_ROSE       Flag(28) // rose smell
  #define P_CLIMBUP    Flag(29) // allow climbing up
  #define P_CLIMBDOWN  Flag(30) // allow climbing down
  #define P_REPTILE    Flag(31) // is reptile
  #define P_VOID       Flag(32) // void beast
  #define P_PHASE      Flag(33) // phasing movement
  #define P_PULLMAGNET Flag(34) // pull the other part of the magnet
  #define P_WATERCURSE Flag(35) // Curse of Water
#line 143 "passable.cpp"
  bool passable(cell *w, cell *from, flagtype flags);
#line 289 "passable.cpp"
  extern vector<pair<cell*, int> > airmap;
#line 291 "passable.cpp"
  int airdist(cell *c);
#line 299 "passable.cpp"
  ld calcAirdir(cell *c);
#line 323 "passable.cpp"
  bool againstWind(cell *cto, cell *cfrom);
#line 342 "passable.cpp"
  bool ghostmove(eMonster m, cell* to, cell* from, flagtype extra);
#line 416 "passable.cpp"
  bool canPushStatueOn(cell *c, flagtype flags);
#line 423 "passable.cpp"
  void moveBoat(const movei& mi);
#line 434 "passable.cpp"
  void moveBoatIfUsingOne(const movei& mi);
#line 462 "passable.cpp"
  bool againstPair(cell *c1, cell *c2, eMonster m);
#line 468 "passable.cpp"
  bool notNearItem(cell *c);
#line 473 "passable.cpp"
  bool isNeighbor1(cell *f, cell *w);
#line 477 "passable.cpp"
  bool passable_for(eMonster m, cell *w, cell *from, flagtype extra);
#line 597 "passable.cpp"
  eMonster movegroup(eMonster m);
#line 599 "passable.cpp"
  bool logical_adjacent(cell *c1, eMonster m1, cell *c2);
#line 613 "passable.cpp"
  void buildAirmap();
#line 629 "passable.cpp"
  extern int rosewave, rosephase;
#line 638 "passable.cpp"
  extern map<cell*, int> rosemap;
#line 640 "passable.cpp"
  int rosedist(cell *c);
#line 648 "passable.cpp"
  bool againstRose(cell *cfrom, cell *cto);
#line 654 "passable.cpp"
  bool withRose(cell *cfrom, cell *cto);
#line 660 "passable.cpp"
  void buildRosemap();
#line 697 "passable.cpp"
  bool scentResistant();

  // implemented in: patterns.cpp

#line 14 "patterns.cpp"
  int emerald_heptagon(int parent, int dir);
#line 377 "patterns.cpp"
  int emerald_hexagon(int a, int b, int c);
#line 1020 "patterns.cpp"
  int firstfiftyval(int d);
#line 1025 "patterns.cpp"
  int nextfiftyval(int par, int gpar, int d);
#line 1034 "patterns.cpp"
  int land50(int x);
#line 1036 "patterns.cpp"
  bool polara50(int x);
#line 1038 "patterns.cpp"
  bool polarb50(int x);
#line 1040 "patterns.cpp"
  int cdist50(int x);
#line 1062 "patterns.cpp"
  extern int zebratable6[28][3];
#line 1073 "patterns.cpp"
  int zebra_heptagon(int parent, int dir);
#line 1125 "patterns.cpp"
  int fifty_38(int f, int d);

  // implemented in: pcmove.cpp

#line 12 "pcmove.cpp"
  extern int illegal_moves;
#line 14 "pcmove.cpp"
  extern bool keepLightning;
#line 16 "pcmove.cpp"
  extern bool seenSevenMines;
#line 19 "pcmove.cpp"
  extern bool hauntedWarning;
#line 22 "pcmove.cpp"
  extern bool survivalist;
#line 24 "pcmove.cpp"
  void fail_survivalist();
#line 29 "pcmove.cpp"
  extern bool invismove;
#line 31 "pcmove.cpp"
  extern bool invisfish;
#line 34 "pcmove.cpp"
  extern bool flipplayer;
#line 37 "pcmove.cpp"
  extern cellwalker cwt;
#line 39 "pcmove.cpp"
  cell*& singlepos();
#line 40 "pcmove.cpp"
  inline bool singleused();
#line 43 "pcmove.cpp"
  extern bool playermoved;
#line 46 "pcmove.cpp"
  extern int  cheater;
#line 49 "pcmove.cpp"
  extern bool landvisited[landtypes];
#line 51 "pcmove.cpp"
  extern int noiseuntil; // noise until the given turn
#line 53 "pcmove.cpp"
  void createNoise(int t);
#line 60 "pcmove.cpp"
  enum eLastmovetype { lmSkip, lmMove, lmAttack, lmPush, lmTree, lmInstant };
  extern eLastmovetype lastmovetype, nextmovetype;
  
  enum eForcemovetype { fmSkip, fmMove, fmAttack, fmInstant, fmActivate };
  extern eForcemovetype forcedmovetype;
#line 67 "pcmove.cpp"
  extern bool hit_anything;
  namespace orbbull {
#line 80 "pcmove.cpp"
    void gainBullPowers();
#line 86 "pcmove.cpp"
    void check();
    }
#line 207 "pcmove.cpp"
  extern cell *lastmove;
#line 212 "pcmove.cpp"
  struct pcmove {
  bool switchplaces;
  bool checkonly;
  bool errormsgs;
  int origd;
  bool fmsMove, fmsAttack, fmsActivate;
  int d;
  int subdir;
  /** used to tell perform_actual_move() that this is a boat move and thus we should not pick up items */
  bool boatmove;
  bool good_tortoise;
  flagtype attackflags;
  
  bool movepcto();
  bool actual_move();
  bool stay();
  bool after_instant(bool kl);
  
  bool perform_actual_move();
  bool after_move();
  bool perform_move_or_jump();
  bool swing();
  bool boat_move();
  bool after_escape();
  bool move_if_okay();
  bool attack();
  
  bool checkNeedMove(bool checkonly, bool attacking);
  
  void tell_why_cannot_attack();
  void tell_why_impassable();
  void handle_friendly_ivy();
  bool try_shooting(bool auto_target);
  
  movei mi, mip;
  pcmove() : mi(nullptr, nullptr, 0), mip(nullptr, nullptr, 0) {}
  
  bool vmsg(moveissue mi);
  
  bool vmsg(int code, int subissue_code, cell *where, eMonster m) {
  moveissue mi;
  mi.type = code;
  mi.subtype = subissue_code;
  mi.monster = m;
  mi.where = where;
  return vmsg(mi);
  }
  
  bool vmsg_threat() {
  return vmsg(miTHREAT, siMONSTER, who_kills_me_cell, who_kills_me);
  }
  };
#line 266 "pcmove.cpp"
  extern cell *global_pushto;
#line 274 "pcmove.cpp"
  bool movepcto(int d, int subdir IS(1), bool checkonly IS(false));
#line 525 "pcmove.cpp"
  void copy_metadata(cell *x, const gcell *y);
#line 541 "pcmove.cpp"
  
  extern void playSound(cell *c, const string& fname, int vol);
  
  /** \brief A structure to keep track of changes made during the player movement.
  *
  *  This is a singleton object, \link hr::changes \endlink.
  */
  
  struct changes_t {
  vector<reaction_t> rollbacks;
  vector<reaction_t> commits;
  bool on;
  bool checking;
  
  /**
  * \brief Start keeping track of changes, perform changes.
  *
  * init(false) if you intend to commit the changes (if successful), or 
  * init(true) if you just want to check whether the move would be successful, 
  * without performing it if it is.
  */
  
  void init(bool ch) {
  on = true; 
  ccell(cwt.at);
  forCellEx(c1, cwt.at) ccell(c1);
  value_keep(kills);
  value_keep(items);
  value_keep(orbused);
  value_keep(hrngen);
  checking = ch;
  }
  
  /** \brief Commit the changes. Should only be called after init(false). */
  
  void commit() { 
  on = false; 
  for(auto& p: commits) p();
  rollbacks.clear();
  commits.clear();
  }
  
  /** \brief Rollback the changes. */
  
  void rollback(int pos = 0) { 
  on = false;
  while(!rollbacks.empty()) {
  rollbacks.back()();
  rollbacks.pop_back();
  }
  rollbacks.clear();
  commits.clear();
  }
  
  /** \brief The changes to cell c will be rolled back when rollback() is called. */
  void ccell(cell *c) {
  if(!on) return;
  gcell a = *c;
  rollbacks.push_back([c, a] { copy_metadata(c, &a); });
  }
  
  /** \brief Set the value of what to value. This change will be rolled back if necessary. */
  template<class T> void value_set(T& what, T value) {
  if(!on) { what = value; return; }
  if(what == value) return;
  T old = what;
  rollbacks.push_back([&what, old] { what = old; });
  what = value;
  }
  
  /** \brief Add step to the value of what. This change will be rolled back if necessary. */
  
  template<class T> void value_add(T& what, T step) {
  value_keep(what); what += step;
  }
  
  template<class T> void value_inc(T& what) { value_add(what, 1); }
  
  /** \brief Any change to the value of what will be rolled back if necessary. */
  
  template<class T> void value_keep(T& what) {
  if(!on) return;
  T old = what;
  rollbacks.push_back([&what, old] { what = old; });
  }
  
  /** \brief Like value_keep but for maps. */
  
  template<class T, class U, class V> void map_value(map<T, U>& vmap, V& key) {
  if(vmap.count(key)) {
  auto val = vmap[key];
  at_rollback([&vmap, key, val] { vmap[key] = val; });
  }
  else {
  at_rollback([&vmap, key] { vmap.erase(key); });
  }
  }
  
  /** \brief Perform the given action on commit. @see LATE */
  
  void at_commit(reaction_t act) {
  if(!on) act();
  else commits.emplace_back(act);
  }
  
  /** \brief Perform the given action on rollback. */
  
  void at_rollback(reaction_t act) {
  if(on) rollbacks.emplace_back(act);
  }
  
  void push_push(cell *tgt) {
  pushes.push_back(tgt);
  auto v = [] { pushes.pop_back(); };
  rollbacks.push_back(v);
  commits.push_back(v);
  }
  };
#line 662 "pcmove.cpp"
  extern changes_t changes;
#line 673 "pcmove.cpp"
  int chaos_mirror_dir(int dir, cellwalker src, cellwalker dst);
#line 679 "pcmove.cpp"
  template<class T> void swap_data(T& data, cell *c1, cell *c2) {
  changes.map_value(data, c1);
  changes.map_value(data, c2);
  if(data.count(c1) && data.count(c2))
  swap(data[c1], data[c2]);
  else if(data.count(c1))
  data[c2] = data[c1], data.erase(c1);
  else if(data.count(c2))
  data[c1] = data[c2], data.erase(c2);
  }
#line 877 "pcmove.cpp"
  void tortoise_hero_message(cell *c2);
#line 1145 "pcmove.cpp"
  void rusalka_curse();
#line 1254 "pcmove.cpp"
  bool chaos_forbidden(cell *c);
#line 1258 "pcmove.cpp"
  int fatigue_cost(const movei& mi);
#line 1440 "pcmove.cpp"
  inline bool movepcto(const movedir& md) { return movepcto(md.d, md.subdir); }
#line 1443 "pcmove.cpp"
  extern bool warning_shown;
#line 1445 "pcmove.cpp"
  bool warningprotection(const string& s);
#line 1471 "pcmove.cpp"
  bool warningprotection_hit(eMonster m);
#line 1477 "pcmove.cpp"
  bool playerInWater();
#line 1484 "pcmove.cpp"
  int numplayers();
#line 1488 "pcmove.cpp"
  vector<cell*> player_positions();
#line 1496 "pcmove.cpp"
  vector<int> player_indices();
#line 1504 "pcmove.cpp"
  cell *playerpos(int i);
#line 1510 "pcmove.cpp"
  bool allPlayersInBoats();
#line 1516 "pcmove.cpp"
  int whichPlayerOn(cell *c);
#line 1523 "pcmove.cpp"
  bool isPlayerOn(cell *c);
#line 1527 "pcmove.cpp"
  bool isPlayerInBoatOn(cell *c, int i);
#line 1534 "pcmove.cpp"
  bool playerInBoat(int i);
#line 1538 "pcmove.cpp"
  bool isPlayerInBoatOn(cell *c);
#line 1543 "pcmove.cpp"
  bool playerInPower();
#line 1552 "pcmove.cpp"
  void playerMoveEffects(movei mi);
#line 1608 "pcmove.cpp"
  void afterplayermoved();
#line 1619 "pcmove.cpp"
  void produceGhost(cell *c, eMonster victim, eMonster who);
#line 1628 "pcmove.cpp"
  bool swordAttack(cell *mt, eMonster who, cell *c, int bb);
#line 1671 "pcmove.cpp"
  void swordAttackStatic(int bb);
#line 1675 "pcmove.cpp"
  void swordAttackStatic();
#line 1681 "pcmove.cpp"
  extern int plague_kills;
#line 1683 "pcmove.cpp"
  void spread_plague(cell *mf, cell *mt, int dir, eMonster who);
#line 1691 "pcmove.cpp"
  void sideAttackAt(cell *mf, int dir, cell *mt, eMonster who, eItem orb, cell *pf);
#line 1750 "pcmove.cpp"
  void sideAttack(cell *mf, int dir, eMonster who, int bonus, eItem orb);
#line 1761 "pcmove.cpp"
  void sideAttack(cell *mf, int dir, eMonster who, int bonuskill);
#line 1776 "pcmove.cpp"
  eMonster do_we_stab_a_friend(movei mi, eMonster who);
#line 1796 "pcmove.cpp"
  void wouldkill(const char *msg);
#line 1811 "pcmove.cpp"
  void movecost(cell* from, cell *to, int phase);

  // implemented in: polygons.cpp

  #if CAP_SHAPES
#line 14 "polygons.cpp"
  static constexpr ld NEWSHAPE = (-13.5);
#line 374 "polygons.cpp"
  #define SHADMUL (hr__S3==4 ? 1.05 : 1.3)
#line 1647 "polygons.cpp"
  extern vector<long double> polydata;
  #endif

  // implemented in: quit.cpp

#line 11 "quit.cpp"
  bool quitsaves();
#line 16 "quit.cpp"
  bool needConfirmationEvenIfSaved();
#line 20 "quit.cpp"
  bool needConfirmation();
#line 25 "quit.cpp"
  int getgametime();
#line 29 "quit.cpp"
  ld getgametime_precise();
#line 33 "quit.cpp"
  string getgametime_s(int timespent IS(getgametime()));
#line 37 "quit.cpp"
  extern bool display_yasc_codes;
#line 62 "quit.cpp"
  void noaction();
#line 64 "quit.cpp"
  extern function<void()> cancel;
#line 67 "quit.cpp"
  struct hint {
  time_t last;
  function<bool()> usable;
  function<void()> display;
  function<void()> action;  
  };
#line 75 "quit.cpp"
  extern hint hints[];
#line 314 "quit.cpp"
  extern int hinttoshow;
#line 329 "quit.cpp"
  void showGameMenu();
#line 587 "quit.cpp"
  string safety_help();
#line 600 "quit.cpp"
  void handleKeyQuit(int sym, int uni);
#line 664 "quit.cpp"
  int counthints();
#line 668 "quit.cpp"
  void showMissionScreen();

  // implemented in: quotient.cpp

  namespace quotientspace {
#line 30 "quotient.cpp"
    extern int rvadd;
#line 31 "quotient.cpp"
    extern int rvdir;
#line 36 "quotient.cpp"
    constexpr int symmask = (1<<30);
    
    struct code {
    vector<int> connections;
    
    bool operator == (const code &c2) const { return connections == c2.connections; }
    bool operator < (const code &c2) const { return connections < c2.connections; }
    
    };
    
    struct hrmap_quotient : hrmap_standard {
    
    hrmap_hyperbolic base;
    
    vector<cell*> celllist;
    
    cell *origin;
    
    map<quotientspace::code, int> reachable;
    vector<heptspin> bfsq;
    
    vector<int> connections;
    
    void add(const heptspin& hs);
    
    vector<heptagon*> allh;
    
    void generate_connections();
    
    void build();
    
    explicit hrmap_quotient() {
    generate_connections();    
    build();
    }
    
    explicit hrmap_quotient(const vector<int>& con) : connections(con) {
    build();
    }
    
    heptagon *getOrigin() override { return allh[0]; }
    
    ~hrmap_quotient() {
    for(int i=0; i<isize(allh); i++) {
    clearHexes(allh[i]);
    tailored_delete(allh[i]);
    }
    }
    
    vector<cell*>& allcells() override { return celllist; }
    };
#line 425 "quotient.cpp"
    struct hrmap_quotient* new_map();
    }

  // implemented in: racing.cpp

  namespace racing {
    #if CAP_RACING
#line 17 "racing.cpp"
    extern bool guiding;
#line 19 "racing.cpp"
    extern bool on;
#line 20 "racing.cpp"
    extern bool player_relative;
#line 21 "racing.cpp"
    extern bool standard_centering;
#line 22 "racing.cpp"
    extern bool track_ready;
#line 23 "racing.cpp"
    extern bool official_race;
#line 27 "racing.cpp"
    extern ld race_advance;
#line 32 "racing.cpp"
    extern int ghosts_to_show;
#line 33 "racing.cpp"
    extern int ghosts_to_save;
#line 43 "racing.cpp"
    extern vector<cell*> track;
#line 46 "racing.cpp"
    extern int trophy[MAXPLAYER];
#line 52 "racing.cpp"
    extern int race_start_tick, race_finish_tick[MAXPLAYER];
#line 82 "racing.cpp"
    extern map<eLand, int> best_scores;
#line 83 "racing.cpp"
    extern map<eLand, int> best_scores_to_save;
    #if CAP_FILES && CAP_EDIT
#line 108 "racing.cpp"
    void save_ghosts(hstream& f);
#line 112 "racing.cpp"
    void load_ghosts(hstream& f);
    #endif
#line 276 "racing.cpp"
    void block_cells(vector<cell*> to_block, function<bool(cell*)> blockbound);
#line 333 "racing.cpp"
    void make_bounded_track(cell *s);
#line 369 "racing.cpp"
    extern bool bounded_track;
#line 371 "racing.cpp"
    void generate_track();
#line 466 "racing.cpp"
    extern vector<cell*> reachable_goals;
#line 468 "racing.cpp"
    void restore_goals();
#line 473 "racing.cpp"
    void configure_track(bool gen);
#line 666 "racing.cpp"
    void reset_race();
#line 702 "racing.cpp"
    extern trans23 race_angle;
#line 704 "racing.cpp"
    bool force_standard_centering();
#line 708 "racing.cpp"
    bool use_standard_centering();
#line 712 "racing.cpp"
    transmatrix track_matrix(int at, int dir);
#line 727 "racing.cpp"
    bool set_view();
#line 861 "racing.cpp"
    extern vector<eLand> race_lands;
#line 888 "racing.cpp"
    string racetimeformat(int t);
#line 906 "racing.cpp"
    void load_official_track();
    #if MAXMDIM >= 4
#line 1078 "racing.cpp"
    void thurston_racing();
    #endif
#line 1212 "racing.cpp"
    void configure_race();
#line 1239 "racing.cpp"
    void displayScore(eLand l);
#line 1261 "racing.cpp"
    extern int pause_limit;
#line 1263 "racing.cpp"
    bool started();
#line 1267 "racing.cpp"
    bool finished();
#line 1272 "racing.cpp"
    void race_won();
#line 1362 "racing.cpp"
    int get_percentage(cell *c);
#line 1366 "racing.cpp"
    int get_percentage(int i);
#line 1377 "racing.cpp"
    void drawStats();
#line 1403 "racing.cpp"
    void markers();
#line 1443 "racing.cpp"
    void add_debug(cell *c);
    #if MAXMDIM >= 4
#line 1454 "racing.cpp"
    void start_thurston();
    #endif
    #endif
    #if !CAP_RACING
#line 1465 "racing.cpp"
    extern always_false on;
    #endif
    }

  // implemented in: radar.cpp

  #if MAXMDIM >= 4
#line 53 "radar.cpp"
  void addradar(const shiftmatrix& V, char ch, color_t col, color_t outline, bool distant IS(false));
#line 60 "radar.cpp"
  void addradar(const shiftpoint h1, const shiftpoint h2, color_t col);
  #endif
#line 91 "radar.cpp"
  void draw_radar(bool cornermode);
  #if MAXMDIM < 4
#line 198 "radar.cpp"
  void addradar(const shiftmatrix& V, char ch, color_t col, color_t outline);
  #endif

  // implemented in: raycaster.cpp

  namespace ray {
    #if CAP_RAY
#line 20 "raycaster.cpp"
    extern bool in_use;
#line 21 "raycaster.cpp"
    extern bool comparison_mode;
#line 24 "raycaster.cpp"
    extern int want_use;
#line 27 "raycaster.cpp"
    extern bool fixed_map;
#line 29 "raycaster.cpp"
    extern ld exp_start;
#line 30 "raycaster.cpp"
    extern ld exp_decay_exp;
#line 31 "raycaster.cpp"
    extern ld exp_decay_poly;
#line 39 "raycaster.cpp"
    extern int gms_array_size;
#line 41 "raycaster.cpp"
    extern ld maxstep_sol;
#line 42 "raycaster.cpp"
    extern ld maxstep_nil;
#line 43 "raycaster.cpp"
    extern ld maxstep_pro;
#line 44 "raycaster.cpp"
    extern ld maxstep_intra;
#line 45 "raycaster.cpp"
    extern ld minstep;
#line 47 "raycaster.cpp"
    extern ld reflect_val;
#line 51 "raycaster.cpp"
    extern ld hard_limit;
#line 53 "raycaster.cpp"
    extern int max_iter_intra;
#line 54 "raycaster.cpp"
    extern int max_iter_sol;
#line 55 "raycaster.cpp"
    extern int max_iter_iso;
#line 56 "raycaster.cpp"
    extern int max_iter_eyes;
#line 58 "raycaster.cpp"
    extern int max_cells;
#line 59 "raycaster.cpp"
    extern bool rays_generate;
#line 61 "raycaster.cpp"
    ld& exp_decay_current();
#line 67 "raycaster.cpp"
    int& max_iter_current();
#line 74 "raycaster.cpp"
    bool is_eyes();
#line 82 "raycaster.cpp"
    bool is_stepbased();
#line 86 "raycaster.cpp"
    bool horos();
#line 112 "raycaster.cpp"
    bool available();
#line 146 "raycaster.cpp"
    bool requested();
#line 162 "raycaster.cpp"
    struct raycaster : glhr::GLprogram {
    GLint uStart, uStartid, uM, uLength;
    GLint uWallstart, uWallX, uWallY;
    GLint tConnections, tWallcolor, tTextureMap, tVolumetric, tStart;
    GLint uBinaryWidth, uPLevel, uLP, uStraighten, uReflectX, uReflectY;
    GLint uLinearSightRange, uExpStart, uExpDecay;
    GLint uBLevel;
    GLint uWallOffset, uSides;
    GLint uITOA, uATOI;
    GLint uToOrig, uFromOrig;
    GLint uProjection;
    GLint uEyeShift, uAbsUnit;
    GLint uMirrorShift;
    
    GLint tM, uInvLengthM;
    GLint tWall, uInvLengthWall;
    
    GLint tPortalConnections;
    raycaster(string vsh, string fsh);
    };
#line 279 "raycaster.cpp"
    extern hookset<void(string&, string&)> hooks_rayshader;
#line 280 "raycaster.cpp"
    extern hookset<bool(shared_ptr<raycaster>)> hooks_rayset;
#line 2144 "raycaster.cpp"
    transmatrix get_ms(cell *c, int a, bool mirror);
#line 2174 "raycaster.cpp"
    transmatrix mirrorize(transmatrix T);
#line 2501 "raycaster.cpp"
    extern bool reset_rmap;
#line 2503 "raycaster.cpp"
    cell* rmap_get_by_id(int id);
#line 2507 "raycaster.cpp"
    int rmap_get_id_of(cell *c);
#line 2511 "raycaster.cpp"
    void reset_raycaster();
#line 2517 "raycaster.cpp"
    void reset_raycaster_map();
#line 2521 "raycaster.cpp"
    void load_walls(vector<glvertex>& wallx, vector<glvertex>& wally, vector<GLint>& wallstart);
#line 2537 "raycaster.cpp"
    void rayfix(cell*& cs, transmatrix& T, transmatrix& msm);
#line 2562 "raycaster.cpp"
    extern int ods_prec;
#line 2564 "raycaster.cpp"
    void cast();
    namespace volumetric {
#line 2895 "raycaster.cpp"
      extern bool on;
#line 2897 "raycaster.cpp"
      extern map<cell*, color_t> vmap;
#line 2901 "raycaster.cpp"
      void enable();
#line 2908 "raycaster.cpp"
      void random_fog();
#line 2914 "raycaster.cpp"
      void menu();
      }
#line 2966 "raycaster.cpp"
    void configure();
    #endif
    #if !CAP_RAY
#line 3181 "raycaster.cpp"
    extern always_false in_use;
#line 3182 "raycaster.cpp"
    extern always_false comparison_mode;
#line 3183 "raycaster.cpp"
    void reset_raycaster();
#line 3184 "raycaster.cpp"
    void cast();
    #endif
    }

  // implemented in: reg3.cpp

#line 15 "reg3.cpp"
  hyperpoint final_coords(hyperpoint h);
  namespace reg3 {
#line 71 "reg3.cpp"
    void make_vertices_only(vector<hyperpoint>& vo, const vector<vector<hyperpoint>>& csh);
    }
#line 83 "reg3.cpp"
  extern bool fix_stretch;
  #if MAXMDIM >= 4
  namespace reg3 {
#line 114 "reg3.cpp"
    extern int subcube_count;
#line 116 "reg3.cpp"
    extern flagtype coxeter_param;
#line 123 "reg3.cpp"
    inline short& altdist(heptagon *h) { return h->emeraldval; }
#line 126 "reg3.cpp"
    extern int extra_verification;
#line 128 "reg3.cpp"
    extern bool ultra_mirror_on;
#line 130 "reg3.cpp"
    bool ultra_mirror_in();
#line 132 "reg3.cpp"
    extern bool cubes_reg3;
#line 134 "reg3.cpp"
    bool in();
#line 140 "reg3.cpp"
    void compute_ultra();
#line 198 "reg3.cpp"
    void generate();
#line 362 "reg3.cpp"
    void generate_plain_subcubes();
#line 383 "reg3.cpp"
    void generate_coxeter(flagtype f);
#line 447 "reg3.cpp"
    void generate_special_subcubes(bool bch);
#line 642 "reg3.cpp"
    void generate_bch_oct();
#line 685 "reg3.cpp"
    void generate_subcells();
#line 731 "reg3.cpp"
    /** \brief vertex_adjacencies[heptagon id] is a list of other heptagons which are vertex adjacent 
    *  note: in case of ideal vertices this is just the face adjacency
    **/
    struct vertex_adjacency_info {
    /** id of the adjacent heptagon */
    int h_id;
    /** transition matrix to that heptagon */
    transmatrix T;
    /** the sequence of moves we need to make to get there */
    vector<int> move_sequence;
    };
    
    struct hrmap_closed3 : hrmap {
    vector<heptagon*> allh;
    vector<vector<vector<int>>> strafe_data;
    vector<vector<transmatrix>> tmatrices;    
    vector<vector<transmatrix>> tmatrices_cell;
    vector<cell*> acells;
    map<cell*, pair<int, int> > local_id; /* acells index, subshape index */
    vector<vector<cell*>> acells_by_master;
    vector<vector<vertex_adjacency_info> > vertex_adjacencies;
    vector<vector<vector<int>>> move_sequences;
    
    transmatrix adj(heptagon *h, int d) override { return tmatrices[h->fieldval][d]; }
    transmatrix adj(cell *c, int d) override { return tmatrices_cell[local_id.at(c).first][d]; }
    
    heptagon *getOrigin() override { return allh[0]; }
    
    transmatrix relative_matrixc(cell *h2, cell *h1, const hyperpoint& hint) override;
    
    void initialize(int cell_count);
    vector<cell*>& allcells() override { return acells; }
    
    ~hrmap_closed3() {
    clearfrom(getOrigin());
    }
    
    subcellshape& get_cellshape(cell *c) override {
    if(hr__PURE) return *cgi.heptshape ;
    int id = local_id.at(c).second;
    return cgi.subshapes[id];
    }
    
    transmatrix master_relative(cell *c, bool get_inverse) override {
    int id = local_id.at(c).second;
    auto& ss = cgi.subshapes[id];
    return get_inverse ? ss.from_cellcenter : ss.to_cellcenter;
    }
    
    void make_subconnections();
    
    int wall_offset(cell *c) override;
    int shvid(cell *c) override { return local_id.at(c).second; }
    
    transmatrix ray_iadj(cell *c, int i) override;
    
    cellwalker strafe(cellwalker cw, int j) override {
    int id = local_id.at(cw.at).first;
    return cellwalker(cw.at->cmove(j), strafe_data[id][j][cw.spin]);
    }
    
    const vector<int>& get_move_seq(cell *c, int i) override {
    int id = local_id.at(c).first;
    return move_sequences[id][i];
    }
    };
    
    struct hrmap_quotient3 : hrmap_closed3 { };
#line 818 "reg3.cpp"
    const vector<hyperpoint>& get_face_vertices(cell *c, int d);
#line 822 "reg3.cpp"
    int get_face_vertex_count(cell *c, int d);
    #if CAP_CRYSTAL
#line 1047 "reg3.cpp"
    crystal::coord decode_coord(int bits, int a);
    #endif
#line 1319 "reg3.cpp"
    extern bool minimize_quotient_maps;
#line 1321 "reg3.cpp"
    extern bool strafe_test;
#line 1757 "reg3.cpp"
    int get_aid(cell *c);
#line 1764 "reg3.cpp"
    int get_size_of_aid(int aid);
#line 1849 "reg3.cpp"
    const transmatrix& get_sphere_loc(int v);
#line 2479 "reg3.cpp"
    hrmap *new_alt_map(heptagon *o);
#line 2485 "reg3.cpp"
    extern int consider_rules;
#line 2487 "reg3.cpp"
    extern string replace_rule_file;
#line 2489 "reg3.cpp"
    string get_rule_filename(bool with_variations);
#line 2508 "reg3.cpp"
    bool variation_rule_available();
#line 2512 "reg3.cpp"
    bool pure_rule_available();
#line 2524 "reg3.cpp"
    void dump_rules(string fname);
#line 2529 "reg3.cpp"
    int rule_get_root(int i);
#line 2533 "reg3.cpp"
    const vector<short>& rule_get_children();
#line 2537 "reg3.cpp"
    const vector<int>& rule_get_childpos();
#line 2541 "reg3.cpp"
    hrmap* new_map();
#line 2556 "reg3.cpp"
    bool in_hrmap_h3();
#line 2560 "reg3.cpp"
    bool in_hrmap_rule_or_subrule();
#line 2564 "reg3.cpp"
    bool exact_rules();
#line 2569 "reg3.cpp"
    int quotient_count();
#line 2573 "reg3.cpp"
    int quotient_count_sub();
#line 2621 "reg3.cpp"
    int celldistance(cell *c1, cell *c2);
#line 2645 "reg3.cpp"
    bool pseudohept(cell *c);
#line 2690 "reg3.cpp"
    void generate_cellrotations();
    #endif
    #if MAXMDIM >= 4
#line 2818 "reg3.cpp"
    int matrix_order(const transmatrix A);
#line 2827 "reg3.cpp"
    void generate_fulls();
#line 2851 "reg3.cpp"
    void edit_variation();
#line 2910 "reg3.cpp"
    void configure_variation();
    }
  #endif
  #if MAXMDIM == 3
  namespace reg3 {
#line 2922 "reg3.cpp"
    bool in();
#line 2923 "reg3.cpp"
    bool in_rule();
#line 2924 "reg3.cpp"
    extern bool cubes_reg3;
#line 2925 "reg3.cpp"
    bool exact_rules();
    }
  #endif

  // implemented in: renderbuffer.cpp

#line 40 "renderbuffer.cpp"
  struct renderbuffer {
  bool valid;
  int x, y;
  
  #if CAP_GL
  int tx, ty;
  GLuint FramebufferName;
  GLuint renderedTexture;
  GLuint depth_stencil_rb;
  Uint32 *expanded_data;
  void use_as_texture();
  #endif
  #if CAP_SDL
  SDL_Surface *srf;
  void make_surface();
  SDL_Surface *render();
  #endif
  
  renderbuffer(int x, int y, bool gl);
  ~renderbuffer();
  void enable();
  void clear(color_t col);
  };
  
  struct resetbuffer {
  GLint drawFboId, readFboId;
  #if CAP_SDL
  SDL_Surface *sreset;
  #endif
  resetbuffer();
  void reset();
  };
#line 172 "renderbuffer.cpp"
  extern int current_rbuffer;

  // implemented in: rug.cpp

  #if CAP_RUG
#line 18 "rug.cpp"
  extern bool rug_failure;
  namespace rug {
#line 22 "rug.cpp"
    extern bool mouse_control_rug;
#line 24 "rug.cpp"
    extern transmatrix rugView;
#line 26 "rug.cpp"
    extern ld lwidth;
#line 28 "rug.cpp"
    bool in_crystal();
#line 33 "rug.cpp"
    struct edge {
    struct rugpoint *target;
    ld len;
    };
    
    struct dexp_data {
    hyperpoint params;
    hyperpoint cont;
    ld remaining_distance;
    };
    
    struct rugpoint {
    double x1, y1;
    bool valid;
    bool inqueue;
    double dist;
    shiftpoint h;      // point in the represented space
    hyperpoint native; // point in the native space
    hyperpoint precompute;
    vector<edge> edges;
    vector<edge> anticusp_edges;
    // Find-Union algorithm
    rugpoint *glue;
    rugpoint *getglue() {
    return glue ? (glue = glue->getglue()) : this;
    }
    hyperpoint& gluenative() {
    return glue->native;
    }
    rugpoint() { glue = NULL; }
    void glueto(rugpoint *x) {
    x = x->getglue();
    auto y = getglue();
    if(x != y) y->glue = x;
    }
    int dexp_id;
    dexp_data surface_point;
    };
    
    struct triangle {
    rugpoint *m[3];
    triangle() { m[0] = m[1] = m[2] = nullptr; }
    triangle(rugpoint *m1, rugpoint *m2, rugpoint *m3) {
    m[0] = m1; m[1] = m2; m[2] = m3;
    }
    };
#line 81 "rug.cpp"
    extern vector<rugpoint*> points;
#line 82 "rug.cpp"
    extern vector<triangle> triangles;
#line 88 "rug.cpp"
    extern bool fast_euclidean;
#line 89 "rug.cpp"
    extern bool good_shape;
#line 90 "rug.cpp"
    extern bool subdivide_first;
#line 91 "rug.cpp"
    extern bool spatial_rug;
#line 93 "rug.cpp"
    extern bool subdivide_further();
#line 94 "rug.cpp"
    extern void subdivide();
#line 96 "rug.cpp"
    extern ld modelscale;
#line 97 "rug.cpp"
    extern ld model_distance;
#line 100 "rug.cpp"
    constexpr eGeometry rgHyperbolic = gSpace534;
    constexpr eGeometry rgEuclid = gCubeTiling;
    constexpr eGeometry rgSphere = gCell120;
    constexpr eGeometry rgElliptic = gECell120;
#line 106 "rug.cpp"
    extern eGeometry gwhere;
#line 109 "rug.cpp"
    #define USING_NATIVE_GEOMETRY_IN_RUG dynamicval<eGeometry> gw(geometry, rug::rugged ? hr::rug::gwhere : geometry)
    #define USING_NATIVE_GEOMETRY dynamicval<eGeometry> gw(geometry, hr::rug::gwhere)
#line 116 "rug.cpp"
    extern bool rugged;
#line 119 "rug.cpp"
    extern int vertex_limit;
#line 121 "rug.cpp"
    extern bool renderonce;
#line 122 "rug.cpp"
    extern int renderlate;
#line 123 "rug.cpp"
    extern bool rendernogl;
#line 124 "rug.cpp"
    extern int  texturesize;
#line 125 "rug.cpp"
    extern ld scale;
#line 127 "rug.cpp"
    extern ld anticusp_factor;
#line 128 "rug.cpp"
    extern ld anticusp_dist;
#line 130 "rug.cpp"
    extern ld err_zero;
#line 132 "rug.cpp"
    extern int queueiter, qvalid, dt;
#line 134 "rug.cpp"
    extern rugpoint *finger_center;
#line 135 "rug.cpp"
    extern ld finger_range;
#line 136 "rug.cpp"
    extern ld finger_force;
#line 140 "rug.cpp"
    bool perspective();
#line 152 "rug.cpp"
    void push_all_points(int coord, ld val);
#line 168 "rug.cpp"
    extern map<cell*, rugpoint*> rug_map;
#line 170 "rug.cpp"
    rugpoint *addRugpoint(shiftpoint h, double dist);
#line 273 "rug.cpp"
    rugpoint *findRugpoint(shiftpoint h);
#line 280 "rug.cpp"
    rugpoint *findOrAddRugpoint(shiftpoint h, double dist);
#line 291 "rug.cpp"
    bool edge_exists(rugpoint *e1, rugpoint *e2);
#line 311 "rug.cpp"
    void addTriangle(rugpoint *t1, rugpoint *t2, rugpoint *t3, ld len IS(1));
#line 339 "rug.cpp"
    void sort_rug_points();
#line 349 "rug.cpp"
    void calcparam_rug();
#line 360 "rug.cpp"
    struct clifford_torus {
    transmatrix T;
    transmatrix iT;
    ld xfactor, yfactor;
    bool flipped;
    hyperpoint xh, yh;
    hyperpoint torus_to_s4(hyperpoint t);  
    hyperpoint actual_to_torus(const hyperpoint& a) {
    return iT * a;
    }
    hyperpoint torus_to_actual(const hyperpoint& t) {
    return T * t;
    }
    clifford_torus();
    ld get_modelscale() {
    return hypot_d(2, xh) * xfactor * TAU;
    }
    ld compute_mx();  
    };
    #if MAXMDIM >= 4
#line 431 "rug.cpp"
    void buildTorusRug();
    #endif
#line 533 "rug.cpp"
    void verify();
#line 559 "rug.cpp"
    void buildRug();
#line 633 "rug.cpp"
    void enqueue(rugpoint *m);
#line 691 "rug.cpp"
    void preset(rugpoint *m);
#line 761 "rug.cpp"
    void optimize(rugpoint *m, bool do_preset);
#line 787 "rug.cpp"
    extern int divides;
#line 788 "rug.cpp"
    extern int precision_increases;
#line 791 "rug.cpp"
    bool subdivide_further();
#line 797 "rug.cpp"
    void subdivide();
#line 852 "rug.cpp"
    ld modeldist(const hyperpoint& h1, const hyperpoint& h2);
#line 948 "rug.cpp"
    void addNewPoints();
#line 978 "rug.cpp"
    void physics();
#line 1042 "rug.cpp"
    extern basic_textureinfo tinf;
#line 1064 "rug.cpp"
    extern struct renderbuffer *glbuf;
#line 1066 "rug.cpp"
    void prepareTexture();
#line 1103 "rug.cpp"
    extern bool no_fog;
#line 1105 "rug.cpp"
    extern ld lowrug;
#line 1106 "rug.cpp"
    extern ld hirug;
#line 1108 "rug.cpp"
    extern GLuint alternate_texture;
#line 1110 "rug.cpp"
    bool rug_control();
#line 1113 "rug.cpp"
    
    struct using_rugview {
    using_rugview() { if(rug_control()) swap(View, rugView), swap(geometry, gwhere); }
    ~using_rugview() { if(rug_control()) swap(View, rugView), swap(geometry, gwhere); }
    };
    
#line 1121 "rug.cpp"
    extern purehookset hooks_rugframe;
#line 1123 "rug.cpp"
    void drawRugScene();
#line 1161 "rug.cpp"
    extern transmatrix currentrot;
#line 1163 "rug.cpp"
    void close_glbuf();
#line 1168 "rug.cpp"
    void ensure_glbuf();
#line 1178 "rug.cpp"
    void reopen();
#line 1189 "rug.cpp"
    extern bool display_warning;
#line 1191 "rug.cpp"
    void init_model();
#line 1239 "rug.cpp"
    void reset_view();
#line 1247 "rug.cpp"
    void init();
#line 1254 "rug.cpp"
    void clear_model();
#line 1262 "rug.cpp"
    void close();
#line 1275 "rug.cpp"
    bool handlekeys(int sym, int uni);
#line 1318 "rug.cpp"
    void finger_on(int coord, ld val);
#line 1328 "rug.cpp"
    extern ld move_on_touch;
#line 1330 "rug.cpp"
    void actDraw();
#line 1380 "rug.cpp"
    shiftpoint gethyper(ld x, ld y);
#line 1504 "rug.cpp"
    string makehelp();
#line 1526 "rug.cpp"
    void rug_geometry_choice();
#line 1555 "rug.cpp"
    void show();
#line 1746 "rug.cpp"
    void select();
#line 1751 "rug.cpp"
    void rug_save(string fname);
#line 1791 "rug.cpp"
    void rug_load(string fname);
    }
  #endif
  #if !CAP_RUG
  namespace rug {
#line 1946 "rug.cpp"
    extern bool rugged;
#line 1947 "rug.cpp"
    extern bool renderonce;
#line 1948 "rug.cpp"
    extern bool rendernogl;
#line 1949 "rug.cpp"
    extern bool mouse_control_rug;
#line 1950 "rug.cpp"
    extern int texturesize;
#line 1951 "rug.cpp"
    extern ld scale;
#line 1952 "rug.cpp"
    bool rug_control();
#line 1953 "rug.cpp"
    bool in_crystal();
#line 1954 "rug.cpp"
    void reset_view();
#line 1955 "rug.cpp"
    void close();
#line 1957 "rug.cpp"
    struct using_rugview {};
    }
  #endif

  // implemented in: rulegen3.cpp

  #if MAXMDIM >= 4
  namespace rulegen {
#line 20 "rulegen3.cpp"
    extern map<int, shared_ptr<struct road_shortcut_trie_vertex>> road_shortcuts;
#line 27 "rulegen3.cpp"
    void add_road_shortcut(tcell *s, tcell *t);
#line 60 "rulegen3.cpp"
    extern int newcon;
#line 62 "rulegen3.cpp"
    void apply_road_shortcut(tcell *s);
#line 93 "rulegen3.cpp"
    extern map<vector<int>, int> roadsign_id;
#line 95 "rulegen3.cpp"
    int get_roadsign(twalker what);
#line 225 "rulegen3.cpp"
    extern int max_ignore_level_pre;
#line 226 "rulegen3.cpp"
    extern int max_ignore_level_post;
#line 227 "rulegen3.cpp"
    extern int max_ignore_time_pre;
#line 228 "rulegen3.cpp"
    extern int max_ignore_time_post;
#line 955 "rulegen3.cpp"
    void trace_relation(vector<int> path1, vector<int> path2, int id);
#line 972 "rulegen3.cpp"
    void make_path_important(tcell *s, vector<int> p);
#line 979 "rulegen3.cpp"
    void find_multiple_interpretation();
#line 1091 "rulegen3.cpp"
    extern int max_err_iter;
#line 1093 "rulegen3.cpp"
    void test_transducers();
#line 1342 "rulegen3.cpp"
    void check_upto(int lev, int t);
#line 1395 "rulegen3.cpp"
    void optimize();
#line 1480 "rulegen3.cpp"
    void check_road_shortcuts();
#line 1493 "rulegen3.cpp"
    void check_validity_3d();
#line 1518 "rulegen3.cpp"
    struct cycle {
    vector<int> dirs;
    vector<int> tids;
    vector<int> rdirs;
    bool operator < (const cycle& c2) const { return tie(dirs, tids, rdirs) < tie(c2.dirs, c2.tids, c2.rdirs); }
    };
#line 1526 "rulegen3.cpp"
    extern vector<vector<cycle>> cycle_data;
#line 1528 "rulegen3.cpp"
    void build_cycle_data();
#line 1698 "rulegen3.cpp"
    void cleanup3();
    }
  #endif

  // implemented in: savemem.cpp

#line 12 "savemem.cpp"
  static constexpr int PSEUDOKEY_MEMORY = 16397;
#line 15 "savemem.cpp"
  extern bool memory_saving_mode;
#line 17 "savemem.cpp"
  extern bool show_memory_warning;
#line 18 "savemem.cpp"
  extern bool ignored_memory_warning;
#line 22 "savemem.cpp"
  extern heptagon *last_cleared;
#line 24 "savemem.cpp"
  void destroycellcontents(cell *c);
#line 40 "savemem.cpp"
  extern vector<cell*> removed_cells;  
#line 96 "savemem.cpp"
  void save_memory();
#line 178 "savemem.cpp"
  extern purehookset hooks_removecells;
#line 180 "savemem.cpp"
  bool is_cell_removed(cell *c);
#line 184 "savemem.cpp"
  void set_if_removed(cell*& c, cell *val);
#line 190 "savemem.cpp"
  extern int reserve_count;
#line 191 "savemem.cpp"
  extern int reserve_limit;
#line 198 "savemem.cpp"
  extern purehookset hooks_clear_cache;
#line 209 "savemem.cpp"
  void apply_memory_reserve();
#line 233 "savemem.cpp"
  void memory_for_lib();
#line 237 "savemem.cpp"
  void show_memory_menu();
#line 291 "savemem.cpp"
  bool protect_memory();
#line 306 "savemem.cpp"
  bool memory_issues();

  // implemented in: scores.cpp

  #if CAP_SAVE
#line 412 "scores.cpp"
  extern map<int, int> qty_scores_for;
  #endif

  // implemented in: screenshot.cpp

#line 11 "screenshot.cpp"
  extern bool hide_hud;
#line 14 "screenshot.cpp"
  namespace shot { void default_screenshot_content(); }
  namespace svg {
    #if !CAP_SVG
#line 21 "screenshot.cpp"
    extern always_false in;
    #endif
    #if CAP_SVG
#line 31 "screenshot.cpp"
    extern bool in;
#line 33 "screenshot.cpp"
    extern bool remove_out;
#line 49 "screenshot.cpp"
    extern int divby;
#line 89 "screenshot.cpp"
    void circle(int x, int y, int size, color_t col, color_t fillcol, double linewidth);
#line 98 "screenshot.cpp"
    extern string link;
#line 113 "screenshot.cpp"
    void text(int x, int y, int size, const string& str, bool frame, color_t col, int align);
#line 155 "screenshot.cpp"
    void polygon(int *polyx, int *polyy, int polyi, color_t col, color_t outline, double linewidth);
#line 182 "screenshot.cpp"
    void render(const string& fname, const function<void()>& what IS(shot::default_screenshot_content));
    #endif
    }
  namespace wrl {
    #if !CAP_WRL
#line 264 "screenshot.cpp"
    extern always_false in;
    #endif
    #if CAP_WRL
#line 268 "screenshot.cpp"
    extern bool in;
#line 270 "screenshot.cpp"
    extern bool print;
#line 271 "screenshot.cpp"
    extern bool textures;
#line 273 "screenshot.cpp"
    extern ld rug_width;
#line 312 "screenshot.cpp"
    void fatten(vector<hyperpoint>& data, vector<glvertex>& tdata);
#line 386 "screenshot.cpp"
    int texture_type(dqi_poly& p);
#line 401 "screenshot.cpp"
    void prepare(dqi_poly& p);
#line 415 "screenshot.cpp"
    void polygon(dqi_poly& p);
#line 502 "screenshot.cpp"
    void render();
#line 533 "screenshot.cpp"
    void take(const string& fname, const function<void()>& what IS(shot::default_screenshot_content));
    #endif
    }
  #if CAP_SHOT
  namespace shot {
#line 654 "screenshot.cpp"
    enum screenshot_format { png, svg, wrl, rawfile };
#line 657 "screenshot.cpp"
    extern int rawfile_handle;
#line 659 "screenshot.cpp"
    extern int shotx;
#line 660 "screenshot.cpp"
    extern int shoty;
#line 661 "screenshot.cpp"
    extern screenshot_format format;
#line 662 "screenshot.cpp"
    extern bool transparent;
#line 663 "screenshot.cpp"
    extern ld gamma;
#line 664 "screenshot.cpp"
    extern int shotformat;
#line 665 "screenshot.cpp"
    extern string caption;
#line 666 "screenshot.cpp"
    extern ld fade;
#line 679 "screenshot.cpp"
    extern int shot_aa;
#line 681 "screenshot.cpp"
    void default_screenshot_content();
    #if CAP_SDL
#line 692 "screenshot.cpp"
    SDL_Surface *empty_surface(int x, int y, bool alpha);
    #endif
    #if CAP_PNG
#line 699 "screenshot.cpp"
    void output(SDL_Surface* s, const string& fname);
#line 708 "screenshot.cpp"
    extern hookset<bool(string, SDL_Surface*, SDL_Surface*)> hooks_postprocess;
#line 710 "screenshot.cpp"
    void postprocess(string fname, SDL_Surface *sdark, SDL_Surface *sbright);
    #endif
#line 748 "screenshot.cpp"
    extern purehookset hooks_take;
#line 784 "screenshot.cpp"
    void take(string fname, const function<void()>& what IS(default_screenshot_content));
#line 932 "screenshot.cpp"
    string format_name();
#line 939 "screenshot.cpp"
    string format_extension();
#line 947 "screenshot.cpp"
    void choose_screenshot_format();
#line 967 "screenshot.cpp"
    void menu();
    }
  #endif
  #if CAP_ANIMATIONS
  namespace anims {
#line 1126 "screenshot.cpp"
    enum eMovementAnimation {
    maNone, maTranslation, maRotation, maCircle, maParabolic, maTranslationRotation
    };
#line 1131 "screenshot.cpp"
    extern eMovementAnimation ma;
#line 1133 "screenshot.cpp"
    extern trans23 movement_angle;
#line 1134 "screenshot.cpp"
    extern ld normal_angle;
#line 1135 "screenshot.cpp"
    extern ld period;
#line 1136 "screenshot.cpp"
    extern int noframes;
#line 1137 "screenshot.cpp"
    extern ld cycle_length;
#line 1138 "screenshot.cpp"
    extern ld parabolic_length;
#line 1140 "screenshot.cpp"
    extern string time_formula;
#line 1144 "screenshot.cpp"
    extern ld rug_rotation1, rug_rotation2, rug_forward, env_ocean, env_volcano;
#line 1145 "screenshot.cpp"
    extern bool env_shmup;
#line 1146 "screenshot.cpp"
    extern transmatrix rug_angle;
#line 1148 "screenshot.cpp"
    extern ld rotation_distance;
#line 1152 "screenshot.cpp"
    void ma_reaction();
#line 1159 "screenshot.cpp"
    extern color_t circle_display_color;
#line 1161 "screenshot.cpp"
    extern ld circle_radius;
#line 1162 "screenshot.cpp"
    extern ld circle_spins;
#line 1164 "screenshot.cpp"
    void moved();
#line 1183 "screenshot.cpp"
    struct animated_parameter {
    parameter *par;
    string formula;
    };
#line 1189 "screenshot.cpp"
    extern vector<animated_parameter> aps;
#line 1191 "screenshot.cpp"
    parameter *find_param(void *x);
#line 1198 "screenshot.cpp"
    void deanimate(parameter *p);
#line 1204 "screenshot.cpp"
    void get_parameter_animation(parameter *p, string &s);
#line 1210 "screenshot.cpp"
    void animate_parameter(ld &x, string f);
#line 1217 "screenshot.cpp"
    void animate_parameter(parameter *par, string f);
#line 1240 "screenshot.cpp"
    void reflect_view();
#line 1250 "screenshot.cpp"
    extern bool clearup;
#line 1252 "screenshot.cpp"
    extern purehookset hooks_anim;
#line 1254 "screenshot.cpp"
    void animate_rug_movement(ld t);
#line 1263 "screenshot.cpp"
    void apply();
#line 1375 "screenshot.cpp"
    void rollback();
    #if CAP_FILES && CAP_SHOT
#line 1383 "screenshot.cpp"
    extern string animfile;
#line 1385 "screenshot.cpp"
    extern string videofile;
#line 1391 "screenshot.cpp"
    extern hookset<void(int, int)> hooks_record_anim;
#line 1393 "screenshot.cpp"
    extern int record_frame_id;
#line 1395 "screenshot.cpp"
    bool record_animation_of(reaction_t content);
#line 1443 "screenshot.cpp"
    bool record_animation();
    #endif
#line 1448 "screenshot.cpp"
    extern purehookset hooks_after_video;
    #if CAP_VIDEO
#line 1451 "screenshot.cpp"
    bool record_video(string fname IS(videofile), bool_reaction_t rec IS(record_animation));
#line 1481 "screenshot.cpp"
    bool record_video_std();
    #endif
#line 1518 "screenshot.cpp"
    extern array<ld, 10> anim_vars, last_anim_vars;
#line 1522 "screenshot.cpp"
    void rug_angle_options();
#line 1527 "screenshot.cpp"
    void show();
#line 1796 "screenshot.cpp"
    bool any_animation();
#line 1804 "screenshot.cpp"
    bool any_on();
#line 1808 "screenshot.cpp"
    bool center_music();
    }
  #endif
  namespace startanims {
#line 1817 "screenshot.cpp"
    extern bool enabled;
#line 1822 "screenshot.cpp"
    struct startanim {
    string name;
    reaction_t init;
    reaction_t render;
    };
    
    const int EXPLORE_START_ANIMATION = 2003;
    #if CAP_STARTANIM
#line 1999 "screenshot.cpp"
    extern startanim *current;
#line 2001 "screenshot.cpp"
    void pick();
#line 2015 "screenshot.cpp"
    void display();
#line 2024 "screenshot.cpp"
    void explore();
    #endif
    }

  // implemented in: shaders.cpp

#line 11 "shaders.cpp"
  extern ld levellines;
#line 12 "shaders.cpp"
  extern bool disable_texture;
  #if CAP_GL
#line 16 "shaders.cpp"
  constexpr flagtype GF_TEXTURE  = 1;
  constexpr flagtype GF_VARCOLOR = 2;
  constexpr flagtype GF_LIGHTFOG = 4;
  constexpr flagtype GF_LEVELS   = 8;
  constexpr flagtype GF_TEXTURE_SHADED  = 16;
  constexpr flagtype GF_NO_FOG   = 32;
  
  constexpr flagtype GF_which    = 63;
  
  constexpr flagtype SF_PERS3        = 256;
  constexpr flagtype SF_BAND         = 512;
  constexpr flagtype SF_USE_ALPHA    = 1024;
  constexpr flagtype SF_DIRECT       = 2048;
  constexpr flagtype SF_PIXELS       = 4096;
  constexpr flagtype SF_HALFPLANE    = 8192;
  constexpr flagtype SF_ORIENT       = 16384;
  constexpr flagtype SF_BOX          = 32768;
  constexpr flagtype SF_ZFOG         = 65536;
  constexpr flagtype SF_ODSBOX       = (1<<17);
  
  constexpr flagtype SF_SEMIDIRECT   = (1<<18);
#line 39 "shaders.cpp"
  extern bool solv_all;
#line 42 "shaders.cpp"
  /* standard attribute bindings */
  /* taken from: https://www.opengl.org/sdk/docs/tutorials/ClockworkCoders/attributes.php */
  constexpr int aPosition = 0;
  constexpr int aColor = 3;
  constexpr int aTexture = 8;
  
  /* texture bindings */
  constexpr int INVERSE_EXP_BINDING = 2;
  constexpr int AIR_BINDING = 4;
#line 53 "shaders.cpp"
  extern map<string, shared_ptr<glhr::GLprogram>> compiled_programs;
#line 55 "shaders.cpp"
  extern map<unsigned, shared_ptr<glhr::GLprogram>> matched_programs;
#line 68 "shaders.cpp"
  void reset_all_shaders();
#line 74 "shaders.cpp"
  string panini_shader();
#line 85 "shaders.cpp"
  string cylindrical_shader();
#line 91 "shaders.cpp"
  string stereo_shader();
#line 102 "shaders.cpp"
  string shader_lie_log();
#line 126 "shaders.cpp"
  string shader_rel_log();
#line 860 "shaders.cpp"
  void add_if(string& shader, const string& seek, const string& function);
#line 865 "shaders.cpp"
  void add_fixed_functions(string& shader);
#line 964 "shaders.cpp"
  flagtype get_shader_flags();
#line 969 "shaders.cpp"
  void glapplymatrix(const transmatrix& V);
  #endif

  // implemented in: sky.cpp

#line 5 "sky.cpp"
  extern bool context_fog;
#line 7 "sky.cpp"
  extern ld camera_level;
#line 8 "sky.cpp"
  extern bool camera_sign;
#line 11 "sky.cpp"
  enum eSkyMode { skyNone, skyAutomatic, skySkybox, skyAlways };
#line 14 "sky.cpp"
  extern eSkyMode draw_sky;
#line 16 "sky.cpp"
  extern bool auto_remove_roofs;
#line 17 "sky.cpp"
  extern bool simple_sky;
#line 19 "sky.cpp"
  bool camera_over(ld x);
  #if MAXMDIM >= 4 && CAP_GL
#line 27 "sky.cpp"
  int get_skybrightness(int mul IS(1));
#line 52 "sky.cpp"
  extern struct dqi_sky *sky;
#line 54 "sky.cpp"
  bool do_draw_skybox();
#line 63 "sky.cpp"
  void prepare_sky();
#line 76 "sky.cpp"
  extern vector<glhr::colored_vertex> skyvertices;
#line 77 "sky.cpp"
  extern cell *sky_centerover;
#line 78 "sky.cpp"
  extern shiftmatrix sky_cview;
#line 80 "sky.cpp"
  void delete_sky();
#line 85 "sky.cpp"
  bool do_draw_sky();
#line 102 "sky.cpp"
  bool do_draw_stars(bool rev);
#line 353 "sky.cpp"
  extern bool use_euclidean_infinity;
#line 356 "sky.cpp"
  void be_euclidean_infinity(transmatrix& V);
#line 361 "sky.cpp"
  void draw_star(const shiftmatrix& V, const hpcshape& sh, color_t col, ld rev IS(false));
#line 372 "sky.cpp"
  extern ld star_prob;
#line 375 "sky.cpp"
  extern vector<ld> stars;
#line 377 "sky.cpp"
  bool star_for(int i);
#line 383 "sky.cpp"
  extern hookset<bool(celldrawer *cd)> hooks_ceiling;
#line 385 "sky.cpp"
  void g_add_to_sky(cell *c, shiftmatrix& V, color_t col, color_t col2);
#line 584 "sky.cpp"
  extern struct renderbuffer *airbuf;
#line 586 "sky.cpp"
  void swap_if_missing(bool missing);
#line 594 "sky.cpp"
  void make_air();
  #endif

  // implemented in: sound.cpp

#line 12 "sound.cpp"
  void playSound(cell *c, const string& fname, int vol = 100);
  void resetmusic();
#line 17 "sound.cpp"
  /** RogueViz may be used for situations where music does not correspond to lands, so we allow extra IDs */
  static constexpr int MUSIC_MAX = 500;
#line 21 "sound.cpp"
  extern const char *musicfile;
#line 22 "sound.cpp"
  extern bool audio;
#line 23 "sound.cpp"
  extern string musiclicense;
#line 24 "sound.cpp"
  extern string musfname[MUSIC_MAX];
#line 25 "sound.cpp"
  extern int musicvolume;
#line 26 "sound.cpp"
  extern int effvolume;
#line 27 "sound.cpp"
  extern bool music_available;
#line 28 "sound.cpp"
  extern int musiclength[MUSIC_MAX];
#line 30 "sound.cpp"
  eLand getCurrentLandForMusic();
#line 38 "sound.cpp"
  void playSeenSound(cell *c);
  #if CAP_SDLAUDIO
#line 93 "sound.cpp"
  extern int musicpos[MUSIC_MAX];
#line 94 "sound.cpp"
  extern int musstart;
#line 99 "sound.cpp"
  extern hookset<bool(eLand&)> hooks_music;
#line 100 "sound.cpp"
  extern hookset<void(eLand&)> hooks_sync_music;
#line 102 "sound.cpp"
  extern bool music_out_of_focus;
#line 104 "sound.cpp"
  void handlemusic();
#line 149 "sound.cpp"
  void resetmusic();
#line 158 "sound.cpp"
  bool loadMusicInfo(string dir);
#line 198 "sound.cpp"
  bool loadMusicInfo();
#line 215 "sound.cpp"
  void initAudio();
#line 240 "sound.cpp"
  void playSound(cell *c, const string& fname, int vol);
#line 259 "sound.cpp"
  void reuse_music_memory();
  #endif
  #if !CAP_AUDIO
#line 310 "sound.cpp"
  void playSound(cell *c, const string& fname, int vol);
#line 311 "sound.cpp"
  void resetmusic();
  #endif

  // implemented in: sphere.cpp

#line 13 "sphere.cpp"
  int spherecells();
#line 23 "sphere.cpp"
  extern vector<int> siblings;
#line 188 "sphere.cpp"
  heptagon *getDodecahedron(int i);
#line 195 "sphere.cpp"
  hrmap* new_spherical_map();

  // implemented in: surface.cpp

  #if CAP_SURFACE
  namespace surface {
#line 19 "surface.cpp"
    enum eShape { dsNone, dsTractricoid, dsDini, dsKuen, dsHyperlike, dsHyperboloid, dsHemisphere, dsCrystal };
#line 25 "surface.cpp"
    extern eShape sh;
#line 31 "surface.cpp"
    extern ld dini_b;
#line 33 "surface.cpp"
    extern ld hyper_b;
#line 371 "surface.cpp"
    extern vector<pair<hyperpoint, int> > coverage;
#line 598 "surface.cpp"
    void run_shape(eShape s);
#line 677 "surface.cpp"
    void show_surfaces();
    }
  #endif

  // implemented in: system.cpp

#line 12 "system.cpp"
  /** \brief This namespace has constants used as parameters in functions such as restart_game and wrongmode. */
  namespace rg {
  static constexpr char nothing = 0;
  static constexpr char peace = 'P';
  static constexpr char inv = 'i';
  static constexpr char chaos = 'C';
  static constexpr char tactic = 't';
  static constexpr char tour = 'T';
  static constexpr char yendor = 'y';
  static constexpr char shmup = 's';
  static constexpr char randpattern = 'r';
  static constexpr char princess = 'p';
  static constexpr char daily = 'd';
  static constexpr char daily_off = 'D';
  static constexpr char racing = 'R';
  static constexpr char dualmode = 'U';
  static constexpr char heptagons = '7';
  
  /** \brief wrongmode only -- marks 'global' achievements not related to the current mode */
  static constexpr char global = 'x';
  /** \brief wrongmode only -- change vid.scfg.players then restart_game(rg::nothing) instead */
  static constexpr char multi = 'm';
  /** \brief wrongmode only -- mark achievements for special geometries/variations, this automatically marks the expected land_structure as lsSingle */
  static constexpr char special_geometry = 'g';
  /** \brief wrongmode only -- mark achievements for special geometries/variations */
  static constexpr char special_geometry_nicewalls = 'G';
  /** \brief wrongmode only -- specgeom returns 'fail' if the special geometry is not correct */
  static constexpr char fail = 'X';
  }
#line 44 "system.cpp"
  extern bool game_active;
#line 47 "system.cpp"
  extern bool autocheat;
#line 50 "system.cpp"
  extern eWall canvas_default_wall;
#line 53 "system.cpp"
  extern int truelotus;
#line 55 "system.cpp"
  extern int asteroids_generated, asteroid_orbs_generated;
#line 57 "system.cpp"
  extern time_t timerstart, savetime, tickstart;
#line 58 "system.cpp"
  extern bool timerstopped;
#line 59 "system.cpp"
  extern int savecount;
#line 60 "system.cpp"
  extern int save_turns;
#line 61 "system.cpp"
  extern bool doCross;
#line 63 "system.cpp"
  extern bool gamegen_failure;
#line 65 "system.cpp"
  extern eLand top_land;
#line 68 "system.cpp"
  bool verless(string v, string cmp);
#line 77 "system.cpp"
  extern hookset<bool()> hooks_welcome_message;
#line 80 "system.cpp"
  void welcomeMessage();
#line 165 "system.cpp"
  extern hookset<void()> hooks_initgame;
#line 168 "system.cpp"
  extern hookset<void()> hooks_post_initgame;
#line 170 "system.cpp"
  extern bool ineligible_starting_land;
#line 172 "system.cpp"
  extern int easy_specialland;
#line 175 "system.cpp"
  void initgame();
  #if CAP_SAVE
  namespace scores {
#line 459 "system.cpp"
    /** \brief the amount of boxes reserved for each hr::score item */
    #define MAXBOX 500
    /** \brief currently used boxes in hr::score */
    #define POSSCORE 418
    /** \brief a struct to keep local score from an earlier game */
    struct score {
    /** \brief version used */
    string ver;
    /** \brief all the data of the saved score, see applyBoxes() */
    int box[MAXBOX];
    /** \brief yasc message */
    string yasc_message;
    };
#line 475 "system.cpp"
    extern score save;
#line 477 "system.cpp"
    extern int boxid;
#line 480 "system.cpp"
    extern bool saving, loading, loadingHi;
#line 483 "system.cpp"
    extern string boxname[MAXBOX];
#line 485 "system.cpp"
    extern bool fakebox[MAXBOX];
#line 487 "system.cpp"
    extern bool monsbox[MAXBOX];
#line 508 "system.cpp"
    void applyBoxNum(int& i, string name IS(""));
#line 584 "system.cpp"
    extern modecode_t saved_modecode;
#line 593 "system.cpp"
    void applyBoxes();
#line 981 "system.cpp"
    void saveBox();
#line 992 "system.cpp"
    constexpr int MODECODE_BOX = 387;
    }
  namespace anticheat {
#line 1038 "system.cpp"
    extern int certify(const string& s, int a, int b, int c, int d IS(0));
    }
  #if !CAP_CERTIFY
  namespace anticheat {
#line 1047 "system.cpp"
    extern bool tampered;
    }
  #endif
#line 1058 "system.cpp"
  void remove_emergency_save();
#line 1070 "system.cpp"
  extern bool save_cheats;
#line 1072 "system.cpp"
  void saveStats(bool emergency IS(false));
#line 1217 "system.cpp"
  void loadsave();
#line 1355 "system.cpp"
  void load_last_save();
  #endif
#line 1401 "system.cpp"
  void stop_game();
#line 1440 "system.cpp"
  eModel default_model();
#line 1447 "system.cpp"
  extern purehookset hooks_on_geometry_change;
#line 1449 "system.cpp"
  void geometry_settings(bool was_default);
#line 1455 "system.cpp"
  void set_geometry(eGeometry target);
#line 1503 "system.cpp"
  void set_variation(eVariation target);
#line 1536 "system.cpp"
  void switch_game_mode(char switchWhat);
#line 1670 "system.cpp"
  void start_game();
#line 1719 "system.cpp"
  void restart_game(char switchWhat IS(rg::nothing));
#line 1735 "system.cpp"
  void stop_game_and_switch_mode(char switchWhat IS(rg::nothing));
#line 1740 "system.cpp"
  extern purehookset hooks_clearmemory;
#line 1742 "system.cpp"
  void clearMemory();
#line 1746 "system.cpp"
  extern bool fixseed;
#line 1747 "system.cpp"
  extern int startseed;
#line 1749 "system.cpp"
  extern eLand firstland0;
#line 1751 "system.cpp"
  extern purehookset hooks_initialize;
#line 1753 "system.cpp"
  extern bool savefile_selection;
#line 1755 "system.cpp"
  void select_savefile();
#line 1775 "system.cpp"
  void progress_warning();
#line 1780 "system.cpp"
  void restore_all_golems();
#line 1789 "system.cpp"
  extern bool save_loaded;
#line 1791 "system.cpp"
  void initAll();
#line 1822 "system.cpp"
  extern purehookset hooks_final_cleanup;
#line 1824 "system.cpp"
  void finishAll();
#line 1846 "system.cpp"
  void save_mode_to_file(const string& fname);
#line 1864 "system.cpp"
  void load_mode_from_file(const string& fname);

  // implemented in: tour.cpp

  #if !CAP_TOUR
  namespace tour {
#line 13 "tour.cpp"
    extern always_false on;
    }
  #endif
  #if CAP_TOUR
  namespace tour {
#line 23 "tour.cpp"
    extern bool on;
#line 26 "tour.cpp"
    extern bool texts;
#line 28 "tour.cpp"
    extern string tourhelp;
#line 31 "tour.cpp"
    extern int currentslide;
#line 34 "tour.cpp"
    /** \brief a parameter for the slides' action function */
    enum presmode { 
    pmStartAll = 0,
    pmStart = 1, pmFrame = 2, pmStop = 3, pmKey = 4, pmRestart = 5,
    pmAfterFrame = 6, pmHelpEx = 7,
    pmGeometry = 11, pmGeometryReset = 13, pmGeometryStart = 15,
    pmGeometrySpecial = 16
    };
    
    /** \brief slide definition */
    struct slide { 
    /** \brief title of this slide */
    string name; 
    /** \brief ID (currently unused */
    int unused_id; 
    /** \brief various flags */
    flagtype flags; 
    /** \brief the helptext */
    string help; 
    /** \brief This function is called while this slide is displayed. Parameter hr::tour::presmode mode says what should be done */
    function<void(presmode mode)> action;
    };  
    
    /** \brief in which geometries does this slide work */
    namespace LEGAL {
    enum flagtype { NONE, UNLIMITED, HYPERBOLIC, ANY, NONEUC, SPECIAL };
    }
    
    /** \brief when Enter pressed while showing the text, skip to the next slide immediately */
    static constexpr flagtype QUICKSKIP=8;
    /** \brief The final slide. Shows where the presentation ends */
    static constexpr flagtype FINALSLIDE=16;
    /** \brief Pressing Enter while in another geometry should change slides immediately */
    static constexpr flagtype QUICKGEO=32;
    /** \brief This slide should be displayed in sidescreen mode */
    static constexpr flagtype SIDESCREEN = 64;
    /** \brief When changing geometries, show the name of the slide, instead of the current land */
    static constexpr flagtype USE_SLIDE_NAME = 128;
    /** \brief do not display any help line */
    static constexpr flagtype NOTITLE = 256;
    /** \brief always display the text, even if going back or texts are disabled */
    static constexpr flagtype ALWAYS_TEXT = 256;
#line 78 "tour.cpp"
    extern vector<reaction_t> restorers;
#line 81 "tour.cpp"
    template<class T, class U> void slide_backup(T& what, U value) {
    T backup = what;
    restorers.push_back([&what, backup] { what = backup; });
    what = value;
    }
    
    template<class T> void slide_backup(T& what) { slide_backup(what, what); }
#line 90 "tour.cpp"
    void on_restore(const reaction_t& t);
#line 94 "tour.cpp"
    void slide_restore_all();
#line 101 "tour.cpp"
    void slide_url(presmode mode, char key, string text, string url);
#line 108 "tour.cpp"
    void slide_action(presmode mode, char key, string text, reaction_t act);
#line 113 "tour.cpp"
    void enable_canvas_backup(ccolor::data *canv);
#line 123 "tour.cpp"
    void setCanvas(presmode mode, ccolor::data *canv);
#line 136 "tour.cpp"
    void setCanvas(presmode mode, char c);
#line 143 "tour.cpp"
    extern function<eLand(eLand)> getNext;
#line 144 "tour.cpp"
    extern function<bool(eLand)> quickfind;
#line 145 "tour.cpp"
    extern function<bool(eLand)> showland;
#line 152 "tour.cpp"
    extern string slidecommand;
#line 155 "tour.cpp"
    extern hookset<void(int)> hooks_slide;
#line 158 "tour.cpp"
    void presentation(presmode mode);
#line 187 "tour.cpp"
    string get_foldername(const string& s);
#line 204 "tour.cpp"
    void slidehelp();
#line 223 "tour.cpp"
    bool next_slide();
#line 411 "tour.cpp"
    void checkGoodLand(eLand l);
    namespace ss {
#line 427 "tour.cpp"
      extern slide *wts;
#line 429 "tour.cpp"
      extern string current_folder;
#line 434 "tour.cpp"
      using slideshow_callback = function<void(string, slide*, char)>;
#line 437 "tour.cpp"
      extern hookset<void(slideshow_callback)> hooks_extra_slideshows;
#line 439 "tour.cpp"
      void for_all_slideshows(const slideshow_callback& cb);
#line 444 "tour.cpp"
      void slideshow_menu();
#line 454 "tour.cpp"
      void showMenu();
      }
#line 529 "tour.cpp"
    void initialize_slides();
#line 537 "tour.cpp"
    void print();
#line 552 "tour.cpp"
    void start();
#line 578 "tour.cpp"
    extern slide default_slides[];
#line 1046 "tour.cpp"
    extern slide *slides;
    }
  #endif

  // implemented in: usershapes.cpp

  #if CAP_SHAPES
#line 13 "usershapes.cpp"
  extern int usershape_changes;
#line 15 "usershapes.cpp"
  extern array<map<int, usershape*>, mapeditor::USERSHAPEGROUPS> usershapes;
#line 16 "usershapes.cpp"
  void initShape(int sg, int id);
#line 35 "usershapes.cpp"
  extern basic_textureinfo user_triangles_texture;
  #endif

  // implemented in: vr.cpp

  namespace vrhr {
    #if !CAP_VR
#line 15 "vr.cpp"
    inline bool active() { return false; }
    inline bool rendering() { return false; }
    inline bool rendering_eye() { return false; }
    #endif
    #if CAP_VR
#line 24 "vr.cpp"
    bool active();
#line 26 "vr.cpp"
    bool should_render();
#line 28 "vr.cpp"
    bool rendering();
#line 30 "vr.cpp"
    bool rendering_eye();
#line 33 "vr.cpp"
    enum class eHeadset { none, rotation_only, reference, holonomy, model_viewing, holonomy_z };
    enum class eEyes { none, equidistant, truesim };
    enum class eCompScreen { none, reference, single, eyes };
#line 38 "vr.cpp"
    extern eHeadset hsm;
#line 39 "vr.cpp"
    extern eEyes eyes;
#line 40 "vr.cpp"
    extern eCompScreen cscr;
#line 42 "vr.cpp"
    extern bool controllers_on_desktop;
#line 44 "vr.cpp"
    extern cell *forward_cell;
#line 46 "vr.cpp"
    extern ld vraim_x, vraim_y, vrgo_x, vrgo_y;
#line 48 "vr.cpp"
    extern ld pointer_length;
#line 126 "vr.cpp"
    extern transmatrix eyeproj, eyeshift;
#line 156 "vr.cpp"
    extern transmatrix hmd_mv_for[3];
#line 157 "vr.cpp"
    extern transmatrix hmd_pre_for[3];
#line 162 "vr.cpp"
    extern ld pointer_distance;
#line 165 "vr.cpp"
    extern bool enabled;
#line 168 "vr.cpp"
    extern bool failed;
#line 171 "vr.cpp"
    extern string error_msg;
#line 174 "vr.cpp"
    extern int state;
#line 177 "vr.cpp"
    // use E4 when working with real-world matrices to ensure that inverses, multiplications, etc. are computed correctly
    #define E4 dynamicval<eGeometry> g(geometry, gCubeTiling)
#line 228 "vr.cpp"
    extern bool first;
#line 230 "vr.cpp"
    extern transmatrix hmd_at_ui;
#line 231 "vr.cpp"
    extern transmatrix hmd_at;
#line 232 "vr.cpp"
    extern transmatrix hmd_ref_at;
#line 234 "vr.cpp"
    extern transmatrix hmd_mvp, hmd_pre, hmd_mv;
#line 236 "vr.cpp"
    extern transmatrix sm;
#line 238 "vr.cpp"
    extern int ui_xmin, ui_ymin, ui_xmax, ui_ymax;
#line 240 "vr.cpp"
    extern reaction_t change_ui_bounds;
#line 243 "vr.cpp"
    struct frustum_info {
    transmatrix pre;
    transmatrix nlp;
    bool screen;
    transmatrix proj;
    };
#line 251 "vr.cpp"
    extern vector<frustum_info> frusta;
#line 253 "vr.cpp"
    void set_ui_bounds();
#line 262 "vr.cpp"
    void size_and_draw_ui_box();
#line 357 "vr.cpp"
    extern bool need_poses;
#line 434 "vr.cpp"
    extern bool targeting_menu;
#line 436 "vr.cpp"
    void send_click();
#line 446 "vr.cpp"
    void send_release();
#line 453 "vr.cpp"
    void vr_control();
#line 496 "vr.cpp"
    void be_33(transmatrix& T);
#line 508 "vr.cpp"
    void apply_movement(const transmatrix& rel, eShiftMethod sm);
#line 519 "vr.cpp"
    void vr_shift();
#line 573 "vr.cpp"
    extern ld absolute_unit_in_meters;
#line 577 "vr.cpp"
    eModel pmodel_3d_version();
#line 584 "vr.cpp"
    transmatrix model_to_controller(int id);
#line 588 "vr.cpp"
    hyperpoint model_location(shiftpoint h, bool& bad);
#line 654 "vr.cpp"
    extern hyperpoint vr_direction;
#line 656 "vr.cpp"
    void compute_vr_direction(int id);
#line 663 "vr.cpp"
    void compute_point(int id, shiftpoint& res, cell*& c, ld& dist);
#line 699 "vr.cpp"
    extern bool vr_clicked;
#line 770 "vr.cpp"
    extern bool always_show_hud;
#line 771 "vr.cpp"
    bool in_actual_menu();
#line 772 "vr.cpp"
    bool in_menu();
#line 805 "vr.cpp"
    void track_actions();
#line 846 "vr.cpp"
    void get_eyes();
#line 864 "vr.cpp"
    void start_vr();
#line 912 "vr.cpp"
    void shutdown_vr();
#line 927 "vr.cpp"
    void clear();
#line 944 "vr.cpp"
    extern ld ui_depth;
#line 945 "vr.cpp"
    extern ld ui_size;
#line 948 "vr.cpp"
    const ld ui_size_unit = 0.001;
#line 972 "vr.cpp"
    void in_vr_ui(reaction_t what);
#line 1014 "vr.cpp"
    void draw_eyes();
#line 1049 "vr.cpp"
    void gen_mv();
#line 1076 "vr.cpp"
    extern shiftmatrix master_cview;
#line 1078 "vr.cpp"
    void render();
#line 1199 "vr.cpp"
    void show_vr_demos();
#line 1347 "vr.cpp"
    void enable_button();
#line 1360 "vr.cpp"
    void reference_button();
#line 1371 "vr.cpp"
    void show_vr_settings();
#line 1519 "vr.cpp"
    extern bool rec;
#line 1521 "vr.cpp"
    void render_controllers();
#line 1596 "vr.cpp"
    void submit();
#line 1615 "vr.cpp"
    void handoff();
    #endif
    }

  // implemented in: wfcgen.cpp

  namespace wfc {
#line 60 "wfcgen.cpp"
    void load_probs();
#line 109 "wfcgen.cpp"
    extern vector<cell*> centers;
#line 111 "wfcgen.cpp"
    void schedule(cell *c);
#line 185 "wfcgen.cpp"
    extern bool use_eclectic;
#line 187 "wfcgen.cpp"
    void invoke();
#line 242 "wfcgen.cpp"
    void wfc_menu();
    }

  // implemented in: yendor.cpp

#line 13 "yendor.cpp"
  int hiitemsMax(eItem it);
#line 20 "yendor.cpp"
  extern modecode_t modecode(int mode IS(3));
  namespace yendor {
#line 42 "yendor.cpp"
    extern bool on;
#line 43 "yendor.cpp"
    extern bool generating;
#line 44 "yendor.cpp"
    extern bool path;
#line 45 "yendor.cpp"
    extern bool everwon;
#line 46 "yendor.cpp"
    extern bool won;
#line 49 "yendor.cpp"
    extern int challenge; // id of the challenge
#line 50 "yendor.cpp"
    extern int lastchallenge;
#line 53 "yendor.cpp"
    #define YF_DEAD 1
    #define YF_WALLS 2
    #define YF_END 4
    #define YF_DEAD5 8
    
    #define YF_NEAR_IVY   16
    #define YF_NEAR_ELEM  32
    #define YF_NEAR_OVER  64
    #define YF_NEAR_RED   128
    #define YF_REPEAT     512
    #define YF_NEAR_TENT  1024
    
    #define YF_START_AL   2048
    #define YF_START_CR   4096
    #define YF_CHAOS      8192
    #define YF_RECALL     16384
    #define YF_NEAR_FJORD 32768
    
    #define YF_START_ANY  (YF_START_AL|YF_START_CR)  
    
    struct yendorlevel {
    eLand l;
    int flags;
    };
    
    #define YENDORLEVELS 34
#line 81 "yendor.cpp"
    extern map<modecode_t, array<int, YENDORLEVELS>> bestscore;
#line 83 "yendor.cpp"
    extern eLand nexttostart;
#line 125 "yendor.cpp"
    int compute_tscore(modecode_t mc);
#line 133 "yendor.cpp"
    void uploadScore();
#line 146 "yendor.cpp"
    yendorlevel& clev();
#line 148 "yendor.cpp"
    eLand changeland(int i, eLand l);
#line 158 "yendor.cpp"
    struct yendorinfo {
    cell *path[YDIST];
    cell *actualKey;
    bool found;
    bool foundOrb;
    int howfar;
    bignum age;
    yendorinfo() { actualKey = NULL; }
    cell* key() { return path[YDIST-1]; }
    cell *actual_key() { return actualKey ? actualKey : key(); }
    cell* orb() { return path[0]; }
    };
#line 172 "yendor.cpp"
    extern vector<yendorinfo> yi;
#line 175 "yendor.cpp"
    #define NOYENDOR 999999
#line 177 "yendor.cpp"
    extern int yii;
#line 179 "yendor.cpp"
    int hardness();
#line 194 "yendor.cpp"
    enum eState { ysUntouched, ysLocked, ysUnlocked };
#line 197 "yendor.cpp"
    eState state(cell *yendor);
#line 203 "yendor.cpp"
    bool control(pathgen& p, int i, cellwalker& ycw);
#line 243 "yendor.cpp"
    bool check(cell *yendor);
#line 403 "yendor.cpp"
    void onpath();
#line 413 "yendor.cpp"
    eLandStructure get_land_structure();
#line 421 "yendor.cpp"
    void init(int phase);
#line 525 "yendor.cpp"
    extern const char *chelp;
#line 558 "yendor.cpp"
    string name(int i);
#line 579 "yendor.cpp"
    void showMenu();
#line 658 "yendor.cpp"
    void collected(cell* c2);
    }
  namespace tactic {
#line 723 "yendor.cpp"
    extern bool on;
#line 724 "yendor.cpp"
    extern int id;
#line 737 "yendor.cpp"
    int chances(eLand l, modecode_t xc IS(modecode()));
#line 760 "yendor.cpp"
    void record(eLand land, int score, modecode_t xc IS(modecode()));
#line 771 "yendor.cpp"
    void record();
#line 775 "yendor.cpp"
    void unrecord(eLand land, flagtype xc IS(modecode()));
#line 782 "yendor.cpp"
    void unrecord();
#line 808 "yendor.cpp"
    void uploadScore();
#line 814 "yendor.cpp"
    void showMenu();
#line 963 "yendor.cpp"
    void start();
    }
#line 971 "yendor.cpp"
  extern map<modecode_t, string> meaning;
#line 972 "yendor.cpp"
  extern map<modecode_t, modecode_t> identify_modes;
#line 976 "yendor.cpp"
  void save_mode_data(hstream& f);
#line 1031 "yendor.cpp"
  eLandStructure get_default_land_structure();
#line 1039 "yendor.cpp"
  void other_settings_default();
#line 1060 "yendor.cpp"
  void load_mode_data_with_zero(hstream& f);
#line 1130 "yendor.cpp"
  constexpr int FIRST_MODECODE = 100000;
#line 1133 "yendor.cpp"
  modecode_t get_identify(modecode_t xc);
#line 1142 "yendor.cpp"
  extern string expected_modecode;
#line 1144 "yendor.cpp"
  extern modecode_t current_modecode;
#line 1146 "yendor.cpp"
  modecode_t modecode(int mode);
#line 1189 "yendor.cpp"
  void load_modecode_line(string s);
#line 1204 "yendor.cpp"
  void load_modename_line(string s);
#line 1213 "yendor.cpp"
  void update_modename(string newname);
  namespace peace {
#line 1226 "yendor.cpp"
    extern bool on;
#line 1227 "yendor.cpp"
    extern bool hint;
#line 1229 "yendor.cpp"
    extern bool otherpuzzles;
#line 1231 "yendor.cpp"
    extern bool explore_other;
    namespace simon {
#line 1318 "yendor.cpp"
      void extend();
#line 1327 "yendor.cpp"
      void init();
#line 1341 "yendor.cpp"
      void restore();
      }
#line 1348 "yendor.cpp"
    void showMenu();
    }
#line 1439 "yendor.cpp"
  extern map<modecode_t, string> mode_description_of;
#line 1509 "yendor.cpp"
  extern bool include_unused_modes;
#line 1511 "yendor.cpp"
  extern string mode_to_search;
#line 1522 "yendor.cpp"
  extern vector<modecode_t> mode_list;
#line 1523 "yendor.cpp"
  extern map<modecode_t, string> modename;
#line 1525 "yendor.cpp"
  void prepare_custom();
#line 1531 "yendor.cpp"
  void gen_mode_list();
#line 1537 "yendor.cpp"
  void set_mode_sort_order();
#line 1562 "yendor.cpp"
  void list_saved_custom_modes();
  }
