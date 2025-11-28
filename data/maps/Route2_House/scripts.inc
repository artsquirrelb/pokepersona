Route2_House_MapScripts::
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route2_House_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 83 "data/maps/Route2_House/scripts.pory"
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
# 21 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 27
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 29 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 32 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 35 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 39 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 43 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 52 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 61 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_28
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 65 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 69 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_38
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 75 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 26
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_40
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 22 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 25 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 26 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
# 27 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 30 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 33 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 36 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 37 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 1, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 40 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 41 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 39 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_lt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 44 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
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
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 53 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 54 "data/maps/Route2_House/scripts.pory"
	hideobjectat 1, MAP_ROUTE2_HOUSE
# 55 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 56 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 4, 7
# 58 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 59 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 11, 6
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 62 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 63 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 66 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 67 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 65 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 26
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_31
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 65 "data/maps/Route2_House/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_38:
# 70 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 2, 9
# 71 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 72 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 7, 13
# 73 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_37

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_40:
# 76 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 7, 4
# 77 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 78 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 79 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
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
	.2byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 84 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnFrame27
# 85 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnFrame32
# 86 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnFrame38
# 87 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 39, Route2_House_Eventscript_AkihikoOnFrame39
# 88 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_House_Eventscript_AkihikoOnFrame42
# 89 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 43, Route2_House_Eventscript_AkihikoOnFrame43
# 91 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, Route2_House_Eventscript_MitsuruOnFrame8
# 92 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 10, Route2_House_Eventscript_MitsuruOnFrame10
# 93 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 22, Route2_House_Eventscript_MitsuruOnFrame22
# 94 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 26, Route2_House_Eventscript_MitsuruOnFrame26
	.2byte 0


Route2_House_Eventscript_MitsuruOnWarp26::
# 99 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_AkihikoOnWarp27::
# 103 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 107 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 108 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 109 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 113 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnWarp39::
# 116 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
# 117 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnWarp42::
# 120 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_MitsuruOnWarp10::
# 124 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


Route2_House_Eventscript_MitsuruOnWarp22::
# 128 "data/maps/Route2_House/scripts.pory"
	hideobjectat 1, MAP_ROUTE2_HOUSE
# 129 "data/maps/Route2_House/scripts.pory"
	hideobjectat 4, MAP_ROUTE2_HOUSE
# 130 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 134 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 138 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_MitsuruOnFrame8::
# 142 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruRestForTheNight
	return


Route2_House_Eventscript_MitsuruOnFrame22::
# 146 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji
	return


Route2_House_Eventscript_MitsuruOnFrame26::
# 150 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 151 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruCallingTakeharuForHelp
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 155 "data/maps/Route2_House/scripts.pory"
	lock
# 156 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 157 "data/maps/Route2_House/scripts.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
# 158 "data/maps/Route2_House/scripts.pory"
	delay 20
# 159 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 160 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route2_House/scripts.pory"
	delay 30
# 162 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 163 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 164 "data/maps/Route2_House/scripts.pory"
	closemessage
# 165 "data/maps/Route2_House/scripts.pory"
	delay 30
# 166 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 167 "data/maps/Route2_House/scripts.pory"
	delay 4
# 168 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 169 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route2_House/scripts.pory"
	delay 20
# 171 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 172 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 173 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 175 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 176 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 177 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 178 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 179 "data/maps/Route2_House/scripts.pory"
	delay 4
# 180 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 181 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 182 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 183 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route2_House/scripts.pory"
	delay 30
# 185 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 186 "data/maps/Route2_House/scripts.pory"
	delay 8
# 187 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 188 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route2_House/scripts.pory"
	delay 30
# 190 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 191 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 194 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 195 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 198 "data/maps/Route2_House/scripts.pory"
	closemessage
# 199 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 200 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 204 "data/maps/Route2_House/scripts.pory"
	lock
# 205 "data/maps/Route2_House/scripts.pory"
	delay 30
# 206 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 209 "data/maps/Route2_House/scripts.pory"
	closemessage
# 210 "data/maps/Route2_House/scripts.pory"
	delay 30
# 211 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 212 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 214 "data/maps/Route2_House/scripts.pory"
	closemessage
# 215 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 216 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 220 "data/maps/Route2_House/scripts.pory"
	delay 20
# 221 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 222 "data/maps/Route2_House/scripts.pory"
	delay 8
