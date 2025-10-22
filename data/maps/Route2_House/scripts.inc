Route2_House_MapScripts::
# 7 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 33 "data/maps/Route2_House/scripts.pory"
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
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
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

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 27 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 28 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm LOCALID_PLAYER, 4, 7
# 29 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
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
# 34 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnFrame27
# 35 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnFrame32
# 36 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_House_Eventscript_AkihikoOnFrame38
	.2byte 0


Route2_House_Eventscript_AkihikoOnWarp27::
# 41 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 45 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 46 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 47 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnWarp38::
# 51 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 52 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 56 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 60 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 64 "data/maps/Route2_House/scripts.pory"
	lock
# 65 "data/maps/Route2_House/scripts.pory"
	delay 20
# 66 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 67 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route2_House/scripts.pory"
	delay 30
# 69 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 70 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 71 "data/maps/Route2_House/scripts.pory"
	closemessage
# 72 "data/maps/Route2_House/scripts.pory"
	delay 30
# 73 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 74 "data/maps/Route2_House/scripts.pory"
	delay 4
# 75 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 76 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route2_House/scripts.pory"
	delay 20
# 78 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 79 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 80 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 82 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 83 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 85 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 86 "data/maps/Route2_House/scripts.pory"
	delay 4
# 87 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 88 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 89 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 90 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route2_House/scripts.pory"
	delay 30
# 92 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 93 "data/maps/Route2_House/scripts.pory"
	delay 8
# 94 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 95 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route2_House/scripts.pory"
	delay 30
# 97 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 98 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 101 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 102 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 105 "data/maps/Route2_House/scripts.pory"
	closemessage
# 106 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 107 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 111 "data/maps/Route2_House/scripts.pory"
	lock
# 112 "data/maps/Route2_House/scripts.pory"
	delay 30
# 113 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 116 "data/maps/Route2_House/scripts.pory"
	closemessage
# 117 "data/maps/Route2_House/scripts.pory"
	delay 30
# 118 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 119 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 121 "data/maps/Route2_House/scripts.pory"
	closemessage
# 122 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 123 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 127 "data/maps/Route2_House/scripts.pory"
	delay 20
# 128 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 129 "data/maps/Route2_House/scripts.pory"
	delay 8
# 130 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 131 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 145 "data/maps/Route2_House/scripts.pory"
	closemessage
# 146 "data/maps/Route2_House/scripts.pory"
	delay 20
# 147 "data/maps/Route2_House/scripts.pory"
	applymovement 1, faceleft
# 148 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 149 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 151 "data/maps/Route2_House/scripts.pory"
	closemessage
# 152 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 153 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 156 "data/maps/Route2_House/scripts.pory"
	closemessage
# 157 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 158 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 159 "data/maps/Route2_House/scripts.pory"
	delay 8
# 160 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 161 "data/maps/Route2_House/scripts.pory"
	closemessage
# 162 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 163 "data/maps/Route2_House/scripts.pory"
	waitse
# 164 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 165 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 166 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 174 "data/maps/Route2_House/scripts.pory"
	closemessage
# 175 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 176 "data/maps/Route2_House/scripts.pory"
	delay 16
# 177 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 178 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route2_House/scripts.pory"
	delay 60
# 180 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 181 "data/maps/Route2_House/scripts.pory"
	delay 16
# 182 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 183 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 188 "data/maps/Route2_House/scripts.pory"
	closemessage
# 189 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 190 "data/maps/Route2_House/scripts.pory"
	waitse
# 191 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 192 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 194 "data/maps/Route2_House/scripts.pory"
	closemessage
# 195 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 196 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 197 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 200 "data/maps/Route2_House/scripts.pory"
	closemessage
# 201 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 202 "data/maps/Route2_House/scripts.pory"
	delay 8
# 203 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 204 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route2_House/scripts.pory"
	delay 60
# 206 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 207 "data/maps/Route2_House/scripts.pory"
	closemessage
# 208 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 209 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 211 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 212 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 213 "data/maps/Route2_House/scripts.pory"
	release
	end


# 217 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 218 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 220 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 221 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 221 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 221 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 221 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 224 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 225 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 226 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 229 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 230 "data/maps/Route2_House/scripts.pory"
	set_visible
# 231 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 234 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 235 "data/maps/Route2_House/scripts.pory"
	face_left
# 236 "data/maps/Route2_House/scripts.pory"
	delay_16
# 237 "data/maps/Route2_House/scripts.pory"
	delay_16
# 238 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 239 "data/maps/Route2_House/scripts.pory"
	delay_16
# 240 "data/maps/Route2_House/scripts.pory"
	face_right
