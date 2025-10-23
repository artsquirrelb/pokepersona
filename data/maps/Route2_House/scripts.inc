Route2_House_MapScripts::
# 7 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 40 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 27
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 16 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 23 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 26 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 35 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 39
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 10 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
# 11 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 14 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 17 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 20 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 21 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 1, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 24 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 23 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_lt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 27 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 28 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 29 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 30 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 31 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 4, 8, 4
# 32 "data/maps/Route2_House/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 33 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 36 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnWarp27
# 4 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnWarp32
# 5 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnWarp38
	.2byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 41 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnFrame27
# 42 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnFrame32
# 43 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnFrame38
	.2byte 0


Route2_House_Eventscript_AkihikoOnWarp27::
# 48 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 52 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 53 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 54 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 58 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 62 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 66 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 70 "data/maps/Route2_House/scripts.pory"
	lock
# 71 "data/maps/Route2_House/scripts.pory"
	delay 20
# 72 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 73 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route2_House/scripts.pory"
	delay 30
# 75 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 76 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 77 "data/maps/Route2_House/scripts.pory"
	closemessage
# 78 "data/maps/Route2_House/scripts.pory"
	delay 30
# 79 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 80 "data/maps/Route2_House/scripts.pory"
	delay 4
# 81 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 82 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route2_House/scripts.pory"
	delay 20
# 84 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 85 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 86 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 88 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 89 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 90 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 91 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 92 "data/maps/Route2_House/scripts.pory"
	delay 4
# 93 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 94 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 95 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 96 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route2_House/scripts.pory"
	delay 30
# 98 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 99 "data/maps/Route2_House/scripts.pory"
	delay 8
# 100 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 101 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route2_House/scripts.pory"
	delay 30
# 103 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 104 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 107 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 108 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 111 "data/maps/Route2_House/scripts.pory"
	closemessage
# 112 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 113 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 117 "data/maps/Route2_House/scripts.pory"
	lock
# 118 "data/maps/Route2_House/scripts.pory"
	delay 30
# 119 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 122 "data/maps/Route2_House/scripts.pory"
	closemessage
# 123 "data/maps/Route2_House/scripts.pory"
	delay 30
# 124 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 125 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 127 "data/maps/Route2_House/scripts.pory"
	closemessage
# 128 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 129 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 133 "data/maps/Route2_House/scripts.pory"
	delay 20
# 134 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 135 "data/maps/Route2_House/scripts.pory"
	delay 8
# 136 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 137 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 151 "data/maps/Route2_House/scripts.pory"
	closemessage
# 152 "data/maps/Route2_House/scripts.pory"
	delay 20
# 153 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 154 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 157 "data/maps/Route2_House/scripts.pory"
	closemessage
# 158 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 159 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 162 "data/maps/Route2_House/scripts.pory"
	closemessage
# 163 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 164 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 165 "data/maps/Route2_House/scripts.pory"
	delay 8
# 166 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 167 "data/maps/Route2_House/scripts.pory"
	closemessage
# 168 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 169 "data/maps/Route2_House/scripts.pory"
	waitse
# 170 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 171 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 172 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 180 "data/maps/Route2_House/scripts.pory"
	closemessage
# 181 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 182 "data/maps/Route2_House/scripts.pory"
	delay 16
# 183 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 184 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route2_House/scripts.pory"
	delay 60
# 186 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 187 "data/maps/Route2_House/scripts.pory"
	delay 16
# 188 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 189 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 194 "data/maps/Route2_House/scripts.pory"
	closemessage
# 195 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 196 "data/maps/Route2_House/scripts.pory"
	waitse
# 197 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 198 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 200 "data/maps/Route2_House/scripts.pory"
	closemessage
# 201 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 202 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 203 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 206 "data/maps/Route2_House/scripts.pory"
	closemessage
# 207 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 208 "data/maps/Route2_House/scripts.pory"
	delay 8
# 209 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 210 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route2_House/scripts.pory"
	delay 60
# 212 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 213 "data/maps/Route2_House/scripts.pory"
	closemessage
# 214 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 215 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 217 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 218 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 219 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 20
# 220 "data/maps/Route2_House/scripts.pory"
	pausefakertc