# 223 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 224 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 238 "data/maps/Route2_House/scripts.pory"
	closemessage
# 239 "data/maps/Route2_House/scripts.pory"
	delay 20
# 240 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 241 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 244 "data/maps/Route2_House/scripts.pory"
	closemessage
# 245 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 246 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 249 "data/maps/Route2_House/scripts.pory"
	closemessage
# 250 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 251 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 252 "data/maps/Route2_House/scripts.pory"
	delay 8
# 253 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 254 "data/maps/Route2_House/scripts.pory"
	closemessage
# 255 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 256 "data/maps/Route2_House/scripts.pory"
	waitse
# 257 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 258 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 259 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 267 "data/maps/Route2_House/scripts.pory"
	closemessage
# 268 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 269 "data/maps/Route2_House/scripts.pory"
	delay 16
# 270 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 271 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route2_House/scripts.pory"
	delay 60
# 273 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 274 "data/maps/Route2_House/scripts.pory"
	delay 16
# 275 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 276 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 277 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 281 "data/maps/Route2_House/scripts.pory"
	closemessage
# 282 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 283 "data/maps/Route2_House/scripts.pory"
	waitse
# 284 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 285 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 286 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 287 "data/maps/Route2_House/scripts.pory"
	closemessage
# 288 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 289 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 290 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 293 "data/maps/Route2_House/scripts.pory"
	closemessage
# 294 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 295 "data/maps/Route2_House/scripts.pory"
	delay 8
# 296 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 297 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route2_House/scripts.pory"
	delay 60
# 299 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 300 "data/maps/Route2_House/scripts.pory"
	closemessage
# 301 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 302 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 304 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 305 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 306 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 20
# 307 "data/maps/Route2_House/scripts.pory"
	release
	end


# 311 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 312 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 314 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 315 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 315 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 315 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 315 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 318 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 319 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 320 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 323 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 324 "data/maps/Route2_House/scripts.pory"
	set_visible
# 325 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 328 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 329 "data/maps/Route2_House/scripts.pory"
	face_left
# 330 "data/maps/Route2_House/scripts.pory"
	delay_16
# 331 "data/maps/Route2_House/scripts.pory"
	delay_16
# 332 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 333 "data/maps/Route2_House/scripts.pory"
	delay_16
# 334 "data/maps/Route2_House/scripts.pory"
	face_right
# 335 "data/maps/Route2_House/scripts.pory"
	delay_16
# 336 "data/maps/Route2_House/scripts.pory"
	delay_16
# 337 "data/maps/Route2_House/scripts.pory"
	delay_16
# 338 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 342 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 343 "data/maps/Route2_House/scripts.pory"
	face_right
# 344 "data/maps/Route2_House/scripts.pory"
	delay_16
# 345 "data/maps/Route2_House/scripts.pory"
	delay_16
# 346 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 347 "data/maps/Route2_House/scripts.pory"
	face_up
# 348 "data/maps/Route2_House/scripts.pory"
	delay_16
# 349 "data/maps/Route2_House/scripts.pory"
	delay_16
# 350 "data/maps/Route2_House/scripts.pory"
	face_left
# 351 "data/maps/Route2_House/scripts.pory"
	delay_16
# 352 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 355 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 356 "data/maps/Route2_House/scripts.pory"
	walk_left
# 357 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 360 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 361 "data/maps/Route2_House/scripts.pory"
	walk_right
# 362 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 365 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 366 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 367 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 370 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 371 "data/maps/Route2_House/scripts.pory"
	walk_left
# 372 "data/maps/Route2_House/scripts.pory"
	walk_up
# 373 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 377 "data/maps/Route2_House/scripts.pory"
	lock
# 378 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 379 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 385 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 394 "data/maps/Route2_House/scripts.pory"
	release
	return

Route2_House_Eventscript_Mitsuru_2:
# 380 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 383 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 386 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 387 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 389 "data/maps/Route2_House/scripts.pory"
	closemessage
# 390 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 391 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 392 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 398 "data/maps/Route2_House/scripts.pory"
	lock
# 399 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 400 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 412 "data/maps/Route2_House/scripts.pory"
	closemessage
# 413 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 414 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 415 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 416 "data/maps/Route2_House/scripts.pory"
	release
	return


# 419 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 420 "data/maps/Route2_House/scripts.pory"
	walk_down
