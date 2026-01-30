Route2_House_MapScripts::
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD
# 22 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 126 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 10, 0x24B, TRUE
# 5 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 11, 0x253, TRUE
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/Route2_House/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE2_HOUSE
# 24 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 27 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 27
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 32 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 35 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 38 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 42 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 46 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 55 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 64 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 68 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_35
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 75 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_48
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_47:
# 82 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 26
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_51
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_50:
# 89 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 32
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_54
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_53:
# 92 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 28
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_57
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_56:
# 97 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_60
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_59:
# 108 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 33
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_63
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_62:
# 115 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 34
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_65
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
	clearflag FLAG_HIDE_HELP_BUTTON
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 36 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 35 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 28
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 39 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 40 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 1, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 43 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 44 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 42 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_lt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 47 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 48 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 49 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 50 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 51 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 52 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 56 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 57 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 58 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 59 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 60 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 4, 7
# 61 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 62 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 11, 6
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_26

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 65 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 66 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 72 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 73 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_34:
# 69 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 26
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_39
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_35:
# 68 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_38:
# 70 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 32
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_43
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_39:
# 69 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 28
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_38
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_42:
# 71 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 34
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_43:
# 70 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 33
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_42
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_48:
# 76 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 77 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 2, 9
# 78 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 79 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 7, 13
# 80 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_47

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_51:
# 83 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 84 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 7, 4
# 85 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 86 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 87 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_50

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_54:
# 90 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_5
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_53

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_57:
# 94 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 95 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_56

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_60:
# 98 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 99 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 100 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 101 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 5, 7
# 102 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 103 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 104 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 105 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 106 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_59

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_63:
# 110 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 111 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 112 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 3, 11
# 113 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_62

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_65:
# 117 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 118 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 119 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 120 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 121 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 5, 7
# 122 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnWarp27
# 10 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnWarp32
# 11 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnWarp38
# 12 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 39, Route2_House_Eventscript_AkihikoOnWarp39
# 13 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_House_Eventscript_AkihikoOnWarp42
# 15 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, Route2_House_Eventscript_MitsuruOnWarp8
# 16 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 10, Route2_House_Eventscript_MitsuruOnWarp10
# 17 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 22, Route2_House_Eventscript_MitsuruOnWarp22
# 18 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 26, Route2_House_Eventscript_MitsuruOnWarp26
# 19 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 28, Route2_House_Eventscript_MitsuruOnWarp28
	.2byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 127 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnFrame27
# 128 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnFrame32
# 129 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnFrame38
# 130 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 39, Route2_House_Eventscript_AkihikoOnFrame39
# 131 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_House_Eventscript_AkihikoOnFrame42
# 132 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 43, Route2_House_Eventscript_AkihikoOnFrame43
# 134 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, Route2_House_Eventscript_MitsuruOnFrame8
# 135 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 10, Route2_House_Eventscript_MitsuruOnFrame10
# 136 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 22, Route2_House_Eventscript_MitsuruOnFrame22
# 137 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 26, Route2_House_Eventscript_MitsuruOnFrame26
# 138 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 28, Route2_House_Eventscript_MitsuruOnFrame28
# 139 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 32, Route2_House_Eventscript_MitsuruOnFrame32
# 140 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 33, Route2_House_Eventscript_MitsuruOnFrame33
# 141 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 34, Route2_House_Eventscript_MitsuruOnFrame34
# 143 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_WINDWARD_HARBOR_GHOST_BOY, 44, Route2_House_Eventscript_GhostBoyMadPostQuest
	.2byte 0


Route2_House_Eventscript_MitsuruOnWarp26::
# 148 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruOnWarp28::
# 152 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp27::
# 156 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 160 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 161 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 162 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 166 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnWarp39::
# 169 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
# 170 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnWarp42::
# 173 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_MitsuruOnWarp10::
# 177 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


Route2_House_Eventscript_MitsuruOnWarp22::
# 181 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 182 "data/maps/Route2_House/scripts.pory"
	applymovement 4, invisible
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 186 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 190 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_MitsuruOnFrame8::
# 194 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruRestForTheNight
	return


Route2_House_Eventscript_MitsuruOnFrame22::
# 198 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji
	return


Route2_House_Eventscript_MitsuruOnFrame26::
# 202 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 203 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruCallingTakeharuForHelp
	return


Route2_House_Eventscript_MitsuruOnFrame28::
# 207 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame32::
# 211 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame33::
# 215 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorningMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame34::
# 219 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 223 "data/maps/Route2_House/scripts.pory"
	lock
# 224 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 225 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
# 226 "data/maps/Route2_House/scripts.pory"
	delay 20
# 227 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 228 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 229 "data/maps/Route2_House/scripts.pory"
	delay 30
# 230 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 231 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 232 "data/maps/Route2_House/scripts.pory"
	closemessage
# 233 "data/maps/Route2_House/scripts.pory"
	delay 30
# 234 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 235 "data/maps/Route2_House/scripts.pory"
	delay 4
# 236 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 237 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route2_House/scripts.pory"
	delay 20
# 239 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 240 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 241 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 243 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 244 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 245 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 246 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 247 "data/maps/Route2_House/scripts.pory"
	delay 4
# 248 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 249 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 250 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 251 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route2_House/scripts.pory"
	delay 30
# 253 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 254 "data/maps/Route2_House/scripts.pory"
	delay 8
# 255 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 256 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route2_House/scripts.pory"
	delay 30
# 258 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 259 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 262 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 263 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 266 "data/maps/Route2_House/scripts.pory"
	closemessage
# 267 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 268 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 272 "data/maps/Route2_House/scripts.pory"
	lock
# 273 "data/maps/Route2_House/scripts.pory"
	delay 30
# 274 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 277 "data/maps/Route2_House/scripts.pory"
	closemessage
# 278 "data/maps/Route2_House/scripts.pory"
	delay 30
# 279 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 280 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 281 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 282 "data/maps/Route2_House/scripts.pory"
	closemessage
# 283 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 284 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 288 "data/maps/Route2_House/scripts.pory"
	delay 20
# 289 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 290 "data/maps/Route2_House/scripts.pory"
	delay 8
# 291 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 292 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 293 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 306 "data/maps/Route2_House/scripts.pory"
	closemessage
# 307 "data/maps/Route2_House/scripts.pory"
	delay 20
# 308 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 309 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 312 "data/maps/Route2_House/scripts.pory"
	closemessage
# 313 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 314 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 315 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 317 "data/maps/Route2_House/scripts.pory"
	closemessage
