SunshineWoods_MapScripts::
# 2 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 38 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 42 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_8
# 4 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 22
	goto_if_lt SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 6
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_gt SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 15 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_ne SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 21 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 21
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 29 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 2, 4, 3
# 9 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 3, 5, 5
# 10 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 13 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 16 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_4
# 17 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_5
# 18 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 19 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_7
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 22 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 23 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 24 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_5
# 25 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_7
# 26 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 27 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 30 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 12, 12, 17
# 31 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 32 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 11, 20, 10
# 33 "data/maps/SunshineWoods/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 39 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnWarp6
# 40 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 21, SunshineWoods_Eventscript_MitsuruOnWarp21
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 43 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_TEMP_8, 0, SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru
# 44 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnFrame6
	.2byte 0


SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru::
# 49 "data/maps/SunshineWoods/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 50 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_3
SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_1:
# 54 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_2:
# 51 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_8
# 52 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
	goto SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_1

SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_3:
# 50 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_eq SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_2
	goto SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_1


SunshineWoods_Eventscript_OnWarp6::
# 58 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 59 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_WOODS
	return


SunshineWoods_Eventscript_MitsuruOnWarp21::
	return


# 65 "data/maps/SunshineWoods/scripts.pory"
playerfaceright:
# 66 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass::
# 70 "data/maps/SunshineWoods/scripts.pory"
	lock
# 71 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, facedown
# 72 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, facedown
# 73 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 74 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 77 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 78 "data/maps/SunshineWoods/scripts.pory"
	release
# 79 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 80 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 81 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_OnFrame6::
# 85 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 89 "data/maps/SunshineWoods/scripts.pory"
	lock
# 90 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 91 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_MikiFoundSomething
# 92 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 94 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 97 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 98 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 99 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 100 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 101 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 102 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 103 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 103 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 104 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 108 "data/maps/SunshineWoods/scripts.pory"
	lock
# 109 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 111 "data/maps/SunshineWoods/scripts.pory"
	release
# 112 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 116 "data/maps/SunshineWoods/scripts.pory"
	lock
# 117 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, faceup
# 118 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 119 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 121 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 122 "data/maps/SunshineWoods/scripts.pory"
	release
# 123 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 127 "data/maps/SunshineWoods/scripts.pory"
	lock
# 128 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 129 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 130 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 131 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_ShinjiroAlerted
# 132 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_MikiAlerted
# 133 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 134 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 135 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 137 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 138 "data/maps/SunshineWoods/scripts.pory"
	release
# 139 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 142 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 143 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 144 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 145 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 146 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 147 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 148 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 149 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 151 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 152 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 153 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 154 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 155 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 156 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 157 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 158 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 160 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 161 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 162 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 165 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 166 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 170 "data/maps/SunshineWoods/scripts.pory"
	lock
# 171 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 4, MAP_SUNSHINE_WOODS
# 172 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 173 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 174 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, jumpright
# 175 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_Stayback
# 176 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 177 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_OnGuard
# 178 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 179 "data/maps/SunshineWoods/scripts.pory"
	release
# 180 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 183 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 184 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 185 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 186 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 187 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 188 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 190 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 191 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 192 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 193 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 197 "data/maps/SunshineWoods/scripts.pory"
	lock
# 198 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 199 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 200 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_PawmiIsWeak
# 201 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 202 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 203 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 207 "data/maps/SunshineWoods/scripts.pory"
	release
# 208 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 211 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 212 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 213 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 214 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 215 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 216 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 220 "data/maps/SunshineWoods/scripts.pory"
	lock
# 221 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 222 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 223 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 224 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 225 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
# 226 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 227 "data/maps/SunshineWoods/scripts.pory"
	removeobject 2
# 228 "data/maps/SunshineWoods/scripts.pory"
	removeobject 3
# 229 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 230 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 231 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 240 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 241 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 245 "data/maps/SunshineWoods/scripts.pory"
	lock
# 246 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 247 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 248 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 249 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 250 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 255 "data/maps/SunshineWoods/scripts.pory"
	lock
# 256 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 258 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_IkeBattle::
# 263 "data/maps/SunshineWoods/scripts.pory"
	checkplayergender
