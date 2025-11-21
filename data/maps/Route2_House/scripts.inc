Route2_House_MapScripts::
# 12 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 61 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_ne Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 27
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 24 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 27 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 31 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 34 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 43 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 52 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_28
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 56 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 14 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 17 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 18 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
# 19 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 22 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 25 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 28 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 29 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 1, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 32 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 31 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_lt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 35 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 36 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 37 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 38 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 39 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 40 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 41 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 44 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 45 "data/maps/Route2_House/scripts.pory"
	hideobjectat 1, MAP_ROUTE2_HOUSE
# 46 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 47 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 4, 7
# 49 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 50 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 11, 6
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 53 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 54 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 57 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnWarp27
# 4 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnWarp32
# 5 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnWarp38
# 6 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 39, Route2_House_Eventscript_AkihikoOnWarp39
# 7 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_House_Eventscript_AkihikoOnWarp42
# 9 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, Route2_House_Eventscript_MitsuruOnWarp8
# 10 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 10, Route2_House_Eventscript_MitsuruOnWarp10
	.2byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 62 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnFrame27
# 63 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnFrame32
# 64 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnFrame38
# 65 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 39, Route2_House_Eventscript_AkihikoOnFrame39
# 66 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_House_Eventscript_AkihikoOnFrame42
# 67 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 43, Route2_House_Eventscript_AkihikoOnFrame43
# 69 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, Route2_House_Eventscript_MitsuruOnFrame8
# 70 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 10, Route2_House_Eventscript_MitsuruOnFrame10
	.2byte 0


Route2_House_Eventscript_AkihikoOnWarp27::
# 75 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 79 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 80 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 81 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 85 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnWarp39::
# 88 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
# 89 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnWarp42::
# 92 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_MitsuruOnWarp10::
# 96 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 100 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 104 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_MitsuruOnFrame8::
# 108 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruRestForTheNight
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 112 "data/maps/Route2_House/scripts.pory"
	lock
# 113 "data/maps/Route2_House/scripts.pory"
	delay 20
# 114 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 115 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route2_House/scripts.pory"
	delay 30
# 117 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 118 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 119 "data/maps/Route2_House/scripts.pory"
	closemessage
# 120 "data/maps/Route2_House/scripts.pory"
	delay 30
# 121 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 122 "data/maps/Route2_House/scripts.pory"
	delay 4
# 123 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 124 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route2_House/scripts.pory"
	delay 20
# 126 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 127 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 128 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 130 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 131 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 132 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 133 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 134 "data/maps/Route2_House/scripts.pory"
	delay 4
# 135 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 136 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 137 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 138 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route2_House/scripts.pory"
	delay 30
# 140 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 141 "data/maps/Route2_House/scripts.pory"
	delay 8
# 142 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 143 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route2_House/scripts.pory"
	delay 30
# 145 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 146 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 149 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 150 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 153 "data/maps/Route2_House/scripts.pory"
	closemessage
# 154 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 155 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 159 "data/maps/Route2_House/scripts.pory"
	lock
# 160 "data/maps/Route2_House/scripts.pory"
	delay 30
# 161 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 164 "data/maps/Route2_House/scripts.pory"
	closemessage
# 165 "data/maps/Route2_House/scripts.pory"
	delay 30
# 166 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 167 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 169 "data/maps/Route2_House/scripts.pory"
	closemessage
# 170 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 171 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 175 "data/maps/Route2_House/scripts.pory"
	delay 20
# 176 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 177 "data/maps/Route2_House/scripts.pory"
	delay 8
# 178 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 179 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 180 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 193 "data/maps/Route2_House/scripts.pory"
	closemessage
# 194 "data/maps/Route2_House/scripts.pory"
	delay 20
# 195 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 196 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 199 "data/maps/Route2_House/scripts.pory"
	closemessage
# 200 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 201 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 204 "data/maps/Route2_House/scripts.pory"
	closemessage
# 205 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 206 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 207 "data/maps/Route2_House/scripts.pory"
	delay 8