# 318 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 319 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 320 "data/maps/Route2_House/scripts.pory"
	delay 8
# 321 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 322 "data/maps/Route2_House/scripts.pory"
	closemessage
# 323 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 324 "data/maps/Route2_House/scripts.pory"
	waitse
# 325 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 326 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 327 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 328 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 335 "data/maps/Route2_House/scripts.pory"
	closemessage
# 336 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 337 "data/maps/Route2_House/scripts.pory"
	delay 16
# 338 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 339 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 340 "data/maps/Route2_House/scripts.pory"
	delay 60
# 341 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 342 "data/maps/Route2_House/scripts.pory"
	delay 16
# 343 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 344 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 345 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 349 "data/maps/Route2_House/scripts.pory"
	closemessage
# 350 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 351 "data/maps/Route2_House/scripts.pory"
	waitse
# 352 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 353 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 355 "data/maps/Route2_House/scripts.pory"
	closemessage
# 356 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 357 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 358 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 359 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 361 "data/maps/Route2_House/scripts.pory"
	closemessage
# 362 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 363 "data/maps/Route2_House/scripts.pory"
	delay 8
# 364 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 365 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 366 "data/maps/Route2_House/scripts.pory"
	delay 60
# 367 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 368 "data/maps/Route2_House/scripts.pory"
	closemessage
# 369 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 370 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 371 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 372 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 373 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 374 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 20
# 375 "data/maps/Route2_House/scripts.pory"
	release
	end


# 379 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 380 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 382 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 383 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 383 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 383 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 383 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 386 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 387 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 388 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 391 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 392 "data/maps/Route2_House/scripts.pory"
	set_visible
# 393 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 396 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 397 "data/maps/Route2_House/scripts.pory"
	face_left
# 398 "data/maps/Route2_House/scripts.pory"
	delay_16
# 399 "data/maps/Route2_House/scripts.pory"
	delay_16
# 400 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 401 "data/maps/Route2_House/scripts.pory"
	delay_16
# 402 "data/maps/Route2_House/scripts.pory"
	face_right
# 403 "data/maps/Route2_House/scripts.pory"
	delay_16
# 404 "data/maps/Route2_House/scripts.pory"
	delay_16
# 405 "data/maps/Route2_House/scripts.pory"
	delay_16
# 406 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 410 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 411 "data/maps/Route2_House/scripts.pory"
	face_right
# 412 "data/maps/Route2_House/scripts.pory"
	delay_16
# 413 "data/maps/Route2_House/scripts.pory"
	delay_16
# 414 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 415 "data/maps/Route2_House/scripts.pory"
	face_up
# 416 "data/maps/Route2_House/scripts.pory"
	delay_16
# 417 "data/maps/Route2_House/scripts.pory"
	delay_16
# 418 "data/maps/Route2_House/scripts.pory"
	face_left
# 419 "data/maps/Route2_House/scripts.pory"
	delay_16
# 420 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 423 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 424 "data/maps/Route2_House/scripts.pory"
	walk_left
# 425 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 428 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 429 "data/maps/Route2_House/scripts.pory"
	walk_right
# 430 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 433 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 434 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 435 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 438 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 439 "data/maps/Route2_House/scripts.pory"
	walk_left
# 440 "data/maps/Route2_House/scripts.pory"
	walk_up
# 441 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 445 "data/maps/Route2_House/scripts.pory"
	lock
# 446 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 447 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 453 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 462 "data/maps/Route2_House/scripts.pory"
	release
	return

Route2_House_Eventscript_Mitsuru_2:
# 448 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 451 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 454 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 455 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 457 "data/maps/Route2_House/scripts.pory"
	closemessage
# 458 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 459 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 460 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 466 "data/maps/Route2_House/scripts.pory"
	lock
# 467 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 468 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 480 "data/maps/Route2_House/scripts.pory"
	closemessage
# 481 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 482 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 483 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 484 "data/maps/Route2_House/scripts.pory"
	release
	end


# 488 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 489 "data/maps/Route2_House/scripts.pory"
	walk_down
# 490 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 491 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 492 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 492 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 496 "data/maps/Route2_House/scripts.pory"
	lock
# 497 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 498 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 499 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 500 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 501 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 503 "data/maps/Route2_House/scripts.pory"
	closemessage
# 504 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_Inteleon::
# 509 "data/maps/Route2_House/scripts.pory"
	lock
# 510 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 511 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 513 "data/maps/Route2_House/scripts.pory"
	closemessage
# 514 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 515 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToShinjiro::
# 520 "data/maps/Route2_House/scripts.pory"
	lock
# 521 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 522 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 523 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 524 "data/maps/Route2_House/scripts.pory"
	closemessage
# 525 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToMitsuru::
# 530 "data/maps/Route2_House/scripts.pory"
	lock
# 531 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 532 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 533 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 534 "data/maps/Route2_House/scripts.pory"
	closemessage
# 535 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 540 "data/maps/Route2_House/scripts.pory"
	lock
# 541 "data/maps/Route2_House/scripts.pory"
	delay 30
# 542 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 544 "data/maps/Route2_House/scripts.pory"
	closemessage
# 545 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 546 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 547 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 557 "data/maps/Route2_House/scripts.pory"
	closemessage
# 558 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 559 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 560 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 561 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 562 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 563 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 567 "data/maps/Route2_House/scripts.pory"
	closemessage
# 568 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 569 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 570 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 571 "data/maps/Route2_House/scripts.pory"
	closemessage
# 572 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 573 "data/maps/Route2_House/scripts.pory"
	waitse
# 574 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 576 "data/maps/Route2_House/scripts.pory"
	closemessage
# 577 "data/maps/Route2_House/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 578 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_SHARE
# 579 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_EXP_SHARE
# 580 "data/maps/Route2_House/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_2
Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_1:
# 587 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 588 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, VAR_0x800A
# 589 "data/maps/Route2_House/scripts.pory"
	additem ITEM_GREAT_BALL, VAR_0x800B
# 590 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 591 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800A, 0
# 592 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800B, 0
# 593 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 594 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 595 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 598 "data/maps/Route2_House/scripts.pory"
	closemessage
# 599 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 600 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 601 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 604 "data/maps/Route2_House/scripts.pory"
	closemessage
# 605 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 606 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 607 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 608 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 609 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 610 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 611 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 612 "data/maps/Route2_House/scripts.pory"
	delay 16
# 613 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 614 "data/maps/Route2_House/scripts.pory"
	delay 4