# 221 "data/maps/Route2_House/scripts.pory"
	release
	end


# 225 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 226 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 228 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 229 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 229 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 229 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 229 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 232 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 233 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 234 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 237 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 238 "data/maps/Route2_House/scripts.pory"
	set_visible
# 239 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 242 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 243 "data/maps/Route2_House/scripts.pory"
	face_left
# 244 "data/maps/Route2_House/scripts.pory"
	delay_16
# 245 "data/maps/Route2_House/scripts.pory"
	delay_16
# 246 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 247 "data/maps/Route2_House/scripts.pory"
	delay_16
# 248 "data/maps/Route2_House/scripts.pory"
	face_right
# 249 "data/maps/Route2_House/scripts.pory"
	delay_16
# 250 "data/maps/Route2_House/scripts.pory"
	delay_16
# 251 "data/maps/Route2_House/scripts.pory"
	delay_16
# 252 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 256 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 257 "data/maps/Route2_House/scripts.pory"
	face_right
# 258 "data/maps/Route2_House/scripts.pory"
	delay_16
# 259 "data/maps/Route2_House/scripts.pory"
	delay_16
# 260 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 261 "data/maps/Route2_House/scripts.pory"
	face_up
# 262 "data/maps/Route2_House/scripts.pory"
	delay_16
# 263 "data/maps/Route2_House/scripts.pory"
	delay_16
# 264 "data/maps/Route2_House/scripts.pory"
	face_left
# 265 "data/maps/Route2_House/scripts.pory"
	delay_16
# 266 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 269 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 270 "data/maps/Route2_House/scripts.pory"
	walk_left
# 271 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 274 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 275 "data/maps/Route2_House/scripts.pory"
	walk_right
# 276 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 279 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 280 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 281 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 284 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 285 "data/maps/Route2_House/scripts.pory"
	walk_left
# 286 "data/maps/Route2_House/scripts.pory"
	walk_up
# 287 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 291 "data/maps/Route2_House/scripts.pory"
	lock
# 292 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 293 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 299 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 307 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Mitsuru_2:
# 294 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 297 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 300 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 301 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 303 "data/maps/Route2_House/scripts.pory"
	closemessage
# 304 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 305 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 312 "data/maps/Route2_House/scripts.pory"
	lock
# 313 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 314 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 326 "data/maps/Route2_House/scripts.pory"
	closemessage
# 327 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 328 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 330 "data/maps/Route2_House/scripts.pory"
	release
	return


# 333 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 334 "data/maps/Route2_House/scripts.pory"
	walk_down
# 335 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 336 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 337 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 337 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 341 "data/maps/Route2_House/scripts.pory"
	lock
# 342 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 343 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 344 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 345 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 348 "data/maps/Route2_House/scripts.pory"
	closemessage
# 349 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Inteleon::
# 353 "data/maps/Route2_House/scripts.pory"
	lock
# 354 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 355 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 357 "data/maps/Route2_House/scripts.pory"
	closemessage
# 358 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 359 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToShinjiro::
# 363 "data/maps/Route2_House/scripts.pory"
	lock
# 364 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 365 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 366 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 367 "data/maps/Route2_House/scripts.pory"
	closemessage
# 368 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToMitsuru::
# 372 "data/maps/Route2_House/scripts.pory"
	lock
# 373 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 374 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 375 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 376 "data/maps/Route2_House/scripts.pory"
	closemessage
# 377 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 381 "data/maps/Route2_House/scripts.pory"
	lock
# 382 "data/maps/Route2_House/scripts.pory"
	delay 30
# 383 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 385 "data/maps/Route2_House/scripts.pory"
	closemessage
# 386 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 387 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 398 "data/maps/Route2_House/scripts.pory"
	closemessage
# 399 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 400 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 401 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 402 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 403 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 404 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 408 "data/maps/Route2_House/scripts.pory"
	closemessage
# 409 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 410 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 411 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 412 "data/maps/Route2_House/scripts.pory"
	closemessage
# 413 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 414 "data/maps/Route2_House/scripts.pory"
	waitse
# 415 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 417 "data/maps/Route2_House/scripts.pory"
	closemessage
