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
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_STARTERS
# 168 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SunshineTown_Eventscript_Boy_2
SunshineTown_Eventscript_Boy_1:
# 172 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_Boy_5
# 172 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_Boy_5
# 180 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_Boy_12
SunshineTown_Eventscript_Boy_11:
# 186 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_3
SunshineTown_Eventscript_Boy_9:
# 189 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 190 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_2:
# 170 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_Boy_GiveSquirtleInfo
	goto SunshineTown_Eventscript_Boy_1

SunshineTown_Eventscript_Boy_5:
# 173 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
# 176 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 177 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_10:
# 181 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
	goto SunshineTown_Eventscript_Boy_9

SunshineTown_Eventscript_Boy_12:
# 180 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_Boy_10
	goto SunshineTown_Eventscript_Boy_11


SunshineTown_Eventscript_Boy_GiveSquirtleInfo::
# 195 "data/maps/SunshineTown/scripts.pory"
	mcsaid 0, 0, A_AskSquirtle, M_AskSquirtle
# 196 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 197 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_0
# 199 "data/maps/SunshineTown/scripts.pory"
	mcsaid EMOTE_SMILE, 0, SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_1, SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_2
# 200 "data/maps/SunshineTown/scripts.pory"
	release
	end


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


SunshineTown_Eventscript_NoPointEnteringPC::
# 273 "data/maps/SunshineTown/scripts.pory"
	lock
# 274 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 275 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 276 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 277 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_NoPointLeavingTown::
# 282 "data/maps/SunshineTown/scripts.pory"
	lock
# 283 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 284 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 285 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 286 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 291 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_WarpToBurningOrphanage_1
# 291 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_WarpToBurningOrphanage_1
	return

SunshineTown_Eventscript_WarpToBurningOrphanage_1:
# 293 "data/maps/SunshineTown/scripts.pory"
	lock
# 294 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 295 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 296 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 297 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 298 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_OW_Happiny::
# 303 "data/maps/SunshineTown/scripts.pory"
	lockall
# 304 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_Eventscript_OW_Happiny_1
# 304 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_OW_Happiny_5
SunshineTown_Eventscript_OW_Happiny_2:
# 311 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 312 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 313 "data/maps/SunshineTown/scripts.pory"
	startoverworldencounter 6
# 314 "data/maps/SunshineTown/scripts.pory"
	removeobject 6
# 315 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_A
# 316 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_1:
# 305 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OW_Happiny_Text_0
# 306 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 307 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_5:
# 304 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_OW_Happiny_1
	goto SunshineTown_Eventscript_OW_Happiny_2


SunshineTown_Eventscript_OnFrame23::
# 323 "data/maps/SunshineTown/scripts.pory"
	lock
# 324 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 325 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_OnFrame23_2
SunshineTown_Eventscript_OnFrame23_1:
# 333 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 334 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 335 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_OnFrame23_2:
# 327 "data/maps/SunshineTown/scripts.pory"
	call EventScript_ShowHelpQuest
# 328 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 329 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS
# 330 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 1
# 331 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
	goto SunshineTown_Eventscript_OnFrame23_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 340 "data/maps/SunshineTown/scripts.pory"
	lock
# 341 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 342 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 346 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 347 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 348 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 352 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 355 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 343 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 349 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 360 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 361 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 362 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 368 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 369 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 380 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 370 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 371 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 372 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 373 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 374 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 375 "data/maps/SunshineTown/scripts.pory"
	release
# 376 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 385 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 386 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 387 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 396 "data/maps/SunshineTown/scripts.pory"
	checkplayergender
# 397 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5
# 409 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3
# 411 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 412 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 413 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4
# 416 "data/maps/SunshineTown/scripts.pory"
	closemessage
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4:
# 418 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 419 "data/maps/SunshineTown/scripts.pory"
	release
# 420 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 421 "data/maps/SunshineTown/scripts.pory"
	refreshquesticon
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 388 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 389 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 390 "data/maps/SunshineTown/scripts.pory"
	release
# 391 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 392 "data/maps/SunshineTown/scripts.pory"
	refreshquesticon
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5:
# 399 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 401 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 402 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 403 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 406 "data/maps/SunshineTown/scripts.pory"
	closemessage
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4


SunshineTown_Eventscript_ExpertF_PreQuest::
# 428 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 18
	goto_if_ge SunshineTown_Eventscript_ExpertF_PreQuest_3
