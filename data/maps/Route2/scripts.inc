Route2_MapScripts::
# 6 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 25 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 25
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 25
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 26
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 16 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 20 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 10 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 14 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 17 "data/maps/Route2/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 18 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 8, 12
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 21 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 29, 21
# 22 "data/maps/Route2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	return

Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnWarp25
# 4 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnWarp33
	.2byte 0

Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnFrame25
# 27 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnFrame33
	.2byte 0


Route2_Eventscript_AkihikoOnWarp25::
# 32 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 33 "data/maps/Route2/scripts.pory"
	applymovement 7, invisible
# 34 "data/maps/Route2/scripts.pory"
	applymovement 8, invisible
# 35 "data/maps/Route2/scripts.pory"
	applymovement 9, invisible
# 36 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 37 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 38 "data/maps/Route2/scripts.pory"
	applymovement 12, invisible
	return


Route2_Eventscript_AkihikoOnWarp33::
# 42 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
	return


Route2_Eventscript_AkihikoOnFrame25::
# 46 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedBySusMen
	return


Route2_Eventscript_AkishinjiGettingBlockedBySusMen::
# 50 "data/maps/Route2/scripts.pory"
	lock
# 51 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkishinjiGettingBlockedBySusMen
# 52 "data/maps/Route2/scripts.pory"
	delay 8
# 53 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 54 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 55 "data/maps/Route2/scripts.pory"
	delay 8
# 56 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 57 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 58 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 59 "data/maps/Route2/scripts.pory"
	delay 20
# 60 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiStepBack
# 61 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 62 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 65 "data/maps/Route2/scripts.pory"
	closemessage
# 66 "data/maps/Route2/scripts.pory"
	delay 30
# 67 "data/maps/Route2/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 68 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 69 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 70 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 72 "data/maps/Route2/scripts.pory"
	closemessage
# 73 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 74 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 75 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 78 "data/maps/Route2/scripts.pory"
	closemessage
# 79 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1ApproachingAkihiko
# 80 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 82 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 83 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 84 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route2/scripts.pory"
	delay 20
# 86 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 87 "data/maps/Route2/scripts.pory"
	closemessage
# 88 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_StartBattleWithSusMen
# 89 "data/maps/Route2/scripts.pory"
	release
	end


# 93 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 94 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 97 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 98 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 99 "data/maps/Route2/scripts.pory"
	delay_8
# 100 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 101 "data/maps/Route2/scripts.pory"
	jump_right
# 102 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 105 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 106 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 107 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 110 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 111 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 112 "data/maps/Route2/scripts.pory"
	walk_right
# 113 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 115 "data/maps/Route2/scripts.pory"
SusMan1ApproachingAkihiko:
# 116 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 116 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 119 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 120 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 121 "data/maps/Route2/scripts.pory"
	walk_left
# 121 "data/maps/Route2/scripts.pory"
	walk_left
# 122 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 125 "data/maps/Route2/scripts.pory"
shakevertical:
# 126 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 130 "data/maps/Route2/scripts.pory"
	lock
# 131 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 132 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 133 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 136 "data/maps/Route2/scripts.pory"
	closemessage
# 137 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 138 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 139 "data/maps/Route2/scripts.pory"
	closemessage
# 140 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE2, SusMenFightDefeated
# 141 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 142 "data/maps/Route2/scripts.pory"
	release
	end


# 146 "data/maps/Route2/scripts.pory"
lockfacing:
# 147 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 158 "data/maps/Route2/scripts.pory"
	lock
# 159 "data/maps/Route2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 160 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 161 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 162 "data/maps/Route2/scripts.pory"
	delay 30
# 163 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 164 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 165 "data/maps/Route2/scripts.pory"
	closemessage
# 166 "data/maps/Route2/scripts.pory"
	delay 8
# 167 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 168 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 169 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 171 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 172 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 174 "data/maps/Route2/scripts.pory"
	closemessage
# 175 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 176 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 177 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 178 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 179 "data/maps/Route2/scripts.pory"
	closemessage
# 180 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 181 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 182 "data/maps/Route2/scripts.pory"
	waitmoncry
# 183 "data/maps/Route2/scripts.pory"
	delay 30
# 184 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 185 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 186 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 188 "data/maps/Route2/scripts.pory"
	release
	end


# 192 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 193 "data/maps/Route2/scripts.pory"
	set_visible
# 194 "data/maps/Route2/scripts.pory"
	jump_left
# 195 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 198 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 199 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 204 "data/maps/Route2/scripts.pory"
	lock
# 205 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 206 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 207 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 208 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 209 "data/maps/Route2/scripts.pory"
	delay 20
# 210 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 211 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 212 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 214 "data/maps/Route2/scripts.pory"
	closemessage
# 215 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 216 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 218 "data/maps/Route2/scripts.pory"
	release
	end


# 222 "data/maps/Route2/scripts.pory"
visible:
# 223 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 227 "data/maps/Route2/scripts.pory"
	lock
# 228 "data/maps/Route2/scripts.pory"
	delay 20
# 229 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 230 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 231 "data/maps/Route2/scripts.pory"
	closemessage
# 232 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 233 "data/maps/Route2/scripts.pory"
	delay 20
# 234 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 235 "data/maps/Route2/scripts.pory"
	waitmoncry
# 236 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 237 "data/maps/Route2/scripts.pory"
	waitse
# 238 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 239 "data/maps/Route2/scripts.pory"
	waitmoncry
# 240 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 241 "data/maps/Route2/scripts.pory"
	waitse
# 242 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 243 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 244 "data/maps/Route2/scripts.pory"
	removeobject 3
# 245 "data/maps/Route2/scripts.pory"
	removeobject 4