# 615 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 616 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 617 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 618 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 619 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 620 "data/maps/Route2_House/scripts.pory"
	waitse
# 621 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 622 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 623 "data/maps/Route2_House/scripts.pory"
	waitse
# 624 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 625 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 626 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 627 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 628 "data/maps/Route2_House/scripts.pory"
	delay 30
# 629 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 632 "data/maps/Route2_House/scripts.pory"
	closemessage
# 633 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 634 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 636 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 637 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 638 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 639 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 640 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 641 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 642 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 643 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 644 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
# 645 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_2:
# 581 "data/maps/Route2_House/scripts.pory"
	call EventScript_ShowHelpPokedex
# 582 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 583 "data/maps/Route2_House/scripts.pory"
	special SetUnlockedPokedexFlags
# 584 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 585 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_1


# 649 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 650 "data/maps/Route2_House/scripts.pory"
	walk_right
# 651 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 654 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 655 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 656 "data/maps/Route2_House/scripts.pory"
	walk_up
# 657 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 659 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 660 "data/maps/Route2_House/scripts.pory"
	walk_left
# 660 "data/maps/Route2_House/scripts.pory"
	walk_left
# 661 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 663 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 664 "data/maps/Route2_House/scripts.pory"
	walk_right
# 665 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 667 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 668 "data/maps/Route2_House/scripts.pory"
	walk_down
# 668 "data/maps/Route2_House/scripts.pory"
	walk_down
# 668 "data/maps/Route2_House/scripts.pory"
	walk_down
# 668 "data/maps/Route2_House/scripts.pory"
	walk_down
# 668 "data/maps/Route2_House/scripts.pory"
	walk_down
# 669 "data/maps/Route2_House/scripts.pory"
	walk_right
# 669 "data/maps/Route2_House/scripts.pory"
	walk_right
# 670 "data/maps/Route2_House/scripts.pory"
	walk_down
# 670 "data/maps/Route2_House/scripts.pory"
	walk_down
# 670 "data/maps/Route2_House/scripts.pory"
	walk_down
# 671 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 673 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 674 "data/maps/Route2_House/scripts.pory"
	walk_down
# 674 "data/maps/Route2_House/scripts.pory"
	walk_down
# 674 "data/maps/Route2_House/scripts.pory"
	walk_down
# 675 "data/maps/Route2_House/scripts.pory"
	walk_right
# 675 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 678 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 679 "data/maps/Route2_House/scripts.pory"
	walk_right
# 679 "data/maps/Route2_House/scripts.pory"
	walk_right
# 679 "data/maps/Route2_House/scripts.pory"
	walk_right
# 679 "data/maps/Route2_House/scripts.pory"
	walk_right
# 680 "data/maps/Route2_House/scripts.pory"
	walk_down
# 680 "data/maps/Route2_House/scripts.pory"
	walk_down
# 680 "data/maps/Route2_House/scripts.pory"
	walk_down
# 681 "data/maps/Route2_House/scripts.pory"
	walk_right
# 681 "data/maps/Route2_House/scripts.pory"
	walk_right
# 682 "data/maps/Route2_House/scripts.pory"
	walk_down
# 682 "data/maps/Route2_House/scripts.pory"
	walk_down
# 683 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 686 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 687 "data/maps/Route2_House/scripts.pory"
	walk_down
# 688 "data/maps/Route2_House/scripts.pory"
	walk_right
# 688 "data/maps/Route2_House/scripts.pory"
	walk_right
# 688 "data/maps/Route2_House/scripts.pory"
	walk_right
# 688 "data/maps/Route2_House/scripts.pory"
	walk_right
# 689 "data/maps/Route2_House/scripts.pory"
	walk_down
# 689 "data/maps/Route2_House/scripts.pory"
	walk_down
# 689 "data/maps/Route2_House/scripts.pory"
	walk_down
# 690 "data/maps/Route2_House/scripts.pory"
	walk_right
# 690 "data/maps/Route2_House/scripts.pory"
	walk_right
# 691 "data/maps/Route2_House/scripts.pory"
	walk_down
# 691 "data/maps/Route2_House/scripts.pory"
	walk_down
# 692 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 695 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 696 "data/maps/Route2_House/scripts.pory"
	walk_up
# 696 "data/maps/Route2_House/scripts.pory"
	walk_up
# 696 "data/maps/Route2_House/scripts.pory"
	walk_up
# 697 "data/maps/Route2_House/scripts.pory"
	walk_left
# 697 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 700 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 701 "data/maps/Route2_House/scripts.pory"
	walk_left
# 701 "data/maps/Route2_House/scripts.pory"
	walk_left
# 702 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 706 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 710 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 711 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 712 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 713 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 714 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 715 "data/maps/Route2_House/scripts.pory"
	delay 8
# 716 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 717 "data/maps/Route2_House/scripts.pory"
	delay 60
# 718 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 727 "data/maps/Route2_House/scripts.pory"
	closemessage
# 728 "data/maps/Route2_House/scripts.pory"
	delay 50
# 729 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 730 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 731 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 744 "data/maps/Route2_House/scripts.pory"
	closemessage
# 745 "data/maps/Route2_House/scripts.pory"
	delay 40
# 746 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 748 "data/maps/Route2_House/scripts.pory"
	closemessage
# 749 "data/maps/Route2_House/scripts.pory"
	delay 30
# 750 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 751 "data/maps/Route2_House/scripts.pory"
	delay 10
# 752 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 753 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 754 "data/maps/Route2_House/scripts.pory"
	delay 60
# 755 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 762 "data/maps/Route2_House/scripts.pory"
	closemessage
# 763 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 764 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 765 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 766 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 767 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 768 "data/maps/Route2_House/scripts.pory"
	delay 90
# 769 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 770 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 771 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 772 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 773 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 774 "data/maps/Route2_House/scripts.pory"
	delay 60
# 775 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 778 "data/maps/Route2_House/scripts.pory"
	closemessage
# 779 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 782 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 783 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 785 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 786 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 786 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 786 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 786 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 787 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 787 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 788 "data/maps/Route2_House/scripts.pory"
	walk_up
# 788 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 791 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 792 "data/maps/Route2_House/scripts.pory"
	walk_up
# 792 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 795 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 796 "data/maps/Route2_House/scripts.pory"
	walk_down
# 796 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 800 "data/maps/Route2_House/scripts.pory"
	delay 60
# 801 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 802 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 803 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 804 "data/maps/Route2_House/scripts.pory"
	closemessage
# 805 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 806 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 807 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 811 "data/maps/Route2_House/scripts.pory"
	closemessage