# 421 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 422 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 423 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 423 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 427 "data/maps/Route2_House/scripts.pory"
	lock
# 428 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 429 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 430 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 431 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 434 "data/maps/Route2_House/scripts.pory"
	closemessage
# 435 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_Inteleon::
# 440 "data/maps/Route2_House/scripts.pory"
	lock
# 441 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 442 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 444 "data/maps/Route2_House/scripts.pory"
	closemessage
# 445 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 446 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToShinjiro::
# 451 "data/maps/Route2_House/scripts.pory"
	lock
# 452 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 453 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 454 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 455 "data/maps/Route2_House/scripts.pory"
	closemessage
# 456 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToMitsuru::
# 461 "data/maps/Route2_House/scripts.pory"
	lock
# 462 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 463 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 464 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 465 "data/maps/Route2_House/scripts.pory"
	closemessage
# 466 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 471 "data/maps/Route2_House/scripts.pory"
	lock
# 472 "data/maps/Route2_House/scripts.pory"
	delay 30
# 473 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 475 "data/maps/Route2_House/scripts.pory"
	closemessage
# 476 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 477 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 478 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 488 "data/maps/Route2_House/scripts.pory"
	closemessage
# 489 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 490 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 491 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 492 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 493 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 494 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 498 "data/maps/Route2_House/scripts.pory"
	closemessage
# 499 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 500 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 501 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 502 "data/maps/Route2_House/scripts.pory"
	closemessage
# 503 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 504 "data/maps/Route2_House/scripts.pory"
	waitse
# 505 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 507 "data/maps/Route2_House/scripts.pory"
	closemessage
# 508 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 509 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 510 "data/maps/Route2_House/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 511 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_SHARE
# 512 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_EXP_SHARE
# 513 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 514 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 515 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 516 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 517 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 518 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 521 "data/maps/Route2_House/scripts.pory"
	closemessage
# 522 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 523 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 524 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 527 "data/maps/Route2_House/scripts.pory"
	closemessage
# 528 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 529 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 530 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 531 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 532 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 533 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 534 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 535 "data/maps/Route2_House/scripts.pory"
	delay 16
# 536 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 537 "data/maps/Route2_House/scripts.pory"
	delay 4
# 538 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 539 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 540 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 541 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 542 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 543 "data/maps/Route2_House/scripts.pory"
	waitse
# 544 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 545 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 546 "data/maps/Route2_House/scripts.pory"
	waitse
# 547 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 548 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 549 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 550 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 551 "data/maps/Route2_House/scripts.pory"
	delay 30
# 552 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 555 "data/maps/Route2_House/scripts.pory"
	closemessage
# 556 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 557 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 558 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 559 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 560 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 561 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 562 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 563 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 564 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 565 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 566 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 567 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 568 "data/maps/Route2_House/scripts.pory"
	release
	end


# 572 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 573 "data/maps/Route2_House/scripts.pory"
	walk_right
# 574 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 577 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 578 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 579 "data/maps/Route2_House/scripts.pory"
	walk_up
# 580 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 582 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 583 "data/maps/Route2_House/scripts.pory"
	walk_left
# 583 "data/maps/Route2_House/scripts.pory"
	walk_left
# 584 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 586 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 587 "data/maps/Route2_House/scripts.pory"
	walk_right
# 588 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 590 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 591 "data/maps/Route2_House/scripts.pory"
	walk_down
# 591 "data/maps/Route2_House/scripts.pory"
	walk_down
# 591 "data/maps/Route2_House/scripts.pory"
	walk_down
# 591 "data/maps/Route2_House/scripts.pory"
	walk_down
# 591 "data/maps/Route2_House/scripts.pory"
	walk_down
# 592 "data/maps/Route2_House/scripts.pory"
	walk_right
# 592 "data/maps/Route2_House/scripts.pory"
	walk_right
# 593 "data/maps/Route2_House/scripts.pory"
	walk_down
# 593 "data/maps/Route2_House/scripts.pory"
	walk_down
# 593 "data/maps/Route2_House/scripts.pory"
	walk_down
# 594 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 596 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 597 "data/maps/Route2_House/scripts.pory"
	walk_down
# 597 "data/maps/Route2_House/scripts.pory"
	walk_down
# 597 "data/maps/Route2_House/scripts.pory"
	walk_down
