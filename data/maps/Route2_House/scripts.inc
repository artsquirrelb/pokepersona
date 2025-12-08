Route2_House_MapScripts::
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD
# 21 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 125 "data/maps/Route2_House/scripts.pory"
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
# 22 "data/maps/Route2_House/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE2_HOUSE
# 23 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 26 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 27
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 31 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 34 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 37 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 41 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 45 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 54 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 63 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 67 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_35
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 74 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_48
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_47:
# 81 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 26
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_51
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_50:
# 88 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 32
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_54
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_53:
# 91 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 28
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_57
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_56:
# 96 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_60
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_59:
# 107 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 33
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_63
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_62:
# 114 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 34
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_65
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 27 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 28 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
# 29 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 32 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 35 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 34 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 28
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 38 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 39 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 1, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 42 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 43 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 41 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_lt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 46 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 47 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 48 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 49 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 50 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 51 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 55 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 56 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 57 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 58 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 59 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 4, 7
# 60 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 61 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 11, 6
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_26

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 64 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 65 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 71 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 72 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_34:
# 68 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 26
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_39
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_35:
# 67 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_38:
# 69 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 32
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_43
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_39:
# 68 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 28
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_38
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_42:
# 70 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 34
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_43:
# 69 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 33
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_42
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_48:
# 75 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 76 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 2, 9
# 77 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 78 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 7, 13
# 79 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_47

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_51:
# 82 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 83 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 7, 4
# 84 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 85 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 86 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_50

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_54:
# 89 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_5
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_53

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_57:
# 93 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 94 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_56

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_60:
# 97 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 98 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 99 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 100 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 5, 7
# 101 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 102 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 103 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 104 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 105 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_59

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_63:
# 109 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 110 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 111 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 3, 11
# 112 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_62

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_65:
# 116 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 117 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 118 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 119 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 120 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 8, 5, 7
# 121 "data/maps/Route2_House/scripts.pory"
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
# 126 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnFrame27
# 127 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnFrame32
# 128 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnFrame38
# 129 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 39, Route2_House_Eventscript_AkihikoOnFrame39
# 130 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_House_Eventscript_AkihikoOnFrame42
# 131 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 43, Route2_House_Eventscript_AkihikoOnFrame43
# 133 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, Route2_House_Eventscript_MitsuruOnFrame8
# 134 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 10, Route2_House_Eventscript_MitsuruOnFrame10
# 135 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 22, Route2_House_Eventscript_MitsuruOnFrame22
# 136 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 26, Route2_House_Eventscript_MitsuruOnFrame26
# 137 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 28, Route2_House_Eventscript_MitsuruOnFrame28
# 138 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 32, Route2_House_Eventscript_MitsuruOnFrame32
# 139 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 33, Route2_House_Eventscript_MitsuruOnFrame33
# 140 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 34, Route2_House_Eventscript_MitsuruOnFrame34
	.2byte 0


Route2_House_Eventscript_MitsuruOnWarp26::
# 145 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruOnWarp28::
# 149 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp27::
# 153 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 157 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 158 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 159 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 163 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnWarp39::
# 166 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
# 167 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnWarp42::
# 170 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_MitsuruOnWarp10::
# 174 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


Route2_House_Eventscript_MitsuruOnWarp22::
# 178 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 179 "data/maps/Route2_House/scripts.pory"
	applymovement 4, invisible
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 183 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 187 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_MitsuruOnFrame8::
# 191 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruRestForTheNight
	return


Route2_House_Eventscript_MitsuruOnFrame22::
# 195 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji
	return


Route2_House_Eventscript_MitsuruOnFrame26::
# 199 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 200 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruCallingTakeharuForHelp
	return


Route2_House_Eventscript_MitsuruOnFrame28::
# 204 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame32::
# 208 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame33::
# 212 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorningMitsuruPOV
	return


Route2_House_Eventscript_MitsuruOnFrame34::
# 216 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 220 "data/maps/Route2_House/scripts.pory"
	lock
# 221 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 222 "data/maps/Route2_House/scripts.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
# 223 "data/maps/Route2_House/scripts.pory"
	delay 20
# 224 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 225 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route2_House/scripts.pory"
	delay 30
# 227 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 228 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 229 "data/maps/Route2_House/scripts.pory"
	closemessage
# 230 "data/maps/Route2_House/scripts.pory"
	delay 30
# 231 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 232 "data/maps/Route2_House/scripts.pory"
	delay 4
# 233 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 234 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route2_House/scripts.pory"
	delay 20
# 236 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 237 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 238 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 240 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 241 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 242 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 243 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 244 "data/maps/Route2_House/scripts.pory"
	delay 4
# 245 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 246 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 247 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 248 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route2_House/scripts.pory"
	delay 30
# 250 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 251 "data/maps/Route2_House/scripts.pory"
	delay 8
# 252 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 253 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
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
	delay 20
# 286 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 287 "data/maps/Route2_House/scripts.pory"
	delay 8
# 288 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 289 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 303 "data/maps/Route2_House/scripts.pory"
	closemessage
# 304 "data/maps/Route2_House/scripts.pory"
	delay 20
# 305 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 306 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 309 "data/maps/Route2_House/scripts.pory"
	closemessage
