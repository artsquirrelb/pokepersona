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
	compare VAR_RESULT, 0
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
	setflag FLAG_HIDE_HELP_BUTTON
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
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
# 264 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_IkeBattle_Text_0
# 265 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_HotaruBattle::
# 270 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
# 271 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_HotaruBattle_Text_0
# 272 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_PolicemenBlockingOrphanage1::
# 303 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0
# 304 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 22
	goto_if_eq SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2
# 308 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2
SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_1:
# 310 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	end

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_2:
# 305 "data/maps/SunshineWoods/scripts.pory"
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
	end

SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_2:
# 317 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_Text_1
	goto SunshineWoods_Eventscript_PolicemenBlockingOrphanage2_1


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2::
# 327 "data/maps/SunshineWoods/scripts.pory"
	lock
# 328 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0
# 329 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 330 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 331 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 332 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3::
# 335 "data/maps/SunshineWoods/scripts.pory"
	lock
# 336 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0
# 337 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 338 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1
# 339 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 340 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji
	return


SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji::
# 344 "data/maps/SunshineWoods/scripts.pory"
	special SpawnCameraObject
# 345 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0
# 346 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 347 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 348 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, walkinplacedown
# 349 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 350 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_0
# 351 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1
# 352 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, walkinplaceup
# 353 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 354 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2
# 355 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3
# 356 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 357 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 358 "data/maps/SunshineWoods/scripts.pory"
	applymovement 12, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1
# 359 "data/maps/SunshineWoods/scripts.pory"
	delay 4
# 360 "data/maps/SunshineWoods/scripts.pory"
	applymovement 11, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2
# 361 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 362 "data/maps/SunshineWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3
# 363 "data/maps/SunshineWoods/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 364 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 365 "data/maps/SunshineWoods/scripts.pory"
	special RemoveCameraObject
# 366 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 12, 12, 17
# 367 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 12, 12, 17
# 368 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 12, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 369 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm 11, 20, 10
# 370 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy 11, 20, 10
# 371 "data/maps/SunshineWoods/scripts.pory"
	setobjectnewmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
# 372 "data/maps/SunshineWoods/scripts.pory"
	release
# 373 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 374 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 9, 45
	end


SunshineWoods_Eventscript_KGStaff1_Battle::
# 379 "data/maps/SunshineWoods/scripts.pory"
	lock
# 380 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 381 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 382 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 383 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 384 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_0
# 385 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_1, SunshineWoods_Eventscript_KGStaff1_Battle_Text_1
# 386 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 387 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 388 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 389 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 390 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_2
# 394 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_3
# 399 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
# 400 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff1_Battle_1:
# 402 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 403 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 404 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 405 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 406 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 407 "data/maps/SunshineWoods/scripts.pory"
	removeobject 12
# 408 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_5
# 409 "data/maps/SunshineWoods/scripts.pory"
	addobject 14, MAP_SUNSHINE_WOODS
# 410 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 411 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_8
# 415 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
SunshineWoods_Eventscript_KGStaff1_Battle_7:
# 417 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 418 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 419 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 420 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_2
# 422 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 423 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 424 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 425 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_12
# 428 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_13
# 432 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff1_Battle_11:
# 434 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 435 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 436 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 437 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_AKIHIKO
# 438 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 439 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_3
# 440 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 441 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_4
# 442 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 443 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 444 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 445 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 446 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 447 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_Battle_Text_5
# 448 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 449 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 450 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_18
# 453 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff1_Battle_19
# 457 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff1_Battle_17:
# 459 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 460 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 461 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 462 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_RESULT, 0
# 463 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 464 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 465 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff1_Battle_2:
# 391 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
# 392 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_3:
# 395 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
# 396 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff1_Battle_1

SunshineWoods_Eventscript_KGStaff1_Battle_8:
# 412 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff1_Battle_7

SunshineWoods_Eventscript_KGStaff1_Battle_12:
# 426 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_13:
# 429 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff1_Battle_11

SunshineWoods_Eventscript_KGStaff1_Battle_18:
# 451 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17

SunshineWoods_Eventscript_KGStaff1_Battle_19:
# 454 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9
	goto SunshineWoods_Eventscript_KGStaff1_Battle_17