# 812 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 813 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 814 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 815 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 816 "data/maps/Route2_House/scripts.pory"
	closemessage
# 817 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 818 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 819 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 820 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 822 "data/maps/Route2_House/scripts.pory"
	closemessage
# 823 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 824 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 825 "data/maps/Route2_House/scripts.pory"
	delay 10
# 826 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 827 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 828 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 829 "data/maps/Route2_House/scripts.pory"
	lock
# 830 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 831 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 832 "data/maps/Route2_House/scripts.pory"
	release
# 833 "data/maps/Route2_House/scripts.pory"
	delay 30
# 834 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 835 "data/maps/Route2_House/scripts.pory"
	delay 10
# 836 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 837 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 838 "data/maps/Route2_House/scripts.pory"
	lock
# 839 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 840 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 841 "data/maps/Route2_House/scripts.pory"
	release
# 842 "data/maps/Route2_House/scripts.pory"
	delay 30
# 843 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 844 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 845 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 846 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 847 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 848 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 849 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 850 "data/maps/Route2_House/scripts.pory"
	closemessage
# 851 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 852 "data/maps/Route2_House/scripts.pory"
	delay 10
# 853 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 854 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 855 "data/maps/Route2_House/scripts.pory"
	delay 60
# 856 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 857 "data/maps/Route2_House/scripts.pory"
	closemessage
# 858 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 859 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 860 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 861 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 862 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 864 "data/maps/Route2_House/scripts.pory"
	closemessage
# 865 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 866 "data/maps/Route2_House/scripts.pory"
	delay 30
# 867 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 868 "data/maps/Route2_House/scripts.pory"
	delay 80
# 869 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 870 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 873 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 874 "data/maps/Route2_House/scripts.pory"
	face_left
# 875 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 876 "data/maps/Route2_House/scripts.pory"
	delay_16
# 877 "data/maps/Route2_House/scripts.pory"
	delay_16
# 878 "data/maps/Route2_House/scripts.pory"
	delay_16
# 879 "data/maps/Route2_House/scripts.pory"
	delay_16
# 880 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 883 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 884 "data/maps/Route2_House/scripts.pory"
	face_left
# 885 "data/maps/Route2_House/scripts.pory"
	delay_16
# 886 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 887 "data/maps/Route2_House/scripts.pory"
	delay_16
# 888 "data/maps/Route2_House/scripts.pory"
	delay_16
# 889 "data/maps/Route2_House/scripts.pory"
	delay_16
# 890 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 893 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 894 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 895 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 898 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 899 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 900 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 903 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 904 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 907 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 908 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 909 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 910 "data/maps/Route2_House/scripts.pory"
	delay_16
# 911 "data/maps/Route2_House/scripts.pory"
	delay_16
# 912 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 913 "data/maps/Route2_House/scripts.pory"
	emote_x
# 914 "data/maps/Route2_House/scripts.pory"
	delay_16
# 915 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 918 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 919 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 920 "data/maps/Route2_House/scripts.pory"
	emote_x
# 921 "data/maps/Route2_House/scripts.pory"
	delay_16
# 922 "data/maps/Route2_House/scripts.pory"
	delay_16
# 923 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 924 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 925 "data/maps/Route2_House/scripts.pory"
	delay_16
# 926 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 929 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 930 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 932 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 933 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 933 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 933 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 937 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 941 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 942 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 943 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 944 "data/maps/Route2_House/scripts.pory"
	delay 60
# 945 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 946 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 947 "data/maps/Route2_House/scripts.pory"
	delay 40
# 948 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 954 "data/maps/Route2_House/scripts.pory"
	closemessage
# 955 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 956 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 957 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 958 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_0
# 959 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 960 "data/maps/Route2_House/scripts.pory"
	applymovement 7, emoteasleep
# 961 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 962 "data/maps/Route2_House/scripts.pory"
	delay 30
# 963 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 964 "data/maps/Route2_House/scripts.pory"
	closemessage
# 965 "data/maps/Route2_House/scripts.pory"
	delay 20
# 966 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_1
# 967 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 968 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 969 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 970 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 971 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 972 "data/maps/Route2_House/scripts.pory"
	delay 30
# 973 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 974 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 975 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 976 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 977 "data/maps/Route2_House/scripts.pory"
	closemessage
# 978 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 979 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 980 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 981 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 983 "data/maps/Route2_House/scripts.pory"
	closemessage
# 984 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 985 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 986 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 987 "data/maps/Route2_House/scripts.pory"
	delay 30
# 988 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 990 "data/maps/Route2_House/scripts.pory"
	closemessage
# 991 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 992 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 993 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 994 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 995 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 996 "data/maps/Route2_House/scripts.pory"
	closemessage
# 997 "data/maps/Route2_House/scripts.pory"
	delay 20
# 998 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 999 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1000 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1001 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 1002 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1003 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 40
# 1004 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 1005 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 10, 12
	return


# 1008 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 1009 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 1012 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 1013 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1013 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1016 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 1017 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1017 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1020 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 1021 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1021 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1021 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1021 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1022 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 1022 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 1026 "data/maps/Route2_House/scripts.pory"
	lock
# 1027 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 1028 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1029 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
	end

TakeARest_2:
# 1030 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1031 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1032 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 1033 "data/maps/Route2_House/scripts.pory"
	waitse
# 1034 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 1035 "data/maps/Route2_House/scripts.pory"
	updatefollowingmon
# 1036 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_Bathroom::
# 1043 "data/maps/Route2_House/scripts.pory"
	lock
# 1044 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 1093 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 1113 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 1124 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 1130 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 1045 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 1046 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1047 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 1081 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1082 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_22
# 1086 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
Route2_House_Eventscript_Bathroom_21:
# 1088 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1089 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1090 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 1094 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1095 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_14
# 1099 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_6
Route2_House_Eventscript_Bathroom_13:
# 1101 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1102 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1103 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1104 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1105 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_27
Route2_House_Eventscript_Bathroom_25:
# 1109 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_4:
# 1114 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_7
# 1119 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1120 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1121 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1122 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 1125 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_8
# 1126 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1127 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1128 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 1048 "data/maps/Route2_House/scripts.pory"
	hidefollowernpc
# 1049 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1050 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 1051 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 1052 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1053 "data/maps/Route2_House/scripts.pory"
	waitse
# 1054 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SURF
# 1055 "data/maps/Route2_House/scripts.pory"
	waitse
# 1056 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1057 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1058 "data/maps/Route2_House/scripts.pory"
	waitse
