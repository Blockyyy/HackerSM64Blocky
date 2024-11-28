#include "src/game/envfx_snow.h"

const GeoLayout offBlock_Bone_001_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 164, 0, offBlock_Bone_002_mesh_layer_5_mat_override_Off2_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout offBlock_Bone_001_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 164, 0, offBlock_Bone_002_mesh_layer_5_mat_override_On_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout offBlock_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(2, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 164, 0, offBlock_Bone_002_mesh_layer_5),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, offBlock_Bone_001_opt1),
				GEO_BRANCH(1, offBlock_Bone_001_opt2),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