# 208 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 209 "data/maps/Route2_House/scripts.pory"
	closemessage
# 210 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 211 "data/maps/Route2_House/scripts.pory"
	waitse
# 212 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 213 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 214 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 222 "data/maps/Route2_House/scripts.pory"
	closemessage
# 223 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 224 "data/maps/Route2_House/scripts.pory"
	delay 16
# 225 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 226 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route2_House/scripts.pory"
	delay 60
# 228 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 229 "data/maps/Route2_House/scripts.pory"
	delay 16
# 230 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 231 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 236 "data/maps/Route2_House/scripts.pory"
	closemessage
# 237 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 238 "data/maps/Route2_House/scripts.pory"
	waitse
# 239 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 240 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 242 "data/maps/Route2_House/scripts.pory"
	closemessage
# 243 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 244 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 245 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 248 "data/maps/Route2_House/scripts.pory"
	closemessage
# 249 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 250 "data/maps/Route2_House/scripts.pory"
	delay 8
# 251 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 252 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route2_House/scripts.pory"
	delay 60
# 254 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 255 "data/maps/Route2_House/scripts.pory"
	closemessage
# 256 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 257 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 259 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 260 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 261 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 20
# 263 "data/maps/Route2_House/scripts.pory"
	release
	end


# 267 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 268 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 270 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 271 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 271 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 271 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 271 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 274 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 275 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 276 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 279 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 280 "data/maps/Route2_House/scripts.pory"
	set_visible
# 281 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 284 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 285 "data/maps/Route2_House/scripts.pory"
	face_left
# 286 "data/maps/Route2_House/scripts.pory"
	delay_16
# 287 "data/maps/Route2_House/scripts.pory"
	delay_16
# 288 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 289 "data/maps/Route2_House/scripts.pory"
	delay_16
# 290 "data/maps/Route2_House/scripts.pory"
	face_right
# 291 "data/maps/Route2_House/scripts.pory"
	delay_16
# 292 "data/maps/Route2_House/scripts.pory"
	delay_16
# 293 "data/maps/Route2_House/scripts.pory"
	delay_16
# 294 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 298 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 299 "data/maps/Route2_House/scripts.pory"
	face_right
# 300 "data/maps/Route2_House/scripts.pory"
	delay_16
# 301 "data/maps/Route2_House/scripts.pory"
	delay_16
# 302 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 303 "data/maps/Route2_House/scripts.pory"
	face_up
# 304 "data/maps/Route2_House/scripts.pory"
	delay_16
# 305 "data/maps/Route2_House/scripts.pory"
	delay_16
# 306 "data/maps/Route2_House/scripts.pory"
	face_left
# 307 "data/maps/Route2_House/scripts.pory"
	delay_16
# 308 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 311 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 312 "data/maps/Route2_House/scripts.pory"
	walk_left
# 313 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 316 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 317 "data/maps/Route2_House/scripts.pory"
	walk_right
# 318 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 321 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 322 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 323 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 326 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 327 "data/maps/Route2_House/scripts.pory"
	walk_left
# 328 "data/maps/Route2_House/scripts.pory"
	walk_up
# 329 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 333 "data/maps/Route2_House/scripts.pory"
	lock
# 334 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 335 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 341 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 350 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Mitsuru_2:
# 336 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 339 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 342 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 343 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 345 "data/maps/Route2_House/scripts.pory"
	closemessage
# 346 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 347 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 348 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 355 "data/maps/Route2_House/scripts.pory"
	lock
# 356 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 357 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 369 "data/maps/Route2_House/scripts.pory"
	closemessage
# 370 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 371 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 372 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 373 "data/maps/Route2_House/scripts.pory"
	release
	return


# 376 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 377 "data/maps/Route2_House/scripts.pory"
	walk_down
# 378 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 379 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 380 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 380 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 384 "data/maps/Route2_House/scripts.pory"
	lock
