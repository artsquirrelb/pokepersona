SunshineTown_MapScripts::
# 2 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 46 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 50 "data/maps/SunshineTown/scripts.pory"
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
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_gt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 27 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_ne SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 31 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 35 "data/maps/SunshineTown/scripts.pory"
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
	setflag FLAG_HIDE_HELP_BUTTON
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
	setmetatile 3, 13, 0x831, TRUE
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 24 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 28 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 29 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 32 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_4
# 33 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 31 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 23
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_36:
# 36 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 3, 13, 6
# 37 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 38 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 24, 14, 7
# 39 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_LEFT
# 40 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 41 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 42 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 8, 4
# 43 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 35 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_36
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 47 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 19, SunshineTown_Eventscript_MitsuruOnWarp19
# 48 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 24, SunshineTown_Eventscript_MitsuruOnWarp24
	.2byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 51 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 16, SunshineTown_Eventscript_OnFrame16
# 52 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_Eventscript_OnFrame23
# 54 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 18, SunshineTown_Eventscript_MitsuruOnFrame18
# 55 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 19, SunshineTown_Eventscript_MitsuruOnFrame19
# 56 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 23, SunshineTown_Eventscript_MitsuruOnFrame23
# 57 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 24, SunshineTown_Eventscript_MitsuruOnFrame24
	.2byte 0


SunshineTown_Eventscript_MitsuruOnWarp19::
# 63 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruOnWarp19_Movement_0
# 64 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOnWarp19_Movement_1
	return


SunshineTown_Eventscript_MitsuruOnFrame23::
# 68 "data/maps/SunshineTown/scripts.pory"
	lock
# 69 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 24
# 70 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 3, 7
# 71 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_MitsuruOnWarp24::
# 75 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


SunshineTown_Eventscript_MitsuruOnFrame24::
# 79 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji
	return


SunshineTown_Eventscript_MitsuruOnFrame18::
# 83 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneStarts
# 84 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 85 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 19
# 86 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 4, 6
# 87 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_MitsuruOnFrame19::
# 91 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_MitsuruSeeingPoliceRunning
	return


SunshineTown_Eventscript_Kurosawa::
# 95 "data/maps/SunshineTown/scripts.pory"
	lock
# 96 "data/maps/SunshineTown/scripts.pory"
	setspeaker SP_NAME_KRSW
# 97 "data/maps/SunshineTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineTown_Eventscript_Kurosawa_2
# 103 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_1
# 104 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 105 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 106 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, KurosawaNoticed
# 107 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 108 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_2
# 111 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
SunshineTown_Eventscript_Kurosawa_1:
# 113 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Kurosawa_2:
# 98 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 99 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_0
	goto SunshineTown_Eventscript_Kurosawa_1


# 117 "data/maps/SunshineTown/scripts.pory"
KurosawaNoticed:
# 118 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 119 "data/maps/SunshineTown/scripts.pory"
	face_player
	step_end

SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko::
# 122 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_eq SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_2
SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_1:
# 125 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_5
SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_4:
# 128 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_8
SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_7:
# 131 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_eq SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_10
	return

SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_2:
# 123 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_GoGetPackage
	goto SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_1

SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_5:
# 126 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_DontLeaveTown
	goto SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_4

SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_8:
# 129 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_NoPointLeavingTown
	goto SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_7

SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_10:
# 132 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24
	return


SunshineTown_Eventscript_GoGetPackage::
# 136 "data/maps/SunshineTown/scripts.pory"
	lockall
# 137 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage_Text_0
# 138 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 139 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 140 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 141 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_FatMan::
# 146 "data/maps/SunshineTown/scripts.pory"
	lock
# 147 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 148 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 149 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_FatMan_2
# 149 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_FatMan_2
# 157 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_2
# 159 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_FatMan_2:
# 150 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_1
# 152 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 153 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Boy::
# 164 "data/maps/SunshineTown/scripts.pory"
	lock
