Route2_House_MapScripts::
# 6 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 27 "data/maps/Route2_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 27
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_ge Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 18 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_eq Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 22 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 32
	goto_if_gt Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 9 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 8
# 10 "data/maps/Route2_House/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 19 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 6, 6, 7
# 20 "data/maps/Route2_House/scripts.pory"
	setobjectxyperm 5, 1, 8
	goto Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route2_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 23 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
	return

Route2_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnWarp27
# 4 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnWarp32
	.2byte 0

Route2_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 27, Route2_House_Eventscript_AkihikoOnFrame27
# 29 "data/maps/Route2_House/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 32, Route2_House_Eventscript_AkihikoOnFrame32
	.2byte 0


Route2_House_Eventscript_AkihikoOnWarp27::
# 34 "data/maps/Route2_House/scripts.pory"
	applymovement 6, invisible
	return


Route2_House_Eventscript_AkihikoOnWarp32::
# 38 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 39 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 40 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceright
	return


Route2_House_Eventscript_AkihikoOnFrame27::
# 44 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiWakingUp
	return


Route2_House_Eventscript_AkihikoOnFrame32::
# 48 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru
	return


Route2_House_Eventscript_AkiShinjiWakingUp::
# 52 "data/maps/Route2_House/scripts.pory"
	lock
# 53 "data/maps/Route2_House/scripts.pory"
	delay 20
# 54 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheTrio
# 55 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route2_House/scripts.pory"
	delay 30
# 57 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 58 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_1
# 59 "data/maps/Route2_House/scripts.pory"
	closemessage
# 60 "data/maps/Route2_House/scripts.pory"
	delay 30
# 61 "data/maps/Route2_House/scripts.pory"
	applymovement 2, shakehorizontal
# 62 "data/maps/Route2_House/scripts.pory"
	delay 4
# 63 "data/maps/Route2_House/scripts.pory"
	applymovement 3, shakehorizontal
# 64 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route2_House/scripts.pory"
	delay 20
# 66 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 67 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, BackToSprite
# 68 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route2_House/scripts.pory"
	applymovement 2, invisible
# 70 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 71 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiWakesUp
# 73 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 74 "data/maps/Route2_House/scripts.pory"
	delay 4
# 75 "data/maps/Route2_House/scripts.pory"
	applymovement 3, invisible
# 76 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 77 "data/maps/Route2_House/scripts.pory"
	applymovement 6, AkiShinjiWakesUp
# 78 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route2_House/scripts.pory"
	delay 30
# 80 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoLookingAround
# 81 "data/maps/Route2_House/scripts.pory"
	delay 8
# 82 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroLookingAround
# 83 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route2_House/scripts.pory"
	delay 30
# 85 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, jumpinplaceup
# 86 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_2
# 89 "data/maps/Route2_House/scripts.pory"
	setspeaker Route2_House_Eventscript_AkiShinjiWakingUp_Text_0
# 90 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiWakingUp_Text_3
# 93 "data/maps/Route2_House/scripts.pory"
	closemessage
# 94 "data/maps/Route2_House/scripts.pory"
	goto Route2_House_Eventscript_TriosFirstGreeting
# 95 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_TriosFirstGreeting::
# 99 "data/maps/Route2_House/scripts.pory"
	lock
# 100 "data/maps/Route2_House/scripts.pory"
	delay 30
# 101 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_0
# 104 "data/maps/Route2_House/scripts.pory"
	closemessage
# 105 "data/maps/Route2_House/scripts.pory"
	delay 30
# 106 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 107 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_1
# 109 "data/maps/Route2_House/scripts.pory"
	closemessage
# 110 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 111 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_2
# 115 "data/maps/Route2_House/scripts.pory"
	delay 20
# 116 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 117 "data/maps/Route2_House/scripts.pory"
	delay 8
# 118 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 119 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_3
# 133 "data/maps/Route2_House/scripts.pory"
	closemessage
# 134 "data/maps/Route2_House/scripts.pory"
	delay 20
# 135 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 139 "data/maps/Route2_House/scripts.pory"
	closemessage
# 140 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 141 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 142 "data/maps/Route2_House/scripts.pory"
	delay 8
