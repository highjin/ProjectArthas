﻿/************************************************************************/
/*
	CLASS			: ComponentType
	Author			: 남현욱
	역할				: Resource들의 Type 값 정의 enum 관리.
	최종 수정일자		: 2014-11-07
	최종 수정자		: 남현욱
	최종 수정사유		: 우재우
	Comment			: 아이템 스프라이트 추가
*/
/************************************************************************/

#pragma once
#include "Macro.h"

enum SpriteType
{
	ST_START = 0,
	ST_IMAGE_NONE = ST_START,
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
	ST_BAR_CONTAINER,
	ST_BAR,
	ST_GRENADE,
	ST_ETC_END,

	ST_FRONT_NONE = 99,
	ST_HEAD_START = 100,
	ST_HEAD_PENTIUM_FRONT,
	ST_HEAD_PENTIUM_FRONTOUTLINE,
	ST_HEAD_PENTIUM_ICON,
	ST_HEAD_DUALCORE_FRONT,
	ST_HEAD_DUALCORE_FRONTOUTLINE,
	ST_HEAD_DUALCORE_ICON,
	ST_HEAD_END,

	ST_ENGINE_START = 200,
	ST_ENGINE_STEAM_FRONT,
	ST_ENGINE_STEAM_FRONTOUTLINE,
	ST_ENGINE_STEAM_ICON,
	ST_ENGINE_NUCLEAR_FRONT,
	ST_ENGINE_NUCLEAR_FRONTOUTLINE,
	ST_ENGINE_NUCLEAR_ICON,
	ST_ENGINE_END,

	ST_ARMOR_START = 300,
	ST_ARMOR_PLASTIC_FRONT,
	ST_ARMOR_PLASTIC_OULINE,
	ST_ARMOR_PLASTIC_ICON,
	ST_ARMOR_COPPER_FRONT,
	ST_ARMOR_COPPER_OULINE,
	ST_ARMOR_COPPER_ICON,
	ST_ARMOR_END,

	ST_MELEE_START = 400,
	ST_MELEE_HAMMER_FRONT,
	ST_MELEE_HAMMER_FRONTOUTLINE,
	ST_MELEE_HAMMER_ICON,
	ST_MELEE_ZEALOTBLADE_FRONT,
	ST_MELEE_ZEALOTBLADE_FRONTOUTLINE,
	ST_MELEE_ZEALOTBLADE_ICON,
	ST_MELEE_END,

	ST_RANGE_START = 500,
	ST_RANGE_STEAMGUN_FRONT,
	ST_RANGE_STEAMGUN_FRONTOUTLINE,
	ST_RANGE_STEAMGUN_ICON,
	ST_RANGE_60MMMORTAR_FRONT,
	ST_RANGE_60MMMORTAR_FRONTOUTLINE,
	ST_RANGE_60MMMORTAR_ICON,
	ST_RANGE_END,

	ST_STEAMCONTAINER_START = 600,
	ST_STEAMCONTAINER_MASSPRODUCTIONTYPE_FRONT,
	ST_STEAMCONTAINER_MASSPRODUCTIONTYPE_FRONTOUTLINE,
	ST_STEAMCONTAINER_MASSPRODUCTIONTYPE_ICON,
	ST_STEAMCONTAINER_IMPROVEDMODEL_FRONT,
	ST_STEAMCONTAINER_IMPROVEDMODEL_FRONTOUTLINE,
	ST_STEAMCONTAINER_IMPROVEDMODEL_ICON,
	ST_STEAMCONTAINER_END,

	ST_LEG_START = 700,
	ST_LEG_LEWIS_FRONT,
	ST_LEG_LEWIS_FRONTOUTLINE,
	ST_LEG_LEWIS_ICON,
	ST_LEG_BOLT_FRONT,
	ST_LEG_BOLT_FRONTOUTLINE,
	ST_LEG_BOLT_ICON,
	ST_LEG_END,

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
	ST_ASSEMBLY_BUTTON_CONFIRM_DEFAULT,
	ST_ASSEMBLY_BUTTON_CONFIRM_SELECT,
	ST_ASSEMBLY_LABEL_FRAME,
	ST_ASSEMBLY_BUTTON_UPGRADE_DEFAULT,
	ST_ASSEMBLY_BUTTON_UPGRADE_SELECT,
	ST_ASSEMBLY_END,

	ST_SKILL_START = 1100,
	ST_SKILL_BEAR_SUPER_ARMOR = 1101,
	ST_SKILL_BEAR_ZONYA,
	ST_SKILL_BEAR_SUPER_DASH,
	ST_SKILL_BEAR_CRICAL_PUNCH,
	ST_SKILL_BEAR_STUN,
	ST_SKILL_BEAR_EMOLATION,
	ST_SKILL_BEAR_ATTACK_REFLECT,

	ST_SKILL_MONKEY_BIND = 1126,
	ST_SKILL_MONKEY_GRENADE,
	ST_SKILL_MONKEY_MINE,
	ST_SKILL_MONKEY_KNOCK_BACK,
	ST_SKILL_MONKEY_SHIELD,
	ST_SKILL_MONKEY_DUMMY,
	ST_SKILL_MONKEY_ROLLING,

