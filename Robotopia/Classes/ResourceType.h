﻿/************************************************************************/
/*
	CLASS			: ComponentType
	Author			: 남현욱
	역할				: Resource들의 Type 값 정의 enum 관리.
	최종 수정일자		: 2014-11-07
	최종 수정자		: 남현욱
	최종 수정사유		: 김성연	
	Comment			: ST_BLOCK_TURRET 추가
*/
/************************************************************************/

#pragma once
#include "Macro.h"

enum SpriteType
{
	ST_START = 0,
	ST_PLAYER = ST_START,
	ST_BLOCK,
	ST_BLOCK_MOVING,
	ST_FLOOR,
	ST_BLOCK_TURRET,
	ST_PORTAL,
	ST_TRAP_UNDERGROUND,
	ST_PLAYER_ATTACK,
	ST_CORPSE,
	ST_STATUSARROW,
	ST_ELECTRICT_TRAP,
	ST_COMPUTER_NORMAL,
	ST_COMPUTER_HEATED_01,
	ST_COMPUTER_HEATED_02,
	ST_COMPUTER_EMPTY,
	ST_MESSAGE_BOX,
	ST_ETC_END,

	ST_HEAD_START = 100,
	ST_HEAD_FIRST_FRONT,
	ST_HEAD_FIRST_OUTLINE,
	ST_HEAD_FIRST_ICON,
	ST_HEAD_SECOND_FRONT,
	ST_HEAD_SECOND_OUTLINE,
	ST_HEAD_SECOND_ICON,
	ST_HEAD_THIRD_FRONT,
	ST_HEAD_THIRD_OUTLINE,
	ST_HEAD_THIRD_ICON,
	ST_HEAD_FORTH_FRONT,
	ST_HEAD_FORTH_OUTLINE,
	ST_HEAD_FORTH_ICON,
	ST_HEAD_FIFTH_FRONT,
	ST_HEAD_FIFTH_OUTLINE,
	ST_HEAD_FIFTH_ICON,
	ST_HEAD_END,

	ST_ARMOR_START = 150,
	ST_ARMOR_FIRST_FRONT,
	ST_ARMOR_FIRST_OULINE,
	ST_ARMOR_FIRST_ICON,
	ST_ARMOR_SECOND_FRONT,
	ST_ARMOR_SECOND_OULINE,
	ST_ARMOR_SECOND_ICON,
	ST_ARMOR_THIRD_FRONT,
	ST_ARMOR_THIRD_OULINE,
	ST_ARMOR_THIRD_ICON,
	ST_ARMOR_FORTH_FRONT,
	ST_ARMOR_FORTH_OULINE,
	ST_ARMOR_FORTH_ICON,
	ST_ARMOR_FIFTH_FRONT,
	ST_ARMOR_FIFTH_OULINE,
	ST_ARMOR_FIFTH_ICON,
	ST_ARMOR_END,
	
	ST_ENGINE_START = 200,
	ST_ENGINE_FIRST_FRONT,
	ST_ENGINE_FIRST_OULINE,
	ST_ENGINE_FIRST_ICON,
	ST_ENGINE_SECOND_FRONT,
	ST_ENGINE_SECOND_OULINE,
	ST_ENGINE_SECOND_ICON,
	ST_ENGINE_THIRD_FRONT,
	ST_ENGINE_THIRD_OULINE,
	ST_ENGINE_THIRD_ICON,
	ST_ENGINE_FORTH_FRONT,
	ST_ENGINE_FORTH_OULINE,
	ST_ENGINE_FORTH_ICON,
	ST_ENGINE_FIFTH_FRONT,
	ST_ENGINE_FIFTH_OULINE,
	ST_ENGINE_FIFTH_ICON,
	ST_ENGINE_END,

	ST_LEG_START = 250,
	ST_LEG_FIRST_FRONT,
	ST_LEG_FIRST_OULINE,
	ST_LEG_FIRST_ICON,
	ST_LEG_SECOND_FRONT,
	ST_LEG_SECOND_OULINE,
	ST_LEG_SECOND_ICON,
	ST_LEG_THIRD_FRONT,
	ST_LEG_THIRD_OULINE,
	ST_LEG_THIRD_ICON,
	ST_LEG_FORTH_FRONT,
	ST_LEG_FORTH_OULINE,
	ST_LEG_FORTH_ICON,
	ST_LEG_FIFTH_FRONT,
	ST_LEG_FIFTH_OULINE,
	ST_LEG_FIFTH_ICON,
	ST_LEG_END,