# 418 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 419 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 420 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_ALL
# 421 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 422 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 423 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 424 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 425 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 426 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 429 "data/maps/Route2_House/scripts.pory"
	closemessage
# 430 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 431 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 435 "data/maps/Route2_House/scripts.pory"
	closemessage
# 436 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 437 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 438 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 439 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 440 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 441 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 442 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 443 "data/maps/Route2_House/scripts.pory"
	delay 16
# 444 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 445 "data/maps/Route2_House/scripts.pory"
	delay 4
# 446 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 447 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 448 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 449 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 450 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 451 "data/maps/Route2_House/scripts.pory"
	waitse
# 452 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 453 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 454 "data/maps/Route2_House/scripts.pory"
	waitse
# 455 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 456 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 457 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 458 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 459 "data/maps/Route2_House/scripts.pory"
	delay 30
# 460 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 463 "data/maps/Route2_House/scripts.pory"
	closemessage
# 464 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 465 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 466 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 467 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 468 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 469 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 470 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 471 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 472 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 473 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 474 "data/maps/Route2_House/scripts.pory"
	fwdtime 13, 40
# 475 "data/maps/Route2_House/scripts.pory"
	release
	end


# 479 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 480 "data/maps/Route2_House/scripts.pory"
	walk_right
# 481 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 484 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 485 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 486 "data/maps/Route2_House/scripts.pory"
	walk_up
# 487 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 489 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 490 "data/maps/Route2_House/scripts.pory"
	walk_left
# 490 "data/maps/Route2_House/scripts.pory"
	walk_left
# 491 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 493 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 494 "data/maps/Route2_House/scripts.pory"
	walk_right
# 495 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 497 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 498 "data/maps/Route2_House/scripts.pory"
	walk_down
# 498 "data/maps/Route2_House/scripts.pory"
	walk_down
# 498 "data/maps/Route2_House/scripts.pory"
	walk_down
# 498 "data/maps/Route2_House/scripts.pory"
	walk_down
# 498 "data/maps/Route2_House/scripts.pory"
	walk_down
# 499 "data/maps/Route2_House/scripts.pory"
	walk_right
# 499 "data/maps/Route2_House/scripts.pory"
	walk_right
# 500 "data/maps/Route2_House/scripts.pory"
	walk_down
# 500 "data/maps/Route2_House/scripts.pory"
	walk_down
# 500 "data/maps/Route2_House/scripts.pory"
	walk_down
# 501 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 503 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 504 "data/maps/Route2_House/scripts.pory"
	walk_down
# 504 "data/maps/Route2_House/scripts.pory"
	walk_down
# 504 "data/maps/Route2_House/scripts.pory"
	walk_down
# 505 "data/maps/Route2_House/scripts.pory"
	walk_right
# 505 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 508 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 509 "data/maps/Route2_House/scripts.pory"
	walk_right
# 509 "data/maps/Route2_House/scripts.pory"
	walk_right
# 509 "data/maps/Route2_House/scripts.pory"
	walk_right
# 509 "data/maps/Route2_House/scripts.pory"
	walk_right
# 510 "data/maps/Route2_House/scripts.pory"
	walk_down
# 510 "data/maps/Route2_House/scripts.pory"
	walk_down
# 510 "data/maps/Route2_House/scripts.pory"
	walk_down
# 511 "data/maps/Route2_House/scripts.pory"
	walk_right
# 511 "data/maps/Route2_House/scripts.pory"
	walk_right
# 512 "data/maps/Route2_House/scripts.pory"
	walk_down
# 512 "data/maps/Route2_House/scripts.pory"
	walk_down
# 513 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 516 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 517 "data/maps/Route2_House/scripts.pory"
	walk_down
# 518 "data/maps/Route2_House/scripts.pory"
	walk_right
# 518 "data/maps/Route2_House/scripts.pory"
	walk_right
# 518 "data/maps/Route2_House/scripts.pory"
	walk_right
# 518 "data/maps/Route2_House/scripts.pory"
	walk_right
# 519 "data/maps/Route2_House/scripts.pory"
	walk_down
# 519 "data/maps/Route2_House/scripts.pory"
	walk_down
