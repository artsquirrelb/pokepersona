Route2_House_MapScripts::
# 9 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 49 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 27
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 21 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 25 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 28 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 37 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 12 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
# 13 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 16 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 19 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 22 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 23 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 1, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 26 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 25 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_lt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 29 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 30 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 31 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 32 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 33 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 34 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 35 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 38 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 39 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 1, 3, 4
# 40 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 4, 4
# 42 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 43 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 4, 7
# 44 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 45 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 11, 6
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
	.2byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 50 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnFrame27
# 51 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnFrame32
# 52 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnFrame38
# 53 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 39, Route2_House_Eventscript_AkihikoOnFrame39
	.2byte 0


Route2_House_Eventscript_AkihikoOnWarp27::
# 59 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 63 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 64 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 65 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 69 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnWarp39::
# 72 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
# 73 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 76 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 80 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 84 "data/maps/Route2_House/scripts.pory"
	lock
# 85 "data/maps/Route2_House/scripts.pory"
	delay 20
# 86 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 87 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route2_House/scripts.pory"
	delay 30
# 89 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 90 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 91 "data/maps/Route2_House/scripts.pory"
	closemessage
# 92 "data/maps/Route2_House/scripts.pory"
	delay 30
# 93 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 94 "data/maps/Route2_House/scripts.pory"
	delay 4
# 95 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 96 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route2_House/scripts.pory"
	delay 20
# 98 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 99 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 100 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 102 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 103 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 104 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 105 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 106 "data/maps/Route2_House/scripts.pory"
	delay 4
# 107 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 108 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 109 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 110 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route2_House/scripts.pory"
	delay 30
# 112 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 113 "data/maps/Route2_House/scripts.pory"
	delay 8
# 114 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 115 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route2_House/scripts.pory"
	delay 30
# 117 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 118 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 121 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 122 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 125 "data/maps/Route2_House/scripts.pory"
	closemessage
# 126 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 127 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 131 "data/maps/Route2_House/scripts.pory"
	lock
# 132 "data/maps/Route2_House/scripts.pory"
	delay 30
# 133 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 136 "data/maps/Route2_House/scripts.pory"
	closemessage
# 137 "data/maps/Route2_House/scripts.pory"
	delay 30
# 138 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 139 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 141 "data/maps/Route2_House/scripts.pory"
	closemessage
# 142 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 143 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 147 "data/maps/Route2_House/scripts.pory"
	delay 20
# 148 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 149 "data/maps/Route2_House/scripts.pory"
	delay 8
# 150 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 151 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 165 "data/maps/Route2_House/scripts.pory"
	closemessage
# 166 "data/maps/Route2_House/scripts.pory"
	delay 20
# 167 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 168 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 171 "data/maps/Route2_House/scripts.pory"
	closemessage
# 172 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 173 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 176 "data/maps/Route2_House/scripts.pory"
	closemessage
# 177 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 178 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 179 "data/maps/Route2_House/scripts.pory"
	delay 8
# 180 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 181 "data/maps/Route2_House/scripts.pory"
	closemessage
# 182 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 183 "data/maps/Route2_House/scripts.pory"
	waitse
# 184 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 185 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 186 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 194 "data/maps/Route2_House/scripts.pory"
	closemessage
# 195 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 196 "data/maps/Route2_House/scripts.pory"
	delay 16
# 197 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 198 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route2_House/scripts.pory"
	delay 60
# 200 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 201 "data/maps/Route2_House/scripts.pory"
	delay 16
# 202 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 203 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 208 "data/maps/Route2_House/scripts.pory"
	closemessage
# 209 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 210 "data/maps/Route2_House/scripts.pory"
	waitse
# 211 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 212 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 214 "data/maps/Route2_House/scripts.pory"
	closemessage
# 215 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 216 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 217 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 220 "data/maps/Route2_House/scripts.pory"
	closemessage
# 221 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 222 "data/maps/Route2_House/scripts.pory"
	delay 8
