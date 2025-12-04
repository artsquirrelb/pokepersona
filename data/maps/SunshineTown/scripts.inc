SunshineTown_MapScripts::
# 2 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 48 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 52 "data/maps/SunshineTown/scripts.pory"
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
# 33 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 37 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_37
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
# 31 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 34 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_4
# 35 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 33 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 23
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_36:
# 38 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 3, 13, 6
# 39 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 40 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 24, 14, 7
# 41 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_LEFT
# 42 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 43 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 44 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 8, 4
# 45 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 37 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_36
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 49 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 19, SunshineTown_Eventscript_MitsuruOnWarp19
# 50 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 24, SunshineTown_Eventscript_MitsuruOnWarp24
	.2byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 53 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 16, SunshineTown_Eventscript_OnFrame16
# 54 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_Eventscript_OnFrame23
# 56 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 18, SunshineTown_Eventscript_MitsuruOnFrame18
# 57 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 19, SunshineTown_Eventscript_MitsuruOnFrame19
# 58 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 23, SunshineTown_Eventscript_MitsuruOnFrame23
# 59 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 24, SunshineTown_Eventscript_MitsuruOnFrame24
	.2byte 0


SunshineTown_Eventscript_MitsuruOnWarp19::
# 65 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruOnWarp19_Movement_0
# 66 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOnWarp19_Movement_1
	return


SunshineTown_Eventscript_MitsuruOnFrame23::
# 70 "data/maps/SunshineTown/scripts.pory"
	lock
# 71 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 24
# 72 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 3, 7
# 73 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_MitsuruOnWarp24::
# 77 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


SunshineTown_Eventscript_MitsuruOnFrame24::
# 81 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji
	return


SunshineTown_Eventscript_MitsuruOnFrame18::
# 85 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneStarts
# 86 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 87 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 19
# 88 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 4, 6
# 89 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_MitsuruOnFrame19::
# 93 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_MitsuruSeeingPoliceRunning
	return


SunshineTown_Eventscript_Kurosawa::
# 97 "data/maps/SunshineTown/scripts.pory"
	lock
# 98 "data/maps/SunshineTown/scripts.pory"
	setspeaker SP_NAME_KUROSAWA
# 99 "data/maps/SunshineTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineTown_Eventscript_Kurosawa_2
# 105 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_1
# 106 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 107 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 108 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, KurosawaNoticed
# 109 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_2
# 113 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
SunshineTown_Eventscript_Kurosawa_1:
# 115 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Kurosawa_2:
# 100 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 101 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_0
	goto SunshineTown_Eventscript_Kurosawa_1


# 119 "data/maps/SunshineTown/scripts.pory"
KurosawaNoticed:
# 120 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 121 "data/maps/SunshineTown/scripts.pory"
	face_player
	step_end

SunshineTown_Eventscript_GoGetPackage0::
# 125 "data/maps/SunshineTown/scripts.pory"
	lockall
# 126 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 127 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 128 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 129 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 134 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroPreventFromLeaving0:
# 135 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 136 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 138 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroJoinsback0:
# 139 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 140 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

SunshineTown_Eventscript_GoGetPackage1::
# 144 "data/maps/SunshineTown/scripts.pory"
	lockall
# 145 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 146 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 147 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 148 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 150 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_FatMan::
# 155 "data/maps/SunshineTown/scripts.pory"
	lock
# 156 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 157 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 158 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_Eventscript_FatMan_3
SunshineTown_Eventscript_FatMan_1:
# 164 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_FatMan_7
# 164 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_FatMan_7
# 172 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_3
# 174 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_FatMan_2:
# 159 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_1
# 160 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 161 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_FatMan_3:
# 158 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_FatMan_2
	goto SunshineTown_Eventscript_FatMan_1

SunshineTown_Eventscript_FatMan_7:
# 165 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_2
# 167 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 168 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Boy::
# 179 "data/maps/SunshineTown/scripts.pory"
	lock
# 180 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 181 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 182 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_Eventscript_Boy_3
SunshineTown_Eventscript_Boy_1:
# 188 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_Boy_7
# 188 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_Boy_7
# 196 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_Boy_14
SunshineTown_Eventscript_Boy_13:
# 202 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_4
SunshineTown_Eventscript_Boy_11:
# 205 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 206 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_2:
# 183 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
# 184 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 185 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_3:
# 182 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_Boy_2
	goto SunshineTown_Eventscript_Boy_1

SunshineTown_Eventscript_Boy_7:
# 189 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
# 192 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 193 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_12:
# 197 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_3
	goto SunshineTown_Eventscript_Boy_11

