SunshineWoods_MapScripts::
# 2 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 37 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 41 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 22
	goto_if_lt SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 6
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_gt SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 14 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_ne SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 20 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 28 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 2, 4, 3
# 8 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 3, 5, 5
# 9 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 12 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 15 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_4
# 16 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_5
# 17 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 18 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_7
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 21 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 22 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 23 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_5
# 24 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_7
# 25 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 26 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 29 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 12, 12, 17
# 30 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 31 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 11, 20, 10
# 32 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 38 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnWarp6
# 39 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 21, SunshineWoods_Eventscript_MitsuruOnWarp21
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnFrame6
	.2byte 0


SunshineWoods_Eventscript_OnWarp6::
# 47 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 48 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_WOODS
	return


SunshineWoods_Eventscript_MitsuruOnWarp21::
	return


# 54 "data/maps/SunshineWoods/scripts.pory"
playerfaceright:
# 55 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass::
# 59 "data/maps/SunshineWoods/scripts.pory"
	lock
# 60 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, facedown
# 61 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, facedown
# 62 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 63 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 66 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 67 "data/maps/SunshineWoods/scripts.pory"
	release
# 68 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 69 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 70 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_OnFrame6::
# 74 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 78 "data/maps/SunshineWoods/scripts.pory"
	lock
# 79 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 80 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_MikiFoundSomething
# 81 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 83 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 87 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 88 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 89 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 90 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 91 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 92 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 93 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 93 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 94 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 98 "data/maps/SunshineWoods/scripts.pory"
	lock
# 99 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 101 "data/maps/SunshineWoods/scripts.pory"
	release
# 102 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 106 "data/maps/SunshineWoods/scripts.pory"
	lock
# 107 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, faceup
# 108 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 109 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 111 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 112 "data/maps/SunshineWoods/scripts.pory"
	release
# 113 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 117 "data/maps/SunshineWoods/scripts.pory"
	lock
# 118 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 119 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 120 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 121 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_ShinjiroAlerted
# 122 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_MikiAlerted
# 123 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 124 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 125 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 127 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 128 "data/maps/SunshineWoods/scripts.pory"
	release
# 129 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 132 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 133 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 134 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 135 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 136 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 137 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 138 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 139 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 141 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 142 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 143 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 144 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 145 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 146 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 147 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 148 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 150 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 151 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 152 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 155 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 156 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 160 "data/maps/SunshineWoods/scripts.pory"
	lock
# 161 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 4, MAP_SUNSHINE_WOODS
# 162 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 163 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 164 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, jumpright
# 165 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_Stayback
# 166 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 167 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_OnGuard
# 168 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 169 "data/maps/SunshineWoods/scripts.pory"
	release
# 170 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 173 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 174 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 175 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 176 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 177 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 178 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 180 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 181 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 182 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 183 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 187 "data/maps/SunshineWoods/scripts.pory"
	lock
# 188 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 189 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 190 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_PawmiIsWeak
# 191 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 192 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 193 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 197 "data/maps/SunshineWoods/scripts.pory"
	release
# 198 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 201 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 202 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 203 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 204 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 205 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 206 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 210 "data/maps/SunshineWoods/scripts.pory"
	lock
# 211 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 212 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 213 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 214 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 215 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
# 216 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 217 "data/maps/SunshineWoods/scripts.pory"
	removeobject 2
# 218 "data/maps/SunshineWoods/scripts.pory"
	removeobject 3
# 219 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 220 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 221 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 230 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 231 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 235 "data/maps/SunshineWoods/scripts.pory"
	lock
# 236 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 237 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 238 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 239 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 240 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 245 "data/maps/SunshineWoods/scripts.pory"
	lock
# 246 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 248 "data/maps/SunshineWoods/scripts.pory"
	release
	return


SunshineWoods_Eventscript_IkeBattle::
# 252 "data/maps/SunshineWoods/scripts.pory"
	checkplayergender
