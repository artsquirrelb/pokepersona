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
	compare VAR_AKIHIKOS_INTRO_STATE, A_EXPLOSION
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_EXPLOSION
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_ASK_AROUND
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 21 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_EXPLOSION
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 21 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_ASK_AROUND
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 21 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_NOT_PLAYER
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 24 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_TO_SUNSHINE_TOWN
	goto_if_gt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 27 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_KG_STAFF_WOODS_ENTRANCE
	goto_if_ne SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 31 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_KG_STAFF_WOODS_ENTRANCE
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 35 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_TO_SUNSHINE_TOWN
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
	compare VAR_MITSURUS_INTRO_STATE, M_HEARD_ORPHANAGE_EXPLOSION
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

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 22 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 25 "data/maps/SunshineTown/scripts.pory"
	setmetatile 3, 13, 0x831, TRUE
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 24 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_NOT_PLAYER
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 28 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 29 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_26

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 32 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_4
# 33 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 31 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_ASK_AROUND_FOR_AKSJ
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

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
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 41 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 42 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 8, 4
# 43 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_35:
# 35 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_FOLLOW_KG_STAFF
	goto_if_le SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 47 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_HEARD_ORPHANAGE_EXPLOSION, SunshineTown_Eventscript_MitsuruOnWarp19
# 48 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_ASKING_FATMAN, SunshineTown_Eventscript_MitsuruOnWarp24
	.2byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 51 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_EXPLOSION, SunshineTown_Eventscript_OnFrame16
# 52 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_KUROSAWAS_HOUSE, SunshineTown_Eventscript_OnFrame23
# 54 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_TO_SUNSHINE_TOWN, SunshineTown_Eventscript_MitsuruOnFrame18
# 55 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_HEARD_ORPHANAGE_EXPLOSION, SunshineTown_Eventscript_MitsuruOnFrame19
# 56 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_ASK_AROUND_FOR_AKSJ, SunshineTown_Eventscript_MitsuruOnFrame23
# 57 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_ASKING_FATMAN, SunshineTown_Eventscript_MitsuruOnFrame24
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
	setvar VAR_MITSURUS_INTRO_STATE, M_ASKING_FATMAN
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
	fadescreenswapbuffers FADE_TO_BLACK
# 84 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneStarts
# 85 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 86 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_HEARD_ORPHANAGE_EXPLOSION
# 87 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 4, 6
# 88 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_MitsuruOnFrame19::
# 92 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_MitsuruSeeingPoliceRunning
	return


SunshineTown_Eventscript_Kurosawa::
# 96 "data/maps/SunshineTown/scripts.pory"
	lock
# 97 "data/maps/SunshineTown/scripts.pory"
	setspeaker SP_NAME_KRSW
# 98 "data/maps/SunshineTown/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq SunshineTown_Eventscript_Kurosawa_2
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
# 119 "data/maps/SunshineTown/scripts.pory"
	doemote MC, E_QUESTION
# 120 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_3
# 122 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_E, 1
SunshineTown_Eventscript_Kurosawa_1:
# 124 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Kurosawa_2:
# 99 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 100 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_0
	goto SunshineTown_Eventscript_Kurosawa_1


# 128 "data/maps/SunshineTown/scripts.pory"
KurosawaNoticed:
# 129 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 130 "data/maps/SunshineTown/scripts.pory"
	face_player
	step_end

SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko::
# 133 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_GET_PACKAGE
	goto_if_eq SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_2
SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_1:
# 136 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_ASK_AROUND
	goto_if_eq SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_5
SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_4:
# 139 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2
	goto_if_eq SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_7
	return

SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_2:
# 134 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_GoGetPackage
	goto SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_1

SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_5:
# 137 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_NoPointLeavingTown
	goto SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_4

SunshineTown_Eventscript_DontLeaveTownTrigger_Akihiko_7:
# 140 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24
	return


