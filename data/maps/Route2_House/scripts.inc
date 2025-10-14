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
	applymovement 1, faceleft
# 136 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_4
# 139 "data/maps/Route2_House/scripts.pory"
	closemessage
# 140 "data/maps/Route2_House/scripts.pory"
	applymovement 1, facedown
# 141 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_5
# 144 "data/maps/Route2_House/scripts.pory"
	closemessage
# 145 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruPickingAkihiko
# 146 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 147 "data/maps/Route2_House/scripts.pory"
	delay 8
# 148 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_6
# 149 "data/maps/Route2_House/scripts.pory"
	closemessage
# 150 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 151 "data/maps/Route2_House/scripts.pory"
	waitse
# 152 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 153 "data/maps/Route2_House/scripts.pory"
	applymovement 6, emoteexclamation
# 154 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_7
# 162 "data/maps/Route2_House/scripts.pory"
	closemessage
# 163 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 164 "data/maps/Route2_House/scripts.pory"
	delay 16
# 165 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 166 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route2_House/scripts.pory"
	delay 60
# 168 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 169 "data/maps/Route2_House/scripts.pory"
	delay 16
# 170 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 171 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_8
# 176 "data/maps/Route2_House/scripts.pory"
	closemessage
# 177 "data/maps/Route2_House/scripts.pory"
	playse SE_PIN
# 178 "data/maps/Route2_House/scripts.pory"
	waitse
# 179 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroSurprisedAtAkihikoChoice
# 180 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 181 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_9
# 182 "data/maps/Route2_House/scripts.pory"
	closemessage
# 183 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroDisruptsAkiMitsu
# 184 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 185 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_10
# 188 "data/maps/Route2_House/scripts.pory"
	closemessage
# 189 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceup
# 190 "data/maps/Route2_House/scripts.pory"
	delay 8
# 191 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 192 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route2_House/scripts.pory"
	delay 60
# 194 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_TriosFirstGreeting_Text_11
# 195 "data/maps/Route2_House/scripts.pory"
	closemessage
# 196 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToPlace
# 197 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 28
# 199 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 200 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 201 "data/maps/Route2_House/scripts.pory"
	release
	end


# 205 "data/maps/Route2_House/scripts.pory"
jumpinplaceup:
# 206 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 208 "data/maps/Route2_House/scripts.pory"
CameraPansDownToTheTrio:
# 209 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 209 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 209 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
# 209 "data/maps/Route2_House/scripts.pory"
	walk_slow_down
	step_end

# 212 "data/maps/Route2_House/scripts.pory"
BackToSprite:
# 213 "data/maps/Route2_House/scripts.pory"
	walk_fast_left
# 214 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 217 "data/maps/Route2_House/scripts.pory"
AkiShinjiWakesUp:
# 218 "data/maps/Route2_House/scripts.pory"
	set_visible
# 219 "data/maps/Route2_House/scripts.pory"
	jump_in_place_up
	step_end

# 222 "data/maps/Route2_House/scripts.pory"
AkihikoLookingAround:
# 223 "data/maps/Route2_House/scripts.pory"
	face_left
# 224 "data/maps/Route2_House/scripts.pory"
	delay_16
# 225 "data/maps/Route2_House/scripts.pory"
	delay_16
# 226 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 227 "data/maps/Route2_House/scripts.pory"
	delay_16
# 228 "data/maps/Route2_House/scripts.pory"
	face_right
# 229 "data/maps/Route2_House/scripts.pory"
	delay_16
# 230 "data/maps/Route2_House/scripts.pory"
	delay_16
# 231 "data/maps/Route2_House/scripts.pory"
	delay_16
# 232 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 236 "data/maps/Route2_House/scripts.pory"
ShinjiroLookingAround:
# 237 "data/maps/Route2_House/scripts.pory"
	face_right
# 238 "data/maps/Route2_House/scripts.pory"
	delay_16
# 239 "data/maps/Route2_House/scripts.pory"
	delay_16
# 240 "data/maps/Route2_House/scripts.pory"
	emote_pensive
# 241 "data/maps/Route2_House/scripts.pory"
	face_up
# 242 "data/maps/Route2_House/scripts.pory"
	delay_16
