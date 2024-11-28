#include "src/game/envfx_snow.h"

const GeoLayout actSelectRect_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_INTER, actSelectRect_ActSelectRects_mesh_layer_7),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, actSelectRect_ActSelectRects_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
