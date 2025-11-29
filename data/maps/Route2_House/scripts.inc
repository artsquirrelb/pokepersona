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
	end


# 420 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 421 "data/maps/Route2_House/scripts.pory"
	walk_down
# 422 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 423 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 424 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 424 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 428 "data/maps/Route2_House/scripts.pory"
	lock
# 429 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 430 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 431 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 432 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 433 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 435 "data/maps/Route2_House/scripts.pory"
	closemessage
# 436 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_Inteleon::
# 441 "data/maps/Route2_House/scripts.pory"
	lock
# 442 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 443 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 445 "data/maps/Route2_House/scripts.pory"
	closemessage
# 446 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 447 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToShinjiro::
# 452 "data/maps/Route2_House/scripts.pory"
	lock
# 453 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 454 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 455 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 456 "data/maps/Route2_House/scripts.pory"
	closemessage
# 457 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MustTalkToMitsuru::
# 462 "data/maps/Route2_House/scripts.pory"
	lock
# 463 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 464 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 465 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 466 "data/maps/Route2_House/scripts.pory"
	closemessage
# 467 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 472 "data/maps/Route2_House/scripts.pory"
	lock
# 473 "data/maps/Route2_House/scripts.pory"
	delay 30
# 474 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 476 "data/maps/Route2_House/scripts.pory"
	closemessage
# 477 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 478 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 479 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 489 "data/maps/Route2_House/scripts.pory"
	closemessage
# 490 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 491 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 492 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 493 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 494 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 495 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 499 "data/maps/Route2_House/scripts.pory"
	closemessage
# 500 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 501 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 502 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 503 "data/maps/Route2_House/scripts.pory"
	closemessage
# 504 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 505 "data/maps/Route2_House/scripts.pory"
	waitse
# 506 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 508 "data/maps/Route2_House/scripts.pory"
	closemessage
# 509 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 510 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 511 "data/maps/Route2_House/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 512 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_SHARE
# 513 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_EXP_SHARE
# 514 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 515 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 516 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 517 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 518 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 522 "data/maps/Route2_House/scripts.pory"
	closemessage
# 523 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 524 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 525 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 528 "data/maps/Route2_House/scripts.pory"
	closemessage
# 529 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 530 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 531 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 532 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 533 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 534 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 535 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 536 "data/maps/Route2_House/scripts.pory"
	delay 16
# 537 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 538 "data/maps/Route2_House/scripts.pory"
	delay 4
# 539 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 540 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 541 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 542 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 543 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 544 "data/maps/Route2_House/scripts.pory"
	waitse
# 545 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 546 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 547 "data/maps/Route2_House/scripts.pory"
	waitse
# 548 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 549 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 550 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 551 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 552 "data/maps/Route2_House/scripts.pory"
	delay 30
# 553 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 556 "data/maps/Route2_House/scripts.pory"
	closemessage
# 557 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 558 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 559 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 560 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 561 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 562 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 563 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 564 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 565 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 566 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 567 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 30
# 568 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 569 "data/maps/Route2_House/scripts.pory"
	release
	end


# 573 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 574 "data/maps/Route2_House/scripts.pory"
	walk_right
# 575 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 578 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 579 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 580 "data/maps/Route2_House/scripts.pory"
	walk_up
# 581 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 583 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 584 "data/maps/Route2_House/scripts.pory"
	walk_left
# 584 "data/maps/Route2_House/scripts.pory"
	walk_left
# 585 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 587 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 588 "data/maps/Route2_House/scripts.pory"
	walk_right
# 589 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 591 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 592 "data/maps/Route2_House/scripts.pory"
	walk_down
# 592 "data/maps/Route2_House/scripts.pory"
	walk_down
# 592 "data/maps/Route2_House/scripts.pory"
	walk_down
# 592 "data/maps/Route2_House/scripts.pory"
	walk_down
# 592 "data/maps/Route2_House/scripts.pory"
	walk_down
# 593 "data/maps/Route2_House/scripts.pory"
	walk_right
# 593 "data/maps/Route2_House/scripts.pory"
	walk_right
# 594 "data/maps/Route2_House/scripts.pory"
	walk_down
# 594 "data/maps/Route2_House/scripts.pory"
	walk_down
# 594 "data/maps/Route2_House/scripts.pory"
	walk_down
# 595 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 597 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 598 "data/maps/Route2_House/scripts.pory"
	walk_down
# 598 "data/maps/Route2_House/scripts.pory"
	walk_down