# 310 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 311 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 314 "data/maps/Route2_House/scripts.pory"
	closemessage
# 315 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 316 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 317 "data/maps/Route2_House/scripts.pory"
	delay 8
# 318 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 319 "data/maps/Route2_House/scripts.pory"
	closemessage
# 320 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 321 "data/maps/Route2_House/scripts.pory"
	waitse
# 322 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 323 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 324 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 332 "data/maps/Route2_House/scripts.pory"
	closemessage
# 333 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 334 "data/maps/Route2_House/scripts.pory"
	delay 16
# 335 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 336 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 337 "data/maps/Route2_House/scripts.pory"
	delay 60
# 338 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 339 "data/maps/Route2_House/scripts.pory"
	delay 16
# 340 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 341 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 342 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 346 "data/maps/Route2_House/scripts.pory"
	closemessage
# 347 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 348 "data/maps/Route2_House/scripts.pory"
	waitse
# 349 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 350 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 351 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 352 "data/maps/Route2_House/scripts.pory"
	closemessage
# 353 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 354 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 355 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 358 "data/maps/Route2_House/scripts.pory"
	closemessage
# 359 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 360 "data/maps/Route2_House/scripts.pory"
	delay 8
# 361 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 362 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 363 "data/maps/Route2_House/scripts.pory"
	delay 60
# 364 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 365 "data/maps/Route2_House/scripts.pory"
	closemessage
# 366 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 367 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 369 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 370 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 371 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 20
# 372 "data/maps/Route2_House/scripts.pory"
	release
	end


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
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 450 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 459 "data/maps/Route2_House/scripts.pory"
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
	setflag FLAG_HIDE_TALK_BUTTON
# 452 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 454 "data/maps/Route2_House/scripts.pory"
	closemessage
# 455 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 456 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 457 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 463 "data/maps/Route2_House/scripts.pory"
	lock
# 464 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 465 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 477 "data/maps/Route2_House/scripts.pory"
	closemessage
# 478 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 479 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 480 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 481 "data/maps/Route2_House/scripts.pory"
	release
	end


# 485 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 486 "data/maps/Route2_House/scripts.pory"
	walk_down
# 487 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 488 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 489 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 489 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 493 "data/maps/Route2_House/scripts.pory"
	lock
# 494 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 495 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 496 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 497 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 498 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 500 "data/maps/Route2_House/scripts.pory"
	closemessage
# 501 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_Inteleon::
# 506 "data/maps/Route2_House/scripts.pory"
	lock
# 507 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 508 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 510 "data/maps/Route2_House/scripts.pory"
	closemessage
# 511 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 512 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToShinjiro::
# 517 "data/maps/Route2_House/scripts.pory"
	lock
# 518 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 519 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 520 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 521 "data/maps/Route2_House/scripts.pory"
	closemessage
# 522 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToMitsuru::
# 527 "data/maps/Route2_House/scripts.pory"
	lock
# 528 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 529 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 530 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 531 "data/maps/Route2_House/scripts.pory"
	closemessage
# 532 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 537 "data/maps/Route2_House/scripts.pory"
	lock
# 538 "data/maps/Route2_House/scripts.pory"
	delay 30
# 539 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 541 "data/maps/Route2_House/scripts.pory"
	closemessage
# 542 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 543 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 544 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 554 "data/maps/Route2_House/scripts.pory"
	closemessage
# 555 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 556 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 557 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 558 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 559 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 560 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 564 "data/maps/Route2_House/scripts.pory"
	closemessage
# 565 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 566 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 567 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 568 "data/maps/Route2_House/scripts.pory"
	closemessage
# 569 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 570 "data/maps/Route2_House/scripts.pory"
	waitse
# 571 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 573 "data/maps/Route2_House/scripts.pory"
	closemessage
# 574 "data/maps/Route2_House/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 575 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_SHARE
# 576 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_EXP_SHARE
# 577 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 578 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 579 "data/maps/Route2_House/scripts.pory"
	special SetUnlockedPokedexFlags
# 580 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 581 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 582 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 583 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 584 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, VAR_0x800A
# 585 "data/maps/Route2_House/scripts.pory"
	additem ITEM_GREAT_BALL, VAR_0x800B
# 586 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 587 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800A, 0
# 588 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x800B, 0
# 589 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 590 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 591 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 594 "data/maps/Route2_House/scripts.pory"
	closemessage
# 595 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 596 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 597 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 600 "data/maps/Route2_House/scripts.pory"
	closemessage
# 601 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 602 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 603 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 604 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 605 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 606 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 607 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 608 "data/maps/Route2_House/scripts.pory"
	delay 16
# 609 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 610 "data/maps/Route2_House/scripts.pory"
	delay 4
# 611 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 612 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 613 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 614 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 615 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 616 "data/maps/Route2_House/scripts.pory"
	waitse
# 617 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 618 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 619 "data/maps/Route2_House/scripts.pory"
	waitse
# 620 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 621 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 622 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 623 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 624 "data/maps/Route2_House/scripts.pory"
	delay 30
# 625 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 628 "data/maps/Route2_House/scripts.pory"
	closemessage
# 629 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 630 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 631 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 632 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 633 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 634 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 635 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 636 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 637 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 638 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 639 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 640 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 641 "data/maps/Route2_House/scripts.pory"
	release
	end


