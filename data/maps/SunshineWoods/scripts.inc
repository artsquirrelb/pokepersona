SunshineWoods_MapScripts::
# 2 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 37 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 39 "data/maps/SunshineWoods/scripts.pory"
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
# 19 "data/maps/SunshineWoods/scripts.pory"
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
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 20 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 21 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_5
# 22 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 23 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 14, MAP_SUNSHINE_WOODS
# 24 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_WOODS
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
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 40 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnFrame6
	.2byte 0


SunshineWoods_Eventscript_OnWarp6::
# 45 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 46 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_WOODS
	return


# 48 "data/maps/SunshineWoods/scripts.pory"
playerfaceright:
# 49 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass::
# 53 "data/maps/SunshineWoods/scripts.pory"
	lock
# 54 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, facedown
# 55 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, facedown
# 56 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 57 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 60 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 61 "data/maps/SunshineWoods/scripts.pory"
	release
# 62 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 63 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 64 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_OnFrame6::
# 68 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 72 "data/maps/SunshineWoods/scripts.pory"
	lock
# 73 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 74 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_MikiFoundSomething
# 75 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 76 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 77 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 81 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 82 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 83 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 84 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 85 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 86 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 87 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 87 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 88 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 92 "data/maps/SunshineWoods/scripts.pory"
	lock
# 93 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 95 "data/maps/SunshineWoods/scripts.pory"
	release
# 96 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 100 "data/maps/SunshineWoods/scripts.pory"
	lock
# 101 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, faceup
# 102 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 103 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 105 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 106 "data/maps/SunshineWoods/scripts.pory"
	release
# 107 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 111 "data/maps/SunshineWoods/scripts.pory"
	lock
# 112 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 113 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 114 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 115 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_ShinjiroAlerted
# 116 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_MikiAlerted
# 117 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 118 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 119 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 121 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 122 "data/maps/SunshineWoods/scripts.pory"
	release
# 123 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 126 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 127 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 128 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 129 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 130 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 131 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 132 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 133 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 135 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 136 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 137 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 138 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 139 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 140 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 141 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 142 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 144 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 145 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 146 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 149 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 150 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 154 "data/maps/SunshineWoods/scripts.pory"
	lock
# 155 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 4, MAP_SUNSHINE_WOODS
# 156 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 157 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 158 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, jumpright
# 159 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_Stayback
# 160 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 161 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_OnGuard
# 162 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 163 "data/maps/SunshineWoods/scripts.pory"
	release
# 164 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 167 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 168 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 169 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 170 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 171 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 172 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 174 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 175 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 176 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 177 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 181 "data/maps/SunshineWoods/scripts.pory"
	lock
# 182 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 183 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 184 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_PawmiIsWeak
# 185 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 186 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 187 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 191 "data/maps/SunshineWoods/scripts.pory"
	release
# 192 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 195 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 196 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 197 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 198 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 199 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 200 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 204 "data/maps/SunshineWoods/scripts.pory"
	lock
# 205 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 206 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 207 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 208 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 209 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
# 210 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 211 "data/maps/SunshineWoods/scripts.pory"
	removeobject 2
# 212 "data/maps/SunshineWoods/scripts.pory"
	removeobject 3
# 213 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 214 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 215 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 224 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 225 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 229 "data/maps/SunshineWoods/scripts.pory"
	lock
# 230 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 231 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 232 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 233 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 234 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 239 "data/maps/SunshineWoods/scripts.pory"
	lock
# 240 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 242 "data/maps/SunshineWoods/scripts.pory"
	release
	return


SunshineWoods_Eventscript_IkeBattle::
# 246 "data/maps/SunshineWoods/scripts.pory"
	checkplayergender
# 247 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineWoods_Eventscript_IkeBattle_2
# 251 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE_2, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
SunshineWoods_Eventscript_IkeBattle_1:
# 253 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_IkeBattle_Text_0
# 254 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end