# 223 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 224 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route2_House/scripts.pory"
	delay 60
# 226 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 227 "data/maps/Route2_House/scripts.pory"
	closemessage
# 228 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 229 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 231 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 232 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 233 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 20
# 234 "data/maps/Route2_House/scripts.pory"
	pausefakertc
# 235 "data/maps/Route2_House/scripts.pory"
	release
	end


# 239 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 240 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 242 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 243 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 243 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 243 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 243 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 246 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 247 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 248 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 251 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 252 "data/maps/Route2_House/scripts.pory"
	set_visible
# 253 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 256 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 257 "data/maps/Route2_House/scripts.pory"
	face_left
# 258 "data/maps/Route2_House/scripts.pory"
	delay_16
# 259 "data/maps/Route2_House/scripts.pory"
	delay_16
# 260 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 261 "data/maps/Route2_House/scripts.pory"
	delay_16
# 262 "data/maps/Route2_House/scripts.pory"
	face_right
# 263 "data/maps/Route2_House/scripts.pory"
	delay_16
# 264 "data/maps/Route2_House/scripts.pory"
	delay_16
# 265 "data/maps/Route2_House/scripts.pory"
	delay_16
# 266 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 270 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 271 "data/maps/Route2_House/scripts.pory"
	face_right
# 272 "data/maps/Route2_House/scripts.pory"
	delay_16
# 273 "data/maps/Route2_House/scripts.pory"
	delay_16
# 274 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 275 "data/maps/Route2_House/scripts.pory"
	face_up
# 276 "data/maps/Route2_House/scripts.pory"
	delay_16
# 277 "data/maps/Route2_House/scripts.pory"
	delay_16
# 278 "data/maps/Route2_House/scripts.pory"
	face_left
# 279 "data/maps/Route2_House/scripts.pory"
	delay_16
# 280 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 283 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 284 "data/maps/Route2_House/scripts.pory"
	walk_left
# 285 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 288 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 289 "data/maps/Route2_House/scripts.pory"
	walk_right
# 290 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 293 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 294 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 295 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 298 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 299 "data/maps/Route2_House/scripts.pory"
	walk_left
# 300 "data/maps/Route2_House/scripts.pory"
	walk_up
# 301 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 305 "data/maps/Route2_House/scripts.pory"
	lock
# 306 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 307 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 313 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 322 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Mitsuru_2:
# 308 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 311 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 314 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 315 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 317 "data/maps/Route2_House/scripts.pory"
	closemessage
# 318 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 319 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 320 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 327 "data/maps/Route2_House/scripts.pory"
	lock
# 328 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 329 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 341 "data/maps/Route2_House/scripts.pory"
	closemessage
# 342 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 343 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 345 "data/maps/Route2_House/scripts.pory"
	release
	return


# 348 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 349 "data/maps/Route2_House/scripts.pory"
	walk_down
# 350 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 351 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 352 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 352 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 356 "data/maps/Route2_House/scripts.pory"
	lock
# 357 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 358 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 359 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 360 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 361 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 363 "data/maps/Route2_House/scripts.pory"
	closemessage
# 364 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Inteleon::
# 368 "data/maps/Route2_House/scripts.pory"
	lock
# 369 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 370 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 372 "data/maps/Route2_House/scripts.pory"
	closemessage
# 373 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 374 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToShinjiro::
# 378 "data/maps/Route2_House/scripts.pory"
	lock
# 379 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 380 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 381 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 382 "data/maps/Route2_House/scripts.pory"
	closemessage
# 383 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToMitsuru::
# 387 "data/maps/Route2_House/scripts.pory"
	lock
# 388 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 389 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 390 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 391 "data/maps/Route2_House/scripts.pory"
	closemessage
# 392 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 396 "data/maps/Route2_House/scripts.pory"
	lock
# 397 "data/maps/Route2_House/scripts.pory"
	delay 30