# 385 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 386 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 387 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 388 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 389 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 391 "data/maps/Route2_House/scripts.pory"
	closemessage
# 392 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Inteleon::
# 396 "data/maps/Route2_House/scripts.pory"
	lock
# 397 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 398 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 400 "data/maps/Route2_House/scripts.pory"
	closemessage
# 401 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 402 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToShinjiro::
# 406 "data/maps/Route2_House/scripts.pory"
	lock
# 407 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 408 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 409 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 410 "data/maps/Route2_House/scripts.pory"
	closemessage
# 411 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToMitsuru::
# 415 "data/maps/Route2_House/scripts.pory"
	lock
# 416 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 417 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 418 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 419 "data/maps/Route2_House/scripts.pory"
	closemessage
# 420 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 424 "data/maps/Route2_House/scripts.pory"
	lock
# 425 "data/maps/Route2_House/scripts.pory"
	delay 30
# 426 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 428 "data/maps/Route2_House/scripts.pory"
	closemessage
# 429 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 430 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 431 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 441 "data/maps/Route2_House/scripts.pory"
	closemessage
# 442 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 443 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 444 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 445 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 446 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 447 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 451 "data/maps/Route2_House/scripts.pory"
	closemessage
# 452 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 453 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 454 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 455 "data/maps/Route2_House/scripts.pory"
	closemessage
# 456 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 457 "data/maps/Route2_House/scripts.pory"
	waitse
# 458 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 460 "data/maps/Route2_House/scripts.pory"
	closemessage
# 461 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 462 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 463 "data/maps/Route2_House/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 464 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_SHARE
# 465 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_EXP_SHARE
# 466 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 467 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 468 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 469 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 470 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 474 "data/maps/Route2_House/scripts.pory"
	closemessage
# 475 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 476 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 480 "data/maps/Route2_House/scripts.pory"
	closemessage
# 481 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 482 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 483 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 484 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 485 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 486 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 487 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 488 "data/maps/Route2_House/scripts.pory"
	delay 16
# 489 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 490 "data/maps/Route2_House/scripts.pory"
	delay 4
# 491 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 492 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 493 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 494 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 495 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 496 "data/maps/Route2_House/scripts.pory"
	waitse
# 497 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 498 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 499 "data/maps/Route2_House/scripts.pory"
	waitse
# 500 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 501 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 502 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 503 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 504 "data/maps/Route2_House/scripts.pory"
	delay 30
# 505 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 508 "data/maps/Route2_House/scripts.pory"
	closemessage
# 509 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 510 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 511 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 512 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 513 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 514 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 515 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 516 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 517 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 518 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 519 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 520 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 40
# 522 "data/maps/Route2_House/scripts.pory"
	release
	end


# 526 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 527 "data/maps/Route2_House/scripts.pory"
	walk_right
# 528 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 531 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 532 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 533 "data/maps/Route2_House/scripts.pory"
	walk_up
# 534 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 536 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 537 "data/maps/Route2_House/scripts.pory"
	walk_left
# 537 "data/maps/Route2_House/scripts.pory"
	walk_left
# 538 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 540 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 541 "data/maps/Route2_House/scripts.pory"
	walk_right
# 542 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 544 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 545 "data/maps/Route2_House/scripts.pory"
	walk_down
# 545 "data/maps/Route2_House/scripts.pory"
	walk_down
# 545 "data/maps/Route2_House/scripts.pory"
	walk_down
# 545 "data/maps/Route2_House/scripts.pory"
	walk_down
# 545 "data/maps/Route2_House/scripts.pory"
	walk_down
# 546 "data/maps/Route2_House/scripts.pory"
	walk_right
# 546 "data/maps/Route2_House/scripts.pory"
	walk_right
# 547 "data/maps/Route2_House/scripts.pory"
	walk_down
# 547 "data/maps/Route2_House/scripts.pory"
	walk_down
# 547 "data/maps/Route2_House/scripts.pory"
	walk_down
