SunshineTown_MapScripts::
# 2 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 48 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 55 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SunshineTown_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_VISITED_SUNSHINE_TOWN
# 4 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 20 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 20 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 20 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 23 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 29 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_ne SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 32 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 35 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 19
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
# 35 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
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

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 10 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 19
	goto_if_ne SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
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
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 21 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 24 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 25 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 26 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 2, 3, 6
# 27 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 3, 7
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 23 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 30 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 33 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_4
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_34:
# 36 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 3, 13, 6
# 37 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 38 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 24, 14, 7
# 39 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_LEFT
# 40 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 22, 31, 16
# 41 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_DOWN
# 42 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 23, 31, 17
# 43 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 8, 4
# 45 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 49 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 16, SunshineTown_Eventscript_OnFrame16
# 50 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_Eventscript_OnFrame23
# 52 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 18, SunshineTown_Eventscript_MitsuruOnFrame18
# 53 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 19, SunshineTown_Eventscript_MitsuruOnFrame19
	.2byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 56 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 19, SunshineTown_Eventscript_MitsuruOnLoad19
	.2byte 0


SunshineTown_Eventscript_MitsuruOnLoad19::
# 61 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, invisible
	return


SunshineTown_Eventscript_MitsuruOnFrame18::
# 65 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneStarts
# 66 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 67 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 19
# 68 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 4, 6
	end


SunshineTown_Eventscript_MitsuruOnFrame19::
# 73 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_MitsuruSeeingPoliceRunning
	return


SunshineTown_Eventscript_Kurosawa::
# 77 "data/maps/SunshineTown/scripts.pory"
	lock
# 78 "data/maps/SunshineTown/scripts.pory"
	setspeaker SP_NAME_KUROSAWA
# 79 "data/maps/SunshineTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineTown_Eventscript_Kurosawa_2
# 85 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_1
# 86 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 87 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 88 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, KurosawaNoticed
# 89 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 90 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_2
# 93 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
SunshineTown_Eventscript_Kurosawa_1:
# 95 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Kurosawa_2:
# 80 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 81 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_0
	goto SunshineTown_Eventscript_Kurosawa_1


# 98 "data/maps/SunshineTown/scripts.pory"
KurosawaNoticed:
# 99 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 100 "data/maps/SunshineTown/scripts.pory"
	face_player
	step_end

SunshineTown_Eventscript_GoGetPackage0::
# 104 "data/maps/SunshineTown/scripts.pory"
	lockall
# 105 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 106 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 107 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 108 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 109 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 113 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroPreventFromLeaving0:
# 114 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 115 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 117 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroJoinsback0:
# 118 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 119 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

SunshineTown_Eventscript_GoGetPackage1::
# 123 "data/maps/SunshineTown/scripts.pory"
	lockall
# 124 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 125 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 126 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 127 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 129 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_FatMan::
# 134 "data/maps/SunshineTown/scripts.pory"
	lock
# 135 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 136 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 137 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_Eventscript_FatMan_3
SunshineTown_Eventscript_FatMan_1:
# 143 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_FatMan_7
# 143 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_FatMan_7
# 149 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_3
SunshineTown_Eventscript_FatMan_6:
# 151 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_FatMan_2:
# 138 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_1
# 139 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 140 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_FatMan_3:
# 137 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_FatMan_2
	goto SunshineTown_Eventscript_FatMan_1

SunshineTown_Eventscript_FatMan_7:
# 144 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_2
# 146 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
	goto SunshineTown_Eventscript_FatMan_6


SunshineTown_Eventscript_Boy::
# 155 "data/maps/SunshineTown/scripts.pory"
	lock
# 156 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 157 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 158 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_Eventscript_Boy_3
SunshineTown_Eventscript_Boy_1:
# 164 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_Boy_7
# 164 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_Boy_7
# 171 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_3
SunshineTown_Eventscript_Boy_6:
# 174 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Boy_2:
# 159 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
# 160 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 161 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_3:
# 158 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_Boy_2
	goto SunshineTown_Eventscript_Boy_1

SunshineTown_Eventscript_Boy_7:
# 165 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
# 168 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
	goto SunshineTown_Eventscript_Boy_6


SunshineTown_Eventscript_DirerctionSign::
# 178 "data/maps/SunshineTown/scripts.pory"
	lock
