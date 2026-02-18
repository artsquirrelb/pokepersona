Route2_House_MapScripts::
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD
# 22 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 123 "data/maps/Route2_House/scripts.pory"
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
# 105 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 33
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_60
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_59:
# 112 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 34
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
	compare VAR_MITSURUS_INTRO_STATE, 34
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_40:
# 67 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 33
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
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 100 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 101 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 102 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 103 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_56

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_60:
# 107 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 108 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 109 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 3, 10
# 110 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_59

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_62:
# 114 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 115 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 116 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 117 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 118 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 5, 7
# 119 "data/maps/Route2_House/scripts.pory"
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
# 124 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_MEETING_M, Route2_House_Eventscript_AkihikoOnFrame27
# 125 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_M_OFFERS_BATTLE, Route2_House_Eventscript_AkihikoOnFrame32
# 126 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_M_EXPLAINS_OBJECTIVES, Route2_House_Eventscript_AkihikoOnFrame38
# 127 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP, Route2_House_Eventscript_AkihikoOnFrame39
# 128 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_1ST_MORNING, Route2_House_Eventscript_AkihikoOnFrame42
# 129 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_SHOW_MAP, Route2_House_Eventscript_AkihikoOnFrame43
# 131 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_TOO_LATE_NIGHT, Route2_House_Eventscript_MitsuruOnFrame8
# 132 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_REST_FOR_THE_NIGHT, Route2_House_Eventscript_MitsuruOnFrame10
# 133 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS, Route2_House_Eventscript_MitsuruOnFrame22
# 134 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_CALLING_TKHR, Route2_House_Eventscript_MitsuruOnFrame26
# 135 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_SAVED_AKSJ, Route2_House_Eventscript_MitsuruOnFrame28
# 136 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_EXPLAIN_OBJECTIVE, Route2_House_Eventscript_MitsuruOnFrame32
# 137 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_1ST_MORNING, Route2_House_Eventscript_MitsuruOnFrame33
# 138 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 34, Route2_House_Eventscript_MitsuruOnFrame34
# 140 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_WINDWARD_HARBOR_GHOST_BOY, 44, Route2_House_Eventscript_GhostBoyMadPostQuest
	.2byte 0


Route2_House_Eventscript_MitsuruOnWarp26::
# 145 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_HideShinjiro::
# 149 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 153 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 154 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 155 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 159 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnWarp39::
# 162 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
# 163 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnWarp42::
# 166 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_MitsuruOnWarp10::
# 170 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


Route2_House_Eventscript_MitsuruOnWarp22::
# 174 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 175 "data/maps/Route2_House/scripts.pory"
	applymovement 4, invisible
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 179 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 183 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_MitsuruOnFrame8::
# 187 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruRestForTheNight
	return


Route2_House_Eventscript_MitsuruOnFrame22::
# 191 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji
	return


Route2_House_Eventscript_MitsuruOnFrame26::
# 195 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 196 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruCallingTakeharuForHelp
	return


Route2_House_Eventscript_MitsuruOnFrame28::
# 200 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame32::
# 204 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame33::
# 208 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorningMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame34::
# 212 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 216 "data/maps/Route2_House/scripts.pory"
	lock
# 217 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 218 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
# 219 "data/maps/Route2_House/scripts.pory"
	delay 20
# 220 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 221 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route2_House/scripts.pory"
	delay 30
# 223 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 224 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 225 "data/maps/Route2_House/scripts.pory"
	closemessage
# 226 "data/maps/Route2_House/scripts.pory"
	delay 30
# 227 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 228 "data/maps/Route2_House/scripts.pory"
	delay 4
# 229 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 230 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route2_House/scripts.pory"
	delay 20
# 232 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 233 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 234 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 236 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 237 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 238 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 239 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 240 "data/maps/Route2_House/scripts.pory"
	delay 4
# 241 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 242 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 243 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 244 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route2_House/scripts.pory"
	delay 30
# 246 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 247 "data/maps/Route2_House/scripts.pory"
	delay 8
# 248 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 249 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route2_House/scripts.pory"
	removeobject 3
# 251 "data/maps/Route2_House/scripts.pory"
	delay 1
# 252 "data/maps/Route2_House/scripts.pory"
	removeobject 2
# 253 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
# 254 "data/maps/Route2_House/scripts.pory"
	delay 30
# 255 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 256 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 259 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 260 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 263 "data/maps/Route2_House/scripts.pory"
	closemessage
# 264 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 265 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 269 "data/maps/Route2_House/scripts.pory"
	lock
# 270 "data/maps/Route2_House/scripts.pory"
	delay 30
# 271 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 274 "data/maps/Route2_House/scripts.pory"
	closemessage
# 275 "data/maps/Route2_House/scripts.pory"
	delay 30
# 276 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 277 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 279 "data/maps/Route2_House/scripts.pory"
	closemessage
# 280 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 281 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 282 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 285 "data/maps/Route2_House/scripts.pory"
	closemessage
# 286 "data/maps/Route2_House/scripts.pory"
	delay 20
# 287 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 288 "data/maps/Route2_House/scripts.pory"
	delay 8
# 289 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 290 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 304 "data/maps/Route2_House/scripts.pory"
	closemessage
# 305 "data/maps/Route2_House/scripts.pory"
	delay 20
# 306 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 307 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 308 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 310 "data/maps/Route2_House/scripts.pory"
	closemessage
# 311 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 312 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 313 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 315 "data/maps/Route2_House/scripts.pory"
	closemessage
# 316 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 317 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 318 "data/maps/Route2_House/scripts.pory"
	delay 8
# 319 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 320 "data/maps/Route2_House/scripts.pory"
	closemessage
# 321 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 322 "data/maps/Route2_House/scripts.pory"
	waitse
# 323 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 324 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 325 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 333 "data/maps/Route2_House/scripts.pory"
	closemessage
# 334 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 335 "data/maps/Route2_House/scripts.pory"
	delay 16
# 336 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 337 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route2_House/scripts.pory"
	delay 60
# 339 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 340 "data/maps/Route2_House/scripts.pory"
	delay 16
# 341 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 342 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 347 "data/maps/Route2_House/scripts.pory"
	closemessage
