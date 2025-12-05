SunshineTown_MapScripts::
# 2 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 49 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 53 "data/maps/SunshineTown/scripts.pory"
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
# 21 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 21 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 21 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 24 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 30 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_ne SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 34 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 38 "data/maps/SunshineTown/scripts.pory"
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
	playbgm MUS_P3_CALAMITY, TRUE
# 15 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 16 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 2, 14, 11
# 17 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 18 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 3, 14
# 19 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 22 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 25 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 26 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 27 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 2, 3, 6
# 28 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 3, 7
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 24 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 31 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 32 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 35 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_4
# 36 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 34 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 23
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_36:
# 39 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 3, 13, 6
# 40 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 41 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 24, 14, 7
# 42 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_LEFT
# 43 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 44 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 45 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 8, 4
# 46 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 38 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_36
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 50 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 19, SunshineTown_Eventscript_MitsuruOnWarp19
# 51 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 24, SunshineTown_Eventscript_MitsuruOnWarp24
	.2byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 54 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 16, SunshineTown_Eventscript_OnFrame16
# 55 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_Eventscript_OnFrame23
# 57 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 18, SunshineTown_Eventscript_MitsuruOnFrame18
# 58 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 19, SunshineTown_Eventscript_MitsuruOnFrame19
# 59 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 23, SunshineTown_Eventscript_MitsuruOnFrame23
# 60 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 24, SunshineTown_Eventscript_MitsuruOnFrame24
	.2byte 0


SunshineTown_Eventscript_MitsuruOnWarp19::
# 66 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruOnWarp19_Movement_0
# 67 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOnWarp19_Movement_1
	return


SunshineTown_Eventscript_MitsuruOnFrame23::
# 71 "data/maps/SunshineTown/scripts.pory"
	lock
# 72 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 24
# 73 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 3, 7
# 74 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_MitsuruOnWarp24::
# 78 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


SunshineTown_Eventscript_MitsuruOnFrame24::
# 82 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji
	return


SunshineTown_Eventscript_MitsuruOnFrame18::
# 86 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneStarts
# 87 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 88 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 19
# 89 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 4, 6
# 90 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_MitsuruOnFrame19::
# 94 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_MitsuruSeeingPoliceRunning
	return


SunshineTown_Eventscript_Kurosawa::
# 98 "data/maps/SunshineTown/scripts.pory"
	lock
# 99 "data/maps/SunshineTown/scripts.pory"
	setspeaker SP_NAME_KUROSAWA
# 100 "data/maps/SunshineTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineTown_Eventscript_Kurosawa_2
# 106 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_1
# 107 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 108 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 109 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, KurosawaNoticed
# 110 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_2
# 114 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
SunshineTown_Eventscript_Kurosawa_1:
# 116 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Kurosawa_2:
# 101 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 102 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_0
	goto SunshineTown_Eventscript_Kurosawa_1


# 120 "data/maps/SunshineTown/scripts.pory"
KurosawaNoticed:
# 121 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 122 "data/maps/SunshineTown/scripts.pory"
	face_player
	step_end

SunshineTown_Eventscript_GoGetPackage0::
# 126 "data/maps/SunshineTown/scripts.pory"
	lockall
# 127 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 128 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 129 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 130 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 135 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroPreventFromLeaving0:
# 136 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 137 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 139 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroJoinsback0:
# 140 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 141 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

SunshineTown_Eventscript_GoGetPackage1::
# 145 "data/maps/SunshineTown/scripts.pory"
	lockall
# 146 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 147 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 148 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 149 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 151 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_FatMan::
# 156 "data/maps/SunshineTown/scripts.pory"
	lock
# 157 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 158 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 159 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_Eventscript_FatMan_3
SunshineTown_Eventscript_FatMan_1:
# 165 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_FatMan_7
# 165 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_FatMan_7
# 173 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_3
# 175 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_FatMan_2:
# 160 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_1
# 161 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 162 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_FatMan_3:
# 159 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_FatMan_2
	goto SunshineTown_Eventscript_FatMan_1