SunshineTown_Eventscript_Boy_14:
# 196 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_Boy_12
	goto SunshineTown_Eventscript_Boy_13


SunshineTown_Eventscript_DirerctionSign::
# 211 "data/maps/SunshineTown/scripts.pory"
	lock
# 212 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DirerctionSign_Text_0
# 214 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_TownSign::
# 219 "data/maps/SunshineTown/scripts.pory"
	lock
# 220 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_TownSign_Text_0
# 221 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_OnFrame16::
# 226 "data/maps/SunshineTown/scripts.pory"
	lockall
# 227 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExitingPC
# 228 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_ExitingPC::
# 232 "data/maps/SunshineTown/scripts.pory"
	lockall
# 233 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_AkihikoExitingPC
# 234 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, SunshineTown_Eventscript_ShinjiroExitingPC
# 235 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 236 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExitingPC_Text_0
# 238 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 239 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, walkup
# 240 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 242 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
# 243 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 17
# 244 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 35
# 245 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 249 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_AkihikoExitingPC:
# 250 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 251 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

# 255 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroExitingPC:
# 256 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 256 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 256 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 257 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 257 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineTown/scripts.pory"
	face_up
	step_end

SunshineTown_Eventscript_DontLeaveTown::
# 262 "data/maps/SunshineTown/scripts.pory"
	lockall
# 263 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 264 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 265 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DontLeaveTown_Text_0
# 266 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 267 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 272 "data/maps/SunshineTown/scripts.pory"
	lock
# 273 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 274 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 275 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 276 "data/maps/SunshineTown/scripts.pory"
	waitstate
# 277 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointEnteringPC::
# 281 "data/maps/SunshineTown/scripts.pory"
	lock
# 282 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 283 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 284 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 285 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_NoPointLeavingTown::
# 290 "data/maps/SunshineTown/scripts.pory"
	lock
# 291 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 292 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 293 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 294 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_WarpToBurningOrphanage2::
# 299 "data/maps/SunshineTown/scripts.pory"
	lock
# 300 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 301 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 302 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 303 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 304 "data/maps/SunshineTown/scripts.pory"
	waitstate
# 305 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OW_Happiny::
# 309 "data/maps/SunshineTown/scripts.pory"
	lockall
# 310 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_Eventscript_OW_Happiny_1
# 310 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_OW_Happiny_5
SunshineTown_Eventscript_OW_Happiny_2:
# 317 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 318 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 319 "data/maps/SunshineTown/scripts.pory"
	startoverworldencounter 6
# 320 "data/maps/SunshineTown/scripts.pory"
	removeobject 6
# 321 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_A
# 322 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_1:
# 311 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OW_Happiny_Text_0
# 312 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 313 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_5:
# 310 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_OW_Happiny_1
	goto SunshineTown_Eventscript_OW_Happiny_2


SunshineTown_Eventscript_OnFrame23::
# 329 "data/maps/SunshineTown/scripts.pory"
	lock
# 330 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 331 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineTown_Eventscript_OnFrame23_2
SunshineTown_Eventscript_OnFrame23_1:
# 342 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 343 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_OnFrame23_2:
# 333 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OnFrame23_Text_0
# 337 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 338 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 339 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 340 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS
	goto SunshineTown_Eventscript_OnFrame23_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 348 "data/maps/SunshineTown/scripts.pory"
	lock
# 349 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 350 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 354 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 355 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 356 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 360 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 363 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 351 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 357 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 368 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 369 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 370 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 376 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 377 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 386 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 378 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 379 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 380 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 381 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 382 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 391 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 392 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 399 "data/maps/SunshineTown/scripts.pory"
	checkplayergender
# 400 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5
# 412 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3
# 414 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 415 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 416 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4
# 419 "data/maps/SunshineTown/scripts.pory"
	closemessage
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4:
# 421 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 422 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 393 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 394 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 395 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5:
# 402 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 404 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 405 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 406 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 409 "data/maps/SunshineTown/scripts.pory"
	closemessage
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4


SunshineTown_Eventscript_ExpertF_PreQuest::
# 429 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_ExpertF_PreQuest_3
SunshineTown_Eventscript_ExpertF_PreQuest_1:
# 437 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 437 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 445 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_2
# 447 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 448 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_2:
# 430 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 431 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 433 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 434 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_3:
# 429 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_ExpertF_PreQuest_2
	goto SunshineTown_Eventscript_ExpertF_PreQuest_1

SunshineTown_Eventscript_ExpertF_PreQuest_7:
# 438 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 439 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_1
# 440 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 441 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 453 "data/maps/SunshineTown/scripts.pory"
	lock
