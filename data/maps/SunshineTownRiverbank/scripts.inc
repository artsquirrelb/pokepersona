SunshineTownRiverbank_MapScripts::
# 6 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTownRiverbank_MapScripts_OnTransition
# 2 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineTownRiverbank_Eventscript_OnWarp19
# 4 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 20, SunshineTownRiverbank_Eventscript_OnWarp20
	.2byte 0

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineTownRiverbank_Eventscript_OnFrame19
# 10 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 21, SunshineTownRiverbank_Eventscript_OnFrame21
	.2byte 0


SunshineTownRiverbank_MapScripts_OnTransition::
# 15 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_4
# 16 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 19
	goto_if_lt SunshineTownRiverbank_MapScripts_OnTransition_2
SunshineTownRiverbank_MapScripts_OnTransition_1:
# 21 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 19
	goto_if_eq SunshineTownRiverbank_MapScripts_OnTransition_5
# 21 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 20
	goto_if_eq SunshineTownRiverbank_MapScripts_OnTransition_5
SunshineTownRiverbank_MapScripts_OnTransition_4:
# 26 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 21
	goto_if_eq SunshineTownRiverbank_MapScripts_OnTransition_10
SunshineTownRiverbank_MapScripts_OnTransition_9:
# 31 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 22
	goto_if_ge SunshineTownRiverbank_MapScripts_OnTransition_13
SunshineTownRiverbank_MapScripts_OnTransition_12:
# 36 "data/maps/SunshineTownRiverbank/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_3
# 37 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTownRiverbank_MapScripts_OnTransition_15
	return

SunshineTownRiverbank_MapScripts_OnTransition_2:
# 17 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_1
# 18 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_2
# 19 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineTownRiverbank_MapScripts_OnTransition_1

SunshineTownRiverbank_MapScripts_OnTransition_5:
# 22 "data/maps/SunshineTownRiverbank/scripts.pory"
	playbgm MUS_NONE, TRUE
# 23 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto SunshineTownRiverbank_MapScripts_OnTransition_4

SunshineTownRiverbank_MapScripts_OnTransition_10:
# 27 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 28 "data/maps/SunshineTownRiverbank/scripts.pory"
	setobjectxyperm 4, 16, 0
# 29 "data/maps/SunshineTownRiverbank/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto SunshineTownRiverbank_MapScripts_OnTransition_9

SunshineTownRiverbank_MapScripts_OnTransition_13:
# 32 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_1
# 33 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_2
# 34 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineTownRiverbank_MapScripts_OnTransition_12

SunshineTownRiverbank_MapScripts_OnTransition_15:
# 39 "data/maps/SunshineTownRiverbank/scripts.pory"
	clearflag FLAG_TEMP_4
	return


SunshineTownRiverbank_Eventscript_OnWarp19::
# 43 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 44 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 3, MAP_SUNSHINE_TOWN_RIVERBANK
	return


SunshineTownRiverbank_Eventscript_OnWarp20::
# 48 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 49 "data/maps/SunshineTownRiverbank/scripts.pory"
	hideobjectat 3, MAP_SUNSHINE_TOWN_RIVERBANK
	return


SunshineTownRiverbank_Eventscript_OnFrame19::
# 53 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 54 "data/maps/SunshineTownRiverbank/scripts.pory"
	goto SunshineTownRiverbank_Eventscript_AzumarillJumpOutOfTheRiver
# 55 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_AzumarillJumpOutOfTheRiver::
# 59 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 60 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 20
# 61 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_M_DIVE
# 62 "data/maps/SunshineTownRiverbank/scripts.pory"
	showobjectat 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 63 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 4, AzumarillJumpsOffRiver
# 64 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 65 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 40
# 66 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 4, AzumarillRunsOff
# 67 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 68 "data/maps/SunshineTownRiverbank/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 20
# 69 "data/maps/SunshineTownRiverbank/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 70 "data/maps/SunshineTownRiverbank/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 71 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


# 74 "data/maps/SunshineTownRiverbank/scripts.pory"
AzumarillJumpsOffRiver:
# 75 "data/maps/SunshineTownRiverbank/scripts.pory"
	jump_up
# 76 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 77 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 78 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_left
# 79 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 80 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 81 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_right
# 82 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 83 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 84 "data/maps/SunshineTownRiverbank/scripts.pory"
	emote_pensive
	step_end

# 87 "data/maps/SunshineTownRiverbank/scripts.pory"
AzumarillRunsOff:
# 88 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 88 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 88 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 88 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
# 88 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_up
	step_end

SunshineTownRiverbank_Eventscript_OnFrame21::
# 92 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 93 "data/maps/SunshineTownRiverbank/scripts.pory"
	goto SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji
# 94 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_KurosawaFindingAkiShinji::
# 98 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 99 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 100 "data/maps/SunshineTownRiverbank/scripts.pory"
	addobject 3, MAP_SUNSHINE_TOWN_RIVERBANK
# 101 "data/maps/SunshineTownRiverbank/scripts.pory"
	addobject 4, MAP_SUNSHINE_TOWN_RIVERBANK