# 143 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 144 "data/maps/Route2_House/scripts.pory"
	closemessage
# 145 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Route2_House/scripts.pory"
	waitse
# 147 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 148 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 149 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 156 "data/maps/Route2_House/scripts.pory"
	closemessage
# 157 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 158 "data/maps/Route2_House/scripts.pory"
	delay 16
# 159 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 160 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route2_House/scripts.pory"
	delay 60
# 162 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 163 "data/maps/Route2_House/scripts.pory"
	delay 16
# 164 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 165 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 170 "data/maps/Route2_House/scripts.pory"
	closemessage
# 171 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 172 "data/maps/Route2_House/scripts.pory"
	waitse
# 173 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 174 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 176 "data/maps/Route2_House/scripts.pory"
	closemessage
# 177 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 178 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 179 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 180 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 182 "data/maps/Route2_House/scripts.pory"
	closemessage
# 183 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 184 "data/maps/Route2_House/scripts.pory"
	delay 8
# 185 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 186 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route2_House/scripts.pory"
	delay 60
# 188 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 189 "data/maps/Route2_House/scripts.pory"
	closemessage
# 190 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 191 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 193 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 194 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 195 "data/maps/Route2_House/scripts.pory"
	release
	end


# 199 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 200 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 202 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 203 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 203 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 203 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 203 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 206 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 207 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 208 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 211 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 212 "data/maps/Route2_House/scripts.pory"
	set_visible
# 213 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 216 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 217 "data/maps/Route2_House/scripts.pory"
	face_left
# 218 "data/maps/Route2_House/scripts.pory"
	delay_16
# 219 "data/maps/Route2_House/scripts.pory"
	delay_16
# 220 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 221 "data/maps/Route2_House/scripts.pory"
	delay_16
# 222 "data/maps/Route2_House/scripts.pory"
	face_right
# 223 "data/maps/Route2_House/scripts.pory"
	delay_16
# 224 "data/maps/Route2_House/scripts.pory"
	delay_16
# 225 "data/maps/Route2_House/scripts.pory"
	delay_16
# 226 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 230 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 231 "data/maps/Route2_House/scripts.pory"
	face_right
# 232 "data/maps/Route2_House/scripts.pory"
	delay_16
# 233 "data/maps/Route2_House/scripts.pory"
	delay_16
# 234 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 235 "data/maps/Route2_House/scripts.pory"
	face_up
# 236 "data/maps/Route2_House/scripts.pory"
	delay_16
# 237 "data/maps/Route2_House/scripts.pory"
	delay_16
# 238 "data/maps/Route2_House/scripts.pory"
	face_left
# 239 "data/maps/Route2_House/scripts.pory"
	delay_16
# 240 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 243 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 244 "data/maps/Route2_House/scripts.pory"
	walk_left
# 245 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 248 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 249 "data/maps/Route2_House/scripts.pory"
	walk_right
# 250 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 253 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 254 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 255 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 258 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 259 "data/maps/Route2_House/scripts.pory"
	walk_left
# 260 "data/maps/Route2_House/scripts.pory"
	walk_up
# 261 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 265 "data/maps/Route2_House/scripts.pory"
	lock
# 266 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 267 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 273 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 281 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Mitsuru_2:
# 268 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 271 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 274 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 275 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 277 "data/maps/Route2_House/scripts.pory"
	closemessage
# 278 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 279 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 286 "data/maps/Route2_House/scripts.pory"
	lock
# 287 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 288 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 300 "data/maps/Route2_House/scripts.pory"
	closemessage
# 301 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 302 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 304 "data/maps/Route2_House/scripts.pory"
	release
	return


# 307 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 308 "data/maps/Route2_House/scripts.pory"
	walk_down
# 309 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 310 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 311 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 311 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 315 "data/maps/Route2_House/scripts.pory"
	lock
# 316 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 317 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 318 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 319 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 320 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 322 "data/maps/Route2_House/scripts.pory"
	closemessage
# 323 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Inteleon::
# 327 "data/maps/Route2_House/scripts.pory"
	lock