# 253 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineWoods_Eventscript_IkeBattle_2
# 257 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE_2, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
SunshineWoods_Eventscript_IkeBattle_1:
# 259 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_IkeBattle_Text_0
# 260 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end

SunshineWoods_Eventscript_IkeBattle_2:
# 254 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
	goto SunshineWoods_Eventscript_IkeBattle_1


SunshineWoods_Eventscript_HotaruBattle::
# 265 "data/maps/SunshineWoods/scripts.pory"
	checkplayergender
# 266 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineWoods_Eventscript_HotaruBattle_2
# 270 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU_2, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
SunshineWoods_Eventscript_HotaruBattle_1:
# 272 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_HotaruBattle_Text_0
# 273 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end

SunshineWoods_Eventscript_HotaruBattle_2:
# 267 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
	goto SunshineWoods_Eventscript_HotaruBattle_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage1::
# 304 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0
# 305 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2
# 309 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1:
# 311 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2:
# 306 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage2::
# 315 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0
# 316 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2
# 320 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1:
# 322 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2:
# 317 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2::
# 326 "data/maps/SunshineWoods/scripts.pory"
	lock
# 327 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0
# 328 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 329 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 330 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 331 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3::
# 334 "data/maps/SunshineWoods/scripts.pory"
	lock
# 335 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0
# 336 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 337 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 338 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 339 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji::
# 343 "data/maps/SunshineWoods/scripts.pory"
	special SpawnCameraObject
# 344 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0
# 345 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 346 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 347 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, walkinplacedown
# 348 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 349 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0
# 350 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1
# 351 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, walkinplaceup
# 352 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 353 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2
# 354 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3
# 355 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 356 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 357 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1
# 358 "data/maps/SunshineWoods/scripts.pory"
	delay 4
# 359 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2
# 360 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 361 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3
# 362 "data/maps/SunshineWoods/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 363 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 364 "data/maps/SunshineWoods/scripts.pory"
	special RemoveCameraObject
# 365 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 12, 12, 17
# 366 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 12, 12, 17
# 367 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 12, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 368 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 11, 20, 10
# 369 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 11, 20, 10
# 370 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
# 371 "data/maps/SunshineWoods/scripts.pory"
	release
# 372 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 373 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


SunshineWoods_Eventscript_KGStaff1_Battle::
# 378 "data/maps/SunshineWoods/scripts.pory"
	lock
# 379 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 380 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 381 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 382 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 383 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_0
# 384 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_1, SunshineWoods_Eventscript_KGStaff1_Battle_Text_1
# 385 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 386 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 387 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 388 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 389 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_2
# 393 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_3
# 398 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
# 399 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff1_Battle_1:
# 401 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 402 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 403 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 404 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 405 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 406 "data/maps/SunshineWoods/scripts.pory"
	removeobject 12
# 407 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_5
# 408 "data/maps/SunshineWoods/scripts.pory"
	addobject 14, MAP_SUNSHINE_WOODS
# 409 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 410 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_8
# 414 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
SunshineWoods_Eventscript_KGStaff1_Battle_7:
# 416 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 417 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 418 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 419 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_2
# 421 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 422 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 423 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 424 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_12
# 427 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_13
# 431 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff1_Battle_11:
# 433 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 434 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 435 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 436 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 437 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 438 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_3
# 439 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 440 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_4
# 441 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 442 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 443 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 444 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 445 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 446 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_5
# 447 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 448 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 449 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_18
# 452 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_19
# 456 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff1_Battle_17:
# 458 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 459 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 460 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 461 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_RESULT, 0
# 462 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 463 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 464 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff1_Battle_2:
# 390 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
# 391 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_3:
# 394 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
# 395 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_8:
# 411 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff1_Battle_7

SunshineWoods_Eventscript_KGStaff1_Battle_12:
# 425 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_13:
# 428 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_18:
# 450 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17

SunshineWoods_Eventscript_KGStaff1_Battle_19:
# 453 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17


