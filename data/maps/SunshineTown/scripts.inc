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
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 37 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_35
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

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_34:
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

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_35:
# 37 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
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
	msgbox SunshineTown_Eventscript_OnFrame23_Text_0
# 334 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 335 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 336 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 337 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 338 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 343 "data/maps/SunshineTown/scripts.pory"
	lock
# 344 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 345 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 349 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 350 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 351 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 355 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 358 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 346 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
	goto SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 352 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 363 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 364 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 365 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 371 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 372 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 381 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 373 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 374 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 375 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 376 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 377 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 386 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 387 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 394 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 396 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 397 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 398 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 401 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 402 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 403 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 388 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 389 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 390 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_ExpertF_PreQuest::
# 410 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_ExpertF_PreQuest_3
SunshineTown_Eventscript_ExpertF_PreQuest_1:
# 418 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 418 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 426 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_2
# 428 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 429 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_2:
# 411 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 412 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 414 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 415 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_3:
# 410 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_ExpertF_PreQuest_2
	goto SunshineTown_Eventscript_ExpertF_PreQuest_1

SunshineTown_Eventscript_ExpertF_PreQuest_7:
# 419 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 420 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_1
# 421 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 422 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 434 "data/maps/SunshineTown/scripts.pory"
	lock
# 435 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 436 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 443 "data/maps/SunshineTown/scripts.pory"
	fwdtime 11, 0
# 444 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 437 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 438 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 439 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_HiddenGrotto::
# 449 "data/maps/SunshineTown/scripts.pory"
	lock
# 450 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 451 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 452 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 455 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 453 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


unlockcharacters::
# 462 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 463 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 464 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 465 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 466 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 467 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 468 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 469 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
	end


makecharagrayout::
# 474 "data/maps/SunshineTown/scripts.pory"
	msgbox makecharagrayout_Text_0
# 475 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 476 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 477 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 478 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 479 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 480 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_2, 0
# 481 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_3, 0
	return


SunshineTown_Eventscript_MitsuruSeeingPoliceRunning::
# 485 "data/maps/SunshineTown/scripts.pory"
	lock
# 486 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0
# 487 "data/maps/SunshineTown/scripts.pory"
	delay 36
# 488 "data/maps/SunshineTown/scripts.pory"
	applymovement 24, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 489 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 490 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 491 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 492 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2
# 493 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 494 "data/maps/SunshineTown/scripts.pory"
	delay 50
# 495 "data/maps/SunshineTown/scripts.pory"
	removeobject 3
# 496 "data/maps/SunshineTown/scripts.pory"
	removeobject 24
# 497 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0
# 500 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 501 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 502 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 503 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 504 "data/maps/SunshineTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 505 "data/maps/SunshineTown/scripts.pory"
	waitse
# 506 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 507 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3
# 508 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 509 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4
# 510 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 511 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5
# 512 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 513 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1
# 514 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 515 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, faceleft
# 516 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 517 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 518 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2
# 519 "data/maps/SunshineTown/scripts.pory"
	playbgm MUS_P3_CALAMITY, TRUE
# 520 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3
# 522 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 523 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 524 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 525 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 526 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6
# 527 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 528 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4
# 533 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 534 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 20
# 535 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 536 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneEnds
# 537 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 538 "data/maps/SunshineTown/scripts.pory"
	addobject 22
# 539 "data/maps/SunshineTown/scripts.pory"
	addobject 23
# 540 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, invisible
# 541 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 542 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18::
# 547 "data/maps/SunshineTown/scripts.pory"
	lock
# 548 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 549 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0
# 550 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 551 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 552 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 553 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 554 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 555 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 556 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19::
# 560 "data/maps/SunshineTown/scripts.pory"
	lock
# 561 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 562 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0
# 563 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 564 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 565 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 566 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 567 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 568 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 569 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_KGStaffAtWoodsEntrance::
# 573 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 574 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 575 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 576 "data/maps/SunshineTown/scripts.pory"
	addobject 22, MAP_SUNSHINE_TOWN
# 577 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 578 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 579 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 580 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 581 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1
# 582 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, walkinplaceup
# 583 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 584 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2
# 585 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3
# 587 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 588 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 589 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 590 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4
# 592 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 593 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 594 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 595 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 596 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 597 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 598 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 599 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 600 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 601 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 602 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1
# 603 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 604 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 605 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5
# 607 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 608 "data/maps/SunshineTown/scripts.pory"
	removeobject 22