# 548 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 550 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 551 "data/maps/Route2_House/scripts.pory"
	walk_down
# 551 "data/maps/Route2_House/scripts.pory"
	walk_down
# 551 "data/maps/Route2_House/scripts.pory"
	walk_down
# 552 "data/maps/Route2_House/scripts.pory"
	walk_right
# 552 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 555 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 556 "data/maps/Route2_House/scripts.pory"
	walk_right
# 556 "data/maps/Route2_House/scripts.pory"
	walk_right
# 556 "data/maps/Route2_House/scripts.pory"
	walk_right
# 556 "data/maps/Route2_House/scripts.pory"
	walk_right
# 557 "data/maps/Route2_House/scripts.pory"
	walk_down
# 557 "data/maps/Route2_House/scripts.pory"
	walk_down
# 557 "data/maps/Route2_House/scripts.pory"
	walk_down
# 558 "data/maps/Route2_House/scripts.pory"
	walk_right
# 558 "data/maps/Route2_House/scripts.pory"
	walk_right
# 559 "data/maps/Route2_House/scripts.pory"
	walk_down
# 559 "data/maps/Route2_House/scripts.pory"
	walk_down
# 560 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 563 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 564 "data/maps/Route2_House/scripts.pory"
	walk_down
# 565 "data/maps/Route2_House/scripts.pory"
	walk_right
# 565 "data/maps/Route2_House/scripts.pory"
	walk_right
# 565 "data/maps/Route2_House/scripts.pory"
	walk_right
# 565 "data/maps/Route2_House/scripts.pory"
	walk_right
# 566 "data/maps/Route2_House/scripts.pory"
	walk_down
# 566 "data/maps/Route2_House/scripts.pory"
	walk_down
# 566 "data/maps/Route2_House/scripts.pory"
	walk_down
# 567 "data/maps/Route2_House/scripts.pory"
	walk_right
# 567 "data/maps/Route2_House/scripts.pory"
	walk_right
# 568 "data/maps/Route2_House/scripts.pory"
	walk_down
# 568 "data/maps/Route2_House/scripts.pory"
	walk_down
# 569 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 572 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 573 "data/maps/Route2_House/scripts.pory"
	walk_up
# 573 "data/maps/Route2_House/scripts.pory"
	walk_up
# 573 "data/maps/Route2_House/scripts.pory"
	walk_up
# 574 "data/maps/Route2_House/scripts.pory"
	walk_left
# 574 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 577 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 578 "data/maps/Route2_House/scripts.pory"
	walk_left
# 578 "data/maps/Route2_House/scripts.pory"
	walk_left
# 579 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 583 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 587 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 588 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 589 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 590 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 591 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 592 "data/maps/Route2_House/scripts.pory"
	delay 8
# 593 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 594 "data/maps/Route2_House/scripts.pory"
	delay 60
# 595 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 604 "data/maps/Route2_House/scripts.pory"
	closemessage
# 605 "data/maps/Route2_House/scripts.pory"
	delay 50
# 606 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 607 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 620 "data/maps/Route2_House/scripts.pory"
	closemessage
# 621 "data/maps/Route2_House/scripts.pory"
	delay 40
# 622 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 624 "data/maps/Route2_House/scripts.pory"
	closemessage
# 625 "data/maps/Route2_House/scripts.pory"
	delay 30
# 626 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 627 "data/maps/Route2_House/scripts.pory"
	delay 10
# 628 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 629 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 630 "data/maps/Route2_House/scripts.pory"
	delay 60
# 631 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 638 "data/maps/Route2_House/scripts.pory"
	closemessage
# 639 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 640 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 641 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 642 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 643 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 644 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 645 "data/maps/Route2_House/scripts.pory"
	delay 90
# 646 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 647 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 648 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 649 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_RG_SS_ANNE
# 650 "data/maps/Route2_House/scripts.pory"
	savebgm MUS_RG_SS_ANNE
# 651 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 652 "data/maps/Route2_House/scripts.pory"
	delay 60
