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
# 343 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 344 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 345 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_OnFrame23_2:
# 333 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OnFrame23_Text_0
# 337 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 338 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 339 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS
# 340 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 1
# 341 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
	goto SunshineTown_Eventscript_OnFrame23_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 350 "data/maps/SunshineTown/scripts.pory"
	lock
# 351 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 352 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 356 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 357 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 358 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 362 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 365 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 353 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 359 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 370 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 371 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 372 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 378 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 379 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 388 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 380 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 381 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 382 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 383 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 384 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 393 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 394 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 401 "data/maps/SunshineTown/scripts.pory"
	checkplayergender
# 402 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5
# 414 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3
# 416 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 417 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 418 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4
# 421 "data/maps/SunshineTown/scripts.pory"
	closemessage
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4:
# 423 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 424 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 395 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 396 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 397 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5:
# 404 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 406 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 407 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 408 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 411 "data/maps/SunshineTown/scripts.pory"
	closemessage
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4


SunshineTown_Eventscript_ExpertF_PreQuest::
# 431 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_ExpertF_PreQuest_3
SunshineTown_Eventscript_ExpertF_PreQuest_1:
# 439 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 439 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 447 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_2
# 449 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 450 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_2:
# 432 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 433 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 435 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 436 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_3:
# 431 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_ExpertF_PreQuest_2
	goto SunshineTown_Eventscript_ExpertF_PreQuest_1

SunshineTown_Eventscript_ExpertF_PreQuest_7:
# 440 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 441 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_1
# 442 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 443 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 455 "data/maps/SunshineTown/scripts.pory"
	lock
# 456 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 457 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 464 "data/maps/SunshineTown/scripts.pory"
	fwdtime 11, 0
# 465 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 458 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 459 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 460 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_HiddenGrotto::
# 470 "data/maps/SunshineTown/scripts.pory"
	lock
# 471 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 472 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 473 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 476 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 474 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


unlockcharacters::
# 483 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 484 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 485 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 486 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 487 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 488 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 489 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 490 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
	end


makecharagrayout::
# 495 "data/maps/SunshineTown/scripts.pory"
	msgbox makecharagrayout_Text_0
# 496 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 497 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 498 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 499 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 500 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 501 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_2, 0
# 502 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_3, 0
	return


SunshineTown_Eventscript_MitsuruSeeingPoliceRunning::
# 506 "data/maps/SunshineTown/scripts.pory"
	lock
# 507 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0
# 508 "data/maps/SunshineTown/scripts.pory"
	delay 36
# 509 "data/maps/SunshineTown/scripts.pory"
	applymovement 24, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 510 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 511 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 512 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 513 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2
# 514 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 515 "data/maps/SunshineTown/scripts.pory"
	delay 50
# 516 "data/maps/SunshineTown/scripts.pory"
	removeobject 3
# 517 "data/maps/SunshineTown/scripts.pory"
	removeobject 24
# 518 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0
# 521 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 522 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 523 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 524 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 525 "data/maps/SunshineTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 526 "data/maps/SunshineTown/scripts.pory"
	waitse
# 527 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 528 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3
# 529 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 530 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4
# 531 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 532 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5
# 533 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 534 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1
# 535 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 536 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, faceleft
# 537 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 538 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 539 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2
# 540 "data/maps/SunshineTown/scripts.pory"
	playbgm MUS_P3_CALAMITY, TRUE
# 541 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3
# 543 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 544 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 545 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 546 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 547 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6
# 548 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 549 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4
# 554 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 555 "data/maps/SunshineTown/scripts.pory"
	removeobject 1
# 556 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 20
# 557 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 558 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneEnds
# 559 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 560 "data/maps/SunshineTown/scripts.pory"
	addobject 22
# 561 "data/maps/SunshineTown/scripts.pory"
	addobject 23
# 562 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, invisible
# 563 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 564 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18::
# 569 "data/maps/SunshineTown/scripts.pory"
	lock
# 570 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 571 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0
# 572 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 573 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 574 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 575 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 576 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 577 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 578 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19::
# 582 "data/maps/SunshineTown/scripts.pory"
	lock
# 583 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 584 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0
# 585 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 586 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 587 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 588 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 589 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 590 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 591 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_KGStaffAtWoodsEntrance::
# 595 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 596 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 597 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 598 "data/maps/SunshineTown/scripts.pory"
	addobject 22, MAP_SUNSHINE_TOWN