# 645 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 646 "data/maps/Route2_House/scripts.pory"
	walk_right
# 647 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 650 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 651 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 652 "data/maps/Route2_House/scripts.pory"
	walk_up
# 653 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 655 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 656 "data/maps/Route2_House/scripts.pory"
	walk_left
# 656 "data/maps/Route2_House/scripts.pory"
	walk_left
# 657 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 659 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 660 "data/maps/Route2_House/scripts.pory"
	walk_right
# 661 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 663 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 664 "data/maps/Route2_House/scripts.pory"
	walk_down
# 664 "data/maps/Route2_House/scripts.pory"
	walk_down
# 664 "data/maps/Route2_House/scripts.pory"
	walk_down
# 664 "data/maps/Route2_House/scripts.pory"
	walk_down
# 664 "data/maps/Route2_House/scripts.pory"
	walk_down
# 665 "data/maps/Route2_House/scripts.pory"
	walk_right
# 665 "data/maps/Route2_House/scripts.pory"
	walk_right
# 666 "data/maps/Route2_House/scripts.pory"
	walk_down
# 666 "data/maps/Route2_House/scripts.pory"
	walk_down
# 666 "data/maps/Route2_House/scripts.pory"
	walk_down
# 667 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 669 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 670 "data/maps/Route2_House/scripts.pory"
	walk_down
# 670 "data/maps/Route2_House/scripts.pory"
	walk_down
# 670 "data/maps/Route2_House/scripts.pory"
	walk_down
# 671 "data/maps/Route2_House/scripts.pory"
	walk_right
# 671 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 674 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 675 "data/maps/Route2_House/scripts.pory"
	walk_right
# 675 "data/maps/Route2_House/scripts.pory"
	walk_right
# 675 "data/maps/Route2_House/scripts.pory"
	walk_right
# 675 "data/maps/Route2_House/scripts.pory"
	walk_right
# 676 "data/maps/Route2_House/scripts.pory"
	walk_down
# 676 "data/maps/Route2_House/scripts.pory"
	walk_down
# 676 "data/maps/Route2_House/scripts.pory"
	walk_down
# 677 "data/maps/Route2_House/scripts.pory"
	walk_right
# 677 "data/maps/Route2_House/scripts.pory"
	walk_right
# 678 "data/maps/Route2_House/scripts.pory"
	walk_down
# 678 "data/maps/Route2_House/scripts.pory"
	walk_down
# 679 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 682 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 683 "data/maps/Route2_House/scripts.pory"
	walk_down
# 684 "data/maps/Route2_House/scripts.pory"
	walk_right
# 684 "data/maps/Route2_House/scripts.pory"
	walk_right
# 684 "data/maps/Route2_House/scripts.pory"
	walk_right
# 684 "data/maps/Route2_House/scripts.pory"
	walk_right
# 685 "data/maps/Route2_House/scripts.pory"
	walk_down
# 685 "data/maps/Route2_House/scripts.pory"
	walk_down
# 685 "data/maps/Route2_House/scripts.pory"
	walk_down
# 686 "data/maps/Route2_House/scripts.pory"
	walk_right
# 686 "data/maps/Route2_House/scripts.pory"
	walk_right
# 687 "data/maps/Route2_House/scripts.pory"
	walk_down
# 687 "data/maps/Route2_House/scripts.pory"
	walk_down
# 688 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 691 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 692 "data/maps/Route2_House/scripts.pory"
	walk_up
# 692 "data/maps/Route2_House/scripts.pory"
	walk_up
# 692 "data/maps/Route2_House/scripts.pory"
	walk_up
# 693 "data/maps/Route2_House/scripts.pory"
	walk_left
# 693 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 696 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 697 "data/maps/Route2_House/scripts.pory"
	walk_left
# 697 "data/maps/Route2_House/scripts.pory"
	walk_left
# 698 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 702 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 706 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 707 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 708 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 709 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 710 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 711 "data/maps/Route2_House/scripts.pory"
	delay 8
# 712 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 713 "data/maps/Route2_House/scripts.pory"
	delay 60
# 714 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 723 "data/maps/Route2_House/scripts.pory"
	closemessage
# 724 "data/maps/Route2_House/scripts.pory"
	delay 50
# 725 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 726 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 727 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 740 "data/maps/Route2_House/scripts.pory"
	closemessage
# 741 "data/maps/Route2_House/scripts.pory"
	delay 40
# 742 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 744 "data/maps/Route2_House/scripts.pory"
	closemessage
# 745 "data/maps/Route2_House/scripts.pory"
	delay 30
# 746 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 747 "data/maps/Route2_House/scripts.pory"
	delay 10
# 748 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 749 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 750 "data/maps/Route2_House/scripts.pory"
	delay 60
# 751 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 758 "data/maps/Route2_House/scripts.pory"
	closemessage
# 759 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 760 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 761 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 762 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 763 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 764 "data/maps/Route2_House/scripts.pory"
	delay 90
# 765 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 766 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 767 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 768 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 769 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 770 "data/maps/Route2_House/scripts.pory"
	delay 60
# 771 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 774 "data/maps/Route2_House/scripts.pory"
	closemessage
