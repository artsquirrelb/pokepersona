SunshineTownRiverbank_MapScripts::
# 6 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 28 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 19
	goto_if_lt SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 19
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 12 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 20
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 21
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 22 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 22
	goto_if_ge SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_1
# 9 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/SunshineTownRiverbank/scripts.pory"
	playbgm MUS_NONE, TRUE
# 14 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 18 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 19 "data/maps/SunshineTownRiverbank/scripts.pory"
	setobjectxyperm 4, 14, 0
# 20 "data/maps/SunshineTownRiverbank/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 23 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_1
# 24 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_2
# 25 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_3
	return

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineTownRiverbank_Eventscript_OnWarp19
# 4 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 20, SunshineTownRiverbank_Eventscript_OnWarp20
	.2byte 0

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineTownRiverbank_Eventscript_OnFrame19
# 30 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 21, SunshineTownRiverbank_Eventscript_OnFrame21
	.2byte 0


SunshineTownRiverbank_Eventscript_OnWarp19::
# 34 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 35 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 3, MAP_SUNSHINE_TOWN_RIVERBANK
	return


SunshineTownRiverbank_Eventscript_OnWarp20::
# 39 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 40 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 3, MAP_SUNSHINE_TOWN_RIVERBANK
	return


SunshineTownRiverbank_Eventscript_OnFrame19::
# 44 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 45 "data/maps/SunshineTownRiverbank/scripts.pory"
	goto SunshineTownRiverbank_Eventscript_AzumarillJumpOutOfTheRiver
# 46 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_AzumarillJumpOutOfTheRiver::
# 50 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 51 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 20
# 52 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_M_DIVE
# 53 "data/maps/SunshineTownRiverbank/scripts.pory"
	showobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 54 "data/maps/SunshineTownRiverbank/scripts.pory"
	dofieldeffectwatersurfacing 14, 6, 1
# 55 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 4, AzumarillJumpsOffRiver
# 56 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitfieldeffect FLDEFF_WATER_SURFACING
# 57 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 58 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 40
# 59 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 4, AzumarillRunsOff
# 60 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 61 "data/maps/SunshineTownRiverbank/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 20
# 62 "data/maps/SunshineTownRiverbank/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 63 "data/maps/SunshineTownRiverbank/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 64 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


# 67 "data/maps/SunshineTownRiverbank/scripts.pory"
AzumarillJumpsOffRiver:
# 68 "data/maps/SunshineTownRiverbank/scripts.pory"
	jump_up
# 69 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 70 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 71 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_left
# 72 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 73 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 74 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_right
# 75 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 76 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 77 "data/maps/SunshineTownRiverbank/scripts.pory"
	emote_pensive
	step_end

# 80 "data/maps/SunshineTownRiverbank/scripts.pory"
AzumarillRunsOff:
# 81 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 81 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 81 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 81 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 81 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
	step_end

SunshineTownRiverbank_Eventscript_OnFrame21::
# 85 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 86 "data/maps/SunshineTownRiverbank/scripts.pory"
	goto SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji
# 87 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji::
# 91 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 92 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 93 "data/maps/SunshineTownRiverbank/scripts.pory"
	addobject 3, MAP_SUNSHINE_TOWN_RIVERBANK
# 94 "data/maps/SunshineTownRiverbank/scripts.pory"
	addobject 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 95 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_PIN
# 96 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 3, emoteexclamation
# 97 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 98 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 20
# 99 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement LOCALID_PLAYER, KurosawaFindingAkiShinji
# 100 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 3, KurosawaFindingAkiShinji
# 101 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 102 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 40
# 103 "data/maps/SunshineTownRiverbank/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 104 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 16
# 105 "data/maps/SunshineTownRiverbank/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 22
# 106 "data/maps/SunshineTownRiverbank/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 107 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


# 110 "data/maps/SunshineTownRiverbank/scripts.pory"
KurosawaFindingAkiShinji:
# 111 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 111 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 111 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 111 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 112 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 113 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 114 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 115 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_right
# 115 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_right
# 116 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_down
# 117 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 118 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
	step_end