SunshineTown_Eventscript_GoGetPackage::
# 144 "data/maps/SunshineTown/scripts.pory"
	lockall
# 145 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage_Text_0
# 146 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 147 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 148 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_FatMan::
# 154 "data/maps/SunshineTown/scripts.pory"
	lock
# 155 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 156 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 157 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_ASK_AROUND
	goto_if_eq SunshineTown_Eventscript_FatMan_2
# 164 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_2
# 166 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_FatMan_2:
# 158 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_1
# 160 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Boy::
# 171 "data/maps/SunshineTown/scripts.pory"
	lock
# 172 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 173 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 174 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_STARTERS
# 175 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SunshineTown_Eventscript_Boy_2
SunshineTown_Eventscript_Boy_1:
# 179 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_ASK_AROUND
	goto_if_eq SunshineTown_Eventscript_Boy_5
# 186 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_EXPLOSION
	goto_if_ge SunshineTown_Eventscript_Boy_10
SunshineTown_Eventscript_Boy_9:
# 192 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_3
SunshineTown_Eventscript_Boy_7:
# 195 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 196 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_2:
# 177 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_Boy_GiveSquirtleInfo
	goto SunshineTown_Eventscript_Boy_1

SunshineTown_Eventscript_Boy_5:
# 180 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
# 183 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_Boy_8:
# 187 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
	goto SunshineTown_Eventscript_Boy_7

SunshineTown_Eventscript_Boy_10:
# 186 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_Boy_8
	goto SunshineTown_Eventscript_Boy_9


SunshineTown_Eventscript_Boy_GiveSquirtleInfo::
# 201 "data/maps/SunshineTown/scripts.pory"
	mcsaid 0, 0, A_AskSquirtle, M_AskSquirtle
# 202 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 203 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_0
# 205 "data/maps/SunshineTown/scripts.pory"
	mcsaid EMOTE_SMILE, 0, SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_1, SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_2
# 206 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_DirerctionSign::
# 218 "data/maps/SunshineTown/scripts.pory"
	lock
# 219 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DirerctionSign_Text_0
# 221 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_TownSign::
# 226 "data/maps/SunshineTown/scripts.pory"
	lock
# 227 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_TownSign_Text_0
# 228 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_OnFrame16::
# 233 "data/maps/SunshineTown/scripts.pory"
	lockall
# 234 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExitingPC
# 235 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_ExitingPC::
# 239 "data/maps/SunshineTown/scripts.pory"
	lockall
# 240 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_AkihikoExitingPC
# 241 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, SunshineTown_Eventscript_ShinjiroExitingPC
# 242 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 243 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExitingPC_Text_0
# 245 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 246 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, walkup
# 247 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 248 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 249 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
# 250 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_ASK_AROUND
# 251 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 35
# 252 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 256 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_AkihikoExitingPC:
# 257 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 258 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 259 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

# 262 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroExitingPC:
# 263 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 263 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 263 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 264 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 264 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 265 "data/maps/SunshineTown/scripts.pory"
	face_up
	step_end

SunshineTown_Eventscript_NoPointEnteringPC::
# 269 "data/maps/SunshineTown/scripts.pory"
	lock
# 270 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 271 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 272 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 273 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_NoPointLeavingTown::
# 278 "data/maps/SunshineTown/scripts.pory"
	lock
# 279 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 280 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 281 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 282 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 287 "data/maps/SunshineTown/scripts.pory"
	lock
# 288 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 289 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_BURNING_ORPHANAGE
# 290 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 291 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 292 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_OW_Happiny::
# 296 "data/maps/SunshineTown/scripts.pory"
	lockall
# 297 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2
	goto_if_lt SunshineTown_Eventscript_OW_Happiny_1
# 297 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_EXPLOSION
	goto_if_ge SunshineTown_Eventscript_OW_Happiny_5
