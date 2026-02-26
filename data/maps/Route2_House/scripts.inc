Route2_House_MapScripts::
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD
# 22 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 124 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 8, 0x8E7, TRUE
# 5 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 9, 0x8EF, TRUE
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/Route2_House/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE2_HOUSE
# 24 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 27 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_MEETING_M
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 32 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_MEETING_M
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 35 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_M_OFFERS_BATTLE
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 39 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_M_OFFERS_BATTLE
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 43 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_M_EXPLAINS_OBJECTIVES
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 52 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 61 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_1ST_MORNING
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 65 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_SHOW_MAP
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 72 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_45
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_44:
# 79 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_CALLING_TKHR
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_48
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_47:
# 86 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_EXPLAIN_OBJECTIVE
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_51
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_50:
# 89 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_SAVED_AKSJ
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_54
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_53:
# 94 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_EXPLAIN_OBJECTIVE
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_57
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_56:
# 106 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_1ST_MORNING
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_60
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_59:
# 113 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_SHOW_MAP
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_62
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 25 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 28 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 29 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
# 30 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 33 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 32 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_SAVED_AKSJ
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 36 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 37 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 1, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 40 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 41 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 39 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_M_EXPLAINS_OBJECTIVES
	goto_if_lt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 44 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 45 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 46 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 47 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 48 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 49 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 50 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 53 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 54 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 55 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 56 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 4, 7
# 58 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 59 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 11, 6
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 62 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 63 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_26

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 69 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 70 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 66 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_CALLING_TKHR
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_36
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 65 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_31
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_35:
# 67 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_EXPLAIN_OBJECTIVE
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_40
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_36:
# 66 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_SAVED_AKSJ
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_35
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_39:
# 68 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_SHOW_MAP
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_40:
# 67 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_1ST_MORNING
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_39
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_45:
# 73 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 74 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 3, 8
# 75 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 76 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 7, 13
# 77 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_44

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_48:
# 80 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 81 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 7, 4
# 82 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 83 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 84 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_47

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_51:
# 87 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_5
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_50

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_54:
# 91 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 92 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_53

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_57:
# 95 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 96 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 97 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 98 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 5, 7
# 99 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 100 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 101 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 102 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 3
# 103 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 104 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_56

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_60:
# 108 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 109 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 110 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 3, 10
# 111 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_59

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_62:
# 115 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 116 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 117 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 118 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 119 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 5, 7
# 120 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_MEETING_M, Route2_House_Eventscript_HideShinjiro
# 10 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_M_OFFERS_BATTLE, Route2_House_Eventscript_AkihikoOnWarp32
# 11 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_M_EXPLAINS_OBJECTIVES, Route2_House_Eventscript_AkihikoOnWarp38
# 12 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP, Route2_House_Eventscript_AkihikoOnWarp39
# 13 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_1ST_MORNING, Route2_House_Eventscript_AkihikoOnWarp42
# 15 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_TOO_LATE_NIGHT, Route2_House_Eventscript_MitsuruOnWarp8
# 16 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_REST_FOR_THE_NIGHT, Route2_House_Eventscript_MitsuruOnWarp10
# 17 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS, Route2_House_Eventscript_MitsuruOnWarp22
# 18 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_CALLING_TKHR, Route2_House_Eventscript_MitsuruOnWarp26
# 19 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_SAVED_AKSJ, Route2_House_Eventscript_HideShinjiro
	.2byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 125 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_MEETING_M, Route2_House_Eventscript_AkihikoOnFrame27
# 126 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_M_OFFERS_BATTLE, Route2_House_Eventscript_AkihikoOnFrame32
# 127 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_M_EXPLAINS_OBJECTIVES, Route2_House_Eventscript_AkihikoOnFrame38
# 128 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP, Route2_House_Eventscript_AkihikoOnFrame39
# 129 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_1ST_MORNING, Route2_House_Eventscript_AkihikoOnFrame42
# 130 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_SHOW_MAP, Route2_House_Eventscript_AkihikoOnFrame43
# 132 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_TOO_LATE_NIGHT, Route2_House_Eventscript_MitsuruOnFrame8
# 133 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_REST_FOR_THE_NIGHT, Route2_House_Eventscript_MitsuruOnFrame10
# 134 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS, Route2_House_Eventscript_MitsuruOnFrame22
# 135 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_CALLING_TKHR, Route2_House_Eventscript_MitsuruOnFrame26
# 136 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_SAVED_AKSJ, Route2_House_Eventscript_MitsuruOnFrame28
# 137 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_EXPLAIN_OBJECTIVE, Route2_House_Eventscript_MitsuruOnFrame32
# 138 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_1ST_MORNING, Route2_House_Eventscript_MitsuruOnFrame33
# 139 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_SHOW_MAP, Route2_House_Eventscript_MitsuruOnFrame34
# 141 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_WINDWARD_HARBOR_GHOST_BOY, 44, Route2_House_Eventscript_GhostBoyMadPostQuest
	.2byte 0


Route2_House_Eventscript_MitsuruOnWarp26::
# 146 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_HideShinjiro::
# 150 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 154 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 155 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 156 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 160 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnWarp39::
# 163 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
# 164 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnWarp42::
# 167 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_MitsuruOnWarp10::
# 171 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


Route2_House_Eventscript_MitsuruOnWarp22::
# 175 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 176 "data/maps/Route2_House/scripts.pory"
	applymovement 4, invisible
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 180 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 184 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_MitsuruOnFrame8::
# 188 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruRestForTheNight
	return


Route2_House_Eventscript_MitsuruOnFrame22::
# 192 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji
	return


Route2_House_Eventscript_MitsuruOnFrame26::
# 196 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 197 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruCallingTakeharuForHelp
	return


Route2_House_Eventscript_MitsuruOnFrame28::
# 201 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame32::
# 205 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame33::
# 209 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorningMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame34::
# 213 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 217 "data/maps/Route2_House/scripts.pory"
	lock
# 218 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 219 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
# 220 "data/maps/Route2_House/scripts.pory"
	delay 20
# 221 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 222 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route2_House/scripts.pory"
	delay 30
# 224 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 225 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 226 "data/maps/Route2_House/scripts.pory"
	closemessage
# 227 "data/maps/Route2_House/scripts.pory"
	delay 30
# 228 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 229 "data/maps/Route2_House/scripts.pory"
	delay 4
# 230 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 231 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route2_House/scripts.pory"
	delay 20
# 233 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 234 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 235 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 237 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 238 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 239 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 240 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 241 "data/maps/Route2_House/scripts.pory"
	delay 4
# 242 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 243 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 244 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 245 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route2_House/scripts.pory"
	delay 30
# 247 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 248 "data/maps/Route2_House/scripts.pory"
	delay 8
# 249 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 250 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route2_House/scripts.pory"
	removeobject 3
# 252 "data/maps/Route2_House/scripts.pory"
	delay 1
# 253 "data/maps/Route2_House/scripts.pory"
	removeobject 2
# 254 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
# 255 "data/maps/Route2_House/scripts.pory"
	delay 30
# 256 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 257 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 260 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 261 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 264 "data/maps/Route2_House/scripts.pory"
	closemessage
# 265 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 266 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 270 "data/maps/Route2_House/scripts.pory"
	lock
