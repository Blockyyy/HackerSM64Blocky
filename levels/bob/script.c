#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 9313, 22, -723, 0, -90, 0, (75 << 24) | (20 << 16) | (1 << 8) | (5), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 9313, 22, 550, 0, -90, 0, (37 << 24) | (20 << 16) | (1 << 8) | (5), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 9313, 22, 1814, 0, -90, 0, (30 << 24) | (30 << 16) | (1 << 8) | (5), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 6032, 1009, -1212, 0, 0, 0, (75 << 24) | (20 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 9883, -478, 8915, 0, -180, 0, (37 << 24) | (20 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 10565, -478, 4402, 0, 0, 0, (37 << 24) | (20 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 7125, -701, 7801, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 9198, -701, 8821, 0, -90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 4423, 1126, 9124, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 3735, 1126, 9124, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 3051, 1126, 9124, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 4423, 1126, 10611, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 3735, 1126, 10611, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 3051, 1126, 10611, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 4423, 1126, 12045, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 3735, 1126, 12045, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		OBJECT(MODEL_NONE, 3051, 1126, 12045, 0, 90, 0, (60 << 24) | (40 << 16) | (1 << 8) | (0), bhvBowlingBallOnConveyorSpawner),
		MARIO_POS(0x01, 0, 8518, 285, -4749),
		OBJECT(MODEL_BULLY, 8387, 285, -3514, 0, 0, 0, (0x0A << 16), bhvBullyBuddy),
		OBJECT(MODEL_NONE, 8518, 285, -4749, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_OFF_BLOCK, -4734, -300, 13420, 0, 0, 0, (0 << 24) | (4 << 16) | (1 << 8) | (4), bhvOnOffPlatform),
		OBJECT(MODEL_OFF_BLOCK, -5439, -300, 13420, 0, 0, 0, (0 << 24) | (4 << 16) | (1 << 8) | (4), bhvOnOffPlatform),
		OBJECT(MODEL_OFF_BLOCK, -7727, 138, 13420, 0, 0, 0, (0 << 24) | (4 << 16) | (1 << 8) | (4), bhvOnOffPlatform),
		OBJECT(MODEL_OFF_BLOCK, -9423, -62, 13420, 0, 0, 0, (0 << 24) | (4 << 16) | (1 << 8) | (4), bhvOnOffPlatform),
		OBJECT(MODEL_ON_BLOCK, -8768, -300, 13416, 0, 0, 0, (1 << 24) | (4 << 16) | (25 << 8) | (14), bhvOnOffPlatform),
		OBJECT(MODEL_ON_BLOCK, -6572, -300, 13420, 0, 0, 0, (1 << 24) | (4 << 16) | (1 << 8) | (4), bhvOnOffPlatform),
		OBJECT(MODEL_ON_BLOCK, -7278, -300, 13420, 0, 0, 0, (1 << 24) | (4 << 16) | (1 << 8) | (4), bhvOnOffPlatform),
		OBJECT(MODEL_ON_OFF_BLOCK, -3089, 387, 13420, 0, 0, 0, 0x00000000, bhvOnOffBlock),
		OBJECT(MODEL_ON_OFF_BLOCK, -5997, 161, 13420, 0, 0, 0, 0x00000000, bhvOnOffBlock),
		OBJECT(MODEL_ON_OFF_BLOCK, -8114, 507, 13420, 0, 0, 0, 0x00000000, bhvOnOffBlock),
		TERRAIN(bob_area_1_collision),
		ROOMS(bob_area_1_collision_rooms),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 8518, 285, -4749),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};