SunshineTown_Eventscript_ExpertF_PreQuest_1:
# 436 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 436 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 444 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_2
# 446 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 447 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_2:
# 429 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 430 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 432 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 433 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_3:
# 428 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_ExpertF_PreQuest_2
	goto SunshineTown_Eventscript_ExpertF_PreQuest_1

SunshineTown_Eventscript_ExpertF_PreQuest_7:
# 437 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 438 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_1
# 439 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 440 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 452 "data/maps/SunshineTown/scripts.pory"
	lock
# 453 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 454 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 461 "data/maps/SunshineTown/scripts.pory"
	fwdtime 11, 0
# 462 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 455 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 456 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 457 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_HiddenGrotto::
# 467 "data/maps/SunshineTown/scripts.pory"
	lock
# 468 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 469 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 470 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 473 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 471 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


unlockcharacters::
# 480 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 481 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 482 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 483 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 484 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 485 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_LOCK_MITSURU
# 486 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 487 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
	end


SunshineTown_Eventscript_MitsuruSeeingPoliceRunning::
# 492 "data/maps/SunshineTown/scripts.pory"
	lock
# 493 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0
# 494 "data/maps/SunshineTown/scripts.pory"
	delay 36
# 495 "data/maps/SunshineTown/scripts.pory"
	applymovement 24, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 496 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 497 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 498 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 499 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2
# 500 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 501 "data/maps/SunshineTown/scripts.pory"
	delay 50
# 502 "data/maps/SunshineTown/scripts.pory"
	removeobject 3
# 503 "data/maps/SunshineTown/scripts.pory"
	removeobject 24
# 504 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0
# 507 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 508 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 509 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 510 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 511 "data/maps/SunshineTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 512 "data/maps/SunshineTown/scripts.pory"
	waitse
# 513 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 514 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3
# 515 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 516 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4
# 517 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 518 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5
# 519 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 520 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1
# 521 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 522 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, faceleft
# 523 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 524 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 525 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2
# 526 "data/maps/SunshineTown/scripts.pory"
	playbgm MUS_P3_CALAMITY, TRUE
# 527 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3
# 529 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 530 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 531 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 532 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 533 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6
# 534 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 535 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4
# 540 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 541 "data/maps/SunshineTown/scripts.pory"
	removeobject 1
# 542 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 20
# 543 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 544 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneEnds
# 545 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 546 "data/maps/SunshineTown/scripts.pory"
	addobject 22
# 547 "data/maps/SunshineTown/scripts.pory"
	addobject 23
# 548 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, invisible
# 549 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 550 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18::
# 555 "data/maps/SunshineTown/scripts.pory"
	lock
# 556 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 557 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0
# 558 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 559 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 560 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 561 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 562 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 563 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 564 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19::
# 568 "data/maps/SunshineTown/scripts.pory"
	lock
# 569 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 570 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0
# 571 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 572 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 573 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 574 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 575 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 576 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 577 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_KGStaffAtWoodsEntrance::
# 581 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 582 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 583 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 584 "data/maps/SunshineTown/scripts.pory"
	addobject 22, MAP_SUNSHINE_TOWN
# 585 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 586 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 587 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 588 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 589 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1
# 590 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, walkinplaceup
# 591 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 592 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2
# 593 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3
# 595 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 596 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 597 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 598 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4
# 600 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 601 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 602 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 603 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 604 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 605 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 606 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 607 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 608 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 609 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 610 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1
# 611 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 612 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 613 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5
# 615 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 616 "data/maps/SunshineTown/scripts.pory"
	removeobject 22
# 617 "data/maps/SunshineTown/scripts.pory"
	removeobject 23
# 618 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 619 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 21
# 620 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 40
# 621 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji::
# 626 "data/maps/SunshineTown/scripts.pory"
	lock
# 627 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0
# 628 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 629 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0
# 630 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 631 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1
# 632 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 633 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1
# 634 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 635 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2
# 637 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 638 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3
# 641 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 642 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, facedown
# 643 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 644 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 645 "data/maps/SunshineTown/scripts.pory"
	delay 8
# 646 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 647 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2
# 648 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 649 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 650 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4
# 652 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 653 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3
# 654 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 655 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 656 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 25
# 657 "data/maps/SunshineTown/scripts.pory"
	fwdtime 17, 20
# 658 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruOverheardAkiShinji::
# 663 "data/maps/SunshineTown/scripts.pory"
	lock
