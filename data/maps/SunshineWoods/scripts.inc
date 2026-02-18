SunshineWoods_MapScripts::
# 2 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 38 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 41 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_8
# 4 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_BURNING_ORPHANAGE
	goto_if_lt SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_FINDING_PAWMI
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_GET_PACKAGE
	goto_if_ge SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 15 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_FOLLOW_KG_STAFF
	goto_if_ne SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 21 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_FOLLOW_KG_STAFF
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 29 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS
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
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_FINDING_PAWMI, SunshineWoods_Eventscript_OnWarp6
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_TEMP_8, 0, SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru
# 43 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_FINDING_PAWMI, SunshineWoods_Eventscript_OnFrame6
	.2byte 0


SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru::
# 48 "data/maps/SunshineWoods/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 49 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_3
SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_1:
# 53 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_2:
# 50 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_8
# 51 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
	goto SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_1

SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_3:
# 49 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_INTRO_COMPLETED
	goto_if_eq SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_2
	goto SunshineWoods_CheckIfAkihikoPrologueIsDoneForMitsuru_1


SunshineWoods_Eventscript_OnWarp6::
# 57 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 58 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 4, MAP_SUNSHINE_WOODS
	return


# 61 "data/maps/SunshineWoods/scripts.pory"
playerfaceright:
# 62 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass::
# 66 "data/maps/SunshineWoods/scripts.pory"
	lock
# 67 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, facedown
# 68 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, facedown
# 69 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 70 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 73 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_FINDING_PAWMI
# 74 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
# 75 "data/maps/SunshineWoods/scripts.pory"
	waitstate
	return


SunshineWoods_Eventscript_OnFrame6::
# 79 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 83 "data/maps/SunshineWoods/scripts.pory"
	lock
# 84 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 85 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_MikiFoundSomething
# 86 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 87 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 88 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 91 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 92 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 93 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 94 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 95 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 96 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 97 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 97 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 98 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 102 "data/maps/SunshineWoods/scripts.pory"
	lock
# 103 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 105 "data/maps/SunshineWoods/scripts.pory"
	release
# 106 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 110 "data/maps/SunshineWoods/scripts.pory"
	lock
# 111 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, faceup
# 112 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 113 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 115 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 116 "data/maps/SunshineWoods/scripts.pory"
	release
# 117 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 121 "data/maps/SunshineWoods/scripts.pory"
	lock
# 122 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 123 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 124 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 125 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_ShinjiroAlerted
# 126 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_MikiAlerted
# 127 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 128 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 129 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 131 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 132 "data/maps/SunshineWoods/scripts.pory"
	release
# 133 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 136 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 137 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 138 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 139 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 140 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 141 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 142 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 143 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 145 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 146 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 147 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 148 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 149 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 150 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 151 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 152 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 154 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 155 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 156 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 159 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 160 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 164 "data/maps/SunshineWoods/scripts.pory"
	lock
# 165 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 4, MAP_SUNSHINE_WOODS
# 166 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 167 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 168 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, jumpright
# 169 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, SunshineWoods_Eventscript_Stayback
# 170 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 171 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, SunshineWoods_Eventscript_OnGuard
# 172 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 173 "data/maps/SunshineWoods/scripts.pory"
	release
# 174 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 177 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 178 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 179 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 180 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 181 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 182 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 184 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 185 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 186 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 187 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 191 "data/maps/SunshineWoods/scripts.pory"
	lock
# 192 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 193 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 194 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_PawmiIsWeak
# 195 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 196 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 197 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 201 "data/maps/SunshineWoods/scripts.pory"
	release
# 202 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 205 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 206 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 207 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 208 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 209 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 210 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 214 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 215 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 216 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 217 "data/maps/SunshineWoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 218 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_1
# 219 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 220 "data/maps/SunshineWoods/scripts.pory"
	removeobject 2
# 221 "data/maps/SunshineWoods/scripts.pory"
	removeobject 3
# 222 "data/maps/SunshineWoods/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_MAIN_HALL, 12, 22
# 223 "data/maps/SunshineWoods/scripts.pory"
	waitstate
	return


# 231 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 232 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 236 "data/maps/SunshineWoods/scripts.pory"
	lock
