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
	makecharaUnavailable CHARACTER_SHINJIRO
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
	setflag FLAG_SYS_POKEDEX_GET
# 581 "data/maps/Route2_House/scripts.pory"
	special SetUnlockedPokedexFlags
# 582 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 583 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 584 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 585 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, VAR_0x800A
# 586 "data/maps/Route2_House/scripts.pory"
	additem ITEM_GREAT_BALL, VAR_0x800B
# 587 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 588 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800A, 0
# 589 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800B, 0
# 590 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 591 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 592 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 595 "data/maps/Route2_House/scripts.pory"
	closemessage
# 596 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 597 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 598 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 601 "data/maps/Route2_House/scripts.pory"
	closemessage
# 602 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 603 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 604 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 605 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 606 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 607 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 608 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 609 "data/maps/Route2_House/scripts.pory"
	delay 16
# 610 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 611 "data/maps/Route2_House/scripts.pory"
	delay 4
# 612 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 613 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 614 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 615 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 616 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 617 "data/maps/Route2_House/scripts.pory"
	waitse
# 618 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 619 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 620 "data/maps/Route2_House/scripts.pory"
	waitse
# 621 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 622 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 623 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 624 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 625 "data/maps/Route2_House/scripts.pory"
	delay 30
# 626 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 629 "data/maps/Route2_House/scripts.pory"
	closemessage
# 630 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 631 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 632 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 633 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 634 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 635 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 636 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 637 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 638 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 639 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 640 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 641 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 642 "data/maps/Route2_House/scripts.pory"
	release
	end


# 646 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 647 "data/maps/Route2_House/scripts.pory"
	walk_right
# 648 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 651 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 652 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 653 "data/maps/Route2_House/scripts.pory"
	walk_up
# 654 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 656 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 657 "data/maps/Route2_House/scripts.pory"
	walk_left
# 657 "data/maps/Route2_House/scripts.pory"
	walk_left
# 658 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 660 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 661 "data/maps/Route2_House/scripts.pory"
	walk_right
# 662 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 664 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 665 "data/maps/Route2_House/scripts.pory"
	walk_down
# 665 "data/maps/Route2_House/scripts.pory"
	walk_down
# 665 "data/maps/Route2_House/scripts.pory"
	walk_down
# 665 "data/maps/Route2_House/scripts.pory"
	walk_down
# 665 "data/maps/Route2_House/scripts.pory"
	walk_down
# 666 "data/maps/Route2_House/scripts.pory"
	walk_right
# 666 "data/maps/Route2_House/scripts.pory"
	walk_right
# 667 "data/maps/Route2_House/scripts.pory"
	walk_down
# 667 "data/maps/Route2_House/scripts.pory"
	walk_down
# 667 "data/maps/Route2_House/scripts.pory"
	walk_down
# 668 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 670 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 671 "data/maps/Route2_House/scripts.pory"
	walk_down
# 671 "data/maps/Route2_House/scripts.pory"
	walk_down
# 671 "data/maps/Route2_House/scripts.pory"
	walk_down
# 672 "data/maps/Route2_House/scripts.pory"
	walk_right
# 672 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 675 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 676 "data/maps/Route2_House/scripts.pory"
	walk_right
# 676 "data/maps/Route2_House/scripts.pory"
	walk_right
# 676 "data/maps/Route2_House/scripts.pory"
	walk_right
# 676 "data/maps/Route2_House/scripts.pory"
	walk_right
# 677 "data/maps/Route2_House/scripts.pory"
	walk_down
# 677 "data/maps/Route2_House/scripts.pory"
	walk_down
# 677 "data/maps/Route2_House/scripts.pory"
	walk_down
# 678 "data/maps/Route2_House/scripts.pory"
	walk_right
# 678 "data/maps/Route2_House/scripts.pory"
	walk_right
# 679 "data/maps/Route2_House/scripts.pory"
	walk_down
# 679 "data/maps/Route2_House/scripts.pory"
	walk_down
# 680 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 683 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 684 "data/maps/Route2_House/scripts.pory"
	walk_down
# 685 "data/maps/Route2_House/scripts.pory"
	walk_right
# 685 "data/maps/Route2_House/scripts.pory"
	walk_right
# 685 "data/maps/Route2_House/scripts.pory"
	walk_right
# 685 "data/maps/Route2_House/scripts.pory"
	walk_right
# 686 "data/maps/Route2_House/scripts.pory"
	walk_down
# 686 "data/maps/Route2_House/scripts.pory"
	walk_down
# 686 "data/maps/Route2_House/scripts.pory"
	walk_down
# 687 "data/maps/Route2_House/scripts.pory"
	walk_right
# 687 "data/maps/Route2_House/scripts.pory"
	walk_right
# 688 "data/maps/Route2_House/scripts.pory"
	walk_down
# 688 "data/maps/Route2_House/scripts.pory"
	walk_down
# 689 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 692 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 693 "data/maps/Route2_House/scripts.pory"
	walk_up