SunshineTown_Eventscript_FatMan_7:
# 166 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_2
# 168 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 169 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Boy::
# 180 "data/maps/SunshineTown/scripts.pory"
	lock
# 181 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 182 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 183 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_ge SunshineTown_Eventscript_Boy_3
SunshineTown_Eventscript_Boy_1:
# 189 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_Boy_7
# 189 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_Boy_7
# 197 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_Boy_14
SunshineTown_Eventscript_Boy_13:
# 203 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_4
SunshineTown_Eventscript_Boy_11:
# 206 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 207 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_2:
# 184 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
# 185 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 186 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_3:
# 183 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_Boy_2
	goto SunshineTown_Eventscript_Boy_1

SunshineTown_Eventscript_Boy_7:
# 190 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
# 193 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 194 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_12:
# 198 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_3
	goto SunshineTown_Eventscript_Boy_11

SunshineTown_Eventscript_Boy_14:
# 197 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_Boy_12
	goto SunshineTown_Eventscript_Boy_13


SunshineTown_Eventscript_DirerctionSign::
# 212 "data/maps/SunshineTown/scripts.pory"
	lock
# 213 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DirerctionSign_Text_0
# 215 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_TownSign::
# 220 "data/maps/SunshineTown/scripts.pory"
	lock
# 221 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_TownSign_Text_0
# 222 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_OnFrame16::
# 227 "data/maps/SunshineTown/scripts.pory"
	lockall
# 228 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExitingPC
# 229 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_ExitingPC::
# 233 "data/maps/SunshineTown/scripts.pory"
	lockall
# 234 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_AkihikoExitingPC
# 235 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, SunshineTown_Eventscript_ShinjiroExitingPC
# 236 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 237 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExitingPC_Text_0
# 239 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 240 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, walkup
# 241 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 242 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 243 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
# 244 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 17
# 245 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 35
# 246 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 250 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_AkihikoExitingPC:
# 251 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 252 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 253 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

# 256 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroExitingPC:
# 257 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 257 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 257 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 258 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 259 "data/maps/SunshineTown/scripts.pory"
	face_up
	step_end

SunshineTown_Eventscript_DontLeaveTown::
# 263 "data/maps/SunshineTown/scripts.pory"
	lockall
# 264 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 265 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 266 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DontLeaveTown_Text_0
# 267 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 268 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 273 "data/maps/SunshineTown/scripts.pory"
	lock
# 274 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 275 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 276 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 277 "data/maps/SunshineTown/scripts.pory"
	waitstate
# 278 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointEnteringPC::
# 282 "data/maps/SunshineTown/scripts.pory"
	lock
# 283 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 284 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 285 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 286 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_NoPointLeavingTown::
# 291 "data/maps/SunshineTown/scripts.pory"
	lock
# 292 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 293 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 294 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 295 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_WarpToBurningOrphanage2::
# 300 "data/maps/SunshineTown/scripts.pory"
	lock
# 301 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 302 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 303 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 304 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 305 "data/maps/SunshineTown/scripts.pory"
	waitstate
# 306 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OW_Happiny::
# 310 "data/maps/SunshineTown/scripts.pory"
	lockall
# 311 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_Eventscript_OW_Happiny_1
# 311 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_OW_Happiny_5
SunshineTown_Eventscript_OW_Happiny_2:
# 318 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 319 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 320 "data/maps/SunshineTown/scripts.pory"
	startoverworldencounter 6
# 321 "data/maps/SunshineTown/scripts.pory"
	removeobject 6
# 322 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_A
# 323 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_1:
# 312 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OW_Happiny_Text_0
# 313 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 314 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_5:
# 311 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_OW_Happiny_1
	goto SunshineTown_Eventscript_OW_Happiny_2


SunshineTown_Eventscript_OnFrame23::
# 330 "data/maps/SunshineTown/scripts.pory"
	lock