# 519 "data/maps/Route2_House/scripts.pory"
	walk_down
# 520 "data/maps/Route2_House/scripts.pory"
	walk_right
# 520 "data/maps/Route2_House/scripts.pory"
	walk_right
# 521 "data/maps/Route2_House/scripts.pory"
	walk_down
# 521 "data/maps/Route2_House/scripts.pory"
	walk_down
# 522 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 525 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 526 "data/maps/Route2_House/scripts.pory"
	walk_up
# 526 "data/maps/Route2_House/scripts.pory"
	walk_up
# 526 "data/maps/Route2_House/scripts.pory"
	walk_up
# 527 "data/maps/Route2_House/scripts.pory"
	walk_left
# 527 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 530 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 531 "data/maps/Route2_House/scripts.pory"
	walk_left
# 531 "data/maps/Route2_House/scripts.pory"
	walk_left
# 532 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 536 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 540 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoWalksToListenToMitsuru
# 541 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 542 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 543 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromAkiToCenter
# 544 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 545 "data/maps/Route2_House/scripts.pory"
	delay 8
# 546 "data/maps/Route2_House/scripts.pory"
	applymovement 5, facedown
# 547 "data/maps/Route2_House/scripts.pory"
	delay 60
# 548 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
# 557 "data/maps/Route2_House/scripts.pory"
	closemessage
# 558 "data/maps/Route2_House/scripts.pory"
	delay 50
# 559 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 560 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_1
# 573 "data/maps/Route2_House/scripts.pory"
	closemessage
# 574 "data/maps/Route2_House/scripts.pory"
	delay 40
# 575 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_2
# 577 "data/maps/Route2_House/scripts.pory"
	closemessage
# 578 "data/maps/Route2_House/scripts.pory"
	delay 30
# 579 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 580 "data/maps/Route2_House/scripts.pory"
	delay 10
# 581 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emotepensive
# 582 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 583 "data/maps/Route2_House/scripts.pory"
	delay 60
# 584 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3
# 591 "data/maps/Route2_House/scripts.pory"
	closemessage
# 592 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
# 593 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceup
# 594 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansUpToClock
# 595 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 596 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotepensive
# 597 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 598 "data/maps/Route2_House/scripts.pory"
	delay 90
# 599 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 600 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesBackToCenterOfTheRoom
# 601 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 602 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_RG_SS_ANNE, TRUE
# 603 "data/maps/Route2_House/scripts.pory"
	delay 60
# 604 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_4
# 607 "data/maps/Route2_House/scripts.pory"
	closemessage
# 608 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_StayingTheNight
	return


# 611 "data/maps/Route2_House/scripts.pory"
CameraFromAkiToCenter:
# 612 "data/maps/Route2_House/scripts.pory"
	walk_up
# 612 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 614 "data/maps/Route2_House/scripts.pory"
AkihikoWalksToListenToMitsuru:
# 615 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 615 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 615 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 615 "data/maps/Route2_House/scripts.pory"
	player_run_up
# 616 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 616 "data/maps/Route2_House/scripts.pory"
	player_run_left
# 617 "data/maps/Route2_House/scripts.pory"
	walk_up
# 617 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 620 "data/maps/Route2_House/scripts.pory"
CameraPansUpToClock:
# 621 "data/maps/Route2_House/scripts.pory"
	walk_up
# 621 "data/maps/Route2_House/scripts.pory"
	walk_up
	step_end

# 624 "data/maps/Route2_House/scripts.pory"
CameraGoesBackToCenterOfTheRoom:
# 625 "data/maps/Route2_House/scripts.pory"
	walk_down
# 625 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

Route2_House_Eventscript_StayingTheNight::
# 629 "data/maps/Route2_House/scripts.pory"
	delay 60
# 630 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAtTheBed
# 631 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 632 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_0
# 633 "data/maps/Route2_House/scripts.pory"
	closemessage
# 634 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtTheBed
# 635 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 636 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_1
# 640 "data/maps/Route2_House/scripts.pory"
	closemessage
# 641 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 642 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AKihikoRemembersCampGears
# 643 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 644 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_2
# 645 "data/maps/Route2_House/scripts.pory"
	closemessage
