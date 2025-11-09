SunshineWoods_MapScripts::
# 2 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 22 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 22
	goto_if_lt SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKO_RELATIONSHIP_POINTS, 6
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_gt SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 14 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 22
	goto_if_ge SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
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

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 15 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_POLICEMEN_SUNSHINE_WOODS
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 21 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnWarp6
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnFrame6
	.2byte 0


SunshineWoods_Eventscript_OnWarp6::
# 28 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 29 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat PAWMI_D, MAP_SUNSHINE_WOODS
	return


# 31 "data/maps/SunshineWoods/scripts.pory"
playerfaceright:
# 32 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass::
# 36 "data/maps/SunshineWoods/scripts.pory"
	lock
# 37 "data/maps/SunshineWoods/scripts.pory"
	applymovement SHINJIRO, facedown
# 38 "data/maps/SunshineWoods/scripts.pory"
	applymovement MIKI, facedown
# 39 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 40 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 43 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 44 "data/maps/SunshineWoods/scripts.pory"
	release
# 45 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 46 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 47 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_OnFrame6::
# 51 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 55 "data/maps/SunshineWoods/scripts.pory"
	lock
# 56 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 57 "data/maps/SunshineWoods/scripts.pory"
	applymovement MIKI, SunshineWoods_Eventscript_MikiFoundSomething
# 58 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 59 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 60 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 64 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 65 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 66 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 67 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 68 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 69 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 70 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 70 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 71 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 75 "data/maps/SunshineWoods/scripts.pory"
	lock
# 76 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 78 "data/maps/SunshineWoods/scripts.pory"
	release
# 79 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 83 "data/maps/SunshineWoods/scripts.pory"
	lock
# 84 "data/maps/SunshineWoods/scripts.pory"
	applymovement MIKI, faceup
# 85 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 86 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 88 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 89 "data/maps/SunshineWoods/scripts.pory"
	release
# 90 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 94 "data/maps/SunshineWoods/scripts.pory"
	lock
# 95 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 96 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 97 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 98 "data/maps/SunshineWoods/scripts.pory"
	applymovement SHINJIRO, SunshineWoods_Eventscript_ShinjiroAlerted
# 99 "data/maps/SunshineWoods/scripts.pory"
	applymovement MIKI, SunshineWoods_Eventscript_MikiAlerted
# 100 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 101 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 102 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 104 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 105 "data/maps/SunshineWoods/scripts.pory"
	release
# 106 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 109 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 110 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 111 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 112 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 113 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 114 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 115 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 116 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 118 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 119 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 120 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 121 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 122 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 123 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 124 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 125 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 127 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 128 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 129 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 132 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 133 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 137 "data/maps/SunshineWoods/scripts.pory"
	lock
# 138 "data/maps/SunshineWoods/scripts.pory"
	showobjectat PAWMI_D, MAP_SUNSHINE_WOODS
# 139 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 140 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 141 "data/maps/SunshineWoods/scripts.pory"
	applymovement PAWMI_D, jumpright
# 142 "data/maps/SunshineWoods/scripts.pory"
	applymovement MIKI, SunshineWoods_Eventscript_Stayback
# 143 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 144 "data/maps/SunshineWoods/scripts.pory"
	applymovement SHINJIRO, SunshineWoods_Eventscript_OnGuard
# 145 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 146 "data/maps/SunshineWoods/scripts.pory"
	release
# 147 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 150 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 151 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 152 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 153 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 154 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 155 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 157 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 158 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 159 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 160 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 164 "data/maps/SunshineWoods/scripts.pory"
	lock
# 165 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 166 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 167 "data/maps/SunshineWoods/scripts.pory"
	applymovement PAWMI_D, SunshineWoods_Eventscript_PawmiIsWeak
# 168 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 169 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 170 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 174 "data/maps/SunshineWoods/scripts.pory"
	release
# 175 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 178 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 179 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 180 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 181 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 182 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 183 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 187 "data/maps/SunshineWoods/scripts.pory"
	lock
# 188 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 189 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 190 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 191 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 192 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
# 193 "data/maps/SunshineWoods/scripts.pory"
	removeobject PAWMI_D
# 194 "data/maps/SunshineWoods/scripts.pory"
	removeobject MIKI
# 195 "data/maps/SunshineWoods/scripts.pory"
	removeobject SHINJIRO
# 196 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 197 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 198 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 207 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 208 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 212 "data/maps/SunshineWoods/scripts.pory"
	lock
# 213 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 214 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 215 "data/maps/SunshineWoods/scripts.pory"
	removeobject 8
# 216 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 217 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 222 "data/maps/SunshineWoods/scripts.pory"
	lock
# 223 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 225 "data/maps/SunshineWoods/scripts.pory"
	release
	return


SunshineWoods_Eventscript_IkeBattle::
# 229 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
# 230 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_IkeBattle_Text_0
# 231 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_HotaruBattle::
# 236 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
# 237 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_HotaruBattle_Text_0
# 238 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_PolicemenBlockingOrphanage::
# 269 "data/maps/SunshineWoods/scripts.pory"
	setspeaker SunshineWoods_Eventscript_PolicemenBlockingOrphanage_Text_0
# 270 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage_Text_1
# 271 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 40 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 76 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 86 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 102 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokemon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 170 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 189 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 223 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Eventscript_IkeBattle_Text_0:
# 230 "data/maps/SunshineWoods/scripts.pory"
	.string "Ike$"

SunshineWoods_Eventscript_HotaruBattle_Text_0:
# 237 "data/maps/SunshineWoods/scripts.pory"
	.string "Hotaru$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage_Text_0:
# 269 "data/maps/SunshineWoods/scripts.pory"
	.string "Police Officer$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage_Text_1:
# 270 "data/maps/SunshineWoods/scripts.pory"
	.string "Our apologies but Sunshine Orphanage\n"
	.string "is currently off-limits.$"

SunshineWoods_Text_IkeIntro::
# 242 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 247 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 251 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 255 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémons!$"

SunshineWoods_Text_HotaruDefeated::
# 259 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 263 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