# 1059 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1060 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1061 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1062 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1063 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1064 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1065 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 1066 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1067 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1068 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_18
# 1073 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 40
# 1074 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
Route2_House_Eventscript_Bathroom_17:
# 1076 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1077 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1078 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_14:
# 1096 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
	goto Route2_House_Eventscript_Bathroom_13

Route2_House_Eventscript_Bathroom_18:
# 1069 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 10
# 1070 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
	goto Route2_House_Eventscript_Bathroom_17

Route2_House_Eventscript_Bathroom_22:
# 1083 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
	goto Route2_House_Eventscript_Bathroom_21

Route2_House_Eventscript_Bathroom_26:
# 1107 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_25

Route2_House_Eventscript_Bathroom_27:
# 1105 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_House_Eventscript_Bathroom_26
	goto Route2_House_Eventscript_Bathroom_25


Route2_House_Eventscript_AkihikoOnFrame42::
# 1135 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_AkihikoOnFrame43::
# 1139 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2
	return


Route2_House_Eventscript_TheFirstMorning::
# 1142 "data/maps/Route2_House/scripts.pory"
	lock
# 1143 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 43
# 1144 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1145 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 1146 "data/maps/Route2_House/scripts.pory"
	waitse
# 1147 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 1149 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1150 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1151 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1152 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1153 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1154 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 1155 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1156 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 1157 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1158 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1159 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1160 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1161 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1162 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1163 "data/maps/Route2_House/scripts.pory"
	goto EventScript_RegionMap
# 1164 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TheFirstMorning2::
# 1168 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1169 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1181 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1182 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1183 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1184 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1185 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1186 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1187 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1188 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1189 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1190 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1191 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1192 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1193 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_TheFirstMorning2_Movement_0
# 1194 "data/maps/Route2_House/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1195 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1196 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1197 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1198 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1199 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_1
# 1203 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1204 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1205 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1207 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1208 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2_2
# 1220 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 1221 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1222 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1223 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_MITSURU
# 1224 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_INTELEON_T
Route2_House_Eventscript_TheFirstMorning2_1:
# 1227 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1228 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 1229 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1230 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 80
# 1231 "data/maps/Route2_House/scripts.pory"
	setvar VAR_DAYS_LEFT, 15
# 1232 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 1233 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1234 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1235 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1236 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1237 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 1238 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
# 1239 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1240 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1241 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2_6
Route2_House_Eventscript_TheFirstMorning2_5:
# 1244 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2_2:
# 1210 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_2
# 1212 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1213 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1214 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1215 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1216 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_MITSURU
# 1217 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_INTELEON_T
	goto Route2_House_Eventscript_TheFirstMorning2_1

Route2_House_Eventscript_TheFirstMorning2_6:
# 1242 "data/maps/Route2_House/scripts.pory"
	call EventScript_ShowHelpDeadline
	goto Route2_House_Eventscript_TheFirstMorning2_5


# 1248 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1249 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1249 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1250 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1250 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1251 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1254 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1255 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1255 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1255 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1255 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1256 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1256 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1257 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1259 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1260 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1260 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1261 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1264 "data/maps/Route2_House/scripts.pory"
MitsuruJoinsTheFirstMorning:
# 1265 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1265 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1266 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1268 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1269 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1269 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1269 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1269 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1270 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_MitsuruOnWarp8::
# 1274 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruRestForTheNight::
# 1278 "data/maps/Route2_House/scripts.pory"
	lock
# 1279 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0
# 1280 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1281 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1282 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruRestForTheNight_Text_0
# 1283 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1284 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 9
# 1285 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 1286 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1287 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP
	return


Route2_House_Eventscript_MitsuruOnFrame10::
# 1291 "data/maps/Route2_House/scripts.pory"
	lock
# 1292 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1293 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruPostRest
	return


Route2_House_Eventscript_MitsuruPostRest::
# 1297 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1298 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1299 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1300 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruPostRest_Text_0
# 1301 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1302 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 11
# 1303 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 1304 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1305 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji::
# 1310 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1311 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1312 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 1313 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1314 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1315 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1316 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1317 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1318 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1319 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1320 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1321 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1322 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1323 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1324 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1325 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1326 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1327 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1328 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1329 "data/maps/Route2_House/scripts.pory"
	playse SE_SUCCESS
# 1330 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 1331 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1332 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1333 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1334 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 1335 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1336 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0
# 1341 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1342 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 1343 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1344 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1
# 1346 "data/maps/Route2_House/scripts.pory"
	callnative ClearMugshot
# 1347 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2
# 1350 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1351 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1352 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1353 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0
# 1354 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1355 "data/maps/Route2_House/scripts.pory"
	showobjectat 4, MAP_ROUTE2_HOUSE
# 1356 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1357 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1358 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1359 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1360 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1
# 1361 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1362 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3
# 1365 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1366 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1367 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 1368 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1369 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4
# 1372 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1373 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1374 "data/maps/Route2_House/scripts.pory"
	applymovement 4, walkinplaceleft
# 1375 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1376 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2
# 1377 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3
# 1378 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1379 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4
# 1380 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1381 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1382 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1383 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1384 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1385 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkinplaceleft
# 1386 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1387 "data/maps/Route2_House/scripts.pory"
	playse SE_PC_OFF
# 1388 "data/maps/Route2_House/scripts.pory"
	waitse
# 1389 "data/maps/Route2_House/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1390 "data/maps/Route2_House/scripts.pory"
	waitse
# 1391 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 10, 0x22A, TRUE
# 1392 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 11, 0x232, TRUE
# 1393 "data/maps/Route2_House/scripts.pory"
	special DrawWholeMapView
# 1394 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1395 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1396 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 23
# 1397 "data/maps/Route2_House/scripts.pory"
	fwdtime 17, 15
# 1398 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1399 "data/maps/Route2_House/scripts.pory"
	special ShowMapNamePopup
# 1400 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruCallingTakeharuForHelp::
# 1405 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1406 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0
# 1408 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1409 "data/maps/Route2_House/scripts.pory"
	playse SE_POKENAV_OFF
# 1410 "data/maps/Route2_House/scripts.pory"
	waitse
# 1411 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1412 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 1413 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
# 1414 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceleft
# 1415 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1416 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1
# 1420 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1421 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1422 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2
# 1426 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1427 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 1428 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1429 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1430 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0
# 1431 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1
# 1432 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1433 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1434 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1435 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1436 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1437 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 27
# 1438 "data/maps/Route2_House/scripts.pory"
	fwdtime 10, 55