# 237 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 238 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 239 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 240 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 241 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 246 "data/maps/SunshineWoods/scripts.pory"
	lock
# 247 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 249 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_IkeBattle::
# 254 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
# 255 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_IkeBattle_Text_0
# 256 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_HotaruBattle::
# 261 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
# 262 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_HotaruBattle_Text_0
# 263 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_PolicemenBlockingOrphanage1::
# 294 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0
# 295 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2
# 299 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1:
# 301 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	end

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2:
# 296 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1


SunshineWoods_Eventscript_PolicemenBlockingOrphanage2::
# 306 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0
# 307 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2
# 311 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1:
# 313 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	end

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2:
# 308 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2::
# 318 "data/maps/SunshineWoods/scripts.pory"
	lock
# 319 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0
# 320 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 321 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 322 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 323 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3::
# 326 "data/maps/SunshineWoods/scripts.pory"
	lock
# 327 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0
# 328 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 329 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 330 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 331 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji::
# 335 "data/maps/SunshineWoods/scripts.pory"
	special SpawnCameraObject
# 336 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0
# 337 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 338 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 339 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, walkinplacedown
# 340 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 341 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0
# 342 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1
# 344 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, walkinplaceup
# 345 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 346 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2
# 347 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3
# 348 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 349 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 350 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1
# 351 "data/maps/SunshineWoods/scripts.pory"
	delay 4
# 352 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2
# 353 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 354 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3
# 355 "data/maps/SunshineWoods/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 356 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 357 "data/maps/SunshineWoods/scripts.pory"
	special RemoveCameraObject
# 358 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 12, 12, 17
# 359 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 12, 12, 17
# 360 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 12, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 361 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 11, 20, 10
# 362 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 11, 20, 10
# 363 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
# 364 "data/maps/SunshineWoods/scripts.pory"
	release
# 365 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_AMBUSH_IN_SSWOODS
# 366 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 9, 45
	end


SunshineWoods_Eventscript_KGStaff1_Battle::
# 371 "data/maps/SunshineWoods/scripts.pory"
	lock
# 372 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 373 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 374 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 375 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 376 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_0
# 377 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_1, SunshineWoods_Eventscript_KGStaff1_Battle_Text_1
# 378 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 379 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 380 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 381 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 382 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_2
# 386 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_3
# 391 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
# 392 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff1_Battle_1:
# 394 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 395 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 396 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 397 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 398 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 399 "data/maps/SunshineWoods/scripts.pory"
	removeobject 12
# 400 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_5
# 401 "data/maps/SunshineWoods/scripts.pory"
	addobject 14, MAP_SUNSHINE_WOODS
# 402 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 403 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_8
# 407 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
SunshineWoods_Eventscript_KGStaff1_Battle_7:
# 409 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 410 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 411 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 412 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_2
# 414 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 415 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 416 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 417 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_12
# 420 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_13
# 424 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff1_Battle_11:
# 426 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 427 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 428 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 429 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 430 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 431 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_3
# 432 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 433 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_4
# 434 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 435 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 436 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 437 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 438 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 439 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_5
# 440 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 441 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 442 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_18
# 445 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_19
# 449 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff1_Battle_17:
# 451 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 452 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 453 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 454 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_RESULT, 0
# 455 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 456 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 457 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff1_Battle_2:
# 383 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
# 384 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_3:
# 387 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
# 388 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_8:
# 404 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff1_Battle_7

SunshineWoods_Eventscript_KGStaff1_Battle_12:
# 418 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_13:
# 421 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_18:
# 443 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17

SunshineWoods_Eventscript_KGStaff1_Battle_19:
# 446 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17


SunshineWoods_Eventscript_KGStaff1_PostBattle::
# 462 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0
# 463 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_KGStaff2_Battle::
# 467 "data/maps/SunshineWoods/scripts.pory"
	lock
# 468 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 469 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_0
# 470 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 471 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 472 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 473 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 474 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_2, SunshineWoods_Eventscript_KGStaff2_Battle_Text_1
# 475 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 476 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 477 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 478 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 479 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_2
# 482 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_3
# 485 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_4
# 489 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
SunshineWoods_Eventscript_KGStaff2_Battle_1:
# 491 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 492 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 493 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 494 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 495 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 496 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 497 "data/maps/SunshineWoods/scripts.pory"
	removeobject 11
