BlankMap_MapScripts::
# 2 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BlankMap/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_gt BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 3 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineWoods_Eventscript_WarpBackToOrphanage
# 7 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 9, SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom
# 8 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 13, SunshineTown_PokemonCenter_Eventscript_Onframe13
	.2byte 0


SunshineWoods_Eventscript_WarpBackToOrphanage::
# 13 "data/maps/BlankMap/scripts.pory"
	lock
# 14 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0
# 15 "data/maps/BlankMap/scripts.pory"
	closemessage
# 16 "data/maps/BlankMap/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 0
# 17 "data/maps/BlankMap/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_MAIN_HALL, 12, 22
# 18 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 19 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom::
# 23 "data/maps/BlankMap/scripts.pory"
	lockall
# 24 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
# 25 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 26 "data/maps/BlankMap/scripts.pory"
	releaseall
	return


SunshineTown_PokemonCenter_Eventscript_Onframe13::
# 30 "data/maps/BlankMap/scripts.pory"
	lock
# 31 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0
# 32 "data/maps/BlankMap/scripts.pory"
	closemessage
# 33 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 14
# 34 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_POKEMON_CENTER, 11, 8
# 35 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 36 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0:
# 14 "data/maps/BlankMap/scripts.pory"
	.string "{DESTROY_MUGSHOT} Akihiko picked up the Pawmi and hurried\n"
	.string "back to the orphanage.$"

SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0:
# 31 "data/maps/BlankMap/scripts.pory"
	.string "10 minutes later...$"
