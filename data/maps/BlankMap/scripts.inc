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
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineWoods_Eventscript_WarpBackToOrphanage
# 9 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 9, SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom
# 10 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 13, SunshineTown_PokemonCenter_Eventscript_Onframe13
# 11 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineOrphanage_Burning_Eventscript_OnFrame19
# 12 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 20, SunshineTownRiverbank_Eventscript_OnFrame20
# 13 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 22, SunshineTownRiverbank_Eventscript_OnFrame22
# 14 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 24, Route2_Eventscript_AkihikoOnFrame24
# 15 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 26, Route2_Eventscript_AkihikoOnFrame26
# 16 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 28, Route2_House_Eventscript_AkihikoOnFrame28
# 17 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 31, Route2_House_Eventscript_AkihikoOnFrame31
# 18 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 34, SunshineMeadow_Eventscript_AkihikoOnFrame34
# 19 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 36, SunshineMeadow_Eventscript_AkihikoOnFrame36
# 20 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38
# 21 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_Eventscript_AkihikoOnFrame42
# 23 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 4, MansionsGarden_Eventscript_Onframe4
# 24 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 7, SunshineMeadow_Eventscript_MitsuruOnframe7
# 25 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 9, Route2_House_Eventscript_MitsuruOnFrame9
# 26 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 26, SunshineTown_Eventscript_MitsuruOnFrame26
# 27 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 32, Route2_House_Eventscript_MitsuruOnFrame32Warp
	.2byte 0


SunshineWoods_Eventscript_WarpBackToOrphanage::
# 34 "data/maps/BlankMap/scripts.pory"
	lock
# 35 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0
# 36 "data/maps/BlankMap/scripts.pory"
	closemessage
# 37 "data/maps/BlankMap/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 0
# 38 "data/maps/BlankMap/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_MAIN_HALL, 12, 22
# 39 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 40 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom::
# 44 "data/maps/BlankMap/scripts.pory"
	lockall
# 45 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
# 46 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 47 "data/maps/BlankMap/scripts.pory"
	releaseall
	return


SunshineTown_PokemonCenter_Eventscript_Onframe13::
# 51 "data/maps/BlankMap/scripts.pory"
	lock
# 52 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0
# 53 "data/maps/BlankMap/scripts.pory"
	closemessage
# 54 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 14
# 55 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_POKEMON_CENTER, 11, 8
# 56 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 57 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_OnFrame19::
# 61 "data/maps/BlankMap/scripts.pory"
	lock
# 62 "data/maps/BlankMap/scripts.pory"
	delay 30
# 63 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 17, 5
# 64 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 65 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_OnFrame20::
# 69 "data/maps/BlankMap/scripts.pory"
	lock
# 70 "data/maps/BlankMap/scripts.pory"
	delay 30
# 71 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 21
# 72 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 17, 0
# 73 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineTownRiverbank_Eventscript_OnFrame22::
# 77 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_OnFrame22_Text_0
# 78 "data/maps/BlankMap/scripts.pory"
	closemessage
# 79 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 23
# 80 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_KUROSAWAS_HOUSE, 4, 4
	return


Route2_Eventscript_AkihikoOnFrame24::
# 85 "data/maps/BlankMap/scripts.pory"
	lock
# 86 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2, 37, 11
# 87 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 25
# 88 "data/maps/BlankMap/scripts.pory"
	release
	return


Route2_Eventscript_AkihikoOnFrame26::
# 92 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 27
# 93 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 94 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame28::
# 98 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 29
# 99 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 100 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame31::
# 104 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 32
# 105 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 106 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineMeadow_Eventscript_AkihikoOnFrame34::
# 110 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 35
# 111 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 8
	return


SunshineMeadow_Eventscript_AkihikoOnFrame36::
# 115 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 37
# 116 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame36_2
# 120 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_1
SunshineMeadow_Eventscript_AkihikoOnFrame36_1:
# 122 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 11
	return

SunshineMeadow_Eventscript_AkihikoOnFrame36_2:
# 117 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0
	goto SunshineMeadow_Eventscript_AkihikoOnFrame36_1


Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38::
# 126 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_2
# 130 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 39
# 131 "data/maps/BlankMap/scripts.pory"
	fwdtime 22, 30
# 132 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_Text_0
# 133 "data/maps/BlankMap/scripts.pory"
	closemessage
# 134 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 10
	return

Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_2:
# 127 "data/maps/BlankMap/scripts.pory"
	goto SunshineMeadow_Eventscript_GameOver
	end


Route2_Eventscript_AkihikoOnFrame42::
# 138 "data/maps/BlankMap/scripts.pory"
	fwdtime 6, 20