# 653 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 656 "data/maps/Route2_House/scripts.pory"
	closemessage
# 657 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 660 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 661 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 663 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 664 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 664 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 664 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 664 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 665 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 665 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 666 "data/maps/Route2_House/scripts.pory"
	walk_up
# 666 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 669 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 670 "data/maps/Route2_House/scripts.pory"
	walk_up
# 670 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 673 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 674 "data/maps/Route2_House/scripts.pory"
	walk_down
# 674 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 678 "data/maps/Route2_House/scripts.pory"
	delay 60
# 679 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 680 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 681 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 682 "data/maps/Route2_House/scripts.pory"
	closemessage
# 683 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 684 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 685 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 689 "data/maps/Route2_House/scripts.pory"
	closemessage
# 690 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 691 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 692 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 693 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 694 "data/maps/Route2_House/scripts.pory"
	closemessage
# 695 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 696 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 697 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 698 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 700 "data/maps/Route2_House/scripts.pory"
	closemessage
# 701 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 702 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 703 "data/maps/Route2_House/scripts.pory"
	delay 10
# 704 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 705 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 706 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 707 "data/maps/Route2_House/scripts.pory"
	lock
# 708 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 709 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 710 "data/maps/Route2_House/scripts.pory"
	release
# 711 "data/maps/Route2_House/scripts.pory"
	delay 30
# 712 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 713 "data/maps/Route2_House/scripts.pory"
	delay 10
# 714 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 715 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 716 "data/maps/Route2_House/scripts.pory"
	lock
# 717 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 718 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 719 "data/maps/Route2_House/scripts.pory"
	release
# 720 "data/maps/Route2_House/scripts.pory"
	delay 30
# 721 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 722 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 723 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 724 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 725 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 726 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 727 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 728 "data/maps/Route2_House/scripts.pory"
	closemessage
# 729 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 730 "data/maps/Route2_House/scripts.pory"
	delay 10
# 731 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 732 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 733 "data/maps/Route2_House/scripts.pory"
	delay 60
# 734 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 735 "data/maps/Route2_House/scripts.pory"
	closemessage
# 736 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 737 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 738 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotemusic
# 739 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 740 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_7
# 742 "data/maps/Route2_House/scripts.pory"
	closemessage
# 743 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 744 "data/maps/Route2_House/scripts.pory"
	delay 30
# 745 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 746 "data/maps/Route2_House/scripts.pory"
	delay 80
# 747 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 748 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 751 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 752 "data/maps/Route2_House/scripts.pory"
	face_left
# 753 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 754 "data/maps/Route2_House/scripts.pory"
	delay_16
# 755 "data/maps/Route2_House/scripts.pory"
	delay_16
# 756 "data/maps/Route2_House/scripts.pory"
	delay_16
# 757 "data/maps/Route2_House/scripts.pory"
	delay_16
# 758 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 761 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 762 "data/maps/Route2_House/scripts.pory"
	face_left
# 763 "data/maps/Route2_House/scripts.pory"
	delay_16
# 764 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 765 "data/maps/Route2_House/scripts.pory"
	delay_16
# 766 "data/maps/Route2_House/scripts.pory"
	delay_16
# 767 "data/maps/Route2_House/scripts.pory"
	delay_16
# 768 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 771 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 772 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 773 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 776 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 777 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 778 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 781 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 782 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 785 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 786 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 787 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 788 "data/maps/Route2_House/scripts.pory"
	delay_16
# 789 "data/maps/Route2_House/scripts.pory"
	delay_16
# 790 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 791 "data/maps/Route2_House/scripts.pory"
	emote_x
# 792 "data/maps/Route2_House/scripts.pory"
	delay_16
# 793 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 796 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 797 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 798 "data/maps/Route2_House/scripts.pory"
	emote_x
# 799 "data/maps/Route2_House/scripts.pory"
	delay_16
# 800 "data/maps/Route2_House/scripts.pory"
	delay_16