SunshineWoods_Eventscript_KGStaff1_PostBattle::
# 470 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0
# 471 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_KGStaff2_Battle::
# 475 "data/maps/SunshineWoods/scripts.pory"
	lock
# 476 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 477 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_0
# 478 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 479 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 480 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 481 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 482 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SUNSHINE_WOODS_2, SunshineWoods_Eventscript_KGStaff2_Battle_Text_1
# 483 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 484 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 485 "data/maps/SunshineWoods/scripts.pory"
	playse SE_LEDGE
# 486 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 487 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_2
# 490 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_3
# 493 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_4
# 497 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2
SunshineWoods_Eventscript_KGStaff2_Battle_1:
# 499 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 500 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 501 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_TAKE_DOWN
# 502 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 503 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_COMET_PUNCH
# 504 "data/maps/SunshineWoods/scripts.pory"
	waitse
# 505 "data/maps/SunshineWoods/scripts.pory"
	removeobject 11
# 506 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_7
# 507 "data/maps/SunshineWoods/scripts.pory"
	addobject 15, MAP_SUNSHINE_WOODS
# 508 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_10
SunshineWoods_Eventscript_KGStaff2_Battle_9:
# 511 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 512 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_13
# 516 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_14
# 520 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_15
# 525 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4
# 526 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
SunshineWoods_Eventscript_KGStaff2_Battle_12:
# 529 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 530 "data/maps/SunshineWoods/scripts.pory"
	delay 20
# 531 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_2
# 533 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 534 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 535 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 536 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_21
# 539 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_22
# 542 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_23
# 546 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7
SunshineWoods_Eventscript_KGStaff2_Battle_20:
# 548 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 549 "data/maps/SunshineWoods/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 10
# 550 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_SCRATCH
# 551 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, PIC_SHINJIRO
# 552 "data/maps/SunshineWoods/scripts.pory"
	callnative DrawMugshot
# 553 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_3
# 554 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 555 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_4
# 556 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 557 "data/maps/SunshineWoods/scripts.pory"
	callnative ClearMugshot
# 558 "data/maps/SunshineWoods/scripts.pory"
	playse SE_RG_CARD_FLIPPING
# 559 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 560 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 561 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_Battle_Text_5
# 562 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 563 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 564 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_29
# 567 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_30
# 570 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_KGStaff2_Battle_31
# 574 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10
SunshineWoods_Eventscript_KGStaff2_Battle_28:
# 576 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 577 "data/maps/SunshineWoods/scripts.pory"
	removeobject INTELEON_T_SW
# 578 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 579 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 580 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 581 "data/maps/SunshineWoods/scripts.pory"
	addvar VAR_TEMP_1, 1
# 582 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_KGStaff2_Battle_2:
# 488 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_3:
# 491 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_4:
# 494 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1
	goto SunshineWoods_Eventscript_KGStaff2_Battle_1

SunshineWoods_Eventscript_KGStaff2_Battle_10:
# 509 "data/maps/SunshineWoods/scripts.pory"
	removeobject 14
	goto SunshineWoods_Eventscript_KGStaff2_Battle_9

SunshineWoods_Eventscript_KGStaff2_Battle_13:
# 513 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3
# 514 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_14:
# 517 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1
# 518 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_15:
# 521 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 522 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
	goto SunshineWoods_Eventscript_KGStaff2_Battle_12

SunshineWoods_Eventscript_KGStaff2_Battle_21:
# 537 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_22:
# 540 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_23:
# 543 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3
	goto SunshineWoods_Eventscript_KGStaff2_Battle_20

SunshineWoods_Eventscript_KGStaff2_Battle_29:
# 565 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_30:
# 568 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28

SunshineWoods_Eventscript_KGStaff2_Battle_31:
# 571 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5
	goto SunshineWoods_Eventscript_KGStaff2_Battle_28


SunshineWoods_Eventscript_KGStaff2_PostBattle::
# 587 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0
# 588 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown::
# 592 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_lt SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2
# 601 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4
	return

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_2:
# 593 "data/maps/SunshineWoods/scripts.pory"
	lock
# 594 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 595 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 596 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0
# 597 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 598 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_4:
# 602 "data/maps/SunshineWoods/scripts.pory"
	lock
