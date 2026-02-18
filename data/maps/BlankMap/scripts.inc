BlankMap_MapScripts::
# 2 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 4 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 0, Eventscript_NewGameMode
# 8 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_INTRO_GAMEOVER, SunshineMeadow_Eventscript_GameOver
# 10 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 7, SunshineMeadow_Eventscript_MitsuruOnframe7
# 11 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 9, Route2_House_Eventscript_MitsuruOnFrame9
# 12 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 26, SunshineTown_Eventscript_MitsuruOnFrame26
# 13 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 32, Route2_House_Eventscript_MitsuruOnFrame32Warp
	.2byte 0


SunshineMeadow_Eventscript_GameOver::
# 18 "data/maps/BlankMap/scripts.pory"
	lock
# 19 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_0
# 22 "data/maps/BlankMap/scripts.pory"
	closemessage
# 23 "data/maps/BlankMap/scripts.pory"
	delay 30
# 24 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_1
# 27 "data/maps/BlankMap/scripts.pory"
	closemessage
# 28 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 29 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_GAME_OVER, 0, 5
# 30 "data/maps/BlankMap/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruOnframe7::
# 34 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 8
# 35 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 15, 15
	return


Route2_House_Eventscript_MitsuruOnFrame9::
# 39 "data/maps/BlankMap/scripts.pory"
	fwdtime 7, 50
# 40 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 10
# 41 "data/maps/BlankMap/scripts.pory"
	playse MUS_HEAL
# 42 "data/maps/BlankMap/scripts.pory"
	special HealPlayerParty
# 43 "data/maps/BlankMap/scripts.pory"
	delay 50
# 44 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 4
	return


SunshineTown_Eventscript_MitsuruOnFrame26::
# 48 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTown_Eventscript_MitsuruOnFrame26_Text_0
# 49 "data/maps/BlankMap/scripts.pory"
	closemessage
# 50 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 51 "data/maps/BlankMap/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_MitsuruOnFrame32Warp::
# 55 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 33
# 56 "data/maps/BlankMap/scripts.pory"
	fwdtime 6, 20
# 57 "data/maps/BlankMap/scripts.pory"
	fwdweekday WEEKDAY_MON
# 58 "data/maps/BlankMap/scripts.pory"
	delay 60
# 59 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruOnFrame32Warp_Text_0
# 60 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 5
# 61 "data/maps/BlankMap/scripts.pory"
	waitstate
	return


Eventscript_NewGameMode::
# 65 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_WhatDifficulty
# 66 "data/maps/BlankMap/scripts.pory"
	dynmultipush Eventscript_NewGameMode_Text_0, 0
# 67 "data/maps/BlankMap/scripts.pory"
	dynmultipush Eventscript_NewGameMode_Text_1, 1
# 68 "data/maps/BlankMap/scripts.pory"
	dynmultipush Eventscript_NewGameMode_Text_2, 2
# 69 "data/maps/BlankMap/scripts.pory"
	dynmultipush Eventscript_NewGameMode_Text_3, 3
# 70 "data/maps/BlankMap/scripts.pory"
	dynmultistack 18, 4, TRUE, 4, FALSE, 0, NULL
# 71 "data/maps/BlankMap/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/BlankMap/scripts.pory"
	case 0, Eventscript_NewGameMode_2
# 74 "data/maps/BlankMap/scripts.pory"
	case 1, Eventscript_NewGameMode_3
# 75 "data/maps/BlankMap/scripts.pory"
	case 2, Eventscript_NewGameMode_4
# 76 "data/maps/BlankMap/scripts.pory"
	case 3, Eventscript_NewGameMode_5
	return

Eventscript_NewGameMode_2:
# 73 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_ChoosingCasual
	return

Eventscript_NewGameMode_3:
# 74 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_ChoosingStory
	return

Eventscript_NewGameMode_4:
# 75 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_ChoosingMerciless
	return

Eventscript_NewGameMode_5:
# 76 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_ShowInfos
	return


Eventscript_ChoosingCasual::
# 81 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_ChoosingCasual, MSGBOX_YESNO
# 82 "data/maps/BlankMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Eventscript_ChoosingCasual_1
# 89 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_NewGameMode
	return

