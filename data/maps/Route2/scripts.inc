Route2_MapScripts::
# 5 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 13 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 25
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 26
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return

Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnWarp25
	.2byte 0

Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnFrame25
	.2byte 0


Route2_Eventscript_AkihikoOnWarp25::
# 19 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 20 "data/maps/Route2/scripts.pory"
	applymovement 7, invisible
# 21 "data/maps/Route2/scripts.pory"
	applymovement 8, invisible
# 22 "data/maps/Route2/scripts.pory"
	applymovement 9, invisible
# 23 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 24 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 25 "data/maps/Route2/scripts.pory"
	applymovement 12, invisible
	return


Route2_Eventscript_AkihikoOnFrame25::
# 31 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedBySusMen
	return


Route2_Eventscript_AkishinjiGettingBlockedBySusMen::
# 35 "data/maps/Route2/scripts.pory"
	lock
# 36 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkishinjiGettingBlockedBySusMen
# 37 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 38 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 39 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 40 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 41 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 42 "data/maps/Route2/scripts.pory"
	delay 20
# 43 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiStepBack
# 44 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 45 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 48 "data/maps/Route2/scripts.pory"
	closemessage
# 49 "data/maps/Route2/scripts.pory"
	delay 30
# 50 "data/maps/Route2/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 51 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 52 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 53 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 55 "data/maps/Route2/scripts.pory"
	closemessage
# 56 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 57 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 58 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 61 "data/maps/Route2/scripts.pory"
	closemessage
# 62 "data/maps/Route2/scripts.pory"
	applymovement 4, walkright
# 63 "data/maps/Route2/scripts.pory"
	waitmovement
# 64 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, shakevertical
# 65 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 66 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 67 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route2/scripts.pory"
	delay 20
# 69 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 70 "data/maps/Route2/scripts.pory"
	closemessage
# 71 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_StartBattleWithSusMen
# 72 "data/maps/Route2/scripts.pory"
	release
	end


# 76 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 77 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 80 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 81 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 81 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 81 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 81 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 81 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 81 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 82 "data/maps/Route2/scripts.pory"
	delay_8
# 83 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 84 "data/maps/Route2/scripts.pory"
	jump_right
# 85 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 88 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 89 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 89 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 89 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 90 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 93 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 94 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 95 "data/maps/Route2/scripts.pory"
	walk_right
# 96 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 99 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 100 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 101 "data/maps/Route2/scripts.pory"
	walk_left
# 102 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 105 "data/maps/Route2/scripts.pory"
shakevertical:
# 106 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 110 "data/maps/Route2/scripts.pory"
	lock
# 111 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 112 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 113 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 116 "data/maps/Route2/scripts.pory"
	closemessage
# 117 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 118 "data/maps/Route2/scripts.pory"
	applymovement 4, walkright
# 119 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 120 "data/maps/Route2/scripts.pory"
	closemessage
# 121 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE2, SusMenFightDefeated
# 122 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 123 "data/maps/Route2/scripts.pory"
	release
	end


# 127 "data/maps/Route2/scripts.pory"
lockfacing:
# 128 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 139 "data/maps/Route2/scripts.pory"
	lock
# 140 "data/maps/Route2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 141 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 142 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 143 "data/maps/Route2/scripts.pory"
	delay 30
# 144 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 145 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 146 "data/maps/Route2/scripts.pory"
	closemessage
# 147 "data/maps/Route2/scripts.pory"
	delay 8
# 148 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 149 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 150 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 152 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 153 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 155 "data/maps/Route2/scripts.pory"
	closemessage
# 156 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 157 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 158 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 160 "data/maps/Route2/scripts.pory"
	closemessage
# 161 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 162 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 163 "data/maps/Route2/scripts.pory"
	waitmoncry
# 164 "data/maps/Route2/scripts.pory"
	delay 30
# 165 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 166 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 167 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 169 "data/maps/Route2/scripts.pory"
	release
	end


# 173 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 174 "data/maps/Route2/scripts.pory"
	set_visible
# 175 "data/maps/Route2/scripts.pory"
	jump_left
# 176 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 179 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 180 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 185 "data/maps/Route2/scripts.pory"
	lock
# 186 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 187 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 188 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 190 "data/maps/Route2/scripts.pory"
	delay 20
# 191 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 192 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 193 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 195 "data/maps/Route2/scripts.pory"
	closemessage
# 196 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 197 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 199 "data/maps/Route2/scripts.pory"
	release
	end


# 203 "data/maps/Route2/scripts.pory"
visible:
# 204 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 208 "data/maps/Route2/scripts.pory"
	lock