# 1439 "data/maps/Route2_House/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 1440 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV::
# 1445 "data/maps/Route2_House/scripts.pory"
	lock
# 1446 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1447 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0
# 1448 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1449 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1450 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_0
# 1451 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1452 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1453 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 1454 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1455 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 1456 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1457 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1458 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 1459 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1460 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_TEMP_5
# 1461 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1462 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkiShinjiWakesUp
# 1463 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1464 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1465 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 1466 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1467 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 1468 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1469 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1470 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAround
# 1471 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1472 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 1473 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1474 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1475 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceup
# 1476 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1477 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 1479 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1
# 1482 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1483 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV
	return


Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV::
# 1487 "data/maps/Route2_House/scripts.pory"
	lock
# 1488 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1489 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 1492 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1493 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1494 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1495 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1496 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 1497 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1498 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1499 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1500 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 1503 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1504 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1505 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1506 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1507 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1508 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 1521 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1522 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1523 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 1524 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1525 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 1527 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1528 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1529 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1530 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 1532 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1533 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 1534 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1535 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1536 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 1537 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1538 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1539 "data/maps/Route2_House/scripts.pory"
	waitse
# 1540 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emoteexclamation
# 1541 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 1542 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1543 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 1550 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1551 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1552 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1553 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1554 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1555 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1556 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1557 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1558 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1559 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1560 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 1564 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1565 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1566 "data/maps/Route2_House/scripts.pory"
	waitse
# 1567 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 1568 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1569 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 1570 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1571 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 1572 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1573 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1574 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 1576 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1577 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1578 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1579 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1580 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1581 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1582 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 1583 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1584 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 1585 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1586 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1587 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1588 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0
# 1589 "data/maps/Route2_House/scripts.pory"
	applymovement 6, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1
# 1590 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2
# 1591 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1592 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1593 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1594 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 1596 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1597 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3
# 1598 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1599 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1600 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV::
# 1604 "data/maps/Route2_House/scripts.pory"
	lock
# 1605 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1606 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 1608 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1609 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 1610 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1611 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 1621 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1622 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 1623 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 1624 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 1625 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1626 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1627 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 1631 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1632 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 1633 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1634 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 1635 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1636 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 1638 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1639 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1640 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1641 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 1644 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1645 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 1646 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1647 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 1650 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1651 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1652 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 1653 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 1654 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1655 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1656 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1657 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 1658 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1659 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 1660 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1661 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 1662 "data/maps/Route2_House/scripts.pory"
	applymovement 8, facedown
# 1663 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 1664 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 1665 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1666 "data/maps/Route2_House/scripts.pory"
	waitse
# 1667 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1668 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1669 "data/maps/Route2_House/scripts.pory"
	waitse
# 1670 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 1671 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1672 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 29
# 1673 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1674 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 1675 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 11
	return


Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV::
# 1679 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1680 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0
# 1681 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1682 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1683 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_1
# 1684 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1685 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1686 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 1687 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1688 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1689 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 1698 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1699 "data/maps/Route2_House/scripts.pory"
	delay 50
# 1700 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1701 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 1702 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 1715 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1716 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1717 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 1719 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1720 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1721 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotepensive
# 1722 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1723 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 1724 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1725 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1726 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 1733 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1734 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 1735 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 1736 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1737 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 1738 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1739 "data/maps/Route2_House/scripts.pory"
	delay 90
# 1740 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1741 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 1742 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1743 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 1744 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1745 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 1748 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1749 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNightMitsuruPOV
	return


Route2_House_Eventscript_StayingTheNightMitsuruPOV::
# 1753 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1754 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAtTheBed
# 1755 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1756 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 1757 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1758 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 1759 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1760 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 1764 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1765 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1766 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AKihikoRemembersCampGears
# 1767 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1768 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 1769 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1770 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 1771 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 1772 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1773 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 1775 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1776 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1777 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoBickering
# 1778 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1779 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1780 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 1781 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1782 "data/maps/Route2_House/scripts.pory"
	lock
# 1783 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1784 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1785 "data/maps/Route2_House/scripts.pory"
	release
# 1786 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1787 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceright
# 1788 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1789 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 1790 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1791 "data/maps/Route2_House/scripts.pory"
	lock
# 1792 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1793 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1794 "data/maps/Route2_House/scripts.pory"
	release
# 1795 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1796 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 1797 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1798 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 1799 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1800 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 1801 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1802 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 1803 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1804 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1805 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1806 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1807 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1808 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1809 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 1810 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1811 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1812 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotemusic
# 1813 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 1814 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1815 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 1817 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1818 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 1819 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1820 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1821 "data/maps/Route2_House/scripts.pory"
	delay 80
# 1822 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1823 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 1824 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_TheFirstMorningMitsuruPOV::
# 1828 "data/maps/Route2_House/scripts.pory"
	lock
# 1829 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1830 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1831 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1832 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1833 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1834 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1835 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoGoesToPlaceTheFirstMorning
# 1836 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1837 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1838 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1839 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1840 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 34
# 1841 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1842 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1843 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1844 "data/maps/Route2_House/scripts.pory"
	call EventScript_RegionMap
	return


Route2_House_Eventscript_TheFirstMorning2MitsuruPOV::
# 1848 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1849 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1861 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1862 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1863 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1864 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1865 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1866 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1867 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1868 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1869 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 1870 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0
# 1871 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1872 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1873 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1874 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1875 "data/maps/Route2_House/scripts.pory"
	removeobject 8
# 1876 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1877 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1878 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1879 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0
# 1883 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1884 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1885 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1887 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1888 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2
# 1898 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 1899 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1900 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1901 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 1902 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1:
# 1904 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1905 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 1906 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1907 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 80
# 1908 "data/maps/Route2_House/scripts.pory"
	setvar VAR_DAYS_LEFT, 15
# 1909 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1910 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1911 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1912 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1913 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_MITSURU
# 1914 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_LOCK_INTELEON_T
# 1915 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, MITSURUS_PROLOGUE
# 1916 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1917 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1918 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_6
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_5:
# 1921 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2:
# 1889 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1
# 1890 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1891 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1892 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1893 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1894 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_AKIHIKO
# 1895 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_6:
# 1919 "data/maps/Route2_House/scripts.pory"
	call EventScript_ShowHelpDeadline
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_5


Eventscript_UnlockDeadlineSystem::
# 1927 "data/maps/Route2_House/scripts.pory"
	msgbox Eventscript_UnlockDeadlineSystem_Text_0