# 775 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 778 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 779 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 781 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 782 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 782 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 782 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 782 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 783 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 783 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 784 "data/maps/Route2_House/scripts.pory"
	walk_up
# 784 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 787 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 788 "data/maps/Route2_House/scripts.pory"
	walk_up
# 788 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 791 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 792 "data/maps/Route2_House/scripts.pory"
	walk_down
# 792 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 796 "data/maps/Route2_House/scripts.pory"
	delay 60
# 797 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 798 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 799 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 800 "data/maps/Route2_House/scripts.pory"
	closemessage
# 801 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 802 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 803 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 807 "data/maps/Route2_House/scripts.pory"
	closemessage
# 808 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 809 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 810 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 811 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 812 "data/maps/Route2_House/scripts.pory"
	closemessage
# 813 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 814 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 815 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 816 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 818 "data/maps/Route2_House/scripts.pory"
	closemessage
# 819 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 820 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 821 "data/maps/Route2_House/scripts.pory"
	delay 10
# 822 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 823 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 824 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 825 "data/maps/Route2_House/scripts.pory"
	lock
# 826 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 827 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 828 "data/maps/Route2_House/scripts.pory"
	release
# 829 "data/maps/Route2_House/scripts.pory"
	delay 30
# 830 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 831 "data/maps/Route2_House/scripts.pory"
	delay 10
# 832 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 833 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 834 "data/maps/Route2_House/scripts.pory"
	lock
# 835 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 836 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 837 "data/maps/Route2_House/scripts.pory"
	release
# 838 "data/maps/Route2_House/scripts.pory"
	delay 30
# 839 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 840 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 841 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 842 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 843 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 844 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 845 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 846 "data/maps/Route2_House/scripts.pory"
	closemessage
# 847 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 848 "data/maps/Route2_House/scripts.pory"
	delay 10
# 849 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 850 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 851 "data/maps/Route2_House/scripts.pory"
	delay 60
# 852 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 853 "data/maps/Route2_House/scripts.pory"
	closemessage
# 854 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 855 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 856 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 857 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 858 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 860 "data/maps/Route2_House/scripts.pory"
	closemessage
# 861 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 862 "data/maps/Route2_House/scripts.pory"
	delay 30
# 863 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 864 "data/maps/Route2_House/scripts.pory"
	delay 80
# 865 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 866 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 869 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 870 "data/maps/Route2_House/scripts.pory"
	face_left
# 871 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 872 "data/maps/Route2_House/scripts.pory"
	delay_16
# 873 "data/maps/Route2_House/scripts.pory"
	delay_16
# 874 "data/maps/Route2_House/scripts.pory"
	delay_16
# 875 "data/maps/Route2_House/scripts.pory"
	delay_16
# 876 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 879 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 880 "data/maps/Route2_House/scripts.pory"
	face_left
# 881 "data/maps/Route2_House/scripts.pory"
	delay_16
# 882 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 883 "data/maps/Route2_House/scripts.pory"
	delay_16
# 884 "data/maps/Route2_House/scripts.pory"
	delay_16
# 885 "data/maps/Route2_House/scripts.pory"
	delay_16
# 886 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 889 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 890 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 891 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 894 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 895 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 896 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 899 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 900 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 903 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 904 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 905 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 906 "data/maps/Route2_House/scripts.pory"
	delay_16
# 907 "data/maps/Route2_House/scripts.pory"
	delay_16
# 908 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 909 "data/maps/Route2_House/scripts.pory"
	emote_x
# 910 "data/maps/Route2_House/scripts.pory"
	delay_16
# 911 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 914 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 915 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 916 "data/maps/Route2_House/scripts.pory"
	emote_x
# 917 "data/maps/Route2_House/scripts.pory"
	delay_16
# 918 "data/maps/Route2_House/scripts.pory"
	delay_16
# 919 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 920 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 921 "data/maps/Route2_House/scripts.pory"
	delay_16
# 922 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 925 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 926 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 928 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 929 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 929 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 929 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 933 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 937 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 938 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 939 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 940 "data/maps/Route2_House/scripts.pory"
	delay 60
# 941 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 942 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 943 "data/maps/Route2_House/scripts.pory"
	delay 40
# 944 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 950 "data/maps/Route2_House/scripts.pory"
	closemessage
# 951 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 952 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 953 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 954 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_0
# 955 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 956 "data/maps/Route2_House/scripts.pory"
	applymovement 7, emoteasleep
# 957 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 958 "data/maps/Route2_House/scripts.pory"
	delay 30
# 959 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 960 "data/maps/Route2_House/scripts.pory"
	closemessage
# 961 "data/maps/Route2_House/scripts.pory"
	delay 20
# 962 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_1
# 963 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 964 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 965 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 966 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 967 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 968 "data/maps/Route2_House/scripts.pory"
	delay 30
# 969 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 970 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 971 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 972 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 973 "data/maps/Route2_House/scripts.pory"
	closemessage
# 974 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 975 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 976 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 977 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 979 "data/maps/Route2_House/scripts.pory"
	closemessage
# 980 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 981 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 982 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 983 "data/maps/Route2_House/scripts.pory"
	delay 30
# 984 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 986 "data/maps/Route2_House/scripts.pory"
	closemessage
# 987 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 988 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 989 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 990 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 991 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 992 "data/maps/Route2_House/scripts.pory"
	closemessage