# 598 "data/maps/Route2_House/scripts.pory"
	walk_down
# 599 "data/maps/Route2_House/scripts.pory"
	walk_right
# 599 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 602 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 603 "data/maps/Route2_House/scripts.pory"
	walk_right
# 603 "data/maps/Route2_House/scripts.pory"
	walk_right
# 603 "data/maps/Route2_House/scripts.pory"
	walk_right
# 603 "data/maps/Route2_House/scripts.pory"
	walk_right
# 604 "data/maps/Route2_House/scripts.pory"
	walk_down
# 604 "data/maps/Route2_House/scripts.pory"
	walk_down
# 604 "data/maps/Route2_House/scripts.pory"
	walk_down
# 605 "data/maps/Route2_House/scripts.pory"
	walk_right
# 605 "data/maps/Route2_House/scripts.pory"
	walk_right
# 606 "data/maps/Route2_House/scripts.pory"
	walk_down
# 606 "data/maps/Route2_House/scripts.pory"
	walk_down
# 607 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 610 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 611 "data/maps/Route2_House/scripts.pory"
	walk_down
# 612 "data/maps/Route2_House/scripts.pory"
	walk_right
# 612 "data/maps/Route2_House/scripts.pory"
	walk_right
# 612 "data/maps/Route2_House/scripts.pory"
	walk_right
# 612 "data/maps/Route2_House/scripts.pory"
	walk_right
# 613 "data/maps/Route2_House/scripts.pory"
	walk_down
# 613 "data/maps/Route2_House/scripts.pory"
	walk_down
# 613 "data/maps/Route2_House/scripts.pory"
	walk_down
# 614 "data/maps/Route2_House/scripts.pory"
	walk_right
# 614 "data/maps/Route2_House/scripts.pory"
	walk_right
# 615 "data/maps/Route2_House/scripts.pory"
	walk_down
# 615 "data/maps/Route2_House/scripts.pory"
	walk_down
# 616 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 619 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 620 "data/maps/Route2_House/scripts.pory"
	walk_up
# 620 "data/maps/Route2_House/scripts.pory"
	walk_up
# 620 "data/maps/Route2_House/scripts.pory"
	walk_up
# 621 "data/maps/Route2_House/scripts.pory"
	walk_left
# 621 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 624 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 625 "data/maps/Route2_House/scripts.pory"
	walk_left
# 625 "data/maps/Route2_House/scripts.pory"
	walk_left
# 626 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 630 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 634 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 635 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 636 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 637 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 638 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 639 "data/maps/Route2_House/scripts.pory"
	delay 8
# 640 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 641 "data/maps/Route2_House/scripts.pory"
	delay 60
# 642 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 651 "data/maps/Route2_House/scripts.pory"
	closemessage
# 652 "data/maps/Route2_House/scripts.pory"
	delay 50
# 653 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 654 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 655 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 668 "data/maps/Route2_House/scripts.pory"
	closemessage
# 669 "data/maps/Route2_House/scripts.pory"
	delay 40
# 670 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 672 "data/maps/Route2_House/scripts.pory"
	closemessage
# 673 "data/maps/Route2_House/scripts.pory"
	delay 30
# 674 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 675 "data/maps/Route2_House/scripts.pory"
	delay 10
# 676 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 677 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 678 "data/maps/Route2_House/scripts.pory"
	delay 60
# 679 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 686 "data/maps/Route2_House/scripts.pory"
	closemessage
# 687 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 688 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 689 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 690 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 691 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 692 "data/maps/Route2_House/scripts.pory"
	delay 90
# 693 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 694 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 695 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 696 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 697 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 698 "data/maps/Route2_House/scripts.pory"
	delay 60
# 699 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 702 "data/maps/Route2_House/scripts.pory"
	closemessage
# 703 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 706 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 707 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 709 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 710 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 710 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 710 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 710 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 711 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 711 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 712 "data/maps/Route2_House/scripts.pory"
	walk_up
# 712 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 715 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 716 "data/maps/Route2_House/scripts.pory"
	walk_up
# 716 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 719 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 720 "data/maps/Route2_House/scripts.pory"
	walk_down
# 720 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 724 "data/maps/Route2_House/scripts.pory"
	delay 60
# 725 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 726 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 727 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 728 "data/maps/Route2_House/scripts.pory"
	closemessage
# 729 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 730 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 731 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 735 "data/maps/Route2_House/scripts.pory"
	closemessage
