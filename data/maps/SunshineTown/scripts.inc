SunshineTown_MapScripts::
# 2 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 30 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_VISITED_SUNSHINE_TOWN
# 4 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 20 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 20 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 23 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 5, 19, 7
# 6 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 7 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 6, 23, 3
# 8 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 14 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 15 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 2, 14, 11
# 16 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 17 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 3, 14
# 18 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 21 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 24 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 25 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 26 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 2, 3, 6
# 27 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 3, 7
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 23 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 16, SunshineTown_Eventscript_OnFrame16
# 32 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_Eventscript_OnFrame23
	.2byte 0


SunshineTown_Eventscript_Kurosawa::
# 37 "data/maps/SunshineTown/scripts.pory"
	lock
# 38 "data/maps/SunshineTown/scripts.pory"
	setspeaker SP_NAME_KUROSAWA
# 39 "data/maps/SunshineTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineTown_Eventscript_Kurosawa_2
# 45 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_1
# 46 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 47 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 48 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, KurosawaNoticed
# 49 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 50 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_2
# 53 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
SunshineTown_Eventscript_Kurosawa_1:
# 55 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Kurosawa_2:
# 40 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 41 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_0
	goto SunshineTown_Eventscript_Kurosawa_1


# 58 "data/maps/SunshineTown/scripts.pory"
KurosawaNoticed:
# 59 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 60 "data/maps/SunshineTown/scripts.pory"
	face_player
	step_end

SunshineTown_Eventscript_GoGetPackage0::
# 64 "data/maps/SunshineTown/scripts.pory"
	lockall
# 65 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 66 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 67 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 68 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 73 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroPreventFromLeaving0:
# 74 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 75 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 77 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroJoinsback0:
# 78 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 79 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

SunshineTown_Eventscript_GoGetPackage1::
# 83 "data/maps/SunshineTown/scripts.pory"
	lockall
# 84 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 85 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 86 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 87 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 88 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 89 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_FatMan::
# 94 "data/maps/SunshineTown/scripts.pory"
	lock
# 95 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 96 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 97 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_Eventscript_FatMan_3
SunshineTown_Eventscript_FatMan_1:
# 103 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_FatMan_7
# 103 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_FatMan_7
# 109 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_3
SunshineTown_Eventscript_FatMan_6:
# 111 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_FatMan_2:
# 98 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_1
# 99 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 100 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_FatMan_3:
# 97 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_FatMan_2
	goto SunshineTown_Eventscript_FatMan_1

SunshineTown_Eventscript_FatMan_7:
# 104 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_2
# 106 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
	goto SunshineTown_Eventscript_FatMan_6


SunshineTown_Eventscript_Boy::
# 115 "data/maps/SunshineTown/scripts.pory"
	lock
# 116 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 117 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 118 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_Eventscript_Boy_3
SunshineTown_Eventscript_Boy_1:
# 124 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_Boy_7
# 124 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_Boy_7
# 131 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_3
SunshineTown_Eventscript_Boy_6:
# 134 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Boy_2:
# 119 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
# 120 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 121 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_3:
# 118 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_Boy_2
	goto SunshineTown_Eventscript_Boy_1

SunshineTown_Eventscript_Boy_7:
# 125 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
# 128 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
	goto SunshineTown_Eventscript_Boy_6


SunshineTown_Eventscript_DirerctionSign::
# 138 "data/maps/SunshineTown/scripts.pory"
	lock
# 139 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DirerctionSign_Text_0
# 141 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_TownSign::
# 145 "data/maps/SunshineTown/scripts.pory"
	lock
# 146 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_TownSign_Text_0
# 147 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OnFrame16::
# 151 "data/maps/SunshineTown/scripts.pory"
	lockall
# 152 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExitingPC
# 153 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_ExitingPC::
# 157 "data/maps/SunshineTown/scripts.pory"
	lockall
# 158 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_AkihikoExitingPC
# 159 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, SunshineTown_Eventscript_ShinjiroExitingPC
# 160 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExitingPC_Text_0
# 163 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 164 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, walkup
# 165 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 167 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
# 168 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 17
# 169 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 170 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


# 173 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_AkihikoExitingPC:
# 174 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 175 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 175 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 176 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

# 179 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroExitingPC:
# 180 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 180 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 180 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 181 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 181 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 182 "data/maps/SunshineTown/scripts.pory"
	face_up
	step_end

SunshineTown_Eventscript_DontLeaveTown::
# 186 "data/maps/SunshineTown/scripts.pory"
	lockall