SunshineWoods_Eventscript_IkeBattle_2:
# 248 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
	goto SunshineWoods_Eventscript_IkeBattle_1


SunshineWoods_Eventscript_HotaruBattle::
# 259 "data/maps/SunshineWoods/scripts.pory"
	checkplayergender
# 260 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineWoods_Eventscript_HotaruBattle_2
# 264 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU_2, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
SunshineWoods_Eventscript_HotaruBattle_1:
# 266 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_HotaruBattle_Text_0
# 267 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end

SunshineWoods_Eventscript_HotaruBattle_2:
# 261 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
	goto SunshineWoods_Eventscript_HotaruBattle_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage1::
# 298 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0
# 299 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2
# 303 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1:
# 305 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2:
# 300 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage2::
# 309 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0
# 310 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2
# 314 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1:
# 316 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2:
# 311 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2::
# 320 "data/maps/SunshineWoods/scripts.pory"
	lock
# 321 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0
# 322 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 323 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 324 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 325 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3::
# 328 "data/maps/SunshineWoods/scripts.pory"
	lock
# 329 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0
# 330 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 331 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 332 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 333 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji::
# 337 "data/maps/SunshineWoods/scripts.pory"
	special SpawnCameraObject
# 338 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0
# 339 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 340 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 341 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, walkinplacedown
# 342 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 343 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0
# 344 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1
# 345 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, walkinplaceup
# 346 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 347 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2
# 348 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3
# 349 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 350 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 351 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1
# 352 "data/maps/SunshineWoods/scripts.pory"
	delay 4
# 353 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2
# 354 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 355 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3
# 356 "data/maps/SunshineWoods/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 357 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 358 "data/maps/SunshineWoods/scripts.pory"
	special RemoveCameraObject
# 359 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 12, 12, 17
# 360 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 12, 12, 17
# 361 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 12, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 362 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 11, 20, 10
# 363 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 11, 20, 10
# 364 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
# 365 "data/maps/SunshineWoods/scripts.pory"
	release
# 366 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 367 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


SunshineWoods_Eventscript_KGStaff1::
# 373 "data/maps/SunshineWoods/scripts.pory"
	goto_if_not_defeated TRAINER_KG_STAFF_SUNSHINE_WOODS_1, SunshineWoods_Eventscript_KGStaff1_Battle
# 374 "data/maps/SunshineWoods/scripts.pory"
	goto_if_defeated TRAINER_KG_STAFF_SUNSHINE_WOODS_1, SunshineWoods_Eventscript_KGStaff1_PostBattle
	return


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
	addobject 14
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
	playse SE_SUDOWOODO_SHAKE
# 421 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_12
# 424 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_13
# 428 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff1_Battle_11:
# 430 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 431 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 432 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_3
# 434 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 435 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 436 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 437 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_4
# 438 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 439 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_18
# 442 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_19
# 446 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff1_Battle_17:
# 448 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 449 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 450 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 451 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_RESULT, 0
# 452 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 453 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 454 "data/maps/SunshineWoods/scripts.pory"
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
# 409 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff1_Battle_7

SunshineWoods_Eventscript_KGStaff1_Battle_12:
# 422 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_13:
# 425 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_18:
# 440 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17

SunshineWoods_Eventscript_KGStaff1_Battle_19:
# 443 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17


SunshineWoods_Eventscript_KGStaff1_PostBattle::
# 459 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0
# 460 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_KGStaff2::
# 464 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_RESULT, VAR_0x8001
# 465 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_RESULT, VAR_0x8001
# 466 "data/maps/SunshineWoods/scripts.pory"
	goto_if_not_defeated TRAINER_KG_STAFF_SUNSHINE_WOODS_2, SunshineWoods_Eventscript_KGStaff2_Battle
# 467 "data/maps/SunshineWoods/scripts.pory"
	goto_if_defeated TRAINER_KG_STAFF_SUNSHINE_WOODS_2, SunshineWoods_Eventscript_KGStaff2_PostBattle
	return