# 348 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 349 "data/maps/Route2_House/scripts.pory"
	waitse
# 350 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 351 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 353 "data/maps/Route2_House/scripts.pory"
	closemessage
# 354 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 355 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 356 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 359 "data/maps/Route2_House/scripts.pory"
	closemessage
# 360 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 361 "data/maps/Route2_House/scripts.pory"
	delay 8
# 362 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 363 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 364 "data/maps/Route2_House/scripts.pory"
	delay 60
# 365 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 366 "data/maps/Route2_House/scripts.pory"
	closemessage
# 367 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 368 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 369 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 370 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 20
# 371 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_S_DOUBTING_M
# 372 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 373 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


# 376 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 377 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 379 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 380 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 380 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 380 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 380 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 383 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 384 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 388 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 389 "data/maps/Route2_House/scripts.pory"
	set_visible
# 390 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 393 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 394 "data/maps/Route2_House/scripts.pory"
	face_left
# 395 "data/maps/Route2_House/scripts.pory"
	delay_16
# 396 "data/maps/Route2_House/scripts.pory"
	delay_16
# 397 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 398 "data/maps/Route2_House/scripts.pory"
	delay_16
# 399 "data/maps/Route2_House/scripts.pory"
	face_right
# 400 "data/maps/Route2_House/scripts.pory"
	delay_16
# 401 "data/maps/Route2_House/scripts.pory"
	delay_16
# 402 "data/maps/Route2_House/scripts.pory"
	delay_16
# 403 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 407 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 408 "data/maps/Route2_House/scripts.pory"
	face_right
# 409 "data/maps/Route2_House/scripts.pory"
	delay_16
# 410 "data/maps/Route2_House/scripts.pory"
	delay_16
# 411 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 412 "data/maps/Route2_House/scripts.pory"
	face_up
# 413 "data/maps/Route2_House/scripts.pory"
	delay_16
# 414 "data/maps/Route2_House/scripts.pory"
	delay_16
# 415 "data/maps/Route2_House/scripts.pory"
	face_left
# 416 "data/maps/Route2_House/scripts.pory"
	delay_16
# 417 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 420 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 421 "data/maps/Route2_House/scripts.pory"
	walk_left
# 422 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 425 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 426 "data/maps/Route2_House/scripts.pory"
	walk_right
# 427 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 430 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 431 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 432 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 435 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 436 "data/maps/Route2_House/scripts.pory"
	walk_left
# 437 "data/maps/Route2_House/scripts.pory"
	walk_up
# 438 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 442 "data/maps/Route2_House/scripts.pory"
	lock
# 443 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 444 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_S_DOUBTING_M
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 450 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_NEGO_W_M
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 460 "data/maps/Route2_House/scripts.pory"
	release
	return

Route2_House_Eventscript_Mitsuru_2:
# 445 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 448 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 451 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 452 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 454 "data/maps/Route2_House/scripts.pory"
	closemessage
# 455 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_M_OFFERS_BATTLE
# 456 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 457 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 458 "data/maps/Route2_House/scripts.pory"
	waitstate
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 464 "data/maps/Route2_House/scripts.pory"
	lock
# 465 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 466 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 478 "data/maps/Route2_House/scripts.pory"
	closemessage
# 479 "data/maps/Route2_House/scripts.pory"
	specialvar VAR_0x8000, GetPlayerFacingDirection
# 480 "data/maps/Route2_House/scripts.pory"
	switch VAR_0x8000
# 482 "data/maps/Route2_House/scripts.pory"
	case DIR_NORTH, Route2_House_Eventscript_Shinjiro_3
# 483 "data/maps/Route2_House/scripts.pory"
	case DIR_EAST, Route2_House_Eventscript_Shinjiro_4
Route2_House_Eventscript_Shinjiro_1:
# 485 "data/maps/Route2_House/scripts.pory"
	applymove 6, ShinjiroJoinsAndVanish
# 486 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_NEGO_W_M
# 487 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Shinjiro_3:
# 482 "data/maps/Route2_House/scripts.pory"
	applymove 6, walkdown
	goto Route2_House_Eventscript_Shinjiro_1

Route2_House_Eventscript_Shinjiro_4:
# 483 "data/maps/Route2_House/scripts.pory"
	applymove 6, walkleft
	goto Route2_House_Eventscript_Shinjiro_1


# 491 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 492 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 493 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 494 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 494 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 498 "data/maps/Route2_House/scripts.pory"
	lock
# 499 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 500 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 501 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 502 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 503 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 505 "data/maps/Route2_House/scripts.pory"
	closemessage
# 506 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_Inteleon::
# 511 "data/maps/Route2_House/scripts.pory"
	lock
# 512 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 513 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 515 "data/maps/Route2_House/scripts.pory"
	closemessage
# 516 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 517 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_A_Trigger::
# 522 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_S_DOUBTING_M
	goto_if_eq Route2_House_Eventscript_A_Trigger_2
Route2_House_Eventscript_A_Trigger_1:
# 524 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_NEGO_W_M
	goto_if_eq Route2_House_Eventscript_A_Trigger_5
Route2_House_Eventscript_A_Trigger_4:
# 526 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_A_Trigger_2:
# 523 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MustTalkToShinjiro
	goto Route2_House_Eventscript_A_Trigger_1

Route2_House_Eventscript_A_Trigger_5:
# 525 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MustTalkToMitsuru
	goto Route2_House_Eventscript_A_Trigger_4


Route2_House_Eventscript_MustTalkToShinjiro::
# 531 "data/maps/Route2_House/scripts.pory"
	lock
# 532 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 533 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 534 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 535 "data/maps/Route2_House/scripts.pory"
	closemessage
# 536 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToMitsuru::
# 541 "data/maps/Route2_House/scripts.pory"
	lock
# 542 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 543 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 544 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 545 "data/maps/Route2_House/scripts.pory"
	closemessage
# 546 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 551 "data/maps/Route2_House/scripts.pory"
	lock
# 552 "data/maps/Route2_House/scripts.pory"
	delay 30
# 553 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 555 "data/maps/Route2_House/scripts.pory"
	closemessage