# 243 "data/maps/Route2_House/scripts.pory"
	delay_16
# 244 "data/maps/Route2_House/scripts.pory"
	face_left
# 245 "data/maps/Route2_House/scripts.pory"
	delay_16
# 246 "data/maps/Route2_House/scripts.pory"
	face_up
	step_end

# 249 "data/maps/Route2_House/scripts.pory"
MitsuruPickingAkihiko:
# 250 "data/maps/Route2_House/scripts.pory"
	walk_left
# 251 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 254 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToPlace:
# 255 "data/maps/Route2_House/scripts.pory"
	walk_right
# 256 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 259 "data/maps/Route2_House/scripts.pory"
ShinjiroSurprisedAtAkihikoChoice:
# 260 "data/maps/Route2_House/scripts.pory"
	emote_exclamation_mark
# 261 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

# 264 "data/maps/Route2_House/scripts.pory"
ShinjiroDisruptsAkiMitsu:
# 265 "data/maps/Route2_House/scripts.pory"
	walk_left
# 266 "data/maps/Route2_House/scripts.pory"
	walk_up
# 267 "data/maps/Route2_House/scripts.pory"
	face_left
	step_end

Route2_House_Eventscript_Mitsuru::
# 271 "data/maps/Route2_House/scripts.pory"
	lock
# 272 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 273 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq Route2_House_Eventscript_Mitsuru_2
# 279 "data/maps/Route2_House/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq Route2_House_Eventscript_Mitsuru_3
Route2_House_Eventscript_Mitsuru_1:
# 287 "data/maps/Route2_House/scripts.pory"
	release
	end

Route2_House_Eventscript_Mitsuru_2:
# 274 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_0
# 277 "data/maps/Route2_House/scripts.pory"
	closemessage
	goto Route2_House_Eventscript_Mitsuru_1

Route2_House_Eventscript_Mitsuru_3:
# 280 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 281 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Mitsuru_Text_1
# 283 "data/maps/Route2_House/scripts.pory"
	closemessage
# 284 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 31
# 285 "data/maps/Route2_House/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	goto Route2_House_Eventscript_Mitsuru_1


Route2_House_Eventscript_Shinjiro::
# 292 "data/maps/Route2_House/scripts.pory"
	lock
# 293 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 294 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Shinjiro_Text_0
# 306 "data/maps/Route2_House/scripts.pory"
	closemessage
# 307 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsAndVanish
# 308 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 30
# 310 "data/maps/Route2_House/scripts.pory"
	release
	return


# 313 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsAndVanish:
# 314 "data/maps/Route2_House/scripts.pory"
	walk_down
# 315 "data/maps/Route2_House/scripts.pory"
	set_invisible
# 316 "data/maps/Route2_House/scripts.pory"
	walk_fast_right
# 317 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
# 317 "data/maps/Route2_House/scripts.pory"
	walk_fast_up
	step_end

Route2_House_Eventscript_AVulpix::
# 321 "data/maps/Route2_House/scripts.pory"
	lock
# 322 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 323 "data/maps/Route2_House/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 324 "data/maps/Route2_House/scripts.pory"
	applymovement 5, faceleft
# 325 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AVulpix_Text_0
# 328 "data/maps/Route2_House/scripts.pory"
	closemessage
# 329 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_Inteleon::
# 333 "data/maps/Route2_House/scripts.pory"
	lock
# 334 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 335 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_Inteleon_Text_0
# 337 "data/maps/Route2_House/scripts.pory"
	closemessage
# 338 "data/maps/Route2_House/scripts.pory"
	applymovement 4, faceright
# 339 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToShinjiro::
# 343 "data/maps/Route2_House/scripts.pory"
	lock
# 344 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 345 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 346 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToShinjiro_Text_0
# 347 "data/maps/Route2_House/scripts.pory"
	closemessage
# 348 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_MustTalkToMitsuru::
# 352 "data/maps/Route2_House/scripts.pory"
	lock
# 353 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 354 "data/maps/Route2_House/scripts.pory"
	waitmovement
# 355 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_MustTalkToMitsuru_Text_0
# 356 "data/maps/Route2_House/scripts.pory"
	closemessage