# 271 "data/maps/Route2_House/scripts.pory"
	delay 30
# 272 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 275 "data/maps/Route2_House/scripts.pory"
	closemessage
# 276 "data/maps/Route2_House/scripts.pory"
	delay 30
# 277 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 278 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 279 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 280 "data/maps/Route2_House/scripts.pory"
	closemessage
# 281 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 282 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 286 "data/maps/Route2_House/scripts.pory"
	closemessage
# 287 "data/maps/Route2_House/scripts.pory"
	delay 20
# 288 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 289 "data/maps/Route2_House/scripts.pory"
	delay 8
# 290 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 291 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 305 "data/maps/Route2_House/scripts.pory"
	closemessage
# 306 "data/maps/Route2_House/scripts.pory"
	delay 20
# 307 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 308 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 311 "data/maps/Route2_House/scripts.pory"
	closemessage
# 312 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 313 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 314 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 316 "data/maps/Route2_House/scripts.pory"
	closemessage
# 317 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 318 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 319 "data/maps/Route2_House/scripts.pory"
	delay 8
# 320 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 321 "data/maps/Route2_House/scripts.pory"
	closemessage
# 322 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 323 "data/maps/Route2_House/scripts.pory"
	waitse
# 324 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 325 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 326 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 327 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 334 "data/maps/Route2_House/scripts.pory"
	closemessage
# 335 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 336 "data/maps/Route2_House/scripts.pory"
	delay 16
# 337 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 338 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 339 "data/maps/Route2_House/scripts.pory"
	delay 60
# 340 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 341 "data/maps/Route2_House/scripts.pory"
	delay 16
# 342 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 343 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 348 "data/maps/Route2_House/scripts.pory"
	closemessage
# 349 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 350 "data/maps/Route2_House/scripts.pory"
	waitse
# 351 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 352 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 353 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 354 "data/maps/Route2_House/scripts.pory"
	closemessage
# 355 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 356 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 357 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 360 "data/maps/Route2_House/scripts.pory"
	closemessage
# 361 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 362 "data/maps/Route2_House/scripts.pory"
	delay 8
# 363 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 364 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 365 "data/maps/Route2_House/scripts.pory"
	delay 60
# 366 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 367 "data/maps/Route2_House/scripts.pory"
	closemessage
# 368 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 369 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 371 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 20
# 372 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_S_DOUBTING_M
# 373 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 374 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


# 377 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 378 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 380 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 381 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 381 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 381 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 381 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 384 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 385 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 386 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 389 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 390 "data/maps/Route2_House/scripts.pory"
	set_visible
# 391 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 394 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 395 "data/maps/Route2_House/scripts.pory"
	face_left
# 396 "data/maps/Route2_House/scripts.pory"
	delay_16
# 397 "data/maps/Route2_House/scripts.pory"
	delay_16
# 398 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 399 "data/maps/Route2_House/scripts.pory"
	delay_16
# 400 "data/maps/Route2_House/scripts.pory"
	face_right
# 401 "data/maps/Route2_House/scripts.pory"
	delay_16
# 402 "data/maps/Route2_House/scripts.pory"
	delay_16
# 403 "data/maps/Route2_House/scripts.pory"
	delay_16
# 404 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 408 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 409 "data/maps/Route2_House/scripts.pory"
	face_right
# 410 "data/maps/Route2_House/scripts.pory"
	delay_16
# 411 "data/maps/Route2_House/scripts.pory"
	delay_16
# 412 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 413 "data/maps/Route2_House/scripts.pory"
	face_up
# 414 "data/maps/Route2_House/scripts.pory"
	delay_16
# 415 "data/maps/Route2_House/scripts.pory"
	delay_16
# 416 "data/maps/Route2_House/scripts.pory"
	face_left
# 417 "data/maps/Route2_House/scripts.pory"
	delay_16
# 418 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 421 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 422 "data/maps/Route2_House/scripts.pory"
	walk_left
# 423 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 426 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 427 "data/maps/Route2_House/scripts.pory"
	walk_right
# 428 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 431 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 432 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 433 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 436 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 437 "data/maps/Route2_House/scripts.pory"
	walk_left
# 438 "data/maps/Route2_House/scripts.pory"
	walk_up
# 439 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 443 "data/maps/Route2_House/scripts.pory"
	lock
# 444 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 445 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_S_DOUBTING_M
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 451 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_NEGO_W_M
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 461 "data/maps/Route2_House/scripts.pory"
	release
	return

Route2_House_Eventscript_Mitsuru_2:
# 446 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 449 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 452 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 453 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 455 "data/maps/Route2_House/scripts.pory"
	closemessage
# 456 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_M_OFFERS_BATTLE
# 457 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 458 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 459 "data/maps/Route2_House/scripts.pory"
	waitstate
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 465 "data/maps/Route2_House/scripts.pory"
	lock
# 466 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 467 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 479 "data/maps/Route2_House/scripts.pory"
	closemessage
# 480 "data/maps/Route2_House/scripts.pory"
	specialvar VAR_0x8000, GetPlayerFacingDirection
# 481 "data/maps/Route2_House/scripts.pory"
	switch VAR_0x8000
# 483 "data/maps/Route2_House/scripts.pory"
	case DIR_NORTH, Route2_House_Eventscript_Shinjiro_3
# 484 "data/maps/Route2_House/scripts.pory"
	case DIR_EAST, Route2_House_Eventscript_Shinjiro_4
Route2_House_Eventscript_Shinjiro_1:
# 486 "data/maps/Route2_House/scripts.pory"
	applymove 6, ShinjiroJoinsAndVanish
# 487 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_NEGO_W_M
# 488 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Shinjiro_3:
# 483 "data/maps/Route2_House/scripts.pory"
	applymove 6, walkdown
	goto Route2_House_Eventscript_Shinjiro_1

Route2_House_Eventscript_Shinjiro_4:
# 484 "data/maps/Route2_House/scripts.pory"
	applymove 6, walkleft
	goto Route2_House_Eventscript_Shinjiro_1


# 492 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 493 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 494 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 495 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 495 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 499 "data/maps/Route2_House/scripts.pory"
	lock
# 500 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 501 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 502 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 503 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 504 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 506 "data/maps/Route2_House/scripts.pory"
	closemessage
# 507 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_Inteleon::
# 512 "data/maps/Route2_House/scripts.pory"
	lock
# 513 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 514 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 516 "data/maps/Route2_House/scripts.pory"
	closemessage
# 517 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 518 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_A_Trigger::
# 523 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_S_DOUBTING_M
	goto_if_eq Route2_House_Eventscript_A_Trigger_2
Route2_House_Eventscript_A_Trigger_1:
# 525 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_NEGO_W_M
	goto_if_eq Route2_House_Eventscript_A_Trigger_5
Route2_House_Eventscript_A_Trigger_4:
# 527 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_A_Trigger_2:
# 524 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MustTalkToShinjiro
	goto Route2_House_Eventscript_A_Trigger_1

Route2_House_Eventscript_A_Trigger_5:
# 526 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MustTalkToMitsuru
	goto Route2_House_Eventscript_A_Trigger_4


Route2_House_Eventscript_MustTalkToShinjiro::
# 532 "data/maps/Route2_House/scripts.pory"
	lock