# 556 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 557 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 558 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 568 "data/maps/Route2_House/scripts.pory"
	closemessage
# 569 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 570 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 571 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 572 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 573 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 574 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 578 "data/maps/Route2_House/scripts.pory"
	closemessage
# 579 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 580 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 581 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 582 "data/maps/Route2_House/scripts.pory"
	closemessage
# 583 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 584 "data/maps/Route2_House/scripts.pory"
	waitse
# 585 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 587 "data/maps/Route2_House/scripts.pory"
	closemessage
# 588 "data/maps/Route2_House/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 589 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_SHARE
# 590 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_EXP_SHARE
# 591 "data/maps/Route2_House/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_2
Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_1:
# 598 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 599 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, VAR_0x800A
# 600 "data/maps/Route2_House/scripts.pory"
	additem ITEM_GREAT_BALL, VAR_0x800B
# 601 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 602 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800A, 0
# 603 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800B, 0
# 604 "data/maps/Route2_House/scripts.pory"
	delay 30
# 605 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 606 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 607 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 610 "data/maps/Route2_House/scripts.pory"
	closemessage
# 611 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 612 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 613 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 616 "data/maps/Route2_House/scripts.pory"
	closemessage
# 617 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 618 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 619 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 620 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 621 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 622 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 623 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 624 "data/maps/Route2_House/scripts.pory"
	delay 16
# 625 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 626 "data/maps/Route2_House/scripts.pory"
	delay 4
# 627 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 628 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 629 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 630 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 631 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 632 "data/maps/Route2_House/scripts.pory"
	waitse
# 633 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 634 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 635 "data/maps/Route2_House/scripts.pory"
	waitse
# 636 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 637 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 638 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 639 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 640 "data/maps/Route2_House/scripts.pory"
	delay 30
# 641 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 644 "data/maps/Route2_House/scripts.pory"
	closemessage
# 645 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 646 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 647 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 648 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 649 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 650 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 651 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 652 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 653 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_AS_LEAVING_R2_HOUSE
# 654 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 655 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 656 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 657 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
# 658 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_2:
# 592 "data/maps/Route2_House/scripts.pory"
	call EventScript_ShowHelpPokedex
# 593 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 594 "data/maps/Route2_House/scripts.pory"
	special SetUnlockedPokedexFlags
# 595 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 596 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_1


# 662 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 663 "data/maps/Route2_House/scripts.pory"
	walk_right
# 664 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 667 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 668 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 669 "data/maps/Route2_House/scripts.pory"
	walk_up
# 670 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 672 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 673 "data/maps/Route2_House/scripts.pory"
	walk_left
# 673 "data/maps/Route2_House/scripts.pory"
	walk_left
# 674 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 676 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 677 "data/maps/Route2_House/scripts.pory"
	walk_right
# 678 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 680 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 681 "data/maps/Route2_House/scripts.pory"
	walk_down
# 681 "data/maps/Route2_House/scripts.pory"
	walk_down
# 681 "data/maps/Route2_House/scripts.pory"
	walk_down
# 681 "data/maps/Route2_House/scripts.pory"
	walk_down
# 681 "data/maps/Route2_House/scripts.pory"
	walk_down
# 682 "data/maps/Route2_House/scripts.pory"
	walk_right
# 682 "data/maps/Route2_House/scripts.pory"
	walk_right
# 683 "data/maps/Route2_House/scripts.pory"
	walk_down
# 683 "data/maps/Route2_House/scripts.pory"
	walk_down
# 684 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 686 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 687 "data/maps/Route2_House/scripts.pory"
	walk_down
# 687 "data/maps/Route2_House/scripts.pory"
	walk_down
# 687 "data/maps/Route2_House/scripts.pory"
	walk_down
# 688 "data/maps/Route2_House/scripts.pory"
	walk_right
# 688 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 691 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 692 "data/maps/Route2_House/scripts.pory"
	walk_right
# 692 "data/maps/Route2_House/scripts.pory"
	walk_right
# 692 "data/maps/Route2_House/scripts.pory"
	walk_right
# 692 "data/maps/Route2_House/scripts.pory"
	walk_right
# 693 "data/maps/Route2_House/scripts.pory"
	walk_down
# 693 "data/maps/Route2_House/scripts.pory"
	walk_down
# 693 "data/maps/Route2_House/scripts.pory"
	walk_down
# 694 "data/maps/Route2_House/scripts.pory"
	walk_right
# 694 "data/maps/Route2_House/scripts.pory"
	walk_right
# 695 "data/maps/Route2_House/scripts.pory"
	walk_down
# 696 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 699 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 700 "data/maps/Route2_House/scripts.pory"
	walk_down
# 701 "data/maps/Route2_House/scripts.pory"
	walk_right
# 701 "data/maps/Route2_House/scripts.pory"
	walk_right
# 701 "data/maps/Route2_House/scripts.pory"
	walk_right
# 701 "data/maps/Route2_House/scripts.pory"
	walk_right
# 702 "data/maps/Route2_House/scripts.pory"
	walk_down
# 702 "data/maps/Route2_House/scripts.pory"
	walk_down
# 702 "data/maps/Route2_House/scripts.pory"
	walk_down
# 703 "data/maps/Route2_House/scripts.pory"
	walk_right
# 703 "data/maps/Route2_House/scripts.pory"
	walk_right
# 704 "data/maps/Route2_House/scripts.pory"
	walk_down
# 705 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 708 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 709 "data/maps/Route2_House/scripts.pory"
	walk_up
# 709 "data/maps/Route2_House/scripts.pory"
	walk_up
# 709 "data/maps/Route2_House/scripts.pory"
	walk_up
# 710 "data/maps/Route2_House/scripts.pory"
	walk_left
# 710 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 713 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 714 "data/maps/Route2_House/scripts.pory"
	walk_left
# 714 "data/maps/Route2_House/scripts.pory"
	walk_left
# 715 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 719 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 723 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 724 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 725 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 726 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 727 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 728 "data/maps/Route2_House/scripts.pory"
	delay 8
# 729 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 730 "data/maps/Route2_House/scripts.pory"
	delay 60
# 731 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 740 "data/maps/Route2_House/scripts.pory"
	closemessage