# 209 "data/maps/Route2/scripts.pory"
	delay 20
# 210 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 211 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 212 "data/maps/Route2/scripts.pory"
	closemessage
# 213 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 214 "data/maps/Route2/scripts.pory"
	delay 20
# 215 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 216 "data/maps/Route2/scripts.pory"
	waitmoncry
# 217 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 218 "data/maps/Route2/scripts.pory"
	waitse
# 219 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 220 "data/maps/Route2/scripts.pory"
	waitmoncry
# 221 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 222 "data/maps/Route2/scripts.pory"
	waitse
# 223 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 224 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 225 "data/maps/Route2/scripts.pory"
	removeobject 3
# 226 "data/maps/Route2/scripts.pory"
	removeobject 4
# 227 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 228 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 229 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 231 "data/maps/Route2/scripts.pory"
	delay 20
# 232 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 233 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 234 "data/maps/Route2/scripts.pory"
	delay 4
# 235 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 236 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 237 "data/maps/Route2/scripts.pory"
	waitse
# 238 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 239 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 241 "data/maps/Route2/scripts.pory"
	release
	end


# 245 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 246 "data/maps/Route2/scripts.pory"
	delay_16
# 247 "data/maps/Route2/scripts.pory"
	face_left
# 248 "data/maps/Route2/scripts.pory"
	delay_16
# 249 "data/maps/Route2/scripts.pory"
	face_up
# 250 "data/maps/Route2/scripts.pory"
	delay_16
# 251 "data/maps/Route2/scripts.pory"
	emote_x
# 252 "data/maps/Route2/scripts.pory"
	delay_16
# 253 "data/maps/Route2/scripts.pory"
	jump_right
# 254 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 259 "data/maps/Route2/scripts.pory"
	lock
# 260 "data/maps/Route2/scripts.pory"
	delay 40
# 261 "data/maps/Route2/scripts.pory"
	addobject 5
# 262 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 263 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 264 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 266 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 268 "data/maps/Route2/scripts.pory"
	waitse
# 269 "data/maps/Route2/scripts.pory"
	delay 30
# 270 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 271 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 273 "data/maps/Route2/scripts.pory"
	closemessage
# 274 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 275 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 276 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 277 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route2/scripts.pory"
	delay 20
# 279 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 280 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 281 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 282 "data/maps/Route2/scripts.pory"
	delay 30
# 283 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 284 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 285 "data/maps/Route2/scripts.pory"
	release
	end


# 289 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 290 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 292 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 293 "data/maps/Route2/scripts.pory"
	walk_left
# 293 "data/maps/Route2/scripts.pory"
	walk_left
# 293 "data/maps/Route2/scripts.pory"
	walk_left
# 294 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 297 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 298 "data/maps/Route2/scripts.pory"
	walk_up
# 298 "data/maps/Route2/scripts.pory"
	walk_up
# 299 "data/maps/Route2/scripts.pory"
	walk_right
# 299 "data/maps/Route2/scripts.pory"
	walk_right
# 299 "data/maps/Route2/scripts.pory"
	walk_right
# 299 "data/maps/Route2/scripts.pory"
	walk_right
# 299 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 302 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 303 "data/maps/Route2/scripts.pory"
	set_visible
# 304 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 307 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 308 "data/maps/Route2/scripts.pory"
	walk_up
# 308 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 311 "data/maps/Route2/scripts.pory"
	lock
# 312 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 313 "data/maps/Route2/scripts.pory"
	closemessage
# 314 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_DirectionSign::
# 319 "data/maps/Route2/scripts.pory"
	lock
# 320 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 324 "data/maps/Route2/scripts.pory"
	closemessage
# 325 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0:
# 46 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Ouch!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}What the hell??$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1:
# 51 "data/maps/Route2/scripts.pory"
	.string "Man In Black 1$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2:
# 54 "data/maps/Route2/scripts.pory"
	.string "That stupid cop is finally out of\n"
	.string "picture.$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3:
# 56 "data/maps/Route2/scripts.pory"
	.string "Man In Black 2$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4:
# 59 "data/maps/Route2/scripts.pory"
	.string "You two are coming with us. Like it or\n"
	.string "not.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}What?$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5:
# 69 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}No way! Who even are you!?$"

Route2_Eventscript_StartBattleWithSusMen_Text_0:
# 114 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 145 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 154 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 159 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 194 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 210 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 211 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 271 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first. This ice can only hold off\l"
	.string "for so long.$"

Route2_Eventscript_RouteSign_Text_0:
# 312 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 320 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Nata Town {LEFT_ARROW}$"

SusMenFightIntro::
# 130 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 134 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"