# 993 "data/maps/Route2_House/scripts.pory"
	delay 20
# 994 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 995 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 996 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 997 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 998 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 999 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 40
# 1000 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 1001 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 10, 12
	return


# 1004 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 1005 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 1008 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 1009 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1009 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1012 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 1013 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1013 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1016 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 1017 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1017 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1017 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1017 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 1018 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 1018 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 1022 "data/maps/Route2_House/scripts.pory"
	lock
# 1023 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 1024 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1025 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
	end

TakeARest_2:
# 1026 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1027 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1028 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 1029 "data/maps/Route2_House/scripts.pory"
	waitse
# 1030 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_Bathroom::
# 1037 "data/maps/Route2_House/scripts.pory"
	lock
# 1038 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 1087 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 1107 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 1118 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 1124 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 1039 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 1040 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1041 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 1075 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1076 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_22
# 1080 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
Route2_House_Eventscript_Bathroom_21:
# 1082 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1083 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1084 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 1088 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1089 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_14
# 1093 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_6
Route2_House_Eventscript_Bathroom_13:
# 1095 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1096 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1097 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1098 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1099 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_27
Route2_House_Eventscript_Bathroom_25:
# 1103 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_4:
# 1108 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_7
# 1113 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1114 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1115 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1116 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 1119 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_8
# 1120 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1121 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1122 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 1042 "data/maps/Route2_House/scripts.pory"
	hidefollowernpc
# 1043 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1044 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 1045 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 1046 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1047 "data/maps/Route2_House/scripts.pory"
	waitse
# 1048 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SURF
# 1049 "data/maps/Route2_House/scripts.pory"
	waitse
# 1050 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1051 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 1052 "data/maps/Route2_House/scripts.pory"
	waitse
# 1053 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1054 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1055 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1056 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1057 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1058 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1059 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 1060 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1061 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1062 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_18
# 1067 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 40
# 1068 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
Route2_House_Eventscript_Bathroom_17:
# 1070 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1071 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1072 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_14:
# 1090 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
	goto Route2_House_Eventscript_Bathroom_13

Route2_House_Eventscript_Bathroom_18:
# 1063 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 10
# 1064 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
	goto Route2_House_Eventscript_Bathroom_17

Route2_House_Eventscript_Bathroom_22:
# 1077 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
	goto Route2_House_Eventscript_Bathroom_21

Route2_House_Eventscript_Bathroom_26:
# 1101 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_25

Route2_House_Eventscript_Bathroom_27:
# 1099 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_House_Eventscript_Bathroom_26
	goto Route2_House_Eventscript_Bathroom_25


Route2_House_Eventscript_AkihikoOnFrame42::
# 1129 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_AkihikoOnFrame43::
# 1133 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2
	return


Route2_House_Eventscript_TheFirstMorning::
# 1136 "data/maps/Route2_House/scripts.pory"
	lock
# 1137 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 43
# 1138 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1139 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 1140 "data/maps/Route2_House/scripts.pory"
	waitse
# 1141 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 1143 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1144 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1145 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1146 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1147 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1148 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 1149 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1150 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 1151 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1152 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1153 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1154 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1155 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1156 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1157 "data/maps/Route2_House/scripts.pory"
	goto EventScript_RegionMap
# 1158 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TheFirstMorning2::
# 1162 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1163 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1175 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1176 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1177 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1178 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1179 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1180 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1181 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1182 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1183 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1184 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1185 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1186 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1187 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_TheFirstMorning2_Movement_0
# 1188 "data/maps/Route2_House/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1189 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1190 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1191 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1192 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1193 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_1
# 1197 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1198 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1199 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1201 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 1202 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2_2
# 1210 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
Route2_House_Eventscript_TheFirstMorning2_1:
# 1212 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1213 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 1214 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1215 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1216 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1217 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1218 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 1219 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 1220 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1221 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1222 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1223 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2_2:
# 1204 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_2
# 1206 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1207 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, MITSURUS_PROLOGUE
	goto Route2_House_Eventscript_TheFirstMorning2_1


# 1227 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1228 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1228 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1229 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1229 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1230 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1233 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1234 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1234 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1234 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1234 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1235 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1235 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1236 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1238 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1239 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1239 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1240 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1243 "data/maps/Route2_House/scripts.pory"
MitsuruJoinsTheFirstMorning:
# 1244 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1244 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1245 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1247 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1248 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1248 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1248 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1248 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1249 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_MitsuruOnWarp8::
# 1253 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruRestForTheNight::
# 1257 "data/maps/Route2_House/scripts.pory"
	lock
# 1258 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0
# 1259 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1260 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1261 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruRestForTheNight_Text_0
# 1262 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1263 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 9
# 1264 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 1265 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1266 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP
	return


Route2_House_Eventscript_MitsuruOnFrame10::
# 1270 "data/maps/Route2_House/scripts.pory"
	lock
# 1271 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1272 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruPostRest
	return


Route2_House_Eventscript_MitsuruPostRest::
# 1276 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1277 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1278 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1279 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruPostRest_Text_0
# 1280 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1281 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 11
# 1282 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1283 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1284 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji::
# 1289 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1290 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1291 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 1292 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1293 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1294 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1295 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1296 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1297 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1298 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1299 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1300 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1301 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1302 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1303 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1304 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1305 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1306 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1307 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1308 "data/maps/Route2_House/scripts.pory"
	playse SE_SUCCESS