# 599 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 600 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 601 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 602 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 603 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1
# 604 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, walkinplaceup
# 605 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 606 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2
# 607 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3
# 609 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 610 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 611 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 612 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4
# 614 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 615 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 616 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 617 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 618 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 619 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 620 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 621 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 622 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 623 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 624 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1
# 625 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 626 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 627 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5
# 629 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 630 "data/maps/SunshineTown/scripts.pory"
	removeobject 22
# 631 "data/maps/SunshineTown/scripts.pory"
	removeobject 23
# 632 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 633 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 21
# 634 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 40
# 635 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji::
# 640 "data/maps/SunshineTown/scripts.pory"
	lock
# 641 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0
# 642 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 643 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0
# 644 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 645 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1
# 646 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 647 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1
# 648 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 649 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2
# 651 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 652 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3
# 655 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 656 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, facedown
# 657 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 658 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 659 "data/maps/SunshineTown/scripts.pory"
	delay 8
# 660 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 661 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2
# 662 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 663 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 664 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4
# 666 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 667 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3
# 668 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 669 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 670 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 25
# 671 "data/maps/SunshineTown/scripts.pory"
	fwdtime 17, 20
# 672 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruOverheardAkiShinji::
# 677 "data/maps/SunshineTown/scripts.pory"
	lock
# 678 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 679 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 680 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 681 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 682 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1
# 683 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 684 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3
# 686 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 687 "data/maps/SunshineTown/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 688 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_BlockShakeCamera
# 689 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 690 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 691 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 692 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 693 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4
# 696 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 697 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5
# 698 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 699 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 700 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6
# 701 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7
# 702 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 703 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8
# 704 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 705 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 706 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 707 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 708 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9
# 710 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 711 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0
# 712 "data/maps/SunshineTown/scripts.pory"
	delay 40
# 713 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 26
# 714 "data/maps/SunshineTown/scripts.pory"
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

# 507 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0:
# 507 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 507 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 507 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 507 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 509 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1:
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
	step_end

# 513 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2:
# 513 "data/maps/SunshineTown/scripts.pory"
	face_down
# 513 "data/maps/SunshineTown/scripts.pory"
	lock_facing_direction
# 513 "data/maps/SunshineTown/scripts.pory"
	walk_fast_up
# 513 "data/maps/SunshineTown/scripts.pory"
	unlock_facing_direction
# 513 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 513 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 528 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3:
# 528 "data/maps/SunshineTown/scripts.pory"
	set_visible
# 528 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 530 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4:
# 530 "data/maps/SunshineTown/scripts.pory"
	face_down
# 530 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 530 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 532 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5:
# 532 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 547 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6:
# 547 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 547 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 547 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 547 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 547 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 547 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 547 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 547 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 547 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 547 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 571 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0:
# 571 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 571 "data/maps/SunshineTown/scripts.pory"
	face_right
# 571 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 571 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 571 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 571 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 571 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 573 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1:
# 573 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 573 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 573 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 576 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2:
# 576 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 576 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southeast
	step_end

# 584 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0:
# 584 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 584 "data/maps/SunshineTown/scripts.pory"
	face_right
# 584 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 584 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 584 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 584 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 584 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 584 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 616 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0:
# 616 "data/maps/SunshineTown/scripts.pory"
	face_right
# 616 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 616 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 624 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1:
# 624 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 624 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northwest
	step_end

# 641 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0:
# 641 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 641 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 641 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 641 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 641 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 641 "data/maps/SunshineTown/scripts.pory"
	delay_16
	step_end

# 645 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1:
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 661 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2:
# 661 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 661 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 661 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 661 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 661 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 661 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 661 "data/maps/SunshineTown/scripts.pory"
	walk_left
	step_end

# 667 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3:
# 667 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 667 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 667 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 667 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 667 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 667 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 711 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0:
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 711 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 711 "data/maps/SunshineTown/scripts.pory"
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
# 351 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 370 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 380 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 395 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 404 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 408 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3:
# 414 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young lass. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, ma'am. What do you need?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4:
# 418 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I'll be happy to help.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 433 "data/maps/SunshineTown/scripts.pory"
	.string "I lent my Lucario to the police to help\n"
	.string "them with the rescue.\p"
	.string "The Riolus are still too young and I\n"
	.string "have to keep them safe here.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_1:
