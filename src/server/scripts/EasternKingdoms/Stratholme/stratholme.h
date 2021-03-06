/*
REWRITTEN BY XINEF
*/

#ifndef DEF_STRATHOLME_H
#define DEF_STRATHOLME_H

enum DataTypes
{
    TYPE_BARON_RUN                      = 0,
	TYPE_ZIGGURAT1						= 1,
	TYPE_ZIGGURAT2						= 2,
	TYPE_ZIGGURAT3						= 3,
	TYPE_BARON_FIGHT					= 4,
	TYPE_MALLOW							= 5,

	DATA_BARON_RUN_NONE					= 0,
	DATA_BARON_RUN_GATE					= 1,
};

enum CreatureIds
{
    NPC_BARON_RIVENDARE                 = 10440,
    NPC_BILE_SPEWER                     = 10416,
    NPC_VENOM_BELCHER                   = 10417,
    NPC_RAMSTEIN_THE_GORGER             = 10439,
	NPC_MINDLESS_UNDEAD					= 11030,
    NPC_BLACK_GUARD                     = 10394,
    NPC_YSIDA                           = 16031
};

enum GameobjectIds
{
    GO_ZIGGURAT_DOORS1                  = 175380,  // baroness
    GO_ZIGGURAT_DOORS2                  = 175379,  // nerub'enkan
    GO_ZIGGURAT_DOORS3                  = 175381,  // maleki
    GO_ZIGGURAT_DOORS4                  = 175405,  // rammstein
    GO_ZIGGURAT_DOORS5                  = 175796,  // baron
    GO_GAUNTLET_GATE                    = 175374,
    GO_SLAUGTHER_GATE                   = 175373,
	GO_SLAUGHTER_GATE_SIDE				= 175358,
	GO_EXIT_GATE						= 176424
};

enum MiscIds
{
	SAY_BLACK_GUARD_INIT				= 0,
	SAY_BARON_INIT_YELL					= 0,
	SAY_BRAON_ZIGGURAT_FALL_YELL		= 1,
	SAY_BARON_10M						= 2,
	SAY_BARON_5M						= 3,
	SAY_BARON_0M						= 4,
	SAY_BRAON_SUMMON_RAMSTEIN			= 5,
	SAY_BARON_GUARD_DEAD				= 6,

	EVENT_BARON_TIME					= 1,
	EVENT_SPAWN_MINDLESS				= 2,
	EVENT_FORCE_SLAUGHTER_EVENT			= 3,
	EVENT_SPAWN_BLACK_GUARD				= 4,
	EVENT_EXECUTE_PRISONER				= 5,

    SPELL_BARON_ULTIMATUM               = 27861
};

#endif