# 736 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 737 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 738 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 739 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 740 "data/maps/Route2_House/scripts.pory"
	closemessage
# 741 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 742 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 743 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 744 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 746 "data/maps/Route2_House/scripts.pory"
	closemessage
# 747 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 748 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 749 "data/maps/Route2_House/scripts.pory"
	delay 10
# 750 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 751 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 752 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 753 "data/maps/Route2_House/scripts.pory"
	lock
# 754 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 755 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 756 "data/maps/Route2_House/scripts.pory"
	release
# 757 "data/maps/Route2_House/scripts.pory"
	delay 30
# 758 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 759 "data/maps/Route2_House/scripts.pory"
	delay 10
# 760 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 761 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 762 "data/maps/Route2_House/scripts.pory"
	lock
# 763 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 764 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 765 "data/maps/Route2_House/scripts.pory"
	release
# 766 "data/maps/Route2_House/scripts.pory"
	delay 30
# 767 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 768 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 769 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 770 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 771 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 772 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 773 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 774 "data/maps/Route2_House/scripts.pory"
	closemessage
# 775 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 776 "data/maps/Route2_House/scripts.pory"
	delay 10
# 777 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 778 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 779 "data/maps/Route2_House/scripts.pory"
	delay 60
# 780 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 781 "data/maps/Route2_House/scripts.pory"
	closemessage
# 782 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 783 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 784 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 785 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 786 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 788 "data/maps/Route2_House/scripts.pory"
	closemessage
# 789 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 790 "data/maps/Route2_House/scripts.pory"
	delay 30
# 791 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 792 "data/maps/Route2_House/scripts.pory"
	delay 80
# 793 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 794 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 797 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 798 "data/maps/Route2_House/scripts.pory"
	face_left
# 799 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 800 "data/maps/Route2_House/scripts.pory"
	delay_16
# 801 "data/maps/Route2_House/scripts.pory"
	delay_16
# 802 "data/maps/Route2_House/scripts.pory"
	delay_16
# 803 "data/maps/Route2_House/scripts.pory"
	delay_16
# 804 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 807 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 808 "data/maps/Route2_House/scripts.pory"
	face_left
# 809 "data/maps/Route2_House/scripts.pory"
	delay_16
# 810 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 811 "data/maps/Route2_House/scripts.pory"
	delay_16
# 812 "data/maps/Route2_House/scripts.pory"
	delay_16
# 813 "data/maps/Route2_House/scripts.pory"
	delay_16
# 814 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 817 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 818 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 819 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 822 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 823 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 824 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 827 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 828 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 831 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 832 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 833 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 834 "data/maps/Route2_House/scripts.pory"
	delay_16
# 835 "data/maps/Route2_House/scripts.pory"
	delay_16
# 836 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 837 "data/maps/Route2_House/scripts.pory"
	emote_x
# 838 "data/maps/Route2_House/scripts.pory"
	delay_16
# 839 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 842 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 843 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 844 "data/maps/Route2_House/scripts.pory"
	emote_x
# 845 "data/maps/Route2_House/scripts.pory"
	delay_16
# 846 "data/maps/Route2_House/scripts.pory"
	delay_16
# 847 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 848 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 849 "data/maps/Route2_House/scripts.pory"
	delay_16
# 850 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 853 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 854 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 856 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 857 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 857 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 857 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 861 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 865 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 866 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 867 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 868 "data/maps/Route2_House/scripts.pory"
	delay 60
# 869 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 870 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 871 "data/maps/Route2_House/scripts.pory"
	delay 40
# 872 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 878 "data/maps/Route2_House/scripts.pory"
	closemessage
# 879 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 880 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 881 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 882 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_0
# 883 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 884 "data/maps/Route2_House/scripts.pory"
	applymovement 7, emoteasleep
# 885 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 886 "data/maps/Route2_House/scripts.pory"
	delay 30
# 887 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 888 "data/maps/Route2_House/scripts.pory"
	closemessage
# 889 "data/maps/Route2_House/scripts.pory"
	delay 20
# 890 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_1
# 891 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 892 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 893 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 894 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 895 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 896 "data/maps/Route2_House/scripts.pory"
	delay 30
# 897 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 898 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 899 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 900 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 901 "data/maps/Route2_House/scripts.pory"
	closemessage
# 902 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 903 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 904 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 905 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 907 "data/maps/Route2_House/scripts.pory"
	closemessage
# 908 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 909 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 910 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 911 "data/maps/Route2_House/scripts.pory"
	delay 30
