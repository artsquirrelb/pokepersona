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
	setflag FLAG_TEMP_7
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
	clearflag FLAG_TEMP_7
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
	return

SunshineWoods_Eventscript_IkeBattle_2:
# 265 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
	goto SunshineWoods_Eventscript_IkeBattle_1


SunshineWoods_Eventscript_HotaruBattle::
# 275 "data/maps/SunshineWoods/scripts.pory"
	checkplayergender
# 276 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineWoods_Eventscript_HotaruBattle_2
# 280 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU_2, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
SunshineWoods_Eventscript_HotaruBattle_1:
# 282 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_HotaruBattle_Text_0
# 283 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	return

SunshineWoods_Eventscript_HotaruBattle_2:
# 277 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
	goto SunshineWoods_Eventscript_HotaruBattle_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage1::
# 313 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0
# 314 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2
# 318 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1:
# 320 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2:
# 315 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage2::
# 324 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0
# 325 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2
# 329 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1:
# 331 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2:
# 326 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2::
# 335 "data/maps/SunshineWoods/scripts.pory"
	lock
# 336 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0
# 337 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 338 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 339 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 340 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3::
# 343 "data/maps/SunshineWoods/scripts.pory"
	lock
# 344 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0
# 345 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 346 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 347 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 348 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji::
# 352 "data/maps/SunshineWoods/scripts.pory"
	special SpawnCameraObject
# 353 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0
# 354 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 355 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 356 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, walkinplacedown
# 357 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 358 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0
# 359 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1
# 360 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, walkinplaceup
# 361 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 362 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2
# 363 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3
# 364 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 365 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 366 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1
# 367 "data/maps/SunshineWoods/scripts.pory"
	delay 4
# 368 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2
# 369 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 370 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3
# 371 "data/maps/SunshineWoods/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 372 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 373 "data/maps/SunshineWoods/scripts.pory"
	special RemoveCameraObject
# 374 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 12, 12, 17
# 375 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 12, 12, 17
# 376 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 12, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 377 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 11, 20, 10
# 378 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 11, 20, 10
# 379 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
# 380 "data/maps/SunshineWoods/scripts.pory"
	release
# 381 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 382 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 9, 45
	end


SunshineWoods_Eventscript_KGStaff1_Battle::
# 387 "data/maps/SunshineWoods/scripts.pory"
	lock
# 388 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 389 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 390 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 391 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 392 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_0
# 393 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_1, SunshineWoods_Eventscript_KGStaff1_Battle_Text_1
# 394 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 395 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 396 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 397 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 398 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_2
# 402 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_3
# 407 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
# 408 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff1_Battle_1:
# 410 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 411 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 412 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 413 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 414 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 415 "data/maps/SunshineWoods/scripts.pory"
	removeobject 12
# 416 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_5
# 417 "data/maps/SunshineWoods/scripts.pory"
	addobject 14, MAP_SUNSHINE_WOODS
# 418 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 419 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_8
# 423 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
SunshineWoods_Eventscript_KGStaff1_Battle_7:
# 425 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 426 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 427 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 428 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_2
# 430 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 431 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 432 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 433 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_12
# 436 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_13
# 440 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff1_Battle_11:
# 442 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 443 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 444 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 445 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 446 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 447 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_3
# 448 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 449 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_4
# 450 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 451 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 452 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 453 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 454 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 455 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_5
# 456 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 457 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 458 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_18
# 461 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_19
# 465 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff1_Battle_17:
# 467 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 468 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 469 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 470 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_RESULT, 0
# 471 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 472 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 473 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff1_Battle_2:
# 399 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
# 400 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_3:
# 403 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
# 404 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_8:
# 420 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff1_Battle_7

SunshineWoods_Eventscript_KGStaff1_Battle_12:
# 434 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_13:
# 437 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_18:
# 459 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17

SunshineWoods_Eventscript_KGStaff1_Battle_19:
# 462 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17


SunshineWoods_Eventscript_KGStaff1_PostBattle::
# 478 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0
# 479 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_KGStaff2_Battle::
# 483 "data/maps/SunshineWoods/scripts.pory"
	lock