# 331 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 332 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineTown_Eventscript_OnFrame23_2
SunshineTown_Eventscript_OnFrame23_1:
# 344 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 345 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 346 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_OnFrame23_2:
# 334 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OnFrame23_Text_0
# 338 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 339 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 340 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS
# 341 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 1
# 342 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
	goto SunshineTown_Eventscript_OnFrame23_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 351 "data/maps/SunshineTown/scripts.pory"
	lock
# 352 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 353 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 357 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 358 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 359 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 363 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 366 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 354 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 360 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 371 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 372 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 373 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 379 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 380 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 389 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 381 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 382 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 383 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 384 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 385 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 394 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 395 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 402 "data/maps/SunshineTown/scripts.pory"
	checkplayergender
# 403 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5
# 415 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3
# 417 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 418 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 419 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4
# 422 "data/maps/SunshineTown/scripts.pory"
	closemessage
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4:
# 424 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 425 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 396 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 397 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 398 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5:
# 405 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 407 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 408 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 409 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 412 "data/maps/SunshineTown/scripts.pory"
	closemessage
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4


SunshineTown_Eventscript_ExpertF_PreQuest::
# 432 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_ExpertF_PreQuest_3
SunshineTown_Eventscript_ExpertF_PreQuest_1:
# 440 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 440 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 448 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_2
# 450 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 451 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_2:
# 433 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 434 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 436 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 437 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_3:
# 432 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_ExpertF_PreQuest_2
	goto SunshineTown_Eventscript_ExpertF_PreQuest_1

SunshineTown_Eventscript_ExpertF_PreQuest_7:
# 441 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 442 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_1
# 443 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 444 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 456 "data/maps/SunshineTown/scripts.pory"
	lock
# 457 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 458 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 465 "data/maps/SunshineTown/scripts.pory"
	fwdtime 11, 0
# 466 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 459 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 460 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 461 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_HiddenGrotto::
# 471 "data/maps/SunshineTown/scripts.pory"
	lock
# 472 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 473 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 474 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 477 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 475 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


unlockcharacters::
# 484 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 485 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 486 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 487 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 488 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 489 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 490 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 491 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
	end


makecharagrayout::
# 496 "data/maps/SunshineTown/scripts.pory"
	msgbox makecharagrayout_Text_0
# 497 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 498 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 499 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 500 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 501 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 502 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_2, 0
# 503 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_3, 0
	return


SunshineTown_Eventscript_MitsuruSeeingPoliceRunning::
# 507 "data/maps/SunshineTown/scripts.pory"
	lock
# 508 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0
# 509 "data/maps/SunshineTown/scripts.pory"
	delay 36
# 510 "data/maps/SunshineTown/scripts.pory"
	applymovement 24, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 511 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 512 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 513 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 514 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2
# 515 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 516 "data/maps/SunshineTown/scripts.pory"
	delay 50
# 517 "data/maps/SunshineTown/scripts.pory"
	removeobject 3
# 518 "data/maps/SunshineTown/scripts.pory"
	removeobject 24
# 519 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0
# 522 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 523 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 524 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 525 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 526 "data/maps/SunshineTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 527 "data/maps/SunshineTown/scripts.pory"
	waitse
# 528 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 529 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3
# 530 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 531 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4
# 532 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 533 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5
# 534 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 535 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1
# 536 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 537 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, faceleft
# 538 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 539 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 540 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2
# 541 "data/maps/SunshineTown/scripts.pory"
	playbgm MUS_P3_CALAMITY, TRUE
# 542 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3
# 544 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 545 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 546 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 547 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 548 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6
# 549 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 550 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4
# 555 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 556 "data/maps/SunshineTown/scripts.pory"
	removeobject 1
# 557 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 20
# 558 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 559 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneEnds
# 560 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 561 "data/maps/SunshineTown/scripts.pory"
	addobject 22