# 398 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 400 "data/maps/Route2_House/scripts.pory"
	closemessage
# 401 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 402 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 403 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 413 "data/maps/Route2_House/scripts.pory"
	closemessage
# 414 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 415 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 416 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 417 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 418 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 419 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 423 "data/maps/Route2_House/scripts.pory"
	closemessage
# 424 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 425 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 426 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 427 "data/maps/Route2_House/scripts.pory"
	closemessage
# 428 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 429 "data/maps/Route2_House/scripts.pory"
	waitse
# 430 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 432 "data/maps/Route2_House/scripts.pory"
	closemessage
# 433 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 434 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 435 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_ALL
# 436 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 437 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 438 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 439 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 440 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 441 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 444 "data/maps/Route2_House/scripts.pory"
	closemessage
# 445 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 446 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 447 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 450 "data/maps/Route2_House/scripts.pory"
	closemessage
# 451 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 452 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 453 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 454 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 455 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 456 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 457 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 458 "data/maps/Route2_House/scripts.pory"
	delay 16
# 459 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 460 "data/maps/Route2_House/scripts.pory"
	delay 4
# 461 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 462 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 463 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 464 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 465 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 466 "data/maps/Route2_House/scripts.pory"
	waitse
# 467 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 468 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 469 "data/maps/Route2_House/scripts.pory"
	waitse
# 470 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 471 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 472 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 473 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 474 "data/maps/Route2_House/scripts.pory"
	delay 30
# 475 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 478 "data/maps/Route2_House/scripts.pory"
	closemessage
# 479 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 480 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 481 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 482 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 483 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 484 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 485 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 486 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 487 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 488 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 489 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 490 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 40
# 491 "data/maps/Route2_House/scripts.pory"
	release
	end


# 495 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 496 "data/maps/Route2_House/scripts.pory"
	walk_right
# 497 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 500 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 501 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 502 "data/maps/Route2_House/scripts.pory"
	walk_up
# 503 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 505 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 506 "data/maps/Route2_House/scripts.pory"
	walk_left
# 506 "data/maps/Route2_House/scripts.pory"
	walk_left
# 507 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 509 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 510 "data/maps/Route2_House/scripts.pory"
	walk_right
# 511 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 513 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 514 "data/maps/Route2_House/scripts.pory"
	walk_down
# 514 "data/maps/Route2_House/scripts.pory"
	walk_down
# 514 "data/maps/Route2_House/scripts.pory"
	walk_down
# 514 "data/maps/Route2_House/scripts.pory"
	walk_down
# 514 "data/maps/Route2_House/scripts.pory"
	walk_down
# 515 "data/maps/Route2_House/scripts.pory"
	walk_right
# 515 "data/maps/Route2_House/scripts.pory"
	walk_right
# 516 "data/maps/Route2_House/scripts.pory"
	walk_down
# 516 "data/maps/Route2_House/scripts.pory"
	walk_down
# 516 "data/maps/Route2_House/scripts.pory"
	walk_down
# 517 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 519 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 520 "data/maps/Route2_House/scripts.pory"
	walk_down
# 520 "data/maps/Route2_House/scripts.pory"
	walk_down
# 520 "data/maps/Route2_House/scripts.pory"
	walk_down
# 521 "data/maps/Route2_House/scripts.pory"
	walk_right
# 521 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 524 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 525 "data/maps/Route2_House/scripts.pory"
	walk_right
# 525 "data/maps/Route2_House/scripts.pory"
	walk_right
# 525 "data/maps/Route2_House/scripts.pory"
	walk_right
# 525 "data/maps/Route2_House/scripts.pory"
	walk_right
# 526 "data/maps/Route2_House/scripts.pory"
	walk_down
# 526 "data/maps/Route2_House/scripts.pory"
	walk_down
# 526 "data/maps/Route2_House/scripts.pory"
	walk_down
# 527 "data/maps/Route2_House/scripts.pory"
	walk_right
# 527 "data/maps/Route2_House/scripts.pory"
	walk_right