SunshineTown_Eventscript_OW_Happiny_2:
# 304 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 305 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 306 "data/maps/SunshineTown/scripts.pory"
	startoverworldencounter 6
# 307 "data/maps/SunshineTown/scripts.pory"
	removeobject 6
# 308 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_A
# 309 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_1:
# 298 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OW_Happiny_Text_0
# 299 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 300 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_5:
# 297 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_OW_Happiny_1
	goto SunshineTown_Eventscript_OW_Happiny_2


SunshineTown_Eventscript_OnFrame23::
# 316 "data/maps/SunshineTown/scripts.pory"
	lock
# 317 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 318 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_OnFrame23_2
SunshineTown_Eventscript_OnFrame23_1:
# 326 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 327 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2
# 328 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_OnFrame23_2:
# 320 "data/maps/SunshineTown/scripts.pory"
	call EventScript_ShowHelpQuest
# 321 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 322 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS
# 323 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 1
# 324 "data/maps/SunshineTown/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
	goto SunshineTown_Eventscript_OnFrame23_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 333 "data/maps/SunshineTown/scripts.pory"
	lock
# 334 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 335 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 339 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 340 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 341 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 345 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 348 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 336 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 342 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 353 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 354 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 355 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 361 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 362 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 373 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 363 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 364 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 365 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 366 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 367 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 368 "data/maps/SunshineTown/scripts.pory"
	release
# 369 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
	end


SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 378 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 379 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 380 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 389 "data/maps/SunshineTown/scripts.pory"
	checkplayergender
# 390 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5
# 402 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3
# 404 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 405 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 406 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4
# 409 "data/maps/SunshineTown/scripts.pory"
	closemessage
SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4:
# 411 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 412 "data/maps/SunshineTown/scripts.pory"
	release
# 413 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 414 "data/maps/SunshineTown/scripts.pory"
	refreshquesticon
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 381 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 382 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 383 "data/maps/SunshineTown/scripts.pory"
	release
# 384 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 385 "data/maps/SunshineTown/scripts.pory"
	refreshquesticon
	end

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_5:
# 392 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 394 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 395 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 396 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 399 "data/maps/SunshineTown/scripts.pory"
	closemessage
	goto SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_4


SunshineTown_Eventscript_ExpertF_PreQuest::
# 421 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_EXPLOSION
	goto_if_ge SunshineTown_Eventscript_ExpertF_PreQuest_3
SunshineTown_Eventscript_ExpertF_PreQuest_1:
# 429 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_ASK_AROUND
	goto_if_eq SunshineTown_Eventscript_ExpertF_PreQuest_7
# 437 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_2
# 439 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 440 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_2:
# 422 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 423 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 425 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 426 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_ExpertF_PreQuest_3:
# 421 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_le SunshineTown_Eventscript_ExpertF_PreQuest_2
	goto SunshineTown_Eventscript_ExpertF_PreQuest_1

SunshineTown_Eventscript_ExpertF_PreQuest_7:
# 430 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 431 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_1
# 432 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 433 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 445 "data/maps/SunshineTown/scripts.pory"
	lock
# 446 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 447 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 454 "data/maps/SunshineTown/scripts.pory"
	fwdtime 11, 0
# 455 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_ROUTE2, 37, 11
# 456 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 448 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 449 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 450 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_HiddenGrotto::
# 461 "data/maps/SunshineTown/scripts.pory"
	lock
# 462 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 463 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 464 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 467 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 465 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


unlockcharacters::
# 474 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 475 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 476 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 477 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 478 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 479 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_LOCK_MITSURU
# 480 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 481 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
	end


SunshineTown_Eventscript_MitsuruSeeingPoliceRunning::
# 486 "data/maps/SunshineTown/scripts.pory"
	lock
# 487 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0
# 488 "data/maps/SunshineTown/scripts.pory"
	delay 36
# 489 "data/maps/SunshineTown/scripts.pory"
	applymovement 24, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 490 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 491 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1