# 562 "data/maps/SunshineTown/scripts.pory"
	addobject 23
# 563 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, invisible
# 564 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 565 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18::
# 570 "data/maps/SunshineTown/scripts.pory"
	lock
# 571 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 572 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0
# 573 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 574 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 575 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 576 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 577 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 578 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 579 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19::
# 583 "data/maps/SunshineTown/scripts.pory"
	lock
# 584 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 585 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0
# 586 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 587 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 588 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 589 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 590 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 591 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 592 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_KGStaffAtWoodsEntrance::
# 596 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 597 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 598 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 599 "data/maps/SunshineTown/scripts.pory"
	addobject 22, MAP_SUNSHINE_TOWN
# 600 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 601 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 602 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 603 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 604 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1
# 605 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, walkinplaceup
# 606 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 607 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2
# 608 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3
# 610 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 611 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 612 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 613 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4
# 615 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 616 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 617 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 618 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 619 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 620 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 621 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 622 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 623 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 624 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 625 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1
# 626 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 627 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 628 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5
# 630 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 631 "data/maps/SunshineTown/scripts.pory"
	removeobject 22
# 632 "data/maps/SunshineTown/scripts.pory"
	removeobject 23
# 633 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 634 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 21
# 635 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 40
# 636 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji::
# 641 "data/maps/SunshineTown/scripts.pory"
	lock
# 642 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0
# 643 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 644 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0
# 645 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 646 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1
# 647 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 648 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1
# 649 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 650 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2
# 652 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 653 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3
# 656 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 657 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, facedown
# 658 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 659 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 660 "data/maps/SunshineTown/scripts.pory"
	delay 8
# 661 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 662 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2
# 663 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 664 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 665 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4
# 667 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 668 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3
# 669 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 670 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 671 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 25
# 672 "data/maps/SunshineTown/scripts.pory"
	fwdtime 17, 20
# 673 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruOverheardAkiShinji::
# 678 "data/maps/SunshineTown/scripts.pory"
	lock
# 679 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 680 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 681 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 682 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 683 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1
# 684 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 685 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3
# 687 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 688 "data/maps/SunshineTown/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 689 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_BlockShakeCamera
# 690 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 691 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 692 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 693 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 694 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4
# 697 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 698 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5
# 699 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 700 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 701 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6
# 702 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7
# 703 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 704 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8
# 705 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 706 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 707 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 708 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 709 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9
# 711 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 712 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0
# 713 "data/maps/SunshineTown/scripts.pory"
	delay 40
# 714 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 26
# 715 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP
	return


# 66 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOnWarp19_Movement_0:
# 66 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 67 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOnWarp19_Movement_1:
# 67 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 508 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0:
# 508 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 508 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 508 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 508 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 508 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 508 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 510 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1:
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 510 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
	step_end

# 514 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2:
# 514 "data/maps/SunshineTown/scripts.pory"
	face_down
# 514 "data/maps/SunshineTown/scripts.pory"
	lock_facing_direction
# 514 "data/maps/SunshineTown/scripts.pory"
	walk_fast_up
# 514 "data/maps/SunshineTown/scripts.pory"
	unlock_facing_direction
# 514 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 514 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 529 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3:
# 529 "data/maps/SunshineTown/scripts.pory"
	set_visible
# 529 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 529 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 529 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 529 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 529 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 529 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 531 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4:
# 531 "data/maps/SunshineTown/scripts.pory"
	face_down
# 531 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 531 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 533 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5:
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 548 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6:
# 548 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 548 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 548 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 548 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 548 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 548 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 548 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 548 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 548 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 548 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 572 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0:
# 572 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 572 "data/maps/SunshineTown/scripts.pory"
	face_right
# 572 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 572 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 572 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 572 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 572 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 574 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1:
# 574 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 574 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 574 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 577 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2:
# 577 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 577 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southeast
	step_end

# 585 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0:
# 585 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 585 "data/maps/SunshineTown/scripts.pory"
	face_right