# 912 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 914 "data/maps/Route2_House/scripts.pory"
	closemessage
# 915 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 916 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 917 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 918 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 919 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 920 "data/maps/Route2_House/scripts.pory"
	closemessage
# 921 "data/maps/Route2_House/scripts.pory"
	delay 20
# 922 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 923 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 924 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 925 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 926 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 927 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 40
# 928 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 929 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 10, 12
	return


# 932 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 933 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 936 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 937 "data/maps/Route2_House/scripts.pory"
	walk_up
# 937 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 940 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 941 "data/maps/Route2_House/scripts.pory"
	walk_down
# 941 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 944 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 945 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 945 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 945 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 945 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 946 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 946 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 950 "data/maps/Route2_House/scripts.pory"
	lock
# 951 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 952 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
# 959 "data/maps/Route2_House/scripts.pory"
	closemessage
	end

TakeARest_2:
# 953 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 954 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 955 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 956 "data/maps/Route2_House/scripts.pory"
	waitse
# 957 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_Bathroom::
# 964 "data/maps/Route2_House/scripts.pory"
	lock
# 965 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 1015 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 1035 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 1046 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 1052 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 966 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 967 "data/maps/Route2_House/scripts.pory"
	closemessage
# 968 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 1003 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1004 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_22
# 1008 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
Route2_House_Eventscript_Bathroom_21:
# 1010 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1011 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1012 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 1016 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1017 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_14
# 1021 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_6
Route2_House_Eventscript_Bathroom_13:
# 1023 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1024 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1025 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1026 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 1027 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_27
Route2_House_Eventscript_Bathroom_25:
# 1031 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_4:
# 1036 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_7
# 1041 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1042 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1043 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1044 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 1047 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_8
# 1048 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1049 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1050 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 969 "data/maps/Route2_House/scripts.pory"
	hidefollowernpc
# 970 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 971 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 972 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 973 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 974 "data/maps/Route2_House/scripts.pory"
	waitse
# 975 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR
# 976 "data/maps/Route2_House/scripts.pory"
	delay 60
# 977 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 978 "data/maps/Route2_House/scripts.pory"
	waitse
# 979 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 980 "data/maps/Route2_House/scripts.pory"
	waitse
# 981 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 982 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 983 "data/maps/Route2_House/scripts.pory"
	delay 30
# 984 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 985 "data/maps/Route2_House/scripts.pory"
	delay 20
# 986 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 987 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 988 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 989 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 990 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_18
# 995 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 40
# 996 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
Route2_House_Eventscript_Bathroom_17:
# 998 "data/maps/Route2_House/scripts.pory"
	closemessage
# 999 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 1000 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_14:
# 1018 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
	goto Route2_House_Eventscript_Bathroom_13

Route2_House_Eventscript_Bathroom_18:
# 991 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 10
# 992 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
	goto Route2_House_Eventscript_Bathroom_17

Route2_House_Eventscript_Bathroom_22:
# 1005 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
	goto Route2_House_Eventscript_Bathroom_21

Route2_House_Eventscript_Bathroom_26:
# 1029 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_25

Route2_House_Eventscript_Bathroom_27:
# 1027 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_House_Eventscript_Bathroom_26
	goto Route2_House_Eventscript_Bathroom_25


Route2_House_Eventscript_AkihikoOnFrame42::
# 1057 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_AkihikoOnFrame43::
# 1061 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2
	return


Route2_House_Eventscript_TheFirstMorning::
# 1064 "data/maps/Route2_House/scripts.pory"
	lock
# 1065 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 43
# 1066 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1067 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 1068 "data/maps/Route2_House/scripts.pory"
	waitse
# 1069 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 1071 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1072 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1073 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1074 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1075 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1076 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 1077 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1078 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 1079 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1080 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1081 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1082 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1083 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1084 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1085 "data/maps/Route2_House/scripts.pory"
	goto EventScript_RegionMap
# 1086 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TheFirstMorning2::
# 1090 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1091 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1103 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1104 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1105 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1106 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1107 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1108 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1109 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1110 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1111 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1112 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1113 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1114 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1115 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_TheFirstMorning2_Movement_0
# 1116 "data/maps/Route2_House/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1117 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1118 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1119 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1120 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1121 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_1
# 1126 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1127 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1128 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 1129 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1130 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1131 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1132 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1133 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 1134 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 1135 "data/maps/Route2_House/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 1136 "data/maps/Route2_House/scripts.pory"
	release
	end


