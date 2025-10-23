Route2_MapScripts::
# 6 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 28 "data/maps/Route2/scripts.pory"
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
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 24 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 37
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
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

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 21 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 29, 21
# 22 "data/maps/Route2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 25 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	return

Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnWarp25
# 4 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnWarp33
	.2byte 0

Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnFrame25
# 30 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnFrame33
	.2byte 0


Route2_Eventscript_AkihikoOnWarp25::
# 35 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 36 "data/maps/Route2/scripts.pory"
	applymovement 7, invisible
# 37 "data/maps/Route2/scripts.pory"
	applymovement 8, invisible
# 38 "data/maps/Route2/scripts.pory"
	applymovement 9, invisible
# 39 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 40 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 41 "data/maps/Route2/scripts.pory"
	applymovement 12, invisible
	return


Route2_Eventscript_AkihikoOnWarp33::
# 45 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
	return


Route2_Eventscript_AkihikoOnFrame25::
# 49 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedBySusMen
	return


Route2_Eventscript_AkishinjiGettingBlockedBySusMen::
# 53 "data/maps/Route2/scripts.pory"
	lock
# 54 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkishinjiGettingBlockedBySusMen
# 55 "data/maps/Route2/scripts.pory"
	delay 8
# 56 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 57 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 58 "data/maps/Route2/scripts.pory"
	delay 8
# 59 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 60 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 61 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 62 "data/maps/Route2/scripts.pory"
	delay 20
# 63 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiStepBack
# 64 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 65 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 68 "data/maps/Route2/scripts.pory"
	closemessage
# 69 "data/maps/Route2/scripts.pory"
	delay 30
# 70 "data/maps/Route2/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 71 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 72 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 73 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 75 "data/maps/Route2/scripts.pory"
	closemessage
# 76 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 77 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 78 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 81 "data/maps/Route2/scripts.pory"
	closemessage
# 82 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1ApproachingAkihiko
# 83 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, shakevertical
# 85 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 86 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 87 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route2/scripts.pory"
	delay 20
# 89 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 90 "data/maps/Route2/scripts.pory"
	closemessage
# 91 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_StartBattleWithSusMen
# 92 "data/maps/Route2/scripts.pory"
	release
	end


# 96 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 97 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 100 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 101 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 102 "data/maps/Route2/scripts.pory"
	delay_8
# 103 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 104 "data/maps/Route2/scripts.pory"
	jump_right
# 105 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 108 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 109 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 109 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 109 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 110 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 113 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 114 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 115 "data/maps/Route2/scripts.pory"
	walk_right
# 116 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 118 "data/maps/Route2/scripts.pory"
SusMan1ApproachingAkihiko:
# 119 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 122 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 123 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 124 "data/maps/Route2/scripts.pory"
	walk_left
# 124 "data/maps/Route2/scripts.pory"
	walk_left
# 125 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 128 "data/maps/Route2/scripts.pory"
shakevertical:
# 129 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 133 "data/maps/Route2/scripts.pory"
	lock
# 134 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 135 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 136 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 139 "data/maps/Route2/scripts.pory"
	closemessage
# 140 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 141 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 142 "data/maps/Route2/scripts.pory"
	closemessage
# 143 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE2, SusMenFightDefeated
# 144 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 145 "data/maps/Route2/scripts.pory"
	release
	end


# 149 "data/maps/Route2/scripts.pory"
lockfacing:
# 150 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 161 "data/maps/Route2/scripts.pory"
	lock
# 162 "data/maps/Route2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 163 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 164 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 165 "data/maps/Route2/scripts.pory"
	delay 30
# 166 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 167 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 168 "data/maps/Route2/scripts.pory"
	closemessage
# 169 "data/maps/Route2/scripts.pory"
	delay 8
# 170 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 171 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 172 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 174 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 175 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 177 "data/maps/Route2/scripts.pory"
	closemessage
# 178 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 179 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 180 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 181 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 182 "data/maps/Route2/scripts.pory"
	closemessage
# 183 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 184 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 185 "data/maps/Route2/scripts.pory"
	waitmoncry
# 186 "data/maps/Route2/scripts.pory"
	delay 30
# 187 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 188 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 189 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 191 "data/maps/Route2/scripts.pory"
	release
	end


# 195 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 196 "data/maps/Route2/scripts.pory"
	set_visible
# 197 "data/maps/Route2/scripts.pory"
	jump_left
# 198 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 201 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 202 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 207 "data/maps/Route2/scripts.pory"
	lock
# 208 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 209 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 210 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 212 "data/maps/Route2/scripts.pory"
	delay 20
# 213 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 214 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 215 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 217 "data/maps/Route2/scripts.pory"
	closemessage
# 218 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 219 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 221 "data/maps/Route2/scripts.pory"
	release
	end


# 225 "data/maps/Route2/scripts.pory"
visible:
# 226 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 230 "data/maps/Route2/scripts.pory"
	lock
# 231 "data/maps/Route2/scripts.pory"
	delay 20
# 232 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 233 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 234 "data/maps/Route2/scripts.pory"
	closemessage
# 235 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 236 "data/maps/Route2/scripts.pory"
	delay 20
# 237 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 238 "data/maps/Route2/scripts.pory"
	waitmoncry
# 239 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 240 "data/maps/Route2/scripts.pory"
	waitse
# 241 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 242 "data/maps/Route2/scripts.pory"
	waitmoncry
# 243 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 244 "data/maps/Route2/scripts.pory"
	waitse
# 245 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 246 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 247 "data/maps/Route2/scripts.pory"
	removeobject 3
# 248 "data/maps/Route2/scripts.pory"
	removeobject 4
# 249 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 250 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 251 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 253 "data/maps/Route2/scripts.pory"
	delay 20