# 528 "data/maps/Route2_House/scripts.pory"
	walk_down
# 528 "data/maps/Route2_House/scripts.pory"
	walk_down
# 529 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 532 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 533 "data/maps/Route2_House/scripts.pory"
	walk_down
# 534 "data/maps/Route2_House/scripts.pory"
	walk_right
# 534 "data/maps/Route2_House/scripts.pory"
	walk_right
# 534 "data/maps/Route2_House/scripts.pory"
	walk_right
# 534 "data/maps/Route2_House/scripts.pory"
	walk_right
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
# 537 "data/maps/Route2_House/scripts.pory"
	walk_down
# 537 "data/maps/Route2_House/scripts.pory"
	walk_down
# 538 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 541 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 542 "data/maps/Route2_House/scripts.pory"
	walk_up
# 542 "data/maps/Route2_House/scripts.pory"
	walk_up
# 542 "data/maps/Route2_House/scripts.pory"
	walk_up
# 543 "data/maps/Route2_House/scripts.pory"
	walk_left
# 543 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 546 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 547 "data/maps/Route2_House/scripts.pory"
	walk_left
# 547 "data/maps/Route2_House/scripts.pory"
	walk_left
# 548 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 552 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 556 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 557 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 558 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 559 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 560 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 561 "data/maps/Route2_House/scripts.pory"
	delay 8
# 562 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 563 "data/maps/Route2_House/scripts.pory"
	delay 60
# 564 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 573 "data/maps/Route2_House/scripts.pory"
	closemessage
# 574 "data/maps/Route2_House/scripts.pory"
	delay 50
# 575 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 576 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 589 "data/maps/Route2_House/scripts.pory"
	closemessage
# 590 "data/maps/Route2_House/scripts.pory"
	delay 40
# 591 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 593 "data/maps/Route2_House/scripts.pory"
	closemessage
# 594 "data/maps/Route2_House/scripts.pory"
	delay 30
# 595 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 596 "data/maps/Route2_House/scripts.pory"
	delay 10
# 597 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 598 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 599 "data/maps/Route2_House/scripts.pory"
	delay 60
# 600 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 607 "data/maps/Route2_House/scripts.pory"
	closemessage
# 608 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
# 609 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 610 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 611 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 612 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 613 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 614 "data/maps/Route2_House/scripts.pory"
	delay 90
# 615 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 616 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 617 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 618 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_RG_SS_ANNE, TRUE
# 619 "data/maps/Route2_House/scripts.pory"
	delay 60
# 620 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 623 "data/maps/Route2_House/scripts.pory"
	closemessage
# 624 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 627 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 628 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 630 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 631 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 631 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 631 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 631 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 632 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 632 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 633 "data/maps/Route2_House/scripts.pory"
	walk_up
# 633 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 636 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 637 "data/maps/Route2_House/scripts.pory"
	walk_up
# 637 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 640 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 641 "data/maps/Route2_House/scripts.pory"
	walk_down
# 641 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 645 "data/maps/Route2_House/scripts.pory"
	delay 60
# 646 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 647 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 648 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 649 "data/maps/Route2_House/scripts.pory"
	closemessage
# 650 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 651 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 652 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 656 "data/maps/Route2_House/scripts.pory"
	closemessage
# 657 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 658 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 659 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 660 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 661 "data/maps/Route2_House/scripts.pory"
	closemessage
# 662 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 663 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 664 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 667 "data/maps/Route2_House/scripts.pory"
	closemessage
# 668 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 669 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 670 "data/maps/Route2_House/scripts.pory"
	delay 10
# 671 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 672 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 673 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 674 "data/maps/Route2_House/scripts.pory"
	lock
# 675 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 676 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 677 "data/maps/Route2_House/scripts.pory"
	release
# 678 "data/maps/Route2_House/scripts.pory"
	delay 30
# 679 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 680 "data/maps/Route2_House/scripts.pory"
	delay 10