# 603 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 604 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 605 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 606 "data/maps/SunshineWoods/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 607 "data/maps/SunshineWoods/scripts.pory"
	setobjectxy INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 608 "data/maps/SunshineWoods/scripts.pory"
	setobjectxyperm INTELEON_T_SW, VAR_0x8000, VAR_0x8001
# 609 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_TEMP_6
# 610 "data/maps/SunshineWoods/scripts.pory"
	addobject INTELEON_T_SW
# 611 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2
# 612 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 613 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1
# 615 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 616 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, shakehorizontal
# 617 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 618 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2
# 621 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 622 "data/maps/SunshineWoods/scripts.pory"
	applymovement INTELEON_T_SW, walkinplaceleft
# 623 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 624 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3
# 626 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 627 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 22
# 628 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8000, 0
# 629 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_0x8001, 0
# 630 "data/maps/SunshineWoods/scripts.pory"
	fwdtime 15, 05
# 631 "data/maps/SunshineWoods/scripts.pory"
	warp MAP_ROUTE2_HOUSE, 3, 11
	return


SunshineWoods_Eventscript_AkihikoPrologueStart::
# 636 "data/maps/SunshineWoods/scripts.pory"
	hidefollower
# 637 "data/maps/SunshineWoods/scripts.pory"
	hidefollowernpc
# 638 "data/maps/SunshineWoods/scripts.pory"
	lock
# 639 "data/maps/SunshineWoods/scripts.pory"
	goto_if_unset FLAG_HELP_MAKE_CHOICE, SunshineWoods_Eventscript_AkihikoPrologueStart_2
SunshineWoods_Eventscript_AkihikoPrologueStart_1:
# 643 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 644 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 645 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_4
# 653 "data/maps/SunshineWoods/scripts.pory"
	fadenewbgm MUS_XC2_GARFONT_MERCERNARIES
# 654 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_1
# 656 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 657 "data/maps/SunshineWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 658 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_8
# 662 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_9
# 666 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_10
# 672 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_3
# 673 "data/maps/SunshineWoods/scripts.pory"
	delay 8
# 674 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
SunshineWoods_Eventscript_AkihikoPrologueStart_7:
# 676 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 677 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 678 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_2
# 682 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 683 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 684 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, emotepensive
# 685 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 686 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_3
# 688 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_4, MSGBOX_YESNO
# 690 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineWoods_Eventscript_AkihikoPrologueStart_15
# 703 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 704 "data/maps/SunshineWoods/scripts.pory"
	playse SE_SHINY
# 705 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, pointup3
# 706 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 707 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_6
# 708 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 709 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 710 "data/maps/SunshineWoods/scripts.pory"
	switchmaincharacter
# 711 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 0
# 712 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
# 713 "data/maps/SunshineWoods/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 714 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_LOCK_AKIHIKO
# 715 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_LOCK_MITSURU
# 716 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_LOCK_INTELEON_T
# 717 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
# 718 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 719 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 720 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 721 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_EXP_SHARE
# 722 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_CAMP_GEARS
# 723 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_ESCAPE_ROPE
# 724 "data/maps/SunshineWoods/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 725 "data/maps/SunshineWoods/scripts.pory"
	removeallitem ITEM_POKE_BALL, VAR_0x800A
# 726 "data/maps/SunshineWoods/scripts.pory"
	removeallitem ITEM_GREAT_BALL, VAR_0x800B
# 727 "data/maps/SunshineWoods/scripts.pory"
	destroyfollowernpc
# 728 "data/maps/SunshineWoods/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30
# 729 "data/maps/SunshineWoods/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 730 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 1
# 731 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE, 13, 18
# 732 "data/maps/SunshineWoods/scripts.pory"
	special DrawWholeMapView
# 733 "data/maps/SunshineWoods/scripts.pory"
	waitstate
	return

SunshineWoods_Eventscript_AkihikoPrologueStart_2:
# 640 "data/maps/SunshineWoods/scripts.pory"
	call EventScript_ShowHelpChoice
# 641 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HELP_MAKE_CHOICE
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_1

SunshineWoods_Eventscript_AkihikoPrologueStart_4:
# 646 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_0
# 648 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 649 "data/maps/SunshineWoods/scripts.pory"
	release
	end

SunshineWoods_Eventscript_AkihikoPrologueStart_8:
# 659 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_0
# 660 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_7

SunshineWoods_Eventscript_AkihikoPrologueStart_9:
# 663 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
# 664 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_7

