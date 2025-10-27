Route2_House_MapScripts::
# 10 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 57 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 27
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 22 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 26 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 29 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 38 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 48 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 52 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 44
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 13 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
# 14 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 17 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 20 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 23 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 24 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 1, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 27 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 26 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_lt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 30 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 31 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 32 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 34 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 35 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 36 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 39 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 40 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 1, 3, 4
# 41 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 43 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 4, 7
# 45 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 46 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 11, 6
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 49 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 8, 8
# 50 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_24

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 53 "data/maps/Route2_House/scripts.pory"
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
# 8 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 43, Route2_House_Eventscript_AkihikoOnWarp43
	.2byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 58 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnFrame27
# 59 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnFrame32
# 60 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnFrame38
# 61 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 39, Route2_House_Eventscript_AkihikoOnFrame39
# 62 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 43, Route2_House_Eventscript_AkihikoOnFrame43
	.2byte 0


Route2_House_Eventscript_AkihikoOnWarp27::
# 67 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 71 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 72 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 73 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 77 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnWarp39::
# 80 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
# 81 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnWarp43::
# 84 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 89 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 93 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 97 "data/maps/Route2_House/scripts.pory"
	lock
# 98 "data/maps/Route2_House/scripts.pory"
	delay 20
# 99 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 100 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route2_House/scripts.pory"
	delay 30
# 102 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 103 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 104 "data/maps/Route2_House/scripts.pory"
	closemessage
# 105 "data/maps/Route2_House/scripts.pory"
	delay 30
# 106 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 107 "data/maps/Route2_House/scripts.pory"
	delay 4
# 108 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 109 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route2_House/scripts.pory"
	delay 20
# 111 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 112 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 113 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 115 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 116 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 117 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 118 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 119 "data/maps/Route2_House/scripts.pory"
	delay 4
# 120 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 121 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 122 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 123 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route2_House/scripts.pory"
	delay 30
# 125 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 126 "data/maps/Route2_House/scripts.pory"
	delay 8
# 127 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 128 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route2_House/scripts.pory"
	delay 30
# 130 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 131 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 134 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 135 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 138 "data/maps/Route2_House/scripts.pory"
	closemessage
# 139 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 140 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 144 "data/maps/Route2_House/scripts.pory"
	lock
# 145 "data/maps/Route2_House/scripts.pory"
	delay 30
# 146 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 149 "data/maps/Route2_House/scripts.pory"
	closemessage
# 150 "data/maps/Route2_House/scripts.pory"
	delay 30
# 151 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 152 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 154 "data/maps/Route2_House/scripts.pory"
	closemessage
# 155 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 156 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 160 "data/maps/Route2_House/scripts.pory"
	delay 20
# 161 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 162 "data/maps/Route2_House/scripts.pory"
	delay 8
# 163 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 164 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 178 "data/maps/Route2_House/scripts.pory"
	closemessage
# 179 "data/maps/Route2_House/scripts.pory"
	delay 20
# 180 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 181 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 182 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 184 "data/maps/Route2_House/scripts.pory"
	closemessage
# 185 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 186 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 189 "data/maps/Route2_House/scripts.pory"
	closemessage
# 190 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 191 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 192 "data/maps/Route2_House/scripts.pory"
	delay 8
# 193 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 194 "data/maps/Route2_House/scripts.pory"
	closemessage
# 195 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 196 "data/maps/Route2_House/scripts.pory"
	waitse
# 197 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 198 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 199 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 207 "data/maps/Route2_House/scripts.pory"
	closemessage
# 208 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 209 "data/maps/Route2_House/scripts.pory"
	delay 16
# 210 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 211 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route2_House/scripts.pory"
	delay 60
# 213 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 214 "data/maps/Route2_House/scripts.pory"
	delay 16
# 215 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 216 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 221 "data/maps/Route2_House/scripts.pory"
	closemessage
# 222 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 223 "data/maps/Route2_House/scripts.pory"
	waitse
# 224 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 225 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 227 "data/maps/Route2_House/scripts.pory"
	closemessage