# 484 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 485 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_0
# 486 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 487 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 488 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 489 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 490 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_2, SunshineWoods_Eventscript_KGStaff2_Battle_Text_1
# 491 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 492 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 493 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 494 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 495 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_2
# 498 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_3
# 501 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_4
# 505 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
SunshineWoods_Eventscript_KGStaff2_Battle_1:
# 507 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 508 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 509 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 510 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 511 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 512 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 513 "data/maps/SunshineWoods/scripts.pory"
	removeobject 11
# 514 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_7
# 515 "data/maps/SunshineWoods/scripts.pory"
	addobject 15, MAP_SUNSHINE_WOODS
# 516 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_10
SunshineWoods_Eventscript_KGStaff2_Battle_9:
# 519 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 520 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_13
# 524 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_14
# 528 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_15
# 533 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
# 534 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff2_Battle_12:
# 537 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 538 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 539 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_2
# 541 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 542 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 543 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 544 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_21
# 547 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_22
# 550 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_23
# 554 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff2_Battle_20:
# 556 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 557 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 558 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 559 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 560 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 561 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_3
# 562 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 563 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_4
# 564 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 565 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 566 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 567 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 568 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 569 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_5
# 570 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 571 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 572 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_29
# 575 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_30
# 578 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_31
# 582 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff2_Battle_28:
# 584 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 585 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 586 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 587 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 588 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 589 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 590 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff2_Battle_2:
# 496 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_3:
# 499 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_4:
# 502 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_10:
# 517 "data/maps/SunshineWoods/scripts.pory"
	removeobject 14
	goto SunshineWoods_Eventscript_KGStaff2_Battle_9

SunshineWoods_Eventscript_KGStaff2_Battle_13:
# 521 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
# 522 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_14:
# 525 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1
# 526 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_15:
# 529 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 530 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_21:
# 545 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_22:
# 548 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_23:
# 551 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_29:
# 573 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_30:
# 576 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_31:
# 579 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28


SunshineWoods_Eventscript_KGStaff2_PostBattle::
# 595 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0
# 596 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown::
# 600 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2
# 609 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4
	return

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2:
# 601 "data/maps/SunshineWoods/scripts.pory"
	lock
# 602 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 603 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 604 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0
# 605 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 606 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4:
# 610 "data/maps/SunshineWoods/scripts.pory"
	lock
# 611 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 612 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 613 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 614 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 615 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 616 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 617 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 618 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 619 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 620 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 621 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1
# 623 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 624 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, shakehorizontal
# 625 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 626 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2
# 629 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 630 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, walkinplaceleft
# 631 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 632 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3
# 634 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 635 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 636 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 637 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 638 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 15, 05
# 639 "data/maps/SunshineWoods/scripts.pory"
	warp MAP_ROUTE2_HOUSE, 3, 11
	return


SunshineWoods_Eventscript_AkihikoPrologueStart::
# 644 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 645 "data/maps/SunshineWoods/scripts.pory"
	hidefollowernpc
# 646 "data/maps/SunshineWoods/scripts.pory"
	lock
# 647 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_0
# 648 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 649 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 650 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 651 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_1
# 659 "data/maps/SunshineWoods/scripts.pory"
	fadenewbgm MUS_XC2_GARFONT_MERCERNARIES
# 660 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_2
# 662 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 663 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 664 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_5
# 668 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_6
# 672 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_7
# 678 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_3
# 679 "data/maps/SunshineWoods/scripts.pory"
	delay 8
# 680 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
SunshineWoods_Eventscript_AkihikoPrologueStart_4:
# 682 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 683 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 684 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_3
# 688 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 689 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 690 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, emotepensive
# 691 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 692 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_4
# 694 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_5, MSGBOX_YESNO
# 696 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_12
# 709 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 710 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SHINY
# 711 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, pointup3
# 712 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 713 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_7
# 714 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 715 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 716 "data/maps/SunshineWoods/scripts.pory"
	callnative Script_SwitchMainCharacter
# 717 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 0
# 718 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 101
# 719 "data/maps/SunshineWoods/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 720 "data/maps/SunshineWoods/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 721 "data/maps/SunshineWoods/scripts.pory"
	makecharaUnavailable CHARACTER_MITSURU