# 693 "data/maps/Route2_House/scripts.pory"
	walk_up
# 693 "data/maps/Route2_House/scripts.pory"
	walk_up
# 694 "data/maps/Route2_House/scripts.pory"
	walk_left
# 694 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 697 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 698 "data/maps/Route2_House/scripts.pory"
	walk_left
# 698 "data/maps/Route2_House/scripts.pory"
	walk_left
# 699 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 703 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 707 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 708 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 709 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 710 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 711 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 712 "data/maps/Route2_House/scripts.pory"
	delay 8
# 713 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 714 "data/maps/Route2_House/scripts.pory"
	delay 60
# 715 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 724 "data/maps/Route2_House/scripts.pory"
	closemessage
# 725 "data/maps/Route2_House/scripts.pory"
	delay 50
# 726 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 727 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 728 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 741 "data/maps/Route2_House/scripts.pory"
	closemessage
# 742 "data/maps/Route2_House/scripts.pory"
	delay 40
# 743 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 745 "data/maps/Route2_House/scripts.pory"
	closemessage
# 746 "data/maps/Route2_House/scripts.pory"
	delay 30
# 747 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 748 "data/maps/Route2_House/scripts.pory"
	delay 10
# 749 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 750 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 751 "data/maps/Route2_House/scripts.pory"
	delay 60
# 752 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 759 "data/maps/Route2_House/scripts.pory"
	closemessage
# 760 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 761 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 762 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 763 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 764 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 765 "data/maps/Route2_House/scripts.pory"
	delay 90
# 766 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 767 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 768 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 769 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 770 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 771 "data/maps/Route2_House/scripts.pory"
	delay 60
# 772 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 775 "data/maps/Route2_House/scripts.pory"
	closemessage
# 776 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 779 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 780 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 782 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 783 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 783 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 783 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 783 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 784 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 784 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 785 "data/maps/Route2_House/scripts.pory"
	walk_up
# 785 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 788 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 789 "data/maps/Route2_House/scripts.pory"
	walk_up
# 789 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 792 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 793 "data/maps/Route2_House/scripts.pory"
	walk_down
# 793 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 797 "data/maps/Route2_House/scripts.pory"
	delay 60
# 798 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 799 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 800 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 801 "data/maps/Route2_House/scripts.pory"
	closemessage
# 802 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 803 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 804 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 808 "data/maps/Route2_House/scripts.pory"
	closemessage
# 809 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 810 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 811 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 812 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 813 "data/maps/Route2_House/scripts.pory"
	closemessage
# 814 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 815 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 816 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 817 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 819 "data/maps/Route2_House/scripts.pory"
	closemessage
# 820 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 821 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 822 "data/maps/Route2_House/scripts.pory"
	delay 10
# 823 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 824 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 825 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 826 "data/maps/Route2_House/scripts.pory"
	lock
# 827 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 828 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 829 "data/maps/Route2_House/scripts.pory"
	release
# 830 "data/maps/Route2_House/scripts.pory"
	delay 30
# 831 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 832 "data/maps/Route2_House/scripts.pory"
	delay 10
# 833 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 834 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 835 "data/maps/Route2_House/scripts.pory"
	lock
# 836 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 837 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 838 "data/maps/Route2_House/scripts.pory"
	release
# 839 "data/maps/Route2_House/scripts.pory"
	delay 30
# 840 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 841 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 842 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 843 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 844 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 845 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 846 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 847 "data/maps/Route2_House/scripts.pory"
	closemessage
# 848 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 849 "data/maps/Route2_House/scripts.pory"
	delay 10
# 850 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 851 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 852 "data/maps/Route2_House/scripts.pory"
	delay 60
# 853 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 854 "data/maps/Route2_House/scripts.pory"
	closemessage
# 855 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 856 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 857 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 858 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 859 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 861 "data/maps/Route2_House/scripts.pory"
	closemessage
# 862 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 863 "data/maps/Route2_House/scripts.pory"
	delay 30
# 864 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 865 "data/maps/Route2_House/scripts.pory"
	delay 80
# 866 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 867 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 870 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 871 "data/maps/Route2_House/scripts.pory"
	face_left
# 872 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 873 "data/maps/Route2_House/scripts.pory"
	delay_16
# 874 "data/maps/Route2_House/scripts.pory"
	delay_16
# 875 "data/maps/Route2_House/scripts.pory"
	delay_16
# 876 "data/maps/Route2_House/scripts.pory"
	delay_16
# 877 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 880 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 881 "data/maps/Route2_House/scripts.pory"
	face_left
# 882 "data/maps/Route2_House/scripts.pory"
	delay_16
# 883 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 884 "data/maps/Route2_House/scripts.pory"
	delay_16
# 885 "data/maps/Route2_House/scripts.pory"
	delay_16
# 886 "data/maps/Route2_House/scripts.pory"
	delay_16