# 179 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DirerctionSign_Text_0
# 181 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_TownSign::
# 185 "data/maps/SunshineTown/scripts.pory"
	lock
# 186 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_TownSign_Text_0
# 187 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OnFrame16::
# 191 "data/maps/SunshineTown/scripts.pory"
	lockall
# 192 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExitingPC
# 193 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_ExitingPC::
# 197 "data/maps/SunshineTown/scripts.pory"
	lockall
# 198 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_AkihikoExitingPC
# 199 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, SunshineTown_Eventscript_ShinjiroExitingPC
# 200 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExitingPC_Text_0
# 203 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 204 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, walkup
# 205 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 207 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
# 208 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 17
# 209 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 210 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


# 213 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_AkihikoExitingPC:
# 214 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 215 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 215 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

# 219 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroExitingPC:
# 220 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 220 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 220 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 221 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/SunshineTown/scripts.pory"
	face_up
	step_end

SunshineTown_Eventscript_DontLeaveTown::
# 226 "data/maps/SunshineTown/scripts.pory"
	lockall
# 227 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 228 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 229 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DontLeaveTown_Text_0
# 230 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 231 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 235 "data/maps/SunshineTown/scripts.pory"
	lock
# 236 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 237 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 238 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 239 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 240 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointEnteringPC::
# 244 "data/maps/SunshineTown/scripts.pory"
	lock
# 245 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 246 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 247 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 248 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointLeavingTown::
# 252 "data/maps/SunshineTown/scripts.pory"
	lock
# 253 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 254 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 255 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 256 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_WarpToBurningOrphanage2::
# 260 "data/maps/SunshineTown/scripts.pory"
	lock
# 261 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 262 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 263 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 264 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 265 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 266 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OW_Happiny::
# 270 "data/maps/SunshineTown/scripts.pory"
	lockall
# 271 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_Eventscript_OW_Happiny_1
# 278 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 279 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 280 "data/maps/SunshineTown/scripts.pory"
	startoverworldencounter 6
# 281 "data/maps/SunshineTown/scripts.pory"
	removeobject 6
# 282 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_A
# 283 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_1:
# 272 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OW_Happiny_Text_0
# 273 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 274 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_OnFrame23::
# 290 "data/maps/SunshineTown/scripts.pory"
	lock
# 291 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OnFrame23_Text_0
# 295 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 296 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 297 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 298 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 299 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 300 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 305 "data/maps/SunshineTown/scripts.pory"
	lock
# 306 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 307 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 313 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 314 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 315 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 319 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 322 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 308 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
# 309 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 316 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 327 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 328 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 329 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 335 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 336 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 345 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 337 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 338 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 339 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 340 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 341 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 350 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 351 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 358 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 360 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 361 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 362 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 365 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 366 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 367 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 352 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 353 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 354 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_ExpertF_PreQuest::
# 374 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 375 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 376 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 381 "data/maps/SunshineTown/scripts.pory"
	lock
# 382 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 383 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 389 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 390 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 384 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 385 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 386 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_HiddenGrotto::
# 395 "data/maps/SunshineTown/scripts.pory"
	lock
# 396 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 397 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 398 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 401 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 399 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


unlockcharacters::
# 408 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 409 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 410 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 411 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 412 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 413 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 414 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 415 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
	end


makecharagrayout::
# 420 "data/maps/SunshineTown/scripts.pory"
	msgbox makecharagrayout_Text_0
# 421 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 422 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 423 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 424 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 425 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 426 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_2, 0
# 427 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_3, 0
	return


SunshineTown_Eventscript_MitsuruSeeingPoliceRunning::
# 431 "data/maps/SunshineTown/scripts.pory"
	lockall
# 432 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0
# 433 "data/maps/SunshineTown/scripts.pory"
	delay 32
# 434 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 435 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 436 "data/maps/SunshineTown/scripts.pory"
	applymovement 24, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 437 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 438 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2
# 439 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 440 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 441 "data/maps/SunshineTown/scripts.pory"
	removeobject 3
# 442 "data/maps/SunshineTown/scripts.pory"
	removeobject 24
# 443 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0
# 446 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 447 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 448 "data/maps/SunshineTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 449 "data/maps/SunshineTown/scripts.pory"
	waitse