# 598 "data/maps/Route2_House/scripts.pory"
	walk_right
# 598 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 601 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 602 "data/maps/Route2_House/scripts.pory"
	walk_right
# 602 "data/maps/Route2_House/scripts.pory"
	walk_right
# 602 "data/maps/Route2_House/scripts.pory"
	walk_right
# 602 "data/maps/Route2_House/scripts.pory"
	walk_right
# 603 "data/maps/Route2_House/scripts.pory"
	walk_down
# 603 "data/maps/Route2_House/scripts.pory"
	walk_down
# 603 "data/maps/Route2_House/scripts.pory"
	walk_down
# 604 "data/maps/Route2_House/scripts.pory"
	walk_right
# 604 "data/maps/Route2_House/scripts.pory"
	walk_right
# 605 "data/maps/Route2_House/scripts.pory"
	walk_down
# 605 "data/maps/Route2_House/scripts.pory"
	walk_down
# 606 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 609 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 610 "data/maps/Route2_House/scripts.pory"
	walk_down
# 611 "data/maps/Route2_House/scripts.pory"
	walk_right
# 611 "data/maps/Route2_House/scripts.pory"
	walk_right
# 611 "data/maps/Route2_House/scripts.pory"
	walk_right
# 611 "data/maps/Route2_House/scripts.pory"
	walk_right
# 612 "data/maps/Route2_House/scripts.pory"
	walk_down
# 612 "data/maps/Route2_House/scripts.pory"
	walk_down
# 612 "data/maps/Route2_House/scripts.pory"
	walk_down
# 613 "data/maps/Route2_House/scripts.pory"
	walk_right
# 613 "data/maps/Route2_House/scripts.pory"
	walk_right
# 614 "data/maps/Route2_House/scripts.pory"
	walk_down
# 614 "data/maps/Route2_House/scripts.pory"
	walk_down
# 615 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 618 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 619 "data/maps/Route2_House/scripts.pory"
	walk_up
# 619 "data/maps/Route2_House/scripts.pory"
	walk_up
# 619 "data/maps/Route2_House/scripts.pory"
	walk_up
# 620 "data/maps/Route2_House/scripts.pory"
	walk_left
# 620 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 623 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 624 "data/maps/Route2_House/scripts.pory"
	walk_left
# 624 "data/maps/Route2_House/scripts.pory"
	walk_left
# 625 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 629 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 633 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 634 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 636 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 637 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 638 "data/maps/Route2_House/scripts.pory"
	delay 8
# 639 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 640 "data/maps/Route2_House/scripts.pory"
	delay 60
# 641 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 650 "data/maps/Route2_House/scripts.pory"
	closemessage
# 651 "data/maps/Route2_House/scripts.pory"
	delay 50
# 652 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 653 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 654 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 667 "data/maps/Route2_House/scripts.pory"
	closemessage
# 668 "data/maps/Route2_House/scripts.pory"
	delay 40
# 669 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 671 "data/maps/Route2_House/scripts.pory"
	closemessage
# 672 "data/maps/Route2_House/scripts.pory"
	delay 30
# 673 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 674 "data/maps/Route2_House/scripts.pory"
	delay 10
# 675 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 676 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 677 "data/maps/Route2_House/scripts.pory"
	delay 60
# 678 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 685 "data/maps/Route2_House/scripts.pory"
	closemessage
# 686 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 687 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 688 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 689 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 690 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 691 "data/maps/Route2_House/scripts.pory"
	delay 90
# 692 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 693 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 694 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 695 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 696 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 697 "data/maps/Route2_House/scripts.pory"
	delay 60
# 698 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 701 "data/maps/Route2_House/scripts.pory"
	closemessage
# 702 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 705 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 706 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 708 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 709 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 709 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 709 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 709 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 710 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 710 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 711 "data/maps/Route2_House/scripts.pory"
	walk_up
# 711 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 714 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 715 "data/maps/Route2_House/scripts.pory"
	walk_up
# 715 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 718 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 719 "data/maps/Route2_House/scripts.pory"
	walk_down
# 719 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 723 "data/maps/Route2_House/scripts.pory"
	delay 60
# 724 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 725 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 726 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 727 "data/maps/Route2_House/scripts.pory"
	closemessage
# 728 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 729 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 730 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 734 "data/maps/Route2_House/scripts.pory"
	closemessage