# 887 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 890 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 891 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 892 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 895 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 896 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 897 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 900 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 901 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 904 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 905 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 906 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 907 "data/maps/Route2_House/scripts.pory"
	delay_16
# 908 "data/maps/Route2_House/scripts.pory"
	delay_16
# 909 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 910 "data/maps/Route2_House/scripts.pory"
	emote_x
# 911 "data/maps/Route2_House/scripts.pory"
	delay_16
# 912 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 915 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 916 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 917 "data/maps/Route2_House/scripts.pory"
	emote_x
# 918 "data/maps/Route2_House/scripts.pory"
	delay_16
# 919 "data/maps/Route2_House/scripts.pory"
	delay_16
# 920 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 921 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 922 "data/maps/Route2_House/scripts.pory"
	delay_16
# 923 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 926 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 927 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 929 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 930 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 930 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 930 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 934 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 938 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 939 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 940 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 941 "data/maps/Route2_House/scripts.pory"
	delay 60
# 942 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 943 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 944 "data/maps/Route2_House/scripts.pory"
	delay 40
# 945 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 951 "data/maps/Route2_House/scripts.pory"
	closemessage
# 952 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 953 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 954 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 955 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_0
# 956 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 957 "data/maps/Route2_House/scripts.pory"
	applymovement 7, emoteasleep
# 958 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 959 "data/maps/Route2_House/scripts.pory"
	delay 30
# 960 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 961 "data/maps/Route2_House/scripts.pory"
	closemessage
# 962 "data/maps/Route2_House/scripts.pory"
	delay 20
# 963 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_1
# 964 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 965 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 966 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 967 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 968 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 969 "data/maps/Route2_House/scripts.pory"
	delay 30
# 970 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 971 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 972 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 973 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 974 "data/maps/Route2_House/scripts.pory"
	closemessage
# 975 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 976 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 977 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 978 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 980 "data/maps/Route2_House/scripts.pory"
	closemessage
# 981 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 982 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 983 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 984 "data/maps/Route2_House/scripts.pory"
	delay 30
# 985 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 987 "data/maps/Route2_House/scripts.pory"
	closemessage
# 988 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 989 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 990 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 991 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 992 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 993 "data/maps/Route2_House/scripts.pory"
	closemessage
# 994 "data/maps/Route2_House/scripts.pory"
	delay 20
# 995 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 996 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 997 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 998 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 999 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1000 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 40
# 1001 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 1002 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 10, 12
	return


# 1005 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 1006 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 1009 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 1010 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1010 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1013 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 1014 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1014 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1017 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 1018 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1018 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1018 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1018 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1019 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 1019 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 1023 "data/maps/Route2_House/scripts.pory"
	lock
# 1024 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 1025 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1026 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
	end

TakeARest_2:
# 1027 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1028 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1029 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 1030 "data/maps/Route2_House/scripts.pory"
	waitse
# 1031 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 1032 "data/maps/Route2_House/scripts.pory"
	updatefollowingmon
# 1033 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_Bathroom::
# 1040 "data/maps/Route2_House/scripts.pory"
	lock
# 1041 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 1090 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 1110 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 1121 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 1127 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 1042 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 1043 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1044 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 1078 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1079 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_22
# 1083 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
Route2_House_Eventscript_Bathroom_21:
# 1085 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1086 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1087 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 1091 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1092 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_14
# 1096 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_6
Route2_House_Eventscript_Bathroom_13:
# 1098 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1099 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1100 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1101 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1102 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_27
Route2_House_Eventscript_Bathroom_25:
# 1106 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_4:
# 1111 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_7
# 1116 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1117 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1118 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1119 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 1122 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_8
# 1123 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1124 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1125 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 1045 "data/maps/Route2_House/scripts.pory"
	hidefollowernpc
# 1046 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1047 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 1048 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 1049 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1050 "data/maps/Route2_House/scripts.pory"
	waitse
# 1051 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SURF
# 1052 "data/maps/Route2_House/scripts.pory"
	waitse
# 1053 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1054 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1055 "data/maps/Route2_House/scripts.pory"
	waitse
# 1056 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1057 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1058 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1059 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1060 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1061 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1062 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 1063 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1064 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1065 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_18
# 1070 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 40
# 1071 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
Route2_House_Eventscript_Bathroom_17:
# 1073 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1074 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1075 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_14:
# 1093 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
	goto Route2_House_Eventscript_Bathroom_13

Route2_House_Eventscript_Bathroom_18:
# 1066 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 10
# 1067 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
	goto Route2_House_Eventscript_Bathroom_17

Route2_House_Eventscript_Bathroom_22:
# 1080 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
	goto Route2_House_Eventscript_Bathroom_21

Route2_House_Eventscript_Bathroom_26:
# 1104 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_25

Route2_House_Eventscript_Bathroom_27:
# 1102 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_House_Eventscript_Bathroom_26
	goto Route2_House_Eventscript_Bathroom_25