# 102 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_PIN
# 103 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 3, emoteexclamation
# 104 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 105 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 106 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement LOCALID_PLAYER, KurosawaFindingAkiShinji
# 107 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymovement 3, KurosawaFindingAkiShinji
# 108 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitmovement 0
# 109 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 40
# 110 "data/maps/SunshineTownRiverbank/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 111 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 16
# 112 "data/maps/SunshineTownRiverbank/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 22
# 113 "data/maps/SunshineTownRiverbank/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 114 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	return


# 117 "data/maps/SunshineTownRiverbank/scripts.pory"
KurosawaFindingAkiShinji:
# 118 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 118 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 118 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 118 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_fast_down
# 119 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_right
# 120 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_down
# 121 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 122 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 123 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 124 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_left
# 124 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_left
# 124 "data/maps/SunshineTownRiverbank/scripts.pory"
	walk_left
# 125 "data/maps/SunshineTownRiverbank/scripts.pory"
	face_down
# 126 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
# 127 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay_16
	step_end

SunshineTownRiverbank_Eventscript_Squirtle::
# 131 "data/maps/SunshineTownRiverbank/scripts.pory"
	lock
# 132 "data/maps/SunshineTownRiverbank/scripts.pory"
	faceplayer
# 133 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_NO_CATCHING
# 134 "data/maps/SunshineTownRiverbank/scripts.pory"
	setflag FLAG_NO_RUNNING
# 135 "data/maps/SunshineTownRiverbank/scripts.pory"
	createmon 1, 0, SPECIES_SQUIRTLE, 255, shinyMode = SHINY_MODE_ALWAYS, move1 = MOVE_BUBBLE_BEAM, move2 = MOVE_ICE_BEAM, move3 = MOVE_FAKE_OUT, move4 = MOVE_YAWN, spAtkEv = 100, spAtkIv = 31, speedEv = 100, speedIv = 31
# 136 "data/maps/SunshineTownRiverbank/scripts.pory"
	dowildbattle
# 137 "data/maps/SunshineTownRiverbank/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 138 "data/maps/SunshineTownRiverbank/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 139 "data/maps/SunshineTownRiverbank/scripts.pory"
	doemote SQUIRTLE_Q, 0
# 140 "data/maps/SunshineTownRiverbank/scripts.pory"
	doemote SQUIRTLE_Q, E_HAPPY
# 141 "data/maps/SunshineTownRiverbank/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_Squirtle_Text_0
# 142 "data/maps/SunshineTownRiverbank/scripts.pory"
	closemessage
# 143 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_BALL_OPEN
# 144 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymove SQUIRTLE_Q, SunshineTownRiverbank_Eventscript_Squirtle_Movement_0
# 145 "data/maps/SunshineTownRiverbank/scripts.pory"
	removeobject SQUIRTLE_Q
# 146 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 147 "data/maps/SunshineTownRiverbank/scripts.pory"
	mcsaid 0
# 148 "data/maps/SunshineTownRiverbank/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_Squirtle_Text_1
# 151 "data/maps/SunshineTownRiverbank/scripts.pory"
	closemessage
# 152 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_BALL_TRADE
# 153 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitse
# 154 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 155 "data/maps/SunshineTownRiverbank/scripts.pory"
	doemote MC, E_PENSIVE
# 156 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_POKENAV_CALL
# 157 "data/maps/SunshineTownRiverbank/scripts.pory"
	applymoveplayer emoteexclamation
# 158 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitse
# 159 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 160 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_POKENAV_ON
# 161 "data/maps/SunshineTownRiverbank/scripts.pory"
	delay 30
# 162 "data/maps/SunshineTownRiverbank/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_Squirtle_Text_2
# 166 "data/maps/SunshineTownRiverbank/scripts.pory"
	closemessage
# 167 "data/maps/SunshineTownRiverbank/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 168 "data/maps/SunshineTownRiverbank/scripts.pory"
	waitse
# 169 "data/maps/SunshineTownRiverbank/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_3
# 170 "data/maps/SunshineTownRiverbank/scripts.pory"
	release
	end


# 144 "data/maps/SunshineTownRiverbank/scripts.pory"
SunshineTownRiverbank_Eventscript_Squirtle_Movement_0:
# 144 "data/maps/SunshineTownRiverbank/scripts.pory"
	enter_pokeball
	step_end

SunshineTownRiverbank_Eventscript_Squirtle_Text_0:
# 141 "data/maps/SunshineTownRiverbank/scripts.pory"
	.string "Squirtle happily acknowledged your\n"
	.string "strength.$"

SunshineTownRiverbank_Eventscript_Squirtle_Text_1:
# 148 "data/maps/SunshineTownRiverbank/scripts.pory"
	.string "(That Squirtle was sparkling.\n"
	.string "It must be the one that ran away from\l"
	.string "Prof. Mayoido's lab.\p"
	.string "I should return it to them.)$"

SunshineTownRiverbank_Eventscript_Squirtle_Text_2:
# 162 "data/maps/SunshineTownRiverbank/scripts.pory"
	.string "{SPEAKER NAME_PROF}Hello, {VERSION}-kun.\n"
	.string "It looks like you found the ran away\l"
	.string "Squirtle!\p"
	.string "When you have the chance, return to my\n"
	.string "lab, I have a reward for you as a thanks\l"
	.string "for helping us.\p"
	.string "I gotta run now, see ya later.$"