# 801 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 802 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 803 "data/maps/Route2_House/scripts.pory"
	delay_16
# 804 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 807 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 808 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 810 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 811 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 811 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 811 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 815 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 819 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 820 "data/maps/Route2_House/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 821 "data/maps/Route2_House/scripts.pory"
	savebgm MUS_OCEANIC_MUSEUM
# 822 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 823 "data/maps/Route2_House/scripts.pory"
	delay 60
# 824 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 825 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 826 "data/maps/Route2_House/scripts.pory"
	delay 40
# 827 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 833 "data/maps/Route2_House/scripts.pory"
	closemessage
# 834 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 835 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 836 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 837 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_0
# 838 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 839 "data/maps/Route2_House/scripts.pory"
	applymovement 7, emoteasleep
# 840 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 841 "data/maps/Route2_House/scripts.pory"
	delay 30
# 842 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 843 "data/maps/Route2_House/scripts.pory"
	closemessage
# 844 "data/maps/Route2_House/scripts.pory"
	delay 20
# 845 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_AkihikoCantSleep_Movement_1
# 846 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 847 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 848 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 849 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 850 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 851 "data/maps/Route2_House/scripts.pory"
	delay 30
# 852 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 853 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 854 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 855 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 856 "data/maps/Route2_House/scripts.pory"
	closemessage
# 857 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 858 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 859 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 860 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 862 "data/maps/Route2_House/scripts.pory"
	closemessage
# 863 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 864 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 865 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 866 "data/maps/Route2_House/scripts.pory"
	delay 30
# 867 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 869 "data/maps/Route2_House/scripts.pory"
	closemessage
# 870 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 871 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 872 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 873 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 874 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 875 "data/maps/Route2_House/scripts.pory"
	closemessage
# 876 "data/maps/Route2_House/scripts.pory"
	delay 20
# 877 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 878 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 879 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 880 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 881 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 882 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 40
# 883 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 884 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 10, 12
	return


# 887 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 888 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 891 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 892 "data/maps/Route2_House/scripts.pory"
	walk_up
# 892 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 895 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 896 "data/maps/Route2_House/scripts.pory"
	walk_down
# 896 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 899 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 900 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 900 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 900 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 900 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 901 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 901 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 905 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 906 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
# 914 "data/maps/Route2_House/scripts.pory"
	closemessage
	end

TakeARest_2:
# 907 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 908 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 909 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 910 "data/maps/Route2_House/scripts.pory"
	waitse
# 911 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_Bathroom::
# 919 "data/maps/Route2_House/scripts.pory"
	lock
# 920 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 970 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 990 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 1001 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 1007 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 921 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 922 "data/maps/Route2_House/scripts.pory"
	closemessage
# 923 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 958 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 959 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_22
# 963 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
Route2_House_Eventscript_Bathroom_21:
# 965 "data/maps/Route2_House/scripts.pory"
	closemessage
# 966 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 967 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 971 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 972 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_14
# 976 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_6
Route2_House_Eventscript_Bathroom_13:
# 978 "data/maps/Route2_House/scripts.pory"
	closemessage
# 979 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 980 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 981 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 982 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_27
Route2_House_Eventscript_Bathroom_25:
# 986 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_4:
# 991 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_7
# 996 "data/maps/Route2_House/scripts.pory"
	closemessage
# 997 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 998 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 999 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 1002 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_8
# 1003 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1004 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 1005 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 924 "data/maps/Route2_House/scripts.pory"
	hidefollowernpc
# 925 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 926 "data/maps/Route2_House/scripts.pory"
	destroyfollowernpc
# 927 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 928 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 929 "data/maps/Route2_House/scripts.pory"
	waitse
# 930 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR
# 931 "data/maps/Route2_House/scripts.pory"
	delay 60
# 932 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 933 "data/maps/Route2_House/scripts.pory"
	waitse
# 934 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 935 "data/maps/Route2_House/scripts.pory"
	waitse