# 228 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 229 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 230 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 233 "data/maps/Route2_House/scripts.pory"
	closemessage
# 234 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 235 "data/maps/Route2_House/scripts.pory"
	delay 8
# 236 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 237 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route2_House/scripts.pory"
	delay 60
# 239 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 240 "data/maps/Route2_House/scripts.pory"
	closemessage
# 241 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 242 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 244 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 245 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 246 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 20
# 247 "data/maps/Route2_House/scripts.pory"
	pausefakertc
# 248 "data/maps/Route2_House/scripts.pory"
	release
	end


# 252 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 253 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 255 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 256 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 256 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 256 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 256 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 259 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 260 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 261 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 264 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 265 "data/maps/Route2_House/scripts.pory"
	set_visible
# 266 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 269 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 270 "data/maps/Route2_House/scripts.pory"
	face_left
# 271 "data/maps/Route2_House/scripts.pory"
	delay_16
# 272 "data/maps/Route2_House/scripts.pory"
	delay_16
# 273 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 274 "data/maps/Route2_House/scripts.pory"
	delay_16
# 275 "data/maps/Route2_House/scripts.pory"
	face_right
# 276 "data/maps/Route2_House/scripts.pory"
	delay_16
# 277 "data/maps/Route2_House/scripts.pory"
	delay_16
# 278 "data/maps/Route2_House/scripts.pory"
	delay_16
# 279 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 283 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 284 "data/maps/Route2_House/scripts.pory"
	face_right
# 285 "data/maps/Route2_House/scripts.pory"
	delay_16
# 286 "data/maps/Route2_House/scripts.pory"
	delay_16
# 287 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 288 "data/maps/Route2_House/scripts.pory"
	face_up
# 289 "data/maps/Route2_House/scripts.pory"
	delay_16
# 290 "data/maps/Route2_House/scripts.pory"
	delay_16
# 291 "data/maps/Route2_House/scripts.pory"
	face_left
# 292 "data/maps/Route2_House/scripts.pory"
	delay_16
# 293 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 296 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 297 "data/maps/Route2_House/scripts.pory"
	walk_left
# 298 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 301 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 302 "data/maps/Route2_House/scripts.pory"
	walk_right
# 303 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 306 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 307 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 308 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 311 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 312 "data/maps/Route2_House/scripts.pory"
	walk_left
# 313 "data/maps/Route2_House/scripts.pory"
	walk_up
# 314 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 318 "data/maps/Route2_House/scripts.pory"
	lock
# 319 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 320 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 326 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 335 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Mitsuru_2:
# 321 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 324 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 327 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 328 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 330 "data/maps/Route2_House/scripts.pory"
	closemessage
# 331 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 332 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 333 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 340 "data/maps/Route2_House/scripts.pory"
	lock
# 341 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 342 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 354 "data/maps/Route2_House/scripts.pory"
	closemessage
# 355 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 356 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 358 "data/maps/Route2_House/scripts.pory"
	release
	return


# 361 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 362 "data/maps/Route2_House/scripts.pory"
	walk_down
# 363 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 364 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 365 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 365 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 369 "data/maps/Route2_House/scripts.pory"
	lock
# 370 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 371 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 372 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 373 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 376 "data/maps/Route2_House/scripts.pory"
	closemessage
# 377 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Inteleon::
# 381 "data/maps/Route2_House/scripts.pory"
	lock
# 382 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 383 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 385 "data/maps/Route2_House/scripts.pory"
	closemessage
# 386 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 387 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToShinjiro::
# 391 "data/maps/Route2_House/scripts.pory"
	lock
# 392 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 393 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 394 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 395 "data/maps/Route2_House/scripts.pory"
	closemessage
# 396 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToMitsuru::
# 400 "data/maps/Route2_House/scripts.pory"
	lock
# 401 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 402 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 403 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 404 "data/maps/Route2_House/scripts.pory"
	closemessage
# 405 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 409 "data/maps/Route2_House/scripts.pory"
	lock
# 410 "data/maps/Route2_House/scripts.pory"
	delay 30