# 492 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 493 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2
# 494 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 495 "data/maps/SunshineTown/scripts.pory"
	delay 50
# 496 "data/maps/SunshineTown/scripts.pory"
	removeobject 3
# 497 "data/maps/SunshineTown/scripts.pory"
	removeobject 24
# 498 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0
# 501 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 502 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 503 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 504 "data/maps/SunshineTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 505 "data/maps/SunshineTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 506 "data/maps/SunshineTown/scripts.pory"
	waitse
# 507 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 508 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3
# 509 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 510 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4
# 511 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 512 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5
# 513 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 514 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1
# 516 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 517 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, faceleft
# 518 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 519 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 520 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2
# 521 "data/maps/SunshineTown/scripts.pory"
	playbgm MUS_P3_CALAMITY, TRUE
# 522 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3
# 524 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 525 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 526 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 527 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 528 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6
# 529 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 530 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4
# 535 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 536 "data/maps/SunshineTown/scripts.pory"
	removeobject 1
# 537 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_KG_STAFF_WOODS_ENTRANCE
# 538 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 539 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_CutsceneEnds
# 540 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 541 "data/maps/SunshineTown/scripts.pory"
	addobject 22
# 542 "data/maps/SunshineTown/scripts.pory"
	addobject 23
# 543 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, invisible
# 544 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 545 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18::
# 550 "data/maps/SunshineTown/scripts.pory"
	lock
# 551 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 552 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0
# 553 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 554 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 555 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 556 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 557 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 558 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 559 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19::
# 563 "data/maps/SunshineTown/scripts.pory"
	lock
# 564 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 565 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0
# 566 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 567 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1
# 568 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 569 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 570 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2
# 571 "data/maps/SunshineTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 572 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_KGStaffAtWoodsEntrance
	return


SunshineTown_Eventscript_KGStaffAtWoodsEntrance::
# 576 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 577 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 578 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 579 "data/maps/SunshineTown/scripts.pory"
	addobject 22, MAP_SUNSHINE_TOWN
# 580 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 581 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 582 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 583 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 584 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1
# 585 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, walkinplaceup
# 586 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 587 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2
# 588 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3
# 590 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, walkinplacedown
# 591 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 592 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_0
# 593 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4
# 595 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 596 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 597 "data/maps/SunshineTown/scripts.pory"
	applymovement 22, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 598 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 599 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 600 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 601 "data/maps/SunshineTown/scripts.pory"
	applymovement 23, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0
# 602 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 603 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 604 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 605 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1
# 606 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 607 "data/maps/SunshineTown/scripts.pory"
	special RemoveCameraObject
# 608 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5
# 610 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 611 "data/maps/SunshineTown/scripts.pory"
	removeobject 22
# 612 "data/maps/SunshineTown/scripts.pory"
	removeobject 23
# 613 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_3
# 614 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_FOLLOW_KG_STAFF
# 615 "data/maps/SunshineTown/scripts.pory"
	fwdtime 9, 40
# 616 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji::
# 621 "data/maps/SunshineTown/scripts.pory"
	lock
# 622 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0
# 623 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 624 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0
# 626 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 627 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1
# 628 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 629 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1
# 631 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 632 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2
# 635 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 636 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3
# 639 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 640 "data/maps/SunshineTown/scripts.pory"
	applymovement 1, facedown
# 641 "data/maps/SunshineTown/scripts.pory"
	delay 4
# 642 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 643 "data/maps/SunshineTown/scripts.pory"
	delay 8
# 644 "data/maps/SunshineTown/scripts.pory"
	special SpawnCameraObject
# 645 "data/maps/SunshineTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2
# 646 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 647 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 648 "data/maps/SunshineTown/scripts.pory"
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
	setvar VAR_MITSURUS_INTRO_STATE, M_APPROACH_KRSW_HOUSE
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
# 670 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 671 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3
# 673 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 674 "data/maps/SunshineTown/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 675 "data/maps/SunshineTown/scripts.pory"
	call Eventscript_BlockShakeCamera