# 936 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 937 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 938 "data/maps/Route2_House/scripts.pory"
	delay 30
# 939 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 940 "data/maps/Route2_House/scripts.pory"
	delay 20
# 941 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 942 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 943 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 944 "data/maps/Route2_House/scripts.pory"
	checkplayergender
# 945 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_House_Eventscript_Bathroom_18
# 950 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 40
# 951 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
Route2_House_Eventscript_Bathroom_17:
# 953 "data/maps/Route2_House/scripts.pory"
	closemessage
# 954 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 955 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_14:
# 973 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
	goto Route2_House_Eventscript_Bathroom_13

Route2_House_Eventscript_Bathroom_18:
# 946 "data/maps/Route2_House/scripts.pory"
	addtime 0, 0, 10
# 947 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
	goto Route2_House_Eventscript_Bathroom_17

Route2_House_Eventscript_Bathroom_22:
# 960 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
	goto Route2_House_Eventscript_Bathroom_21

Route2_House_Eventscript_Bathroom_26:
# 984 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_25

Route2_House_Eventscript_Bathroom_27:
# 982 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_House_Eventscript_Bathroom_26
	goto Route2_House_Eventscript_Bathroom_25


Route2_House_Eventscript_AkihikoOnFrame42::
# 1012 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_AkihikoOnFrame43::
# 1016 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning2
	return


Route2_House_Eventscript_TheFirstMorning::
# 1019 "data/maps/Route2_House/scripts.pory"
	lock
# 1020 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 43
# 1021 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1022 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 1023 "data/maps/Route2_House/scripts.pory"
	waitse
# 1024 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 1026 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1027 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1028 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 1029 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1030 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1031 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 1032 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1033 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 1034 "data/maps/Route2_House/scripts.pory"
	delay 4
# 1035 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 1036 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1037 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1038 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 1039 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1041 "data/maps/Route2_House/scripts.pory"
	goto EventScript_RegionMap
# 1042 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TheFirstMorning2::
# 1046 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1047 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_0
# 1059 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1060 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1061 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1062 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1063 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1064 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1065 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruJoinsTheFirstMorning
# 1066 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1067 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1068 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1069 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1070 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 1071 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_House_Eventscript_TheFirstMorning2_Movement_0
# 1072 "data/maps/Route2_House/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1073 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1074 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1075 "data/maps/Route2_House/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1076 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1077 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning2_Text_1
# 1082 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1083 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1084 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 1085 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1086 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1087 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1088 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1089 "data/maps/Route2_House/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 1090 "data/maps/Route2_House/scripts.pory"
	release
	end


# 1094 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1095 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1095 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1096 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1096 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1097 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1100 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1101 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1101 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1101 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1101 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1102 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1102 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1103 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 1105 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1106 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1106 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1107 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1110 "data/maps/Route2_House/scripts.pory"
MitsuruJoinsTheFirstMorning:
# 1111 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1111 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1112 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 1114 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1115 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1115 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1115 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1115 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1116 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_MitsuruOnWarp8::
# 1120 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


Route2_House_Eventscript_MitsuruRestForTheNight::
# 1124 "data/maps/Route2_House/scripts.pory"
	lock
# 1125 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0
# 1126 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1127 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1128 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruRestForTheNight_Text_0
# 1129 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1130 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 9
# 1131 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 1132 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1133 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP
	end


Route2_House_Eventscript_MitsuruOnFrame10::
# 1138 "data/maps/Route2_House/scripts.pory"
	lock
# 1139 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruOnFrame10_Text_0
# 1140 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1141 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruPostRest
	return


Route2_House_Eventscript_MitsuruPostRest::
# 1145 "data/maps/Route2_House/scripts.pory"
	delay 20
# 1146 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 1147 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 1148 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruPostRest_Text_0
# 1149 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1150 "data/maps/Route2_House/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 11
# 1151 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1152 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1153 "data/maps/Route2_House/scripts.pory"
	release
	end