SunshineWoods_Eventscript_KGStaff1_PostBattle::
# 469 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0
# 470 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_KGStaff2_Battle::
# 474 "data/maps/SunshineWoods/scripts.pory"
	lock
# 475 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 476 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_0
# 477 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 478 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 479 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 480 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 481 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_2, SunshineWoods_Eventscript_KGStaff2_Battle_Text_1
# 482 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 483 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 484 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 485 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 486 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_2
# 489 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_3
# 492 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_4
# 496 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
SunshineWoods_Eventscript_KGStaff2_Battle_1:
# 498 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 499 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 500 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 501 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 502 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 503 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 504 "data/maps/SunshineWoods/scripts.pory"
	removeobject 11
# 505 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_7
# 506 "data/maps/SunshineWoods/scripts.pory"
	addobject 15, MAP_SUNSHINE_WOODS
# 507 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_10
SunshineWoods_Eventscript_KGStaff2_Battle_9:
# 510 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 511 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_13
# 515 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_14
# 519 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_15
# 524 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
# 525 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff2_Battle_12:
# 528 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 529 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 530 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_2
# 532 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 533 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 534 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 535 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_21
# 538 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_22
# 541 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_23
# 545 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff2_Battle_20:
# 547 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 548 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 549 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 550 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 551 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 552 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_3
# 553 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 554 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_4
# 555 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 556 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 557 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 558 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 559 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 560 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_5
# 561 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 562 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 563 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_29
# 566 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_30
# 569 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_31
# 573 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff2_Battle_28:
# 575 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 576 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 577 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 578 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 579 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 580 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 581 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff2_Battle_2:
# 487 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_3:
# 490 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_4:
# 493 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_10:
# 508 "data/maps/SunshineWoods/scripts.pory"
	removeobject 14
	goto SunshineWoods_Eventscript_KGStaff2_Battle_9

SunshineWoods_Eventscript_KGStaff2_Battle_13:
# 512 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
# 513 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_14:
# 516 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1
# 517 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_15:
# 520 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 521 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_21:
# 536 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_22:
# 539 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_23:
# 542 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_29:
# 564 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_30:
# 567 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_31:
# 570 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28


SunshineWoods_Eventscript_KGStaff2_PostBattle::
# 586 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0
# 587 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown::
# 591 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2
# 600 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4
	return

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2:
# 592 "data/maps/SunshineWoods/scripts.pory"
	lock
# 593 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 594 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 595 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0
# 596 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 597 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4:
# 601 "data/maps/SunshineWoods/scripts.pory"
	lock
# 602 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 603 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 604 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 605 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 606 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 607 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 608 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 609 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 610 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 611 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 612 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1
# 614 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 615 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, shakehorizontal
# 616 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 617 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2
# 620 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 621 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, walkinplaceleft
# 622 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 623 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3
# 625 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 626 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 627 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_RESULT, 0
# 628 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 629 "data/maps/SunshineWoods/scripts.pory"
	warp MAP_ROUTE2_HOUSE
	return


# 327 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0:
# 327 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 327 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 329 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1:
# 329 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 329 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 329 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 335 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0:
# 335 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 335 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 335 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 344 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0:
# 344 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 344 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_southeast
	step_end

# 357 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1:
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
	step_end

# 359 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2:
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
	step_end

# 361 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3:
# 361 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 361 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_northwest
	step_end

# 390 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0:
# 390 "data/maps/SunshineWoods/scripts.pory"
	jump_down
	step_end

# 394 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1:
# 394 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

# 398 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2:
# 398 "data/maps/SunshineWoods/scripts.pory"
	jump_up
	step_end

# 411 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3:
# 411 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 411 "data/maps/SunshineWoods/scripts.pory"
	face_up
	step_end

# 414 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4:
# 414 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 414 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 425 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5:
# 425 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_down
	step_end

# 428 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6:
# 428 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_right
	step_end

# 431 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7:
# 431 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_up
	step_end