# 609 "data/maps/SunshineTown/scripts.pory"
	removeobject 23
# 610 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 611 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 21
# 612 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 40
# 613 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji::
# 618 "data/maps/SunshineTown/scripts.pory"
	lock
# 619 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0
# 620 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 621 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0
# 622 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 623 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1
# 624 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 625 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1
# 626 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 627 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2
# 629 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 630 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3
# 633 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 634 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, facedown
# 635 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 636 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 637 "data/maps/SunshineTown/scripts.pory"
	delay 8
# 638 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 639 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2
# 640 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 641 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 642 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4
# 644 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 645 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3
# 646 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 647 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 648 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 24
# 649 "data/maps/SunshineTown/scripts.pory"
	fwdtime 17, 20
# 650 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruOverheardAkiShinji::
# 655 "data/maps/SunshineTown/scripts.pory"
	lock
# 656 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 657 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 658 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 659 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1
# 660 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 661 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3
# 663 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 664 "data/maps/SunshineTown/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 665 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_BlockShakeCamera
# 666 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 667 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 668 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 669 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 670 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4
# 673 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 674 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5
# 675 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 676 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 677 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6
# 678 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7
# 679 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 680 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8
# 681 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 682 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 683 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 684 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 685 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9
# 687 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 688 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0
# 689 "data/maps/SunshineTown/scripts.pory"
	delay 40
# 690 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 25
# 691 "data/maps/SunshineTown/scripts.pory"
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

# 486 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0:
# 486 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 486 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 486 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 486 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 486 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 486 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 488 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1:
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
	step_end

# 492 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2:
# 492 "data/maps/SunshineTown/scripts.pory"
	face_down
# 492 "data/maps/SunshineTown/scripts.pory"
	lock_facing_direction
# 492 "data/maps/SunshineTown/scripts.pory"
	walk_fast_up
# 492 "data/maps/SunshineTown/scripts.pory"
	unlock_facing_direction
# 492 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 492 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 507 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3:
# 507 "data/maps/SunshineTown/scripts.pory"
	set_visible
# 507 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 507 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 509 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4:
# 509 "data/maps/SunshineTown/scripts.pory"
	face_down
# 509 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 509 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 511 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5:
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 526 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6:
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 526 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 526 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 549 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0:
# 549 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 549 "data/maps/SunshineTown/scripts.pory"
	face_right
# 549 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 549 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 549 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 549 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 549 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 551 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1:
# 551 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 551 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 551 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 554 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2:
# 554 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 554 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southeast
	step_end

# 562 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0:
# 562 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 562 "data/maps/SunshineTown/scripts.pory"
	face_right
# 562 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 562 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 562 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 562 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 562 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 562 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 594 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0:
# 594 "data/maps/SunshineTown/scripts.pory"
	face_right
# 594 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 594 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 602 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1:
# 602 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 602 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northwest
	step_end

# 619 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0:
# 619 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 619 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 619 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 619 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 619 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 619 "data/maps/SunshineTown/scripts.pory"
	delay_16
	step_end

# 623 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1:
# 623 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 623 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 623 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 639 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2:
# 639 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 639 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 639 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 639 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 639 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 639 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 639 "data/maps/SunshineTown/scripts.pory"
	walk_left
	step_end

# 645 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3:
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 688 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0:
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 688 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 688 "data/maps/SunshineTown/scripts.pory"
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
# 330 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR GREEN}Tips: Quest System is now unlocked.\p"
	.string "Check around for quest givers with a\n"
	.string "light blue exclamation mark.\p"
	.string "You can open quest menu in\n"
	.string "{START_BUTTON} Menu {RIGHT_ARROW} {L_BUTTON}.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 344 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 363 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 373 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 388 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 394 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 398 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 412 "data/maps/SunshineTown/scripts.pory"
	.string "I lent my Lucario to the police to help\n"
	.string "them with the rescue.\p"
	.string "The Riolus are still too young and I\n"
	.string "have to keep them safe here.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_1:
# 420 "data/maps/SunshineTown/scripts.pory"
	.string "Did you hear a loud sound or was it\n"
	.string "because of my ears acting up again?$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_2:
# 426 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 435 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

unlockcharacters_Text_0:
# 462 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

makecharagrayout_Text_0:
# 474 "data/maps/SunshineTown/scripts.pory"
	.string "Marking prologue to completed & reset\n"
	.string "all temp vars$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0:
# 497 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The police? How did they arrive this\n"
	.string "fast? The explosion happened just a\l"
	.string "few minutes ago.)\p"
	.string "(Not to mention, if I remember\n"
	.string "correctly, the nearest station is in the\l"
	.string "opposite direction of Sunshine Town.)$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1:
# 513 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Excuse me. Did something happen?\n"
	.string "Everyone in town looks on edge.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2:
# 518 "data/maps/SunshineTown/scripts.pory"
	.string "There was an explosion at the\n"
	.string "orphanage east of town, didn't you\l"
	.string "hear?$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3:
# 520 "data/maps/SunshineTown/scripts.pory"
	.string "Lots of people were injured and the\n"
	.string "town people are trying to help.\p"
	.string "Now excuse me, I gotta bring these\n"
	.string "medicines to the injured.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4:
# 528 "data/maps/SunshineTown/scripts.pory"
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
# 580 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 1$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1:
# 581 "data/maps/SunshineTown/scripts.pory"
	.string "Have you seen those boys?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2:
# 584 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 2$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3:
# 585 "data/maps/SunshineTown/scripts.pory"
	.string "No, I've been standing here the whole\n"
	.string "time but I didn't see them.\p"
	.string "This is the only exit to safety. Where\n"
	.string "could they be?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4:
# 590 "data/maps/SunshineTown/scripts.pory"
	.string "Maybe they're still in the woods?\p"
	.string "Let's go search for them.$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5:
# 605 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(They're searching for some boys... Ones\n"
	.string "of the orphan kids, perhaps?)\p"
	.string "(I should tail them and see what they're\n"
	.string "up to.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0:
# 621 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(This man... He was helping the\n"
	.string "orphanage so he could've known\l"
	.string "something about those boys.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1:
# 625 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Excuse me. Have you seen these boys?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2:
# 627 "data/maps/SunshineTown/scripts.pory"
	.string "Oh them! I saw the policeman living in\n"
	.string "this town carried them to his house.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Really? When was it?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3:
# 630 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}I think it was around an hour after the\n"
	.string "explosion at the orphanage happened?\p"
	.string "After that I've only seen the black-red\n"
	.string "beanie boy going out of the house a few\l"
	.string "times.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}May I ask where this policeman's house\n"
	.string "is?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4:
# 642 "data/maps/SunshineTown/scripts.pory"
	.string "It's the house over there.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you so much for your help.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0:
# 658 "data/maps/SunshineTown/scripts.pory"
	.string "???????$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1:
# 659 "data/maps/SunshineTown/scripts.pory"
	.string "Aki! At least eat something before you\n"
	.string "go find her! You haven't eaten since\l"
	.string "yesterday!$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2:
# 660 "data/maps/SunshineTown/scripts.pory"
	.string "Aki?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3:
# 661 "data/maps/SunshineTown/scripts.pory"
	.string "How do you expect I can eat anything\n"
	.string "when Miki is still out there missing!?\p"
	.string "What do you know anyway? It's not like\n"
	.string "she's your sister.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4:
# 670 "data/maps/SunshineTown/scripts.pory"
	.string "Cool your ass and sit down.\p"
	.string "Even if you find her, do you think she'll\n"
	.string "be happy seeing you in this state?\p"
	.string "Looking like a rotten walking zombie?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5:
# 674 "data/maps/SunshineTown/scripts.pory"
	.string ".......... Fuck you, Shinji. Fine.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6:
# 677 "data/maps/SunshineTown/scripts.pory"
	.string "Shinji?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7:
# 678 "data/maps/SunshineTown/scripts.pory"
	.string "Eat first. Then we'll go find her\n"
	.string "together, okay?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8:
# 680 "data/maps/SunshineTown/scripts.pory"
	.string "........Okay.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9:
# 685 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}....... (His sister's missing after the\n"
	.string "explosion, I suppose.)\p"
	.string "(I should go to the orphanage and help\n"
	.string "the searching.)$"