Route2_House_Eventscript_AkihikoOnFrame42::
# 1132 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_AkihikoOnFrame43::
# 1136 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2
	return


Route2_House_Eventscript_TheFirstMorning::
# 1139 "data/maps/Route2_House/scripts.pory"
	lock
# 1140 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 43
# 1141 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1142 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 1143 "data/maps/Route2_House/scripts.pory"
	waitse
# 1144 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 1146 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1147 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1148 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1149 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1150 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1151 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 1152 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1153 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 1154 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1155 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1156 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1157 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1158 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1159 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1160 "data/maps/Route2_House/scripts.pory"
	goto EventScript_RegionMap
# 1161 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TheFirstMorning2::
# 1165 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1166 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1178 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1179 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1180 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1181 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1182 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1183 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1184 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1185 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1186 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1187 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1188 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1189 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1190 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_TheFirstMorning2_Movement_0
# 1191 "data/maps/Route2_House/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1192 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1193 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1194 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1195 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1196 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_1
# 1200 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1201 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1202 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1204 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1205 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2_2
# 1217 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 1218 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1219 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1220 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 1221 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_INTELEON_T
Route2_House_Eventscript_TheFirstMorning2_1:
# 1224 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1225 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 1226 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1227 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 80
# 1228 "data/maps/Route2_House/scripts.pory"
	setvar VAR_DAYS_LEFT, 15
# 1229 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 1230 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1231 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1232 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1233 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1234 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 1235 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 1236 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1237 "data/maps/Route2_House/scripts.pory"
	call Eventscript_UnlockDeadlineSystem
# 1238 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2_2:
# 1207 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_2
# 1209 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1210 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1211 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1212 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1213 "data/maps/Route2_House/scripts.pory"
	makecharaUnavailable CHARACTER_MITSURU
# 1214 "data/maps/Route2_House/scripts.pory"
	makecharaUnavailable CHARACTER_INTELEON_T
	goto Route2_House_Eventscript_TheFirstMorning2_1


# 1242 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1243 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1243 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1244 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1244 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1245 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1248 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1249 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1249 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1249 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1249 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1250 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1250 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1251 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1253 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1254 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1254 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1255 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1258 "data/maps/Route2_House/scripts.pory"
MitsuruJoinsTheFirstMorning:
# 1259 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1259 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1260 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1262 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1263 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1263 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1263 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1263 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1264 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_MitsuruOnWarp8::
# 1268 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruRestForTheNight::
# 1272 "data/maps/Route2_House/scripts.pory"
	lock
# 1273 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0
# 1274 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1275 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1276 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruRestForTheNight_Text_0
# 1277 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1278 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 9
# 1279 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 1280 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1281 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP
	return


Route2_House_Eventscript_MitsuruOnFrame10::
# 1285 "data/maps/Route2_House/scripts.pory"
	lock
# 1286 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1287 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruPostRest
	return


Route2_House_Eventscript_MitsuruPostRest::
# 1291 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1292 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1293 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1294 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruPostRest_Text_0
# 1295 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1296 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 11
# 1297 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 1298 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1299 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji::
# 1304 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1305 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1306 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 1307 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1308 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1309 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1310 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1311 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1312 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1313 "data/maps/Route2_House/scripts.pory"
	delay 20
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
	playse SE_SUCCESS
# 1324 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 1325 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1326 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1327 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1328 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 1329 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1330 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0
# 1335 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1336 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 1337 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1338 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1
# 1340 "data/maps/Route2_House/scripts.pory"
	callnative ClearMugshot
# 1341 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2
# 1344 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1345 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1346 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1347 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0
# 1348 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1349 "data/maps/Route2_House/scripts.pory"
	showobjectat 4, MAP_ROUTE2_HOUSE
# 1350 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1351 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1352 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1353 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1354 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1
# 1355 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1356 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3
# 1359 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1360 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1361 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 1362 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1363 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4
# 1366 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1367 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1368 "data/maps/Route2_House/scripts.pory"
	applymovement 4, walkinplaceleft
# 1369 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1370 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2
# 1371 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3
# 1372 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1373 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4
# 1374 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1375 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1376 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1377 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1378 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1379 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkinplaceleft
# 1380 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1381 "data/maps/Route2_House/scripts.pory"
	playse SE_PC_OFF
# 1382 "data/maps/Route2_House/scripts.pory"
	waitse
# 1383 "data/maps/Route2_House/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1384 "data/maps/Route2_House/scripts.pory"
	waitse
# 1385 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 10, 0x22A, TRUE
# 1386 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 11, 0x232, TRUE
# 1387 "data/maps/Route2_House/scripts.pory"
	special DrawWholeMapView
# 1388 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1389 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1390 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 23
# 1391 "data/maps/Route2_House/scripts.pory"
	fwdtime 17, 15
# 1392 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1393 "data/maps/Route2_House/scripts.pory"
	special ShowMapNamePopup