# 681 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 682 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 683 "data/maps/Route2_House/scripts.pory"
	lock
# 684 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 685 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 686 "data/maps/Route2_House/scripts.pory"
	release
# 687 "data/maps/Route2_House/scripts.pory"
	delay 30
# 688 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 689 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 690 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 691 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 692 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 693 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 694 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 695 "data/maps/Route2_House/scripts.pory"
	closemessage
# 696 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 697 "data/maps/Route2_House/scripts.pory"
	delay 10
# 698 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 699 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 700 "data/maps/Route2_House/scripts.pory"
	delay 60
# 701 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 704 "data/maps/Route2_House/scripts.pory"
	closemessage
# 705 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 706 "data/maps/Route2_House/scripts.pory"
	delay 30
# 707 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 708 "data/maps/Route2_House/scripts.pory"
	delay 80
# 709 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 710 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 713 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 714 "data/maps/Route2_House/scripts.pory"
	face_left
# 715 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 716 "data/maps/Route2_House/scripts.pory"
	delay_16
# 717 "data/maps/Route2_House/scripts.pory"
	delay_16
# 718 "data/maps/Route2_House/scripts.pory"
	delay_16
# 719 "data/maps/Route2_House/scripts.pory"
	delay_16
# 720 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 723 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 724 "data/maps/Route2_House/scripts.pory"
	face_left
# 725 "data/maps/Route2_House/scripts.pory"
	delay_16
# 726 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 727 "data/maps/Route2_House/scripts.pory"
	delay_16
# 728 "data/maps/Route2_House/scripts.pory"
	delay_16
# 729 "data/maps/Route2_House/scripts.pory"
	delay_16
# 730 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 733 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 734 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 735 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 738 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 739 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 740 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 743 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 744 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 747 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 748 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 749 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 750 "data/maps/Route2_House/scripts.pory"
	delay_16
# 751 "data/maps/Route2_House/scripts.pory"
	delay_16
# 752 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 753 "data/maps/Route2_House/scripts.pory"
	emote_x
# 754 "data/maps/Route2_House/scripts.pory"
	delay_16
# 755 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 758 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 759 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 760 "data/maps/Route2_House/scripts.pory"
	emote_x
# 761 "data/maps/Route2_House/scripts.pory"
	delay_16
# 762 "data/maps/Route2_House/scripts.pory"
	delay_16
# 763 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 764 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 765 "data/maps/Route2_House/scripts.pory"
	delay_16
# 766 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 769 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 770 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 772 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 773 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 773 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 773 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

Route2_House_Eventscript_AkihikoOnFrame39::
# 777 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoCantSleep
	return


Route2_House_Eventscript_AkihikoCantSleep::
# 781 "data/maps/Route2_House/scripts.pory"
	delay 60
# 782 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 783 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 784 "data/maps/Route2_House/scripts.pory"
	delay 40
# 785 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_0
# 791 "data/maps/Route2_House/scripts.pory"
	closemessage
# 792 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 793 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 794 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 795 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesUp2
# 796 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 797 "data/maps/Route2_House/scripts.pory"
	delay 30
# 798 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_1
# 799 "data/maps/Route2_House/scripts.pory"
	closemessage
# 800 "data/maps/Route2_House/scripts.pory"
	delay 20
# 801 "data/maps/Route2_House/scripts.pory"
	applymovement 4, facedown
# 802 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 803 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 804 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 805 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 806 "data/maps/Route2_House/scripts.pory"
	delay 30
# 807 "data/maps/Route2_House/scripts.pory"
	playse SE_M_DETECT
# 808 "data/maps/Route2_House/scripts.pory"
	applymovement 4, shakehorizontal
# 809 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 810 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_2
# 811 "data/maps/Route2_House/scripts.pory"
	closemessage
# 812 "data/maps/Route2_House/scripts.pory"
	playse SE_M_BUBBLE3