# 722 "data/maps/SunshineWoods/scripts.pory"
	makecharaUnavailable CHARACTER_INTELEON_T
# 723 "data/maps/SunshineWoods/scripts.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
# 724 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 725 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 726 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 727 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_EXP_SHARE
# 728 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_CAMP_GEARS
# 729 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_ESCAPE_ROPE
# 730 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 731 "data/maps/SunshineWoods/scripts.pory"
	removeallitem ITEM_POKE_BALL, VAR_0x800A
# 732 "data/maps/SunshineWoods/scripts.pory"
	removeallitem ITEM_GREAT_BALL, VAR_0x800B
# 733 "data/maps/SunshineWoods/scripts.pory"
	destroyfollowernpc
# 734 "data/maps/SunshineWoods/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30
# 735 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE, 13, 18
# 736 "data/maps/SunshineWoods/scripts.pory"
	special DrawWholeMapView
# 737 "data/maps/SunshineWoods/scripts.pory"
	waitstate
	return

SunshineWoods_Eventscript_AkihikoPrologueStart_1:
# 652 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_1
# 654 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 655 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_AkihikoPrologueStart_5:
# 665 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_0
# 666 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_4

SunshineWoods_Eventscript_AkihikoPrologueStart_6:
# 669 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
# 670 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_4

SunshineWoods_Eventscript_AkihikoPrologueStart_7:
# 673 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
# 674 "data/maps/SunshineWoods/scripts.pory"
	delay 8
# 675 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_2
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_4

SunshineWoods_Eventscript_AkihikoPrologueStart_12:
# 697 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_6
# 698 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 699 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_STAT_DECREASE
# 700 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, pointdown3
# 701 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 702 "data/maps/SunshineWoods/scripts.pory"
	subvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 3
# 703 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_TEMP_0, 1
# 704 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 742 "data/maps/SunshineWoods/scripts.pory"
pointup3:
# 743 "data/maps/SunshineWoods/scripts.pory"
	point_up_3
	step_end

# 336 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0:
# 336 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 336 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 338 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1:
# 338 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 338 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 338 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 344 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0:
# 344 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 344 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 344 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 353 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0:
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 353 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_southeast
	step_end

# 366 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1:
# 366 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 366 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 366 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 366 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 366 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 366 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
	step_end

# 368 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2:
# 368 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 368 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 368 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 368 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 368 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 368 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 368 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 368 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
	step_end

# 370 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3:
# 370 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 370 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_northwest
	step_end

# 399 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0:
# 399 "data/maps/SunshineWoods/scripts.pory"
	jump_down
	step_end

# 403 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1:
# 403 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

# 407 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2:
# 407 "data/maps/SunshineWoods/scripts.pory"
	jump_up
	step_end

# 420 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3:
# 420 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 420 "data/maps/SunshineWoods/scripts.pory"
	face_up
	step_end

# 423 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4:
# 423 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 423 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 434 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5:
# 434 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_down
	step_end

# 437 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6:
# 437 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_right
	step_end

# 440 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7:
# 440 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_up
	step_end

# 459 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8:
# 459 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 459 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 459 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 459 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 459 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 462 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9:
# 462 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 462 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 462 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 465 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10:
# 465 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 465 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 465 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 465 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 465 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 499 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0:
# 499 "data/maps/SunshineWoods/scripts.pory"
	jump_left
	step_end

# 525 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1:
# 525 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 525 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 529 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2:
# 529 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 529 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 551 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3:
# 551 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_left
	step_end

# 576 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4:
# 576 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 576 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 576 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 576 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 576 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 579 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5:
# 579 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 579 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 579 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 579 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 579 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 665 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_0:
# 665 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 665 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 665 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 665 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 665 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 665 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 665 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 666 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1:
# 666 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 666 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 666 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 666 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 666 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 675 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_2:
# 675 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 675 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 675 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 675 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 675 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 675 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 675 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 678 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_3:
# 678 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 678 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 678 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 678 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 678 "data/maps/SunshineWoods/scripts.pory"
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
# 282 "data/maps/SunshineWoods/scripts.pory"
	.string "Hotaru$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0:
# 313 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 1$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1:
# 315 "data/maps/SunshineWoods/scripts.pory"
	.string "Who the hell would explode an\n"
	.string "orphanage? Are they even human?$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2:
# 318 "data/maps/SunshineWoods/scripts.pory"
	.string "Our apologies but Sunshine Orphanage\n"
	.string "is currently off-limits.$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0:
# 324 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 2$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1:
# 326 "data/maps/SunshineWoods/scripts.pory"
	.string "Maybe this is what Kurosawa-san was\n"
	.string "talking about... If only the higher-ups\l"
	.string "listened to him.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0:
# 358 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 1$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1:
# 359 "data/maps/SunshineWoods/scripts.pory"
	.string "Keep your eyes peeled. One has silver\n"
	.string "hair and the other wears a black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2:
# 362 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 2$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3:
# 363 "data/maps/SunshineWoods/scripts.pory"
	.string "You should cover the east. I'll search\n"
	.string "the south.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_0:
# 392 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}Wait, you're...!$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_1:
# 393 "data/maps/SunshineWoods/scripts.pory"
	.string "This is not good. I must alert the\n"
	.string "manager.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_2:
# 428 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great teamwork, Inteleon.\p"
	.string "Now let's check if he has any useful\n"
	.string "information.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_3:
# 447 "data/maps/SunshineWoods/scripts.pory"
	.string "Besides the Exp candies, there's also a\n"
	.string "picture of a silver-haired boy.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_4:
# 449 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So this is one of the boys they're\n"
	.string "searching for?$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_5:
# 455 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, let's go,\n"
	.string "Inteleon.$"

SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0:
# 478 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's out cold. There's no further\n"
	.string "information I can get out of him.)$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_0:
# 485 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}The Kirijo Young Lady?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_1:
# 490 "data/maps/SunshineWoods/scripts.pory"
	.string "What are you doing here?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_2:
# 539 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Great job, Inteleon.\p"
	.string "Now let's see...$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_3:
# 561 "data/maps/SunshineWoods/scripts.pory"
	.string "In another pocket, there's also a\n"
	.string "picture of a boy wearing black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_4:
# 563 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Magnifique. Now I know how one of their\n"
	.string "targets looks like.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_5:
# 569 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}There's nothing else here, time to go.$"

SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0:
# 595 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(He's fainted. Inteleon hit him a little\n"
	.string "too hard but he should be fine.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0:
# 604 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's check the men in black for\n"
	.string "information.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1:
# 621 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Can you go help the rescue at the\n"
	.string "orphanage, Inteleon?\p"
	.string "Don't worry about me, I'll just go back\n"
	.string "to the house in Route 2 to do some\l"
	.string "research about the boys they're so\l"
	.string "interested in.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2:
# 626 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}Sigh... Then how about after I get to\n"
	.string "the house safely?\p"
	.string "I promise I'll stay there until you\n"
	.string "return.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3:
# 632 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon reluctantly agreed.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}C'est magnifique. Let's move out.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_0:
# 647 "data/maps/SunshineWoods/scripts.pory"
	.string "{COLOR RED}Tips: From this point onward, the\n"
	.string "choices you made thorough the game will\l"
	.string "ultimately affect the story outcome.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_1:
# 652 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}.......{PAUSE 60} Sorry, I want to be alone for a\n"
	.string "while. Can we talk later?$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_2:
# 660 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}So this is where you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Hey, Kirijo. Have a seat.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_3:
# 684 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}What are you doing here, if I may ask?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Just... {PAUSE 60}reminiscing,{PAUSE 60} I guess.\p"
	.string "This was where I, my sis and Shinji used\n"
	.string "to hang out.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That sounded like good times.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_4:
# 692 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Kirjo, uh...{PAUSE 60} This is kinda sudden but I\n"
	.string "guess I just want to talk about this to\l"
	.string "someone.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_5:
# 694 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Would you listen? {COLOR GREEN}(Begin Akihiko's\n"
	.string "prologue quest?)$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_6:
# 697 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Oh, okay......$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_7:
# 713 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thanks!$"

SunshineWoods_Text_IkeIntro::
# 286 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 291 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 295 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 299 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémon!$"

SunshineWoods_Text_HotaruDefeated::
# 303 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 307 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