# 450 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8:
# 450 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 450 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 450 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 450 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 450 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 453 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9:
# 453 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 453 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 453 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 456 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10:
# 456 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 456 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 456 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 456 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 456 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 490 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0:
# 490 "data/maps/SunshineWoods/scripts.pory"
	jump_left
	step_end

# 516 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1:
# 516 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 516 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 520 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2:
# 520 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 520 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 542 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3:
# 542 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_left
	step_end

# 567 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4:
# 567 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 567 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 567 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 567 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 567 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 570 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5:
# 570 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 570 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 570 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 570 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 570 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 63 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 99 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 109 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 125 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokémon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 193 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 212 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 246 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Eventscript_IkeBattle_Text_0:
# 259 "data/maps/SunshineWoods/scripts.pory"
	.string "Ike$"

SunshineWoods_Eventscript_HotaruBattle_Text_0:
# 272 "data/maps/SunshineWoods/scripts.pory"
	.string "Hotaru$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0:
# 304 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 1$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1:
# 306 "data/maps/SunshineWoods/scripts.pory"
	.string "Who the hell would explode an\n"
	.string "orphanage? Are they even human?$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2:
# 309 "data/maps/SunshineWoods/scripts.pory"
	.string "Our apologies but Sunshine Orphanage\n"
	.string "is currently off-limits.$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0:
# 315 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 2$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1:
# 317 "data/maps/SunshineWoods/scripts.pory"
	.string "Maybe this is what Kurosawa-san was\n"
	.string "talking about... If only the higher-ups\l"
	.string "listened to him.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0:
# 349 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 1$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1:
# 350 "data/maps/SunshineWoods/scripts.pory"
	.string "Keep your eyes peeled. One has silver\n"
	.string "hair and the other wears a black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2:
# 353 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 2$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3:
# 354 "data/maps/SunshineWoods/scripts.pory"
	.string "You should cover the east. I'll search\n"
	.string "the south.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_0:
# 383 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}Wait, you're...!$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_1:
# 384 "data/maps/SunshineWoods/scripts.pory"
	.string "This is not good. I must alert the\n"
	.string "manager.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_2:
# 419 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great teamwork, Inteleon.\p"
	.string "Now let's check if he has any useful\n"
	.string "information.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_3:
# 438 "data/maps/SunshineWoods/scripts.pory"
	.string "Besides the Exp candies, there's also a\n"
	.string "picture of a silver-haired boy.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_4:
# 440 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So this is one of the boys they're\n"
	.string "searching for?$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_5:
# 446 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, let's go,\n"
	.string "Inteleon.$"

SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0:
# 469 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's out cold. There's no further\n"
	.string "information I can get out of him.)$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_0:
# 476 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}The Kirijo Young Lady?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_1:
# 481 "data/maps/SunshineWoods/scripts.pory"
	.string "What are you doing here?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_2:
# 530 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great job, Inteleon.\p"
	.string "Now let's see...$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_3:
# 552 "data/maps/SunshineWoods/scripts.pory"
	.string "In another pocket, there's also a\n"
	.string "picture of a boy wearing black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_4:
# 554 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Magnifique. Now I know how one of their\n"
	.string "targets looks like.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_5:
# 560 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, time to go.$"

SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0:
# 586 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's fainted. Inteleon hit him a little\n"
	.string "too hard but he should be fine.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0:
# 595 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's check the men in black for\n"
	.string "information.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1:
# 612 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Can you go help the rescue at the\n"
	.string "orphanage, Inteleon?\p"
	.string "Don't worry about me, I'll just go back\n"
	.string "to the house in Route 2 to do some\l"
	.string "research about the boys they're so\l"
	.string "interested in.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2:
# 617 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}Sigh... Then how about after I get to\n"
	.string "the house safely?\p"
	.string "I promise I'll stay there until you\n"
	.string "return.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3:
# 623 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon reluctantly agreed.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}C'est magnifique. Let's move out.$"

SunshineWoods_Text_IkeIntro::
# 277 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 282 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 286 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 290 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémon!$"

SunshineWoods_Text_HotaruDefeated::
# 294 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 298 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