# 498 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_7
# 499 "data/maps/SunshineWoods/scripts.pory"
	addobject 15, MAP_SUNSHINE_WOODS
# 500 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_10
SunshineWoods_Eventscript_KGStaff2_Battle_9:
# 503 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 504 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_13
# 508 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_14
# 512 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_15
# 517 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
# 518 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff2_Battle_12:
# 521 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 522 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 523 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_2
# 525 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 526 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 527 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 528 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_21
# 531 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_22
# 534 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_23
# 538 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff2_Battle_20:
# 540 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 541 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 542 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 543 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 544 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 545 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_3
# 546 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 547 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_4
# 548 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 549 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 550 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 551 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 552 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 553 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_5
# 554 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 555 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 556 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_29
# 559 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_30
# 562 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_31
# 566 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff2_Battle_28:
# 568 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 569 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 570 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 571 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 572 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 573 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 574 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff2_Battle_2:
# 480 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_3:
# 483 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_4:
# 486 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_10:
# 501 "data/maps/SunshineWoods/scripts.pory"
	removeobject 14
	goto SunshineWoods_Eventscript_KGStaff2_Battle_9

SunshineWoods_Eventscript_KGStaff2_Battle_13:
# 505 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
# 506 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_14:
# 509 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1
# 510 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_15:
# 513 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 514 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_21:
# 529 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_22:
# 532 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_23:
# 535 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_29:
# 557 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_30:
# 560 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_31:
# 563 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28


SunshineWoods_Eventscript_KGStaff2_PostBattle::
# 579 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0
# 580 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown::
# 584 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2
# 593 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4
	return

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2:
# 585 "data/maps/SunshineWoods/scripts.pory"
	lock
# 586 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 587 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 588 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0
# 589 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 590 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4:
# 594 "data/maps/SunshineWoods/scripts.pory"
	lock
# 595 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 596 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 597 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 598 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 599 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 600 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 601 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 602 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 603 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 604 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 605 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1
# 607 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 608 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, shakehorizontal
# 609 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 610 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2
# 613 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 614 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, walkinplaceleft
# 615 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 616 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3
# 618 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 619 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 620 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 621 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 15, 05
# 622 "data/maps/SunshineWoods/scripts.pory"
	warp MAP_ROUTE2_HOUSE, 3, 9
# 623 "data/maps/SunshineWoods/scripts.pory"
	waitstate
	return


SunshineWoods_Eventscript_AkihikoPrologueStart::
# 628 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 629 "data/maps/SunshineWoods/scripts.pory"
	hidefollowernpc
# 630 "data/maps/SunshineWoods/scripts.pory"
	lock
# 631 "data/maps/SunshineWoods/scripts.pory"
	goto_if_unset FLAG_HELP_MAKE_CHOICE, SunshineWoods_Eventscript_AkihikoPrologueStart_2
SunshineWoods_Eventscript_AkihikoPrologueStart_1:
# 635 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 636 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 637 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_4
# 645 "data/maps/SunshineWoods/scripts.pory"
	fadenewbgm MUS_XC2_GARFONT_MERCERNARIES
# 646 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_1
# 648 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 649 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 650 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_8
# 654 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_9
# 658 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_10
# 664 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_3
# 665 "data/maps/SunshineWoods/scripts.pory"
	delay 8
# 666 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
SunshineWoods_Eventscript_AkihikoPrologueStart_7:
# 668 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 669 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 670 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_2
# 674 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 675 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 676 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, emotepensive
# 677 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 678 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_3
# 680 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_4, MSGBOX_YESNO
# 682 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_15
# 695 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 696 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SHINY
# 697 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, pointup3
# 698 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 699 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_6
# 700 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 701 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 702 "data/maps/SunshineWoods/scripts.pory"
	switchmaincharacter
# 703 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 0
# 704 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_NOT_PLAYER
# 705 "data/maps/SunshineWoods/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 706 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 707 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_LOCK_MITSURU
# 708 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_LOCK_INTELEON_T
# 709 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
# 710 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 711 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 712 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 713 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_EXP_SHARE
# 714 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_CAMP_GEARS
# 715 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_ESCAPE_ROPE
# 716 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 717 "data/maps/SunshineWoods/scripts.pory"
	destroyfollowernpc