# 411 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 413 "data/maps/Route2_House/scripts.pory"
	closemessage
# 414 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 415 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 416 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 426 "data/maps/Route2_House/scripts.pory"
	closemessage
# 427 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 428 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 429 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 430 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 431 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 436 "data/maps/Route2_House/scripts.pory"
	closemessage
# 437 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 438 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 439 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 440 "data/maps/Route2_House/scripts.pory"
	closemessage
# 441 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 442 "data/maps/Route2_House/scripts.pory"
	waitse
# 443 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 445 "data/maps/Route2_House/scripts.pory"
	closemessage
# 446 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 447 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 448 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_ALL
# 449 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 450 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 451 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 452 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 453 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 454 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 457 "data/maps/Route2_House/scripts.pory"
	closemessage
# 458 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 459 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 463 "data/maps/Route2_House/scripts.pory"
	closemessage
# 464 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 465 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 466 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 467 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 468 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 469 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 470 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 471 "data/maps/Route2_House/scripts.pory"
	delay 16
# 472 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 473 "data/maps/Route2_House/scripts.pory"
	delay 4
# 474 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 475 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 476 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 477 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 478 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 479 "data/maps/Route2_House/scripts.pory"
	waitse
# 480 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 481 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 482 "data/maps/Route2_House/scripts.pory"
	waitse
# 483 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 484 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 485 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 486 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 487 "data/maps/Route2_House/scripts.pory"
	delay 30
# 488 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 491 "data/maps/Route2_House/scripts.pory"
	closemessage
# 492 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 493 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 494 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 495 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 496 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 497 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 498 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 499 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 500 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 501 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 502 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 503 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 40
# 504 "data/maps/Route2_House/scripts.pory"
	release
	end


# 508 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 509 "data/maps/Route2_House/scripts.pory"
	walk_right
# 510 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 513 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 514 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 515 "data/maps/Route2_House/scripts.pory"
	walk_up
# 516 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 518 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 519 "data/maps/Route2_House/scripts.pory"
	walk_left
# 519 "data/maps/Route2_House/scripts.pory"
	walk_left
# 520 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 522 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 523 "data/maps/Route2_House/scripts.pory"
	walk_right
# 524 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 526 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 527 "data/maps/Route2_House/scripts.pory"
	walk_down
# 527 "data/maps/Route2_House/scripts.pory"
	walk_down
# 527 "data/maps/Route2_House/scripts.pory"
	walk_down
# 527 "data/maps/Route2_House/scripts.pory"
	walk_down
# 527 "data/maps/Route2_House/scripts.pory"
	walk_down
# 528 "data/maps/Route2_House/scripts.pory"
	walk_right
# 528 "data/maps/Route2_House/scripts.pory"
	walk_right
# 529 "data/maps/Route2_House/scripts.pory"
	walk_down
# 529 "data/maps/Route2_House/scripts.pory"
	walk_down
# 529 "data/maps/Route2_House/scripts.pory"
	walk_down
# 530 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 532 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 533 "data/maps/Route2_House/scripts.pory"
	walk_down
# 533 "data/maps/Route2_House/scripts.pory"
	walk_down
# 533 "data/maps/Route2_House/scripts.pory"
	walk_down
# 534 "data/maps/Route2_House/scripts.pory"
	walk_right
# 534 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 537 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 538 "data/maps/Route2_House/scripts.pory"
	walk_right
# 538 "data/maps/Route2_House/scripts.pory"
	walk_right
# 538 "data/maps/Route2_House/scripts.pory"
	walk_right
# 538 "data/maps/Route2_House/scripts.pory"
	walk_right
# 539 "data/maps/Route2_House/scripts.pory"
	walk_down
# 539 "data/maps/Route2_House/scripts.pory"
	walk_down
# 539 "data/maps/Route2_House/scripts.pory"
	walk_down
# 540 "data/maps/Route2_House/scripts.pory"
	walk_right
# 540 "data/maps/Route2_House/scripts.pory"
	walk_right
# 541 "data/maps/Route2_House/scripts.pory"
	walk_down
# 541 "data/maps/Route2_House/scripts.pory"
	walk_down