# 741 "data/maps/Route2_House/scripts.pory"
	delay 50
# 742 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 743 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 744 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 760 "data/maps/Route2_House/scripts.pory"
	closemessage
# 761 "data/maps/Route2_House/scripts.pory"
	delay 40
# 762 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 765 "data/maps/Route2_House/scripts.pory"
	closemessage
# 766 "data/maps/Route2_House/scripts.pory"
	delay 30
# 767 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 768 "data/maps/Route2_House/scripts.pory"
	delay 10
# 769 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 770 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 771 "data/maps/Route2_House/scripts.pory"
	delay 60
# 772 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 779 "data/maps/Route2_House/scripts.pory"
	closemessage
# 780 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 781 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 782 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 783 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 784 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 785 "data/maps/Route2_House/scripts.pory"
	delay 90
# 786 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 787 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 788 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 789 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 790 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 791 "data/maps/Route2_House/scripts.pory"
	delay 60
# 792 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 795 "data/maps/Route2_House/scripts.pory"
	closemessage
# 796 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 799 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 800 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 802 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 803 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 803 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 803 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 804 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 804 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 805 "data/maps/Route2_House/scripts.pory"
	walk_up
# 805 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 808 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 809 "data/maps/Route2_House/scripts.pory"
	walk_up
# 809 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 812 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 813 "data/maps/Route2_House/scripts.pory"
	walk_down
# 813 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 817 "data/maps/Route2_House/scripts.pory"
	delay 60
# 818 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 819 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 820 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 822 "data/maps/Route2_House/scripts.pory"
	closemessage
# 823 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 824 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 825 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 831 "data/maps/Route2_House/scripts.pory"
	closemessage
# 832 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 833 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 834 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 835 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 836 "data/maps/Route2_House/scripts.pory"
	closemessage
# 837 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 838 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 839 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 840 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 842 "data/maps/Route2_House/scripts.pory"
	closemessage
# 843 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 844 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 845 "data/maps/Route2_House/scripts.pory"
	delay 10
# 846 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 847 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 848 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 849 "data/maps/Route2_House/scripts.pory"
	lock
# 850 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 851 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 852 "data/maps/Route2_House/scripts.pory"
	release
# 853 "data/maps/Route2_House/scripts.pory"
	delay 30
# 854 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 855 "data/maps/Route2_House/scripts.pory"
	delay 10
# 856 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 857 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 858 "data/maps/Route2_House/scripts.pory"
	lock
# 859 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 860 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 861 "data/maps/Route2_House/scripts.pory"
	release
# 862 "data/maps/Route2_House/scripts.pory"
	delay 30
# 863 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 864 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 865 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 866 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 867 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 868 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 869 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 870 "data/maps/Route2_House/scripts.pory"
	closemessage
# 871 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 872 "data/maps/Route2_House/scripts.pory"
	delay 10
# 873 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 874 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 875 "data/maps/Route2_House/scripts.pory"
	delay 60
# 876 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 877 "data/maps/Route2_House/scripts.pory"
	closemessage
# 878 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 879 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 880 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 881 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 882 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 884 "data/maps/Route2_House/scripts.pory"
	closemessage
# 885 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 886 "data/maps/Route2_House/scripts.pory"
	delay 30
# 887 "data/maps/Route2_House/scripts.pory"
	fadescreen FADE_TO_BLACK
# 888 "data/maps/Route2_House/scripts.pory"
	delay 80
# 889 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 890 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 30
# 891 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_8
# 892 "data/maps/Route2_House/scripts.pory"
	closemessage
# 893 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP
# 894 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 10
# 895 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


# 898 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 899 "data/maps/Route2_House/scripts.pory"
	face_left
# 900 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 901 "data/maps/Route2_House/scripts.pory"
	delay_16
# 902 "data/maps/Route2_House/scripts.pory"
	delay_16
# 903 "data/maps/Route2_House/scripts.pory"
	delay_16
# 904 "data/maps/Route2_House/scripts.pory"
	delay_16
# 905 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 908 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 909 "data/maps/Route2_House/scripts.pory"
	face_left
# 910 "data/maps/Route2_House/scripts.pory"
	delay_16
# 911 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 912 "data/maps/Route2_House/scripts.pory"
	delay_16
# 913 "data/maps/Route2_House/scripts.pory"
	delay_16
# 914 "data/maps/Route2_House/scripts.pory"
	delay_16
# 915 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 918 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 919 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 920 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 923 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 924 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 925 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 928 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 929 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 932 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 933 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 934 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 935 "data/maps/Route2_House/scripts.pory"
	delay_16
# 936 "data/maps/Route2_House/scripts.pory"
	delay_16
# 937 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 938 "data/maps/Route2_House/scripts.pory"
	emote_x
# 939 "data/maps/Route2_House/scripts.pory"
	delay_16
# 940 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 943 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 944 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 945 "data/maps/Route2_House/scripts.pory"
	emote_x
# 946 "data/maps/Route2_House/scripts.pory"
	delay_16
# 947 "data/maps/Route2_House/scripts.pory"
	delay_16
# 948 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 949 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 950 "data/maps/Route2_House/scripts.pory"
	delay_16
# 951 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 954 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 955 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 957 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 958 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 962 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 966 "data/maps/Route2_House/scripts.pory"
	lock
# 967 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 968 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 969 "data/maps/Route2_House/scripts.pory"
	savebgm MUS_OCEANIC_MUSEUM
# 970 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 971 "data/maps/Route2_House/scripts.pory"
	delay 60
# 972 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 973 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 974 "data/maps/Route2_House/scripts.pory"
	delay 40
# 975 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 981 "data/maps/Route2_House/scripts.pory"
	closemessage
# 982 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 983 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 984 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 985 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_0
# 986 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 987 "data/maps/Route2_House/scripts.pory"
	applymovement 7, emoteasleep
# 988 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 989 "data/maps/Route2_House/scripts.pory"
	delay 30
# 990 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 992 "data/maps/Route2_House/scripts.pory"
	closemessage
# 993 "data/maps/Route2_House/scripts.pory"
	delay 20