# 454 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 455 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 462 "data/maps/SunshineTown/scripts.pory"
	fwdtime 11, 0
# 463 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 456 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 457 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 458 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_HiddenGrotto::
# 468 "data/maps/SunshineTown/scripts.pory"
	lock
# 469 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 470 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 471 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 474 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 472 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


unlockcharacters::
# 481 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 482 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 483 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 484 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 485 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 486 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 487 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 488 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
	end


makecharagrayout::
# 493 "data/maps/SunshineTown/scripts.pory"
	msgbox makecharagrayout_Text_0
# 494 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 495 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 496 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 497 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 498 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 499 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_2, 0
# 500 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_3, 0
	return


SunshineTown_Eventscript_MitsuruSeeingPoliceRunning::
# 504 "data/maps/SunshineTown/scripts.pory"
	lock
# 505 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0
# 506 "data/maps/SunshineTown/scripts.pory"
	delay 36
# 507 "data/maps/SunshineTown/scripts.pory"
	applymovement 24, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 508 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 509 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 510 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 511 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2
# 512 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 513 "data/maps/SunshineTown/scripts.pory"
	delay 50
# 514 "data/maps/SunshineTown/scripts.pory"
	removeobject 3
# 515 "data/maps/SunshineTown/scripts.pory"
	removeobject 24
# 516 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0
# 519 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 520 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 521 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 522 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 523 "data/maps/SunshineTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 524 "data/maps/SunshineTown/scripts.pory"
	waitse
# 525 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 526 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3
# 527 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 528 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4
# 529 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 530 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5
# 531 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 532 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1
# 533 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 534 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, faceleft
# 535 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 536 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 537 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2
# 538 "data/maps/SunshineTown/scripts.pory"
	playbgm MUS_P3_CALAMITY, TRUE
# 539 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3
# 541 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 542 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 543 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 544 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 545 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6
# 546 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 547 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4
# 552 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 553 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 20
# 554 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 555 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneEnds
# 556 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 557 "data/maps/SunshineTown/scripts.pory"
	addobject 22
# 558 "data/maps/SunshineTown/scripts.pory"
	addobject 23
# 559 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, invisible
# 560 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 561 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18::
# 566 "data/maps/SunshineTown/scripts.pory"
	lock
# 567 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 568 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0
# 569 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 570 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 571 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 572 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 573 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 574 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 575 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19::
# 579 "data/maps/SunshineTown/scripts.pory"
	lock
# 580 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 581 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0
# 582 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 583 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 584 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 585 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 586 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 587 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 588 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_KGStaffAtWoodsEntrance::
# 592 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 593 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 594 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 595 "data/maps/SunshineTown/scripts.pory"
	addobject 22, MAP_SUNSHINE_TOWN
# 596 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 597 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 598 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 599 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 600 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1
# 601 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, walkinplaceup
# 602 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 603 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2
# 604 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3
# 606 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 607 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 608 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 609 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4
# 611 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 612 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 613 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 614 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 615 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 616 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 617 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 618 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 619 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 620 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 621 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1
# 622 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 623 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 624 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5
# 626 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 627 "data/maps/SunshineTown/scripts.pory"
	removeobject 22
# 628 "data/maps/SunshineTown/scripts.pory"
	removeobject 23
# 629 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 630 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 21
# 631 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 40
# 632 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji::
# 637 "data/maps/SunshineTown/scripts.pory"
	lock
# 638 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0
# 639 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 640 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0
# 641 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 642 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1
# 643 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 644 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1
# 645 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 646 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2
# 648 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 649 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3
# 652 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 653 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, facedown
# 654 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 655 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 656 "data/maps/SunshineTown/scripts.pory"
	delay 8
# 657 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 658 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2
# 659 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 660 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 661 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4
# 663 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 664 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3
# 665 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 666 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 667 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 25
# 668 "data/maps/SunshineTown/scripts.pory"
	fwdtime 17, 20
# 669 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruOverheardAkiShinji::
# 674 "data/maps/SunshineTown/scripts.pory"
	lock
# 675 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 676 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 677 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 678 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 679 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1
# 680 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 681 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3
# 683 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 684 "data/maps/SunshineTown/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 685 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_BlockShakeCamera
# 686 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 687 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 688 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 689 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 690 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4
# 693 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 694 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5
# 695 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 696 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 697 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6
# 698 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7
# 699 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 700 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8
# 701 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 702 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 703 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 704 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 705 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9
# 707 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 708 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0
# 709 "data/maps/SunshineTown/scripts.pory"
	delay 40
# 710 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 26
# 711 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP
	return