# 542 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 545 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 546 "data/maps/Route2_House/scripts.pory"
	walk_down
# 547 "data/maps/Route2_House/scripts.pory"
	walk_right
# 547 "data/maps/Route2_House/scripts.pory"
	walk_right
# 547 "data/maps/Route2_House/scripts.pory"
	walk_right
# 547 "data/maps/Route2_House/scripts.pory"
	walk_right
# 548 "data/maps/Route2_House/scripts.pory"
	walk_down
# 548 "data/maps/Route2_House/scripts.pory"
	walk_down
# 548 "data/maps/Route2_House/scripts.pory"
	walk_down
# 549 "data/maps/Route2_House/scripts.pory"
	walk_right
# 549 "data/maps/Route2_House/scripts.pory"
	walk_right
# 550 "data/maps/Route2_House/scripts.pory"
	walk_down
# 550 "data/maps/Route2_House/scripts.pory"
	walk_down
# 551 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 554 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 555 "data/maps/Route2_House/scripts.pory"
	walk_up
# 555 "data/maps/Route2_House/scripts.pory"
	walk_up
# 555 "data/maps/Route2_House/scripts.pory"
	walk_up
# 556 "data/maps/Route2_House/scripts.pory"
	walk_left
# 556 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 559 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 560 "data/maps/Route2_House/scripts.pory"
	walk_left
# 560 "data/maps/Route2_House/scripts.pory"
	walk_left
# 561 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 565 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 569 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 570 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 571 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 572 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 573 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 574 "data/maps/Route2_House/scripts.pory"
	delay 8
# 575 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 576 "data/maps/Route2_House/scripts.pory"
	delay 60
# 577 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 586 "data/maps/Route2_House/scripts.pory"
	closemessage
# 587 "data/maps/Route2_House/scripts.pory"
	delay 50
# 588 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 589 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 602 "data/maps/Route2_House/scripts.pory"
	closemessage
# 603 "data/maps/Route2_House/scripts.pory"
	delay 40
# 604 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 606 "data/maps/Route2_House/scripts.pory"
	closemessage
# 607 "data/maps/Route2_House/scripts.pory"
	delay 30
# 608 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 609 "data/maps/Route2_House/scripts.pory"
	delay 10
# 610 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 611 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 612 "data/maps/Route2_House/scripts.pory"
	delay 60
# 613 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 620 "data/maps/Route2_House/scripts.pory"
	closemessage
# 621 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
# 622 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 623 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 624 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 625 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 626 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 627 "data/maps/Route2_House/scripts.pory"
	delay 90
# 628 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 629 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 630 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 631 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_RG_SS_ANNE, TRUE
# 632 "data/maps/Route2_House/scripts.pory"
	delay 60
# 633 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 636 "data/maps/Route2_House/scripts.pory"
	closemessage
# 637 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 640 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 641 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 643 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 644 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 644 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 644 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 644 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 645 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 645 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 646 "data/maps/Route2_House/scripts.pory"
	walk_up
# 646 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 649 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 650 "data/maps/Route2_House/scripts.pory"
	walk_up
# 650 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 653 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 654 "data/maps/Route2_House/scripts.pory"
	walk_down
# 654 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 658 "data/maps/Route2_House/scripts.pory"
	delay 60
# 659 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 660 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 661 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 662 "data/maps/Route2_House/scripts.pory"
	closemessage
# 663 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 664 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 669 "data/maps/Route2_House/scripts.pory"
	closemessage
# 670 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 671 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 672 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 673 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 674 "data/maps/Route2_House/scripts.pory"
	closemessage
# 675 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 676 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 677 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 678 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 680 "data/maps/Route2_House/scripts.pory"
	closemessage
# 681 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 682 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 683 "data/maps/Route2_House/scripts.pory"
	delay 10
# 684 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 685 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 686 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 687 "data/maps/Route2_House/scripts.pory"
	lock
# 688 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 689 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 690 "data/maps/Route2_House/scripts.pory"
	release
# 691 "data/maps/Route2_House/scripts.pory"
	delay 30
