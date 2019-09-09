/* Patches */

#if ALPHA_PATCH
#include "alpha.h"
#endif

#if ATTACHABOVE_PATCH || ATTACHASIDE_PATCH || ATTACHBELOW_PATCH || ATTACHBOTTOM_PATCH
#include "attachx.h"
#endif

#if AUTOSTART_PATCH
#include "autostart.h"
#endif

#if CFACTS_PATCH
#include "cfacts.h"
#endif

#if CYCLELAYOUTS_PATCH
#include "cyclelayouts.h"
#endif

#if ROTATESTACK_PATCH
#include "rotatestack.h"
#endif

#if SYSTRAY_PATCH
#include "systray.h"
#endif

#if TAGALLMON_PATCH
#include "tagallmon.h"
#endif

#if TAGSWAPMON_PATCH
#include "tagswapmon.h"
#endif

#if TOGGLEFULLSCREEN_PATCH
#include "togglefullscreen.h"
#endif

#if VANITYGAPS_PATCH
#include "vanitygaps.h"
#endif

#if ZOOMSWAP_PATCH
#include "zoomswap.h"
#endif

/* Layouts */

#if BSTACK_LAYOUT
#include "bstack.h"
#endif

#if BSTACKHORIZ_LAYOUT
#include "bstackhoriz.h"
#endif

#if DECK_LAYOUT
#include "deck.h"
#endif

#if MONOCLE_LAYOUT
#include "monocle.h"
#endif

#if TILE_LAYOUT
#include "tile.h"
#endif