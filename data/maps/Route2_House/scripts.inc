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
	setcaughtmon SPECIES_PAWMI
# 453 "data/maps/Route2_House/scripts.pory"
	setcaughtmon SPECIES_PAWMI_DELTA
# 454 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 455 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 459 "data/maps/Route2_House/scripts.pory"
	closemessage
# 460 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 461 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 465 "data/maps/Route2_House/scripts.pory"
	closemessage
# 466 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 467 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 468 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 469 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 470 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 471 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 472 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 473 "data/maps/Route2_House/scripts.pory"
	delay 16
# 474 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 475 "data/maps/Route2_House/scripts.pory"
	delay 4
# 476 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 477 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 478 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 479 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 480 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 481 "data/maps/Route2_House/scripts.pory"
	waitse
# 482 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 483 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 484 "data/maps/Route2_House/scripts.pory"
	waitse
# 485 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 486 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 487 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 488 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 489 "data/maps/Route2_House/scripts.pory"
	delay 30
# 490 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 493 "data/maps/Route2_House/scripts.pory"
	closemessage
# 494 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 495 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 496 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 497 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 498 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 499 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 500 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 501 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 502 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 503 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 504 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 505 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 40
# 506 "data/maps/Route2_House/scripts.pory"
	release
	end


# 510 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 511 "data/maps/Route2_House/scripts.pory"
	walk_right
# 512 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 515 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 516 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 517 "data/maps/Route2_House/scripts.pory"
	walk_up
# 518 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 520 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 521 "data/maps/Route2_House/scripts.pory"
	walk_left
# 521 "data/maps/Route2_House/scripts.pory"
	walk_left
# 522 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 524 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 525 "data/maps/Route2_House/scripts.pory"
	walk_right
# 526 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 528 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 529 "data/maps/Route2_House/scripts.pory"
	walk_down
# 529 "data/maps/Route2_House/scripts.pory"
	walk_down
# 529 "data/maps/Route2_House/scripts.pory"
	walk_down
# 529 "data/maps/Route2_House/scripts.pory"
	walk_down
# 529 "data/maps/Route2_House/scripts.pory"
	walk_down
# 530 "data/maps/Route2_House/scripts.pory"
	walk_right
# 530 "data/maps/Route2_House/scripts.pory"
	walk_right
# 531 "data/maps/Route2_House/scripts.pory"
	walk_down
# 531 "data/maps/Route2_House/scripts.pory"
	walk_down
# 531 "data/maps/Route2_House/scripts.pory"
	walk_down
# 532 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 534 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 535 "data/maps/Route2_House/scripts.pory"
	walk_down
# 535 "data/maps/Route2_House/scripts.pory"
	walk_down
# 535 "data/maps/Route2_House/scripts.pory"
	walk_down
# 536 "data/maps/Route2_House/scripts.pory"
	walk_right
# 536 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 539 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 540 "data/maps/Route2_House/scripts.pory"
	walk_right
# 540 "data/maps/Route2_House/scripts.pory"
	walk_right
# 540 "data/maps/Route2_House/scripts.pory"
	walk_right
# 540 "data/maps/Route2_House/scripts.pory"
	walk_right
# 541 "data/maps/Route2_House/scripts.pory"
	walk_down
# 541 "data/maps/Route2_House/scripts.pory"
	walk_down
# 541 "data/maps/Route2_House/scripts.pory"
	walk_down
# 542 "data/maps/Route2_House/scripts.pory"
	walk_right
# 542 "data/maps/Route2_House/scripts.pory"
	walk_right
# 543 "data/maps/Route2_House/scripts.pory"
	walk_down
# 543 "data/maps/Route2_House/scripts.pory"
	walk_down
# 544 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 547 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 548 "data/maps/Route2_House/scripts.pory"
	walk_down
# 549 "data/maps/Route2_House/scripts.pory"
	walk_right
# 549 "data/maps/Route2_House/scripts.pory"
	walk_right
# 549 "data/maps/Route2_House/scripts.pory"
	walk_right
# 549 "data/maps/Route2_House/scripts.pory"
	walk_right
# 550 "data/maps/Route2_House/scripts.pory"
	walk_down
# 550 "data/maps/Route2_House/scripts.pory"
	walk_down
# 550 "data/maps/Route2_House/scripts.pory"
	walk_down
# 551 "data/maps/Route2_House/scripts.pory"
	walk_right
# 551 "data/maps/Route2_House/scripts.pory"
	walk_right
# 552 "data/maps/Route2_House/scripts.pory"
	walk_down
# 552 "data/maps/Route2_House/scripts.pory"
	walk_down
# 553 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 556 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 557 "data/maps/Route2_House/scripts.pory"
	walk_up
# 557 "data/maps/Route2_House/scripts.pory"
	walk_up