# 241 "data/maps/Route2_House/scripts.pory"
	delay_16
# 242 "data/maps/Route2_House/scripts.pory"
	delay_16
# 243 "data/maps/Route2_House/scripts.pory"
	delay_16
# 244 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 248 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 249 "data/maps/Route2_House/scripts.pory"
	face_right
# 250 "data/maps/Route2_House/scripts.pory"
	delay_16
# 251 "data/maps/Route2_House/scripts.pory"
	delay_16
# 252 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 253 "data/maps/Route2_House/scripts.pory"
	face_up
# 254 "data/maps/Route2_House/scripts.pory"
	delay_16
# 255 "data/maps/Route2_House/scripts.pory"
	delay_16
# 256 "data/maps/Route2_House/scripts.pory"
	face_left
# 257 "data/maps/Route2_House/scripts.pory"
	delay_16
# 258 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 261 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 262 "data/maps/Route2_House/scripts.pory"
	walk_left
# 263 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 266 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 267 "data/maps/Route2_House/scripts.pory"
	walk_right
# 268 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 271 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 272 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 273 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 276 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 277 "data/maps/Route2_House/scripts.pory"
	walk_left
# 278 "data/maps/Route2_House/scripts.pory"
	walk_up
# 279 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 283 "data/maps/Route2_House/scripts.pory"
	lock
# 284 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 285 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 291 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 299 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Mitsuru_2:
# 286 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 289 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 292 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 293 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 295 "data/maps/Route2_House/scripts.pory"
	closemessage
# 296 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 297 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 304 "data/maps/Route2_House/scripts.pory"
	lock
# 305 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 306 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 318 "data/maps/Route2_House/scripts.pory"
	closemessage
# 319 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 320 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 322 "data/maps/Route2_House/scripts.pory"
	release
	return


# 325 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 326 "data/maps/Route2_House/scripts.pory"
	walk_down
# 327 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 328 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 329 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 329 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 333 "data/maps/Route2_House/scripts.pory"
	lock
# 334 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 335 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 336 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 337 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 340 "data/maps/Route2_House/scripts.pory"
	closemessage
# 341 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Inteleon::
# 345 "data/maps/Route2_House/scripts.pory"
	lock
# 346 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 347 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 349 "data/maps/Route2_House/scripts.pory"
	closemessage
# 350 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 351 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToShinjiro::
# 355 "data/maps/Route2_House/scripts.pory"
	lock
# 356 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 357 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 358 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 359 "data/maps/Route2_House/scripts.pory"
	closemessage
# 360 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToMitsuru::
# 364 "data/maps/Route2_House/scripts.pory"
	lock
# 365 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 366 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 367 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 368 "data/maps/Route2_House/scripts.pory"
	closemessage
# 369 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 373 "data/maps/Route2_House/scripts.pory"
	lock
# 374 "data/maps/Route2_House/scripts.pory"
	delay 30
# 375 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 377 "data/maps/Route2_House/scripts.pory"
	closemessage
# 378 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 379 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 390 "data/maps/Route2_House/scripts.pory"
	closemessage
# 391 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 392 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 393 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 394 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 395 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 400 "data/maps/Route2_House/scripts.pory"
	closemessage
# 401 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 402 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 403 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 404 "data/maps/Route2_House/scripts.pory"
	closemessage
# 405 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 406 "data/maps/Route2_House/scripts.pory"
	waitse
# 407 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 409 "data/maps/Route2_House/scripts.pory"
	closemessage
# 410 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 411 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 412 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_ALL
# 413 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 414 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 415 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 416 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 417 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 418 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 421 "data/maps/Route2_House/scripts.pory"
	closemessage
# 422 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 423 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 427 "data/maps/Route2_House/scripts.pory"
	closemessage
# 428 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 429 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 430 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 431 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 432 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 433 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 434 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 435 "data/maps/Route2_House/scripts.pory"
	delay 16
# 436 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 437 "data/maps/Route2_House/scripts.pory"
	delay 4
# 438 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 439 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 440 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 441 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 442 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 443 "data/maps/Route2_House/scripts.pory"
	waitse
# 444 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 445 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 446 "data/maps/Route2_House/scripts.pory"
	waitse
# 447 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 448 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 449 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 450 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route2_House/scripts.pory"
	delay 30
# 452 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 455 "data/maps/Route2_House/scripts.pory"
	closemessage
# 456 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 457 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 459 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 460 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 461 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 462 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 463 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 464 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 465 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 466 "data/maps/Route2_House/scripts.pory"
	release
	end


# 470 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 471 "data/maps/Route2_House/scripts.pory"
	walk_right