# 994 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_1
# 995 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 996 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 997 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 998 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 999 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1000 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1001 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 1002 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 1003 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1004 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 1005 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1006 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 1007 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 1008 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1009 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 1011 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1012 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1013 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 1014 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1015 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1016 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 1018 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1019 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 1020 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1021 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1022 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1023 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 1024 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1025 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1026 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 1027 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1028 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1029 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 1030 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1031 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 1032 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 10, 12
# 1033 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


# 1036 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 1037 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 1040 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 1041 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1041 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1044 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 1045 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1045 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1048 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 1049 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1049 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1049 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1049 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1050 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 1050 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 1054 "data/maps/Route2_House/scripts.pory"
	lock
# 1055 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 1056 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1057 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
	end

TakeARest_2:
# 1058 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1059 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1060 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 1061 "data/maps/Route2_House/scripts.pory"
	waitse
# 1062 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 1063 "data/maps/Route2_House/scripts.pory"
	updatefollowingmon
# 1064 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_Bathroom::
# 1071 "data/maps/Route2_House/scripts.pory"
	lock
# 1072 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 1121 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 1141 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 1152 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 1158 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 1073 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 1074 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1075 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 1109 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1110 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_22
# 1114 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
Route2_House_Eventscript_Bathroom_21:
# 1116 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1117 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1118 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 1122 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1123 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_14
# 1127 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_6
Route2_House_Eventscript_Bathroom_13:
# 1129 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1130 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1131 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1132 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1133 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_27
Route2_House_Eventscript_Bathroom_25:
# 1137 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_4:
# 1142 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_7
# 1147 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1148 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1149 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1150 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 1153 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_8
# 1154 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1155 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1156 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 1076 "data/maps/Route2_House/scripts.pory"
	hidefollowernpc
# 1077 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1078 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 1079 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 1080 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1081 "data/maps/Route2_House/scripts.pory"
	waitse
# 1082 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SURF
# 1083 "data/maps/Route2_House/scripts.pory"
	waitse
# 1084 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1085 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1086 "data/maps/Route2_House/scripts.pory"
	waitse
# 1087 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1088 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1089 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1090 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1091 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1092 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1093 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 1094 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1095 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1096 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_18
# 1101 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 40
# 1102 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
Route2_House_Eventscript_Bathroom_17:
# 1104 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1105 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1106 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_14:
# 1124 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
	goto Route2_House_Eventscript_Bathroom_13

Route2_House_Eventscript_Bathroom_18:
# 1097 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 10
# 1098 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
	goto Route2_House_Eventscript_Bathroom_17

Route2_House_Eventscript_Bathroom_22:
# 1111 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
	goto Route2_House_Eventscript_Bathroom_21

Route2_House_Eventscript_Bathroom_26:
# 1135 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_25

Route2_House_Eventscript_Bathroom_27:
# 1133 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_1ST_MORNING
	goto_if_ge Route2_House_Eventscript_Bathroom_26
	goto Route2_House_Eventscript_Bathroom_25


Route2_House_Eventscript_AkihikoOnFrame42::
# 1163 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_AkihikoOnFrame43::
# 1167 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2
	return


Route2_House_Eventscript_TheFirstMorning::
# 1170 "data/maps/Route2_House/scripts.pory"
	lock
# 1171 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1172 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 1173 "data/maps/Route2_House/scripts.pory"
	waitse
# 1174 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 1177 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1178 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1179 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1181 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1182 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1183 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 1184 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1185 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 1186 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1187 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1188 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1189 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1190 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1191 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1192 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1193 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_SHOW_MAP
# 1194 "data/maps/Route2_House/scripts.pory"
	goto EventScript_RegionMap
# 1195 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TheFirstMorning2::
# 1199 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1212 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1213 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1214 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1215 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1216 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1217 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1218 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1219 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1220 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1221 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1222 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1223 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1224 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1225 "data/maps/Route2_House/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1226 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1227 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1228 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1229 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1230 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_1
# 1234 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1235 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1236 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1238 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1239 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2_2
# 1251 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_INTRO_COMPLETED
# 1252 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1253 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1254 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_MITSURU
# 1255 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_INTELEON_T
Route2_House_Eventscript_TheFirstMorning2_1:
# 1258 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1259 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_INTRO_COMPLETED
# 1260 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1261 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 80
# 1262 "data/maps/Route2_House/scripts.pory"
	setvar VAR_DAYS_LEFT, 7
# 1263 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 1264 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1265 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1266 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1267 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1268 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 1269 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
# 1270 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1271 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1272 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2_6
Route2_House_Eventscript_TheFirstMorning2_5:
# 1275 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 0
# 1276 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2_2:
# 1241 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_2
# 1243 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1244 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1245 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1246 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1247 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_MITSURU
# 1248 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_INTELEON_T
	goto Route2_House_Eventscript_TheFirstMorning2_1

Route2_House_Eventscript_TheFirstMorning2_6:
# 1273 "data/maps/Route2_House/scripts.pory"
	call EventScript_ShowHelpDeadline
	goto Route2_House_Eventscript_TheFirstMorning2_5


# 1280 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1281 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1281 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1282 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1282 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
	step_end

# 1285 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1286 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1286 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1286 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1287 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1287 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1288 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1290 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1291 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1291 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1292 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1295 "data/maps/Route2_House/scripts.pory"
MitsuruJoinsTheFirstMorning:
# 1296 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1296 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1297 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1299 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1300 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1300 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1300 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1300 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1301 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_MitsuruOnWarp8::
# 1305 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruRestForTheNight::
# 1309 "data/maps/Route2_House/scripts.pory"
	lock
# 1310 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0
# 1311 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1312 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1313 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruRestForTheNight_Text_0
# 1314 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1315 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_REST_FOR_THE_NIGHT
# 1316 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1317 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 50
# 1318 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 1319 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1320 "data/maps/Route2_House/scripts.pory"
	delay 50
# 1321 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 4
# 1322 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_MitsuruOnFrame10::
# 1326 "data/maps/Route2_House/scripts.pory"
	lock
# 1327 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1328 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruPostRest
	return