# 533 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 534 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 535 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 536 "data/maps/Route2_House/scripts.pory"
	closemessage
# 537 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToMitsuru::
# 542 "data/maps/Route2_House/scripts.pory"
	lock
# 543 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 544 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 545 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 546 "data/maps/Route2_House/scripts.pory"
	closemessage
# 547 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 552 "data/maps/Route2_House/scripts.pory"
	lock
# 553 "data/maps/Route2_House/scripts.pory"
	delay 30
# 554 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 556 "data/maps/Route2_House/scripts.pory"
	closemessage
# 557 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 558 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 559 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 569 "data/maps/Route2_House/scripts.pory"
	closemessage
# 570 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 571 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 572 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 573 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 574 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 575 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 579 "data/maps/Route2_House/scripts.pory"
	closemessage
# 580 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 581 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 582 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 583 "data/maps/Route2_House/scripts.pory"
	closemessage
# 584 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 585 "data/maps/Route2_House/scripts.pory"
	waitse
# 586 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 588 "data/maps/Route2_House/scripts.pory"
	closemessage
# 589 "data/maps/Route2_House/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 590 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_SHARE
# 591 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_EXP_SHARE
# 592 "data/maps/Route2_House/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_2
Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_1:
# 599 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 600 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, VAR_0x800A
# 601 "data/maps/Route2_House/scripts.pory"
	additem ITEM_GREAT_BALL, VAR_0x800B
# 602 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 603 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800A, 0
# 604 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800B, 0
# 605 "data/maps/Route2_House/scripts.pory"
	delay 30
# 606 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 607 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 608 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 611 "data/maps/Route2_House/scripts.pory"
	closemessage
# 612 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 613 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 614 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 617 "data/maps/Route2_House/scripts.pory"
	closemessage
# 618 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 619 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 620 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 621 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 622 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 623 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 624 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 625 "data/maps/Route2_House/scripts.pory"
	delay 16
# 626 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 627 "data/maps/Route2_House/scripts.pory"
	delay 4
# 628 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 629 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 630 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 631 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 632 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 633 "data/maps/Route2_House/scripts.pory"
	waitse
# 634 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 635 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 636 "data/maps/Route2_House/scripts.pory"
	waitse
# 637 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 638 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 639 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 640 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 641 "data/maps/Route2_House/scripts.pory"
	delay 30
# 642 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 645 "data/maps/Route2_House/scripts.pory"
	closemessage
# 646 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 647 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 648 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 649 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 650 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 651 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 652 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 653 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 654 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_AS_LEAVING_R2_HOUSE
# 655 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 656 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 657 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 658 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
# 659 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_2:
# 593 "data/maps/Route2_House/scripts.pory"
	call EventScript_ShowHelpPokedex
# 594 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 595 "data/maps/Route2_House/scripts.pory"
	special SetUnlockedPokedexFlags
# 596 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 597 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_1


# 663 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 664 "data/maps/Route2_House/scripts.pory"
	walk_right
# 665 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 668 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 669 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 670 "data/maps/Route2_House/scripts.pory"
	walk_up
# 671 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 673 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 674 "data/maps/Route2_House/scripts.pory"
	walk_left
# 674 "data/maps/Route2_House/scripts.pory"
	walk_left
# 675 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 677 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 678 "data/maps/Route2_House/scripts.pory"
	walk_right
# 679 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 681 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 682 "data/maps/Route2_House/scripts.pory"
	walk_down
# 682 "data/maps/Route2_House/scripts.pory"
	walk_down
# 682 "data/maps/Route2_House/scripts.pory"
	walk_down
# 682 "data/maps/Route2_House/scripts.pory"
	walk_down
# 682 "data/maps/Route2_House/scripts.pory"
	walk_down
# 683 "data/maps/Route2_House/scripts.pory"
	walk_right
# 683 "data/maps/Route2_House/scripts.pory"
	walk_right
# 684 "data/maps/Route2_House/scripts.pory"
	walk_down
# 684 "data/maps/Route2_House/scripts.pory"
	walk_down
# 685 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 687 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 688 "data/maps/Route2_House/scripts.pory"
	walk_down
# 688 "data/maps/Route2_House/scripts.pory"
	walk_down
# 688 "data/maps/Route2_House/scripts.pory"
	walk_down
# 689 "data/maps/Route2_House/scripts.pory"
	walk_right
# 689 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 692 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 693 "data/maps/Route2_House/scripts.pory"
	walk_right
# 693 "data/maps/Route2_House/scripts.pory"
	walk_right
# 693 "data/maps/Route2_House/scripts.pory"
	walk_right
# 693 "data/maps/Route2_House/scripts.pory"
	walk_right
# 694 "data/maps/Route2_House/scripts.pory"
	walk_down
# 694 "data/maps/Route2_House/scripts.pory"
	walk_down
# 694 "data/maps/Route2_House/scripts.pory"
	walk_down
# 695 "data/maps/Route2_House/scripts.pory"
	walk_right
# 695 "data/maps/Route2_House/scripts.pory"
	walk_right
# 696 "data/maps/Route2_House/scripts.pory"
	walk_down
# 697 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 700 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 701 "data/maps/Route2_House/scripts.pory"
	walk_down
# 702 "data/maps/Route2_House/scripts.pory"
	walk_right
# 702 "data/maps/Route2_House/scripts.pory"
	walk_right
# 702 "data/maps/Route2_House/scripts.pory"
	walk_right
# 702 "data/maps/Route2_House/scripts.pory"
	walk_right
# 703 "data/maps/Route2_House/scripts.pory"
	walk_down
# 703 "data/maps/Route2_House/scripts.pory"
	walk_down
# 703 "data/maps/Route2_House/scripts.pory"
	walk_down
# 704 "data/maps/Route2_House/scripts.pory"
	walk_right
# 704 "data/maps/Route2_House/scripts.pory"
	walk_right
# 705 "data/maps/Route2_House/scripts.pory"
	walk_down
# 706 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 709 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 710 "data/maps/Route2_House/scripts.pory"
	walk_up
# 710 "data/maps/Route2_House/scripts.pory"
	walk_up
# 710 "data/maps/Route2_House/scripts.pory"
	walk_up
# 711 "data/maps/Route2_House/scripts.pory"
	walk_left
# 711 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 714 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 715 "data/maps/Route2_House/scripts.pory"
	walk_left
# 715 "data/maps/Route2_House/scripts.pory"
	walk_left
# 716 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 720 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 724 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 725 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 726 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 727 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 728 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 729 "data/maps/Route2_House/scripts.pory"
	delay 8
# 730 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 731 "data/maps/Route2_House/scripts.pory"
	delay 60
# 732 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 741 "data/maps/Route2_House/scripts.pory"
	closemessage
# 742 "data/maps/Route2_House/scripts.pory"
	delay 50
# 743 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 744 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 745 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 761 "data/maps/Route2_House/scripts.pory"
	closemessage
# 762 "data/maps/Route2_House/scripts.pory"
	delay 40
# 763 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 766 "data/maps/Route2_House/scripts.pory"
	closemessage
# 767 "data/maps/Route2_House/scripts.pory"
	delay 30
# 768 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 769 "data/maps/Route2_House/scripts.pory"
	delay 10