# 735 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 736 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 737 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 738 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 739 "data/maps/Route2_House/scripts.pory"
	closemessage
# 740 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 741 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 742 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 743 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 745 "data/maps/Route2_House/scripts.pory"
	closemessage
# 746 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 747 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 748 "data/maps/Route2_House/scripts.pory"
	delay 10
# 749 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 750 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 751 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 752 "data/maps/Route2_House/scripts.pory"
	lock
# 753 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 754 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 755 "data/maps/Route2_House/scripts.pory"
	release
# 756 "data/maps/Route2_House/scripts.pory"
	delay 30
# 757 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 758 "data/maps/Route2_House/scripts.pory"
	delay 10
# 759 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 760 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 761 "data/maps/Route2_House/scripts.pory"
	lock
# 762 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 763 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 764 "data/maps/Route2_House/scripts.pory"
	release
# 765 "data/maps/Route2_House/scripts.pory"
	delay 30
# 766 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 767 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 768 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 769 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 770 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 771 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 772 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 773 "data/maps/Route2_House/scripts.pory"
	closemessage
# 774 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 775 "data/maps/Route2_House/scripts.pory"
	delay 10
# 776 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 777 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 778 "data/maps/Route2_House/scripts.pory"
	delay 60
# 779 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 780 "data/maps/Route2_House/scripts.pory"
	closemessage
# 781 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 782 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 783 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 784 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 785 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 787 "data/maps/Route2_House/scripts.pory"
	closemessage
# 788 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 789 "data/maps/Route2_House/scripts.pory"
	delay 30
# 790 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 791 "data/maps/Route2_House/scripts.pory"
	delay 80
# 792 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 793 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 796 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 797 "data/maps/Route2_House/scripts.pory"
	face_left
# 798 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 799 "data/maps/Route2_House/scripts.pory"
	delay_16
# 800 "data/maps/Route2_House/scripts.pory"
	delay_16
# 801 "data/maps/Route2_House/scripts.pory"
	delay_16
# 802 "data/maps/Route2_House/scripts.pory"
	delay_16
# 803 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 806 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 807 "data/maps/Route2_House/scripts.pory"
	face_left
# 808 "data/maps/Route2_House/scripts.pory"
	delay_16
# 809 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 810 "data/maps/Route2_House/scripts.pory"
	delay_16
# 811 "data/maps/Route2_House/scripts.pory"
	delay_16
# 812 "data/maps/Route2_House/scripts.pory"
	delay_16
# 813 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 816 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 817 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 818 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 821 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 822 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 823 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 826 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 827 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 830 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 831 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 832 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 833 "data/maps/Route2_House/scripts.pory"
	delay_16
# 834 "data/maps/Route2_House/scripts.pory"
	delay_16
# 835 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 836 "data/maps/Route2_House/scripts.pory"
	emote_x
# 837 "data/maps/Route2_House/scripts.pory"
	delay_16
# 838 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 841 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 842 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 843 "data/maps/Route2_House/scripts.pory"
	emote_x
# 844 "data/maps/Route2_House/scripts.pory"
	delay_16
# 845 "data/maps/Route2_House/scripts.pory"
	delay_16
# 846 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 847 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 848 "data/maps/Route2_House/scripts.pory"
	delay_16
# 849 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 852 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 853 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 855 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 856 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 856 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 856 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 860 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 864 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 865 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 866 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 867 "data/maps/Route2_House/scripts.pory"
	delay 60
# 868 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 869 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 870 "data/maps/Route2_House/scripts.pory"
	delay 40
# 871 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 877 "data/maps/Route2_House/scripts.pory"
	closemessage
# 878 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 879 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 880 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 881 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_0
# 882 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 883 "data/maps/Route2_House/scripts.pory"
	applymovement 7, emoteasleep
# 884 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 885 "data/maps/Route2_House/scripts.pory"
	delay 30
# 886 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 887 "data/maps/Route2_House/scripts.pory"
	closemessage
# 888 "data/maps/Route2_House/scripts.pory"
	delay 20
# 889 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_1
# 890 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 891 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 892 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 893 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 894 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 895 "data/maps/Route2_House/scripts.pory"
	delay 30
# 896 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 897 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 898 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 899 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 900 "data/maps/Route2_House/scripts.pory"
	closemessage
# 901 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 902 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 903 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 904 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 906 "data/maps/Route2_House/scripts.pory"
	closemessage