# 65 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOnWarp19_Movement_0:
# 65 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 66 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOnWarp19_Movement_1:
# 66 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 505 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0:
# 505 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 505 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 505 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 505 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 505 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 505 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 507 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1:
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
	step_end

# 511 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2:
# 511 "data/maps/SunshineTown/scripts.pory"
	face_down
# 511 "data/maps/SunshineTown/scripts.pory"
	lock_facing_direction
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_up
# 511 "data/maps/SunshineTown/scripts.pory"
	unlock_facing_direction
# 511 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 511 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 526 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3:
# 526 "data/maps/SunshineTown/scripts.pory"
	set_visible
# 526 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 528 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4:
# 528 "data/maps/SunshineTown/scripts.pory"
	face_down
# 528 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 528 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 530 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5:
# 530 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 545 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6:
# 545 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 545 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 545 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 545 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 545 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 545 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 545 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 545 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 545 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 545 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 568 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0:
# 568 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 568 "data/maps/SunshineTown/scripts.pory"
	face_right
# 568 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 568 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 568 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 568 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 568 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 570 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1:
# 570 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 570 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 570 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 573 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2:
# 573 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 573 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southeast
	step_end

# 581 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0:
# 581 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 581 "data/maps/SunshineTown/scripts.pory"
	face_right
# 581 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 581 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 581 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 581 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 581 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 581 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 613 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0:
# 613 "data/maps/SunshineTown/scripts.pory"
	face_right
# 613 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 613 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 621 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1:
# 621 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 621 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northwest
	step_end

# 638 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0:
# 638 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 638 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 638 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 638 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 638 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 638 "data/maps/SunshineTown/scripts.pory"
	delay_16
	step_end

# 642 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1:
# 642 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 642 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 642 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 658 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2:
# 658 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 658 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 658 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 658 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 658 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 658 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 658 "data/maps/SunshineTown/scripts.pory"
	walk_left
	step_end

# 664 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3:
# 664 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 664 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 664 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 664 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 664 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 664 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 708 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0:
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 708 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 708 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

SunshineTown_Eventscript_Kurosawa_Text_0:
# 101 "data/maps/SunshineTown/scripts.pory"
	.string "Hm?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-we'll get going now!$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 105 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 110 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Do you need some help, kids?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh nothing! Sorry for bothering you,\n"
	.string "sir.\p"
	.string "(He looks so intimidating!)$"

SunshineTown_Eventscript_GoGetPackage0_Text_0:
# 126 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 156 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 159 "data/maps/SunshineTown/scripts.pory"
	.string "Sorry, I lost my wallet around here and\n"
	.string "Yoshida is helping me finding it.$"

SunshineTown_Eventscript_FatMan_Text_2:
# 165 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_3:
# 172 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 181 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 183 "data/maps/SunshineTown/scripts.pory"
	.string "I'm helping Kojima find his wallet. Sigh...\n"
	.string "He's always losing important stuff.$"

SunshineTown_Eventscript_Boy_Text_2:
# 189 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_3:
# 197 "data/maps/SunshineTown/scripts.pory"
	.string "My brother is a fire fighter and he's at\n"
	.string "the burning orphanage right now.\p"
	.string "I'm so worried I can't stay still, I hope\n"
	.string "there's not many casualties.\p"
	.string "If only I had a Pokémon that can deal\n"
	.string "with fire to help but I only have a\l"
	.string "Poltchageist.$"

SunshineTown_Eventscript_Boy_Text_4:
# 202 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lives on this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 212 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\n"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 220 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 236 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_DontLeaveTown_Text_0:
# 265 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should ask people in town about that\n"
	.string "explosion sound!$"

SunshineTown_Eventscript_NoPointEnteringPC_Text_0:
# 283 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}(Not the time to be dawdling around!)$"

SunshineTown_Eventscript_OW_Happiny_Text_0:
# 311 "data/maps/SunshineTown/scripts.pory"
	.string "The Happiny is looking through the\n"
	.string "door. It won't budge no matter what.$"

SunshineTown_Eventscript_OnFrame23_Text_0:
# 333 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR GREEN}Tips: Quest System is now unlocked.\p"
	.string "Check around for quest givers with a\n"
	.string "light blue exclamation mark.\p"
	.string "You can open quest menu in\n"
	.string "{START_BUTTON} Menu {RIGHT_ARROW} {L_BUTTON}.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 349 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 368 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 378 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 393 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 402 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 406 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3:
# 412 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young lass. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, ma'am. What do you need?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4:
# 416 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I'll be happy to help.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 431 "data/maps/SunshineTown/scripts.pory"
	.string "I lent my Lucario to the police to help\n"
	.string "them with the rescue.\p"
	.string "The Riolus are still too young and I\n"
	.string "have to keep them safe here.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_1:
# 439 "data/maps/SunshineTown/scripts.pory"
	.string "Did you hear a loud sound or was it\n"
	.string "because of my ears acting up again?$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_2:
# 445 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 454 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

unlockcharacters_Text_0:
# 481 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

makecharagrayout_Text_0:
# 493 "data/maps/SunshineTown/scripts.pory"
	.string "Marking prologue to completed & reset\n"
	.string "all temp vars$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0:
# 516 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The police? How did they arrive this\n"
	.string "fast? The explosion happened just a\l"
	.string "few minutes ago.)\p"
	.string "(Not to mention, if I remember\n"
	.string "correctly, the nearest station is in the\l"
	.string "opposite direction of Sunshine Town.)$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1:
# 532 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Excuse me. Did something happen?\n"
	.string "Everyone in town looks on edge.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2:
# 537 "data/maps/SunshineTown/scripts.pory"
	.string "There was an explosion at the\n"
	.string "orphanage east of town, didn't you\l"
	.string "hear?$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3:
# 539 "data/maps/SunshineTown/scripts.pory"
	.string "Lots of people were injured and the\n"
	.string "town people are trying to help.\p"
	.string "Now excuse me, I gotta bring these\n"
	.string "medicines to the injured.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4:
# 547 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}(The orphanage was exploded?)\p"
	.string "(Damn it! How am I so naive. Of course\n"
	.string "they would do that to erase the proofs\l"
	.string "and traces.)\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(It was all my fault... If only I acted\n"
	.string "sooner.)\p"
	.string "...........\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(I should go check and help the injured\n"
	.string "as well.)$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0:
# 599 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 1$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1:
# 600 "data/maps/SunshineTown/scripts.pory"
	.string "Have you seen those boys?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2:
# 603 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 2$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3:
# 604 "data/maps/SunshineTown/scripts.pory"
	.string "No, I've been standing here the whole\n"
	.string "time but I didn't see them.\p"
	.string "This is the only exit to safety. Where\n"
	.string "could they be?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4:
# 609 "data/maps/SunshineTown/scripts.pory"
	.string "Maybe they're still in the woods?\p"
	.string "Let's go search for them.$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5:
# 624 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(They're searching for some boys... Ones\n"
	.string "of the orphan kids, perhaps?)\p"
	.string "(I should tail them and see what they're\n"
	.string "up to.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0:
# 640 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(This man... He was helping the\n"
	.string "orphanage so he could've known\l"
	.string "something about those boys.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1:
# 644 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Excuse me. Have you seen these boys?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2:
# 646 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh them! I saw the policeman living in\n"
	.string "this town carried them to his house.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Really? When was it?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3:
# 649 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}I think it was around an hour after the\n"
	.string "explosion at the orphanage happened?\p"
	.string "After that I've only seen the black-red\n"
	.string "beanie boy going out of the house a few\l"
	.string "times.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}May I ask where this policeman's house\n"
	.string "is?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4:
# 661 "data/maps/SunshineTown/scripts.pory"
	.string "It's the house over there.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you so much for your help.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0:
# 678 "data/maps/SunshineTown/scripts.pory"
	.string "???????$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1:
# 679 "data/maps/SunshineTown/scripts.pory"
	.string "Aki! At least eat something before you\n"
	.string "go find her! You haven't eaten since\l"
	.string "yesterday!$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2:
# 680 "data/maps/SunshineTown/scripts.pory"
	.string "Aki?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3:
# 681 "data/maps/SunshineTown/scripts.pory"
	.string "How do you expect I can eat anything\n"
	.string "when Miki is still out there missing!?\p"
	.string "What do you know anyway? It's not like\n"
	.string "she's your sister.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4:
# 690 "data/maps/SunshineTown/scripts.pory"
	.string "Cool your ass and sit down.\p"
	.string "Even if you find her, do you think she'll\n"
	.string "be happy seeing you in this state?\p"
	.string "Looking like a rotten walking zombie?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5:
# 694 "data/maps/SunshineTown/scripts.pory"
	.string ".......... Fuck you, Shinji. Fine.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6:
# 697 "data/maps/SunshineTown/scripts.pory"
	.string "Shinji?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7:
# 698 "data/maps/SunshineTown/scripts.pory"
	.string "Eat first. Then we'll go find her\n"
	.string "together, okay?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8:
# 700 "data/maps/SunshineTown/scripts.pory"
	.string "........Okay.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9:
# 705 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}....... (His sister's missing after the\n"
	.string "explosion, I suppose.)\p"
	.string "(I should go to the orphanage and help\n"
	.string "the searching.)$"