# 664 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 665 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 666 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 667 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 668 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1
# 669 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 670 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3
# 672 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 673 "data/maps/SunshineTown/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 674 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_BlockShakeCamera
# 675 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 676 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 677 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 678 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 679 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4
# 682 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 683 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5
# 684 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 685 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 686 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6
# 687 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7
# 688 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 689 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8
# 690 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 691 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 692 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 693 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 694 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9
# 696 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 697 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0
# 698 "data/maps/SunshineTown/scripts.pory"
	delay 40
# 699 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 26
# 700 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP
	return


SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru::
# 704 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 6
	goto_if_ge SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_2
	return

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_1:
# 705 "data/maps/SunshineTown/scripts.pory"
	lock
# 706 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0
# 707 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 708 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 709 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 710 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_2:
# 704 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_le SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_1
	return


SunshineTown_Eventscript_KurosawaHouseLocked::
# 716 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_gt SunshineTown_Eventscript_KurosawaHouseLocked_3
SunshineTown_Eventscript_KurosawaHouseLocked_1:
# 720 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_KurosawaHouseLocked_2:
# 718 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KurosawaHouseLocked_Text_0
	goto SunshineTown_Eventscript_KurosawaHouseLocked_1

SunshineTown_Eventscript_KurosawaHouseLocked_3:
# 716 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_le SunshineTown_Eventscript_KurosawaHouseLocked_2
	goto SunshineTown_Eventscript_KurosawaHouseLocked_1


SunshineTown_Eventscript_BreederF::
# 725 "data/maps/SunshineTown/scripts.pory"
	lock
# 726 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 727 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_BreederF_Text_0
# 728 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_BreederF_Text_1
# 730 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Nickit::
# 735 "data/maps/SunshineTown/scripts.pory"
	lock
# 736 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_NICKIT, 0
# 737 "data/maps/SunshineTown/scripts.pory"
	showmonpic SPECIES_NICKIT, 18, 5
# 738 "data/maps/SunshineTown/scripts.pory"
	doemote VAR_LAST_TALKED, E_HAPPY
# 739 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Nickit_Text_0
# 740 "data/maps/SunshineTown/scripts.pory"
	hidemonpic
# 741 "data/maps/SunshineTown/scripts.pory"
	setseenmon SPECIES_NICKIT
# 742 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Gentleman::
# 747 "data/maps/SunshineTown/scripts.pory"
	lock
# 748 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 749 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Gentleman_Text_0
# 750 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Gentleman_Text_1
# 755 "data/maps/SunshineTown/scripts.pory"
	release
	end


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

# 493 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0:
# 493 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 493 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 493 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 493 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 493 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 493 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 495 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1:
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 495 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
	step_end

# 499 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2:
# 499 "data/maps/SunshineTown/scripts.pory"
	face_down
# 499 "data/maps/SunshineTown/scripts.pory"
	lock_facing_direction
# 499 "data/maps/SunshineTown/scripts.pory"
	walk_fast_up
# 499 "data/maps/SunshineTown/scripts.pory"
	unlock_facing_direction
# 499 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 499 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 514 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3:
# 514 "data/maps/SunshineTown/scripts.pory"
	set_visible
# 514 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 514 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 514 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 514 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 514 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 514 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 516 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4:
# 516 "data/maps/SunshineTown/scripts.pory"
	face_down
# 516 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 516 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 518 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5:
# 518 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 533 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6:
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 533 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 533 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 557 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0:
# 557 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 557 "data/maps/SunshineTown/scripts.pory"
	face_right
# 557 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 557 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 557 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 557 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 557 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 559 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1:
# 559 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 559 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 559 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 562 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2:
# 562 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 562 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southeast
	step_end

# 570 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0:
# 570 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 570 "data/maps/SunshineTown/scripts.pory"
	face_right
# 570 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 570 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 570 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 570 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 570 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 570 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 602 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0:
# 602 "data/maps/SunshineTown/scripts.pory"
	face_right
# 602 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 602 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 610 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1:
# 610 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 610 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northwest
	step_end

# 627 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0:
# 627 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 627 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 627 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 627 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 627 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 627 "data/maps/SunshineTown/scripts.pory"
	delay_16
	step_end

# 631 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1:
# 631 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 631 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 631 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 647 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2:
# 647 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 647 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 647 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 647 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 647 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 647 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 647 "data/maps/SunshineTown/scripts.pory"
	walk_left
	step_end

# 653 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_3:
# 653 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 653 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 653 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 653 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 653 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northeast
# 653 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 697 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0:
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 697 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 697 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