# 907 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 908 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 909 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 910 "data/maps/Route2_House/scripts.pory"
	delay 30
# 911 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 913 "data/maps/Route2_House/scripts.pory"
	closemessage
# 914 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 915 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 916 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 917 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 918 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 919 "data/maps/Route2_House/scripts.pory"
	closemessage
# 920 "data/maps/Route2_House/scripts.pory"
	delay 20
# 921 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 922 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 923 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 924 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 925 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 926 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 40
# 927 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 928 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 10, 12
	return


# 931 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 932 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 935 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 936 "data/maps/Route2_House/scripts.pory"
	walk_up
# 936 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 939 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 940 "data/maps/Route2_House/scripts.pory"
	walk_down
# 940 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 943 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 944 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 944 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 944 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 944 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 945 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 945 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 949 "data/maps/Route2_House/scripts.pory"
	lock
# 950 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 951 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
# 958 "data/maps/Route2_House/scripts.pory"
	closemessage
	end

TakeARest_2:
# 952 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 953 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 954 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 955 "data/maps/Route2_House/scripts.pory"
	waitse
# 956 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_Bathroom::
# 963 "data/maps/Route2_House/scripts.pory"
	lock
# 964 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 1014 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 1034 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 1045 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 1051 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 965 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 966 "data/maps/Route2_House/scripts.pory"
	closemessage
# 967 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 1002 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1003 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_22
# 1007 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
Route2_House_Eventscript_Bathroom_21:
# 1009 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1010 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1011 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 1015 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1016 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_14
# 1020 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_6
Route2_House_Eventscript_Bathroom_13:
# 1022 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1023 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1024 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1025 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1026 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_27
Route2_House_Eventscript_Bathroom_25:
# 1030 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_4:
# 1035 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_7
# 1040 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1041 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1042 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1043 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 1046 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_8
# 1047 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1048 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1049 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 968 "data/maps/Route2_House/scripts.pory"
	hidefollowernpc
# 969 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 970 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 971 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 972 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 973 "data/maps/Route2_House/scripts.pory"
	waitse
# 974 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR
# 975 "data/maps/Route2_House/scripts.pory"
	delay 60
# 976 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 977 "data/maps/Route2_House/scripts.pory"
	waitse
# 978 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 979 "data/maps/Route2_House/scripts.pory"
	waitse
# 980 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 981 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 982 "data/maps/Route2_House/scripts.pory"
	delay 30
# 983 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 984 "data/maps/Route2_House/scripts.pory"
	delay 20
# 985 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 986 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 987 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 988 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 989 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_18
# 994 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 40
# 995 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
Route2_House_Eventscript_Bathroom_17:
# 997 "data/maps/Route2_House/scripts.pory"
	closemessage
# 998 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 999 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_14:
# 1017 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
	goto Route2_House_Eventscript_Bathroom_13

Route2_House_Eventscript_Bathroom_18:
# 990 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 10
# 991 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
	goto Route2_House_Eventscript_Bathroom_17

Route2_House_Eventscript_Bathroom_22:
# 1004 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
	goto Route2_House_Eventscript_Bathroom_21

Route2_House_Eventscript_Bathroom_26:
# 1028 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_25

Route2_House_Eventscript_Bathroom_27:
# 1026 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_House_Eventscript_Bathroom_26
	goto Route2_House_Eventscript_Bathroom_25


Route2_House_Eventscript_AkihikoOnFrame42::
# 1056 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_AkihikoOnFrame43::
# 1060 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2
	return


Route2_House_Eventscript_TheFirstMorning::
# 1063 "data/maps/Route2_House/scripts.pory"
	lock
# 1064 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 43
# 1065 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1066 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 1067 "data/maps/Route2_House/scripts.pory"
	waitse
# 1068 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 1070 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1071 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1072 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1073 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1074 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1075 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 1076 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1077 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 1078 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1079 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1080 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1081 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1082 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1083 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1084 "data/maps/Route2_House/scripts.pory"
	goto EventScript_RegionMap
# 1085 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TheFirstMorning2::
# 1089 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1090 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1102 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1103 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1104 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1105 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1106 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1107 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1108 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1109 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1110 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1111 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1112 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1113 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1114 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_TheFirstMorning2_Movement_0
# 1115 "data/maps/Route2_House/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1116 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1117 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1118 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1119 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1120 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_1
# 1125 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1126 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1127 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 1128 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1129 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1130 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1131 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1132 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 1133 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1134 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1135 "data/maps/Route2_House/scripts.pory"
	release
	end