	ST_MELEE_START = 300,
	ST_MELEE_FIRST_FRONT,
	ST_MELEE_FIRST_OULINE,
	ST_MELEE_FIRST_ICON,
	ST_MELEE_SECOND_FRONT,
	ST_MELEE_SECOND_OULINE,
	ST_MELEE_SECOND_ICON,
	ST_MELEE_THIRD_FRONT,
	ST_MELEE_THIRD_OULINE,
	ST_MELEE_THIRD_ICON,
	ST_MELEE_FORTH_FRONT,
	ST_MELEE_FORTH_OULINE,
	ST_MELEE_FORTH_ICON,
	ST_MELEE_FIFTH_FRONT,
	ST_MELEE_FIFTH_OULINE,
	ST_MELEE_FIFTH_ICON,
	ST_MELEE_END,

	ST_RANGE_START = 350,
	ST_RANGE_FIRST_FRONT,
	ST_RANGE_FIRST_OULINE,
	ST_RANGE_FIRST_ICON,
	ST_RANGE_SECOND_FRONT,
	ST_RANGE_SECOND_OULINE,
	ST_RANGE_SECOND_ICON,
	ST_RANGE_THIRD_FRONT,
	ST_RANGE_THIRD_OULINE,
	ST_RANGE_THIRD_ICON,
	ST_RANGE_FORTH_FRONT,
	ST_RANGE_FORTH_OULINE,
	ST_RANGE_FORTH_ICON,
	ST_RANGE_FIFTH_FRONT,
	ST_RANGE_FIFTH_OULINE,
	ST_RANGE_FIFTH_ICON,
	ST_RANGE_END,

	ST_STEAMCONTAINER_START = 400,
	ST_STEAMCONTAINER_FIRST_FRONT,
	ST_STEAMCONTAINER_FIRST_OULINE,
	ST_STEAMCONTAINER_FIRST_ICON,
	ST_STEAMCONTAINER_SECOND_FRONT,
	ST_STEAMCONTAINER_SECOND_OULINE,
	ST_STEAMCONTAINER_SECOND_ICON,
	ST_STEAMCONTAINER_THIRD_FRONT,
	ST_STEAMCONTAINER_THIRD_OULINE,
	ST_STEAMCONTAINER_THIRD_ICON,
	ST_STEAMCONTAINER_FORTH_FRONT,
	ST_STEAMCONTAINER_FORTH_OULINE,
	ST_STEAMCONTAINER_FORTH_ICON,
	ST_STEAMCONTAINER_FIFTH_FRONT,
	ST_STEAMCONTAINER_FIFTH_OULINE,
	ST_STEAMCONTAINER_FIFTH_ICON,
	ST_STEAMCONTAINER_END,