# 557 "data/maps/Route2_House/scripts.pory"
	walk_up
# 558 "data/maps/Route2_House/scripts.pory"
	walk_left
# 558 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 561 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 562 "data/maps/Route2_House/scripts.pory"
	walk_left
# 562 "data/maps/Route2_House/scripts.pory"
	walk_left
# 563 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 567 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 571 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 572 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 573 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 574 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 575 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 576 "data/maps/Route2_House/scripts.pory"
	delay 8
# 577 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 578 "data/maps/Route2_House/scripts.pory"
	delay 60
# 579 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 588 "data/maps/Route2_House/scripts.pory"
	closemessage
# 589 "data/maps/Route2_House/scripts.pory"
	delay 50
# 590 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 591 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 604 "data/maps/Route2_House/scripts.pory"
	closemessage
# 605 "data/maps/Route2_House/scripts.pory"
	delay 40
# 606 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 608 "data/maps/Route2_House/scripts.pory"
	closemessage
# 609 "data/maps/Route2_House/scripts.pory"
	delay 30
# 610 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 611 "data/maps/Route2_House/scripts.pory"
	delay 10
# 612 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 613 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 614 "data/maps/Route2_House/scripts.pory"
	delay 60
# 615 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 622 "data/maps/Route2_House/scripts.pory"
	closemessage
# 623 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
# 624 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 625 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 626 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 627 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 628 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 629 "data/maps/Route2_House/scripts.pory"
	delay 90
# 630 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 631 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 632 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 633 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_RG_SS_ANNE, TRUE
# 634 "data/maps/Route2_House/scripts.pory"
	delay 60
# 635 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 638 "data/maps/Route2_House/scripts.pory"
	closemessage
# 639 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 642 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 643 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 645 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 646 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 646 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 646 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 646 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 647 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 647 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 648 "data/maps/Route2_House/scripts.pory"
	walk_up
# 648 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 651 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 652 "data/maps/Route2_House/scripts.pory"
	walk_up
# 652 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 655 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 656 "data/maps/Route2_House/scripts.pory"
	walk_down
# 656 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 660 "data/maps/Route2_House/scripts.pory"
	delay 60
# 661 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 662 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 663 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 664 "data/maps/Route2_House/scripts.pory"
	closemessage
# 665 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 666 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 667 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 671 "data/maps/Route2_House/scripts.pory"
	closemessage
# 672 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 673 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 674 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 675 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 676 "data/maps/Route2_House/scripts.pory"
	closemessage
# 677 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 678 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 679 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 680 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 682 "data/maps/Route2_House/scripts.pory"
	closemessage
# 683 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 684 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 685 "data/maps/Route2_House/scripts.pory"
	delay 10
# 686 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 687 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 688 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 689 "data/maps/Route2_House/scripts.pory"
	lock
# 690 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 691 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 692 "data/maps/Route2_House/scripts.pory"
	release
# 693 "data/maps/Route2_House/scripts.pory"
	delay 30
# 694 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 695 "data/maps/Route2_House/scripts.pory"
	delay 10
# 696 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 697 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 698 "data/maps/Route2_House/scripts.pory"
	lock
# 699 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 700 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 701 "data/maps/Route2_House/scripts.pory"
	release
# 702 "data/maps/Route2_House/scripts.pory"
	delay 30
# 703 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 704 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 705 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 706 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 707 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 708 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 709 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 710 "data/maps/Route2_House/scripts.pory"
	closemessage
# 711 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 712 "data/maps/Route2_House/scripts.pory"
	delay 10
# 713 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 714 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 715 "data/maps/Route2_House/scripts.pory"
	delay 60
# 716 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 719 "data/maps/Route2_House/scripts.pory"
	closemessage
# 720 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 721 "data/maps/Route2_House/scripts.pory"
	delay 30
# 722 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 723 "data/maps/Route2_House/scripts.pory"
	delay 80
# 724 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 725 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 728 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 729 "data/maps/Route2_House/scripts.pory"
	face_left
# 730 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 731 "data/maps/Route2_House/scripts.pory"
	delay_16
# 732 "data/maps/Route2_House/scripts.pory"
	delay_16
# 733 "data/maps/Route2_House/scripts.pory"
	delay_16
# 734 "data/maps/Route2_House/scripts.pory"
	delay_16
# 735 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 738 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 739 "data/maps/Route2_House/scripts.pory"
	face_left
# 740 "data/maps/Route2_House/scripts.pory"
	delay_16
# 741 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 742 "data/maps/Route2_House/scripts.pory"
	delay_16
# 743 "data/maps/Route2_House/scripts.pory"
	delay_16
# 744 "data/maps/Route2_House/scripts.pory"
	delay_16
# 745 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 748 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 749 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 750 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 753 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 754 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 755 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 758 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 759 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 762 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 763 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 764 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 765 "data/maps/Route2_House/scripts.pory"
	delay_16