# 187 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 188 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 189 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DontLeaveTown_Text_0
# 190 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 191 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 195 "data/maps/SunshineTown/scripts.pory"
	lock
# 196 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 197 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 198 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 199 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 200 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointEnteringPC::
# 204 "data/maps/SunshineTown/scripts.pory"
	lock
# 205 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 206 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 207 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 208 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointLeavingTown::
# 212 "data/maps/SunshineTown/scripts.pory"
	lock
# 213 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 214 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 215 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 216 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_WarpToBurningOrphanage2::
# 220 "data/maps/SunshineTown/scripts.pory"
	lock
# 221 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 222 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 223 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 224 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 225 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 226 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OW_Happiny::
# 230 "data/maps/SunshineTown/scripts.pory"
	lockall
# 231 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_Eventscript_OW_Happiny_1
# 238 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 239 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 240 "data/maps/SunshineTown/scripts.pory"
	startoverworldencounter 6
# 241 "data/maps/SunshineTown/scripts.pory"
	removeobject 6
# 242 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_A
# 243 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_1:
# 232 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OW_Happiny_Text_0
# 233 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 234 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_OnFrame23::
# 250 "data/maps/SunshineTown/scripts.pory"
	lock
# 251 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OnFrame23_Text_0
# 255 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 256 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 257 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 258 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 259 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 260 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 265 "data/maps/SunshineTown/scripts.pory"
	lock
# 266 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 267 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 273 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 274 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 275 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 279 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 282 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 268 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
# 269 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 276 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 287 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 288 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 289 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 295 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 296 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 305 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 297 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 298 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 299 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 300 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 301 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 310 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 311 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 318 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 320 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 321 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 322 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 325 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 326 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 327 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 312 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 313 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 314 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_ExpertF_PreQuest::
# 334 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 335 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 336 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 341 "data/maps/SunshineTown/scripts.pory"
	lock
# 342 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 343 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 349 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 350 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 344 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 345 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_HiddenGrotto::
# 355 "data/maps/SunshineTown/scripts.pory"
	lock
# 356 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 357 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 358 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 361 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 359 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


unlockcharacters::
# 368 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 369 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 370 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 371 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 372 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 373 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 374 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 375 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
	end


makecharagrayout::
# 380 "data/maps/SunshineTown/scripts.pory"
	msgbox makecharagrayout_Text_0
# 381 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 382 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 383 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 384 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 385 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 386 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_2, 0
# 387 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_3, 0
	return


SunshineTown_Eventscript_Kurosawa_Text_0:
# 41 "data/maps/SunshineTown/scripts.pory"
	.string "Hm?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-we'll get going now!$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 45 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 50 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Do you need some help, kids?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh nothing! Sorry for bothering you,\n"
	.string "sir.\p"
	.string "(He looks so intimidating!)$"

SunshineTown_Eventscript_GoGetPackage0_Text_0:
# 65 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 95 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 98 "data/maps/SunshineTown/scripts.pory"
	.string "Sorry, I lost my wallet around here and\n"
	.string "Yoshida is helping me finding it.$"

SunshineTown_Eventscript_FatMan_Text_2:
# 104 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_3:
# 109 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 117 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 119 "data/maps/SunshineTown/scripts.pory"
	.string "I'm helping Kojima find his wallet. Sigh...\n"
	.string "He's always losing important stuff.$"

SunshineTown_Eventscript_Boy_Text_2:
# 125 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_3:
# 131 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lived on this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 139 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\n"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 146 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 161 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_DontLeaveTown_Text_0:
# 189 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should ask people in town about that\n"
	.string "explosion sound!$"

SunshineTown_Eventscript_NoPointEnteringPC_Text_0:
# 206 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}(Not the time to be dawdling around!)$"

SunshineTown_Eventscript_OW_Happiny_Text_0:
# 232 "data/maps/SunshineTown/scripts.pory"
	.string "The Happiny is looking through the\n"
	.string "door. It won't budge no matter what.$"

SunshineTown_Eventscript_OnFrame23_Text_0:
# 251 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR GREEN}Tips: Quest System is now unlocked.\p"
	.string "Check around for quest givers with a\n"
	.string "light blue exclamation mark.\p"
	.string "You can open quest menu in\n"
	.string "{START_BUTTON} Menu {RIGHT_ARROW} {L_BUTTON}.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 266 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 287 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 297 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 312 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 318 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 322 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 334 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 342 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

unlockcharacters_Text_0:
# 368 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

makecharagrayout_Text_0:
# 380 "data/maps/SunshineTown/scripts.pory"
	.string "Marking prologue to completed & reset\n"
	.string "all temp vars$"