# 770 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 771 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 772 "data/maps/Route2_House/scripts.pory"
	delay 60
# 773 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 780 "data/maps/Route2_House/scripts.pory"
	closemessage
# 781 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 782 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 783 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 784 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 785 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 786 "data/maps/Route2_House/scripts.pory"
	delay 90
# 787 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 788 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 789 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 790 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 791 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 792 "data/maps/Route2_House/scripts.pory"
	delay 60
# 793 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 796 "data/maps/Route2_House/scripts.pory"
	closemessage
# 797 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 800 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 801 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 803 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 804 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 804 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 804 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 805 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 805 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 806 "data/maps/Route2_House/scripts.pory"
	walk_up
# 806 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 809 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 810 "data/maps/Route2_House/scripts.pory"
	walk_up
# 810 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 813 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 814 "data/maps/Route2_House/scripts.pory"
	walk_down
# 814 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 818 "data/maps/Route2_House/scripts.pory"
	delay 60
# 819 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 820 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 821 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 823 "data/maps/Route2_House/scripts.pory"
	closemessage
# 824 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 825 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 826 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 832 "data/maps/Route2_House/scripts.pory"
	closemessage
# 833 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 834 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 835 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 836 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 837 "data/maps/Route2_House/scripts.pory"
	closemessage
# 838 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 839 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 840 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 841 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 843 "data/maps/Route2_House/scripts.pory"
	closemessage
# 844 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 845 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 846 "data/maps/Route2_House/scripts.pory"
	delay 10
# 847 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 848 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 849 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 850 "data/maps/Route2_House/scripts.pory"
	lock
# 851 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 852 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 853 "data/maps/Route2_House/scripts.pory"
	release
# 854 "data/maps/Route2_House/scripts.pory"
	delay 30
# 855 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 856 "data/maps/Route2_House/scripts.pory"
	delay 10
# 857 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 858 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 859 "data/maps/Route2_House/scripts.pory"
	lock
# 860 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 861 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 862 "data/maps/Route2_House/scripts.pory"
	release
# 863 "data/maps/Route2_House/scripts.pory"
	delay 30
# 864 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 865 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 866 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 867 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 868 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 869 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 870 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 871 "data/maps/Route2_House/scripts.pory"
	closemessage
# 872 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 873 "data/maps/Route2_House/scripts.pory"
	delay 10
# 874 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 875 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 876 "data/maps/Route2_House/scripts.pory"
	delay 60
# 877 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 878 "data/maps/Route2_House/scripts.pory"
	closemessage
# 879 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 880 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 881 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 882 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 883 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 885 "data/maps/Route2_House/scripts.pory"
	closemessage
# 886 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 887 "data/maps/Route2_House/scripts.pory"
	delay 30
# 888 "data/maps/Route2_House/scripts.pory"
	fadescreen FADE_TO_BLACK
# 889 "data/maps/Route2_House/scripts.pory"
	delay 80
# 890 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 891 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 30
# 892 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_8
# 893 "data/maps/Route2_House/scripts.pory"
	closemessage
# 894 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP
# 895 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 10
# 896 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


# 899 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 900 "data/maps/Route2_House/scripts.pory"
	face_left
# 901 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 902 "data/maps/Route2_House/scripts.pory"
	delay_16
# 903 "data/maps/Route2_House/scripts.pory"
	delay_16
# 904 "data/maps/Route2_House/scripts.pory"
	delay_16
# 905 "data/maps/Route2_House/scripts.pory"
	delay_16
# 906 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 909 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 910 "data/maps/Route2_House/scripts.pory"
	face_left
# 911 "data/maps/Route2_House/scripts.pory"
	delay_16
# 912 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 913 "data/maps/Route2_House/scripts.pory"
	delay_16
# 914 "data/maps/Route2_House/scripts.pory"
	delay_16
# 915 "data/maps/Route2_House/scripts.pory"
	delay_16
# 916 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 919 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 920 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 921 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 924 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 925 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 926 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 929 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 930 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 933 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 934 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 935 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 936 "data/maps/Route2_House/scripts.pory"
	delay_16
# 937 "data/maps/Route2_House/scripts.pory"
	delay_16
# 938 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 939 "data/maps/Route2_House/scripts.pory"
	emote_x
# 940 "data/maps/Route2_House/scripts.pory"
	delay_16
# 941 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 944 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 945 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 946 "data/maps/Route2_House/scripts.pory"
	emote_x
# 947 "data/maps/Route2_House/scripts.pory"
	delay_16
# 948 "data/maps/Route2_House/scripts.pory"
	delay_16
# 949 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 950 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 951 "data/maps/Route2_House/scripts.pory"
	delay_16
# 952 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 955 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 956 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 958 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 959 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 959 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 959 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 963 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 967 "data/maps/Route2_House/scripts.pory"
	lock
# 968 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 969 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 970 "data/maps/Route2_House/scripts.pory"
	savebgm MUS_OCEANIC_MUSEUM
# 971 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 972 "data/maps/Route2_House/scripts.pory"
	delay 60
# 973 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 974 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 975 "data/maps/Route2_House/scripts.pory"
	delay 40
# 976 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 982 "data/maps/Route2_House/scripts.pory"
	closemessage
# 983 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 984 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 985 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 986 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_0
# 987 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 988 "data/maps/Route2_House/scripts.pory"
	applymovement 7, emoteasleep
# 989 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 990 "data/maps/Route2_House/scripts.pory"
	delay 30
# 991 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 993 "data/maps/Route2_House/scripts.pory"
	closemessage
# 994 "data/maps/Route2_House/scripts.pory"
	delay 20
# 995 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_1
# 996 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 997 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 998 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 999 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 1000 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1001 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1002 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 1003 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 1004 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1005 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 1006 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1007 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 1008 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 1009 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1010 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 1012 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1013 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1014 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 1015 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1016 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1017 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 1019 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1020 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 1021 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1022 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1023 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1024 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 1025 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1026 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1027 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 1028 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1029 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1030 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 1031 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1032 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 1033 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 10, 12
# 1034 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


# 1037 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 1038 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 1041 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 1042 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1042 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1045 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 1046 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1046 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1049 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 1050 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1050 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1050 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1050 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1051 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 1051 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 1055 "data/maps/Route2_House/scripts.pory"
	lock
# 1056 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 1057 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1058 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
	end

TakeARest_2:
# 1059 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1060 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1061 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 1062 "data/maps/Route2_House/scripts.pory"
	waitse
# 1063 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 1064 "data/maps/Route2_House/scripts.pory"
	updatefollowingmon
# 1065 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_Bathroom::
# 1072 "data/maps/Route2_House/scripts.pory"
	lock
# 1073 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 1122 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 1142 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 1153 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 1159 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 1074 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 1075 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1076 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 1110 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1111 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_22
# 1115 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
Route2_House_Eventscript_Bathroom_21:
# 1117 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1118 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1119 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 1123 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1124 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_14
# 1128 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_6
Route2_House_Eventscript_Bathroom_13:
# 1130 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1131 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1132 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1133 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1134 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_27
Route2_House_Eventscript_Bathroom_25:
# 1138 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_4:
# 1143 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_7
# 1148 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1149 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1150 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1151 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 1154 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_8
# 1155 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1156 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1157 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 1077 "data/maps/Route2_House/scripts.pory"
	hidefollowernpc