# 646 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 647 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSweat
# 648 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 649 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_3
# 651 "data/maps/Route2_House/scripts.pory"
	closemessage
# 652 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 653 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoBickering
# 654 "data/maps/Route2_House/scripts.pory"
	delay 10
# 655 "data/maps/Route2_House/scripts.pory"
	playse SE_FAILURE
# 656 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroBickering
# 657 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 658 "data/maps/Route2_House/scripts.pory"
	lock
# 659 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 660 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 661 "data/maps/Route2_House/scripts.pory"
	release
# 662 "data/maps/Route2_House/scripts.pory"
	delay 30
# 663 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceright
# 664 "data/maps/Route2_House/scripts.pory"
	delay 10
# 665 "data/maps/Route2_House/scripts.pory"
	applymovement 6, jumpinplaceleft
# 666 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 667 "data/maps/Route2_House/scripts.pory"
	lock
# 668 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 669 "data/maps/Route2_House/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 670 "data/maps/Route2_House/scripts.pory"
	release
# 671 "data/maps/Route2_House/scripts.pory"
	delay 30
# 672 "data/maps/Route2_House/scripts.pory"
	applymovement 1, shakehorizontal
# 673 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 674 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_4
# 675 "data/maps/Route2_House/scripts.pory"
	playse SE_SHINY
# 676 "data/maps/Route2_House/scripts.pory"
	applymovement 1, emotemusic
# 677 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 678 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_5
# 679 "data/maps/Route2_House/scripts.pory"
	closemessage
# 680 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 681 "data/maps/Route2_House/scripts.pory"
	delay 10
# 682 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 683 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 684 "data/maps/Route2_House/scripts.pory"
	delay 60
# 685 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_StayingTheNight_Text_6
# 688 "data/maps/Route2_House/scripts.pory"
	closemessage
# 689 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraSlowlyPansUpFadeScreen
# 690 "data/maps/Route2_House/scripts.pory"
	delay 30
# 691 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 692 "data/maps/Route2_House/scripts.pory"
	delay 80
# 693 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 694 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 697 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAtTheBed:
# 698 "data/maps/Route2_House/scripts.pory"
	face_left
# 699 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 700 "data/maps/Route2_House/scripts.pory"
	delay_16
# 701 "data/maps/Route2_House/scripts.pory"
	delay_16
# 702 "data/maps/Route2_House/scripts.pory"
	delay_16
# 703 "data/maps/Route2_House/scripts.pory"
	delay_16
# 704 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 707 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtTheBed:
# 708 "data/maps/Route2_House/scripts.pory"
	face_left
# 709 "data/maps/Route2_House/scripts.pory"
	delay_16
# 710 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 711 "data/maps/Route2_House/scripts.pory"
	delay_16
# 712 "data/maps/Route2_House/scripts.pory"
	delay_16
# 713 "data/maps/Route2_House/scripts.pory"
	delay_16
# 714 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 717 "data/maps/Route2_House/scripts.pory"
AKihikoRemembersCampGears:
# 718 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 719 "data/maps/Route2_House/scripts.pory"
	face_right
	step_end

# 722 "data/maps/Route2_House/scripts.pory"
ShinjiroSweat:
# 723 "data/maps/Route2_House/scripts.pory"
	emote_sweat
# 724 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 727 "data/maps/Route2_House/scripts.pory"
jumpinplaceleft:
# 728 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
	step_end

# 731 "data/maps/Route2_House/scripts.pory"
AkihikoBickering:
# 732 "data/maps/Route2_House/scripts.pory"
	jump_in_place_right
# 733 "data/maps/Route2_House/scripts.pory"
	emote_upset
# 734 "data/maps/Route2_House/scripts.pory"
	delay_16
# 735 "data/maps/Route2_House/scripts.pory"
	delay_16
# 736 "data/maps/Route2_House/scripts.pory"
	shake_horizontal
# 737 "data/maps/Route2_House/scripts.pory"
	emote_x
# 738 "data/maps/Route2_House/scripts.pory"
	delay_16