# 718 "data/maps/SunshineWoods/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30
# 719 "data/maps/SunshineWoods/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 720 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 1
# 721 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE, 13, 18
# 722 "data/maps/SunshineWoods/scripts.pory"
	waitstate
	return

SunshineWoods_Eventscript_AkihikoPrologueStart_2:
# 632 "data/maps/SunshineWoods/scripts.pory"
	call EventScript_ShowHelpChoice
# 633 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HELP_MAKE_CHOICE
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_1

SunshineWoods_Eventscript_AkihikoPrologueStart_4:
# 638 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_0
# 640 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 641 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_AkihikoPrologueStart_8:
# 651 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_0
# 652 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_7

SunshineWoods_Eventscript_AkihikoPrologueStart_9:
# 655 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
# 656 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_7

SunshineWoods_Eventscript_AkihikoPrologueStart_10:
# 659 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
# 660 "data/maps/SunshineWoods/scripts.pory"
	delay 8
# 661 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_2
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_7

SunshineWoods_Eventscript_AkihikoPrologueStart_15:
# 683 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_5
# 684 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 685 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_STAT_DECREASE
# 686 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, pointdown3
# 687 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 688 "data/maps/SunshineWoods/scripts.pory"
	subvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 3
# 689 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_TEMP_0, 1
# 690 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 727 "data/maps/SunshineWoods/scripts.pory"
pointup3:
# 728 "data/maps/SunshineWoods/scripts.pory"
	point_up_3
	step_end

# 319 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0:
# 319 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 319 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 321 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1:
# 321 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 321 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 321 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 327 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0:
# 327 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 327 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 327 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 336 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0:
# 336 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 336 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_southeast
	step_end

# 350 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1:
# 350 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 350 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 350 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 350 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 350 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 350 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
	step_end

# 352 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2:
# 352 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 352 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 352 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 352 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 352 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 352 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 352 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 352 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
	step_end

# 354 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3:
# 354 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 354 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_northwest
	step_end

# 383 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0:
# 383 "data/maps/SunshineWoods/scripts.pory"
	jump_down
	step_end

# 387 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1:
# 387 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

# 391 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2:
# 391 "data/maps/SunshineWoods/scripts.pory"
	jump_up
	step_end

# 404 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3:
# 404 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 404 "data/maps/SunshineWoods/scripts.pory"
	face_up
	step_end

# 407 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4:
# 407 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 407 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 418 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5:
# 418 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_down
	step_end

# 421 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6:
# 421 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_right
	step_end

# 424 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7:
# 424 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_up
	step_end

# 443 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8:
# 443 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 443 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 443 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 443 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 443 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 446 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9:
# 446 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 446 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 446 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 449 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10:
# 449 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 449 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 449 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 449 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 449 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 483 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0:
# 483 "data/maps/SunshineWoods/scripts.pory"
	jump_left
	step_end

# 509 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1:
# 509 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 509 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 513 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2:
# 513 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 513 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 535 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3:
# 535 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_left
	step_end

# 560 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4:
# 560 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 560 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 560 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 560 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 560 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 563 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5:
# 563 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 563 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 563 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 563 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 563 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 651 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_0:
# 651 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 651 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 651 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 651 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 651 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 651 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 651 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 652 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1:
# 652 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 652 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 652 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 652 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 652 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 661 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_2:
# 661 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 661 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 661 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 661 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 661 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 661 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 661 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 664 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_3:
# 664 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 664 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 664 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 664 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 664 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 70 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 103 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MK}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 113 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 129 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Could be a wild Pokémon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 197 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Wait...\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Yeah!$"

TakePawmiToHeal_Text_0:
# 215 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Come on, lil' guy.$"

TakePawmiToHeal_Text_1:
# 218 "data/maps/SunshineWoods/scripts.pory"
	.string "Akihiko picked up Pawmi and hurried\n"
	.string "back to the orphanage.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 247 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Eventscript_IkeBattle_Text_0:
# 255 "data/maps/SunshineWoods/scripts.pory"
	.string "Ike$"