SunshineTown_Eventscript_Kurosawa_Text_0:
# 99 "data/maps/SunshineTown/scripts.pory"
	.string "Hm?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}W-we'll get going now!$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 103 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 108 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KRSW}Do you need some help, kids?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Oh nothing! Sorry for bothering you,\n"
	.string "sir.\p"
	.string "(He looks so intimidating!)$"

SunshineTown_Eventscript_GoGetPackage_Text_0:
# 137 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 147 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 150 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_2:
# 157 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 166 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 173 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_2:
# 181 "data/maps/SunshineTown/scripts.pory"
	.string "My brother is a fire fighter and he's at\n"
	.string "the burning orphanage right now.\p"
	.string "I'm so worried I can't stay still, I hope\n"
	.string "there's not many casualties.\p"
	.string "If only I had a Pokémon that can deal\n"
	.string "with fire to help but I only have a\l"
	.string "Poltchageist.$"

SunshineTown_Eventscript_Boy_Text_3:
# 186 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lives on this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_0:
# 197 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh, that one! I saw it at the river bank\n"
	.string "one {COLOR 7}night{COLOR 2}.\p"
	.string "Tried to catch it but it wiped me out...$"

SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_1:
# 199 "data/maps/SunshineTown/scripts.pory"
	.string "Thank you!$"

SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_2:
# 199 "data/maps/SunshineTown/scripts.pory"
	.string "I see.\nThank you for the information.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 213 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\n"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 221 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 237 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_DontLeaveTown_Text_0:
# 266 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}We should ask people in town about that\n"
	.string "explosion sound!$"

SunshineTown_Eventscript_NoPointEnteringPC_Text_0:
# 275 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}(Not the time to be dawdling around!)$"

SunshineTown_Eventscript_OW_Happiny_Text_0:
# 305 "data/maps/SunshineTown/scripts.pory"
	.string "The Happiny is looking through the\n"
	.string "door. It won't budge no matter what.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 341 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 360 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 371 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 388 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 399 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 403 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3:
# 409 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young lass. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Certainly, ma'am. What do you need?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4:
# 413 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I'll be happy to help.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 430 "data/maps/SunshineTown/scripts.pory"
	.string "I lent my Lucario to the police to help\n"
	.string "them with the rescue.\p"
	.string "The Riolus are still too young and I\n"
	.string "have to keep them safe here.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_1:
# 438 "data/maps/SunshineTown/scripts.pory"
	.string "Did you hear a loud sound or was it\n"
	.string "because of my ears acting up again?$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_2:
# 444 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 453 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

unlockcharacters_Text_0:
# 480 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0:
# 504 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(The police? How did they arrive this\n"
	.string "fast? The explosion happened just a\l"
	.string "few minutes ago.)\p"
	.string "(Not to mention, if I remember\n"
	.string "correctly, the nearest station is in the\l"
	.string "opposite direction of Sunshine Town.)$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1:
# 520 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Excuse me. Did something happen?\n"
	.string "Everyone in town looks on edge.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2:
# 525 "data/maps/SunshineTown/scripts.pory"
	.string "There was an explosion at the\n"
	.string "orphanage east of town, didn't you\l"
	.string "hear?$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3:
# 527 "data/maps/SunshineTown/scripts.pory"
	.string "Lots of people were injured and the\n"
	.string "town people are trying to help.\p"
	.string "Now excuse me, I gotta bring these\n"
	.string "medicines to the injured.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4:
# 535 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}(The orphanage was exploded?)\p"
	.string "(Damn it! How am I so naive. Of course\n"
	.string "they would do that to erase the proofs\l"
	.string "and traces.)\p"
	.string "{CREATE MUGSHOT_M EMOTE_SAD}(It was all my fault... If only I acted\n"
	.string "sooner.)\p"
	.string "...........\p"
	.string "{CREATE MUGSHOT_M EMOTE_SERIOUS}(I should go check and help the injured\n"
	.string "as well.)$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0:
# 588 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 1$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1:
# 589 "data/maps/SunshineTown/scripts.pory"
	.string "Have you seen those boys?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2:
# 592 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 2$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3:
# 593 "data/maps/SunshineTown/scripts.pory"
	.string "No, I've been standing here the whole\n"
	.string "time but I didn't see them.\p"
	.string "This is the only exit to safety. Where\n"
	.string "could they be?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4:
# 598 "data/maps/SunshineTown/scripts.pory"
	.string "Maybe they're still in the woods?\p"
	.string "Let's go search for them.$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5:
# 613 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(They're searching for some boys... Ones\n"
	.string "of the orphan kids, perhaps?)\p"
	.string "(I should tail them and see what they're\n"
	.string "up to.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0:
# 629 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(This man... He was helping the\n"
	.string "orphanage so he could've known\l"
	.string "something about those boys.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1:
# 633 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Excuse me. Have you seen these boys?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2:
# 635 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh them! I saw the policeman living in\n"
	.string "this town carried them to his house.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Really? When was it?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3:
# 638 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}I think it was around an hour after the\n"
	.string "explosion at the orphanage happened?\p"
	.string "After that I've only seen the black-red\n"
	.string "beanie boy going out of the house a few\l"
	.string "times.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}May I ask where this policeman's house\n"
	.string "is?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4:
# 650 "data/maps/SunshineTown/scripts.pory"
	.string "It's the house over there.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I see. Thank you so much for your help.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0:
# 667 "data/maps/SunshineTown/scripts.pory"
	.string "???????$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1:
# 668 "data/maps/SunshineTown/scripts.pory"
	.string "Aki! At least eat something before you\n"
	.string "go find her! You haven't eaten since\l"
	.string "yesterday!$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2:
# 669 "data/maps/SunshineTown/scripts.pory"
	.string "Aki?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3:
# 670 "data/maps/SunshineTown/scripts.pory"
	.string "How do you expect I can eat anything\n"
	.string "when Miki is still out there missing!?\p"
	.string "What do you know anyway? It's not like\n"
	.string "she's your sister.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4:
# 679 "data/maps/SunshineTown/scripts.pory"
	.string "Cool your ass and sit down.\p"
	.string "Even if you find her, do you think she'll\n"
	.string "be happy seeing you in this state?\p"
	.string "Looking like a rotten walking zombie?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5:
# 683 "data/maps/SunshineTown/scripts.pory"
	.string ".......... Fuck you, Shinji. Fine.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6:
# 686 "data/maps/SunshineTown/scripts.pory"
	.string "Shinji?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7:
# 687 "data/maps/SunshineTown/scripts.pory"
	.string "Eat first. Then we'll go find her\n"
	.string "together, okay?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8:
# 689 "data/maps/SunshineTown/scripts.pory"
	.string "........Okay.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9:
# 694 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}....... (His sister's missing after the\n"
	.string "explosion, I suppose.)\p"
	.string "(I should go to the orphanage and help\n"
	.string "the searching.)$"

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0:
# 706 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Now is not the time to wander around in\n"
	.string "Sunshine Town.)$"

SunshineTown_Eventscript_KurosawaHouseLocked_Text_0:
# 718 "data/maps/SunshineTown/scripts.pory"
	.string "It's locked.$"

SunshineTown_Eventscript_BreederF_Text_0:
# 727 "data/maps/SunshineTown/scripts.pory"
	.string "Hahana$"

SunshineTown_Eventscript_BreederF_Text_1:
# 728 "data/maps/SunshineTown/scripts.pory"
	.string "They say Nickit survives by stealing\n"
	.string "other Pokémon's food.\p"
	.string "Makes me wonder if I give it enough\n"
	.string "food, will it still steal from others?$"

SunshineTown_Eventscript_Nickit_Text_0:
# 739 "data/maps/SunshineTown/scripts.pory"
	.string "Nickit is enjoying its Sitrus Berry.$"

SunshineTown_Eventscript_Gentleman_Text_0:
# 749 "data/maps/SunshineTown/scripts.pory"
	.string "Watanabe$"

SunshineTown_Eventscript_Gentleman_Text_1:
# 750 "data/maps/SunshineTown/scripts.pory"
	.string "I enjoy the silence when the sun goes\n"
	.string "down in this town.\p"
	.string "There aren't many people living here but\n"
	.string "during the daytime,\p"
	.string "the teachers from the orphanage often\n"
	.string "bring the kids here to play.\p"
	.string "Don't get me wrong, though. I don't mind\n"
	.string "the carefree smile of those kids.\p"
	.string "I just wish their Pokémon battles\n"
	.string "weren't too rowdy.$"

A_AskSquirtle::
# 204 "data/maps/SunshineTown/scripts.pory"
	.string "Hello, I'm looking for a sparkling\n"
	.string "Squirtle, have you seen it anywhere?$"

M_AskSquirtle::
# 207 "data/maps/SunshineTown/scripts.pory"
	.string "Good day, have you seen a sparkling\n"
	.string "Squirtle around here by any chance?$"
