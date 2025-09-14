BlankMap_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_gt BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_SPAWN_INVISIBLE
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineWoods_Eventscript_WarpBackToOrphanage
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 9, SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom
	.2byte 0


SunshineWoods_Eventscript_WarpBackToOrphanage::
	lock
	msgbox SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK, 0
	warp MAP_SUNSHINE_ORPHANAGE_MAIN_HALL, 12, 22
	clearflag FLAG_SPAWN_INVISIBLE
	release
	return


SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom::
	lockall
	call playhealbeforewarp
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
	clearflag FLAG_SPAWN_INVISIBLE
	releaseall
	return


playhealbeforewarp::
	lockall
	playse MUS_HEAL
	waitse
	releaseall
	return
	end

SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0:
	.string "{DESTROY_MUGSHOT} Akihiko picked up the Pawmi and hurried\n"
	.string "back to the orphanage.$"
	