# 1394 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruCallingTakeharuForHelp::
# 1399 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1400 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0
# 1402 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1403 "data/maps/Route2_House/scripts.pory"
	playse SE_POKENAV_OFF
# 1404 "data/maps/Route2_House/scripts.pory"
	waitse
# 1405 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1406 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 1407 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
# 1408 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceleft
# 1409 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1410 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1
# 1414 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1415 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1416 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2
# 1420 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1421 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 1422 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1423 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1424 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0
# 1425 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1
# 1426 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1427 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1428 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1429 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1430 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1431 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 27
# 1432 "data/maps/Route2_House/scripts.pory"
	fwdtime 10, 55
# 1433 "data/maps/Route2_House/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 1434 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV::
# 1439 "data/maps/Route2_House/scripts.pory"
	lock
# 1440 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1441 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0
# 1442 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1443 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1444 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_0
# 1445 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1446 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1447 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 1448 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1449 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 1450 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1451 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1452 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 1453 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1454 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_TEMP_5
# 1455 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1456 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkiShinjiWakesUp
# 1457 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1458 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1459 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 1460 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1461 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 1462 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1463 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1464 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAround
# 1465 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1466 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 1467 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1468 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1469 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceup
# 1470 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1471 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 1473 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1
# 1476 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1477 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV
	return


Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV::
# 1481 "data/maps/Route2_House/scripts.pory"
	lock
# 1482 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1483 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 1486 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1487 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1488 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1489 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1490 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 1491 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1492 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1493 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1494 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 1497 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1498 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1499 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1500 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1501 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1502 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 1515 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1516 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1517 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 1518 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1519 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 1521 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1522 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1523 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1524 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 1526 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1527 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 1528 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1529 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1530 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 1531 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1532 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1533 "data/maps/Route2_House/scripts.pory"
	waitse
# 1534 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emoteexclamation
# 1535 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 1536 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1537 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 1544 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1545 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1546 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1547 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1548 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1549 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1550 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1551 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1552 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1553 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1554 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 1558 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1559 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1560 "data/maps/Route2_House/scripts.pory"
	waitse
# 1561 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 1562 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1563 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 1564 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1565 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 1566 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1567 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1568 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 1570 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1571 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1572 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1573 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1574 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1575 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1576 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 1577 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1578 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 1579 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1580 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1581 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1582 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0
# 1583 "data/maps/Route2_House/scripts.pory"
	applymovement 6, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1
# 1584 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2
# 1585 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1586 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1587 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1588 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 1590 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1591 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3
# 1592 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1593 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1594 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV::
# 1598 "data/maps/Route2_House/scripts.pory"
	lock
# 1599 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1600 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 1602 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1603 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 1604 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1605 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 1615 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1616 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 1617 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 1618 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 1619 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1620 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1621 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 1625 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1626 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 1627 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1628 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 1629 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1630 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 1632 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1633 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1634 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1635 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 1638 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1639 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 1640 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1641 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 1644 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1645 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1646 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 1647 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 1648 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1649 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1650 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1651 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 1652 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1653 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 1654 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1655 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 1656 "data/maps/Route2_House/scripts.pory"
	applymovement 8, facedown
# 1657 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 1658 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 1659 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1660 "data/maps/Route2_House/scripts.pory"
	waitse
# 1661 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1662 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1663 "data/maps/Route2_House/scripts.pory"
	waitse
# 1664 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 1665 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1666 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 29
# 1667 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1668 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 1669 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 11
	return


Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV::
# 1673 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1674 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0
# 1675 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1676 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1677 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_1
# 1678 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1679 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1680 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 1681 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1682 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1683 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 1692 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1693 "data/maps/Route2_House/scripts.pory"
	delay 50
# 1694 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1695 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 1696 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 1709 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1710 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1711 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 1713 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1714 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1715 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotepensive
# 1716 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1717 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 1718 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1719 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1720 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 1727 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1728 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 1729 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 1730 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1731 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 1732 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1733 "data/maps/Route2_House/scripts.pory"
	delay 90
# 1734 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1735 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 1736 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1737 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 1738 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1739 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 1742 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1743 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNightMitsuruPOV
	return


Route2_House_Eventscript_StayingTheNightMitsuruPOV::
# 1747 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1748 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAtTheBed
# 1749 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1750 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 1751 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1752 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 1753 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1754 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 1758 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1759 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1760 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AKihikoRemembersCampGears
# 1761 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1762 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 1763 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1764 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 1765 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 1766 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1767 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 1769 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1770 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1771 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoBickering
# 1772 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1773 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1774 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 1775 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1776 "data/maps/Route2_House/scripts.pory"
	lock
# 1777 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1778 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1779 "data/maps/Route2_House/scripts.pory"
	release
# 1780 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1781 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceright
# 1782 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1783 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 1784 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1785 "data/maps/Route2_House/scripts.pory"
	lock
# 1786 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1787 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1788 "data/maps/Route2_House/scripts.pory"
	release