SunshineWoods_Eventscript_HotaruBattle_Text_0:
# 262 "data/maps/SunshineWoods/scripts.pory"
	.string "Hotaru$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0:
# 294 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 1$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1:
# 296 "data/maps/SunshineWoods/scripts.pory"
	.string "Who the hell would explode an\n"
	.string "orphanage? Are they even human?$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2:
# 299 "data/maps/SunshineWoods/scripts.pory"
	.string "Our apologies but Sunshine Orphanage\n"
	.string "is currently off-limits.$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_0:
# 306 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 2$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1:
# 308 "data/maps/SunshineWoods/scripts.pory"
	.string "Maybe this is what Kurosawa-san was\n"
	.string "talking about... If only the higher-ups\l"
	.string "listened to him.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0:
# 341 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 1$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1:
# 342 "data/maps/SunshineWoods/scripts.pory"
	.string "Keep your eyes peeled.\p"
	.string "One has silver hair and the other wears\n"
	.string "a black-red beanie.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2:
# 346 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 2$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3:
# 347 "data/maps/SunshineWoods/scripts.pory"
	.string "You should cover the east.\n"
	.string "I'll search the south.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_0:
# 376 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}Wait, you're...!$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_1:
# 377 "data/maps/SunshineWoods/scripts.pory"
	.string "This is not good. I must alert the\n"
	.string "manager.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_2:
# 412 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Great teamwork, Inteleon.\p"
	.string "Now let's check if he has any useful\n"
	.string "information.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_3:
# 431 "data/maps/SunshineWoods/scripts.pory"
	.string "Besides the Exp candies, there's also a\n"
	.string "picture of a silver-haired boy.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_4:
# 433 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}So this is one of the boys they're\n"
	.string "searching for?$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_5:
# 439 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}There's nothing else here, let's go,\n"
	.string "Inteleon.$"

SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0:
# 462 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(He's out cold. There's no further\n"
	.string "information I can get out of him.)$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_0:
# 469 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}The Kirijo Young Lady?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_1:
# 474 "data/maps/SunshineWoods/scripts.pory"
	.string "What are you doing here?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_2:
# 523 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Great job, Inteleon.\p"
	.string "Now let's see...$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_3:
# 545 "data/maps/SunshineWoods/scripts.pory"
	.string "In another pocket, there's also a\n"
	.string "picture of a boy wearing black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_4:
# 547 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Magnifique. Now I know how one of their\n"
	.string "targets looks like.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_5:
# 553 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}There's nothing else here, time to go.$"

SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0:
# 579 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(He's fainted. Inteleon hit him a little\n"
	.string "too hard but he should be fine.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0:
# 588 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Let's check the men in black for\n"
	.string "information.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1:
# 605 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Can you go help the rescue at the\n"
	.string "orphanage, Inteleon?\p"
	.string "Don't worry about me, I'll just go back\n"
	.string "to the house in Route 2 to do some\l"
	.string "research about the boys they're so\l"
	.string "interested in.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2:
# 610 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}Sigh... Then how about after I get to\n"
	.string "the house safely?\p"
	.string "I promise I'll stay there until you\n"
	.string "return.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3:
# 616 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon reluctantly agreed.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}C'est magnifique. Let's move out.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_0:
# 638 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}.......{PAUSE 60} Sorry, I want to be alone for a\n"
	.string "while. Can we talk later?$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_1:
# 646 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}So this is where you are.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Hey, Kirijo. Have a seat.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_2:
# 670 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}What are you doing here, if I may ask?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Just... {PAUSE 60}reminiscing,{PAUSE 60} I guess.\p"
	.string "This was where I, my sis and Shinji used\n"
	.string "to hang out.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}That sounded like good times.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_3:
# 678 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}Kirjo, uh...{PAUSE 60} This is kinda sudden but I\n"
	.string "guess I just want to talk about this to\l"
	.string "someone.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_4:
# 680 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Would you listen? {COLOR GREEN}(Begin Akihiko's\n"
	.string "prologue quest?)$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_5:
# 683 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}Oh, okay......$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_6:
# 699 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Thanks!$"

SunshineWoods_Text_IkeIntro::
# 267 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 272 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 276 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 280 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémon!$"

SunshineWoods_Text_HotaruDefeated::
# 284 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 288 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