# 1078 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1079 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 1080 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 1081 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1082 "data/maps/Route2_House/scripts.pory"
	waitse
# 1083 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SURF
# 1084 "data/maps/Route2_House/scripts.pory"
	waitse
# 1085 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1086 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1087 "data/maps/Route2_House/scripts.pory"
	waitse
# 1088 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1089 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1090 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1091 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1092 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1093 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1094 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 1095 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1096 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1097 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_18
# 1102 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 40
# 1103 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
Route2_House_Eventscript_Bathroom_17:
# 1105 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1106 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1107 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_14:
# 1125 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
	goto Route2_House_Eventscript_Bathroom_13

Route2_House_Eventscript_Bathroom_18:
# 1098 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 10
# 1099 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
	goto Route2_House_Eventscript_Bathroom_17

Route2_House_Eventscript_Bathroom_22:
# 1112 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
	goto Route2_House_Eventscript_Bathroom_21

Route2_House_Eventscript_Bathroom_26:
# 1136 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_25

Route2_House_Eventscript_Bathroom_27:
# 1134 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_1ST_MORNING
	goto_if_ge Route2_House_Eventscript_Bathroom_26
	goto Route2_House_Eventscript_Bathroom_25


Route2_House_Eventscript_AkihikoOnFrame42::
# 1164 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_AkihikoOnFrame43::
# 1168 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2
	return


Route2_House_Eventscript_TheFirstMorning::
# 1171 "data/maps/Route2_House/scripts.pory"
	lock
# 1172 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1173 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 1174 "data/maps/Route2_House/scripts.pory"
	waitse
# 1175 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 1178 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1179 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1180 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1182 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1183 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1184 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 1185 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1186 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 1187 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1188 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1189 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1190 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1191 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1192 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1193 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1194 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_SHOW_MAP
# 1195 "data/maps/Route2_House/scripts.pory"
	goto EventScript_RegionMap
# 1196 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TheFirstMorning2::
# 1200 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1213 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1214 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1215 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1216 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1217 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1218 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1219 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1220 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1221 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1222 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1223 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1224 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1225 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1226 "data/maps/Route2_House/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1227 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1228 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1229 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1230 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1231 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_1
# 1235 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1236 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1237 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1239 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1240 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2_2
# 1252 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_INTRO_COMPLETED
# 1253 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1254 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1255 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_MITSURU
# 1256 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_INTELEON_T
Route2_House_Eventscript_TheFirstMorning2_1:
# 1259 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1260 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_INTRO_COMPLETED
# 1261 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, VAR_LVLCAP_C1
# 1262 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, VAR_EVCAP_C1
# 1263 "data/maps/Route2_House/scripts.pory"
	setvar VAR_DAYS_LEFT, VAR_DEADLINE_C1
# 1264 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 1265 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1266 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1267 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1268 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1269 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 1270 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
# 1271 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1272 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1273 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2_6
Route2_House_Eventscript_TheFirstMorning2_5:
# 1276 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 0
# 1277 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2_2:
# 1242 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_2
# 1244 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1245 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1246 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1247 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1248 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_MITSURU
# 1249 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_INTELEON_T
	goto Route2_House_Eventscript_TheFirstMorning2_1

Route2_House_Eventscript_TheFirstMorning2_6:
# 1274 "data/maps/Route2_House/scripts.pory"
	call EventScript_ShowHelpDeadline
	goto Route2_House_Eventscript_TheFirstMorning2_5


# 1281 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1282 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1282 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1283 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1283 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
	step_end

# 1286 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1287 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1287 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1287 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1288 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1288 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1289 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1291 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1292 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1292 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1293 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1296 "data/maps/Route2_House/scripts.pory"
MitsuruJoinsTheFirstMorning:
# 1297 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1297 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1298 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1300 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1301 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1301 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1301 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1301 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1302 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_MitsuruOnWarp8::
# 1306 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruRestForTheNight::
# 1310 "data/maps/Route2_House/scripts.pory"
	lock
# 1311 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0
# 1312 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1313 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1314 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruRestForTheNight_Text_0
# 1315 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1316 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_REST_FOR_THE_NIGHT
# 1317 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1318 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 50
# 1319 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 1320 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1321 "data/maps/Route2_House/scripts.pory"
	delay 50
# 1322 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 4
# 1323 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_MitsuruOnFrame10::
# 1327 "data/maps/Route2_House/scripts.pory"
	lock
# 1328 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1329 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruPostRest
	return


Route2_House_Eventscript_MitsuruPostRest::
# 1333 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1334 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1335 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1336 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruPostRest_Text_0
# 1337 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1338 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_TO_THUNDERSHARD
# 1339 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji::
# 1344 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1345 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1346 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 1347 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1348 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1349 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1350 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1351 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1352 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1353 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1354 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1355 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1356 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1357 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1358 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1359 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1360 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1361 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1362 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1363 "data/maps/Route2_House/scripts.pory"
	playse SE_SUCCESS
# 1364 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 1365 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1366 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1367 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1368 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 1369 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1370 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0
# 1375 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1376 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 1377 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1378 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1
# 1380 "data/maps/Route2_House/scripts.pory"
	callnative ClearMugshot
# 1381 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2
# 1384 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1385 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1386 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1387 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0
# 1388 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1389 "data/maps/Route2_House/scripts.pory"
	showobjectat 4, MAP_ROUTE2_HOUSE
# 1390 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1391 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1392 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1393 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1394 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1
# 1395 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1396 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3
# 1399 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1400 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1401 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 1402 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1403 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4
# 1407 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1408 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1409 "data/maps/Route2_House/scripts.pory"
	applymovement 4, walkinplaceleft
# 1410 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1411 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2
# 1412 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3
# 1413 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1414 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4
# 1415 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1416 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1417 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1418 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1419 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1420 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkinplaceleft
# 1421 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1422 "data/maps/Route2_House/scripts.pory"
	playse SE_PC_OFF
# 1423 "data/maps/Route2_House/scripts.pory"
	waitse
# 1424 "data/maps/Route2_House/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1425 "data/maps/Route2_House/scripts.pory"
	waitse
# 1426 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 8, 0x8BF, TRUE
# 1427 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 9, 0x8CF, TRUE
# 1428 "data/maps/Route2_House/scripts.pory"
	special DrawWholeMapView
# 1429 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1430 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1431 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_ASK_AROUND_FOR_AKSJ
# 1432 "data/maps/Route2_House/scripts.pory"
	fwdtime 17, 15
# 1433 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1434 "data/maps/Route2_House/scripts.pory"
	special ShowMapNamePopup
# 1435 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruCallingTakeharuForHelp::
# 1440 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1441 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0
# 1444 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1445 "data/maps/Route2_House/scripts.pory"
	playse SE_POKENAV_OFF
# 1446 "data/maps/Route2_House/scripts.pory"
	waitse
# 1447 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1448 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 1449 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
# 1450 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceleft
# 1451 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1452 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1
# 1456 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1457 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1458 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1459 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2
# 1463 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1464 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 1465 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1466 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1467 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0
# 1468 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1
# 1469 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1470 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1471 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1472 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1473 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1474 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_TO_ROUTE_2
# 1475 "data/maps/Route2_House/scripts.pory"
	fwdtime 10, 55