# 766 "data/maps/Route2_House/scripts.pory"
	delay_16
# 767 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 768 "data/maps/Route2_House/scripts.pory"
	emote_x
# 769 "data/maps/Route2_House/scripts.pory"
	delay_16
# 770 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 773 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 774 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 775 "data/maps/Route2_House/scripts.pory"
	emote_x
# 776 "data/maps/Route2_House/scripts.pory"
	delay_16
# 777 "data/maps/Route2_House/scripts.pory"
	delay_16
# 778 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 779 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 780 "data/maps/Route2_House/scripts.pory"
	delay_16
# 781 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 784 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 785 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 787 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 788 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 788 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 788 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 792 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 796 "data/maps/Route2_House/scripts.pory"
	delay 60
# 797 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 798 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 799 "data/maps/Route2_House/scripts.pory"
	delay 40
# 800 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 806 "data/maps/Route2_House/scripts.pory"
	closemessage
# 807 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 808 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 809 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 810 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesUp2
# 811 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 812 "data/maps/Route2_House/scripts.pory"
	delay 30
# 813 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 814 "data/maps/Route2_House/scripts.pory"
	closemessage
# 815 "data/maps/Route2_House/scripts.pory"
	delay 20
# 816 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 817 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 818 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 819 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 820 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 821 "data/maps/Route2_House/scripts.pory"
	delay 30
# 822 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 823 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 824 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 825 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 826 "data/maps/Route2_House/scripts.pory"
	closemessage
# 827 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 828 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 829 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 830 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 832 "data/maps/Route2_House/scripts.pory"
	closemessage
# 833 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 834 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 835 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 836 "data/maps/Route2_House/scripts.pory"
	delay 30
# 837 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 839 "data/maps/Route2_House/scripts.pory"
	closemessage
# 840 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 841 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 842 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 843 "data/maps/Route2_House/scripts.pory"
	closemessage
# 844 "data/maps/Route2_House/scripts.pory"
	delay 20
# 845 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 846 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 847 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 848 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 849 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 850 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 40
# 851 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 852 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 8, 12
	return


# 855 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 856 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 859 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 860 "data/maps/Route2_House/scripts.pory"
	walk_up
# 860 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 863 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 864 "data/maps/Route2_House/scripts.pory"
	walk_down
# 864 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 867 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 868 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 868 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 868 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 868 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 869 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 869 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 873 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 874 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
# 882 "data/maps/Route2_House/scripts.pory"
	closemessage
	end

TakeARest_2:
# 875 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 876 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 877 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 878 "data/maps/Route2_House/scripts.pory"
	waitse
# 879 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_AkihikoOnWarp42::
# 887 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoGoesToSleep
	return


Route2_House_Eventscript_AkihikoGoesToSleep::
# 891 "data/maps/Route2_House/scripts.pory"
	lock
# 892 "data/maps/Route2_House/scripts.pory"
	delay 30
# 893 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 894 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 895 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 896 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoGoesToSleep_Text_0
# 897 "data/maps/Route2_House/scripts.pory"
	closemessage
# 898 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 899 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Bathroom::
# 903 "data/maps/Route2_House/scripts.pory"
	lock
# 904 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 937 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 947 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 958 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 964 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 905 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 906 "data/maps/Route2_House/scripts.pory"
	closemessage
# 907 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 931 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
# 932 "data/maps/Route2_House/scripts.pory"
	closemessage
# 933 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 934 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 938 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
# 939 "data/maps/Route2_House/scripts.pory"
	closemessage
# 940 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 941 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 942 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_House_Eventscript_Bathroom_13
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_4:
# 948 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
# 953 "data/maps/Route2_House/scripts.pory"
	closemessage
# 954 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 955 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 956 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 959 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
# 960 "data/maps/Route2_House/scripts.pory"
	closemessage
# 961 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 962 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 908 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 909 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 910 "data/maps/Route2_House/scripts.pory"
	waitse
# 911 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR
# 912 "data/maps/Route2_House/scripts.pory"
	delay 60
# 913 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 914 "data/maps/Route2_House/scripts.pory"
	waitse
# 915 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 916 "data/maps/Route2_House/scripts.pory"
	waitse
# 917 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 918 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 919 "data/maps/Route2_House/scripts.pory"
	delay 30
# 920 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 921 "data/maps/Route2_House/scripts.pory"
	delay 20
# 922 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 923 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 924 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 925 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
# 926 "data/maps/Route2_House/scripts.pory"
	closemessage
# 927 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 928 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_13:
# 944 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_1


Route2_House_Eventscript_AkihikoOnFrame43::
# 969 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TheFirstMorning
	return


Route2_House_Eventscript_TheFirstMorning::
# 973 "data/maps/Route2_House/scripts.pory"
	lock