# 1789 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1790 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 1791 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1792 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 1793 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1794 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 1795 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1796 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 1797 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1798 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1799 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1800 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1801 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1802 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1803 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 1804 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1805 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1806 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotemusic
# 1807 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 1808 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1809 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 1811 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1812 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 1813 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1814 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1815 "data/maps/Route2_House/scripts.pory"
	delay 80
# 1816 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1817 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 1818 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_TheFirstMorningMitsuruPOV::
# 1822 "data/maps/Route2_House/scripts.pory"
	lock
# 1823 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1824 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1825 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1826 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1827 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1828 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1829 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoGoesToPlaceTheFirstMorning
# 1830 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1831 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1832 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1833 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1834 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 34
# 1835 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1836 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1837 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1838 "data/maps/Route2_House/scripts.pory"
	call EventScript_RegionMap
	return


Route2_House_Eventscript_TheFirstMorning2MitsuruPOV::
# 1842 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1843 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1855 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1856 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1857 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1858 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1859 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1860 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1861 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1862 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1863 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 1864 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0
# 1865 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1866 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1867 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1868 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1869 "data/maps/Route2_House/scripts.pory"
	removeobject 8
# 1870 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1871 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1872 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1873 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0
# 1877 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1878 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1879 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1881 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1882 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2
# 1892 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 1893 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1894 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1895 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 1896 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1:
# 1898 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1899 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 1900 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1901 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 80
# 1902 "data/maps/Route2_House/scripts.pory"
	setvar VAR_DAYS_LEFT, 15
# 1903 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1904 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1905 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1906 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1907 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 1908 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_INTELEON_T
# 1909 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, MITSURUS_PROLOGUE
# 1910 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1911 "data/maps/Route2_House/scripts.pory"
	call Eventscript_UnlockDeadlineSystem
# 1912 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2:
# 1883 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1
# 1884 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1885 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1886 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1887 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1888 "data/maps/Route2_House/scripts.pory"
	makecharaUnavailable CHARACTER_AKIHIKO
# 1889 "data/maps/Route2_House/scripts.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1


Eventscript_UnlockDeadlineSystem::
# 1917 "data/maps/Route2_House/scripts.pory"
	msgbox Eventscript_UnlockDeadlineSystem_Text_0
# 1924 "data/maps/Route2_House/scripts.pory"
	closemessage
	return


Route2_House_Eventscript_GhostBoyMadPostQuest::
# 1928 "data/maps/Route2_House/scripts.pory"
	lock
# 1929 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_GhostBoyMadPostQuest_Text_0
# 1935 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1936 "data/maps/Route2_House/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 101
# 1937 "data/maps/Route2_House/scripts.pory"
	hidefollower
# 1938 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 1939 "data/maps/Route2_House/scripts.pory"
	fwdtime 7, 0
# 1940 "data/maps/Route2_House/scripts.pory"
	call EventScript_CheckDaysLeft
# 1941 "data/maps/Route2_House/scripts.pory"
	release
	end


# 955 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_0:
# 955 "data/maps/Route2_House/scripts.pory"
	walk_up
# 955 "data/maps/Route2_House/scripts.pory"
	walk_up
# 955 "data/maps/Route2_House/scripts.pory"
	walk_up
# 955 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 963 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_1:
# 963 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 963 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
	step_end

# 1190 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2_Movement_0:
# 1190 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1190 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1190 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1273 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0:
# 1273 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1273 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1273 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1273 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1273 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1273 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1273 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1273 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1273 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1273 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1273 "data/maps/Route2_House/scripts.pory"
	face_right
# 1273 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1273 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1273 "data/maps/Route2_House/scripts.pory"
	face_up
# 1273 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1273 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1273 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 1347 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0:
# 1347 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1347 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 1354 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1:
# 1354 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1354 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1354 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1370 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2:
# 1370 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1370 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1371 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3:
# 1371 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1371 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1371 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1371 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1373 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4:
# 1373 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1373 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1373 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1373 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1424 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0:
# 1424 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1424 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1425 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1:
# 1425 "data/maps/Route2_House/scripts.pory"
	walk_in_place_left
# 1425 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1425 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1425 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1425 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1441 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0:
# 1441 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1441 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1441 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 1582 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0:
# 1582 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1582 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1583 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1:
# 1583 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1583 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1584 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2:
# 1584 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1584 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1584 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1584 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1584 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1584 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1584 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1584 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1584 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 1591 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3:
# 1591 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1591 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1591 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1674 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0:
# 1674 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1674 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1674 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1674 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1674 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1674 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

# 1677 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_1:
# 1677 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