Eventscript_ChoosingCasual_1:
# 84 "data/maps/BlankMap/scripts.pory"
	closemessage
# 85 "data/maps/BlankMap/scripts.pory"
	setvar VAR_DIFFICULTY, 0
# 86 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_WarpToMap
	return


Eventscript_ChoosingStory::
# 94 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_ChoosingStory, MSGBOX_YESNO
# 95 "data/maps/BlankMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Eventscript_ChoosingStory_1
# 102 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_NewGameMode
	return

Eventscript_ChoosingStory_1:
# 97 "data/maps/BlankMap/scripts.pory"
	closemessage
# 98 "data/maps/BlankMap/scripts.pory"
	setvar VAR_DIFFICULTY, 1
# 99 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_WarpToMap
	return


Eventscript_ChoosingMerciless::
# 107 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_ChoosingMerciless, MSGBOX_YESNO
# 108 "data/maps/BlankMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Eventscript_ChoosingMerciless_1
# 115 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_NewGameMode
	return

Eventscript_ChoosingMerciless_1:
# 110 "data/maps/BlankMap/scripts.pory"
	closemessage
# 111 "data/maps/BlankMap/scripts.pory"
	setvar VAR_DIFFICULTY, 2
# 112 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_WarpToMap
	return


Eventscript_ShowInfos::
# 120 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_DifficultyInfos
# 121 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_NewGameMode
	return


Eventscript_WarpToMap::
# 125 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_Outro
# 126 "data/maps/BlankMap/scripts.pory"
	closemessage
# 127 "data/maps/BlankMap/scripts.pory"
	call EventScript_NewGameSetUp
# 128 "data/maps/BlankMap/scripts.pory"
	call EventScript_ResetAllBerries
# 129 "data/maps/BlankMap/scripts.pory"
	checkplayergender
# 130 "data/maps/BlankMap/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_WarpToMap_2
# 136 "data/maps/BlankMap/scripts.pory"
	warpwhitefade MAP_MANSIONS_GARDEN, 43, 27
Eventscript_WarpToMap_1:
# 138 "data/maps/BlankMap/scripts.pory"
	waitstate
	return

Eventscript_WarpToMap_2:
# 132 "data/maps/BlankMap/scripts.pory"
	warpwhitefade MAP_SUNSHINE_ORPHANAGE, 13, 18
	goto Eventscript_WarpToMap_1


SunshineMeadow_Eventscript_GameOver_Text_0:
# 19 "data/maps/BlankMap/scripts.pory"
	.string "Mitsuru Kirijo walked away without\n"
	.string "turning back.\p"
	.string "Her Vulpix trotted along her lonesome\n"
	.string "yet determined silhouette.\p"
	.string "The Inteleon gave you one last\n"
	.string "disappointed look before trailing\l"
	.string "behind its two companions.$"

SunshineMeadow_Eventscript_GameOver_Text_1:
# 24 "data/maps/BlankMap/scripts.pory"
	.string "You and Shinjiro continued your search\n"
	.string "for Miki to no avail.\p"
	.string "Not long after, both of you ended up\n"
	.string "getting captured by the men in black\l"
	.string "and suffered endless nightmares.\p"
	.string "Only darkness awaits...$"

SunshineTown_Eventscript_MitsuruOnFrame26_Text_0:
# 48 "data/maps/BlankMap/scripts.pory"
	.string "A few days later.$"

Route2_House_Eventscript_MitsuruOnFrame32Warp_Text_0:
# 59 "data/maps/BlankMap/scripts.pory"
	.string "The next morning...$"

Eventscript_NewGameMode_Text_0:
# 66 "data/maps/BlankMap/scripts.pory"
	.string "Casual$"

Eventscript_NewGameMode_Text_1:
# 67 "data/maps/BlankMap/scripts.pory"
	.string "Story$"

Eventscript_NewGameMode_Text_2:
# 68 "data/maps/BlankMap/scripts.pory"
	.string "Merciless$"

Eventscript_NewGameMode_Text_3:
# 69 "data/maps/BlankMap/scripts.pory"
	.string "Infos$"