# 246 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 247 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 248 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 250 "data/maps/Route2/scripts.pory"
	delay 20
# 251 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 252 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 253 "data/maps/Route2/scripts.pory"
	delay 4
# 254 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 255 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 256 "data/maps/Route2/scripts.pory"
	waitse
# 257 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 258 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 260 "data/maps/Route2/scripts.pory"
	release
	end


# 264 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 265 "data/maps/Route2/scripts.pory"
	delay_16
# 266 "data/maps/Route2/scripts.pory"
	face_left
# 267 "data/maps/Route2/scripts.pory"
	delay_16
# 268 "data/maps/Route2/scripts.pory"
	face_up
# 269 "data/maps/Route2/scripts.pory"
	delay_16
# 270 "data/maps/Route2/scripts.pory"
	emote_x
# 271 "data/maps/Route2/scripts.pory"
	delay_16
# 272 "data/maps/Route2/scripts.pory"
	jump_right
# 273 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 278 "data/maps/Route2/scripts.pory"
	lock
# 279 "data/maps/Route2/scripts.pory"
	delay 40
# 280 "data/maps/Route2/scripts.pory"
	addobject 5
# 281 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 282 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 283 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 285 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 286 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 287 "data/maps/Route2/scripts.pory"
	waitse
# 288 "data/maps/Route2/scripts.pory"
	delay 30
# 289 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 290 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 293 "data/maps/Route2/scripts.pory"
	closemessage
# 294 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 295 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 296 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 297 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route2/scripts.pory"
	delay 20
# 299 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 300 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 301 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route2/scripts.pory"
	delay 30
# 303 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 304 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 305 "data/maps/Route2/scripts.pory"
	release
	end


# 309 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 310 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 312 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 313 "data/maps/Route2/scripts.pory"
	walk_left
# 313 "data/maps/Route2/scripts.pory"
	walk_left
# 313 "data/maps/Route2/scripts.pory"
	walk_left
# 314 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 317 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 318 "data/maps/Route2/scripts.pory"
	walk_up
# 318 "data/maps/Route2/scripts.pory"
	walk_up
# 319 "data/maps/Route2/scripts.pory"
	walk_right
# 319 "data/maps/Route2/scripts.pory"
	walk_right
# 319 "data/maps/Route2/scripts.pory"
	walk_right
# 319 "data/maps/Route2/scripts.pory"
	walk_right
# 319 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 322 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 323 "data/maps/Route2/scripts.pory"
	set_visible
# 324 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 327 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 328 "data/maps/Route2/scripts.pory"
	walk_up
# 328 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 331 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 332 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 338 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 342 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 347 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
# 348 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 349 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 350 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Tarou::
# 367 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Tarou_Text_0
# 368 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouIntro
# 369 "data/maps/Route2/scripts.pory"
	closemessage
# 370 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_TAROU, Route2_TarouDefeated
# 371 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 372 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_AkihikoOnFrame33::
# 389 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 393 "data/maps/Route2/scripts.pory"
	lock
# 394 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 395 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 400 "data/maps/Route2/scripts.pory"
	closemessage
# 401 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 402 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 403 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 404 "data/maps/Route2/scripts.pory"
	removeobject 6
# 405 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 29, 21
# 406 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 407 "data/maps/Route2/scripts.pory"
	addobject 6
# 408 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 409 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 410 "data/maps/Route2/scripts.pory"
	releaseall
	end


# 414 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 415 "data/maps/Route2/scripts.pory"
	set_visible
# 416 "data/maps/Route2/scripts.pory"
	walk_down
# 416 "data/maps/Route2/scripts.pory"
	walk_down
# 417 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 420 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 421 "data/maps/Route2/scripts.pory"
	walk_right
# 421 "data/maps/Route2/scripts.pory"
	walk_right
# 421 "data/maps/Route2/scripts.pory"
	walk_right
# 421 "data/maps/Route2/scripts.pory"
	walk_right
# 421 "data/maps/Route2/scripts.pory"
	walk_right
# 421 "data/maps/Route2/scripts.pory"
	walk_right
# 421 "data/maps/Route2/scripts.pory"
	walk_right
# 421 "data/maps/Route2/scripts.pory"
	walk_right
# 422 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 426 "data/maps/Route2/scripts.pory"
	lock
# 427 "data/maps/Route2/scripts.pory"
	faceplayer
# 428 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 433 "data/maps/Route2/scripts.pory"
	closemessage
# 434 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0:
# 63 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Ouch!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}What the hell??$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1:
# 68 "data/maps/Route2/scripts.pory"
	.string "Man In Black 1$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2:
# 71 "data/maps/Route2/scripts.pory"
	.string "That stupid cop is finally out of\n"
	.string "picture.$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3:
# 73 "data/maps/Route2/scripts.pory"
	.string "Man In Black 2$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4:
# 76 "data/maps/Route2/scripts.pory"
	.string "You two are coming with us. Like it or\n"
	.string "not.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}What?$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5:
# 86 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}No way! Who even are you!?$"

Route2_Eventscript_StartBattleWithSusMen_Text_0:
# 134 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 164 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 173 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 178 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 213 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 229 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 230 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 290 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "This ice can only hold off for so long.$"

Route2_Eventscript_RouteSign_Text_0:
# 331 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 338 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Nata Town {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 348 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Tarou_Text_0:
# 367 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 396 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 428 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Alright, alright ahaha.$"

SusMenFightIntro::
# 149 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 153 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 354 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaDefeated::
# 358 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 362 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 376 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, lowlife?$"

Route2_TarouDefeated::
# 380 "data/maps/Route2/scripts.pory"
	.string "Tch. This Pokémon sucks. I shouldn't\n"
	.string "have bought it.$"

Route2_TarouPostBattle::
# 384 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"