# 139 "data/maps/BlankMap/scripts.pory"
	fwdweekday WEEKDAY_MON
# 140 "data/maps/BlankMap/scripts.pory"
	delay 60
# 141 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_Eventscript_AkihikoOnFrame42_Text_0
# 143 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 10
	return


SunshineMeadow_Eventscript_GameOver::
# 147 "data/maps/BlankMap/scripts.pory"
	lock
# 148 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_0
# 151 "data/maps/BlankMap/scripts.pory"
	closemessage
# 152 "data/maps/BlankMap/scripts.pory"
	delay 30
# 153 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_1
# 156 "data/maps/BlankMap/scripts.pory"
	closemessage
# 157 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 158 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_GAME_OVER, 0, 5
# 159 "data/maps/BlankMap/scripts.pory"
	waitstate
# 160 "data/maps/BlankMap/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Onframe4::
# 165 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 5
# 166 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_MANSIONS_GARDEN, 43, 18
	return


SunshineMeadow_Eventscript_MitsuruOnframe7::
# 170 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 8
# 171 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 15, 15
	return


Route2_House_Eventscript_MitsuruOnFrame9::
# 175 "data/maps/BlankMap/scripts.pory"
	fwdtime 7, 50
# 176 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 10
# 177 "data/maps/BlankMap/scripts.pory"
	playse MUS_HEAL
# 178 "data/maps/BlankMap/scripts.pory"
	special HealPlayerParty
# 179 "data/maps/BlankMap/scripts.pory"
	delay 50
# 180 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 4
	return


SunshineTown_Eventscript_MitsuruOnFrame26::
# 184 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_OnFrame22_Text_0
# 185 "data/maps/BlankMap/scripts.pory"
	closemessage
# 186 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 187 "data/maps/BlankMap/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_MitsuruOnFrame32Warp::
# 191 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 33
# 192 "data/maps/BlankMap/scripts.pory"
	fwdtime 6, 20
# 193 "data/maps/BlankMap/scripts.pory"
	fwdweekday WEEKDAY_MON
# 194 "data/maps/BlankMap/scripts.pory"
	delay 60
# 195 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_Eventscript_AkihikoOnFrame42_Text_0
# 196 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 5
# 197 "data/maps/BlankMap/scripts.pory"
	waitstate
	return


Eventscript_NewGameMode::
# 201 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_WhatDifficulty
# 202 "data/maps/BlankMap/scripts.pory"
	dynmultipush Eventscript_NewGameMode_Text_0, 0
# 203 "data/maps/BlankMap/scripts.pory"
	dynmultipush Eventscript_NewGameMode_Text_1, 1
# 204 "data/maps/BlankMap/scripts.pory"
	dynmultipush Eventscript_NewGameMode_Text_2, 2
# 205 "data/maps/BlankMap/scripts.pory"
	dynmultipush Eventscript_NewGameMode_Text_3, 3
# 206 "data/maps/BlankMap/scripts.pory"
	dynmultistack 18, 4, TRUE, 4, FALSE, 0, NULL
# 207 "data/maps/BlankMap/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/BlankMap/scripts.pory"
	case 0, Eventscript_NewGameMode_2
# 210 "data/maps/BlankMap/scripts.pory"
	case 1, Eventscript_NewGameMode_3
# 211 "data/maps/BlankMap/scripts.pory"
	case 2, Eventscript_NewGameMode_4
# 212 "data/maps/BlankMap/scripts.pory"
	case 3, Eventscript_NewGameMode_5
	return

Eventscript_NewGameMode_2:
# 209 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_ChoosingCasual
	return

Eventscript_NewGameMode_3:
# 210 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_ChoosingStory
	return

Eventscript_NewGameMode_4:
# 211 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_ChoosingMerciless
	return

Eventscript_NewGameMode_5:
# 212 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_ShowInfos
	return


Eventscript_ChoosingCasual::
# 217 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_ChoosingCasual, MSGBOX_YESNO
# 218 "data/maps/BlankMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Eventscript_ChoosingCasual_1
# 225 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_NewGameMode
	return

Eventscript_ChoosingCasual_1:
# 220 "data/maps/BlankMap/scripts.pory"
	closemessage
# 221 "data/maps/BlankMap/scripts.pory"
	setvar VAR_DIFFICULTY, 0
# 222 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_WarpToMap
	return


Eventscript_ChoosingStory::
# 230 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_ChoosingStory, MSGBOX_YESNO
# 231 "data/maps/BlankMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Eventscript_ChoosingStory_1
# 238 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_NewGameMode
	return