# 328 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 329 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 331 "data/maps/Route2_House/scripts.pory"
	closemessage
# 332 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 333 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToShinjiro::
# 337 "data/maps/Route2_House/scripts.pory"
	lock
# 338 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 339 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 340 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 341 "data/maps/Route2_House/scripts.pory"
	closemessage
# 342 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToMitsuru::
# 346 "data/maps/Route2_House/scripts.pory"
	lock
# 347 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 348 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 349 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 350 "data/maps/Route2_House/scripts.pory"
	closemessage
# 351 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 355 "data/maps/Route2_House/scripts.pory"
	lock
# 356 "data/maps/Route2_House/scripts.pory"
	delay 30
# 357 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 359 "data/maps/Route2_House/scripts.pory"
	closemessage
# 360 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 361 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 362 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 372 "data/maps/Route2_House/scripts.pory"
	closemessage
# 373 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 374 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 375 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 376 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 377 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 378 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 382 "data/maps/Route2_House/scripts.pory"
	closemessage
# 383 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 384 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 386 "data/maps/Route2_House/scripts.pory"
	closemessage
# 387 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 388 "data/maps/Route2_House/scripts.pory"
	waitse
# 389 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 390 "data/maps/Route2_House/scripts.pory"
	closemessage
# 391 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 392 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 393 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 394 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 395 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 396 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 397 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 400 "data/maps/Route2_House/scripts.pory"
	closemessage
# 401 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 402 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 403 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 406 "data/maps/Route2_House/scripts.pory"
	closemessage
# 407 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 408 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 409 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 410 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 411 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 412 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 413 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 414 "data/maps/Route2_House/scripts.pory"
	delay 16
# 415 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 416 "data/maps/Route2_House/scripts.pory"
	delay 4
# 417 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 418 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 419 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 420 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 421 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 422 "data/maps/Route2_House/scripts.pory"
	waitse
# 423 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 424 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 425 "data/maps/Route2_House/scripts.pory"
	waitse
# 426 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 427 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 428 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 429 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route2_House/scripts.pory"
	delay 30
# 431 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 434 "data/maps/Route2_House/scripts.pory"
	closemessage
# 435 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 436 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 437 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 438 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 439 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 440 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 441 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 442 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 443 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 444 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 445 "data/maps/Route2_House/scripts.pory"
	release
	end


# 449 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 450 "data/maps/Route2_House/scripts.pory"
	walk_right
# 451 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 454 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 455 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 456 "data/maps/Route2_House/scripts.pory"
	walk_up
# 457 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 459 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 460 "data/maps/Route2_House/scripts.pory"
	walk_left
# 460 "data/maps/Route2_House/scripts.pory"
	walk_left
# 461 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 463 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 464 "data/maps/Route2_House/scripts.pory"
	walk_right
# 465 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 467 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 468 "data/maps/Route2_House/scripts.pory"
	walk_down
# 468 "data/maps/Route2_House/scripts.pory"
	walk_down
# 468 "data/maps/Route2_House/scripts.pory"
	walk_down
# 468 "data/maps/Route2_House/scripts.pory"
	walk_down
# 468 "data/maps/Route2_House/scripts.pory"
	walk_down
# 469 "data/maps/Route2_House/scripts.pory"
	walk_right
# 469 "data/maps/Route2_House/scripts.pory"
	walk_right
# 470 "data/maps/Route2_House/scripts.pory"
	walk_down
# 470 "data/maps/Route2_House/scripts.pory"
	walk_down
# 471 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 473 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 474 "data/maps/Route2_House/scripts.pory"
	walk_down
# 474 "data/maps/Route2_House/scripts.pory"
	walk_down
# 474 "data/maps/Route2_House/scripts.pory"
	walk_down
# 475 "data/maps/Route2_House/scripts.pory"
	walk_right
# 475 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 478 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
# 479 "data/maps/Route2_House/scripts.pory"
	walk_right
# 479 "data/maps/Route2_House/scripts.pory"
	walk_right
# 479 "data/maps/Route2_House/scripts.pory"
	walk_right
# 479 "data/maps/Route2_House/scripts.pory"
	walk_right