# 739 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 742 "data/maps/Route2_House/scripts.pory"
ShinjiroBickering:
# 743 "data/maps/Route2_House/scripts.pory"
	jump_in_place_left
# 744 "data/maps/Route2_House/scripts.pory"
	emote_x
# 745 "data/maps/Route2_House/scripts.pory"
	delay_16
# 746 "data/maps/Route2_House/scripts.pory"
	delay_16
# 747 "data/maps/Route2_House/scripts.pory"
	shake_vertical
# 748 "data/maps/Route2_House/scripts.pory"
	emote_angry
# 749 "data/maps/Route2_House/scripts.pory"
	delay_16
# 750 "data/maps/Route2_House/scripts.pory"
	delay_16
	step_end

# 753 "data/maps/Route2_House/scripts.pory"
emotemusic:
# 754 "data/maps/Route2_House/scripts.pory"
	emote_music
	step_end

# 756 "data/maps/Route2_House/scripts.pory"
CameraSlowlyPansUpFadeScreen:
# 757 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 757 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
# 757 "data/maps/Route2_House/scripts.pory"
	walk_slow_up
	step_end

TakeARest::
# 761 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 762 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
# 770 "data/maps/Route2_House/scripts.pory"
	closemessage
	end

TakeARest_2:
# 763 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 764 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 765 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 766 "data/maps/Route2_House/scripts.pory"
	waitse
# 767 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 75 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 76 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 105 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 108 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies for this is the best shelter I\n"
	.string "could provide in this situation.\p"
	.string "This house is of my butler's grandson,\n"
	.string "who's currently traveling the region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 119 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 126 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 130 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 138 "data/maps/Route2_House/scripts.pory"
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
# 155 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 160 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 166 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 173 "data/maps/Route2_House/scripts.pory"
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
# 190 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 199 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 204 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 212 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 294 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 301 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 314 "data/maps/Route2_House/scripts.pory"
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
# 346 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 355 "data/maps/Route2_House/scripts.pory"
	.string "Inteleon's looking at you judgingly.\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 366 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 375 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 383 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 388 "data/maps/Route2_House/scripts.pory"
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
# 401 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 404 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 411 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 415 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 426 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 432 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "We'll be having 3-vs-3 Pokémon battles\n"
	.string "so plan your party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 460 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 548 "data/maps/Route2_House/scripts.pory"
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
# 560 "data/maps/Route2_House/scripts.pory"
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
# 575 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}In any case, I already told you the goal\n"
	.string "of those men.\p"
	.string "You're free to not believe me. We simply\n"
	.string "can just part ways right here.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_3:
# 584 "data/maps/Route2_House/scripts.pory"
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
# 604 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}For now, I suggest we rest for the\n"
	.string "night. It's late and we're all tired from\l"
	.string "the battles.\p"
	.string "We'll depart early tomorrow morning so\n"
	.string "you two may want to stay here.$"

Route2_House_Eventscript_StayingTheNight_Text_0:
# 632 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Uhhh you sure about that? There's only\n"
	.string "one bed.$"

Route2_House_Eventscript_StayingTheNight_Text_1:
# 636 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}M-my apology, it slipped my mind that\n"
	.string "this house didn't have guest rooms.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You two can take the bed. I'm okay with\n"
	.string "the floor.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}For Arceus's sake, Princess. Aki's\n"
	.string "kidding.\p"
	.string "Just sleep on the bed, we have our own\n"
	.string "sleeping bags.$"

Route2_House_Eventscript_StayingTheNight_Text_2:
# 644 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh, right! Kurosawa-san gave us the\n"
	.string "Camping Gears.$"

Route2_House_Eventscript_StayingTheNight_Text_3:
# 649 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Dumbass, you weren't kidding!?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Stop calling me dumb!$"

Route2_House_Eventscript_StayingTheNight_Text_4:
# 674 "data/maps/Route2_House/scripts.pory"
	.string "Pft-$"

Route2_House_Eventscript_StayingTheNight_Text_5:
# 678 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_HAPPY}Hehehe.$"

Route2_House_Eventscript_StayingTheNight_Text_6:
# 685 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hehe.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hmph.$"

TakeARest_Text_0:
# 761 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"