# 1309 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 1310 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1311 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1312 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1313 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 1314 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1315 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0
# 1320 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1321 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 1322 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1323 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1
# 1325 "data/maps/Route2_House/scripts.pory"
	callnative ClearMugshot
# 1326 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2
# 1329 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1330 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1331 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1332 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0
# 1333 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1334 "data/maps/Route2_House/scripts.pory"
	showobjectat 4, MAP_ROUTE2_HOUSE
# 1335 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1336 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1337 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1338 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1339 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1
# 1340 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1341 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3
# 1344 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1345 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1346 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 1347 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1348 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4
# 1351 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1352 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1353 "data/maps/Route2_House/scripts.pory"
	applymovement 4, walkinplaceleft
# 1354 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1355 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2
# 1356 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3
# 1357 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1358 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4
# 1359 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1360 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1361 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1362 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1363 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1364 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkinplaceleft
# 1365 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1366 "data/maps/Route2_House/scripts.pory"
	playse SE_PC_OFF
# 1367 "data/maps/Route2_House/scripts.pory"
	waitse
# 1368 "data/maps/Route2_House/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1369 "data/maps/Route2_House/scripts.pory"
	waitse
# 1370 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 10, 0x22A, TRUE
# 1371 "data/maps/Route2_House/scripts.pory"
	setmetatile 2, 11, 0x232, TRUE
# 1372 "data/maps/Route2_House/scripts.pory"
	special DrawWholeMapView
# 1373 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1374 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1375 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 23
# 1376 "data/maps/Route2_House/scripts.pory"
	fwdtime 17, 15
# 1377 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1378 "data/maps/Route2_House/scripts.pory"
	special ShowMapNamePopup
# 1379 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruCallingTakeharuForHelp::
# 1384 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1385 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0
# 1387 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1388 "data/maps/Route2_House/scripts.pory"
	playse SE_POKENAV_OFF
# 1389 "data/maps/Route2_House/scripts.pory"
	waitse
# 1390 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1391 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 1392 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
# 1393 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceleft
# 1394 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1395 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1
# 1399 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1400 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1401 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2
# 1405 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1406 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 1407 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1408 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1409 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0
# 1410 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1
# 1411 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1412 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1413 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1414 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1415 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1416 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 27
# 1417 "data/maps/Route2_House/scripts.pory"
	fwdtime 10, 55
# 1418 "data/maps/Route2_House/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 1419 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV::
# 1424 "data/maps/Route2_House/scripts.pory"
	lock
# 1425 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1426 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0
# 1427 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1428 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1429 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_0
# 1430 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1431 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1432 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 1433 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1434 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 1435 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1436 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1437 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 1438 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1439 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_TEMP_5
# 1440 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1441 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkiShinjiWakesUp
# 1442 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1443 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1444 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 1445 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1446 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 1447 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1448 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1449 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAround
# 1450 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1451 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 1452 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1453 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1454 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceup
# 1455 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1456 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 1458 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1
# 1461 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1462 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV
	return


Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV::
# 1466 "data/maps/Route2_House/scripts.pory"
	lock
# 1467 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1468 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 1471 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1472 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1473 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1474 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1475 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 1476 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1477 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1478 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1479 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 1482 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1483 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1484 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1485 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1486 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1487 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 1500 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1501 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1502 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 1503 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1504 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 1506 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1507 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1508 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1509 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 1511 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1512 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 1513 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1514 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1515 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 1516 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1517 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1518 "data/maps/Route2_House/scripts.pory"
	waitse
# 1519 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emoteexclamation
# 1520 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 1521 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1522 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 1529 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1530 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1531 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1532 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1533 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1534 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1535 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1536 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1537 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1538 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1539 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 1543 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1544 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1545 "data/maps/Route2_House/scripts.pory"
	waitse
# 1546 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 1547 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1548 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 1549 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1550 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 1551 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1552 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1553 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 1555 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1556 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1557 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1558 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1559 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1560 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1561 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 1562 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1563 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 1564 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1565 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1566 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1567 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0
# 1568 "data/maps/Route2_House/scripts.pory"
	applymovement 6, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1
# 1569 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2
# 1570 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1571 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1572 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1573 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 1575 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1576 "data/maps/Route2_House/scripts.pory"
	applymovement 8, Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3
# 1577 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1578 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1579 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuruPOV::
# 1583 "data/maps/Route2_House/scripts.pory"
	lock
# 1584 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1585 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 1587 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1588 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 1589 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1590 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 1600 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1601 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 1602 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 1603 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 1604 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1605 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1606 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 1610 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1611 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 1612 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1613 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 1614 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1615 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 1617 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1618 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 1619 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1620 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 1623 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1624 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 1625 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1626 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 1629 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1630 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1631 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 1632 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 1633 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceright
# 1634 "data/maps/Route2_House/scripts.pory"
	waitmovement 8
# 1635 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 1636 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 1637 "data/maps/Route2_House/scripts.pory"
	delay 16
# 1638 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 1639 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1640 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 1641 "data/maps/Route2_House/scripts.pory"
	applymovement 8, facedown
