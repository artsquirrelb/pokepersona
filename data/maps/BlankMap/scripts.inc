BlankMap_MapScripts::
# 2 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BlankMap/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_gt BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineWoods_Eventscript_WarpBackToOrphanage
# 8 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 9, SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom
# 9 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 13, SunshineTown_PokemonCenter_Eventscript_Onframe13
# 10 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineOrphanage_Burning_Eventscript_OnFrame19
# 11 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 20, SunshineTownRiverbank_Eventscript_OnFrame20
# 12 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 22, SunshineTownRiverbank_Eventscript_OnFrame22
# 13 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 24, Route2_Eventscript_AkihikoOnFrame24
# 14 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 26, Route2_Eventscript_AkihikoOnFrame26
# 15 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 28, Route2_House_Eventscript_AkihikoOnFrame28
# 16 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 31, Route2_House_Eventscript_AkihikoOnFrame31
# 17 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 34, SunshineMeadow_Eventscript_AkihikoOnFrame34
# 18 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 36, SunshineMeadow_Eventscript_AkihikoOnFrame36
	.2byte 0


SunshineWoods_Eventscript_WarpBackToOrphanage::
# 24 "data/maps/BlankMap/scripts.pory"
	lock
# 25 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0
# 26 "data/maps/BlankMap/scripts.pory"
	closemessage
# 27 "data/maps/BlankMap/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 0
# 28 "data/maps/BlankMap/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_MAIN_HALL, 12, 22
# 29 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 30 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom::
# 34 "data/maps/BlankMap/scripts.pory"
	lockall
# 35 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
# 36 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 37 "data/maps/BlankMap/scripts.pory"
	releaseall
	return


SunshineTown_PokemonCenter_Eventscript_Onframe13::
# 41 "data/maps/BlankMap/scripts.pory"
	lock
# 42 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0
# 43 "data/maps/BlankMap/scripts.pory"
	closemessage
# 44 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 14
# 45 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_POKEMON_CENTER, 11, 8
# 46 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 47 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_OnFrame19::
# 51 "data/maps/BlankMap/scripts.pory"
	lock
# 52 "data/maps/BlankMap/scripts.pory"
	delay 30
# 53 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 13, 5
# 54 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 55 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_OnFrame20::
# 59 "data/maps/BlankMap/scripts.pory"
	lock
# 60 "data/maps/BlankMap/scripts.pory"
	delay 30
# 61 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 21
# 62 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 13, 0
# 63 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineTownRiverbank_Eventscript_OnFrame22::
# 67 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_OnFrame22_Text_0
# 68 "data/maps/BlankMap/scripts.pory"
	closemessage
# 69 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 23
# 70 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_KUROSAWAS_HOUSE, 4, 4
# 71 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_Eventscript_AkihikoOnFrame24::
# 75 "data/maps/BlankMap/scripts.pory"
	lock
# 76 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2, 35, 11
# 77 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 25
# 78 "data/maps/BlankMap/scripts.pory"
	release
	return


Route2_Eventscript_AkihikoOnFrame26::
# 82 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 27
# 83 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 84 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame28::
# 88 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 29
# 89 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 90 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame31::
# 94 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 32
# 95 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 96 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineMeadow_Eventscript_AkihikoOnFrame34::
# 100 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 35
# 101 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 8
	return


SunshineMeadow_Eventscript_AkihikoOnFrame36::
# 105 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 37
# 106 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0
# 107 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 11
	return


SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0:
# 25 "data/maps/BlankMap/scripts.pory"
	.string "{DESTROY_MUGSHOT} Akihiko picked up the Pawmi and hurried\n"
	.string "back to the orphanage.$"

SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0:
# 42 "data/maps/BlankMap/scripts.pory"
	.string "10 minutes later...$"

SunshineTownRiverbank_Eventscript_OnFrame22_Text_0:
# 67 "data/maps/BlankMap/scripts.pory"
	.string "A few days later.$"

SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0:
# 106 "data/maps/BlankMap/scripts.pory"
	.string "Shinjiro managed to knock out one of\n"
	.string "Mitsuru's Pokémon before getting wiped\l"
	.string "out by her Vulpix.$"