# 264 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineWoods_Eventscript_IkeBattle_2
# 268 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE_2, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
SunshineWoods_Eventscript_IkeBattle_1:
# 270 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_IkeBattle_Text_0
# 271 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end

SunshineWoods_Eventscript_IkeBattle_2:
# 265 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
	goto SunshineWoods_Eventscript_IkeBattle_1


SunshineWoods_Eventscript_HotaruBattle::
# 276 "data/maps/SunshineWoods/scripts.pory"
	checkplayergender
# 277 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineWoods_Eventscript_HotaruBattle_2
# 281 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU_2, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
SunshineWoods_Eventscript_HotaruBattle_1:
# 283 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_HotaruBattle_Text_0
# 284 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end

SunshineWoods_Eventscript_HotaruBattle_2:
# 278 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
	goto SunshineWoods_Eventscript_HotaruBattle_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage1::
# 315 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0
# 316 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2
# 320 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1:
# 322 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	end

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2:
# 317 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage2::
# 327 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0
# 328 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2
# 332 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1:
# 334 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	end

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2:
# 329 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2::
# 339 "data/maps/SunshineWoods/scripts.pory"
	lock
# 340 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0
# 341 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 342 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 343 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 344 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3::
# 347 "data/maps/SunshineWoods/scripts.pory"
	lock
# 348 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0
# 349 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 350 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 351 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 352 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji::
# 356 "data/maps/SunshineWoods/scripts.pory"
	special SpawnCameraObject
# 357 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0
# 358 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 359 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 360 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, walkinplacedown
# 361 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 362 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0
# 363 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1
# 364 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, walkinplaceup
# 365 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 366 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2
# 367 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3
# 368 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 369 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 370 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1
# 371 "data/maps/SunshineWoods/scripts.pory"
	delay 4
# 372 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2
# 373 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 374 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3
# 375 "data/maps/SunshineWoods/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 376 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 377 "data/maps/SunshineWoods/scripts.pory"
	special RemoveCameraObject
# 378 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 12, 12, 17
# 379 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 12, 12, 17
# 380 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 12, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 381 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 11, 20, 10
# 382 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 11, 20, 10
# 383 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
# 384 "data/maps/SunshineWoods/scripts.pory"
	release
# 385 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 386 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 9, 45
	end


SunshineWoods_Eventscript_KGStaff1_Battle::
# 391 "data/maps/SunshineWoods/scripts.pory"
	lock
# 392 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 393 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 394 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 395 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 396 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_0
# 397 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_1, SunshineWoods_Eventscript_KGStaff1_Battle_Text_1
# 398 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 399 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 400 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 401 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 402 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_2
# 406 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_3
# 411 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
# 412 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff1_Battle_1:
# 414 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 415 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 416 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 417 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 418 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 419 "data/maps/SunshineWoods/scripts.pory"
	removeobject 12
# 420 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_5
# 421 "data/maps/SunshineWoods/scripts.pory"
	addobject 14, MAP_SUNSHINE_WOODS
# 422 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 423 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_8
# 427 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
SunshineWoods_Eventscript_KGStaff1_Battle_7:
# 429 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 430 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 431 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 432 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_2
# 434 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 435 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 436 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 437 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_12
# 440 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_13
# 444 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff1_Battle_11:
# 446 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 447 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 448 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 449 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 450 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 451 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_3
# 452 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 453 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_4
# 454 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 455 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 456 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 457 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 458 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 459 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_5
# 460 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 461 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 462 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_18
# 465 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_19
# 469 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff1_Battle_17:
# 471 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 472 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 473 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 474 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_RESULT, 0
# 475 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 476 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 477 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff1_Battle_2:
# 403 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
# 404 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_3:
# 407 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
# 408 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_8:
# 424 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff1_Battle_7

SunshineWoods_Eventscript_KGStaff1_Battle_12:
# 438 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_13:
# 441 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_18:
# 463 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17

SunshineWoods_Eventscript_KGStaff1_Battle_19:
# 466 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17


SunshineWoods_Eventscript_KGStaff1_PostBattle::
# 482 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0
# 483 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_KGStaff2_Battle::
# 487 "data/maps/SunshineWoods/scripts.pory"
	lock