# 472 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 475 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 476 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 477 "data/maps/Route2_House/scripts.pory"
	walk_up
# 478 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 480 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 481 "data/maps/Route2_House/scripts.pory"
	walk_left
# 481 "data/maps/Route2_House/scripts.pory"
	walk_left
# 482 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 484 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 485 "data/maps/Route2_House/scripts.pory"
	walk_right
# 486 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 488 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 489 "data/maps/Route2_House/scripts.pory"
	walk_down
# 489 "data/maps/Route2_House/scripts.pory"
	walk_down
# 489 "data/maps/Route2_House/scripts.pory"
	walk_down
# 489 "data/maps/Route2_House/scripts.pory"
	walk_down
# 489 "data/maps/Route2_House/scripts.pory"
	walk_down
# 490 "data/maps/Route2_House/scripts.pory"
	walk_right
# 490 "data/maps/Route2_House/scripts.pory"
	walk_right
# 491 "data/maps/Route2_House/scripts.pory"
	walk_down
# 491 "data/maps/Route2_House/scripts.pory"
	walk_down
# 491 "data/maps/Route2_House/scripts.pory"
	walk_down
# 492 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 494 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 495 "data/maps/Route2_House/scripts.pory"
	walk_down
# 495 "data/maps/Route2_House/scripts.pory"
	walk_down
# 495 "data/maps/Route2_House/scripts.pory"
	walk_down
# 496 "data/maps/Route2_House/scripts.pory"
	walk_right
# 496 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 499 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 500 "data/maps/Route2_House/scripts.pory"
	walk_right
# 500 "data/maps/Route2_House/scripts.pory"
	walk_right
# 500 "data/maps/Route2_House/scripts.pory"
	walk_right
# 500 "data/maps/Route2_House/scripts.pory"
	walk_right
# 501 "data/maps/Route2_House/scripts.pory"
	walk_down
# 501 "data/maps/Route2_House/scripts.pory"
	walk_down
# 501 "data/maps/Route2_House/scripts.pory"
	walk_down
# 502 "data/maps/Route2_House/scripts.pory"
	walk_right
# 502 "data/maps/Route2_House/scripts.pory"
	walk_right
# 503 "data/maps/Route2_House/scripts.pory"
	walk_down
# 503 "data/maps/Route2_House/scripts.pory"
	walk_down
# 504 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 507 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 508 "data/maps/Route2_House/scripts.pory"
	walk_down
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
CameraFromLowerHalfRoomBackToAkihiko:
# 517 "data/maps/Route2_House/scripts.pory"
	walk_up
# 517 "data/maps/Route2_House/scripts.pory"
	walk_up
# 517 "data/maps/Route2_House/scripts.pory"
	walk_up
# 518 "data/maps/Route2_House/scripts.pory"
	walk_left
# 518 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 521 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 522 "data/maps/Route2_House/scripts.pory"
	walk_left
# 522 "data/maps/Route2_House/scripts.pory"
	walk_left
# 523 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

Route2_House_Eventscript_AkihikoOnFrame38::
# 527 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_MitsuruExplainingObjectives
	return


Route2_House_Eventscript_MitsuruExplainingObjectives::
# 531 "data/maps/Route2_House/scripts.pory"
	delay 60
# 532 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0
	return


TakeARest::
# 537 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 538 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
# 546 "data/maps/Route2_House/scripts.pory"
	closemessage
	end

TakeARest_2:
# 539 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 540 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 541 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 542 "data/maps/Route2_House/scripts.pory"
	waitse
# 543 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 69 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 70 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 99 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 102 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies for this is the best shelter I\n"
	.string "could provide in this situation.\p"
	.string "This house is of my butler's grandson,\n"
	.string "who's currently traveling the region.\p"
	.string "We're still in Route 2. Worry not, it's\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 113 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 120 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 124 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 132 "data/maps/Route2_House/scripts.pory"
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
# 149 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 154 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 160 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 167 "data/maps/Route2_House/scripts.pory"
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
# 184 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 193 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 198 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 206 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 286 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 293 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 306 "data/maps/Route2_House/scripts.pory"
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
# 338 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 347 "data/maps/Route2_House/scripts.pory"
	.string "Inteleon's looking at you judgingly.\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 358 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 367 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 375 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 380 "data/maps/Route2_House/scripts.pory"
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
# 393 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 396 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 403 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 407 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 418 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 424 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "We'll be having 3-vs-3 Pokémon battles\n"
	.string "so plan your party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 452 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Route2_House_Eventscript_MitsuruExplainingObjectives_Text_0:
# 532 "data/maps/Route2_House/scripts.pory"
	.string "test$"

TakeARest_Text_0:
# 537 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"