# 974 "data/maps/Route2_House/scripts.pory"
	delay 30
# 975 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 976 "data/maps/Route2_House/scripts.pory"
	waitse
# 977 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_0
# 979 "data/maps/Route2_House/scripts.pory"
	closemessage
# 980 "data/maps/Route2_House/scripts.pory"
	delay 30
# 981 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_1
# 982 "data/maps/Route2_House/scripts.pory"
	closemessage
# 983 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 984 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToMitsuruTheFirstMorning
# 985 "data/maps/Route2_House/scripts.pory"
	delay 60
# 986 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGoesToPlaceTheFirstMorning
# 987 "data/maps/Route2_House/scripts.pory"
	delay 4
# 988 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroGoesToPlaceTheFirstMorning
# 989 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 990 "data/maps/Route2_House/scripts.pory"
	delay 30
# 991 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_2
# 992 "data/maps/Route2_House/scripts.pory"
	closemessage
# 994 "data/maps/Route2_House/scripts.pory"
	delay 30
# 995 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_3
# 1007 "data/maps/Route2_House/scripts.pory"
	closemessage
# 1008 "data/maps/Route2_House/scripts.pory"
	applymovement 5, walkleft
# 1009 "data/maps/Route2_House/scripts.pory"
	applymovement 6, walkleft
# 1010 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1011 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 1012 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 1013 "data/maps/Route2_House/scripts.pory"
	applymovement 1, CameraGoesDown2
# 1014 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonJoinsTheFirstMorning
# 1015 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1016 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 1017 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 1018 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 1019 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 1020 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 1021 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 1022 "data/maps/Route2_House/scripts.pory"
	delay 30
# 1023 "data/maps/Route2_House/scripts.pory"
	playfanfare SE_M_SAND_ATTACK
# 1024 "data/maps/Route2_House/scripts.pory"
	waitfanfare
# 1025 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TheFirstMorning_Text_4
# 1029 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 1030 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 44
# 1031 "data/maps/Route2_House/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 1032 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 1033 "data/maps/Route2_House/scripts.pory"
	release
	end


# 1037 "data/maps/Route2_House/scripts.pory"
CameraPansToMitsuruTheFirstMorning:
# 1038 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1038 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1039 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1039 "data/maps/Route2_House/scripts.pory"
	walk_diag_northeast
# 1040 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1043 "data/maps/Route2_House/scripts.pory"
AkihikoGoesToPlaceTheFirstMorning:
# 1044 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1044 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1044 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1044 "data/maps/Route2_House/scripts.pory"
	walk_up
# 1045 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1045 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 1047 "data/maps/Route2_House/scripts.pory"
ShinjiroGoesToPlaceTheFirstMorning:
# 1048 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1048 "data/maps/Route2_House/scripts.pory"
	walk_left
# 1049 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 1052 "data/maps/Route2_House/scripts.pory"
InteleonJoinsTheFirstMorning:
# 1053 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1053 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1053 "data/maps/Route2_House/scripts.pory"
	walk_right
# 1053 "data/maps/Route2_House/scripts.pory"
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
# 456 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 462 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "We'll be having 3-vs-3 Pokémon battles\n"
	.string "so plan your party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 490 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 579 "data/maps/Route2_House/scripts.pory"
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
# 591 "data/maps/Route2_House/scripts.pory"
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
# 606 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We simply\n"
	.string "can just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 615 "data/maps/Route2_House/scripts.pory"
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
# 635 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 663 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 667 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}M-my apology, it slipped my mind that\n"
	.string "this house didn't have guest rooms.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 675 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 680 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 705 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 709 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 716 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 800 "data/maps/Route2_House/scripts.pory"
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
# 813 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is already sleeping soundly. She\n"
	.string "won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 825 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 830 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 837 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 842 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 873 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_AkihikoGoesToSleep_Text_0:
# 896 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}-yawn- (I'm so tired. Time to sleep.)$"

Route2_House_Eventscript_Bathroom_Text_0:
# 905 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 925 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 931 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 938 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 948 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_5:
# 959 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I should get going.)$"

Route2_House_Eventscript_TheFirstMorning_Text_0:
# 977 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}-yawn- (Gosh, I'm still feeling sleepy.)\p"
	.string "(Maybe doing night battle wasn't a good\n"
	.string "choice.)$"

Route2_House_Eventscript_TheFirstMorning_Text_1:
# 981 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Everyone, please gather around. I'll\n"
	.string "explain our plan route.$"

Route2_House_Eventscript_TheFirstMorning_Text_2:
# 991 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take a look at the map.$"

Route2_House_Eventscript_TheFirstMorning_Text_3:
# 995 "data/maps/Route2_House/scripts.pory"
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
# 1025 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}COMPLETE\p"
	.string "Chapter 1: Under The Rubbles\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 18$"