# 692 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 693 "data/maps/Route2_House/scripts.pory"
	delay 10
# 694 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 695 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 696 "data/maps/Route2_House/scripts.pory"
	lock
# 697 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 698 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 699 "data/maps/Route2_House/scripts.pory"
	release
# 700 "data/maps/Route2_House/scripts.pory"
	delay 30
# 701 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 702 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 703 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 704 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 705 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 706 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 707 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 708 "data/maps/Route2_House/scripts.pory"
	closemessage
# 709 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 710 "data/maps/Route2_House/scripts.pory"
	delay 10
# 711 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 712 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 713 "data/maps/Route2_House/scripts.pory"
	delay 60
# 714 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 717 "data/maps/Route2_House/scripts.pory"
	closemessage
# 718 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 719 "data/maps/Route2_House/scripts.pory"
	delay 30
# 720 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 721 "data/maps/Route2_House/scripts.pory"
	delay 80
# 722 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 723 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 726 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 727 "data/maps/Route2_House/scripts.pory"
	face_left
# 728 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 729 "data/maps/Route2_House/scripts.pory"
	delay_16
# 730 "data/maps/Route2_House/scripts.pory"
	delay_16
# 731 "data/maps/Route2_House/scripts.pory"
	delay_16
# 732 "data/maps/Route2_House/scripts.pory"
	delay_16
# 733 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 736 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 737 "data/maps/Route2_House/scripts.pory"
	face_left
# 738 "data/maps/Route2_House/scripts.pory"
	delay_16
# 739 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 740 "data/maps/Route2_House/scripts.pory"
	delay_16
# 741 "data/maps/Route2_House/scripts.pory"
	delay_16
# 742 "data/maps/Route2_House/scripts.pory"
	delay_16
# 743 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 746 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 747 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 748 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 751 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 752 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 753 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 756 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 757 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 760 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 761 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 762 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 763 "data/maps/Route2_House/scripts.pory"
	delay_16
# 764 "data/maps/Route2_House/scripts.pory"
	delay_16
# 765 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 766 "data/maps/Route2_House/scripts.pory"
	emote_x
# 767 "data/maps/Route2_House/scripts.pory"
	delay_16
# 768 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 771 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 772 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 773 "data/maps/Route2_House/scripts.pory"
	emote_x
# 774 "data/maps/Route2_House/scripts.pory"
	delay_16
# 775 "data/maps/Route2_House/scripts.pory"
	delay_16
# 776 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 777 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 778 "data/maps/Route2_House/scripts.pory"
	delay_16
# 779 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 782 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 783 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 785 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 786 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 786 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 786 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 790 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 794 "data/maps/Route2_House/scripts.pory"
	delay 60
# 795 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 796 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 797 "data/maps/Route2_House/scripts.pory"
	delay 40
# 798 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 804 "data/maps/Route2_House/scripts.pory"
	closemessage
# 805 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 806 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 807 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 808 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesUp2
# 809 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 810 "data/maps/Route2_House/scripts.pory"
	delay 30
# 811 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 812 "data/maps/Route2_House/scripts.pory"
	closemessage
# 813 "data/maps/Route2_House/scripts.pory"
	delay 20
# 814 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 815 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 816 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 817 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 818 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 819 "data/maps/Route2_House/scripts.pory"
	delay 30
# 820 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 821 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 822 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 823 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 824 "data/maps/Route2_House/scripts.pory"
	closemessage
# 825 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 826 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 827 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 828 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 830 "data/maps/Route2_House/scripts.pory"
	closemessage
# 831 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 832 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 833 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 834 "data/maps/Route2_House/scripts.pory"
	delay 30
# 835 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 837 "data/maps/Route2_House/scripts.pory"
	closemessage
# 838 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 839 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 840 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 841 "data/maps/Route2_House/scripts.pory"
	closemessage
# 842 "data/maps/Route2_House/scripts.pory"
	delay 20
# 843 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 844 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 845 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 846 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 847 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 848 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 40
# 849 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 850 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 8, 12
	return