	ST_ASSEMBLY_START = 1000,
	ST_ASSEMBLY_BACKGROUND,
	ST_ASSEMBLY_FRAME,
	ST_ASSEMBLY_ARROW,
	ST_ASSEMBLY_POWER_DEFAULT,
	ST_ASSEMBLY_POWER_OVER,
	ST_ASSEMBLY_SCAN_BAR,
	ST_ASSEMBLY_ICON_FRAME_DEFAULT,
	ST_ASSEMBLY_ICON_FRAME_SELECTED,
	ST_ASSEMBLY_ICON_CONTENT_DEFAULT,
	ST_ASSEMBLY_ICON_FRAME_CLICKED,
	ST_ASSEMBLY_ICON_FRAME_LOCKED,
	ST_ASSEMBLY_BUTTON_DEFAULT,
	ST_ASSEMBLY_BUTTON_SELECT,
	ST_ASSEMBLY_LABEL_FRAME,
	ST_ASSEMBLY_END,
	ST_STEAM_START = 5000,
	ST_STEAM_MONKEY_00,
	ST_STEAM_MONKEY_01,
	ST_STEAM_MONKEY_02,
	ST_STEAM_MONKEY_03,
	ST_STEAM_MONKEY_04,
	ST_STEAM_MONKEY_05,
	ST_STEAM_EAGLE_00,
	ST_STEAM_EAGLE_01,
	ST_STEAM_EAGLE_02,
	ST_STEAM_EAGLE_03,
	ST_STEAM_EAGLE_04,
	ST_STEAM_EAGLE_05,
	ST_STEAM_BEAR_00,
	ST_STEAM_BEAR_01,
	ST_STEAM_BEAR_02,
	ST_STEAM_BEAR_03,
	ST_STEAM_BEAR_04,
	ST_STEAM_BEAR_05,
	ST_STEAM_MASK_HALF,
	ST_STEAM_MASK_PART,
	ST_STEAM_END,
	ST_GEAR_START = 5050,
	ST_GEAR_FIXED_00,
	ST_GEAR_FIXED_01,
	ST_GEAR_ROTATE_00,
	ST_GEAR_ROTATE_01,
	ST_GEAR_ROTATE_02,
	ST_GEAR_ICON_BEAR_ON,
	ST_GEAR_ICON_EAGLE_ON,
	ST_GEAR_ICON_MONKEY_ON,
	ST_GEAR_ICON_BEAR_OFF,
	ST_GEAR_ICON_EAGLE_OFF,
	ST_GEAR_ICON_MONKEY_OFF,
	ST_GEAR_END,
	ST_MAPWIN_START = 5100,
	ST_MAPWIN_FRAME,
	ST_MAPWIN_TRIGGER,
	ST_MAPWIN_END,
	ST_MINIMAP_START = 5150,
	ST_MINIMAP_ROTATE_00,
	ST_MINIMAP_ROTATE_01,
	ST_MINIMAP_ROTATE_02,
	ST_MINIMAP_MASK,
	ST_MINIMAP_END,
	ST_CHARWIN_START = 5200,
	ST_CHARWIN_FRAME,
	ST_CHARWIN_TRIGGER,
	ST_CHARWIN_END,
	ST_HP_START = 5250,
	ST_HP_BAR,
	ST_HP_MASK,
	ST_HP_END,
	ST_GAMEMENU_START = 5300,
	ST_GAMEMENU_BACKGROUND,
	ST_GAMEMENU_FRAME,
	ST_GAMEMENU_BUTTON_DEFAULT,
	ST_GAMEMENU_BUTTON_SELECT,
	ST_GAMEMENU_END,

	ST_MAPTOOL_START = 10000,
	ST_MAPTOOL_BLOCK,
	ST_MAPTOOL_FLOOR,
	ST_MAPTOOL_PORTAL,
	ST_MAPTOOL_BLOCK_RANDOM,
	ST_MAPTOOL_FLOOR_RANDOM,
	ST_MAPTOOL_TRAP_RANDOM,
	ST_MAPTOOL_MONSTER_RANDOM,
	ST_MAPTOOL_END,

	ST_PLAYER_START = 11000,
	ST_PLAYER_TORSO,
	ST_PLAYER_HEAD,
	ST_PLAYER_ARM_LEFT,
	ST_PLAYER_ARM_RIGHT,
	ST_PLAYER_LEG_LEFT,
	ST_PLAYER_LEG_RIGHT,
	ST_PLAYER_END,

	ST_LASER_START = 11100,
	ST_LASER_LOWER,
	ST_LASER_UPPER,
	ST_LASER_RELEASE,
	ST_LASER_END,

	ST_END,
};

enum AnimationType
{
	//Animation Type
	AT_START = 500,
	AT_PLAYER = AT_START,
	AT_PLAYER_IDLE,
	AT_PLAYER_MOVE,
	AT_PLAYER_JUMP,
	AT_PLAYER_END,

	AT_MISSILE_START = 600,
	AT_MISSILE_PLAYER_MELEE,
	AT_MISSILE_PLAYER_LINEAR,
	AT_MISSILE_AIMING,
	AT_MISSILE_THUNDER,
	AT_MISSILE_END,

	AT_TRAP_START = 700,
	AT_TRAP_UNDERGROUND,
	AT_TRAP_ELECTRIC,
	AT_TRAP_END,

	AT_MONSTER_START = 800,
	AT_MONSTER_STAND_SHOT_IDLE,
	AT_MONSTER_STAND_SHOT_ATTACK,
	AT_MONSTER_RUSH_IDLE,
	AT_MONSTER_RUSH_MOVE,
	AT_DEMON_MOVE,
	AT_DEMON_ATTACK,
	AT_RABBIT_MOVE,
	AT_MONSTER_END,
	
	AT_PLAYER_PARTS_START = 900,
	AT_PLAYER_PARTS_ENGENE,
	AT_PLAYER_PARTS_ARMOR,
	AT_PLAYER_PARTS_RANGE,
	AT_PLAYER_PARTS_MELEE,
	AT_PLAYER_PARTS_LEG,
	AT_PLAYER_PARTS_HEAD,
	AT_PLAYER_PARTS_END,
	AT_END,
};