# 1139 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1140 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1140 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1141 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1141 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1142 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1145 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1146 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1146 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1146 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1146 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1147 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1147 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1148 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1150 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1151 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1151 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1152 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1155 "data/maps/Route2_House/scripts.pory"
MitsuruJoinsTheFirstMorning:
# 1156 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1156 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1157 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1159 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1160 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1160 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1160 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1160 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1161 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_MitsuruOnWarp8::
# 1165 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruRestForTheNight::
# 1169 "data/maps/Route2_House/scripts.pory"
	lock
# 1170 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0
# 1171 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1172 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1173 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruRestForTheNight_Text_0
# 1174 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1175 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 9
# 1176 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 1177 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1178 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP
	return


Route2_House_Eventscript_MitsuruOnFrame10::
# 1182 "data/maps/Route2_House/scripts.pory"
	lock
# 1183 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1184 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruPostRest
	return


Route2_House_Eventscript_MitsuruPostRest::
# 1188 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1189 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1190 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1191 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruPostRest_Text_0
# 1192 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1193 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 11
# 1194 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1195 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1196 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji::
# 1201 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1202 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1203 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 1204 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1205 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1206 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1207 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1208 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1209 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1210 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1211 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1212 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1213 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1214 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1215 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1216 "data/maps/Route2_House/scripts.pory"
	playse SE_SUCCESS
# 1217 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 1218 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1219 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1220 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1221 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 1222 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1223 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0
# 1228 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 1229 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1230 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1
# 1232 "data/maps/Route2_House/scripts.pory"
	callnative ClearMugshot
# 1233 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2
# 1236 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1237 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1238 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1239 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0
# 1240 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1241 "data/maps/Route2_House/scripts.pory"
	showobjectat 4, MAP_ROUTE2_HOUSE
# 1242 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1243 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1244 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1245 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1246 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1
# 1247 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1248 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3
# 1251 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1252 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1253 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 1254 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1255 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4
# 1258 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1259 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1260 "data/maps/Route2_House/scripts.pory"
	applymovement 4, walkinplaceleft
# 1261 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1262 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2
# 1263 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3
# 1264 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1265 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4
# 1266 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1267 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1268 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1269 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1270 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1271 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 23
# 1272 "data/maps/Route2_House/scripts.pory"
	fwdtime 17, 15
# 1273 "data/maps/Route2_House/scripts.pory"
	special ShowMapNamePopup
# 1274 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruCallingTakeharuForHelp::
# 1279 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1280 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0
# 1282 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1283 "data/maps/Route2_House/scripts.pory"
	playse SE_POKENAV_OFF
# 1284 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 1285 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
# 1286 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceleft
# 1287 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1288 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1
# 1292 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1293 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1294 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2
# 1298 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1299 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 1300 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1301 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1302 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0
# 1303 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1
# 1304 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1305 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1306 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1307 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1308 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1309 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 27
# 1310 "data/maps/Route2_House/scripts.pory"
	fwdtime 10, 55
# 1311 "data/maps/Route2_House/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 1312 "data/maps/Route2_House/scripts.pory"
	release
	end


# 881 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_0:
# 881 "data/maps/Route2_House/scripts.pory"
	walk_up
# 881 "data/maps/Route2_House/scripts.pory"
	walk_up
# 881 "data/maps/Route2_House/scripts.pory"
	walk_up
# 881 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 889 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_1:
# 889 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 889 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
	step_end

# 1114 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2_Movement_0:
# 1114 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1114 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1114 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1170 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0:
# 1170 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1170 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1170 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1170 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1170 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1170 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1170 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1170 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1170 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1170 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1170 "data/maps/Route2_House/scripts.pory"
	face_right
# 1170 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1170 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1170 "data/maps/Route2_House/scripts.pory"
	face_up
# 1170 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1170 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1170 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 1239 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0:
# 1239 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1239 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 1246 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1:
# 1246 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1246 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1246 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1262 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2:
# 1262 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1262 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1263 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3:
# 1263 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1263 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1263 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1263 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1265 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4:
# 1265 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1265 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1265 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1265 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1302 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0:
# 1302 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1302 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1303 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1:
# 1303 "data/maps/Route2_House/scripts.pory"
	walk_in_place_left