# 853 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 854 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 857 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 858 "data/maps/Route2_House/scripts.pory"
	walk_up
# 858 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 861 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 862 "data/maps/Route2_House/scripts.pory"
	walk_down
# 862 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 865 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 866 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 866 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 866 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 866 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 867 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 867 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 871 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 872 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
# 880 "data/maps/Route2_House/scripts.pory"
	closemessage
	end

TakeARest_2:
# 873 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 874 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 875 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 876 "data/maps/Route2_House/scripts.pory"
	waitse
# 877 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_AkihikoOnWarp42::
# 885 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoGoesToSleep
	return


Route2_House_Eventscript_AkihikoGoesToSleep::
# 889 "data/maps/Route2_House/scripts.pory"
	lock
# 890 "data/maps/Route2_House/scripts.pory"
	delay 30
# 891 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 892 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 893 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 894 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoGoesToSleep_Text_0
# 895 "data/maps/Route2_House/scripts.pory"
	closemessage
# 896 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 897 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Bathroom::
# 901 "data/maps/Route2_House/scripts.pory"
	lock
# 902 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 935 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 945 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 956 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 962 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 903 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 904 "data/maps/Route2_House/scripts.pory"
	closemessage
# 905 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 929 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
# 930 "data/maps/Route2_House/scripts.pory"
	closemessage
# 931 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 932 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 936 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
# 937 "data/maps/Route2_House/scripts.pory"
	closemessage
# 938 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 939 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 940 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_House_Eventscript_Bathroom_13
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_4:
# 946 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
# 951 "data/maps/Route2_House/scripts.pory"
	closemessage
# 952 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 953 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 954 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 957 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
# 958 "data/maps/Route2_House/scripts.pory"
	closemessage
# 959 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 960 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 906 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 907 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 908 "data/maps/Route2_House/scripts.pory"
	waitse
# 909 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR
# 910 "data/maps/Route2_House/scripts.pory"
	delay 60
# 911 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 912 "data/maps/Route2_House/scripts.pory"
	waitse
# 913 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 914 "data/maps/Route2_House/scripts.pory"
	waitse
# 915 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 916 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 917 "data/maps/Route2_House/scripts.pory"
	delay 30
# 918 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 919 "data/maps/Route2_House/scripts.pory"
	delay 20
# 920 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 921 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 922 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 923 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
# 924 "data/maps/Route2_House/scripts.pory"
	closemessage
# 925 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 926 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_13:
# 942 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_1


Route2_House_Eventscript_AkihikoOnFrame43::
# 967 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_TheFirstMorning::
# 971 "data/maps/Route2_House/scripts.pory"
	lock
# 972 "data/maps/Route2_House/scripts.pory"
	delay 30
# 973 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 974 "data/maps/Route2_House/scripts.pory"
	waitse
# 975 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 977 "data/maps/Route2_House/scripts.pory"
	closemessage
# 978 "data/maps/Route2_House/scripts.pory"
	delay 30
# 979 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 980 "data/maps/Route2_House/scripts.pory"
	closemessage
# 981 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 982 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 983 "data/maps/Route2_House/scripts.pory"
	delay 60
# 984 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 985 "data/maps/Route2_House/scripts.pory"
	delay 4
# 986 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 987 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 988 "data/maps/Route2_House/scripts.pory"
	delay 30
# 989 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 990 "data/maps/Route2_House/scripts.pory"
	closemessage
# 992 "data/maps/Route2_House/scripts.pory"
	delay 30
# 993 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_3
# 1005 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1006 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1007 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1008 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1009 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1010 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1011 "data/maps/Route2_House/scripts.pory"
	applymovement 1, CameraGoesDown2
# 1012 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1013 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1014 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1015 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1016 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1017 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1018 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1019 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1020 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1021 "data/maps/Route2_House/scripts.pory"
	playfanfare SE_M_SAND_ATTACK
# 1022 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1023 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_4
# 1027 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1028 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 44
# 1029 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1030 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1031 "data/maps/Route2_House/scripts.pory"
	release
	end