# 1642 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 1643 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 1644 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1645 "data/maps/Route2_House/scripts.pory"
	waitse
# 1646 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 1647 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1648 "data/maps/Route2_House/scripts.pory"
	waitse
# 1649 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 1650 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1651 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 29
# 1652 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1653 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 1654 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 11
	return


Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV::
# 1658 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1659 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0
# 1660 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1661 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1662 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_1
# 1663 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1664 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1665 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 1666 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1667 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1668 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 1677 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1678 "data/maps/Route2_House/scripts.pory"
	delay 50
# 1679 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1680 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 1681 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 1694 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1695 "data/maps/Route2_House/scripts.pory"
	delay 40
# 1696 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 1698 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1699 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1700 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotepensive
# 1701 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1702 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 1703 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1704 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1705 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 1712 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1713 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 1714 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 1715 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1716 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 1717 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1718 "data/maps/Route2_House/scripts.pory"
	delay 90
# 1719 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 1720 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 1721 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1722 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 1723 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1724 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 1727 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1728 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNightMitsuruPOV
	return


Route2_House_Eventscript_StayingTheNightMitsuruPOV::
# 1732 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1733 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoLookingAtTheBed
# 1734 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1735 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 1736 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1737 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 1738 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1739 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 1743 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1744 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1745 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AKihikoRemembersCampGears
# 1746 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1747 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 1748 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1749 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 1750 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 1751 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1752 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 1754 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1755 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1756 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoBickering
# 1757 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1758 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 1759 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 1760 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1761 "data/maps/Route2_House/scripts.pory"
	lock
# 1762 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1763 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1764 "data/maps/Route2_House/scripts.pory"
	release
# 1765 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1766 "data/maps/Route2_House/scripts.pory"
	applymovement 8, jumpinplaceright
# 1767 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1768 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 1769 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1770 "data/maps/Route2_House/scripts.pory"
	lock
# 1771 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 8, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 1772 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 1773 "data/maps/Route2_House/scripts.pory"
	release
# 1774 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1775 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 1776 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1777 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 1778 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1779 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 1780 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1781 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 1782 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1783 "data/maps/Route2_House/scripts.pory"
	applymovement 8, faceup
# 1784 "data/maps/Route2_House/scripts.pory"
	delay 10
# 1785 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 1786 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1787 "data/maps/Route2_House/scripts.pory"
	delay 60
# 1788 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 1789 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1790 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 1791 "data/maps/Route2_House/scripts.pory"
	applymovement 8, emotemusic
# 1792 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 1793 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1794 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 1796 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1797 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 1798 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1799 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1800 "data/maps/Route2_House/scripts.pory"
	delay 80
# 1801 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1802 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 1803 "data/maps/Route2_House/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_TheFirstMorningMitsuruPOV::
# 1807 "data/maps/Route2_House/scripts.pory"
	lock
# 1808 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1809 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1810 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1811 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1812 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1813 "data/maps/Route2_House/scripts.pory"
	addobject 8
# 1814 "data/maps/Route2_House/scripts.pory"
	applymovement 8, AkihikoGoesToPlaceTheFirstMorning
# 1815 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1816 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1817 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1818 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1819 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 34
# 1820 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1821 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1822 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1823 "data/maps/Route2_House/scripts.pory"
	call EventScript_RegionMap
	return


Route2_House_Eventscript_TheFirstMorning2MitsuruPOV::
# 1827 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1828 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1840 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1841 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1842 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1843 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1844 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1845 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1846 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1847 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1848 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 1849 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0
# 1850 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1851 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1852 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1853 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1854 "data/maps/Route2_House/scripts.pory"
	removeobject 8
# 1855 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1856 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1857 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1858 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0
# 1862 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1863 "data/maps/Route2_House/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 2
# 1864 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 1866 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1867 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2
# 1873 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1:
# 1875 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1876 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 1877 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1878 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1879 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1880 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 1881 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 1882 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_INTELEON_T
# 1883 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 1884 "data/maps/Route2_House/scripts.pory"
	completesubquest STORY_QUESTS, MITSURUS_PROLOGUE
# 1885 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1886 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_2:
# 1868 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1
# 1869 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1870 "data/maps/Route2_House/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
	goto Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_1


# 954 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_0:
# 954 "data/maps/Route2_House/scripts.pory"
	walk_up
# 954 "data/maps/Route2_House/scripts.pory"
	walk_up
# 954 "data/maps/Route2_House/scripts.pory"
	walk_up
# 954 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 962 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_1:
# 962 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 962 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
	step_end

# 1187 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2_Movement_0:
# 1187 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1187 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1187 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1258 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0:
# 1258 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1258 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1258 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1258 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1258 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1258 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1258 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1258 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1258 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1258 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1258 "data/maps/Route2_House/scripts.pory"
	face_right
# 1258 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1258 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1258 "data/maps/Route2_House/scripts.pory"
	face_up
# 1258 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1258 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1258 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 1332 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0:
# 1332 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1332 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 1339 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1:
# 1339 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1339 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1339 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1355 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2:
# 1355 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1355 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1356 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3:
# 1356 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1356 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1356 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1356 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1358 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4:
# 1358 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1358 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1358 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1358 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1409 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0:
# 1409 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1409 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1410 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1:
# 1410 "data/maps/Route2_House/scripts.pory"
	walk_in_place_left
