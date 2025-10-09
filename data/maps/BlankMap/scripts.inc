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
	.2byte 0


SunshineWoods_Eventscript_WarpBackToOrphanage::
# 17 "data/maps/BlankMap/scripts.pory"
	lock
# 18 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0
# 19 "data/maps/BlankMap/scripts.pory"
	closemessage
# 20 "data/maps/BlankMap/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 0
# 21 "data/maps/BlankMap/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_MAIN_HALL, 12, 22
# 22 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 23 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom::
# 27 "data/maps/BlankMap/scripts.pory"
	lockall
# 28 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
# 29 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 30 "data/maps/BlankMap/scripts.pory"
	releaseall
	return


SunshineTown_PokemonCenter_Eventscript_Onframe13::
# 34 "data/maps/BlankMap/scripts.pory"
	lock
# 35 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0
# 36 "data/maps/BlankMap/scripts.pory"
	closemessage
# 37 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 14
# 38 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_POKEMON_CENTER, 11, 8
# 39 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 40 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_OnFrame19::
# 44 "data/maps/BlankMap/scripts.pory"
	lock
# 45 "data/maps/BlankMap/scripts.pory"
	delay 30
# 46 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 13, 5
# 47 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 48 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_OnFrame20::
# 52 "data/maps/BlankMap/scripts.pory"
	lock
# 53 "data/maps/BlankMap/scripts.pory"
	delay 30
# 54 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 21
# 55 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 13, 0
# 56 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineTownRiverbank_Eventscript_OnFrame22::
# 60 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_OnFrame22_Text_0
# 61 "data/maps/BlankMap/scripts.pory"
	closemessage
# 62 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 23
# 63 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_KUROSAWAS_HOUSE, 4, 4
# 64 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0:
# 18 "data/maps/BlankMap/scripts.pory"
	.string "{DESTROY_MUGSHOT} Akihiko picked up the Pawmi and hurried\n"
	.string "back to the orphanage.$"

SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0:
# 35 "data/maps/BlankMap/scripts.pory"
	.string "10 minutes later...$"

SunshineTownRiverbank_Eventscript_OnFrame22_Text_0:
# 60 "data/maps/BlankMap/scripts.pory"
	.string "A few days later.$"
