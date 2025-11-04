MansionsGarden_MapScripts::
# 2 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 0
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, MansionsGarden_Eventscript_OnFrame0
	.2byte 0


EventScript_NewGameSetUp::
# 13 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 100
# 14 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 100
# 15 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 100
# 16 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 18 "data/maps/MansionsGarden/scripts.pory"
	checkplayergender
# 19 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_NewGameSetUp_2
# 24 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_THU, 22, 30, 0
# 25 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
EventScript_NewGameSetUp_1:
# 27 "data/maps/MansionsGarden/scripts.pory"
	pausefakertc
	return

EventScript_NewGameSetUp_2:
# 20 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30, 0
# 21 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
	goto EventScript_NewGameSetUp_1


MansionsGarden_Eventscript_OnFrame0::
# 32 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SlowlyShowTheMap
	return


MansionsGarden_Eventscript_SlowlyShowTheMap::
# 38 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 39 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 40 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0
# 41 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 42 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0
# 44 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 45 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 46 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MITSURUS_ROOM2F, 15, 10
	return


# 40 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0:
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 40 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0:
# 42 "data/maps/MansionsGarden/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{CLEAR_TO 64}{COLOR GREEN}Level cap: 10$"