# 676 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 677 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 678 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 679 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0
# 680 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4
# 683 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 684 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5
# 686 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 687 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 688 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6
# 689 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7
# 690 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2
# 691 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8
# 692 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 693 "data/maps/SunshineTown/scripts.pory"
	delay 20
# 694 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 695 "data/maps/SunshineTown/scripts.pory"
	waitmovement
# 696 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9
# 698 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 699 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0
# 700 "data/maps/SunshineTown/scripts.pory"
	delay 40
# 701 "data/maps/SunshineTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 702 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_CALLING_TKHR
# 703 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_10
# 704 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 705 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 706 "data/maps/SunshineTown/scripts.pory"
	waitstate
	return


SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru::
# 710 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_LEAVING_MANSION
	goto_if_ge SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_2
	return

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_1:
# 711 "data/maps/SunshineTown/scripts.pory"
	lock
# 712 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0
# 713 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 714 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 715 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 716 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_2:
# 710 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_VS_NORBERT
	goto_if_le SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_1
	return


SunshineTown_Eventscript_KurosawaHouseLocked::
# 722 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_VS_NORBERT
	goto_if_gt SunshineTown_Eventscript_KurosawaHouseLocked_3
SunshineTown_Eventscript_KurosawaHouseLocked_1:
# 726 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_KurosawaHouseLocked_2:
# 724 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_KurosawaHouseLocked_Text_0
	goto SunshineTown_Eventscript_KurosawaHouseLocked_1

SunshineTown_Eventscript_KurosawaHouseLocked_3:
# 722 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_NOT_PLAYER
	goto_if_le SunshineTown_Eventscript_KurosawaHouseLocked_2
	goto SunshineTown_Eventscript_KurosawaHouseLocked_1


SunshineTown_Eventscript_BreederF::
# 731 "data/maps/SunshineTown/scripts.pory"
	lock
# 732 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 733 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_BreederF_Text_0
# 734 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_BreederF_Text_1
# 736 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Nickit::
# 741 "data/maps/SunshineTown/scripts.pory"
	lock
# 742 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_NICKIT, 0
# 743 "data/maps/SunshineTown/scripts.pory"
	showmonpic SPECIES_NICKIT, 18, 5
# 744 "data/maps/SunshineTown/scripts.pory"
	doemote VAR_LAST_TALKED, E_HAPPY
# 745 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Nickit_Text_0
# 746 "data/maps/SunshineTown/scripts.pory"
	hidemonpic
# 747 "data/maps/SunshineTown/scripts.pory"
	setseenmon SPECIES_NICKIT
# 748 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Gentleman::
# 753 "data/maps/SunshineTown/scripts.pory"
	lock
# 754 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 755 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Gentleman_Text_0
# 756 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Gentleman_Text_1
# 761 "data/maps/SunshineTown/scripts.pory"
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

# 487 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_0:
# 487 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 487 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 487 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 487 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 487 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 487 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 489 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_1:
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SunshineTown/scripts.pory"
	walk_fast_left
	step_end

# 493 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_2:
# 493 "data/maps/SunshineTown/scripts.pory"
	face_down
# 493 "data/maps/SunshineTown/scripts.pory"
	lock_facing_direction
# 493 "data/maps/SunshineTown/scripts.pory"
	walk_fast_up
# 493 "data/maps/SunshineTown/scripts.pory"
	unlock_facing_direction
# 493 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 493 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 508 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_3:
# 508 "data/maps/SunshineTown/scripts.pory"
	set_visible
# 508 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 508 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 508 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 508 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 508 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 508 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 510 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_4:
# 510 "data/maps/SunshineTown/scripts.pory"
	face_down
# 510 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 510 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 512 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_5:
# 512 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
	step_end