# 585 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 585 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 585 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 585 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 585 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 585 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 617 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0:
# 617 "data/maps/SunshineTown/scripts.pory"
	face_right
# 617 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 617 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 625 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1:
# 625 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 625 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northwest
	step_end

# 642 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0:
# 642 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 642 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 642 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 642 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 642 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 642 "data/maps/SunshineTown/scripts.pory"
	delay_16
	step_end

# 646 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1:
# 646 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 646 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 646 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 662 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2:
# 662 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 662 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 662 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 662 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 662 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 662 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 662 "data/maps/SunshineTown/scripts.pory"
	walk_left
	step_end

# 668 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3:
# 668 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 668 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 668 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 668 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 668 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 668 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 712 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0:
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 712 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 712 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

SunshineTown_Eventscript_Kurosawa_Text_0:
# 102 "data/maps/SunshineTown/scripts.pory"
	.string "Hm?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-we'll get going now!$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 106 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 111 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Do you need some help, kids?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh nothing! Sorry for bothering you,\n"
	.string "sir.\p"
	.string "(He looks so intimidating!)$"

SunshineTown_Eventscript_GoGetPackage0_Text_0:
# 127 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 157 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 160 "data/maps/SunshineTown/scripts.pory"
	.string "Sorry, I lost my wallet around here and\n"
	.string "Yoshida is helping me finding it.$"

SunshineTown_Eventscript_FatMan_Text_2:
# 166 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_3:
# 173 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 182 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 184 "data/maps/SunshineTown/scripts.pory"
	.string "I'm helping Kojima find his wallet. Sigh...\n"
	.string "He's always losing important stuff.$"

SunshineTown_Eventscript_Boy_Text_2:
# 190 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_3:
# 198 "data/maps/SunshineTown/scripts.pory"
	.string "My brother is a fire fighter and he's at\n"
	.string "the burning orphanage right now.\p"
	.string "I'm so worried I can't stay still, I hope\n"
	.string "there's not many casualties.\p"
	.string "If only I had a Pokémon that can deal\n"
	.string "with fire to help but I only have a\l"
	.string "Poltchageist.$"

SunshineTown_Eventscript_Boy_Text_4:
# 203 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lives on this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 213 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\n"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 221 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 237 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_DontLeaveTown_Text_0:
# 266 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should ask people in town about that\n"
	.string "explosion sound!$"

SunshineTown_Eventscript_NoPointEnteringPC_Text_0:
# 284 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}(Not the time to be dawdling around!)$"

SunshineTown_Eventscript_OW_Happiny_Text_0:
# 312 "data/maps/SunshineTown/scripts.pory"
	.string "The Happiny is looking through the\n"
	.string "door. It won't budge no matter what.$"

SunshineTown_Eventscript_OnFrame23_Text_0:
# 334 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR GREEN}Tips: Quest System is now unlocked.\p"
	.string "Check around for quest givers with a\n"
	.string "light blue exclamation mark.\p"
	.string "You can open quest menu in\n"
	.string "{START_BUTTON} Menu {RIGHT_ARROW} {L_BUTTON}.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 352 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 371 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 381 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 396 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 405 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 409 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3:
# 415 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young lass. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, ma'am. What do you need?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4:
# 419 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I'll be happy to help.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 434 "data/maps/SunshineTown/scripts.pory"
	.string "I lent my Lucario to the police to help\n"
	.string "them with the rescue.\p"
	.string "The Riolus are still too young and I\n"
	.string "have to keep them safe here.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_1:
# 442 "data/maps/SunshineTown/scripts.pory"
	.string "Did you hear a loud sound or was it\n"
	.string "because of my ears acting up again?$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_2:
# 448 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 457 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

unlockcharacters_Text_0:
# 484 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

makecharagrayout_Text_0:
# 496 "data/maps/SunshineTown/scripts.pory"
	.string "Marking prologue to completed & reset\n"
	.string "all temp vars$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0:
# 519 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The police? How did they arrive this\n"
	.string "fast? The explosion happened just a\l"
	.string "few minutes ago.)\p"
	.string "(Not to mention, if I remember\n"
	.string "correctly, the nearest station is in the\l"
	.string "opposite direction of Sunshine Town.)$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1:
# 535 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Excuse me. Did something happen?\n"
	.string "Everyone in town looks on edge.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2:
# 540 "data/maps/SunshineTown/scripts.pory"
	.string "There was an explosion at the\n"
	.string "orphanage east of town, didn't you\l"
	.string "hear?$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3:
# 542 "data/maps/SunshineTown/scripts.pory"
	.string "Lots of people were injured and the\n"
	.string "town people are trying to help.\p"
	.string "Now excuse me, I gotta bring these\n"
	.string "medicines to the injured.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4:
# 550 "data/maps/SunshineTown/scripts.pory"
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
# 603 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 1$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1:
# 604 "data/maps/SunshineTown/scripts.pory"
	.string "Have you seen those boys?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2:
# 607 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 2$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3:
# 608 "data/maps/SunshineTown/scripts.pory"
	.string "No, I've been standing here the whole\n"
	.string "time but I didn't see them.\p"
	.string "This is the only exit to safety. Where\n"
	.string "could they be?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4:
# 613 "data/maps/SunshineTown/scripts.pory"
	.string "Maybe they're still in the woods?\p"
	.string "Let's go search for them.$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5:
# 628 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(They're searching for some boys... Ones\n"
	.string "of the orphan kids, perhaps?)\p"
	.string "(I should tail them and see what they're\n"
	.string "up to.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0:
# 644 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(This man... He was helping the\n"
	.string "orphanage so he could've known\l"
	.string "something about those boys.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1:
# 648 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Excuse me. Have you seen these boys?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2:
# 650 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh them! I saw the policeman living in\n"
	.string "this town carried them to his house.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Really? When was it?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3:
# 653 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}I think it was around an hour after the\n"
	.string "explosion at the orphanage happened?\p"
	.string "After that I've only seen the black-red\n"
	.string "beanie boy going out of the house a few\l"
	.string "times.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}May I ask where this policeman's house\n"
	.string "is?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4:
# 665 "data/maps/SunshineTown/scripts.pory"
	.string "It's the house over there.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you so much for your help.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0:
# 682 "data/maps/SunshineTown/scripts.pory"
	.string "???????$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1:
# 683 "data/maps/SunshineTown/scripts.pory"
	.string "Aki! At least eat something before you\n"
	.string "go find her! You haven't eaten since\l"
	.string "yesterday!$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2:
# 684 "data/maps/SunshineTown/scripts.pory"
	.string "Aki?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3:
# 685 "data/maps/SunshineTown/scripts.pory"
	.string "How do you expect I can eat anything\n"
	.string "when Miki is still out there missing!?\p"
	.string "What do you know anyway? It's not like\n"
	.string "she's your sister.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4:
# 694 "data/maps/SunshineTown/scripts.pory"
	.string "Cool your ass and sit down.\p"
	.string "Even if you find her, do you think she'll\n"
	.string "be happy seeing you in this state?\p"
	.string "Looking like a rotten walking zombie?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5:
# 698 "data/maps/SunshineTown/scripts.pory"
	.string ".......... Fuck you, Shinji. Fine.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6:
# 701 "data/maps/SunshineTown/scripts.pory"
	.string "Shinji?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7:
# 702 "data/maps/SunshineTown/scripts.pory"
	.string "Eat first. Then we'll go find her\n"
	.string "together, okay?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8:
# 704 "data/maps/SunshineTown/scripts.pory"
	.string "........Okay.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9:
# 709 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}....... (His sister's missing after the\n"
	.string "explosion, I suppose.)\p"
	.string "(I should go to the orphanage and help\n"
	.string "the searching.)$"