# 254 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 255 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 256 "data/maps/Route2/scripts.pory"
	delay 4
# 257 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 258 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 259 "data/maps/Route2/scripts.pory"
	waitse
# 260 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 261 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 262 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 263 "data/maps/Route2/scripts.pory"
	release
	end


# 267 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 268 "data/maps/Route2/scripts.pory"
	delay_16
# 269 "data/maps/Route2/scripts.pory"
	face_left
# 270 "data/maps/Route2/scripts.pory"
	delay_16
# 271 "data/maps/Route2/scripts.pory"
	face_up
# 272 "data/maps/Route2/scripts.pory"
	delay_16
# 273 "data/maps/Route2/scripts.pory"
	emote_x
# 274 "data/maps/Route2/scripts.pory"
	delay_16
# 275 "data/maps/Route2/scripts.pory"
	jump_right
# 276 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 281 "data/maps/Route2/scripts.pory"
	lock
# 282 "data/maps/Route2/scripts.pory"
	delay 40
# 283 "data/maps/Route2/scripts.pory"
	addobject 5
# 284 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 285 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 286 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 288 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 290 "data/maps/Route2/scripts.pory"
	waitse
# 291 "data/maps/Route2/scripts.pory"
	delay 30
# 292 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 293 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 296 "data/maps/Route2/scripts.pory"
	closemessage
# 297 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 298 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 299 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 300 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 301 "data/maps/Route2/scripts.pory"
	delay 20
# 302 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 303 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 304 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route2/scripts.pory"
	delay 30
# 306 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 307 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 308 "data/maps/Route2/scripts.pory"
	release
	end


# 312 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 313 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 315 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 316 "data/maps/Route2/scripts.pory"
	walk_left
# 316 "data/maps/Route2/scripts.pory"
	walk_left
# 316 "data/maps/Route2/scripts.pory"
	walk_left
# 317 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 320 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 321 "data/maps/Route2/scripts.pory"
	walk_up
# 321 "data/maps/Route2/scripts.pory"
	walk_up
# 322 "data/maps/Route2/scripts.pory"
	walk_right
# 322 "data/maps/Route2/scripts.pory"
	walk_right
# 322 "data/maps/Route2/scripts.pory"
	walk_right
# 322 "data/maps/Route2/scripts.pory"
	walk_right
# 322 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 325 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 326 "data/maps/Route2/scripts.pory"
	set_visible
# 327 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 330 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 331 "data/maps/Route2/scripts.pory"
	walk_up
# 331 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 334 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 335 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 341 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 345 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 350 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
# 351 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 352 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 353 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Tarou::
# 370 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Tarou_Text_0
# 371 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouIntro
# 372 "data/maps/Route2/scripts.pory"
	closemessage
# 373 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_TAROU, Route2_TarouDefeated
# 374 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 375 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_AkihikoOnFrame33::
# 392 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 396 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 397 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 402 "data/maps/Route2/scripts.pory"
	closemessage
# 403 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 404 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 405 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 406 "data/maps/Route2/scripts.pory"
	lock
# 407 "data/maps/Route2/scripts.pory"
	removeobject 6
# 408 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 29, 21
# 409 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 410 "data/maps/Route2/scripts.pory"
	addobject 6
# 411 "data/maps/Route2/scripts.pory"
	fwdtime 13, 45
# 412 "data/maps/Route2/scripts.pory"
	release
# 413 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 414 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


# 418 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 419 "data/maps/Route2/scripts.pory"
	set_visible
# 420 "data/maps/Route2/scripts.pory"
	walk_down
# 420 "data/maps/Route2/scripts.pory"
	walk_down
# 421 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 424 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 425 "data/maps/Route2/scripts.pory"
	walk_right
# 425 "data/maps/Route2/scripts.pory"
	walk_right
# 425 "data/maps/Route2/scripts.pory"
	walk_right
# 425 "data/maps/Route2/scripts.pory"
	walk_right
# 425 "data/maps/Route2/scripts.pory"
	walk_right
# 425 "data/maps/Route2/scripts.pory"
	walk_right
# 425 "data/maps/Route2/scripts.pory"
	walk_right
# 425 "data/maps/Route2/scripts.pory"
	walk_right
# 426 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 430 "data/maps/Route2/scripts.pory"
	lock
# 431 "data/maps/Route2/scripts.pory"
	faceplayer
# 432 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 437 "data/maps/Route2/scripts.pory"
	closemessage
# 438 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0:
# 66 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Ouch!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}What the hell??$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1:
# 71 "data/maps/Route2/scripts.pory"
	.string "Man In Black 1$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2:
# 74 "data/maps/Route2/scripts.pory"
	.string "That stupid cop is finally out of\n"
	.string "picture.$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3:
# 76 "data/maps/Route2/scripts.pory"
	.string "Man In Black 2$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4:
# 79 "data/maps/Route2/scripts.pory"
	.string "You two are coming with us. Like it or\n"
	.string "not.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}What?$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5:
# 89 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}No way! Who even are you!?$"

Route2_Eventscript_StartBattleWithSusMen_Text_0:
# 137 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 167 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 176 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 181 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 216 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 232 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 233 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 293 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold off for so long.$"

Route2_Eventscript_RouteSign_Text_0:
# 334 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 341 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Nata Town {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 351 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Tarou_Text_0:
# 370 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 398 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 432 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Alright, alright ahaha.$"

SusMenFightIntro::
# 152 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 156 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 357 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaDefeated::
# 361 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 365 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 379 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, lowlife?$"

Route2_TarouDefeated::
# 383 "data/maps/Route2/scripts.pory"
	.string "Tch. This Pokémon sucks. I shouldn't\n"
	.string "have bought it.$"

Route2_TarouPostBattle::
# 387 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"