# 165 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 166 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 167 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_Boy_2
# 167 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_Boy_2
# 175 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_Boy_9
SunshineTown_Eventscript_Boy_8:
# 181 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_3
SunshineTown_Eventscript_Boy_6:
# 184 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 185 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_2:
# 168 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
# 171 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 172 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_7:
# 176 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
	goto SunshineTown_Eventscript_Boy_6

SunshineTown_Eventscript_Boy_9:
# 175 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_Boy_7
	goto SunshineTown_Eventscript_Boy_8


SunshineTown_Eventscript_DirerctionSign::
# 190 "data/maps/SunshineTown/scripts.pory"
	lock
# 191 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DirerctionSign_Text_0
# 193 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_TownSign::
# 198 "data/maps/SunshineTown/scripts.pory"
	lock
# 199 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_TownSign_Text_0
# 200 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_OnFrame16::
# 205 "data/maps/SunshineTown/scripts.pory"
	lockall
# 206 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExitingPC
# 207 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_ExitingPC::
# 211 "data/maps/SunshineTown/scripts.pory"
	lockall
# 212 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_AkihikoExitingPC
# 213 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, SunshineTown_Eventscript_ShinjiroExitingPC
# 214 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 215 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExitingPC_Text_0
# 217 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 218 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, walkup
# 219 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 220 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 221 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
# 222 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 17
# 223 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 35
# 224 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 228 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_AkihikoExitingPC:
# 229 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 230 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 230 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 231 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

# 234 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroExitingPC:
# 235 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 235 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 235 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 236 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 236 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 237 "data/maps/SunshineTown/scripts.pory"
	face_up
	step_end

SunshineTown_Eventscript_DontLeaveTown::
# 241 "data/maps/SunshineTown/scripts.pory"
	lockall
# 242 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 243 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 244 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DontLeaveTown_Text_0
# 245 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 246 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_NoPointEnteringPC::
# 251 "data/maps/SunshineTown/scripts.pory"
	lock
# 252 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 253 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 254 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 255 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_NoPointLeavingTown::
# 260 "data/maps/SunshineTown/scripts.pory"
	lock
# 261 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 262 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 263 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 264 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 269 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_WarpToBurningOrphanage_1
# 269 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_WarpToBurningOrphanage_1
	return

SunshineTown_Eventscript_WarpToBurningOrphanage_1:
# 271 "data/maps/SunshineTown/scripts.pory"
	lock
# 272 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 273 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 274 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 275 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 276 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_OW_Happiny::
# 281 "data/maps/SunshineTown/scripts.pory"
	lockall
# 282 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_Eventscript_OW_Happiny_1
# 282 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_OW_Happiny_5
SunshineTown_Eventscript_OW_Happiny_2:
# 289 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 290 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 291 "data/maps/SunshineTown/scripts.pory"
	startoverworldencounter 6
# 292 "data/maps/SunshineTown/scripts.pory"
	removeobject 6
# 293 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_A
# 294 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_1:
# 283 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OW_Happiny_Text_0
# 284 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 285 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_5:
# 282 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_OW_Happiny_1
	goto SunshineTown_Eventscript_OW_Happiny_2


SunshineTown_Eventscript_OnFrame23::
# 301 "data/maps/SunshineTown/scripts.pory"
	lock
# 302 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 303 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_OnFrame23_2
SunshineTown_Eventscript_OnFrame23_1:
# 311 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 312 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 313 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_OnFrame23_2:
# 305 "data/maps/SunshineTown/scripts.pory"
	call EventScript_ShowHelpQuest
# 306 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 307 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS
# 308 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 1
# 309 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
	goto SunshineTown_Eventscript_OnFrame23_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 318 "data/maps/SunshineTown/scripts.pory"
	lock
# 319 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 320 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 324 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 325 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 326 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 330 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 333 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 321 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 327 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 338 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 339 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 340 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 346 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 347 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 358 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 348 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 349 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 350 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 351 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 352 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 353 "data/maps/SunshineTown/scripts.pory"
	release