# 1140 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1141 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1141 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1142 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1142 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1143 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1146 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1147 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1147 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1147 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1147 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1148 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1148 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1149 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1151 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1152 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1152 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1153 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1156 "data/maps/Route2_House/scripts.pory"
MitsuruJoinsTheFirstMorning:
# 1157 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1157 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1158 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1160 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1161 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1161 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1161 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1161 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1162 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_MitsuruOnWarp8::
# 1166 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruRestForTheNight::
# 1170 "data/maps/Route2_House/scripts.pory"
	lock
# 1171 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0
# 1172 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1173 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1174 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruRestForTheNight_Text_0
# 1175 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1176 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 9
# 1177 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 1178 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1179 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP
	return


Route2_House_Eventscript_MitsuruOnFrame10::
# 1183 "data/maps/Route2_House/scripts.pory"
	lock
# 1184 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1185 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruPostRest
	return


Route2_House_Eventscript_MitsuruPostRest::
# 1189 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1190 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1191 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1192 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruPostRest_Text_0
# 1193 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1194 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 11
# 1195 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1196 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1197 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji::
# 1202 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1203 "data/maps/Route2_House/scripts.pory"
	call EventScript_TellTheTimeDayHourMinute
# 1204 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 1205 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1206 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1207 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1208 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1209 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1210 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1211 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1212 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1213 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1214 "data/maps/Route2_House/scripts.pory"
	playse SE_DEX_SCROLL
# 1215 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1216 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1217 "data/maps/Route2_House/scripts.pory"
	playse SE_SUCCESS
# 1218 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 1219 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1220 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1221 "data/maps/Route2_House/scripts.pory"
	playse SE_M_SCRATCH
# 1222 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 1223 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1224 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0
# 1229 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 1230 "data/maps/Route2_House/scripts.pory"
	callnative DrawMugshot
# 1231 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_1
# 1233 "data/maps/Route2_House/scripts.pory"
	callnative ClearMugshot
# 1234 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2
# 1237 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1238 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1239 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1240 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0
# 1241 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 1242 "data/maps/Route2_House/scripts.pory"
	showobjectat 4, MAP_ROUTE2_HOUSE
# 1243 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1244 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 1245 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1246 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1247 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1
# 1248 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1249 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3
# 1252 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1253 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1254 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 1255 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1256 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4
# 1259 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1260 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1261 "data/maps/Route2_House/scripts.pory"
	applymovement 4, walkinplaceleft
# 1262 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1263 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2
# 1264 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3
# 1265 "data/maps/Route2_House/scripts.pory"
	delay 8
# 1266 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4
# 1267 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1268 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1269 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1270 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1271 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1272 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 23
# 1273 "data/maps/Route2_House/scripts.pory"
	fwdtime 17, 15
# 1274 "data/maps/Route2_House/scripts.pory"
	special ShowMapNamePopup
# 1275 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Eventscript_MitsuruCallingTakeharuForHelp::
# 1280 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1281 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0
# 1283 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1284 "data/maps/Route2_House/scripts.pory"
	playse SE_POKENAV_OFF
# 1285 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 1286 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
# 1287 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceleft
# 1288 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1289 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1
# 1293 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1294 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1295 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2
# 1299 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1300 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 1301 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1302 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1303 "data/maps/Route2_House/scripts.pory"
	applymovement 5, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0
# 1304 "data/maps/Route2_House/scripts.pory"
	applymovement 4, Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1
# 1305 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1306 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1307 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1308 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1309 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_4
# 1310 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 27
# 1311 "data/maps/Route2_House/scripts.pory"
	fwdtime 10, 55
# 1312 "data/maps/Route2_House/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 1313 "data/maps/Route2_House/scripts.pory"
	release
	end


# 882 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_0:
# 882 "data/maps/Route2_House/scripts.pory"
	walk_up
# 882 "data/maps/Route2_House/scripts.pory"
	walk_up
# 882 "data/maps/Route2_House/scripts.pory"
	walk_up
# 882 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 890 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_1:
# 890 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 890 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
	step_end

# 1115 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2_Movement_0:
# 1115 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1115 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1115 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1171 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0:
# 1171 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1171 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1171 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1171 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1171 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1171 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1171 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1171 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1171 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1171 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1171 "data/maps/Route2_House/scripts.pory"
	face_right
# 1171 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1171 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1171 "data/maps/Route2_House/scripts.pory"
	face_up