# 1303 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1303 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1303 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1303 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 162 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 163 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 192 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 195 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 206 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 213 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 217 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 225 "data/maps/Route2_House/scripts.pory"
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
# 242 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 247 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 253 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 260 "data/maps/Route2_House/scripts.pory"
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
# 277 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 286 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 291 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 299 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 380 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 387 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 400 "data/maps/Route2_House/scripts.pory"
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
# 432 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 442 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon's looking at you judgingly.)\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 454 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 464 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 473 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 478 "data/maps/Route2_House/scripts.pory"
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
# 491 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 494 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 501 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 505 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 518 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 524 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "{COLOR RED}We'll be having 3-vs-3 Pokémon battles\n"
	.string "and items are not allowed so plan your\l"
	.string "party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 552 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 641 "data/maps/Route2_House/scripts.pory"
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
# 654 "data/maps/Route2_House/scripts.pory"
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
# 669 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We can\n"
	.string "simply just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 678 "data/maps/Route2_House/scripts.pory"
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
# 698 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 726 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 730 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}M-my apologies, it slipped my mind that\n"
	.string "this house doesn't have guest rooms.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 738 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 743 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 768 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 772 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 779 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}...$"

Route2_House_Eventscript_StayingTheNight_Text_7:
# 785 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 871 "data/maps/Route2_House/scripts.pory"
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
# 886 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is already sleeping soundly. She\n"
	.string "won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 899 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 904 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 911 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 918 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 950 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_Bathroom_Text_0:
# 965 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 991 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 995 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}(That really freshened me up.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 1004 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 1007 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's do it later.)$"

Route2_House_Eventscript_Bathroom_Text_5:
# 1017 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_6:
# 1020 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's not waste time any further.)$"

Route2_House_Eventscript_Bathroom_Text_7:
# 1035 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_8:
# 1046 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 1068 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-yawn- (Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 1072 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Everyone, please gather around. I'll\n"
	.string "explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 1082 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning2_Text_0:
# 1090 "data/maps/Route2_House/scripts.pory"
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
# 1120 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18\p"
	.string "{COLOR RED}Mitsuru's Prologue {COLOR GREEN}unlocked. Check\n"
	.string "Quest Menu for more details.$"

Route2_House_Eventscript_MitsuruRestForTheNight_Text_0:
# 1173 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not too shabby. This will do.$"

Route2_House_Eventscript_MitsuruPostRest_Text_0:
# 1191 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The sun's up. Time to move out.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0:
# 1223 "data/maps/Route2_House/scripts.pory"
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
# 1230 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(And this one is Aragaki Shinjiro.)\p"
	.string "(He's also adopted on paper and has a\n"
	.string "standard trainer card.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2:
# 1233 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Considering how eagerly the Genesis\n"
	.string "staff were searching for them)\p"
	.string "(I guess they must be ones of their\n"
	.string "“good potential” subjects.)\p"
	.string "(In that case, I must find them before\n"
	.string "the Genesis group does.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3:
# 1248 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Inteleon, you're back. Just about time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I'd love to give you a rest but we really\n"
	.string "have to act right now.\p"
	.string "Although if you're too tired, you can\n"
	.string "return to the Pokéball.$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4:
# 1255 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head, looking\n"
	.string "determined to accompany Mitsuru.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}If that's what you want, alright. Let's\n"
	.string "go then.\p"
	.string "We should start asking around Sunshine\n"
	.string "Town for these two boys.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0:
# 1280 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, Father. That'd be great.\p"
	.string "Yes. I'll talk to you later.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1:
# 1288 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(It's been days and the girl still hasn't\n"
	.string "been found.)\p"
	.string "(There's a great chance that the\n"
	.string "Genesis group has taken her.)\p"
	.string "(I hope Father could help with the\n"
	.string "searching somehow.)\p"
	.string "........$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2:
# 1294 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I've been avoidant about confronting\n"
	.string "the boys.\p"
	.string "I don't know how to face them after\n"
	.string "what I'd done.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}However, we can't afford to lose any\n"
	.string "more time before the group erases their\l"
	.string "tracks again.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Let's go talk to Sanada and Aragaki,\n"
	.string "Vulpix, Inteleon.$"
