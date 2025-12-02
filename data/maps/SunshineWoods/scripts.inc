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
	return


# 86 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 87 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 88 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 89 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 90 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 91 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 92 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 92 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 93 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 97 "data/maps/SunshineWoods/scripts.pory"
	lock
# 98 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 100 "data/maps/SunshineWoods/scripts.pory"
	release
# 101 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 105 "data/maps/SunshineWoods/scripts.pory"
	lock
# 106 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, faceup
# 107 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 108 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 110 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 111 "data/maps/SunshineWoods/scripts.pory"
	release
# 112 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 116 "data/maps/SunshineWoods/scripts.pory"
	lock
# 117 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 118 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 119 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 120 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_ShinjiroAlerted
# 121 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_MikiAlerted
# 122 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 123 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 124 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 126 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 127 "data/maps/SunshineWoods/scripts.pory"
	release
# 128 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 131 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 132 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 133 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 134 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 135 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 136 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 137 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 138 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 140 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 141 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 142 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 143 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 144 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 145 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 146 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 147 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 149 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 150 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 151 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 154 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 155 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 159 "data/maps/SunshineWoods/scripts.pory"
	lock
# 160 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 4, MAP_SUNSHINE_WOODS
# 161 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 162 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 163 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, jumpright
# 164 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_Stayback
# 165 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 166 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_OnGuard
# 167 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 168 "data/maps/SunshineWoods/scripts.pory"
	release
# 169 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 172 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 173 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 174 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 175 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 176 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 177 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 179 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 180 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 181 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 182 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 186 "data/maps/SunshineWoods/scripts.pory"
	lock
# 187 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 188 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 189 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_PawmiIsWeak
# 190 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 191 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 192 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 196 "data/maps/SunshineWoods/scripts.pory"
	release
# 197 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 200 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 201 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 202 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 203 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 204 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 205 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 209 "data/maps/SunshineWoods/scripts.pory"
	lock
# 210 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 211 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 212 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 213 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 214 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
# 215 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 216 "data/maps/SunshineWoods/scripts.pory"
	removeobject 2
# 217 "data/maps/SunshineWoods/scripts.pory"
	removeobject 3
# 218 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 219 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 220 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 229 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 230 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 234 "data/maps/SunshineWoods/scripts.pory"
	lock
# 235 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 236 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 237 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 238 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 239 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 244 "data/maps/SunshineWoods/scripts.pory"
	lock
# 245 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 247 "data/maps/SunshineWoods/scripts.pory"
	release
	end


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
	return

SunshineWoods_Eventscript_IkeBattle_2:
# 254 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
	goto SunshineWoods_Eventscript_IkeBattle_1


SunshineWoods_Eventscript_HotaruBattle::
# 264 "data/maps/SunshineWoods/scripts.pory"
	checkplayergender
# 265 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineWoods_Eventscript_HotaruBattle_2
# 269 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU_2, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
SunshineWoods_Eventscript_HotaruBattle_1:
# 271 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_HotaruBattle_Text_0
# 272 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	return

SunshineWoods_Eventscript_HotaruBattle_2:
# 266 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
	goto SunshineWoods_Eventscript_HotaruBattle_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage1::
# 302 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0
# 303 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2
# 307 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1:
# 309 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2:
# 304 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage2::
# 313 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0
# 314 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2
# 318 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1:
# 320 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2:
# 315 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2::
# 324 "data/maps/SunshineWoods/scripts.pory"
	lock
# 325 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0
# 326 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 327 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 328 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 329 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3::
# 332 "data/maps/SunshineWoods/scripts.pory"
	lock
# 333 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0
# 334 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 335 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 336 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 337 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji::
# 341 "data/maps/SunshineWoods/scripts.pory"
	special SpawnCameraObject
# 342 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0
# 343 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 344 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 345 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, walkinplacedown
# 346 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 347 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0
# 348 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1
# 349 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, walkinplaceup
# 350 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 351 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2
# 352 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3
# 353 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 354 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 355 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1
# 356 "data/maps/SunshineWoods/scripts.pory"
	delay 4
# 357 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2
# 358 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 359 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3
# 360 "data/maps/SunshineWoods/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 361 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 362 "data/maps/SunshineWoods/scripts.pory"
	special RemoveCameraObject
# 363 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 12, 12, 17
# 364 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 12, 12, 17
# 365 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 12, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 366 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 11, 20, 10
# 367 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 11, 20, 10
# 368 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
# 369 "data/maps/SunshineWoods/scripts.pory"
	release
# 370 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 371 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 9, 45
	end


SunshineWoods_Eventscript_KGStaff1_Battle::
# 376 "data/maps/SunshineWoods/scripts.pory"
	lock