# 1476 "data/maps/Route2_House/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 1477 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV::
# 1482 "data/maps/Route2_House/scripts.pory"
	lock
# 1483 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1484 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0
# 1485 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1486 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1487 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_0
# 1488 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1489 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1490 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 1491 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1492 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 1493 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1494 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1495 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 1496 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1497 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_TEMP_5
# 1498 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1499 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkiShinjiWakesUp
# 1500 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1501 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1502 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 1503 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1504 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 1505 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1506 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1507 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAround
# 1508 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1509 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 1510 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1511 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1512 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceup
# 1513 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1514 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 1516 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1
# 1519 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1520 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV
	return


Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV::
# 1524 "data/maps/Route2_House/scripts.pory"
	lock
# 1525 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1526 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 1529 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1530 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1531 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1532 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1533 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 1534 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1535 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1536 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1537 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 1540 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1541 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1542 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1543 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1544 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1545 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 1558 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1559 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1560 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 1561 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1562 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 1564 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1565 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1566 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1567 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 1569 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1570 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 1571 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1572 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1573 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 1574 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1575 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1576 "data/maps/Route2_House/scripts.pory"
	waitse
# 1577 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emoteexclamation
# 1578 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 1579 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1580 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 1587 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1588 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1589 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1590 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1591 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1592 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1593 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1594 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1595 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1596 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1597 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 1601 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1602 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1603 "data/maps/Route2_House/scripts.pory"
	waitse
# 1604 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 1605 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1606 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 1607 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1608 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 1609 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1610 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1611 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 1613 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1614 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1615 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1616 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1617 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1618 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1619 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 1620 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1621 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 1622 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1623 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1624 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1625 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0
# 1626 "data/maps/Route2_House/scripts.pory"
	applymovement 6, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1
# 1627 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2
# 1628 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1629 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1630 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1631 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 1633 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1634 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3
# 1635 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1636 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1637 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV::
# 1641 "data/maps/Route2_House/scripts.pory"
	lock
# 1642 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1643 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 1645 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1646 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 1647 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1648 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 1658 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1659 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 1660 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 1661 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 1662 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1663 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1664 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 1668 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1669 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 1670 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1671 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 1672 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1673 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 1675 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1676 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1677 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1678 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 1681 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1682 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 1683 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1684 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 1687 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1688 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1689 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 1690 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 1691 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1692 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1693 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1694 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 1695 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1696 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 1697 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1698 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 1699 "data/maps/Route2_House/scripts.pory"
	applymovement 8, facedown
# 1700 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 1701 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 1702 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1703 "data/maps/Route2_House/scripts.pory"
	waitse
# 1704 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1705 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1706 "data/maps/Route2_House/scripts.pory"
	waitse
# 1707 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 1708 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1709 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1710 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 1711 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 11
# 1712 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV::
# 1716 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1717 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0
# 1718 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1719 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1720 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1721 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 1722 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1723 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1724 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 1733 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1734 "data/maps/Route2_House/scripts.pory"
	delay 50
# 1735 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1736 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 1737 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Text_0
# 1752 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1753 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1754 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 1757 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1758 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1759 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotepensive
# 1760 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1761 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 1762 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1763 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1764 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 1771 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1772 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1773 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 1774 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 1775 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1776 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 1777 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1778 "data/maps/Route2_House/scripts.pory"
	delay 90
# 1779 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1780 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 1781 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1782 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 1783 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1784 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 1787 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1788 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNightMitsuruPOV
	return


Route2_House_Eventscript_StayingTheNightMitsuruPOV::
# 1792 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1793 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAtTheBed
# 1794 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1795 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_0
# 1796 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1797 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 1798 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1799 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 1803 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1804 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1805 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AKihikoRemembersCampGears
# 1806 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1807 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 1808 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1809 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 1810 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 1811 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1812 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 1814 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1815 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1816 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoBickering
# 1817 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1818 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1819 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 1820 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1821 "data/maps/Route2_House/scripts.pory"
	lock
# 1822 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1823 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1824 "data/maps/Route2_House/scripts.pory"
	release
# 1825 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1826 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceright
# 1827 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1828 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 1829 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1830 "data/maps/Route2_House/scripts.pory"
	lock
# 1831 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1832 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1833 "data/maps/Route2_House/scripts.pory"
	release
# 1834 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1835 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 1836 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1837 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 1838 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1839 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 1840 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1841 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 1842 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1843 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1844 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1845 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1846 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1847 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1848 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 1849 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1850 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1851 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotemusic
# 1852 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 1853 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1854 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 1856 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1857 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 1858 "data/maps/Route2_House/scripts.pory"
	delay 80
# 1859 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1860 "data/maps/Route2_House/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1861 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_1
# 1862 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1863 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_1ST_MORNING
# 1864 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 5
# 1865 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_TheFirstMorningMitsuruPOV::
# 1869 "data/maps/Route2_House/scripts.pory"
	lock
# 1870 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1871 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1873 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1874 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1875 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1876 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1877 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoGoesToPlaceTheFirstMorning
# 1878 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1879 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1880 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1881 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1882 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_SHOW_MAP
# 1883 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1884 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1885 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1886 "data/maps/Route2_House/scripts.pory"
	call EventScript_RegionMap
	return


Route2_House_Eventscript_TheFirstMorning2MitsuruPOV::
# 1890 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1891 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1904 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1905 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1906 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1907 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1908 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1909 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1910 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1911 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1912 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1913 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0
# 1914 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1915 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1916 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1917 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1918 "data/maps/Route2_House/scripts.pory"
	removeobject 8
# 1919 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1920 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1921 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1922 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0
# 1926 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1927 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1928 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1930 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1931 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2
# 1942 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_INTRO_COMPLETED
# 1943 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1944 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1945 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 1946 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1:
# 1948 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1949 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_INTRO_COMPLETED
# 1950 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, VAR_LVLCAP_C1
# 1951 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, VAR_EVCAP_C1
# 1952 "data/maps/Route2_House/scripts.pory"
	setvar VAR_DAYS_LEFT, VAR_DEADLINE_C1
# 1953 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1954 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1955 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1956 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1957 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_MITSURU
# 1958 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_INTELEON_T
# 1959 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, MITSURUS_PROLOGUE
# 1960 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1961 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1962 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_6
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_5:
# 1965 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 0
# 1966 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2:
# 1932 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1
# 1934 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1935 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1936 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1937 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1938 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_AKIHIKO
# 1939 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_6:
# 1963 "data/maps/Route2_House/scripts.pory"
	call EventScript_ShowHelpDeadline
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_5


Eventscript_UnlockDeadlineSystem::
# 1972 "data/maps/Route2_House/scripts.pory"
	msgbox Eventscript_UnlockDeadlineSystem_Text_0
# 1979 "data/maps/Route2_House/scripts.pory"
	closemessage
	return


Route2_House_Eventscript_GhostBoyMadPostQuest::
# 1983 "data/maps/Route2_House/scripts.pory"
	lock
# 1984 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_GhostBoyMadPostQuest_Text_0
# 1990 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1991 "data/maps/Route2_House/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 101
# 1992 "data/maps/Route2_House/scripts.pory"
	hidefollower
