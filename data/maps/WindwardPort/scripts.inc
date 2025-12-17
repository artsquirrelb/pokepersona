WindwardPort_MapScripts::
# 2 "data/maps/WindwardPort/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindwardPort_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WindwardPort_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WindwardPort/scripts.pory"
	setflag FLAG_VISITED_WINDWARD_PORT
	return


WindwardPort_Eventscript_SailorOnGuard::
# 9 "data/maps/WindwardPort/scripts.pory"
	lock
# 10 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 11 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_SailorOnGuard_Text_0
# 12 "data/maps/WindwardPort/scripts.pory"
	warp MAP_CORALPORT, 4, 20
# 13 "data/maps/WindwardPort/scripts.pory"
	waitstate
	return


WindwardPort_Eventscript_SailorOnGuard_Text_0:
# 11 "data/maps/WindwardPort/scripts.pory"
	.string "Warp back to Coralport.$"