# 377 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 378 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 379 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 380 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 381 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_0
# 382 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_1, SunshineWoods_Eventscript_KGStaff1_Battle_Text_1
# 383 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 384 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 385 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 386 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 387 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_2
# 391 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_3
# 396 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
# 397 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff1_Battle_1:
# 399 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 400 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 401 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 402 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 403 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 404 "data/maps/SunshineWoods/scripts.pory"
	removeobject 12
# 405 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_5
# 406 "data/maps/SunshineWoods/scripts.pory"
	addobject 14, MAP_SUNSHINE_WOODS
# 407 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 408 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_8
# 412 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
SunshineWoods_Eventscript_KGStaff1_Battle_7:
# 414 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 415 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 416 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 417 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_2
# 419 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 420 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 421 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 422 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_12
# 425 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_13
# 429 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff1_Battle_11:
# 431 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 432 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 433 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 434 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 435 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 436 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_3
# 437 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 438 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_4
# 439 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 440 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 441 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 442 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 443 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 444 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_5
# 445 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 446 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 447 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_18
# 450 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_19
# 454 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff1_Battle_17:
# 456 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 457 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 458 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 459 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_RESULT, 0
# 460 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 461 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 462 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff1_Battle_2:
# 388 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
# 389 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_3:
# 392 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
# 393 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_8:
# 409 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff1_Battle_7

SunshineWoods_Eventscript_KGStaff1_Battle_12:
# 423 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_13:
# 426 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_18:
# 448 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17

SunshineWoods_Eventscript_KGStaff1_Battle_19:
# 451 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17


SunshineWoods_Eventscript_KGStaff1_PostBattle::
# 467 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0
# 468 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_KGStaff2_Battle::
# 472 "data/maps/SunshineWoods/scripts.pory"
	lock
# 473 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 474 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_0
# 475 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 476 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 477 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 478 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 479 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_2, SunshineWoods_Eventscript_KGStaff2_Battle_Text_1
# 480 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 481 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 482 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 483 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 484 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_2
# 487 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_3
# 490 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_4
# 494 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
SunshineWoods_Eventscript_KGStaff2_Battle_1:
# 496 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 497 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 498 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 499 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 500 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 501 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 502 "data/maps/SunshineWoods/scripts.pory"
	removeobject 11
# 503 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_7
# 504 "data/maps/SunshineWoods/scripts.pory"
	addobject 15, MAP_SUNSHINE_WOODS
# 505 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_10
SunshineWoods_Eventscript_KGStaff2_Battle_9:
# 508 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 509 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_13
# 513 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_14
# 517 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_15
# 522 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
# 523 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff2_Battle_12:
# 526 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 527 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 528 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_2
# 530 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 531 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 532 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 533 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_21
# 536 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_22
# 539 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_23
# 543 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff2_Battle_20:
# 545 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 546 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 547 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 548 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 549 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 550 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_3
# 551 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 552 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_4
# 553 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 554 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 555 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 556 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 557 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 558 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_5
# 559 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 560 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 561 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_29
# 564 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_30
# 567 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_31
# 571 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff2_Battle_28:
# 573 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 574 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 575 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 576 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 577 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 578 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 579 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff2_Battle_2:
# 485 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_3:
# 488 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_4:
# 491 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_10:
# 506 "data/maps/SunshineWoods/scripts.pory"
	removeobject 14
	goto SunshineWoods_Eventscript_KGStaff2_Battle_9

SunshineWoods_Eventscript_KGStaff2_Battle_13:
# 510 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
# 511 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_14:
# 514 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1
# 515 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_15:
# 518 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 519 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_21:
# 534 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_22:
# 537 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_23:
# 540 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_29:
# 562 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_30:
# 565 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_31:
# 568 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28


SunshineWoods_Eventscript_KGStaff2_PostBattle::
# 584 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0
# 585 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown::
# 589 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2
# 598 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4
	return

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2:
# 590 "data/maps/SunshineWoods/scripts.pory"
	lock
# 591 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 592 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 593 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0
# 594 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 595 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4:
# 599 "data/maps/SunshineWoods/scripts.pory"
	lock
# 600 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 601 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 602 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 603 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 604 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 605 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 606 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 607 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 608 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 609 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 610 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1
# 612 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 613 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, shakehorizontal
# 614 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 615 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2
# 618 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 619 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, walkinplaceleft
# 620 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 621 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3
# 623 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 624 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 625 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 626 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 627 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 15, 05
# 628 "data/maps/SunshineWoods/scripts.pory"
	warp MAP_ROUTE2_HOUSE, 5, 3
	return


# 325 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0:
# 325 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 325 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 327 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1:
# 327 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 327 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 327 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 333 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0:
# 333 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 333 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 333 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 342 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0:
# 342 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 342 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_southeast
	step_end

# 355 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1:
# 355 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 355 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 355 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 355 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 355 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 355 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
	step_end