	ST_SKILL_EAGLE_FLYING_ATTACK = 1151,
	ST_SKILL_EAGLE_MISSILE_RADIATION,
	ST_SKILL_EAGLE_BULLET_REMOVER,
	ST_SKILL_EAGLE_STEALTH,
	ST_SKILL_EAGLE_FLASH,
	ST_SKILL_EAGLE_NAPALM,

	ST_SKILL_COMMON_DOUBLE_JUMP = 1176,
	ST_SKILL_COMMON_DASH,
	ST_SKILL_COMMON_BACKSTEP,
	ST_SKILL_COMMON_NAP,
	ST_SKILL_END,

	ST_BLOCK_1ST_START = 3000,
	ST_BLOCK_1ST_01,
	ST_BLOCK_1ST_02,
	ST_BLOCK_1ST_03,
	ST_BLOCK_1ST_04,
	ST_BLOCK_1ST_05,
	ST_BLOCK_1ST_06,
	ST_BLOCK_1ST_07,
	ST_BLOCK_1ST_08,
	ST_BLOCK_1ST_09,
	ST_BLOCK_1ST_10,
	ST_BLOCK_1ST_11,
	ST_BLOCK_1ST_12,
	ST_BLOCK_1ST_13,
	ST_BLOCK_1ST_14,
	ST_BLOCK_1ST_15,
	ST_BLOCK_1ST_END,

	ST_BLOCK_2ND_START = 3050,
	ST_BLOCK_2ND_01,
	ST_BLOCK_2ND_02,
	ST_BLOCK_2ND_03,
	ST_BLOCK_2ND_04,
	ST_BLOCK_2ND_05,
	ST_BLOCK_2ND_06,
	ST_BLOCK_2ND_07,
	ST_BLOCK_2ND_08,
	ST_BLOCK_2ND_09,
	ST_BLOCK_2ND_10,
	ST_BLOCK_2ND_11,
	ST_BLOCK_2ND_12,
	ST_BLOCK_2ND_13,
	ST_BLOCK_2ND_14,
	ST_BLOCK_2ND_15,
	ST_BLOCK_2ND_END,

	ST_BLOCK_3TH_START = 3100,
	ST_BLOCK_3TH_01,
	ST_BLOCK_3TH_02,
	ST_BLOCK_3TH_03,
	ST_BLOCK_3TH_04,
	ST_BLOCK_3TH_05,
	ST_BLOCK_3TH_06,
	ST_BLOCK_3TH_07,
	ST_BLOCK_3TH_08,
	ST_BLOCK_3TH_09,
	ST_BLOCK_3TH_10,
	ST_BLOCK_3TH_11,
	ST_BLOCK_3TH_12,
	ST_BLOCK_3TH_13,
	ST_BLOCK_3TH_14,
	ST_BLOCK_3TH_15,
	ST_BLOCK_3TH_END,

	ST_BLOCK_4TH_START = 3150,
	ST_BLOCK_4TH_01,
	ST_BLOCK_4TH_02,
	ST_BLOCK_4TH_03,
	ST_BLOCK_4TH_04,
	ST_BLOCK_4TH_05,
	ST_BLOCK_4TH_06,
	ST_BLOCK_4TH_07,
	ST_BLOCK_4TH_08,
	ST_BLOCK_4TH_09,
	ST_BLOCK_4TH_10,
	ST_BLOCK_4TH_11,
	ST_BLOCK_4TH_12,
	ST_BLOCK_4TH_13,
	ST_BLOCK_4TH_14,
	ST_BLOCK_4TH_15,
	ST_BLOCK_4TH_END,

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
	AT_MISSILE_BIND,
	AT_GRENADEEXPLOSION,
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
	AT_DEVIL_IDLE,
	AT_DEVIL_MOVE,
	AT_DEVIL_ATTACK,
	AT_DEVIL_ARROW,
	AT_RABBIT_MOVE,
	AT_MONSTER_END,
	
	AT_PLAYER_PARTS_START = 900,

	AT_PLAYER_PARTS_HEAD_0_IDLE,
	AT_PLAYER_PARTS_HEAD_1_IDLE,

	AT_PLAYER_PARTS_ENGENE_0_IDLE,
	AT_PLAYER_PARTS_ENGENE_1_IDLE,

	AT_PLAYER_PARTS_ARMOR_0_IDLE,
	AT_PLAYER_PARTS_ARMOR_1_IDLE,

	AT_PLAYER_PARTS_MELEE_0_IDLE,
	AT_PLAYER_PARTS_MELEE_1_IDLE,

	AT_PLAYER_PARTS_RANGE_0_IDLE,
	AT_PLAYER_PARTS_RANGE_1_IDLE,

	AT_PLAYER_PARTS_STEAM_0_IDLE,
	AT_PLAYER_PARTS_STEAM_1_IDLE,

	AT_PLAYER_PARTS_LEG_0_IDLE,
	AT_PLAYER_PARTS_LEG_1_IDLE,

	AT_PLAYER_PARTS_END,

	AT_EFFECT_START = 2000,
	AT_EFFECT_FLYING,
	AT_EFFECT_AIMING_MISSILE,
	AT_EFFECT_END,
	AT_END,
};