# 813 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 814 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 815 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_3
# 817 "data/maps/Route2_House/scripts.pory"
	closemessage
# 818 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 819 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 820 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 821 "data/maps/Route2_House/scripts.pory"
	delay 30
# 822 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_4
# 824 "data/maps/Route2_House/scripts.pory"
	closemessage
# 825 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 826 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 827 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoCantSleep_Text_5
# 828 "data/maps/Route2_House/scripts.pory"
	closemessage
# 829 "data/maps/Route2_House/scripts.pory"
	delay 20
# 830 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesDown2
# 831 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 832 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 833 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoExitTheRoom
# 834 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 835 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 40
# 836 "data/maps/Route2_House/scripts.pory"
	fwdtime 22, 40
# 837 "data/maps/Route2_House/scripts.pory"
	warp MAP_ROUTE2, 8, 12
	return


# 840 "data/maps/Route2_House/scripts.pory"
emotesweat:
# 841 "data/maps/Route2_House/scripts.pory"
	emote_sweat
	step_end

# 844 "data/maps/Route2_House/scripts.pory"
CameraGoesUp2:
# 845 "data/maps/Route2_House/scripts.pory"
	walk_up
# 845 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 848 "data/maps/Route2_House/scripts.pory"
CameraGoesDown2:
# 849 "data/maps/Route2_House/scripts.pory"
	walk_down
# 849 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 852 "data/maps/Route2_House/scripts.pory"
AkihikoExitTheRoom:
# 853 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 853 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 853 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 853 "data/maps/Route2_House/scripts.pory"
	player_run_right
# 854 "data/maps/Route2_House/scripts.pory"
	player_run_down
# 854 "data/maps/Route2_House/scripts.pory"
	player_run_down
	step_end

TakeARest::
# 858 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 859 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
# 867 "data/maps/Route2_House/scripts.pory"
	closemessage
	end

TakeARest_2:
# 860 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 861 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 862 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 863 "data/maps/Route2_House/scripts.pory"
	waitse
# 864 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_AkihikoOnWarp42::
# 872 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkihikoGoesToSleep
	return


Route2_House_Eventscript_AkihikoGoesToSleep::
# 876 "data/maps/Route2_House/scripts.pory"
	lock
# 877 "data/maps/Route2_House/scripts.pory"
	delay 30
# 878 "data/maps/Route2_House/scripts.pory"
	playse SE_M_YAWN
# 879 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 880 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 881 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkihikoGoesToSleep_Text_0
# 882 "data/maps/Route2_House/scripts.pory"
	closemessage
# 883 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 884 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Bathroom::
# 888 "data/maps/Route2_House/scripts.pory"
	lock
# 889 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Route2_House_Eventscript_Bathroom_2
# 920 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_House_Eventscript_Bathroom_3
# 930 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_House_Eventscript_Bathroom_4
# 941 "data/maps/Route2_House/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Route2_House_Eventscript_Bathroom_5
Route2_House_Eventscript_Bathroom_1:
# 947 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Bathroom_2:
# 890 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_0, MSGBOX_YESNO
# 891 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_House_Eventscript_Bathroom_10
# 914 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_2
# 915 "data/maps/Route2_House/scripts.pory"
	closemessage
# 916 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 917 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_3:
# 921 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_3
# 922 "data/maps/Route2_House/scripts.pory"
	closemessage
# 923 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 924 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 925 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_House_Eventscript_Bathroom_13
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_4:
# 931 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_4
# 936 "data/maps/Route2_House/scripts.pory"
	closemessage
# 937 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 938 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 939 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_5:
# 942 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_5
# 943 "data/maps/Route2_House/scripts.pory"
	closemessage
# 944 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 945 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_10:
# 892 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 893 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 894 "data/maps/Route2_House/scripts.pory"
	waitse
# 895 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR
# 896 "data/maps/Route2_House/scripts.pory"
	delay 30
# 897 "data/maps/Route2_House/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 898 "data/maps/Route2_House/scripts.pory"
	waitse