# 357 "data/maps/Route2_House/scripts.pory"
	release
	return


Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru::
# 361 "data/maps/Route2_House/scripts.pory"
	lock
# 362 "data/maps/Route2_House/scripts.pory"
	delay 30
# 363 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0
# 365 "data/maps/Route2_House/scripts.pory"
	closemessage
# 366 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruLookingAtShinjiro
# 367 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1
# 378 "data/maps/Route2_House/scripts.pory"
	closemessage
# 379 "data/maps/Route2_House/scripts.pory"
	applymovement 1, walkdown
# 380 "data/maps/Route2_House/scripts.pory"
	waitmessage
# 381 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_2
# 382 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 383 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 384 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3
# 388 "data/maps/Route2_House/scripts.pory"
	closemessage
# 389 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGivingAkihikoPokedex
# 390 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4
# 392 "data/maps/Route2_House/scripts.pory"
	closemessage
# 393 "data/maps/Route2_House/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 394 "data/maps/Route2_House/scripts.pory"
	waitse
# 395 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5
# 397 "data/maps/Route2_House/scripts.pory"
	closemessage
# 398 "data/maps/Route2_House/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 399 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_CANDY_XS, 20
# 400 "data/maps/Route2_House/scripts.pory"
	additem ITEM_EXP_ALL
# 401 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 402 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 403 "data/maps/Route2_House/scripts.pory"
	special EnableNationalPokedex
# 404 "data/maps/Route2_House/scripts.pory"
	applymovement 1, stepbackup
# 405 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6
# 409 "data/maps/Route2_House/scripts.pory"
	closemessage
# 410 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruGoesBackToCenter
# 411 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7
# 415 "data/maps/Route2_House/scripts.pory"
	closemessage
# 416 "data/maps/Route2_House/scripts.pory"
	special SpawnCameraObject
# 417 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansToLowerHalfOfRoom
# 418 "data/maps/Route2_House/scripts.pory"
	applymovement 1, MitsuruExitsTheHouse
# 419 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 420 "data/maps/Route2_House/scripts.pory"
	waitmovement LOCALID_PLAYER
# 421 "data/maps/Route2_House/scripts.pory"
	applymovement 6, faceleft
# 422 "data/maps/Route2_House/scripts.pory"
	waitmovement 6
# 423 "data/maps/Route2_House/scripts.pory"
	delay 16
# 424 "data/maps/Route2_House/scripts.pory"
	applymovement 5, VulpixFollowsMitsuruExit
# 425 "data/maps/Route2_House/scripts.pory"
	delay 4
# 426 "data/maps/Route2_House/scripts.pory"
	applymovement 4, InteleonFollowsMitsuruExit
# 427 "data/maps/Route2_House/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 428 "data/maps/Route2_House/scripts.pory"
	applymovement 6, facedown
# 429 "data/maps/Route2_House/scripts.pory"
	waitmovement 1
# 430 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 431 "data/maps/Route2_House/scripts.pory"
	waitse
# 432 "data/maps/Route2_House/scripts.pory"
	waitmovement 5
# 433 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 434 "data/maps/Route2_House/scripts.pory"
	waitse
# 435 "data/maps/Route2_House/scripts.pory"
	waitmovement 4
# 436 "data/maps/Route2_House/scripts.pory"
	playse SE_EXIT
# 437 "data/maps/Route2_House/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLowerHalfRoomBackToAkihiko
# 438 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 439 "data/maps/Route2_House/scripts.pory"
	delay 30
# 440 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8
# 443 "data/maps/Route2_House/scripts.pory"
	closemessage
# 444 "data/maps/Route2_House/scripts.pory"
	applymovement 6, ShinjiroJoinsPostPokedex
# 445 "data/maps/Route2_House/scripts.pory"
	waitmovement 0
# 446 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_TEMP_1
# 447 "data/maps/Route2_House/scripts.pory"
	removeobject 1
# 448 "data/maps/Route2_House/scripts.pory"
	removeobject 4
# 449 "data/maps/Route2_House/scripts.pory"
	removeobject 5
# 450 "data/maps/Route2_House/scripts.pory"
	removeobject 6
# 451 "data/maps/Route2_House/scripts.pory"
	special RemoveCameraObject