SunshineWoods_Eventscript_KGStaff2_Battle::
# 471 "data/maps/SunshineWoods/scripts.pory"
	lock
# 472 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 473 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_0
# 474 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 475 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 476 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 477 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 478 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_2, SunshineWoods_Eventscript_KGStaff2_Battle_Text_1
# 479 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 480 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 481 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 482 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 483 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_2
# 486 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_3
# 489 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_4
# 493 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
SunshineWoods_Eventscript_KGStaff2_Battle_1:
# 495 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 496 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 497 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 498 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 499 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 500 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 501 "data/maps/SunshineWoods/scripts.pory"
	removeobject 11
# 502 "data/maps/SunshineWoods/scripts.pory"
	addobject 15
# 503 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_10
# 507 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_11
# 511 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_12
# 516 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
# 517 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff2_Battle_9:
# 520 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 521 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 522 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_2
# 524 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 525 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 526 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_18
# 529 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_19
# 532 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_20
# 536 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff2_Battle_17:
# 538 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 539 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 540 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_3
# 542 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 543 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 544 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 545 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_4
# 546 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 547 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_26
# 550 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_27
# 553 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_28
# 557 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff2_Battle_25:
# 559 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 560 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 561 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 562 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 563 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 564 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 565 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff2_Battle_2:
# 484 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_3:
# 487 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_4:
# 490 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_10:
# 504 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
# 505 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_9

SunshineWoods_Eventscript_KGStaff2_Battle_11:
# 508 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1
# 509 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_9

SunshineWoods_Eventscript_KGStaff2_Battle_12:
# 512 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 513 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_9

SunshineWoods_Eventscript_KGStaff2_Battle_18:
# 527 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_17

SunshineWoods_Eventscript_KGStaff2_Battle_19:
# 530 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff2_Battle_17

SunshineWoods_Eventscript_KGStaff2_Battle_20:
# 533 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff2_Battle_17

SunshineWoods_Eventscript_KGStaff2_Battle_26:
# 548 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff2_Battle_25

SunshineWoods_Eventscript_KGStaff2_Battle_27:
# 551 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4
	goto SunshineWoods_Eventscript_KGStaff2_Battle_25

SunshineWoods_Eventscript_KGStaff2_Battle_28:
# 554 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_25


SunshineWoods_Eventscript_KGStaff2_PostBattle::
# 570 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0
# 571 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown::
# 575 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2
# 584 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4
	return

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2:
# 576 "data/maps/SunshineWoods/scripts.pory"
	lock
# 577 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 578 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 579 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0
# 580 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 581 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4:
# 585 "data/maps/SunshineWoods/scripts.pory"
	lock
# 586 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 587 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 588 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 589 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 590 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 591 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 592 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 593 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 594 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 595 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 596 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1
# 598 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 599 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, shakehorizontal
# 600 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 601 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2
# 604 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 605 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, walkinplaceleft
# 606 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 607 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3
# 609 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 610 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 611 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_RESULT, 0
# 612 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 613 "data/maps/SunshineWoods/scripts.pory"
	warp MAP_ROUTE2_2
	return


# 321 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0:
# 321 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 321 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 323 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1:
# 323 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 323 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 323 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 329 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0:
# 329 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 329 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 329 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 338 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0:
# 338 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 338 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_southeast
	step_end

# 351 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1:
# 351 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 351 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 351 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 351 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 351 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 351 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
	step_end

# 353 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2:
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
	step_end

# 355 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3:
# 355 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 355 "data/maps/SunshineWoods/scripts.pory"
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

# 422 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5:
# 422 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_down
	step_end

# 425 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6:
# 425 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_right
	step_end

# 428 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7:
# 428 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_up
	step_end

# 440 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8:
# 440 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 440 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 440 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 440 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 440 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 443 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9:
# 443 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 443 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 443 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 446 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10:
# 446 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 446 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 446 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 446 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 446 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 487 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0:
# 487 "data/maps/SunshineWoods/scripts.pory"
	jump_left
	step_end