# 488 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 489 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_0
# 490 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 491 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 492 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 493 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 494 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_2, SunshineWoods_Eventscript_KGStaff2_Battle_Text_1
# 495 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 496 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 497 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 498 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 499 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_2
# 502 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_3
# 505 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_4
# 509 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
SunshineWoods_Eventscript_KGStaff2_Battle_1:
# 511 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 512 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 513 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 514 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 515 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 516 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 517 "data/maps/SunshineWoods/scripts.pory"
	removeobject 11
# 518 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_7
# 519 "data/maps/SunshineWoods/scripts.pory"
	addobject 15, MAP_SUNSHINE_WOODS
# 520 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_10
SunshineWoods_Eventscript_KGStaff2_Battle_9:
# 523 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 524 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_13
# 528 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_14
# 532 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_15
# 537 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
# 538 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff2_Battle_12:
# 541 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 542 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 543 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_2
# 545 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 546 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 547 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 548 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_21
# 551 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_22
# 554 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_23
# 558 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff2_Battle_20:
# 560 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 561 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 562 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 563 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 564 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 565 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_3
# 566 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 567 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_4
# 568 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 569 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 570 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 571 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 572 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 573 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_5
# 574 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 575 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 576 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_29
# 579 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_30
# 582 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_31
# 586 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff2_Battle_28:
# 588 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 589 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 590 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 591 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 592 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 593 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 594 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff2_Battle_2:
# 500 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_3:
# 503 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_4:
# 506 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_10:
# 521 "data/maps/SunshineWoods/scripts.pory"
	removeobject 14
	goto SunshineWoods_Eventscript_KGStaff2_Battle_9

SunshineWoods_Eventscript_KGStaff2_Battle_13:
# 525 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
# 526 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_14:
# 529 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1
# 530 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_15:
# 533 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 534 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_21:
# 549 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_22:
# 552 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_23:
# 555 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_29:
# 577 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_30:
# 580 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_31:
# 583 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28


SunshineWoods_Eventscript_KGStaff2_PostBattle::
# 599 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0
# 600 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown::
# 604 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2
# 613 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4
	return

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2:
# 605 "data/maps/SunshineWoods/scripts.pory"
	lock
# 606 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 607 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 608 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0
# 609 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 610 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4:
# 614 "data/maps/SunshineWoods/scripts.pory"
	lock
# 615 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 616 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 617 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 618 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 619 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 620 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 621 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 622 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 623 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 624 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 625 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1
# 627 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 628 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, shakehorizontal
# 629 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 630 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2
# 633 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 634 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, walkinplaceleft
# 635 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 636 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3
# 638 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 639 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 640 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 641 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 642 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 15, 05
# 643 "data/maps/SunshineWoods/scripts.pory"
	warp MAP_ROUTE2_HOUSE, 3, 11
	return


SunshineWoods_Eventscript_AkihikoPrologueStart::
# 648 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 649 "data/maps/SunshineWoods/scripts.pory"
	hidefollowernpc
# 650 "data/maps/SunshineWoods/scripts.pory"
	lock
# 651 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_0
# 652 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 653 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 654 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 655 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_1
# 663 "data/maps/SunshineWoods/scripts.pory"
	fadenewbgm MUS_XC2_GARFONT_MERCERNARIES
# 664 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_2
# 666 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 667 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 668 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_5
# 672 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_6
# 676 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_7
# 682 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_3
# 683 "data/maps/SunshineWoods/scripts.pory"
	delay 8
# 684 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
SunshineWoods_Eventscript_AkihikoPrologueStart_4:
# 686 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 687 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 688 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_3
# 692 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 693 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 694 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, emotepensive
# 695 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 696 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_4
# 698 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_5, MSGBOX_YESNO
# 700 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_12
# 713 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 714 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SHINY
# 715 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, pointup3
# 716 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 717 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_7
# 718 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 719 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 720 "data/maps/SunshineWoods/scripts.pory"
	callnative Script_SwitchMainCharacter
# 721 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 0
# 722 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
# 723 "data/maps/SunshineWoods/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 724 "data/maps/SunshineWoods/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 725 "data/maps/SunshineWoods/scripts.pory"
	makecharaUnavailable CHARACTER_MITSURU
# 726 "data/maps/SunshineWoods/scripts.pory"
	makecharaUnavailable CHARACTER_INTELEON_T