# 528 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Movement_6:
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 528 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 528 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 552 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_0:
# 552 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 552 "data/maps/SunshineTown/scripts.pory"
	face_right
# 552 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 552 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 552 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 552 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 552 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 554 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_1:
# 554 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 554 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 554 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 557 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger18_Movement_2:
# 557 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 557 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southeast
	step_end

# 565 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruSeeingKGStaffAtWoodsEntranceTrigger19_Movement_0:
# 565 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 565 "data/maps/SunshineTown/scripts.pory"
	face_right
# 565 "data/maps/SunshineTown/scripts.pory"
	delay_16
# 565 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 565 "data/maps/SunshineTown/scripts.pory"
	player_run_left
# 565 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 565 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 565 "data/maps/SunshineTown/scripts.pory"
	face_left
	step_end

# 597 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_0:
# 597 "data/maps/SunshineTown/scripts.pory"
	face_right
# 597 "data/maps/SunshineTown/scripts.pory"
	delay_8
# 597 "data/maps/SunshineTown/scripts.pory"
	set_invisible
	step_end

# 605 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Movement_1:
# 605 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 605 "data/maps/SunshineTown/scripts.pory"
	walk_diag_northwest
	step_end

# 622 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_0:
# 622 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 622 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 622 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 622 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 622 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 622 "data/maps/SunshineTown/scripts.pory"
	delay_16
	step_end

# 627 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_1:
# 627 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 627 "data/maps/SunshineTown/scripts.pory"
	walk_right
# 627 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

# 645 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Movement_2:
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_down
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_diag_southwest
# 645 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 645 "data/maps/SunshineTown/scripts.pory"
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

# 699 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Movement_0:
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_right
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 699 "data/maps/SunshineTown/scripts.pory"
	player_run_up
# 699 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

SunshineTown_Eventscript_Kurosawa_Text_0:
# 100 "data/maps/SunshineTown/scripts.pory"
	.string "(No... I shouldn't involve the kids...)$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 103 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 108 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KRSW}Oh its's you kids.\n"
	.string "Out for an errand run?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Yes, Kurosawa-san.\p"
	.string "Do you need something from the Pokémon\n"
	.string "Center?\p"
	.string "We're going there.\p"
	.string "{DESTROY_MUGSHOT}{SPEAKER NAME_KRSW}Thanks kids, I'm good.\p"
	.string ".....{PAUSE 60}\n"
	.string "By the way, ...\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Yes?\p"
	.string "{DESTROY_MUGSHOT}{SPEAKER NAME_KRSW}No, it's nothing.\n"
	.string "See you around.\p"
	.string "$"

SunshineTown_Eventscript_Kurosawa_Text_3:
# 120 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Sure then.\n"
	.string "Goodbye, Kurosawa-san!$"

SunshineTown_Eventscript_GoGetPackage_Text_0:
# 145 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 155 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 158 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_2:
# 164 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 173 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 180 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_2:
# 187 "data/maps/SunshineTown/scripts.pory"
	.string "My brother is a fire fighter and he's at\n"
	.string "the burning orphanage right now.\p"
	.string "I'm so worried I can't stay still, I hope\n"
	.string "there's not many casualties.\p"
	.string "If only I had a Pokémon that can deal\n"
	.string "with fire to help but I only have a\l"
	.string "Poltchageist.$"

SunshineTown_Eventscript_Boy_Text_3:
# 192 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lives on this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_0:
# 203 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh, that one! I saw it at the river bank\n"
	.string "one {COLOR 7}night{COLOR 2}.\p"
	.string "Tried to catch it but it wiped me out...$"

SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_1:
# 205 "data/maps/SunshineTown/scripts.pory"
	.string "Thank you!$"

SunshineTown_Eventscript_Boy_GiveSquirtleInfo_Text_2:
# 205 "data/maps/SunshineTown/scripts.pory"
	.string "I see.\nThank you for the information.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 219 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\n"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 227 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 243 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_NoPointEnteringPC_Text_0:
# 271 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}(Not the time to be dawdling around!)$"

SunshineTown_Eventscript_OW_Happiny_Text_0:
# 298 "data/maps/SunshineTown/scripts.pory"
	.string "The Happiny is looking through the\n"
	.string "door. It won't budge no matter what.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 334 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 353 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 364 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 381 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 392 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men.\n"
	.string "Can you do me a favor?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Sure, ma'am.\n"
	.string "What can we do for you?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 396 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_3:
# 402 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young lass.\n"
	.string "Can you do me a favor?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Certainly, ma'am.\n"
	.string "What do you need?$"

SunshineTown_Eventscript_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_4:
# 406 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I'll be happy to help.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 423 "data/maps/SunshineTown/scripts.pory"
	.string "I lent my Lucario to the police to help\n"
	.string "them with the rescue.\p"
	.string "The Riolus are still too young and I\n"
	.string "have to keep them safe here.$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_1:
# 431 "data/maps/SunshineTown/scripts.pory"
	.string "Did you hear a loud sound or was it\n"
	.string "because of my ears acting up again?$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_2:
# 437 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 446 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead.\n"
	.string "Do you want to proceed?$"

unlockcharacters_Text_0:
# 474 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_0:
# 498 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(The police? How did they arrive this\n"
	.string "fast? The explosion happened just a\l"
	.string "few minutes ago.)\p"
	.string "(Not to mention, if I remember\n"
	.string "correctly, the nearest station is in the\l"
	.string "opposite direction of Sunshine Town.)$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_1:
# 514 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Excuse me. Did something happen?\n"
	.string "Everyone in town looks on edge.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_2:
# 520 "data/maps/SunshineTown/scripts.pory"
	.string "There was an explosion at the\n"
	.string "orphanage east of town, didn't you\l"
	.string "hear?$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_3:
# 522 "data/maps/SunshineTown/scripts.pory"
	.string "Lots of people were injured and the\n"
	.string "town people are trying to help.\p"
	.string "Now excuse me, I gotta bring these\n"
	.string "medicines to the injured.$"

SunshineTown_Eventscript_MitsuruSeeingPoliceRunning_Text_4:
# 530 "data/maps/SunshineTown/scripts.pory"
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
# 583 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 1$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_1:
# 584 "data/maps/SunshineTown/scripts.pory"
	.string "Have you seen those boys?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_2:
# 587 "data/maps/SunshineTown/scripts.pory"
	.string "Man In Black 2$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_3:
# 588 "data/maps/SunshineTown/scripts.pory"
	.string "No, I've been standing here the whole\n"
	.string "time but I didn't see them.\p"
	.string "This is the only exit to safety. Where\n"
	.string "could they be?$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_4:
# 593 "data/maps/SunshineTown/scripts.pory"
	.string "Maybe they're still in the woods?\p"
	.string "Let's go search for them.$"

SunshineTown_Eventscript_KGStaffAtWoodsEntrance_Text_5:
# 608 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(They're searching for some boys... Ones\n"
	.string "of the orphan kids, perhaps?)\p"
	.string "(I should tail them and see what they're\n"
	.string "up to.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_0:
# 624 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(This man... He was helping the\n"
	.string "orphanage.\p"
	.string "He may know something about those\n"
	.string "boys.)$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_1:
# 629 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Excuse me.\n"
	.string "Have you seen these boys?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_2:
# 632 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh them!\p"
	.string "I saw the policeman living in this town\n"
	.string "carried them to his house.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Really? When was it?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_3:
# 636 "data/maps/SunshineTown/scripts.pory"
	.string "{DESTROY_MUGSHOT}I think it was around an hour after the\n"
	.string "explosion at the orphanage happened?\p"
	.string "After that I've only seen the black-red\n"
	.string "beanie boy going out of the house a few\l"
	.string "times.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}May I ask where this policeman's house\n"
	.string "is?$"