Eventscript_ChoosingStory_1:
# 233 "data/maps/BlankMap/scripts.pory"
	closemessage
# 234 "data/maps/BlankMap/scripts.pory"
	setvar VAR_DIFFICULTY, 1
# 235 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_WarpToMap
	return


Eventscript_ChoosingMerciless::
# 243 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_ChoosingMerciless, MSGBOX_YESNO
# 244 "data/maps/BlankMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Eventscript_ChoosingMerciless_1
# 251 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_NewGameMode
	return

Eventscript_ChoosingMerciless_1:
# 246 "data/maps/BlankMap/scripts.pory"
	closemessage
# 247 "data/maps/BlankMap/scripts.pory"
	setvar VAR_DIFFICULTY, 2
# 248 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_WarpToMap
	return


Eventscript_ShowInfos::
# 256 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_DifficultyInfos
# 257 "data/maps/BlankMap/scripts.pory"
	goto Eventscript_NewGameMode
	return


Eventscript_WarpToMap::
# 261 "data/maps/BlankMap/scripts.pory"
	msgbox gText_NewGame_Outro
# 262 "data/maps/BlankMap/scripts.pory"
	closemessage
# 263 "data/maps/BlankMap/scripts.pory"
	call EventScript_NewGameSetUp
# 264 "data/maps/BlankMap/scripts.pory"
	call EventScript_ResetAllBerries
# 265 "data/maps/BlankMap/scripts.pory"
	checkplayergender
# 266 "data/maps/BlankMap/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_WarpToMap_2
# 272 "data/maps/BlankMap/scripts.pory"
	warpwhitefade MAP_MANSIONS_GARDEN, 43, 27
Eventscript_WarpToMap_1:
# 274 "data/maps/BlankMap/scripts.pory"
	waitstate
	return

Eventscript_WarpToMap_2:
# 268 "data/maps/BlankMap/scripts.pory"
	warpwhitefade MAP_SUNSHINE_ORPHANAGE, 13, 18
	goto Eventscript_WarpToMap_1


SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0:
# 35 "data/maps/BlankMap/scripts.pory"
	.string "{DESTROY_MUGSHOT} Akihiko picked up the Pawmi and hurried\n"
	.string "back to the orphanage.$"

SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0:
# 52 "data/maps/BlankMap/scripts.pory"
	.string "10 minutes later...$"

SunshineTownRiverbank_Eventscript_OnFrame22_Text_0:
# 77 "data/maps/BlankMap/scripts.pory"
	.string "A few days later.$"

SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0:
# 117 "data/maps/BlankMap/scripts.pory"
	.string "Shinjiro didn't stand the slightest\n"
	.string "chance and was completely wiped out by\l"
	.string "Mitsuru.$"

SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_1:
# 120 "data/maps/BlankMap/scripts.pory"
	.string "Shinjiro managed to knock out one of\n"
	.string "Mitsuru's Pokémon before getting wiped\l"
	.string "out by her Vulpix.$"

Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_Text_0:
# 132 "data/maps/BlankMap/scripts.pory"
	.string "Later that night...$"

Route2_Eventscript_AkihikoOnFrame42_Text_0:
# 141 "data/maps/BlankMap/scripts.pory"
	.string "The next morning...$"

SunshineMeadow_Eventscript_GameOver_Text_0:
# 148 "data/maps/BlankMap/scripts.pory"
	.string "Mitsuru Kirijo walked away without\n"
	.string "turning back.\p"
	.string "Her Vulpix trotted along her lonesome\n"
	.string "yet determined silhouette.\p"
	.string "The Inteleon gave you one last\n"
	.string "disappointed look before trailing\l"
	.string "behind its two companions.$"

SunshineMeadow_Eventscript_GameOver_Text_1:
# 153 "data/maps/BlankMap/scripts.pory"
	.string "You and Shinjiro continued your search\n"
	.string "for Miki to no avail.\p"
	.string "Not long after, both of you ended up\n"
	.string "getting captured by the men in black\l"
	.string "and suffered endless nightmares.\p"
	.string "Only darkness awaits...$"

Eventscript_NewGameMode_Text_0:
# 202 "data/maps/BlankMap/scripts.pory"
	.string "Casual$"

Eventscript_NewGameMode_Text_1:
# 203 "data/maps/BlankMap/scripts.pory"
	.string "Story$"

Eventscript_NewGameMode_Text_2:
# 204 "data/maps/BlankMap/scripts.pory"
	.string "Merciless$"

Eventscript_NewGameMode_Text_3:
# 205 "data/maps/BlankMap/scripts.pory"
	.string "Infos$"