# 1171 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1171 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1171 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 1240 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_0:
# 1240 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1240 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 1247 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_1:
# 1247 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1247 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1247 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1263 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_2:
# 1263 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1263 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 1264 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_3:
# 1264 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1264 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1264 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1264 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1266 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Movement_4:
# 1266 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1266 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1266 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1266 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1303 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_0:
# 1303 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1303 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1304 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Movement_1:
# 1304 "data/maps/Route2_House/scripts.pory"
	walk_in_place_left
# 1304 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1304 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1304 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1304 "data/maps/Route2_House/scripts.pory"
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
# 433 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 443 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon's looking at you judgingly.)\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 455 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 465 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 474 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 479 "data/maps/Route2_House/scripts.pory"
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
# 492 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 495 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 502 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 506 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 519 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 525 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "{COLOR RED}We'll be having 3-vs-3 Pokémon battles\n"
	.string "and items are not allowed so plan your\l"
	.string "party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 553 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 642 "data/maps/Route2_House/scripts.pory"
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
# 655 "data/maps/Route2_House/scripts.pory"
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
# 670 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We can\n"
	.string "simply just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 679 "data/maps/Route2_House/scripts.pory"
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
# 699 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 727 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 731 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}M-my apologies, it slipped my mind that\n"
	.string "this house doesn't have guest rooms.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 739 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 744 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 769 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 773 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 780 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}...$"

Route2_House_Eventscript_StayingTheNight_Text_7:
# 786 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 872 "data/maps/Route2_House/scripts.pory"
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
# 887 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is already sleeping soundly. She\n"
	.string "won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 900 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 905 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 912 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 919 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 951 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_Bathroom_Text_0:
# 966 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 992 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 996 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}(That really freshened me up.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 1005 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 1008 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's do it later.)$"

Route2_House_Eventscript_Bathroom_Text_5:
# 1018 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_6:
# 1021 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's not waste time any further.)$"

Route2_House_Eventscript_Bathroom_Text_7:
# 1036 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_8:
# 1047 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 1069 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-yawn- (Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 1073 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Everyone, please gather around. I'll\n"
	.string "explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 1083 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning2_Text_0:
# 1091 "data/maps/Route2_House/scripts.pory"
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
# 1121 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18\p"
	.string "{COLOR RED}Mitsuru's Prologue {COLOR GREEN}unlocked. Check\n"
	.string "Quest Menu for more details.$"

Route2_House_Eventscript_MitsuruRestForTheNight_Text_0:
# 1174 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not too shabby. This will do.$"

Route2_House_Eventscript_MitsuruPostRest_Text_0:
# 1192 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The sun's up. Time to move out.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_0:
# 1224 "data/maps/Route2_House/scripts.pory"
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
# 1231 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(And this one is Aragaki Shinjiro.)\p"
	.string "(He's also adopted on paper and has a\n"
	.string "standard trainer card.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_2:
# 1234 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Considering how eagerly the Genesis\n"
	.string "staff were searching for them)\p"
	.string "(I guess they must be ones of their\n"
	.string "“good potential” subjects.)\p"
	.string "(In that case, I must find them before\n"
	.string "the Genesis group does.)$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_3:
# 1249 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Inteleon, you're back. Just about time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I'd love to give you a rest but we really\n"
	.string "have to act right now.\p"
	.string "Although if you're too tired, you can\n"
	.string "return to the Pokéball.$"

Route2_House_Eventscript_MitsuruResearchingAboutAkiShinji_Text_4:
# 1256 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head, looking\n"
	.string "determined to accompany Mitsuru.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}If that's what you want, alright. Let's\n"
	.string "go then.\p"
	.string "We should start asking around Sunshine\n"
	.string "Town for these two boys.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_0:
# 1281 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, Father. That'd be great.\p"
	.string "Yes. I'll talk to you later.$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_1:
# 1289 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(It's been days and the girl still hasn't\n"
	.string "been found.)\p"
	.string "(There's a great chance that the\n"
	.string "Genesis group has taken her.)\p"
	.string "(I hope Father could help with the\n"
	.string "searching somehow.)\p"
	.string "........$"

Route2_House_Eventscript_MitsuruCallingTakeharuForHelp_Text_2:
# 1295 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I've been avoidant about confronting\n"
	.string "the boys.\p"
	.string "I don't know how to face them after\n"
	.string "what I'd done.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}However, we can't afford to lose any\n"
	.string "more time before the group erases their\l"
	.string "tracks again.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Let's go talk to Sanada and Aragaki,\n"
	.string "Vulpix, Inteleon.$"