# 480 "data/maps/Route2_House/scripts.pory"
	walk_down
# 480 "data/maps/Route2_House/scripts.pory"
	walk_down
# 480 "data/maps/Route2_House/scripts.pory"
	walk_down
# 481 "data/maps/Route2_House/scripts.pory"
	walk_right
# 481 "data/maps/Route2_House/scripts.pory"
	walk_right
# 482 "data/maps/Route2_House/scripts.pory"
	walk_down
# 483 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 486 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 487 "data/maps/Route2_House/scripts.pory"
	walk_down
# 488 "data/maps/Route2_House/scripts.pory"
	walk_right
# 488 "data/maps/Route2_House/scripts.pory"
	walk_right
# 488 "data/maps/Route2_House/scripts.pory"
	walk_right
# 488 "data/maps/Route2_House/scripts.pory"
	walk_right
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
# 492 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 495 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 496 "data/maps/Route2_House/scripts.pory"
	walk_up
# 496 "data/maps/Route2_House/scripts.pory"
	walk_up
# 496 "data/maps/Route2_House/scripts.pory"
	walk_up
# 497 "data/maps/Route2_House/scripts.pory"
	walk_left
# 497 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 500 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 501 "data/maps/Route2_House/scripts.pory"
	walk_left
# 501 "data/maps/Route2_House/scripts.pory"
	walk_left
# 502 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

TakeARest::
# 506 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0
# 507 "data/maps/Route2_House/scripts.pory"
	closemessage
# 508 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
	end

TakeARest_2:
# 509 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 510 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 511 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 512 "data/maps/Route2_House/scripts.pory"
	waitse
# 513 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TakeARest_1


Route2_House_Eventscript_AkiShinjiWakingUp_Text_0:
# 57 "data/maps/Route2_House/scripts.pory"
	.string "???????$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_1:
# 58 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_2:
# 87 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wh-Where are we?\p"
	.string "And who are you??$"

Route2_House_Eventscript_AkiShinjiWakingUp_Text_3:
# 90 "data/maps/Route2_House/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Apologies for this is the best shelter I\n"
	.string "could provide in this situation.\p"
	.string "This house is of my butler's grandson,\n"
	.string "who's currently traveling the region.\p"
	.string "We're still in Route 2. Worry not, we're\n"
	.string "safe here.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_0:
# 101 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}As for my name, I am Mitsuru Kirijo.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}-!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Kirijo-?!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_1:
# 108 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Uhhh, who? The name sounds familiar.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_2:
# 112 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}-!\p"
	.string "Dumbass! That's the billionaire group\n"
	.string "who donated us our PCs!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oooh...$"

Route2_House_Eventscript_TriosFirstGreeting_Text_3:
# 120 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}So? What does a billionaire girl like you\n"
	.string "want with us?\p"
	.string "For whatever it is, I'm not interested. I\n"
	.string "only want to train and become a\l"
	.string "stronger trainer.\p"
	.string "I could've dealed with the Drowzee\n"
	.string "earlier if I were-\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wait- Are you with the men in black who\n"
	.string "tried to kidnap us earlier!?\p"
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
# 135 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 143 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 150 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I believe you have a reason for wanting\n"
	.string "to get stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I have clues of where to find those men\n"
	.string "in black and what they are doing.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And earlier I saw your battle with them.\n"
	.string "You have great potential.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}If you'll join me... I promise it'll be a\n"
	.string "great challenge and I'll also share what\l"
	.string "I know about those men with you.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 166 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_8:
# 175 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 180 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 188 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 268 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 275 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 288 "data/maps/Route2_House/scripts.pory"
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
# 320 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 329 "data/maps/Route2_House/scripts.pory"
	.string "Inteleon's looking at you judgingly.\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 340 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 349 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 357 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 362 "data/maps/Route2_House/scripts.pory"
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
# 375 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro some Pokéballs\n"
	.string "and a modern device.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 378 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 385 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 389 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received 20 Pokéballs and a\n"
	.string "Pokédex.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 397 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 403 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "We'll be having 3-vs-3 Pokémon battles\n"
	.string "so plan your party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 431 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

TakeARest_Text_0:
# 506 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"