# 452 "data/maps/Route2_House/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 33
# 453 "data/maps/Route2_House/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 454 "data/maps/Route2_House/scripts.pory"
	release
	end


# 458 "data/maps/Route2_House/scripts.pory"
MitsuruLookingAtShinjiro:
# 459 "data/maps/Route2_House/scripts.pory"
	walk_right
# 460 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 463 "data/maps/Route2_House/scripts.pory"
stepbackup:
# 464 "data/maps/Route2_House/scripts.pory"
	lock_facing_direction
# 465 "data/maps/Route2_House/scripts.pory"
	walk_up
# 466 "data/maps/Route2_House/scripts.pory"
	unlock_facing_direction
	step_end

# 468 "data/maps/Route2_House/scripts.pory"
MitsuruGivingAkihikoPokedex:
# 469 "data/maps/Route2_House/scripts.pory"
	walk_left
# 469 "data/maps/Route2_House/scripts.pory"
	walk_left
# 470 "data/maps/Route2_House/scripts.pory"
	walk_down
	step_end

# 472 "data/maps/Route2_House/scripts.pory"
MitsuruGoesBackToCenter:
# 473 "data/maps/Route2_House/scripts.pory"
	walk_right
# 474 "data/maps/Route2_House/scripts.pory"
	face_down
	step_end

# 476 "data/maps/Route2_House/scripts.pory"
MitsuruExitsTheHouse:
# 477 "data/maps/Route2_House/scripts.pory"
	walk_down
# 477 "data/maps/Route2_House/scripts.pory"
	walk_down
# 477 "data/maps/Route2_House/scripts.pory"
	walk_down
# 477 "data/maps/Route2_House/scripts.pory"
	walk_down
# 477 "data/maps/Route2_House/scripts.pory"
	walk_down
# 478 "data/maps/Route2_House/scripts.pory"
	walk_right
# 478 "data/maps/Route2_House/scripts.pory"
	walk_right
# 479 "data/maps/Route2_House/scripts.pory"
	walk_down
# 479 "data/maps/Route2_House/scripts.pory"
	walk_down
# 479 "data/maps/Route2_House/scripts.pory"
	walk_down
# 480 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 482 "data/maps/Route2_House/scripts.pory"
CameraPansToLowerHalfOfRoom:
# 483 "data/maps/Route2_House/scripts.pory"
	walk_down
# 483 "data/maps/Route2_House/scripts.pory"
	walk_down
# 483 "data/maps/Route2_House/scripts.pory"
	walk_down
# 484 "data/maps/Route2_House/scripts.pory"
	walk_right
# 484 "data/maps/Route2_House/scripts.pory"
	walk_right
	step_end

# 487 "data/maps/Route2_House/scripts.pory"
VulpixFollowsMitsuruExit:
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
# 491 "data/maps/Route2_House/scripts.pory"
	walk_down
# 492 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 495 "data/maps/Route2_House/scripts.pory"
InteleonFollowsMitsuruExit:
# 496 "data/maps/Route2_House/scripts.pory"
	walk_down
# 497 "data/maps/Route2_House/scripts.pory"
	walk_right
# 497 "data/maps/Route2_House/scripts.pory"
	walk_right
# 497 "data/maps/Route2_House/scripts.pory"
	walk_right
# 497 "data/maps/Route2_House/scripts.pory"
	walk_right
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
# 501 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

# 504 "data/maps/Route2_House/scripts.pory"
CameraFromLowerHalfRoomBackToAkihiko:
# 505 "data/maps/Route2_House/scripts.pory"
	walk_up
# 505 "data/maps/Route2_House/scripts.pory"
	walk_up
# 505 "data/maps/Route2_House/scripts.pory"
	walk_up
# 506 "data/maps/Route2_House/scripts.pory"
	walk_left
# 506 "data/maps/Route2_House/scripts.pory"
	walk_left
	step_end

# 509 "data/maps/Route2_House/scripts.pory"
ShinjiroJoinsPostPokedex:
# 510 "data/maps/Route2_House/scripts.pory"
	walk_left
# 510 "data/maps/Route2_House/scripts.pory"
	walk_left
# 511 "data/maps/Route2_House/scripts.pory"
	set_invisible
	step_end