SunshineTown_Eventscript_MitsuruAskingAboutAkiShinji_Text_4:
# 648 "data/maps/SunshineTown/scripts.pory"
	.string "It's the house over there.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Isn't that... {PAUSE 60}Kurosawa-san's house?)\p"
	.string "I see.\n"
	.string "Thank you so much for your help.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_0:
# 667 "data/maps/SunshineTown/scripts.pory"
	.string "???????$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_1:
# 668 "data/maps/SunshineTown/scripts.pory"
	.string "Aki! At least eat something before you\n"
	.string "go find her!\p"
	.string "You haven't eaten since yesterday!$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_2:
# 670 "data/maps/SunshineTown/scripts.pory"
	.string "Aki?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_3:
# 671 "data/maps/SunshineTown/scripts.pory"
	.string "How do you expect I can eat anything\n"
	.string "when Miki is still out there missing!?\p"
	.string "What do you know anyway? It's not like\n"
	.string "she's your sister.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_4:
# 680 "data/maps/SunshineTown/scripts.pory"
	.string "Cool your ass and sit down.\p"
	.string "Even if you find her, do you think she'll\n"
	.string "be happy seeing you in this state?\p"
	.string "Looking like a rotten walking zombie?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_5:
# 684 "data/maps/SunshineTown/scripts.pory"
	.string ".......... Fuck you, Shinji.\n"
	.string "Fine.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_6:
# 688 "data/maps/SunshineTown/scripts.pory"
	.string "Shinji?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_7:
# 689 "data/maps/SunshineTown/scripts.pory"
	.string "Eat first. Then we'll go find her\n"
	.string "together, okay?$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_8:
# 691 "data/maps/SunshineTown/scripts.pory"
	.string "........ {PAUSE 60}Okay.$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_9:
# 696 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}...{PAUSE 60} (His sister's missing after the\n"
	.string "explosion, I suppose.)\p"
	.string "(I should go to the orphanage and help\n"
	.string "the searching.)$"

SunshineTown_Eventscript_MitsuruOverheardAkiShinji_Text_10:
# 703 "data/maps/SunshineTown/scripts.pory"
	.string "A few days later.$"

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0:
# 712 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Now is not the time to wander around in\n"
	.string "Sunshine Town.)$"

SunshineTown_Eventscript_KurosawaHouseLocked_Text_0:
# 724 "data/maps/SunshineTown/scripts.pory"
	.string "It's locked.$"

SunshineTown_Eventscript_BreederF_Text_0:
# 733 "data/maps/SunshineTown/scripts.pory"
	.string "Hahana$"

SunshineTown_Eventscript_BreederF_Text_1:
# 734 "data/maps/SunshineTown/scripts.pory"
	.string "They say Nickit survives by stealing\n"
	.string "other Pokémon's food.\p"
	.string "Makes me wonder if I give it enough\n"
	.string "food, will it still steal from others?$"

SunshineTown_Eventscript_Nickit_Text_0:
# 745 "data/maps/SunshineTown/scripts.pory"
	.string "Nickit is enjoying its Sitrus Berry.$"

SunshineTown_Eventscript_Gentleman_Text_0:
# 755 "data/maps/SunshineTown/scripts.pory"
	.string "Watanabe$"

SunshineTown_Eventscript_Gentleman_Text_1:
# 756 "data/maps/SunshineTown/scripts.pory"
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
# 210 "data/maps/SunshineTown/scripts.pory"
	.string "Hello, I'm looking for a sparkling\n"
	.string "Squirtle, have you seen it anywhere?$"

M_AskSquirtle::
# 213 "data/maps/SunshineTown/scripts.pory"
	.string "Good day, have you seen a sparkling\n"
	.string "Squirtle around here by any chance?$"