# 508 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1:
# 508 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 508 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 512 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2:
# 512 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 512 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 533 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3:
# 533 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_left
	step_end

# 551 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4:
# 551 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 551 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 551 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 551 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 551 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 554 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5:
# 554 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 554 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 554 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 554 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 554 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 57 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 93 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 103 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 119 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokémon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 187 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 206 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 240 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Eventscript_IkeBattle_Text_0:
# 253 "data/maps/SunshineWoods/scripts.pory"
	.string "Ike$"

SunshineWoods_Eventscript_HotaruBattle_Text_0:
# 266 "data/maps/SunshineWoods/scripts.pory"
	.string "Hotaru$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0:
# 298 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 1$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1:
# 300 "data/maps/SunshineWoods/scripts.pory"
	.string "Who the hell would explode an\n"
	.string "orphanage? Are they even human?$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2:
# 303 "data/maps/SunshineWoods/scripts.pory"
	.string "Our apologies but Sunshine Orphanage\n"
	.string "is currently off-limits.$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0:
# 309 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 2$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1:
# 311 "data/maps/SunshineWoods/scripts.pory"
	.string "Maybe this is what Kurosawa-san was\n"
	.string "talking about... If only the higher-ups\l"
	.string "listened to him.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0:
# 343 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 1$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1:
# 344 "data/maps/SunshineWoods/scripts.pory"
	.string "Keep your eyes peeled. One has silver\n"
	.string "hair and the other wears a black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2:
# 347 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 2$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3:
# 348 "data/maps/SunshineWoods/scripts.pory"
	.string "You should cover the east. I'll search\n"
	.string "the south.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_0:
# 383 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}Wait, you're...$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_1:
# 384 "data/maps/SunshineWoods/scripts.pory"
	.string "This is not good. I must alert the\n"
	.string "manager.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_2:
# 417 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great teamwork, Inteleon.\p"
	.string "Now let's check if he has any useful\n"
	.string "information.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_3:
# 432 "data/maps/SunshineWoods/scripts.pory"
	.string "Besides the Exp candies, there's also a\n"
	.string "picture of a silver-haired boy.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So this is one of the boys they're\n"
	.string "searching for?$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_4:
# 437 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, let's go,\n"
	.string "Inteleon.$"

SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0:
# 459 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's out cold. There's no further\n"
	.string "information I can get out of him.)$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_0:
# 473 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}The Kirijo Young Lady?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_1:
# 478 "data/maps/SunshineWoods/scripts.pory"
	.string "What are you doing here?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_2:
# 522 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great job, Inteleon.\p"
	.string "Now let's see...$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_3:
# 540 "data/maps/SunshineWoods/scripts.pory"
	.string "Besides the Exp candies, there's also a\n"
	.string "picture of a boy wearing black-red\l"
	.string "beanie.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Magnifique. Now I know how one of their\n"
	.string "targets looks like.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_4:
# 545 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, time to go.$"

SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0:
# 570 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's fainted. Inteleon hit him a little\n"
	.string "too hard but he should be fine.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0:
# 579 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's check the men in black for\n"
	.string "information.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1:
# 596 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Can you go help the rescue at the\n"
	.string "orphanage, Inteleon?\p"
	.string "Don't worry about me, I'll just go back\n"
	.string "to the house in Route 2 to do some\l"
	.string "research about the boys they're so\l"
	.string "interested in.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2:
# 601 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon doesn't look like it agrees.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}Sigh... Then how about after I get to\n"
	.string "the house safely?\p"
	.string "I promise I'll stay there until you\n"
	.string "return.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3:
# 607 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon reluctantly agreed.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}C'est magnifique. Let's move out.$"

SunshineWoods_Text_IkeIntro::
# 271 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 276 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 280 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 284 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémon!$"

SunshineWoods_Text_HotaruDefeated::
# 288 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 292 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