# 1864 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0:
# 1864 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1864 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1864 "data/maps/Route2_House/scripts.pory"
	set_visible
	step_end

Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 230 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 231 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 260 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 263 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 274 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 281 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 285 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 293 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}So? What does a billionaire girl like you\n"
	.string "want with us?\p"
	.string "For whatever it is, I'm not interested. I\n"
	.string "only want to train and become a\l"
	.string "stronger trainer.\p"
	.string "I could've dealed with the Drowzee\n"
	.string "earlier if I were-\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wait- Are you with the men in black who\n"
	.string "tried to kidnap us!?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}No.\p"
	.string "In fact, I managed to disrupt them and\n"
	.string "brought you two here.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}To be more precise, my mission is to\n"
	.string "stop them.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Stop them?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Both of you are from Sunshine\n"
	.string "Orphanage, correct?\p"
	.string "Right now I can say for certain that\n"
	.string "the explosion which happened a few\l"
	.string "days ago was their doing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}!!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_4:
# 310 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 315 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 321 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 328 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I believe you have a reason for wanting\n"
	.string "to get stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I have clues of where to find those men\n"
	.string "in black and what they are doing.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And earlier I saw your battle with them.\n"
	.string "You have great potential.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}If you'll join me... I promise it'll be a\n"
	.string "great challenge.\p"
	.string "I'll also share what I know about those\n"
	.string "men with you.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_8:
# 345 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 354 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 359 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 367 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 448 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 455 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 468 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}What's wrong, Shinji?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}I don't trust her.\p"
	.string "She's hiding lots of information and we\n"
	.string "don't even know if it's true that she's\l"
	.string "not on those men's side.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}But she's also the only lead we have\n"
	.string "right now. We didn't even know where to\l"
	.string "start looking for Miki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Besides, she said it'd be a great\n"
	.string "challenge.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}So you're tempted.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Honestly, yes.\p"
	.string "If what she said was true, I may find\n"
	.string "Miki or at least her whereabouts while\l"
	.string "going after those men in black.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I'm joining her. Don't stop me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Told you I didn't trust her.\p"
	.string "So if you join her, I will too. Someone's\n"
	.string "gotta keep an eye on her.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Alright, let's try asking her then.$"

Route2_House_Eventscript_AVulpix_Text_0:
# 501 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 511 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon's looking at you judgingly.)\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 523 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 533 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 542 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 547 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Hm... Shinjiro Aragaki-kun, correct?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}... You sure have done your research\n"
	.string "thoroughly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I'll take that as a compliment.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}That wasn't.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Heh...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I have yet to know if you're able to\n"
	.string "hold your ground when the situation\l"
	.string "calls for it.\p"
	.string "If I'm not mistaken, you don't have a\n"
	.string "Pokémon of your own yet.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}I can just catch one.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright. Then how about this.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Before the sun sets, if you can beat me\n"
	.string "in a Pokémon battle, you can come with\l"
	.string "us.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2:
# 560 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 563 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 570 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 574 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 592 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 598 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "{COLOR RED}We'll be having 3-vs-3 Pokémon battles\n"
	.string "and bag items are not allowed so plan\l"
	.string "your party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 626 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 715 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Alright, everyone's here.\p"
	.string "Before I start, I'd like to ask you two a\n"
	.string "question.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure? What is it?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}How far can a trainer synergize with\n"
	.string "their Pokémon?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Uhh... what?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}You mean their bonds?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I know when a trainer and a Pokémon\n"
	.string "share a deep trust, Mega Evolution can\l"
	.string "be achieved.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}That is right, but not what I meant.\p"
	.string "Perhaps I should put it like this.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1:
# 728 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}What if I say, there's a way for a\n"
	.string "trainer to become one with their\l"
	.string "Pokémon?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh? What do you mean?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}In the most literal way possible.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}That's crazy.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Those men you fought- no, the\n"
	.string "organization behind them, is\l"
	.string "researching and developping a way to do\l"
	.string "so.\p"
	.string "Lots of progress has been made and\n"
	.string "there are already a few prototypes.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}Of course, the method isn't perfect and\n"
	.string "there are more-\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wait, wait just a minute. I'm lost.\p"
	.string "Prototypes?? Of what exactly??\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}A new specimen of human, who is able to\n"
	.string "use Pokémon's ability, in one way or\l"
	.string "another.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}You're kidding??\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}The more I listen to you, the crazier\n"
	.string "you sound.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}That is to be expected. I would have\n"
	.string "thought the same.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2:
# 743 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We can\n"
	.string "simply just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 752 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Look, Princess. It's not like we don't\n"
	.string "want to believe you.\p"
	.string "It all just sounds too much like\n"
	.string "fiction, okay.\p"
	.string "At least show us some proofs?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Right, didn't you say you know where to\n"
	.string "find them?\p"
	.string "How about you lead us to them and we'll\n"
	.string "see if what you said were real.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}.....\p"
	.string "Very well. I suppose that's a logical\n"
	.string "idea.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4:
# 772 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 800 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 804 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}M-my apologies, it slipped my mind that\n"
	.string "this house doesn't have guest rooms.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 812 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 817 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 842 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 846 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 853 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}...$"