# 837 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_0:
# 837 "data/maps/Route2_House/scripts.pory"
	walk_up
# 837 "data/maps/Route2_House/scripts.pory"
	walk_up
# 837 "data/maps/Route2_House/scripts.pory"
	walk_up
# 837 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 845 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_AkihikoCantSleep_Movement_1:
# 845 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
# 845 "data/maps/Route2_House/scripts.pory"
	walk_fast_down
	step_end

# 1071 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_TheFirstMorning2_Movement_0:
# 1071 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1071 "data/maps/Route2_House/scripts.pory"
	walk_down
# 1071 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 1125 "data/maps/Route2_House/scripts.pory"
Route2_House_Eventscript_MitsuruRestForTheNight_Movement_0:
# 1125 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1125 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1125 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1125 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1125 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1125 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1125 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1125 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1125 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1125 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1125 "data/maps/Route2_House/scripts.pory"
	face_right
# 1125 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1125 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1125 "data/maps/Route2_House/scripts.pory"
	face_up
# 1125 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1125 "data/maps/Route2_House/scripts.pory"
	delay_16
# 1125 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 117 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 118 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 147 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 150 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies, but this is the best shelter\n"
	.string "I could provide in this situation.\p"
	.string "This is the house of my butler's\n"
	.string "grandson, who's currently traveling the\l"
	.string "region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 161 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 168 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 172 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 180 "data/maps/Route2_House/scripts.pory"
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
# 197 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 202 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 208 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 215 "data/maps/Route2_House/scripts.pory"
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
# 232 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 241 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 246 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 254 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 336 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 343 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 357 "data/maps/Route2_House/scripts.pory"
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
# 389 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 398 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon's looking at you judgingly.)\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 409 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 418 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 426 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 431 "data/maps/Route2_House/scripts.pory"
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
# 444 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 447 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 454 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 458 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 471 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 477 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "{COLOR RED}We'll be having 3-vs-3 Pokémon battles\n"
	.string "and items are not allowed so plan your\l"
	.string "party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 505 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 595 "data/maps/Route2_House/scripts.pory"
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
# 607 "data/maps/Route2_House/scripts.pory"
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
# 622 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We can\n"
	.string "simply just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 631 "data/maps/Route2_House/scripts.pory"
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
# 653 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 681 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 685 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}M-my apologies, it slipped my mind that\n"
	.string "this house doesn't have guest rooms.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 693 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 698 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 723 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 727 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 734 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}...$"

Route2_House_Eventscript_StayingTheNight_Text_7:
# 740 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 827 "data/maps/Route2_House/scripts.pory"
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
# 842 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is already sleeping soundly. She\n"
	.string "won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 855 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 860 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 867 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 874 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 905 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_Bathroom_Text_0:
# 921 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 947 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 951 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}(That really freshened me up.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 960 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 963 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's do it later.)$"

Route2_House_Eventscript_Bathroom_Text_5:
# 973 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_6:
# 976 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's not waste time any further.)$"

Route2_House_Eventscript_Bathroom_Text_7:
# 991 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_8:
# 1002 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 1024 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-yawn- (Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 1028 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Everyone, please gather around. I'll\n"
	.string "explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 1038 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning2_Text_0:
# 1047 "data/maps/Route2_House/scripts.pory"
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
# 1077 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "{COLOR DARK_GRAY}{CLEAR_TO 32}Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18\p"
	.string "{COLOR RED}Mitsuru's Prologue {COLOR GREEN}unlocked. Check\n"
	.string "Quest Menu for more details.$"

Route2_House_Eventscript_MitsuruRestForTheNight_Text_0:
# 1128 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not too shabby. This will do.$"

Route2_House_Eventscript_MitsuruOnFrame10_Text_0:
# 1139 "data/maps/Route2_House/scripts.pory"
	.string "{CLEAR_TO 64}Friday, 6:25 AM$"

Route2_House_Eventscript_MitsuruPostRest_Text_0:
# 1148 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The sun's up. Time to move out.)$"
