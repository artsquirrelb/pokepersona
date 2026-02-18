SunshineTownRiverbank_MapScripts::
# 5 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTownRiverbank_MapScripts_OnTransition
# 2 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_TO_RIVERBANK, SunshineTownRiverbank_Eventscript_OnWarp19
	.2byte 0

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_TO_RIVERBANK, SunshineTownRiverbank_Eventscript_OnFrame19
	.2byte 0


SunshineTownRiverbank_MapScripts_OnTransition::
# 13 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_4
# 14 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_RIVERBANK
	goto_if_lt SunshineTownRiverbank_MapScripts_OnTransition_2
SunshineTownRiverbank_MapScripts_OnTransition_1:
# 19 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_RIVERBANK
	goto_if_eq SunshineTownRiverbank_MapScripts_OnTransition_5
SunshineTownRiverbank_MapScripts_OnTransition_4:
# 24 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_KUROSAWAS_HOUSE
	goto_if_ge SunshineTownRiverbank_MapScripts_OnTransition_8
SunshineTownRiverbank_MapScripts_OnTransition_7:
# 29 "data/maps/SunshineTownRiverbank/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_3
# 30 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTownRiverbank_MapScripts_OnTransition_10
	return

SunshineTownRiverbank_MapScripts_OnTransition_2:
# 15 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_1
# 16 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_2
# 17 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineTownRiverbank_MapScripts_OnTransition_1

SunshineTownRiverbank_MapScripts_OnTransition_5:
# 20 "data/maps/SunshineTownRiverbank/scripts.pory"
	playbgm MUS_NONE, TRUE
# 21 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto SunshineTownRiverbank_MapScripts_OnTransition_4

SunshineTownRiverbank_MapScripts_OnTransition_8:
# 25 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_1
# 26 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_2
# 27 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineTownRiverbank_MapScripts_OnTransition_7

SunshineTownRiverbank_MapScripts_OnTransition_10:
# 32 "data/maps/SunshineTownRiverbank/scripts.pory"
	clearflag FLAG_TEMP_4
	return


SunshineTownRiverbank_Eventscript_OnWarp19::
# 36 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 37 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 3, MAP_SUNSHINE_TOWN_RIVERBANK
	return


SunshineTownRiverbank_Eventscript_OnFrame19::
# 41 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 42 "data/maps/SunshineTownRiverbank/scripts.pory"
	goto SunshineTownRiverbank_Eventscript_AzumarillJumpOutOfTheRiver
# 43 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_AzumarillJumpOutOfTheRiver::
# 47 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 48 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 20
# 49 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_M_DIVE
# 50 "data/maps/SunshineTownRiverbank/scripts.pory"
	showobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 51 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 4, AzumarillJumpsOffRiver
# 52 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 53 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 40
# 54 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 4, AzumarillRunsOff
# 55 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 56 "data/maps/SunshineTownRiverbank/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 57 "data/maps/SunshineTownRiverbank/scripts.pory"
	turnobject 4, DIR_SOUTH
# 58 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 59 "data/maps/SunshineTownRiverbank/scripts.pory"
	goto SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji
	return


# 62 "data/maps/SunshineTownRiverbank/scripts.pory"
AzumarillJumpsOffRiver:
# 63 "data/maps/SunshineTownRiverbank/scripts.pory"
	jump_up
# 64 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 65 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 66 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_left
# 67 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 68 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 69 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_right
# 70 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 71 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 72 "data/maps/SunshineTownRiverbank/scripts.pory"
	emote_pensive
	step_end

# 75 "data/maps/SunshineTownRiverbank/scripts.pory"
AzumarillRunsOff:
# 76 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 76 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 76 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 76 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 76 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
	step_end

SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji::
# 80 "data/maps/SunshineTownRiverbank/scripts.pory"
	clearflag FLAG_TEMP_3
# 81 "data/maps/SunshineTownRiverbank/scripts.pory"
	addobject 3
# 82 "data/maps/SunshineTownRiverbank/scripts.pory"
	showobjectat 3, MAP_SUNSHINE_TOWN_RIVERBANK
# 83 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymoveplayer SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji_Movement_0
# 84 "data/maps/SunshineTownRiverbank/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 85 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 86 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_PIN
# 87 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 3, emoteexclamation
# 88 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 89 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 90 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement LOCALID_PLAYER, KurosawaFindingAkiShinji
# 91 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 3, KurosawaFindingAkiShinji
# 92 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 93 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 40
# 94 "data/maps/SunshineTownRiverbank/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 40
# 96 "data/maps/SunshineTownRiverbank/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji_Text_0
# 97 "data/maps/SunshineTownRiverbank/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_KUROSAWAS_HOUSE
# 98 "data/maps/SunshineTownRiverbank/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_KUROSAWAS_HOUSE, 4, 4
# 99 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitstate
	return