# 357 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2:
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
	step_end

# 359 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3:
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 359 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_northwest
	step_end

# 388 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0:
# 388 "data/maps/SunshineWoods/scripts.pory"
	jump_down
	step_end

# 392 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1:
# 392 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

# 396 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2:
# 396 "data/maps/SunshineWoods/scripts.pory"
	jump_up
	step_end

# 409 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3:
# 409 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 409 "data/maps/SunshineWoods/scripts.pory"
	face_up
	step_end

# 412 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4:
# 412 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 412 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 423 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5:
# 423 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_down
	step_end

# 426 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6:
# 426 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_right
	step_end

# 429 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7:
# 429 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_up
	step_end

# 448 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8:
# 448 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 448 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 448 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 448 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 448 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 451 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9:
# 451 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 451 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 451 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 454 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10:
# 454 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 454 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 454 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 454 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 454 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 488 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0:
# 488 "data/maps/SunshineWoods/scripts.pory"
	jump_left
	step_end

# 514 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1:
# 514 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 514 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 518 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2:
# 518 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 518 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 540 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3:
# 540 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_left
	step_end

# 565 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4:
# 565 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 565 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 565 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 565 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 565 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 568 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5:
# 568 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 568 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 568 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 568 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 568 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 63 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 98 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 108 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 124 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokémon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 192 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 211 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 245 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Eventscript_IkeBattle_Text_0:
# 259 "data/maps/SunshineWoods/scripts.pory"
	.string "Ike$"

SunshineWoods_Eventscript_HotaruBattle_Text_0:
# 271 "data/maps/SunshineWoods/scripts.pory"
	.string "Hotaru$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0:
# 302 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 1$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1:
# 304 "data/maps/SunshineWoods/scripts.pory"
	.string "Who the hell would explode an\n"
	.string "orphanage? Are they even human?$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2:
# 307 "data/maps/SunshineWoods/scripts.pory"
	.string "Our apologies but Sunshine Orphanage\n"
	.string "is currently off-limits.$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0:
# 313 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 2$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1:
# 315 "data/maps/SunshineWoods/scripts.pory"
	.string "Maybe this is what Kurosawa-san was\n"
	.string "talking about... If only the higher-ups\l"
	.string "listened to him.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0:
# 347 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 1$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1:
# 348 "data/maps/SunshineWoods/scripts.pory"
	.string "Keep your eyes peeled. One has silver\n"
	.string "hair and the other wears a black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2:
# 351 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 2$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3:
# 352 "data/maps/SunshineWoods/scripts.pory"
	.string "You should cover the east. I'll search\n"
	.string "the south.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_0:
# 381 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}Wait, you're...!$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_1:
# 382 "data/maps/SunshineWoods/scripts.pory"
	.string "This is not good. I must alert the\n"
	.string "manager.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_2:
# 417 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great teamwork, Inteleon.\p"
	.string "Now let's check if he has any useful\n"
	.string "information.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_3:
# 436 "data/maps/SunshineWoods/scripts.pory"
	.string "Besides the Exp candies, there's also a\n"
	.string "picture of a silver-haired boy.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_4:
# 438 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So this is one of the boys they're\n"
	.string "searching for?$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_5:
# 444 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, let's go,\n"
	.string "Inteleon.$"

SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0:
# 467 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's out cold. There's no further\n"
	.string "information I can get out of him.)$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_0:
# 474 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}The Kirijo Young Lady?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_1:
# 479 "data/maps/SunshineWoods/scripts.pory"
	.string "What are you doing here?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_2:
# 528 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great job, Inteleon.\p"
	.string "Now let's see...$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_3:
# 550 "data/maps/SunshineWoods/scripts.pory"
	.string "In another pocket, there's also a\n"
	.string "picture of a boy wearing black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_4:
# 552 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Magnifique. Now I know how one of their\n"
	.string "targets looks like.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_5:
# 558 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, time to go.$"

SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0:
# 584 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's fainted. Inteleon hit him a little\n"
	.string "too hard but he should be fine.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0:
# 593 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's check the men in black for\n"
	.string "information.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1:
# 610 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Can you go help the rescue at the\n"
	.string "orphanage, Inteleon?\p"
	.string "Don't worry about me, I'll just go back\n"
	.string "to the house in Route 2 to do some\l"
	.string "research about the boys they're so\l"
	.string "interested in.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2:
# 615 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}Sigh... Then how about after I get to\n"
	.string "the house safely?\p"
	.string "I promise I'll stay there until you\n"
	.string "return.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3:
# 621 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon reluctantly agreed.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}C'est magnifique. Let's move out.$"

SunshineWoods_Text_IkeIntro::
# 275 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 280 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 284 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 288 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémon!$"

SunshineWoods_Text_HotaruDefeated::
# 292 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 296 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