# 441 "data/maps/SunshineTown/scripts.pory"
	.string "Did you hear a loud sound or was it\n"
	.string "because of my ears acting up again?$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_2:
# 447 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 456 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

unlockcharacters_Text_0:
# 483 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

makecharagrayout_Text_0:
# 495 "data/maps/SunshineTown/scripts.pory"
	.string "Marking prologue to completed & reset\n"
	.string "all temp vars$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0:
# 518 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The police? How did they arrive this\n"
	.string "fast? The explosion happened just a\l"
	.string "few minutes ago.)\p"
	.string "(Not to mention, if I remember\n"
	.string "correctly, the nearest station is in the\l"
	.string "opposite direction of Sunshine Town.)$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1:
# 534 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Excuse me. Did something happen?\n"
	.string "Everyone in town looks on edge.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2:
# 539 "data/maps/SunshineTown/scripts.pory"
	.string "There was an explosion at the\n"
	.string "orphanage east of town, didn't you\l"
	.string "hear?$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3:
# 541 "data/maps/SunshineTown/scripts.pory"
	.string "Lots of people were injured and the\n"
	.string "town people are trying to help.\p"
	.string "Now excuse me, I gotta bring these\n"
	.string "medicines to the injured.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4:
# 549 "data/maps/SunshineTown/scripts.pory"
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
# 602 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 1$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1:
# 603 "data/maps/SunshineTown/scripts.pory"
	.string "Have you seen those boys?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2:
# 606 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 2$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3:
# 607 "data/maps/SunshineTown/scripts.pory"
	.string "No, I've been standing here the whole\n"
	.string "time but I didn't see them.\p"
	.string "This is the only exit to safety. Where\n"
	.string "could they be?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4:
# 612 "data/maps/SunshineTown/scripts.pory"
	.string "Maybe they're still in the woods?\p"
	.string "Let's go search for them.$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5:
# 627 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(They're searching for some boys... Ones\n"
	.string "of the orphan kids, perhaps?)\p"
	.string "(I should tail them and see what they're\n"
	.string "up to.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0:
# 643 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(This man... He was helping the\n"
	.string "orphanage so he could've known\l"
	.string "something about those boys.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1:
# 647 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Excuse me. Have you seen these boys?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2:
# 649 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh them! I saw the policeman living in\n"
	.string "this town carried them to his house.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Really? When was it?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3:
# 652 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}I think it was around an hour after the\n"
	.string "explosion at the orphanage happened?\p"
	.string "After that I've only seen the black-red\n"
	.string "beanie boy going out of the house a few\l"
	.string "times.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}May I ask where this policeman's house\n"
	.string "is?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4:
# 664 "data/maps/SunshineTown/scripts.pory"
	.string "It's the house over there.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you so much for your help.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0:
# 681 "data/maps/SunshineTown/scripts.pory"
	.string "???????$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1:
# 682 "data/maps/SunshineTown/scripts.pory"
	.string "Aki! At least eat something before you\n"
	.string "go find her! You haven't eaten since\l"
	.string "yesterday!$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2:
# 683 "data/maps/SunshineTown/scripts.pory"
	.string "Aki?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3:
# 684 "data/maps/SunshineTown/scripts.pory"
	.string "How do you expect I can eat anything\n"
	.string "when Miki is still out there missing!?\p"
	.string "What do you know anyway? It's not like\n"
	.string "she's your sister.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4:
# 693 "data/maps/SunshineTown/scripts.pory"
	.string "Cool your ass and sit down.\p"
	.string "Even if you find her, do you think she'll\n"
	.string "be happy seeing you in this state?\p"
	.string "Looking like a rotten walking zombie?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5:
# 697 "data/maps/SunshineTown/scripts.pory"
	.string ".......... Fuck you, Shinji. Fine.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6:
# 700 "data/maps/SunshineTown/scripts.pory"
	.string "Shinji?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7:
# 701 "data/maps/SunshineTown/scripts.pory"
	.string "Eat first. Then we'll go find her\n"
	.string "together, okay?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8:
# 703 "data/maps/SunshineTown/scripts.pory"
	.string "........Okay.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9:
# 708 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}....... (His sister's missing after the\n"
	.string "explosion, I suppose.)\p"
	.string "(I should go to the orphanage and help\n"
	.string "the searching.)$"
