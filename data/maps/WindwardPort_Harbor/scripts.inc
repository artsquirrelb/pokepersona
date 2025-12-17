WindwardPort_Harbor_MapScripts::
# 2 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindwardPort_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WindwardPort_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_VISITED_WINDWARD_PORT
	return