# 354 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 363 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 364 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 365 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 374 "data/maps/SunshineTown/scripts.pory"
	checkplayergender
# 375 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5
# 387 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3
# 389 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 390 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 391 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4
# 394 "data/maps/SunshineTown/scripts.pory"
	closemessage
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4:
# 396 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 397 "data/maps/SunshineTown/scripts.pory"
	release
# 398 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 399 "data/maps/SunshineTown/scripts.pory"
	refreshquesticon
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 366 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 367 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 368 "data/maps/SunshineTown/scripts.pory"
	release
# 369 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 370 "data/maps/SunshineTown/scripts.pory"
	refreshquesticon
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5:
# 377 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 379 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 380 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 381 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 384 "data/maps/SunshineTown/scripts.pory"
	closemessage
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4


SunshineTown_Eventscript_ExpertF_PreQuest::
# 406 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_ExpertF_PreQuest_3
SunshineTown_Eventscript_ExpertF_PreQuest_1:
# 414 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 414 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 422 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_2
# 424 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 425 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_2:
# 407 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 408 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 410 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 411 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_3:
# 406 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_ExpertF_PreQuest_2
	goto SunshineTown_Eventscript_ExpertF_PreQuest_1

SunshineTown_Eventscript_ExpertF_PreQuest_7:
# 415 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 416 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_1
# 417 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 418 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 430 "data/maps/SunshineTown/scripts.pory"
	lock
# 431 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 432 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 439 "data/maps/SunshineTown/scripts.pory"
	fwdtime 11, 0
# 440 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 433 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 434 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 435 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_HiddenGrotto::
# 445 "data/maps/SunshineTown/scripts.pory"
	lock
# 446 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 447 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 448 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 451 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 449 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


unlockcharacters::
# 458 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 459 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 460 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 461 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 462 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 463 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 464 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 465 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
	end


SunshineTown_Eventscript_MitsuruSeeingPoliceRunning::
# 470 "data/maps/SunshineTown/scripts.pory"
	lock
# 471 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0
# 472 "data/maps/SunshineTown/scripts.pory"
	delay 36
# 473 "data/maps/SunshineTown/scripts.pory"
	applymovement 24, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 474 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 475 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 476 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 477 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2
# 478 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 479 "data/maps/SunshineTown/scripts.pory"
	delay 50
# 480 "data/maps/SunshineTown/scripts.pory"
	removeobject 3
# 481 "data/maps/SunshineTown/scripts.pory"
	removeobject 24
# 482 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0
# 485 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 486 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 487 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 488 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 489 "data/maps/SunshineTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 490 "data/maps/SunshineTown/scripts.pory"
	waitse
# 491 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 492 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3
# 493 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 494 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4
# 495 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 496 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5
# 497 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 498 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1
# 499 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 500 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, faceleft
# 501 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 502 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 503 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2
# 504 "data/maps/SunshineTown/scripts.pory"
	playbgm MUS_P3_CALAMITY, TRUE
# 505 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3
# 507 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 508 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 509 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 510 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 511 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6
# 512 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 513 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4
# 518 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 519 "data/maps/SunshineTown/scripts.pory"
	removeobject 1
# 520 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 20
# 521 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 522 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneEnds
# 523 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 524 "data/maps/SunshineTown/scripts.pory"
	addobject 22
# 525 "data/maps/SunshineTown/scripts.pory"
	addobject 23
# 526 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, invisible
# 527 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 528 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18::
# 533 "data/maps/SunshineTown/scripts.pory"
	lock
# 534 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 535 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0
# 536 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 537 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 538 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 539 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 540 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 541 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 542 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19::
# 546 "data/maps/SunshineTown/scripts.pory"
	lock