# 1993 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 1994 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 0
# 1995 "data/maps/Route2_House/scripts.pory"
	call EventScript_CheckDaysLeft
# 1996 "data/maps/Route2_House/scripts.pory"
	release
	end


# 986 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_0:
# 986 "data/maps/Route2_House/scripts.pory"
	walk_up
# 986 "data/maps/Route2_House/scripts.pory"
	walk_up
# 986 "data/maps/Route2_House/scripts.pory"
	walk_up
# 986 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 995 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_1:
# 995 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 995 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
	step_end

# 1311 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0:
# 1311 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1311 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1311 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1311 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1311 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1311 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1311 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1311 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1311 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1311 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1311 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1311 "data/maps/Route2_House/scripts.pory"
	face_right
# 1311 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1311 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1311 "data/maps/Route2_House/scripts.pory"
	face_up
# 1311 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1311 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1311 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 1387 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0:
# 1387 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1387 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 1394 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1:
# 1394 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1394 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1394 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1394 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1394 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1411 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2:
# 1411 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1411 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1412 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3:
# 1412 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1412 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1414 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4:
# 1414 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1414 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1414 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1414 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1467 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0:
# 1467 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1467 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1468 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1:
# 1468 "data/maps/Route2_House/scripts.pory"
	walk_in_place_left
# 1468 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1468 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1468 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1468 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1484 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0:
# 1484 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1484 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1484 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 1625 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0:
# 1625 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1625 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1626 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1:
# 1626 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1626 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1627 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2:
# 1627 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1627 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1627 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1627 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1627 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1627 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1627 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1627 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1627 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 1634 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3:
# 1634 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1634 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1634 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1717 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0:
# 1717 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1717 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1717 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1717 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1717 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1717 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

# 1913 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0:
# 1913 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1913 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1913 "data/maps/Route2_House/scripts.pory"
	set_visible
	step_end

Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 224 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 225 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE MUGSHOT_M EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 258 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 261 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE MUGSHOT_M EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 272 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 279 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 283 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 292 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}So? What does a billionaire girl like you\n"
	.string "want with us?\p"
	.string "For whatever it is, I'm not interested. I\n"
	.string "only want to train and become a\l"
	.string "stronger trainer.\p"
	.string "I could've dealed with the Drowzee\n"
	.string "earlier if I were-\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Wait- Are you with the men in black who\n"
	.string "tried to kidnap us!?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}...\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}No.\p"
	.string "In fact, I managed to disrupt them and\n"
	.string "brought you two here.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}To be more precise, my mission is to\n"
	.string "stop them.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Stop them?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Both of you are from Sunshine\n"
	.string "Orphanage, correct?\p"
	.string "Right now I can say for certain that\n"
	.string "the explosion which happened a few\l"
	.string "days ago was their doing.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}!!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}-!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_4:
# 309 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 314 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 320 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 327 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I believe you have a reason for wanting\n"
	.string "to get stronger.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I have clues of where to find those men\n"
	.string "in black and what they are doing.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}And earlier I saw your battle with them.\n"
	.string "You have great potential.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}If you'll join me... I promise it'll be a\n"
	.string "great challenge.\p"
	.string "I'll also share what I know about those\n"
	.string "men with you.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_8:
# 344 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 353 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 358 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 366 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 446 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 453 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 467 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}What's wrong, Shinji?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}I don't trust her.\p"
	.string "She's hiding lots of information and we\n"
	.string "don't even know if it's true that she's\l"
	.string "not on those men's side.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}But she's also the only lead we have\n"
	.string "right now. We didn't even know where to\l"
	.string "start looking for Miki.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Besides, she said it'd be a great\n"
	.string "challenge.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}So you're tempted.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Honestly, yes.\p"
	.string "If what she said was true, I may find\n"
	.string "Miki or at least her whereabouts while\l"
	.string "going after those men in black.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}I'm joining her. Don't stop me.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Told you I didn't trust her.\p"
	.string "So if you join her, I will too. Someone's\n"
	.string "gotta keep an eye on her.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Alright, let's try asking her then.$"

Route2_House_Eventscript_AVulpix_Text_0:
# 504 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 514 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon's looking at you judgingly.)\p {SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 535 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 545 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 554 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 559 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Hm... Shinjiro Aragaki-kun, correct?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}... You sure have done your research\n"
	.string "thoroughly.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I'll take that as a compliment.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}That wasn't.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Heh...\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I have yet to know if you're able to\n"
	.string "hold your ground when the situation\l"
	.string "calls for it.\p"
	.string "If I'm not mistaken, you don't have a\n"
	.string "Pokémon of your own yet.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}I can just catch one.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Alright. Then how about this.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Before the sun sets, if you can beat me\n"
	.string "in a Pokémon battle, you can come with\l"
	.string "us.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2:
# 572 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 575 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 582 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 586 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 608 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 614 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "{COLOR RED}We'll be having 3-vs-3 Pokémon battles\n"
	.string "and bag items are not allowed so plan\l"
	.string "your party accordingly.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}{COLOR DARK_GRAY}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 642 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 732 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Alright, everyone's here.\p"
	.string "Before I start, I'd like to ask you two a\n"
	.string "question.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Sure? What is it?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}How far can a trainer synergize with\n"
	.string "their Pokémon?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_DOUBT}Uhh... what?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}You mean their bonds?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}I know when a trainer and a Pokémon\n"
	.string "share a deep trust, Mega Evolution can\l"
	.string "be achieved.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}That is right, but not what I meant.\p"
	.string "Perhaps I should put it like this.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1:
# 745 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}What if I say, there's a way for a\n"
	.string "trainer to become one with their\l"
	.string "Pokémon?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh? What do you mean?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}In the most literal way possible.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}That's crazy.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Those men you fought- no, the\n"
	.string "organization behind them,\l"
	.string "is researching and developping a way to\l"
	.string "do so.\p"
	.string "Lots of progress has been made and\n"
	.string "there are already a few prototypes.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}Of course, the method isn't perfect and\n"
	.string "there are more-\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Wait, wait just a minute. I'm lost.\p"
	.string "Prototypes?? Of what exactly??\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}A new specimen of human, who is able to\n"
	.string "use Pokémon's ability,\l"
	.string "in one way or another.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}You're kidding??\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}The more I listen to you, the crazier\n"
	.string "you sound.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}That is to be expected.\n"
	.string "I would have thought the same.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2:
# 763 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me.\n"
	.string "We can simply just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 773 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Look, Princess. It's not like we don't\n"
	.string "want to believe you.\p"
	.string "It all just sounds too much like\n"
	.string "fiction, okay.\p"
	.string "At least show us some proofs?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Right, didn't you say you know where to\n"
	.string "find them?\p"
	.string "How about you lead us to them and we'll\n"
	.string "see if what you said were real.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}.....\p"
	.string "Very well. I suppose that's a logical\n"
	.string "idea.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4:
# 793 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night.\p"
	.string "It's late and we're all tired from the\n"
	.string "battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 821 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Uhhh you sure about that?\n"
	.string "There's only one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 826 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}M-my apologies, it slipped my mind that\n"
	.string "this house doesn't have guest rooms.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}You two can take the bed.\n"
	.string "I'm okay with the floor.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}For Arceus's sake, Princess.\n"
	.string "Aki's kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 836 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 841 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 866 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 870 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 877 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}...$"