# 102 "data/maps/SunshineTownRiverbank/scripts.pory"
KurosawaFindingAkiShinji:
# 103 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 103 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 103 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 103 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 104 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_right
# 105 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_down
# 106 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 107 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 108 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 109 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_left
# 109 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_left
# 109 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_left
# 110 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_down
# 111 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 112 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
	step_end

SunshineTownRiverbank_Eventscript_Squirtle::
# 116 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 117 "data/maps/SunshineTownRiverbank/scripts.pory"
	faceplayer
# 118 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_NO_CATCHING
# 119 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_NO_RUNNING
# 120 "data/maps/SunshineTownRiverbank/scripts.pory"
	createmon 1, 0, SPECIES_SQUIRTLE, 255, shinyMode = SHINY_MODE_ALWAYS, move1 = MOVE_BUBBLE_BEAM, move2 = MOVE_ICE_BEAM, move3 = MOVE_FAKE_OUT, move4 = MOVE_YAWN, spAtkEv = 100, spAtkIv = 31, speedEv = 100, speedIv = 31
# 121 "data/maps/SunshineTownRiverbank/scripts.pory"
	dowildbattle
# 122 "data/maps/SunshineTownRiverbank/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 123 "data/maps/SunshineTownRiverbank/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 124 "data/maps/SunshineTownRiverbank/scripts.pory"
	doemote SQUIRTLE_Q, 0
# 125 "data/maps/SunshineTownRiverbank/scripts.pory"
	doemote SQUIRTLE_Q, E_HAPPY
# 126 "data/maps/SunshineTownRiverbank/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_Squirtle_Text_0
# 127 "data/maps/SunshineTownRiverbank/scripts.pory"
	closemessage
# 128 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_BALL_OPEN
# 129 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymove SQUIRTLE_Q, SunshineTownRiverbank_Eventscript_Squirtle_Movement_0
# 130 "data/maps/SunshineTownRiverbank/scripts.pory"
	removeobject SQUIRTLE_Q
# 131 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 132 "data/maps/SunshineTownRiverbank/scripts.pory"
	mcsaid 0
# 133 "data/maps/SunshineTownRiverbank/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_Squirtle_Text_1
# 136 "data/maps/SunshineTownRiverbank/scripts.pory"
	closemessage
# 137 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_BALL_TRADE
# 138 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitse
# 139 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 140 "data/maps/SunshineTownRiverbank/scripts.pory"
	doemote MC, E_PENSIVE
# 141 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_POKENAV_CALL
# 142 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymoveplayer emoteexclamation
# 143 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitse
# 144 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 145 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_POKENAV_ON
# 146 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 147 "data/maps/SunshineTownRiverbank/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_Squirtle_Text_2
# 151 "data/maps/SunshineTownRiverbank/scripts.pory"
	closemessage
# 152 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 153 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitse
# 154 "data/maps/SunshineTownRiverbank/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_3
# 155 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	end


# 83 "data/maps/SunshineTownRiverbank/scripts.pory"
SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji_Movement_0:
# 83 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 83 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 83 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 83 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 83 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 83 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_right
	step_end

# 129 "data/maps/SunshineTownRiverbank/scripts.pory"
SunshineTownRiverbank_Eventscript_Squirtle_Movement_0:
# 129 "data/maps/SunshineTownRiverbank/scripts.pory"
	enter_pokeball
	step_end

SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji_Text_0:
# 96 "data/maps/SunshineTownRiverbank/scripts.pory"
	.string "A few days later...$"

SunshineTownRiverbank_Eventscript_Squirtle_Text_0:
# 126 "data/maps/SunshineTownRiverbank/scripts.pory"
	.string "Squirtle happily acknowledged your\n"
	.string "strength.$"

SunshineTownRiverbank_Eventscript_Squirtle_Text_1:
# 133 "data/maps/SunshineTownRiverbank/scripts.pory"
	.string "(That Squirtle was sparkling.\n"
	.string "It must be the one that ran away from\l"
	.string "Prof. Mayoido's lab.\p"
	.string "I should return it to them.)$"

SunshineTownRiverbank_Eventscript_Squirtle_Text_2:
# 147 "data/maps/SunshineTownRiverbank/scripts.pory"
	.string "{SPEAKER NAME_PROF}Hello, {VERSION}-kun.\n"
	.string "It looks like you found the ran away\l"
	.string "Squirtle!\p"
	.string "When you have the chance, return to my\n"
	.string "lab, I have a reward for you as a thanks\l"
	.string "for helping us.\p"
	.string "I gotta run now, see ya later.$"
