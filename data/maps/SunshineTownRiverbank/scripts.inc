SunshineTownRiverbank_MapScripts::
# 2 "data/maps/SunshineTownRiverbank/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 3 "data/maps/SunshineTownRiverbank/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineTownRiverbank_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SunshineTownRiverbank/scripts.pory"
	playbgm MUS_HELP, TRUE
	return