Route2_House_Eventscript_MitsuruPostRest::
# 1332 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1333 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1334 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1335 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruPostRest_Text_0
# 1336 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1337 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_TO_THUNDERSHARD
# 1338 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji::
# 1343 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1344 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1345 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 1346 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1347 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1348 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1349 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1350 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1351 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1352 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1353 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1354 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1355 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1356 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1357 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1358 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1359 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1360 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1361 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1362 "data/maps/Route2_House/scripts.pory"
	playse SE_SUCCESS
# 1363 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 1364 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1365 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1366 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1367 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 1368 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1369 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0
# 1374 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1375 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 1376 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1377 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1
# 1379 "data/maps/Route2_House/scripts.pory"
	callnative ClearMugshot
# 1380 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2
# 1383 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1384 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1385 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1386 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0
# 1387 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1388 "data/maps/Route2_House/scripts.pory"
	showobjectat 4, MAP_ROUTE2_HOUSE
# 1389 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1390 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1391 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1392 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1393 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1
# 1394 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1395 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3
# 1398 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1399 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1400 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 1401 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1402 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4
# 1406 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1407 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1408 "data/maps/Route2_House/scripts.pory"
	applymovement 4, walkinplaceleft
# 1409 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1410 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2
# 1411 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3
# 1412 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1413 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4
# 1414 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1415 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1416 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1417 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1418 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1419 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkinplaceleft
# 1420 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1421 "data/maps/Route2_House/scripts.pory"
	playse SE_PC_OFF
# 1422 "data/maps/Route2_House/scripts.pory"
	waitse
# 1423 "data/maps/Route2_House/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1424 "data/maps/Route2_House/scripts.pory"
	waitse
# 1425 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 8, 0x8BF, TRUE
# 1426 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 9, 0x8CF, TRUE
# 1427 "data/maps/Route2_House/scripts.pory"
	special DrawWholeMapView
# 1428 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1429 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1430 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_ASK_AROUND_FOR_AKSJ
# 1431 "data/maps/Route2_House/scripts.pory"
	fwdtime 17, 15
# 1432 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1433 "data/maps/Route2_House/scripts.pory"
	special ShowMapNamePopup
# 1434 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruCallingTakeharuForHelp::
# 1439 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1440 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0
# 1443 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1444 "data/maps/Route2_House/scripts.pory"
	playse SE_POKENAV_OFF
# 1445 "data/maps/Route2_House/scripts.pory"
	waitse
# 1446 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1447 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 1448 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
# 1449 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceleft
# 1450 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1451 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1
# 1455 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1456 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1457 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1458 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2
# 1462 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1463 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 1464 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1465 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1466 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0
# 1467 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1
# 1468 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1469 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1470 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1471 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1472 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1473 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_TO_ROUTE_2
# 1474 "data/maps/Route2_House/scripts.pory"
	fwdtime 10, 55
# 1475 "data/maps/Route2_House/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 1476 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV::
# 1481 "data/maps/Route2_House/scripts.pory"
	lock
# 1482 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1483 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0
# 1484 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1485 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1486 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_0
# 1487 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1488 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1489 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 1490 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1491 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 1492 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1493 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1494 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 1495 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1496 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_TEMP_5
# 1497 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1498 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkiShinjiWakesUp
# 1499 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1500 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1501 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 1502 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1503 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 1504 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1505 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1506 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAround
# 1507 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1508 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 1509 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1510 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1511 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceup
# 1512 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1513 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 1515 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1
# 1518 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1519 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV
	return


Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV::
# 1523 "data/maps/Route2_House/scripts.pory"
	lock
# 1524 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1525 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 1528 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1529 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1530 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1531 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1532 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 1533 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1534 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1535 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1536 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 1539 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1540 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1541 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1542 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1543 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1544 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 1557 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1558 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1559 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 1560 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1561 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 1563 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1564 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1565 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1566 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 1568 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1569 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 1570 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1571 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1572 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 1573 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1574 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1575 "data/maps/Route2_House/scripts.pory"
	waitse
# 1576 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emoteexclamation
# 1577 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 1578 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1579 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 1586 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1587 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1588 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1589 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1590 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1591 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1592 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1593 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1594 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1595 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1596 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 1600 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1601 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1602 "data/maps/Route2_House/scripts.pory"
	waitse
# 1603 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 1604 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1605 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 1606 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1607 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 1608 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1609 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1610 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 1612 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1613 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1614 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1615 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1616 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1617 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1618 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 1619 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1620 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 1621 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1622 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1623 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1624 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0
# 1625 "data/maps/Route2_House/scripts.pory"
	applymovement 6, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1
# 1626 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2
# 1627 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1628 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1629 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1630 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 1632 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1633 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3
# 1634 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1635 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1636 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV::
# 1640 "data/maps/Route2_House/scripts.pory"
	lock
# 1641 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1642 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 1644 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1645 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 1646 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1647 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 1657 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1658 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 1659 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 1660 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 1661 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1662 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1663 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 1667 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1668 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 1669 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1670 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 1671 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1672 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 1674 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1675 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1676 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1677 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 1680 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1681 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 1682 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1683 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 1686 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1687 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1688 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 1689 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 1690 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1691 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1692 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1693 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 1694 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1695 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 1696 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1697 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 1698 "data/maps/Route2_House/scripts.pory"
	applymovement 8, facedown
# 1699 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 1700 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 1701 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1702 "data/maps/Route2_House/scripts.pory"
	waitse
# 1703 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1704 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1705 "data/maps/Route2_House/scripts.pory"
	waitse
# 1706 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 1707 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1708 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1709 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 1710 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 11
# 1711 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV::
# 1715 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1716 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0
# 1717 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1718 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1719 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_1
# 1720 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1721 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1722 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 1723 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1724 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1725 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 1734 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1735 "data/maps/Route2_House/scripts.pory"
	delay 50
# 1736 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1737 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 1738 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Text_0
# 1751 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1752 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1753 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Text_1
# 1755 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1756 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1757 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotepensive
# 1758 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1759 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 1760 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1761 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1762 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 1769 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1770 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 1771 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 1772 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1773 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 1774 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1775 "data/maps/Route2_House/scripts.pory"
	delay 90
# 1776 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1777 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 1778 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1779 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 1780 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1781 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Text_2
# 1784 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1785 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNightMitsuruPOV
	return