# 1934 "data/maps/Route2_House/scripts.pory"
	closemessage
	return


Route2_House_Eventscript_GhostBoyMadPostQuest::
# 1938 "data/maps/Route2_House/scripts.pory"
	lock
# 1939 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_GhostBoyMadPostQuest_Text_0
# 1945 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1946 "data/maps/Route2_House/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 101
# 1947 "data/maps/Route2_House/scripts.pory"
	hidefollower
# 1948 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 1949 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 0
# 1950 "data/maps/Route2_House/scripts.pory"
	call EventScript_CheckDaysLeft
# 1951 "data/maps/Route2_House/scripts.pory"
	release
	end


# 958 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_0:
# 958 "data/maps/Route2_House/scripts.pory"
	walk_up
# 958 "data/maps/Route2_House/scripts.pory"
	walk_up
# 958 "data/maps/Route2_House/scripts.pory"
	walk_up
# 958 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 966 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_1:
# 966 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 966 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
	step_end

# 1193 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2_Movement_0:
# 1193 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1193 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1193 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1279 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0:
# 1279 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1279 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1279 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1279 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1279 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1279 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1279 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1279 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1279 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1279 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1279 "data/maps/Route2_House/scripts.pory"
	face_right
# 1279 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1279 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1279 "data/maps/Route2_House/scripts.pory"
	face_up
# 1279 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1279 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1279 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 1353 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0:
# 1353 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1353 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 1360 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1:
# 1360 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1360 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1360 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1376 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2:
# 1376 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1376 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1377 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3:
# 1377 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1377 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1377 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1377 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1379 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4:
# 1379 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1379 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1379 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1379 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1430 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0:
# 1430 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1430 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1431 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1:
# 1431 "data/maps/Route2_House/scripts.pory"
	walk_in_place_left
# 1431 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1431 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1431 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1431 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1447 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0:
# 1447 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1447 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1447 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 1588 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0:
# 1588 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1588 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1589 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1:
# 1589 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1589 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1590 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2:
# 1590 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1590 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1590 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1590 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1590 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1590 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1590 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1590 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1590 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 1597 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3:
# 1597 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1597 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1597 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1680 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0:
# 1680 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1680 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1680 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1680 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1680 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1680 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

# 1683 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_1:
# 1683 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

# 1870 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0:
# 1870 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1870 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1870 "data/maps/Route2_House/scripts.pory"
	set_visible
	step_end

Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 230 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 231 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 260 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 263 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 274 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 281 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 285 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 293 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}So? What does a billionaire girl like you\n"
	.string "want with us?\p"
	.string "For whatever it is, I'm not interested. I\n"
	.string "only want to train and become a\l"
	.string "stronger trainer.\p"
	.string "I could've dealed with the Drowzee\n"
	.string "earlier if I were-\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Wait- Are you with the men in black who\n"
	.string "tried to kidnap us!?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}...\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}No.\p"
	.string "In fact, I managed to disrupt them and\n"
	.string "brought you two here.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}To be more precise, my mission is to\n"
	.string "stop them.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SERIOUS}Stop them?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}Both of you are from Sunshine\n"
	.string "Orphanage, correct?\p"
	.string "Right now I can say for certain that\n"
	.string "the explosion which happened a few\l"
	.string "days ago was their doing.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}!!\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SURPRISED}-!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_4:
# 310 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 315 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 321 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 328 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Huh?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I believe you have a reason for wanting\n"
	.string "to get stronger.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I have clues of where to find those men\n"
	.string "in black and what they are doing.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}And earlier I saw your battle with them.\n"
	.string "You have great potential.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}If you'll join me... I promise it'll be a\n"
	.string "great challenge.\p"
	.string "I'll also share what I know about those\n"
	.string "men with you.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_8:
# 345 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 354 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 359 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 367 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 448 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 455 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 468 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}What's wrong, Shinji?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SERIOUS}I don't trust her.\p"
	.string "She's hiding lots of information and we\n"
	.string "don't even know if it's true that she's\l"
	.string "not on those men's side.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}But she's also the only lead we have\n"
	.string "right now. We didn't even know where to\l"
	.string "start looking for Miki.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_CONFIDENT}Besides, she said it'd be a great\n"
	.string "challenge.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}So you're tempted.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}Honestly, yes.\p"
	.string "If what she said was true, I may find\n"
	.string "Miki or at least her whereabouts while\l"
	.string "going after those men in black.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}I'm joining her. Don't stop me.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SERIOUS}Told you I didn't trust her.\p"
	.string "So if you join her, I will too. Someone's\n"
	.string "gotta keep an eye on her.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_CONFIDENT}Alright, let's try asking her then.$"

Route2_House_Eventscript_AVulpix_Text_0:
# 501 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 511 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon's looking at you judgingly.)\p {SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 523 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 533 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 542 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 547 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Hm... Shinjiro Aragaki-kun, correct?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SERIOUS}... You sure have done your research\n"
	.string "thoroughly.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}I'll take that as a compliment.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SERIOUS}That wasn't.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Heh...\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I have yet to know if you're able to\n"
	.string "hold your ground when the situation\l"
	.string "calls for it.\p"
	.string "If I'm not mistaken, you don't have a\n"
	.string "Pokémon of your own yet.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SERIOUS}I can just catch one.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Alright. Then how about this.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_CONFIDENT}Before the sun sets, if you can beat me\n"
	.string "in a Pokémon battle, you can come with\l"
	.string "us.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2:
# 560 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 563 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 570 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 574 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 595 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 601 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "{COLOR RED}We'll be having 3-vs-3 Pokémon battles\n"
	.string "and bag items are not allowed so plan\l"
	.string "your party accordingly.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}{COLOR DARK_GRAY}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 629 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 718 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Alright, everyone's here.\p"
	.string "Before I start, I'd like to ask you two a\n"
	.string "question.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Sure? What is it?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}How far can a trainer synergize with\n"
	.string "their Pokémon?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_DOUBT}Uhh... what?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}You mean their bonds?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}I know when a trainer and a Pokémon\n"
	.string "share a deep trust, Mega Evolution can\l"
	.string "be achieved.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}That is right, but not what I meant.\p"
	.string "Perhaps I should put it like this.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1:
# 731 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}What if I say, there's a way for a\n"
	.string "trainer to become one with their\l"
	.string "Pokémon?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Huh? What do you mean?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}In the most literal way possible.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SURPRISED}That's crazy.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}Those men you fought- no, the\n"
	.string "organization behind them, is\l"
	.string "researching and developping a way to do\l"
	.string "so.\p"
	.string "Lots of progress has been made and\n"
	.string "there are already a few prototypes.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}Of course, the method isn't perfect and\n"
	.string "there are more-\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Wait, wait just a minute. I'm lost.\p"
	.string "Prototypes?? Of what exactly??\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}A new specimen of human, who is able to\n"
	.string "use Pokémon's ability, in one way or\l"
	.string "another.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}You're kidding??\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SURPRISED}The more I listen to you, the crazier\n"
	.string "you sound.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}That is to be expected. I would have\n"
	.string "thought the same.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2:
# 746 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We can\n"
	.string "simply just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 755 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}Look, Princess. It's not like we don't\n"
	.string "want to believe you.\p"
	.string "It all just sounds too much like\n"
	.string "fiction, okay.\p"
	.string "At least show us some proofs?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}Right, didn't you say you know where to\n"
	.string "find them?\p"
	.string "How about you lead us to them and we'll\n"
	.string "see if what you said were real.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}.....\p"
	.string "Very well. I suppose that's a logical\n"
	.string "idea.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4:
# 775 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 803 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 807 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}M-my apologies, it slipped my mind that\n"
	.string "this house doesn't have guest rooms.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 815 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 820 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 845 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 849 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 856 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}...$"

Route2_House_Eventscript_StayingTheNight_Text_7:
# 862 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 948 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_STRUGGLED}(Dang... I can't sleep at all.)\p"
	.string "(Gotta admit, what Kirijo said earlier\n"
	.string "does bug me.)\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}(It didn't look like she was lying.)\p"
	.string "(If it was all true... and if Miki is\n"
	.string "already in their hands...)\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_STRUGGLED}(No, I must think positively. She\n"
	.string "must've still been fine and been waiting\l"
	.string "for me to come get her home.)\p"
	.string "(If I can't sleep... may as well go train a\n"
	.string "bit.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_1:
# 963 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(Kirijo is already sleeping soundly. She\n"
	.string "won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 976 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 981 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 988 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 995 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 1027 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_Bathroom_Text_0:
# 1045 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 1070 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 1074 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}(That really freshened me up.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 1083 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 1086 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(Let's do it later.)$"

Route2_House_Eventscript_Bathroom_Text_5:
# 1096 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_6:
# 1099 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(Let's not waste time any further.)$"

Route2_House_Eventscript_Bathroom_Text_7:
# 1114 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_8:
# 1125 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 1147 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_STRUGGLED}-yawn- (Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 1151 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Everyone, please gather around. I'll\n"
	.string "explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 1161 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning2_Text_0:
# 1169 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I believe our destination is around the\n"
	.string "base of Goldenwings Mountain.\p"
	.string "To get there we can take a ship from\n"
	.string "Coralport, west of here.\p"
	.string "Then we go through Route 4 from\n"
	.string "Windward Town.\p"
	.string "Any questions?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Nope, the path is simple enough.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}C'est magnifique.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Oh, before I forget.\p"
	.string "We should make a stop at my personal\n"
	.string "researcher's lab in Windward Port.\l"
	.string "There's a package for us that I've\l"
	.string "ordered.\p"
	.string "It'll be a great help for our journey.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}More gadgets?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}And Pokémon.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Alright! Let's head out then!$"

Route2_House_Eventscript_TheFirstMorning2_Text_1:
# 1199 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2_Text_2:
# 1210 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Mitsuru's Prologue {COLOR GREEN}unlocked.\n"
	.string "Check Quest Menu for more details.$"

Route2_House_Eventscript_MitsuruRestForTheNight_Text_0:
# 1282 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Not too shabby. This will do.$"

Route2_House_Eventscript_MitsuruPostRest_Text_0:
# 1300 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(The sun's up. Time to move out.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0:
# 1336 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(So this boy is... Akihiko Sanada.)\p"
	.string "(He got adopted a few days ago, along\n"
	.string "with his younger sister Miki.)\p"
	.string "(Well, on paper at least, I suppose?)\p"
	.string "(Otherwise those men wouldn't have\n"
	.string "been searching for him near the\l"
	.string "orphanage.)\p"
	.string "(Already has a standard trainer card...\n"
	.string "issued a week ago.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1:
# 1344 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(And this one is Aragaki Shinjiro.)\p"
	.string "(He's also adopted on paper and has a\n"
	.string "standard trainer card.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2:
# 1347 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}(Considering how eagerly the Genesis\n"
	.string "staff were searching for them)\p"
	.string "(I guess they must be ones of their\n"
	.string "“good potential” subjects.)\p"
	.string "(In that case, I must find them before\n"
	.string "the Genesis group does.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3:
# 1362 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Inteleon, you're back. Just about time.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I'd love to give you a rest but we really\n"
	.string "have to act right now.\p"
	.string "Although if you're too tired, you can\n"
	.string "return to the Pokéball.$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4:
# 1369 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head, looking\n"
	.string "determined to accompany Mitsuru.)\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}If that's what you want, alright. Let's\n"
	.string "go then.\p"
	.string "We should start asking around Sunshine\n"
	.string "Town for these two boys.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0:
# 1406 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Yes, Father. That'd be great.\p"
	.string "Yes. I'll talk to you later.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1:
# 1416 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}(It's been days and the girl still hasn't\n"
	.string "been found.)\p"
	.string "(There's a great chance that the\n"
	.string "Genesis group has taken her.)\p"
	.string "(I hope Father could help with the\n"
	.string "searching somehow.)\p"
	.string "........$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2:
# 1422 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}I've been avoidant about confronting\n"
	.string "the boys.\p"
	.string "I don't know how to face them after\n"
	.string "what I'd done.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}However, we can't afford to lose any\n"
	.string "more time before the group erases their\l"
	.string "tracks again.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}Let's go talk to Sanada and Aragaki,\n"
	.string "Vulpix, Inteleon.$"

Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_0:
# 1450 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1:
# 1479 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0:
# 1879 "data/maps/Route2_House/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1:
# 1889 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Akihiko's Prologue {COLOR GREEN}unlocked. Check\n"
	.string "Quest Menu for more details.$"

Eventscript_UnlockDeadlineSystem_Text_0:
# 1927 "data/maps/Route2_House/scripts.pory"
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
# 1939 "data/maps/Route2_House/scripts.pory"
	.string "You woke up in a cold sweat.\p"
	.string "Was that all a dream?\p"
	.string "You took a look at your Pokémon party.\p"
	.string "...\p"
	.string "...\p"
	.string "They were all fainted.$"