Route2_House_Eventscript_StayingTheNight_Text_7:
# 883 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_StayingTheNight_Text_8:
# 892 "data/maps/Route2_House/scripts.pory"
	.string "Later that night...$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 976 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}(Dang... I can't sleep at all.)\p"
	.string "(Gotta admit, what Kirijo said earlier\n"
	.string "does bug me.)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(It didn't look like she was lying.)\p"
	.string "(If it was all true... and if Miki is\n"
	.string "already in their hands...)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}(No, I must think positively. She\n"
	.string "must've still been fine and been waiting\l"
	.string "for me to come get her home.)\p"
	.string "(If I can't sleep... may as well go train a\n"
	.string "bit.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_1:
# 991 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Kirijo is already sleeping soundly.\n"
	.string "She won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 1005 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 1010 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 1017 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 1024 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 1056 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_Bathroom_Text_0:
# 1074 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 1099 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 1103 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}(That really freshened me up.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 1112 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 1115 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Let's do it later.)$"

Route2_House_Eventscript_Bathroom_Text_5:
# 1125 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_6:
# 1128 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Let's not waste time any further.)$"

Route2_House_Eventscript_Bathroom_Text_7:
# 1143 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_8:
# 1154 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 1175 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}-yawn-\n"
	.string "(Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 1180 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Everyone, please gather around.\n"
	.string "I'll explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 1191 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning2_Text_0:
# 1200 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I believe our destination is around the\n"
	.string "base of Goldenwings Mountain.\p"
	.string "To get there we can take a ship from\n"
	.string "Coralport, west of here.\p"
	.string "Then we go through Route 4 from\n"
	.string "Windward Town.\p"
	.string "Any questions?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Nope, the path is simple enough.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}C'est magnifique.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Oh, before I forget.\p"
	.string "We should make a stop at my personal\n"
	.string "researcher's lab in Windward Port.\p"
	.string "There's a package for us that I've\n"
	.string "ordered.\p"
	.string "It'll be a great help for our journey.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}More gadgets?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}And Pokémon.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Alright! Let's head out then!$"

Route2_House_Eventscript_TheFirstMorning2_Text_1:
# 1231 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2_Text_2:
# 1242 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Mitsuru's Prologue {COLOR GREEN}unlocked.\n"
	.string "Check Quest Menu for more details.$"

Route2_House_Eventscript_MitsuruRestForTheNight_Text_0:
# 1314 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Not too shabby. This will do.$"

Route2_House_Eventscript_MitsuruPostRest_Text_0:
# 1336 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(The sun's up. Time to move out.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0:
# 1370 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(So this boy is... Akihiko Sanada.)\p"
	.string "(He got adopted a few days ago, along\n"
	.string "with his younger sister Miki.)\p"
	.string "(Well, on paper at least, I suppose?)\p"
	.string "(Otherwise those men wouldn't have\n"
	.string "been searching for him near the\l"
	.string "orphanage.)\p"
	.string "(Already has a standard trainer card...\n"
	.string "issued a week ago.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1:
# 1378 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(And this one is Aragaki Shinjiro.)\p"
	.string "(He's also adopted on paper and has a\n"
	.string "standard trainer card.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2:
# 1381 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Considering how eagerly the Genesis\n"
	.string "staff were searching for them)\p"
	.string "(I guess they must be ones of their\n"
	.string "“good potential” subjects.)\p"
	.string "(In that case, I must find them before\n"
	.string "the Genesis group does.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3:
# 1396 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Inteleon, you're back.\n"
	.string "Just about time.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I'd love to give you a rest but we really\n"
	.string "have to act right now.\p"
	.string "Although if you're too tired, you can\n"
	.string "return to the Pokéball.$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4:
# 1403 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head, looking\n"
	.string "determined to accompany Mitsuru.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}If that's what you want, alright.\n"
	.string "Let's go then.\p"
	.string "We should start asking around Sunshine\n"
	.string "Town for these two boys.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0:
# 1441 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Yes, Father.\n"
	.string "That'd be great.\p"
	.string "Yes. I'll talk to you later.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1:
# 1452 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}(It's been days and the girl still hasn't\n"
	.string "been found.)\p"
	.string "(There's a great chance that the\n"
	.string "Genesis group has taken her.)\p"
	.string "(I hope Father could help with the\n"
	.string "searching somehow.)\p"
	.string "........$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2:
# 1459 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}I've been avoidant about confronting\n"
	.string "the boys.\p"
	.string "I don't know how to face them after\n"
	.string "what I'd done.\p"
	.string "{CREATE MUGSHOT_M EMOTE_NORMAL}However, we can't afford to lose any\n"
	.string "more time before the group erases their\l"
	.string "tracks again.\p"
	.string "{CREATE MUGSHOT_M EMOTE_SERIOUS}Let's go talk to Sanada and Aragaki,\n"
	.string "Vulpix, Inteleon.$"

Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_0:
# 1487 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1:
# 1516 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Text_0:
# 1737 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}What if I say, there's a way for a\n"
	.string "trainer to become one with their\l"
	.string "Pokémon?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh? What do you mean?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}In the most literal way possible.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}That's crazy.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Those men you fought- no, the\n"
	.string "organization behind them,\l"
	.string "is researching and developping a way to\l"
	.string "do so.\p"
	.string "Lots of progress has been made and\n"
	.string "there are already a few prototypes.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}Of course, the method isn't perfect and\n"
	.string "there are more-\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Wait, wait just a minute. I'm lost.\p"
	.string "Prototypes?? Of what exactly??\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}A new specimen of human, who is able to\n"
	.string "use Pokémon's ability, in one way or\l"
	.string "another.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}You're kidding??\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}The more I listen to you, the crazier\n"
	.string "you sound.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}That is to be expected.\n"
	.string "I would have thought the same.$"

Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_0:
# 1795 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_1:
# 1861 "data/maps/Route2_House/scripts.pory"
	.string "The next morning...$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0:
# 1922 "data/maps/Route2_House/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1:
# 1932 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Akihiko's Prologue {COLOR GREEN}unlocked.\n"
	.string "Check Quest Menu for more details.$"

Eventscript_UnlockDeadlineSystem_Text_0:
# 1972 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR GREEN}From this point onward, there'll be a\n"
	.string "{COLOR RED}DEADLINE {COLOR GREEN}for the main story quests'\l"
	.string "missions.\p"
	.string "You can check the current deadline in\n"
	.string "the {START_BUTTON} Menu.\p"
	.string "The clock will only tick forward when\n"
	.string "you perform certain actions such as:\p"
	.string "using the {COLOR BLUE}Camp Gears{COLOR GREEN}, working at a\n"
	.string "part-time job or spending time with\l"
	.string "your {COLOR BLUE}Companions{COLOR GREEN}, etc.\p"
	.string "Exiting certain dungeons will also\n"
	.string "advance the clock.$"

Route2_House_Eventscript_GhostBoyMadPostQuest_Text_0:
# 1984 "data/maps/Route2_House/scripts.pory"
	.string "You woke up in a cold sweat.\p"
	.string "Was that all a dream?\p"
	.string "You took a look at your Pokémon party.\p"
	.string "...\p"
	.string "...\p"
	.string "They were all fainted.$"