# 899 "data/maps/Route2_House/scripts.pory"
	playse SE_DOOR
# 900 "data/maps/Route2_House/scripts.pory"
	waitse
# 901 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 902 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 903 "data/maps/Route2_House/scripts.pory"
	delay 30
# 904 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 905 "data/maps/Route2_House/scripts.pory"
	delay 20
# 906 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 907 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotemusic
# 908 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 909 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Bathroom_Text_1
# 910 "data/maps/Route2_House/scripts.pory"
	closemessage
# 911 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Route2_House_Eventscript_Bathroom_1

Route2_House_Eventscript_Bathroom_13:
# 927 "data/maps/Route2_House/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Route2_House_Eventscript_Bathroom_1


Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 89 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 90 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 119 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 122 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies for this is the best shelter I\n"
	.string "could provide in this situation.\p"
	.string "This house is of my butler's grandson,\n"
	.string "who's currently traveling the region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 133 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 140 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 144 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 152 "data/maps/Route2_House/scripts.pory"
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
# 169 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 174 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 180 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 187 "data/maps/Route2_House/scripts.pory"
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
# 204 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 213 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 218 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 226 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 308 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 315 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 329 "data/maps/Route2_House/scripts.pory"
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
# 361 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 370 "data/maps/Route2_House/scripts.pory"
	.string "Inteleon's looking at you judgingly.\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 381 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 390 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 398 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 403 "data/maps/Route2_House/scripts.pory"
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
# 416 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 419 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 426 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 430 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 441 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 447 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "We'll be having 3-vs-3 Pokémon battles\n"
	.string "so plan your party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 475 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 564 "data/maps/Route2_House/scripts.pory"
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
# 576 "data/maps/Route2_House/scripts.pory"
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
# 591 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We simply\n"
	.string "can just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 600 "data/maps/Route2_House/scripts.pory"
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
# 620 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 648 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 652 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}M-my apology, it slipped my mind that\n"
	.string "this house didn't have guest rooms.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 660 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 665 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 690 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 694 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 701 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hmph.$"

Route2_House_Eventscript_AkihikoCantSleep_Text_0:
# 785 "data/maps/Route2_House/scripts.pory"
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
# 798 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is already sleeping soundly. She\n"
	.string "won't know if I sneak out.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_2:
# 810 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}-Hiss-$"

Route2_House_Eventscript_AkihikoCantSleep_Text_3:
# 815 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(And this Inteleon keeps looking\n"
	.string "daggers at me...)\p"
	.string "(What did I even do?)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_4:
# 822 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Where's Shinji, though?)\p"
	.string "(Maybe he's outside.)$"

Route2_House_Eventscript_AkihikoCantSleep_Text_5:
# 827 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I uh... just gonna go outside for a bit.$"

TakeARest_Text_0:
# 858 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"

Route2_House_Eventscript_AkihikoGoesToSleep_Text_0:
# 881 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}-yawn- (I'm so tired. Time to sleep.)$"

Route2_House_Eventscript_Bathroom_Text_0:
# 890 "data/maps/Route2_House/scripts.pory"
	.string "Do you want to use the bathroom?$"

Route2_House_Eventscript_Bathroom_Text_1:
# 909 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}(All refreshed.)$"

Route2_House_Eventscript_Bathroom_Text_2:
# 914 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Nah, I think I'm good.)$"

Route2_House_Eventscript_Bathroom_Text_3:
# 921 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I just used the bathroom.)$"

Route2_House_Eventscript_Bathroom_Text_4:
# 931 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(That reminds me, Kirijo took a really\n"
	.string "long bath yesterday.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I don't understand. What's so fun in the\n"
	.string "bathroom that made her stay that long?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What are you staring at the bathroom\n"
	.string "door for? Is there anything wrong?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}N-No, nothing! Nothing at all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}?$"

Route2_House_Eventscript_Bathroom_Text_5:
# 942 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I should get going.)$"