Route2_House_Eventscript_StayingTheNightMitsuruPOV::
# 1789 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1790 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAtTheBed
# 1791 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1792 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_0
# 1793 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1794 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 1795 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1796 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_1
# 1800 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1801 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1802 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AKihikoRemembersCampGears
# 1803 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1804 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 1805 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1806 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 1807 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 1808 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1809 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 1811 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1812 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1813 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoBickering
# 1814 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1815 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1816 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 1817 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1818 "data/maps/Route2_House/scripts.pory"
	lock
# 1819 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1820 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1821 "data/maps/Route2_House/scripts.pory"
	release
# 1822 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1823 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceright
# 1824 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1825 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 1826 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1827 "data/maps/Route2_House/scripts.pory"
	lock
# 1828 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1829 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1830 "data/maps/Route2_House/scripts.pory"
	release
# 1831 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1832 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 1833 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1834 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 1835 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1836 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 1837 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1838 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 1839 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1840 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1841 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1842 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1843 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1844 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1845 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 1846 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1847 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1848 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotemusic
# 1849 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 1850 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1851 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 1853 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1854 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 1855 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1856 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1857 "data/maps/Route2_House/scripts.pory"
	delay 80
# 1858 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1859 "data/maps/Route2_House/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1860 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_2
# 1861 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1862 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_1ST_MORNING
# 1863 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 5
# 1864 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_TheFirstMorningMitsuruPOV::
# 1868 "data/maps/Route2_House/scripts.pory"
	lock
# 1869 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1870 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorningMitsuruPOV_Text_0
# 1871 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1872 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1873 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1874 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1875 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoGoesToPlaceTheFirstMorning
# 1876 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1877 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1878 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1879 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1880 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_SHOW_MAP
# 1881 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1882 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1883 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1884 "data/maps/Route2_House/scripts.pory"
	call EventScript_RegionMap
	return


Route2_House_Eventscript_TheFirstMorning2MitsuruPOV::
# 1888 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1889 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0
# 1901 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1902 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1903 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1904 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1905 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1906 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1907 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1908 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1909 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1910 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0
# 1911 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1912 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1913 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1914 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1915 "data/maps/Route2_House/scripts.pory"
	removeobject 8
# 1916 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1917 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1918 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1919 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1
# 1923 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1924 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1925 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1927 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1928 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2
# 1938 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_INTRO_COMPLETED
# 1939 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1940 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1941 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 1942 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1:
# 1944 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1945 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_INTRO_COMPLETED
# 1946 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1947 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 80
# 1948 "data/maps/Route2_House/scripts.pory"
	setvar VAR_DAYS_LEFT, 7
# 1949 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1950 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1951 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1952 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1953 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_MITSURU
# 1954 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_INTELEON_T
# 1955 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, MITSURUS_PROLOGUE
# 1956 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1957 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1958 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_6
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_5:
# 1961 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 0
# 1962 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2:
# 1929 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_2
# 1930 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1931 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1932 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1933 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1934 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_AKIHIKO
# 1935 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_6:
# 1959 "data/maps/Route2_House/scripts.pory"
	call EventScript_ShowHelpDeadline
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_5


Eventscript_UnlockDeadlineSystem::
# 1968 "data/maps/Route2_House/scripts.pory"
	msgbox Eventscript_UnlockDeadlineSystem_Text_0
# 1975 "data/maps/Route2_House/scripts.pory"
	closemessage
	return


Route2_House_Eventscript_GhostBoyMadPostQuest::
# 1979 "data/maps/Route2_House/scripts.pory"
	lock
# 1980 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_GhostBoyMadPostQuest_Text_0
# 1986 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1987 "data/maps/Route2_House/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 101
# 1988 "data/maps/Route2_House/scripts.pory"
	hidefollower
# 1989 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 1990 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 0
# 1991 "data/maps/Route2_House/scripts.pory"
	call EventScript_CheckDaysLeft
# 1992 "data/maps/Route2_House/scripts.pory"
	release
	end


# 985 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_0:
# 985 "data/maps/Route2_House/scripts.pory"
	walk_up
# 985 "data/maps/Route2_House/scripts.pory"
	walk_up
# 985 "data/maps/Route2_House/scripts.pory"
	walk_up
# 985 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 994 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_1:
# 994 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 994 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
	step_end

# 1310 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0:
# 1310 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1310 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1310 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1310 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1310 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1310 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1310 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1310 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1310 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1310 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1310 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1310 "data/maps/Route2_House/scripts.pory"
	face_right
# 1310 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1310 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1310 "data/maps/Route2_House/scripts.pory"
	face_up
# 1310 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1310 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1310 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 1386 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0:
# 1386 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1386 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 1393 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1:
# 1393 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1393 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1393 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1393 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1393 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1410 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2:
# 1410 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1410 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1411 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3:
# 1411 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1411 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1413 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4:
# 1413 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1413 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1413 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1413 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1466 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0:
# 1466 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1466 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1467 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1:
# 1467 "data/maps/Route2_House/scripts.pory"
	walk_in_place_left
# 1467 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1467 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1467 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1467 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1483 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0:
# 1483 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1483 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1483 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 1624 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0:
# 1624 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1624 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1625 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1:
# 1625 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1625 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1626 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2:
# 1626 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1626 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1626 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1626 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1626 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1626 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1626 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1626 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1626 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 1633 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3:
# 1633 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1633 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1633 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1716 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0:
# 1716 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1716 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1716 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1716 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1716 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1716 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

# 1719 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_1:
# 1719 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