Route2_House_Eventscript_StayingTheNight_Text_7:
# 859 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 945 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}(Dang... I can't sleep at all.)\p"
	.string "(Gotta admit, what Kirijo said earlier\n"
	.string "does bug me.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(It didn't look like she was lying.)\p"
	.string "(If it was all true... and if Miki is\n"
	.string "already in their hands...)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}(No, I must think positively. She\n"
	.string "must've still been fine and been waiting\l"
	.string "for me to come get her home.)\p"
	.string "(If I can't sleep... may as well go train a\n"
	.string "bit.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_1:
# 960 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is already sleeping soundly. She\n"
	.string "won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 973 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 978 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 985 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 992 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 1024 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_Bathroom_Text_0:
# 1042 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 1067 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 1071 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}(That really freshened me up.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 1080 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 1083 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's do it later.)$"

Route2_House_Eventscript_Bathroom_Text_5:
# 1093 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_6:
# 1096 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's not waste time any further.)$"

Route2_House_Eventscript_Bathroom_Text_7:
# 1111 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_8:
# 1122 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 1144 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-yawn- (Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 1148 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Everyone, please gather around. I'll\n"
	.string "explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 1158 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning2_Text_0:
# 1166 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I believe our destination is around the\n"
	.string "base of Goldenwings Mountain.\p"
	.string "To get there we can take a ship from\n"
	.string "Coralport, west of here.\p"
	.string "Then we go through Route 4 from\n"
	.string "Windward Town.\p"
	.string "Any questions?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Nope, the path is simple enough.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}C'est magnifique.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Oh, before I forget.\p"
	.string "We should make a stop at my personal\n"
	.string "researcher's lab in Windward Port.\l"
	.string "There's a package for us that I've\l"
	.string "ordered.\p"
	.string "It'll be a great help for our journey.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}More gadgets?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Alright! Let's head out then!$"

Route2_House_Eventscript_TheFirstMorning2_Text_1:
# 1196 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2_Text_2:
# 1207 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Mitsuru's Prologue {COLOR GREEN}unlocked.\n"
	.string "Check Quest Menu for more details.$"

Route2_House_Eventscript_MitsuruRestForTheNight_Text_0:
# 1276 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not too shabby. This will do.$"

Route2_House_Eventscript_MitsuruPostRest_Text_0:
# 1294 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The sun's up. Time to move out.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0:
# 1330 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(So this boy is... Akihiko Sanada.)\p"
	.string "(He got adopted a few days ago, along\n"
	.string "with his younger sister Miki.)\p"
	.string "(Well, on paper at least, I suppose?)\p"
	.string "(Otherwise those men wouldn't have\n"
	.string "been searching for him near the\l"
	.string "orphanage.)\p"
	.string "(Already has a standard trainer card...\n"
	.string "issued a week ago.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1:
# 1338 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(And this one is Aragaki Shinjiro.)\p"
	.string "(He's also adopted on paper and has a\n"
	.string "standard trainer card.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2:
# 1341 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Considering how eagerly the Genesis\n"
	.string "staff were searching for them)\p"
	.string "(I guess they must be ones of their\n"
	.string "“good potential” subjects.)\p"
	.string "(In that case, I must find them before\n"
	.string "the Genesis group does.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3:
# 1356 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Inteleon, you're back. Just about time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I'd love to give you a rest but we really\n"
	.string "have to act right now.\p"
	.string "Although if you're too tired, you can\n"
	.string "return to the Pokéball.$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4:
# 1363 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head, looking\n"
	.string "determined to accompany Mitsuru.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}If that's what you want, alright. Let's\n"
	.string "go then.\p"
	.string "We should start asking around Sunshine\n"
	.string "Town for these two boys.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0:
# 1400 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, Father. That'd be great.\p"
	.string "Yes. I'll talk to you later.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1:
# 1410 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(It's been days and the girl still hasn't\n"
	.string "been found.)\p"
	.string "(There's a great chance that the\n"
	.string "Genesis group has taken her.)\p"
	.string "(I hope Father could help with the\n"
	.string "searching somehow.)\p"
	.string "........$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2:
# 1416 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I've been avoidant about confronting\n"
	.string "the boys.\p"
	.string "I don't know how to face them after\n"
	.string "what I'd done.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}However, we can't afford to lose any\n"
	.string "more time before the group erases their\l"
	.string "tracks again.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Let's go talk to Sanada and Aragaki,\n"
	.string "Vulpix, Inteleon.$"

Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_0:
# 1444 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1:
# 1473 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0:
# 1873 "data/maps/Route2_House/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1:
# 1883 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Akihiko's Prologue {COLOR GREEN}unlocked. Check\n"
	.string "Quest Menu for more details.$"

Eventscript_UnlockDeadlineSystem_Text_0:
# 1917 "data/maps/Route2_House/scripts.pory"
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
# 1929 "data/maps/Route2_House/scripts.pory"
	.string "You woke up in a cold sweat.\p"
	.string "Was that all a dream?\p"
	.string "You took a look at your Pokémon party.\p"
	.string "...\p"
	.string "...\p"
	.string "They were all fainted.$"