# 1035 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1036 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1036 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1037 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1037 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1038 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1041 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1042 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1042 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1042 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1042 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1043 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1043 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 1045 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1046 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1046 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1047 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1050 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1051 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1051 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1051 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1051 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 102 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 103 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 132 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 135 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies for this is the best shelter I\n"
	.string "could provide in this situation.\p"
	.string "This house is of my butler's grandson,\n"
	.string "who's currently traveling the region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 146 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 153 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 157 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 165 "data/maps/Route2_House/scripts.pory"
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
# 182 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 187 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 193 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 200 "data/maps/Route2_House/scripts.pory"
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
# 217 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 226 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 231 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 239 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 321 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 328 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 342 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}What's wrong, Shinji?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}I don't trust her.\p"
	.string "She's hiding lots of information and we\n"
	.string "don't even know if it's true that she's\l"
	.string "not on those men's side.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}But she's also the only lead we have\n"
	.string "right now. We didn't even know where to\l"
	.string "start looking for Miki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Beside, she said it'd be a great\n"
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
# 374 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 383 "data/maps/Route2_House/scripts.pory"
	.string "Inteleon's looking at you judgingly.\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 394 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 403 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 411 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 416 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Hm... Shinjiro Aragaki-kun, correct?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}... You sure have done your research\n"
	.string "thoroughly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I'll take that as a compliment.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}That wasn't.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Heh...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I have yet to know if you're able to\n"
	.string "hold your ground when situation calls.\p"
	.string "If I'm not mistaken, you don't have a\n"
	.string "Pokémon of your own yet.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}I can just catch one.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright. Then how about this.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Before the sun sets, if you can beat me\n"
	.string "in a Pokémon battle, you can come with\l"
	.string "us.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2:
# 429 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 432 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 439 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 443 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 454 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 460 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "We'll be having 3-vs-3 Pokémon battles\n"
	.string "so plan your party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 488 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 577 "data/maps/Route2_House/scripts.pory"
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
# 589 "data/maps/Route2_House/scripts.pory"
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
	.string "Lots of progress are made and there are\n"
	.string "already a few prototypes.\p"
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
# 604 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We simply\n"
	.string "can just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 613 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Look, Princess. It's not like we don't\n"
	.string "want to believe you.\p"
	.string "It all just sounds too much like a\n"
	.string "fiction, okay.\p"
	.string "At least show us some proofs?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Right, didn't you say you know where to\n"
	.string "find them?\p"
	.string "How about you leading us to them and\n"
	.string "we'll see if what you said were real.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}.....\p"
	.string "Very well. I suppose that's a logical\n"
	.string "idea.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4:
# 633 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 661 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 665 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}M-my apology, it slipped my mind that\n"
	.string "this house didn't have guest rooms.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 673 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 678 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 703 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 707 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 714 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 798 "data/maps/Route2_House/scripts.pory"
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
# 811 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is already sleeping soundly. She\n"
	.string "won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 823 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 828 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 835 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 840 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 871 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_AkihikoGoesToSleep_Text_0:
# 894 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}-yawn- (I'm so tired. Time to sleep.)$"

Route2_House_Eventscript_Bathroom_Text_0:
# 903 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 923 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 929 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 936 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 946 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_5:
# 957 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 975 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}-yawn- (Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 979 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Everyone, please gather around. I'll\n"
	.string "explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 989 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning_Text_3:
# 993 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I believe our destination is around the\n"
	.string "base of Goldenwings Mountain.\p"
	.string "To get there we can take a ship from\n"
	.string "Coralport, west of here\p"
	.string "and then go through Route 4 from\n"
	.string "Windward Town.\p"
	.string "Any questions?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Nope, the path is simple enough.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}C'est magnifique.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Oh, before I forget.\p"
	.string "We should make a stop at my personal\n"
	.string "researcher's lab in Windward Town.\l"
	.string "There's a package for us that I've\l"
	.string "ordered.\p"
	.string "It'll be a great help for our journey.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}More gadgets?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And Pokémons.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Alright! Let's head out then!$"

Route2_House_Eventscript_TheFirstMorning_Text_4:
# 1023 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"