# 727 "data/maps/SunshineWoods/scripts.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
# 728 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 729 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 730 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 731 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_EXP_SHARE
# 732 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_CAMP_GEARS
# 733 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_ESCAPE_ROPE
# 734 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 735 "data/maps/SunshineWoods/scripts.pory"
	removeallitem ITEM_POKE_BALL, VAR_0x800A
# 736 "data/maps/SunshineWoods/scripts.pory"
	removeallitem ITEM_GREAT_BALL, VAR_0x800B
# 737 "data/maps/SunshineWoods/scripts.pory"
	destroyfollowernpc
# 738 "data/maps/SunshineWoods/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30
# 739 "data/maps/SunshineWoods/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 740 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 1
# 741 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE, 13, 18
# 742 "data/maps/SunshineWoods/scripts.pory"
	special DrawWholeMapView
# 743 "data/maps/SunshineWoods/scripts.pory"
	waitstate
	return

SunshineWoods_Eventscript_AkihikoPrologueStart_1:
# 656 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_1
# 658 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 659 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_AkihikoPrologueStart_5:
# 669 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_0
# 670 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_4

SunshineWoods_Eventscript_AkihikoPrologueStart_6:
# 673 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
# 674 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_4

SunshineWoods_Eventscript_AkihikoPrologueStart_7:
# 677 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
# 678 "data/maps/SunshineWoods/scripts.pory"
	delay 8
# 679 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_2
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_4

SunshineWoods_Eventscript_AkihikoPrologueStart_12:
# 701 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_6
# 702 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 703 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_STAT_DECREASE
# 704 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, pointdown3
# 705 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 706 "data/maps/SunshineWoods/scripts.pory"
	subvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 3
# 707 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_TEMP_0, 1
# 708 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 748 "data/maps/SunshineWoods/scripts.pory"
pointup3:
# 749 "data/maps/SunshineWoods/scripts.pory"
	point_up_3
	step_end

# 340 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0:
# 340 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 340 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 342 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1:
# 342 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 342 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 342 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 348 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0:
# 348 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 348 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 348 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 357 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0:
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 357 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_southeast
	step_end

# 370 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1:
# 370 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 370 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 370 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 370 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 370 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 370 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
	step_end

# 372 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2:
# 372 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 372 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 372 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 372 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 372 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 372 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 372 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 372 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
	step_end

# 374 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3:
# 374 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 374 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_northwest
	step_end

# 403 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0:
# 403 "data/maps/SunshineWoods/scripts.pory"
	jump_down
	step_end

# 407 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1:
# 407 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

# 411 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2:
# 411 "data/maps/SunshineWoods/scripts.pory"
	jump_up
	step_end

# 424 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3:
# 424 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 424 "data/maps/SunshineWoods/scripts.pory"
	face_up
	step_end

# 427 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4:
# 427 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 427 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 438 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5:
# 438 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_down
	step_end

# 441 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6:
# 441 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_right
	step_end

# 444 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7:
# 444 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_up
	step_end

# 463 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8:
# 463 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 463 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 463 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 463 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 463 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 466 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9:
# 466 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 466 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 466 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 469 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10:
# 469 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 469 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 469 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 469 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 469 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 503 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0:
# 503 "data/maps/SunshineWoods/scripts.pory"
	jump_left
	step_end

# 529 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1:
# 529 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 529 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 533 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2:
# 533 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 533 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 555 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3:
# 555 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_left
	step_end

# 580 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4:
# 580 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 580 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 580 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 580 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 580 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 583 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5:
# 583 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 583 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 583 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 583 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 583 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 669 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_0:
# 669 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 669 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 669 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 669 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 669 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 669 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 669 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 670 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1:
# 670 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 670 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 670 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 670 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 670 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 679 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_2:
# 679 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 679 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 679 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 679 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 679 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 679 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 679 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 682 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_3:
# 682 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 682 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 682 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 682 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 682 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 74 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 109 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 119 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 135 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokémon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 203 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 222 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 256 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Eventscript_IkeBattle_Text_0:
# 270 "data/maps/SunshineWoods/scripts.pory"
	.string "Ike$"

SunshineWoods_Eventscript_HotaruBattle_Text_0:
# 283 "data/maps/SunshineWoods/scripts.pory"
	.string "Hotaru$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0:
# 315 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 1$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1:
# 317 "data/maps/SunshineWoods/scripts.pory"
	.string "Who the hell would explode an\n"
	.string "orphanage? Are they even human?$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2:
# 320 "data/maps/SunshineWoods/scripts.pory"
	.string "Our apologies but Sunshine Orphanage\n"
	.string "is currently off-limits.$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0:
# 327 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 2$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1:
# 329 "data/maps/SunshineWoods/scripts.pory"
	.string "Maybe this is what Kurosawa-san was\n"
	.string "talking about... If only the higher-ups\l"
	.string "listened to him.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0:
# 362 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 1$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1:
# 363 "data/maps/SunshineWoods/scripts.pory"
	.string "Keep your eyes peeled. One has silver\n"
	.string "hair and the other wears a black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2:
# 366 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 2$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3:
# 367 "data/maps/SunshineWoods/scripts.pory"
	.string "You should cover the east. I'll search\n"
	.string "the south.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_0:
# 396 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}Wait, you're...!$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_1:
# 397 "data/maps/SunshineWoods/scripts.pory"
	.string "This is not good. I must alert the\n"
	.string "manager.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_2:
# 432 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great teamwork, Inteleon.\p"
	.string "Now let's check if he has any useful\n"
	.string "information.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_3:
# 451 "data/maps/SunshineWoods/scripts.pory"
	.string "Besides the Exp candies, there's also a\n"
	.string "picture of a silver-haired boy.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_4:
# 453 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So this is one of the boys they're\n"
	.string "searching for?$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_5:
# 459 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, let's go,\n"
	.string "Inteleon.$"

SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0:
# 482 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's out cold. There's no further\n"
	.string "information I can get out of him.)$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_0:
# 489 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}The Kirijo Young Lady?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_1:
# 494 "data/maps/SunshineWoods/scripts.pory"
	.string "What are you doing here?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_2:
# 543 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great job, Inteleon.\p"
	.string "Now let's see...$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_3:
# 565 "data/maps/SunshineWoods/scripts.pory"
	.string "In another pocket, there's also a\n"
	.string "picture of a boy wearing black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_4:
# 567 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Magnifique. Now I know how one of their\n"
	.string "targets looks like.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_5:
# 573 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, time to go.$"

SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0:
# 599 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's fainted. Inteleon hit him a little\n"
	.string "too hard but he should be fine.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0:
# 608 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's check the men in black for\n"
	.string "information.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1:
# 625 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Can you go help the rescue at the\n"
	.string "orphanage, Inteleon?\p"
	.string "Don't worry about me, I'll just go back\n"
	.string "to the house in Route 2 to do some\l"
	.string "research about the boys they're so\l"
	.string "interested in.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2:
# 630 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}Sigh... Then how about after I get to\n"
	.string "the house safely?\p"
	.string "I promise I'll stay there until you\n"
	.string "return.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3:
# 636 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon reluctantly agreed.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}C'est magnifique. Let's move out.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_0:
# 651 "data/maps/SunshineWoods/scripts.pory"
	.string "{COLOR RED}Tips: From this point onward, the\n"
	.string "choices you made thorough the game will\l"
	.string "ultimately affect the story outcome.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_1:
# 656 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}.......{PAUSE 60} Sorry, I want to be alone for a\n"
	.string "while. Can we talk later?$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_2:
# 664 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}So this is where you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Hey, Kirijo. Have a seat.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_3:
# 688 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}What are you doing here, if I may ask?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Just... {PAUSE 60}reminiscing,{PAUSE 60} I guess.\p"
	.string "This was where I, my sis and Shinji used\n"
	.string "to hang out.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That sounded like good times.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_4:
# 696 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Kirjo, uh...{PAUSE 60} This is kinda sudden but I\n"
	.string "guess I just want to talk about this to\l"
	.string "someone.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_5:
# 698 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Would you listen? {COLOR GREEN}(Begin Akihiko's\n"
	.string "prologue quest?)$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_6:
# 701 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Oh, okay......$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_7:
# 717 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thanks!$"

SunshineWoods_Text_IkeIntro::
# 288 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 293 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 297 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 301 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémon!$"

SunshineWoods_Text_HotaruDefeated::
# 305 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 309 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