SunshineWoods_Eventscript_AkihikoPrologueStart_10:
# 667 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1
# 668 "data/maps/SunshineWoods/scripts.pory"
	delay 8
# 669 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_2
	goto SunshineWoods_Eventscript_AkihikoPrologueStart_7

SunshineWoods_Eventscript_AkihikoPrologueStart_15:
# 691 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_AkihikoPrologueStart_Text_5
# 692 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 693 "data/maps/SunshineWoods/scripts.pory"
	playse SE_M_STAT_DECREASE
# 694 "data/maps/SunshineWoods/scripts.pory"
	applymovement 16, pointdown3
# 695 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 696 "data/maps/SunshineWoods/scripts.pory"
	subvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 3
# 697 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_TEMP_0, 1
# 698 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 738 "data/maps/SunshineWoods/scripts.pory"
pointup3:
# 739 "data/maps/SunshineWoods/scripts.pory"
	point_up_3
	step_end

# 328 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_0:
# 328 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 328 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 330 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger2_Movement_1:
# 330 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 330 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 330 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 336 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MitsuruTailingKGStaffTrigger3_Movement_0:
# 336 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 336 "data/maps/SunshineWoods/scripts.pory"
	player_run_up
# 336 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 345 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_0:
# 345 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 345 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_southeast
	step_end

# 358 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_1:
# 358 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 358 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 358 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 358 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 358 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 358 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
	step_end

# 360 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_2:
# 360 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 360 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 360 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 360 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 360 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 360 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 360 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 360 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
	step_end

# 362 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Movement_3:
# 362 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 362 "data/maps/SunshineWoods/scripts.pory"
	walk_diag_northwest
	step_end

# 391 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_0:
# 391 "data/maps/SunshineWoods/scripts.pory"
	jump_down
	step_end

# 395 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_1:
# 395 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

# 399 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_2:
# 399 "data/maps/SunshineWoods/scripts.pory"
	jump_up
	step_end

# 412 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_3:
# 412 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 412 "data/maps/SunshineWoods/scripts.pory"
	face_up
	step_end

# 415 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_4:
# 415 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 415 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 426 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_5:
# 426 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_down
	step_end

# 429 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_6:
# 429 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_right
	step_end

# 432 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_7:
# 432 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_up
	step_end

# 451 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_8:
# 451 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 451 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 451 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 451 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 451 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 454 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_9:
# 454 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 454 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 454 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 457 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff1_Battle_Movement_10:
# 457 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 457 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 457 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 457 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 457 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 491 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_0:
# 491 "data/maps/SunshineWoods/scripts.pory"
	jump_left
	step_end

# 517 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_1:
# 517 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 517 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 521 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_2:
# 521 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 521 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

# 543 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_3:
# 543 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_left
	step_end

# 568 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_4:
# 568 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 568 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 568 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 568 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 568 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 571 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_KGStaff2_Battle_Movement_5:
# 571 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 571 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 571 "data/maps/SunshineWoods/scripts.pory"
	walk_right
# 571 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 571 "data/maps/SunshineWoods/scripts.pory"
	set_invisible
	step_end

# 659 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_0:
# 659 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 659 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 659 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 659 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 659 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 659 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 659 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 660 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_1:
# 660 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 660 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 660 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 660 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 660 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 669 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_2:
# 669 "data/maps/SunshineWoods/scripts.pory"
	walk_left
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
	face_down
	step_end

# 672 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoPrologueStart_Movement_3:
# 672 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 672 "data/maps/SunshineWoods/scripts.pory"
	walk_left
# 672 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 672 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 672 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 74 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 109 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MK}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 119 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 135 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}Could be a wild Pokémon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 203 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 222 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 256 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Eventscript_IkeBattle_Text_0:
# 264 "data/maps/SunshineWoods/scripts.pory"
	.string "Ike$"

SunshineWoods_Eventscript_HotaruBattle_Text_0:
# 271 "data/maps/SunshineWoods/scripts.pory"
	.string "Hotaru$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_0:
# 303 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer 1$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_1:
# 305 "data/maps/SunshineWoods/scripts.pory"
	.string "Who the hell would explode an\n"
	.string "orphanage? Are they even human?$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage1_Text_2:
# 308 "data/maps/SunshineWoods/scripts.pory"
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
# 350 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 1$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_1:
# 351 "data/maps/SunshineWoods/scripts.pory"
	.string "Keep your eyes peeled. One has silver\n"
	.string "hair and the other wears a black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_2:
# 354 "data/maps/SunshineWoods/scripts.pory"
	.string "Man In Black 2$"

SunshineWoods_Eventscript_KGStaffTalkingAboutAkiShinji_Text_3:
# 355 "data/maps/SunshineWoods/scripts.pory"
	.string "You should cover the east. I'll search\n"
	.string "the south.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_0:
# 384 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}Wait, you're...!$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_1:
# 385 "data/maps/SunshineWoods/scripts.pory"
	.string "This is not good. I must alert the\n"
	.string "manager.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_2:
# 420 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_CONFIDENT}Great teamwork, Inteleon.\p"
	.string "Now let's check if he has any useful\n"
	.string "information.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_3:
# 439 "data/maps/SunshineWoods/scripts.pory"
	.string "Besides the Exp candies, there's also a\n"
	.string "picture of a silver-haired boy.$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_4:
# 441 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}So this is one of the boys they're\n"
	.string "searching for?$"

SunshineWoods_Eventscript_KGStaff1_Battle_Text_5:
# 447 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}There's nothing else here, let's go,\n"
	.string "Inteleon.$"

SunshineWoods_Eventscript_KGStaff1_PostBattle_Text_0:
# 470 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(He's out cold. There's no further\n"
	.string "information I can get out of him.)$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_0:
# 477 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIB}The Kirijo Young Lady?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_1:
# 482 "data/maps/SunshineWoods/scripts.pory"
	.string "What are you doing here?$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_2:
# 531 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_CONFIDENT}Great job, Inteleon.\p"
	.string "Now let's see...$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_3:
# 553 "data/maps/SunshineWoods/scripts.pory"
	.string "In another pocket, there's also a\n"
	.string "picture of a boy wearing black-red\l"
	.string "beanie.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_4:
# 555 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_CONFIDENT}Magnifique. Now I know how one of their\n"
	.string "targets looks like.$"

SunshineWoods_Eventscript_KGStaff2_Battle_Text_5:
# 561 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}There's nothing else here, time to go.$"

SunshineWoods_Eventscript_KGStaff2_PostBattle_Text_0:
# 587 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(He's fainted. Inteleon hit him a little\n"
	.string "too hard but he should be fine.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_0:
# 596 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(Let's check the men in black for\n"
	.string "information.)$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_1:
# 613 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Can you go help the rescue at the\n"
	.string "orphanage, Inteleon?\p"
	.string "Don't worry about me, I'll just go back\n"
	.string "to the house in Route 2 to do some\l"
	.string "research about the boys they're so\l"
	.string "interested in.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_2:
# 618 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon shaked its head.)\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}Sigh... Then how about after I get to\n"
	.string "the house safely?\p"
	.string "I promise I'll stay there until you\n"
	.string "return.$"

SunshineWoods_Eventscript_CheckIfBothKGStaffAreDown_Text_3:
# 624 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon reluctantly agreed.)\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}C'est magnifique. Let's move out.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_0:
# 646 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SAD}.......{PAUSE 60} Sorry, I want to be alone for a\n"
	.string "while. Can we talk later?$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_1:
# 654 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}So this is where you are.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Hey, Kirijo. Have a seat.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_2:
# 678 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}What are you doing here, if I may ask?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Just... {PAUSE 60}reminiscing,{PAUSE 60} I guess.\p"
	.string "This was where I, my sis and Shinji used\n"
	.string "to hang out.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}That sounded like good times.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_3:
# 686 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SAD}Kirjo, uh...{PAUSE 60} This is kinda sudden but I\n"
	.string "guess I just want to talk about this to\l"
	.string "someone.$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_4:
# 688 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Would you listen? {COLOR GREEN}(Begin Akihiko's\n"
	.string "prologue quest?)$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_5:
# 691 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SAD}Oh, okay......$"

SunshineWoods_Eventscript_AkihikoPrologueStart_Text_6:
# 707 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Thanks!$"

SunshineWoods_Text_IkeIntro::
# 276 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 281 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 285 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 289 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémon!$"

SunshineWoods_Text_HotaruDefeated::
# 293 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 297 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