TakeARest::
# 515 "data/maps/Route2_House/scripts.pory"
	msgbox TakeARest_Text_0, MSGBOX_YESNO
# 516 "data/maps/Route2_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TakeARest_2
TakeARest_1:
# 523 "data/maps/Route2_House/scripts.pory"
	closemessage
	end

TakeARest_2:
# 517 "data/maps/Route2_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 518 "data/maps/Route2_House/scripts.pory"
	special HealPlayerParty
# 519 "data/maps/Route2_House/scripts.pory"
	playse MUS_HEAL
# 520 "data/maps/Route2_House/scripts.pory"
	waitse
# 521 "data/maps/Route2_House/scripts.pory"
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
# 137 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}(Mumble) If only I were able to stop\n"
	.string "them in time... It was my fault...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....$"

Route2_House_Eventscript_TriosFirstGreeting_Text_5:
# 142 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My request is rather simple.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Request...?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_6:
# 148 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I would like you to join me, Akihiko\n"
	.string "Sanada-kun.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_7:
# 155 "data/maps/Route2_House/scripts.pory"
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
# 172 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}.....\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright, I'll join you.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well.$"

Route2_House_Eventscript_TriosFirstGreeting_Text_9:
# 181 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait!$"

Route2_House_Eventscript_TriosFirstGreeting_Text_10:
# 186 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aki, we need to talk.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Shinji?$"

Route2_House_Eventscript_TriosFirstGreeting_Text_11:
# 194 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Go ahead, I'll be waiting right here.$"

Route2_House_Eventscript_Mitsuru_Text_0:
# 274 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Have you both finished talking?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Not yet. We still need more time.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Be my guest.$"

Route2_House_Eventscript_Mitsuru_Text_1:
# 281 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I also have a request.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Certainly, let's hear it.$"

Route2_House_Eventscript_Shinjiro_Text_0:
# 294 "data/maps/Route2_House/scripts.pory"
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
# 326 "data/maps/Route2_House/scripts.pory"
	.string "Vulpix ignored you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now that I have a closer look, this\n"
	.string "Vulpix looks a bit different...)$"

Route2_House_Eventscript_Inteleon_Text_0:
# 335 "data/maps/Route2_House/scripts.pory"
	.string "Inteleon's looking at you judgingly.\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(Someone's got an attitude...)$"

Route2_House_Eventscript_MustTalkToShinjiro_Text_0:
# 346 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji wants to talk with me.)$"

Route2_House_Eventscript_MustTalkToMitsuru_Text_0:
# 355 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Kirijo is still waiting for me.)$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_0:
# 363 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So what's your request?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let me join too.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_1:
# 368 "data/maps/Route2_House/scripts.pory"
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
# 381 "data/maps/Route2_House/scripts.pory"
	.string "Mitsuru gave Shinjiro a modern device,\n"
	.string "some Pokéballs and Exp Candies.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_3:
# 384 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be fair if you have nothing\n"
	.string "to catch a Pokémon.\p"
	.string "Oh, and that device is a Pokédex. I'm\n"
	.string "just lending it to you.\p"
	.string "It's yours if you can beat me.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Hmph. Just you wait.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_4:
# 391 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}And these are for you.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_5:
# 395 "data/maps/Route2_House/scripts.pory"
	.string "Akihiko received a Pokédex and a\n"
	.string "wooden box.\p"
	.string "Inside was a good bunch of Pokéballs,\n"
	.string "Exp Candies and some essential Key\l"
	.string "Items.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_6:
# 406 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}To be honest, I'd also like to have a\n"
	.string "battle with you, Sanada-kun.\p"
	.string "It's better to personally see how you\n"
	.string "fare in battle.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh, sure.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_7:
# 412 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright. I'll be waiting for both of you\n"
	.string "in Sunshine Meadow.\p"
	.string "We'll be having 3-vs-3 Pokémon battles\n"
	.string "so plan your party accordingly.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good luck, you'll need it.$"

Route2_House_Eventscript_AkiShinjiDecidingToJoinMitsuru_Text_8:
# 440 "data/maps/Route2_House/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Bossy.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Heh. She's one weird rich girl.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

TakeARest_Text_0:
# 515 "data/maps/Route2_House/scripts.pory"
	.string "Let's take a quick rest.$"