# 1410 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1410 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1410 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1410 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1426 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Movement_0:
# 1426 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1426 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 1426 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 1567 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_0:
# 1567 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1567 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1568 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_1:
# 1568 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1568 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1569 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_2:
# 1569 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1569 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1569 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 1569 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1569 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1569 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1569 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1569 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 1569 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 1576 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TriosFirstGreetingMitsuruPOV_Movement_3:
# 1576 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1576 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1576 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1659 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_0:
# 1659 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1659 "data/maps/Route2_House/scripts.pory"
	walk_diag_northwest
# 1659 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1659 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1659 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 1659 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

# 1662 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruExplainingObjectivesMitsuruPOV_Movement_1:
# 1662 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

# 1849 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Movement_0:
# 1849 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1849 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1849 "data/maps/Route2_House/scripts.pory"
	set_visible
	step_end

Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 227 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 228 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 257 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 260 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 271 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 278 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 282 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 290 "data/maps/Route2_House/scripts.pory"
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
# 307 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 312 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 318 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 325 "data/maps/Route2_House/scripts.pory"
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
# 342 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 351 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 356 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 364 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 445 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 452 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 465 "data/maps/Route2_House/scripts.pory"
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
# 498 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 508 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon's looking at you judgingly.)\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 520 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 530 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 539 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 544 "data/maps/Route2_House/scripts.pory"
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
# 557 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 560 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 567 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 571 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 591 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 597 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "{COLOR RED}We'll be having 3-vs-3 Pokémon battles\n"
	.string "and items are not allowed so plan your\l"
	.string "party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 625 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 714 "data/maps/Route2_House/scripts.pory"
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
# 727 "data/maps/Route2_House/scripts.pory"
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
# 742 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We can\n"
	.string "simply just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 751 "data/maps/Route2_House/scripts.pory"
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
# 771 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 799 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 803 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}M-my apologies, it slipped my mind that\n"
	.string "this house doesn't have guest rooms.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 811 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 816 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 841 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 845 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 852 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}...$"

Route2_House_Eventscript_StayingTheNight_Text_7:
# 858 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 944 "data/maps/Route2_House/scripts.pory"
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
# 959 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is already sleeping soundly. She\n"
	.string "won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 972 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 977 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 984 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 991 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 1023 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_Bathroom_Text_0:
# 1039 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 1064 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 1068 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}(That really freshened me up.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 1077 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 1080 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's do it later.)$"

Route2_House_Eventscript_Bathroom_Text_5:
# 1090 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_6:
# 1093 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's not waste time any further.)$"

Route2_House_Eventscript_Bathroom_Text_7:
# 1108 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_8:
# 1119 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 1141 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-yawn- (Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 1145 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Everyone, please gather around. I'll\n"
	.string "explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 1155 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning2_Text_0:
# 1163 "data/maps/Route2_House/scripts.pory"
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
# 1193 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2_Text_2:
# 1204 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Mitsuru's Prologue {COLOR GREEN}unlocked.\n"
	.string "Check Quest Menu for more details.$"

Route2_House_Eventscript_MitsuruRestForTheNight_Text_0:
# 1261 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not too shabby. This will do.$"

Route2_House_Eventscript_MitsuruPostRest_Text_0:
# 1279 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The sun's up. Time to move out.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0:
# 1315 "data/maps/Route2_House/scripts.pory"
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
# 1323 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(And this one is Aragaki Shinjiro.)\p"
	.string "(He's also adopted on paper and has a\n"
	.string "standard trainer card.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2:
# 1326 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Considering how eagerly the Genesis\n"
	.string "staff were searching for them)\p"
	.string "(I guess they must be ones of their\n"
	.string "“good potential” subjects.)\p"
	.string "(In that case, I must find them before\n"
	.string "the Genesis group does.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3:
# 1341 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Inteleon, you're back. Just about time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I'd love to give you a rest but we really\n"
	.string "have to act right now.\p"
	.string "Although if you're too tired, you can\n"
	.string "return to the Pokéball.$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4:
# 1348 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head, looking\n"
	.string "determined to accompany Mitsuru.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}If that's what you want, alright. Let's\n"
	.string "go then.\p"
	.string "We should start asking around Sunshine\n"
	.string "Town for these two boys.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0:
# 1385 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, Father. That'd be great.\p"
	.string "Yes. I'll talk to you later.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1:
# 1395 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(It's been days and the girl still hasn't\n"
	.string "been found.)\p"
	.string "(There's a great chance that the\n"
	.string "Genesis group has taken her.)\p"
	.string "(I hope Father could help with the\n"
	.string "searching somehow.)\p"
	.string "........$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2:
# 1401 "data/maps/Route2_House/scripts.pory"
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
# 1429 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUpMitsuruPOV_Text_1:
# 1458 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_0:
# 1858 "data/maps/Route2_House/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"

Route2_House_Eventscript_TheFirstMorning2MitsuruPOV_Text_1:
# 1868 "data/maps/Route2_House/scripts.pory"
	.string "{COLOR RED}Akihiko's Prologue {COLOR GREEN}unlocked. Check\n"
	.string "Quest Menu for more details.$"