# 1910 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0:
# 1910 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1910 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1910 "data/maps/Route2_House/scripts.pory"
	set_visible
	step_end

Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 223 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 224 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE MUGSHOT_M EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 257 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 260 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE MUGSHOT_M EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 271 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 278 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 282 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 291 "data/maps/Route2_House/scripts.pory"
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
# 308 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 313 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 319 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 326 "data/maps/Route2_House/scripts.pory"
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
# 343 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 352 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 357 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 365 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 445 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 452 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 466 "data/maps/Route2_House/scripts.pory"
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
# 503 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 513 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon's looking at you judgingly.)\p {SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 534 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 544 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 553 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 558 "data/maps/Route2_House/scripts.pory"
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
# 571 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 574 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 581 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 585 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 607 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 613 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "{COLOR RED}We'll be having 3-vs-3 Pokémon battles\n"
	.string "and bag items are not allowed so plan\l"
	.string "your party accordingly.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}{COLOR DARK_GRAY}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 641 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 731 "data/maps/Route2_House/scripts.pory"
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
# 744 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}What if I say, there's a way for a\n"
	.string "trainer to become one with their\l"
	.string "Pokémon?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh? What do you mean?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}In the most literal way possible.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}That's crazy.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Those men you fought- no, the\n"
	.string "organization behind them, is\l"
	.string "researching and developping a way to do\l"
	.string "so.\p"
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
# 762 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me.\n"
	.string "We can simply just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 772 "data/maps/Route2_House/scripts.pory"
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
# 792 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night.\p"
	.string "It's late and we're all tired from the\n"
	.string "battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 820 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Uhhh you sure about that?\n"
	.string "There's only one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 825 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}M-my apologies, it slipped my mind that\n"
	.string "this house doesn't have guest rooms.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}You two can take the bed.\n"
	.string "I'm okay with the floor.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}For Arceus's sake, Princess.\n"
	.string "Aki's kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 835 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 840 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 865 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 869 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 876 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}...$"

Route2_House_Eventscript_StayingTheNight_Text_7:
# 882 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_StayingTheNight_Text_8:
# 891 "data/maps/Route2_House/scripts.pory"
	.string "Later that night...$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 975 "data/maps/Route2_House/scripts.pory"
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
# 990 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Kirijo is already sleeping soundly.\n"
	.string "She won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 1004 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 1009 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 1016 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 1023 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 1055 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_Bathroom_Text_0:
# 1073 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 1098 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 1102 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}(That really freshened me up.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 1111 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 1114 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Let's do it later.)$"

Route2_House_Eventscript_Bathroom_Text_5:
# 1124 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_6:
# 1127 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Let's not waste time any further.)$"

Route2_House_Eventscript_Bathroom_Text_7:
# 1142 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_8:
# 1153 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 1174 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}-yawn-\n"
	.string "(Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 1179 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Everyone, please gather around.\n"
	.string "I'll explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 1190 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning2_Text_0:
# 1199 "data/maps/Route2_House/scripts.pory"
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
# 1230 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2_Text_2:
# 1241 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Mitsuru's Prologue {COLOR GREEN}unlocked.\n"
	.string "Check Quest Menu for more details.$"

Route2_House_Eventscript_MitsuruRestForTheNight_Text_0:
# 1313 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Not too shabby. This will do.$"

Route2_House_Eventscript_MitsuruPostRest_Text_0:
# 1335 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(The sun's up. Time to move out.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0:
# 1369 "data/maps/Route2_House/scripts.pory"
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
# 1377 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(And this one is Aragaki Shinjiro.)\p"
	.string "(He's also adopted on paper and has a\n"
	.string "standard trainer card.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2:
# 1380 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Considering how eagerly the Genesis\n"
	.string "staff were searching for them)\p"
	.string "(I guess they must be ones of their\n"
	.string "“good potential” subjects.)\p"
	.string "(In that case, I must find them before\n"
	.string "the Genesis group does.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3:
# 1395 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Inteleon, you're back.\n"
	.string "Just about time.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I'd love to give you a rest but we really\n"
	.string "have to act right now.\p"
	.string "Although if you're too tired, you can\n"
	.string "return to the Pokéball.$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4:
# 1402 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head, looking\n"
	.string "determined to accompany Mitsuru.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}If that's what you want, alright.\n"
	.string "Let's go then.\p"
	.string "We should start asking around Sunshine\n"
	.string "Town for these two boys.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0:
# 1440 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Yes, Father.\n"
	.string "That'd be great.\p"
	.string "Yes. I'll talk to you later.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1:
# 1451 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}(It's been days and the girl still hasn't\n"
	.string "been found.)\p"
	.string "(There's a great chance that the\n"
	.string "Genesis group has taken her.)\p"
	.string "(I hope Father could help with the\n"
	.string "searching somehow.)\p"
	.string "........$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2:
# 1458 "data/maps/Route2_House/scripts.pory"
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
# 1486 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1:
# 1515 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Text_0:
# 1738 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}What if I say, there's a way for a\n"
	.string "trainer to become one with their\l"
	.string "Pokémon?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh? What do you mean?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}In the most literal way possible.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}That's crazy.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Those men you fought- no, the\n"
	.string "organization behind them, is\l"
	.string "researching and developping a way to do\l"
	.string "so.\p"
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
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}That is to be expected. I would have\n"
	.string "thought the same.$"

Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Text_1:
# 1753 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We can\n"
	.string "simply just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Text_2:
# 1781 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_0:
# 1792 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_1:
# 1796 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}M-my apologies, it slipped my mind that\n"
	.string "this house doesn't have guest rooms.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNightMitsuruPOV_Text_2:
# 1860 "data/maps/Route2_House/scripts.pory"
	.string "The next morning...$"

Route2_House_Eventscript_TheFirstMorningMitsuruPOV_Text_0:
# 1870 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Everyone, please gather around. I'll\n"
	.string "explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0:
# 1889 "data/maps/Route2_House/scripts.pory"
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
	.string "researcher's lab in Windward Port.\l"
	.string "There's a package for us that I've\l"
	.string "ordered.\p"
	.string "It'll be a great help for our journey.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}More gadgets?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}And Pokémon.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Alright! Let's head out then!$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1:
# 1919 "data/maps/Route2_House/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_2:
# 1929 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Akihiko's Prologue {COLOR GREEN}unlocked. Check\n"
	.string "Quest Menu for more details.$"

Eventscript_UnlockDeadlineSystem_Text_0:
# 1968 "data/maps/Route2_House/scripts.pory"
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
# 1980 "data/maps/Route2_House/scripts.pory"
	.string "You woke up in a cold sweat.\p"
	.string "Was that all a dream?\p"
	.string "You took a look at your Pokémon party.\p"
	.string "...\p"
	.string "...\p"
	.string "They were all fainted.$"