# 547 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 548 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0
# 549 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 550 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 551 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 552 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 553 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 554 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 555 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_KGStaffAtWoodsEntrance::
# 559 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 560 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 561 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 562 "data/maps/SunshineTown/scripts.pory"
	addobject 22, MAP_SUNSHINE_TOWN
# 563 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 564 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 565 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 566 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 567 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1
# 568 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, walkinplaceup
# 569 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 570 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2
# 571 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3
# 573 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 574 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 575 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 576 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4
# 578 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 579 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 580 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 581 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 582 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 583 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 584 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 585 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 586 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 587 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 588 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1
# 589 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 590 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 591 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5
# 593 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 594 "data/maps/SunshineTown/scripts.pory"
	removeobject 22
# 595 "data/maps/SunshineTown/scripts.pory"
	removeobject 23
# 596 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 597 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 21
# 598 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 40
# 599 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji::
# 604 "data/maps/SunshineTown/scripts.pory"
	lock
# 605 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0
# 606 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 607 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0
# 608 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 609 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1
# 610 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 611 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1
# 612 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 613 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2
# 615 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 616 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3
# 619 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 620 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, facedown
# 621 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 622 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 623 "data/maps/SunshineTown/scripts.pory"
	delay 8
# 624 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 625 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2
# 626 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 627 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 628 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4
# 630 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 631 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3
# 632 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 633 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 634 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 25
# 635 "data/maps/SunshineTown/scripts.pory"
	fwdtime 17, 20
# 636 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruOverheardAkiShinji::
# 641 "data/maps/SunshineTown/scripts.pory"
	lock
# 642 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 643 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 644 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 645 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 646 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1
# 647 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 648 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3
# 650 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 651 "data/maps/SunshineTown/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 652 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_BlockShakeCamera
# 653 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 654 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 655 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 656 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 657 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4
# 660 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 661 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5
# 662 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 663 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 664 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6
# 665 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7
# 666 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 667 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8
# 668 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 669 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 670 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 671 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 672 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9
# 674 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 675 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0
# 676 "data/maps/SunshineTown/scripts.pory"
	delay 40
# 677 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 26
# 678 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP
	return


SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru::
# 682 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 6
	goto_if_ge SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_2
	return

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_1:
# 683 "data/maps/SunshineTown/scripts.pory"
	lock
# 684 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0
# 685 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 686 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 687 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 688 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_2:
# 682 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_1
	return


SunshineTown_Eventscript_KurosawaHouseLocked::
# 694 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_gt SunshineTown_Eventscript_KurosawaHouseLocked_3
SunshineTown_Eventscript_KurosawaHouseLocked_1:
# 698 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_KurosawaHouseLocked_2:
# 696 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KurosawaHouseLocked_Text_0
	goto SunshineTown_Eventscript_KurosawaHouseLocked_1

SunshineTown_Eventscript_KurosawaHouseLocked_3:
# 694 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_le SunshineTown_Eventscript_KurosawaHouseLocked_2
	goto SunshineTown_Eventscript_KurosawaHouseLocked_1


# 63 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOnWarp19_Movement_0:
# 63 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 64 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOnWarp19_Movement_1:
# 64 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 471 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0:
# 471 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 471 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 471 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 471 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 471 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 471 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 473 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1:
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
	step_end

# 477 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2:
# 477 "data/maps/SunshineTown/scripts.pory"
	face_down
# 477 "data/maps/SunshineTown/scripts.pory"
	lock_facing_direction
# 477 "data/maps/SunshineTown/scripts.pory"
	walk_fast_up
# 477 "data/maps/SunshineTown/scripts.pory"
	unlock_facing_direction
# 477 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 477 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 492 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3:
# 492 "data/maps/SunshineTown/scripts.pory"
	set_visible
# 492 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 492 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 492 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 492 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 492 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 492 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 494 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4:
# 494 "data/maps/SunshineTown/scripts.pory"
	face_down
# 494 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 494 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 496 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5:
# 496 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 511 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6:
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 511 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 511 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 535 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0:
# 535 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 535 "data/maps/SunshineTown/scripts.pory"
	face_right