# 450 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3
# 451 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 452 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 453 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 454 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 455 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 456 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4
# 457 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 458 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 459 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 460 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1
# 461 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 462 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, faceleft
# 463 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 464 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 465 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_RUN_RUN_RUN
# 466 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 467 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2
# 470 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 471 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 472 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 473 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5
# 474 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 475 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3
# 480 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 481 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 20
# 482 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 483 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneEnds
# 484 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 432 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0:
# 432 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 432 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 432 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 432 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 432 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 432 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 434 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1:
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
	step_end

# 438 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2:
# 438 "data/maps/SunshineTown/scripts.pory"
	face_down
# 438 "data/maps/SunshineTown/scripts.pory"
	lock_facing_direction
# 438 "data/maps/SunshineTown/scripts.pory"
	walk_fast_up
# 438 "data/maps/SunshineTown/scripts.pory"
	unlock_facing_direction
# 438 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 438 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 450 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3:
# 450 "data/maps/SunshineTown/scripts.pory"
	set_visible
# 450 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 450 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 450 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 456 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4:
# 456 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 456 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 473 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5:
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 473 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

SunshineTown_Eventscript_Kurosawa_Text_0:
# 81 "data/maps/SunshineTown/scripts.pory"
	.string "Hm?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-we'll get going now!$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 85 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 90 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Do you need some help, kids?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh nothing! Sorry for bothering you,\n"
	.string "sir.\p"
	.string "(He looks so intimidating!)$"

SunshineTown_Eventscript_GoGetPackage0_Text_0:
# 105 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 135 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 138 "data/maps/SunshineTown/scripts.pory"
	.string "Sorry, I lost my wallet around here and\n"
	.string "Yoshida is helping me finding it.$"

SunshineTown_Eventscript_FatMan_Text_2:
# 144 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_3:
# 149 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 157 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 159 "data/maps/SunshineTown/scripts.pory"
	.string "I'm helping Kojima find his wallet. Sigh...\n"
	.string "He's always losing important stuff.$"

SunshineTown_Eventscript_Boy_Text_2:
# 165 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_3:
# 171 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lived on this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 179 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\n"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 186 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 201 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_DontLeaveTown_Text_0:
# 229 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should ask people in town about that\n"
	.string "explosion sound!$"

SunshineTown_Eventscript_NoPointEnteringPC_Text_0:
# 246 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}(Not the time to be dawdling around!)$"

SunshineTown_Eventscript_OW_Happiny_Text_0:
# 272 "data/maps/SunshineTown/scripts.pory"
	.string "The Happiny is looking through the\n"
	.string "door. It won't budge no matter what.$"

SunshineTown_Eventscript_OnFrame23_Text_0:
# 291 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR GREEN}Tips: Quest System is now unlocked.\p"
	.string "Check around for quest givers with a\n"
	.string "light blue exclamation mark.\p"
	.string "You can open quest menu in\n"
	.string "{START_BUTTON} Menu {RIGHT_ARROW} {L_BUTTON}.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 306 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 327 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 337 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 352 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 358 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 362 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 374 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 382 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

unlockcharacters_Text_0:
# 408 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

makecharagrayout_Text_0:
# 420 "data/maps/SunshineTown/scripts.pory"
	.string "Marking prologue to completed & reset\n"
	.string "all temp vars$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0:
# 443 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The police? How did they arrive this\n"
	.string "fast? The explosion happened just a\l"
	.string "few minutes ago.)\p"
	.string "(Not to mention, if I remember\n"
	.string "correctly, the nearest station is in the\l"
	.string "opposite direction of Sunshine Town.)$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1:
# 460 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Excuse me. Did something happen?\n"
	.string "Everyone in town looks on edge.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2:
# 467 "data/maps/SunshineTown/scripts.pory"
	.string "There was an explosion at the\n"
	.string "orphanage west of town, didn't you\l"
	.string "hear?\p"
	.string "Lots of people were injured and the\n"
	.string "town people are trying to help.\p"
	.string "Now excuse me, I gotta bring these\n"
	.string "medicines to the injured.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3:
# 475 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}(The orphanage was exploded?)\p"
	.string "(Damn it! How am I so naive. Of course\n"
	.string "they would do that to erase the proofs\l"
	.string "and traces.)\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(It was all my fault... If only I acted\n"
	.string "sooner.)\p"
	.string "...........\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(I should go check and help the injured\n"
	.string "as well.)$"
