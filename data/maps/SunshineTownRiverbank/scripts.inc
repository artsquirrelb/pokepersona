SunshineTownRiverbank_MapScripts::
# 6 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 31 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 19
	goto_if_lt SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 12 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 12 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 19
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 15 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 20
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 20 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 21
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 25 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 22
	goto_if_ge SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
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
	playbgm MUS_HELP, TRUE
	goto SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 16 "data/maps/SunshineTownRiverbank/scripts.pory"
	playbgm MUS_NONE, TRUE
# 17 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 21 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 22 "data/maps/SunshineTownRiverbank/scripts.pory"
	setobjectxyperm 4, 14, 0
# 23 "data/maps/SunshineTownRiverbank/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 26 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_1
# 27 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_2
# 28 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_3
	return

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineTownRiverbank_Eventscript_OnWarp19
# 4 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 20, SunshineTownRiverbank_Eventscript_OnWarp20
	.2byte 0

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 32 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineTownRiverbank_Eventscript_OnFrame19
# 33 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 21, SunshineTownRiverbank_Eventscript_OnFrame21
	.2byte 0


SunshineTownRiverbank_Eventscript_OnWarp19::
# 37 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 38 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 3, MAP_SUNSHINE_TOWN_RIVERBANK
	return


SunshineTownRiverbank_Eventscript_OnWarp20::
# 42 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 43 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 3, MAP_SUNSHINE_TOWN_RIVERBANK
	return


SunshineTownRiverbank_Eventscript_OnFrame19::
# 47 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 48 "data/maps/SunshineTownRiverbank/scripts.pory"
	goto SunshineTownRiverbank_Eventscript_AzumarillJumpOutOfTheRiver
# 49 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_AzumarillJumpOutOfTheRiver::
# 53 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 54 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 20
# 55 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_M_DIVE
# 56 "data/maps/SunshineTownRiverbank/scripts.pory"
	showobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 57 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 4, AzumarillJumpsOffRiver
# 58 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 59 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 40
# 60 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 4, AzumarillRunsOff
# 61 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 62 "data/maps/SunshineTownRiverbank/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 20
# 63 "data/maps/SunshineTownRiverbank/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 64 "data/maps/SunshineTownRiverbank/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 65 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


# 68 "data/maps/SunshineTownRiverbank/scripts.pory"
AzumarillJumpsOffRiver:
# 69 "data/maps/SunshineTownRiverbank/scripts.pory"
	jump_up
# 70 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 71 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 72 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_left
# 73 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 74 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 75 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_right
# 76 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 77 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 78 "data/maps/SunshineTownRiverbank/scripts.pory"
	emote_pensive
	step_end

# 81 "data/maps/SunshineTownRiverbank/scripts.pory"
AzumarillRunsOff:
# 82 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 82 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 82 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 82 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 82 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
	step_end

SunshineTownRiverbank_Eventscript_OnFrame21::
# 86 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 87 "data/maps/SunshineTownRiverbank/scripts.pory"
	goto SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji
# 88 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji::
# 92 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 93 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 94 "data/maps/SunshineTownRiverbank/scripts.pory"
	addobject 3, MAP_SUNSHINE_TOWN_RIVERBANK
# 95 "data/maps/SunshineTownRiverbank/scripts.pory"
	addobject 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 96 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_PIN
# 97 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 3, emoteexclamation
# 98 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 99 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 20
# 100 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement LOCALID_PLAYER, KurosawaFindingAkiShinji
# 101 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 3, KurosawaFindingAkiShinji
# 102 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 103 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 40
# 104 "data/maps/SunshineTownRiverbank/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 105 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 16
# 106 "data/maps/SunshineTownRiverbank/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 22
# 107 "data/maps/SunshineTownRiverbank/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 108 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


# 111 "data/maps/SunshineTownRiverbank/scripts.pory"
KurosawaFindingAkiShinji:
# 112 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 112 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 112 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 112 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 113 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 114 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 115 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 116 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_right
# 116 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_right
# 117 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_down
# 118 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 119 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
	step_end