# 535 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 535 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 535 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 535 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 535 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 537 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1:
# 537 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 537 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 537 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 540 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2:
# 540 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 540 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southeast
	step_end

# 548 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0:
# 548 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 548 "data/maps/SunshineTown/scripts.pory"
	face_right
# 548 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 548 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 548 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 548 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 548 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 548 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 580 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0:
# 580 "data/maps/SunshineTown/scripts.pory"
	face_right
# 580 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 580 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 588 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1:
# 588 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 588 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northwest
	step_end

# 605 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0:
# 605 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 605 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 605 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 605 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 605 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 605 "data/maps/SunshineTown/scripts.pory"
	delay_16
	step_end

# 609 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1:
# 609 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 609 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 609 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 625 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2:
# 625 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 625 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 625 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 625 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 625 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 625 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 625 "data/maps/SunshineTown/scripts.pory"
	walk_left
	step_end

# 631 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3:
# 631 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 631 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 631 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 631 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 631 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 631 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 675 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0:
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 675 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 675 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

SunshineTown_Eventscript_Kurosawa_Text_0:
# 99 "data/maps/SunshineTown/scripts.pory"
	.string "Hm?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}W-we'll get going now!$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 103 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 108 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KRSW}Do you need some help, kids?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Oh nothing! Sorry for bothering you,\n"
	.string "sir.\p"
	.string "(He looks so intimidating!)$"

SunshineTown_Eventscript_GoGetPackage_Text_0:
# 137 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 147 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 150 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_2:
# 157 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 166 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 168 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_2:
# 176 "data/maps/SunshineTown/scripts.pory"
	.string "My brother is a fire fighter and he's at\n"
	.string "the burning orphanage right now.\p"
	.string "I'm so worried I can't stay still, I hope\n"
	.string "there's not many casualties.\p"
	.string "If only I had a Pokémon that can deal\n"
	.string "with fire to help but I only have a\l"
	.string "Poltchageist.$"

SunshineTown_Eventscript_Boy_Text_3:
# 181 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lives on this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 191 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\n"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 199 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 215 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_DontLeaveTown_Text_0:
# 244 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_MAD}We should ask people in town about that\n"
	.string "explosion sound!$"

SunshineTown_Eventscript_NoPointEnteringPC_Text_0:
# 253 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_MAD}(Not the time to be dawdling around!)$"

SunshineTown_Eventscript_OW_Happiny_Text_0:
# 283 "data/maps/SunshineTown/scripts.pory"
	.string "The Happiny is looking through the\n"
	.string "door. It won't budge no matter what.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 319 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 338 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 349 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 366 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 377 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 381 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3:
# 387 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young lass. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Certainly, ma'am. What do you need?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4:
# 391 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}I'll be happy to help.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 408 "data/maps/SunshineTown/scripts.pory"
	.string "I lent my Lucario to the police to help\n"
	.string "them with the rescue.\p"
	.string "The Riolus are still too young and I\n"
	.string "have to keep them safe here.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_1:
# 416 "data/maps/SunshineTown/scripts.pory"
	.string "Did you hear a loud sound or was it\n"
	.string "because of my ears acting up again?$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_2:
# 422 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 431 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

unlockcharacters_Text_0:
# 458 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0:
# 482 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(The police? How did they arrive this\n"
	.string "fast? The explosion happened just a\l"
	.string "few minutes ago.)\p"
	.string "(Not to mention, if I remember\n"
	.string "correctly, the nearest station is in the\l"
	.string "opposite direction of Sunshine Town.)$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1:
# 498 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Excuse me. Did something happen?\n"
	.string "Everyone in town looks on edge.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2:
# 503 "data/maps/SunshineTown/scripts.pory"
	.string "There was an explosion at the\n"
	.string "orphanage east of town, didn't you\l"
	.string "hear?$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3:
# 505 "data/maps/SunshineTown/scripts.pory"
	.string "Lots of people were injured and the\n"
	.string "town people are trying to help.\p"
	.string "Now excuse me, I gotta bring these\n"
	.string "medicines to the injured.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4:
# 513 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_STRUGGLED}(The orphanage was exploded?)\p"
	.string "(Damn it! How am I so naive. Of course\n"
	.string "they would do that to erase the proofs\l"
	.string "and traces.)\p"
	.string "{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}(It was all my fault... If only I acted\n"
	.string "sooner.)\p"
	.string "...........\p"
	.string "{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}(I should go check and help the injured\n"
	.string "as well.)$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0:
# 566 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 1$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1:
# 567 "data/maps/SunshineTown/scripts.pory"
	.string "Have you seen those boys?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2:
# 570 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 2$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3:
# 571 "data/maps/SunshineTown/scripts.pory"
	.string "No, I've been standing here the whole\n"
	.string "time but I didn't see them.\p"
	.string "This is the only exit to safety. Where\n"
	.string "could they be?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4:
# 576 "data/maps/SunshineTown/scripts.pory"
	.string "Maybe they're still in the woods?\p"
	.string "Let's go search for them.$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5:
# 591 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}(They're searching for some boys... Ones\n"
	.string "of the orphan kids, perhaps?)\p"
	.string "(I should tail them and see what they're\n"
	.string "up to.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0:
# 607 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(This man... He was helping the\n"
	.string "orphanage so he could've known\l"
	.string "something about those boys.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1:
# 611 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Excuse me. Have you seen these boys?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2:
# 613 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh them! I saw the policeman living in\n"
	.string "this town carried them to his house.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Really? When was it?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3:
# 616 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}I think it was around an hour after the\n"
	.string "explosion at the orphanage happened?\p"
	.string "After that I've only seen the black-red\n"
	.string "beanie boy going out of the house a few\l"
	.string "times.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}May I ask where this policeman's house\n"
	.string "is?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4:
# 628 "data/maps/SunshineTown/scripts.pory"
	.string "It's the house over there.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I see. Thank you so much for your help.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0:
# 645 "data/maps/SunshineTown/scripts.pory"
	.string "???????$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1:
# 646 "data/maps/SunshineTown/scripts.pory"
	.string "Aki! At least eat something before you\n"
	.string "go find her! You haven't eaten since\l"
	.string "yesterday!$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2:
# 647 "data/maps/SunshineTown/scripts.pory"
	.string "Aki?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3:
# 648 "data/maps/SunshineTown/scripts.pory"
	.string "How do you expect I can eat anything\n"
	.string "when Miki is still out there missing!?\p"
	.string "What do you know anyway? It's not like\n"
	.string "she's your sister.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4:
# 657 "data/maps/SunshineTown/scripts.pory"
	.string "Cool your ass and sit down.\p"
	.string "Even if you find her, do you think she'll\n"
	.string "be happy seeing you in this state?\p"
	.string "Looking like a rotten walking zombie?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5:
# 661 "data/maps/SunshineTown/scripts.pory"
	.string ".......... Fuck you, Shinji. Fine.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6:
# 664 "data/maps/SunshineTown/scripts.pory"
	.string "Shinji?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7:
# 665 "data/maps/SunshineTown/scripts.pory"
	.string "Eat first. Then we'll go find her\n"
	.string "together, okay?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8:
# 667 "data/maps/SunshineTown/scripts.pory"
	.string "........Okay.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9:
# 672 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}....... (His sister's missing after the\n"
	.string "explosion, I suppose.)\p"
	.string "(I should go to the orphanage and help\n"
	.string "the searching.)$"

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0:
# 684 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}(Now is not the time to wander around in\n"
	.string "Sunshine Town.)$"

SunshineTown_Eventscript_KurosawaHouseLocked_Text_0:
# 696 "data/maps/SunshineTown/scripts.pory"
	.string "It's locked.$"
