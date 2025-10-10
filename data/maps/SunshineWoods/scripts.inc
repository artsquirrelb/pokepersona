SunshineWoods_MapScripts::
# 2 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 18 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 22
	goto_if_lt SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 22
	goto_if_ge SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_POLICEMEN_SUNSHINE_WOODS
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 8 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
	goto SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 11 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_POLICEMEN_SUNSHINE_WOODS
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 17 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, Akihiko_Looking_at_Miki
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnFrame6
	.2byte 0


Akihiko_Looking_at_Miki::
# 24 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 25 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 6, MAP_SUNSHINE_WOODS
	return


# 27 "data/maps/SunshineWoods/scripts.pory"
playerfaceright:
# 28 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass::
# 32 "data/maps/SunshineWoods/scripts.pory"
	lock
# 33 "data/maps/SunshineWoods/scripts.pory"
	applymovement 2, facedown
# 34 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, facedown
# 35 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 36 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 40 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 41 "data/maps/SunshineWoods/scripts.pory"
	release
# 42 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 43 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 44 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_OnFrame6::
# 48 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 52 "data/maps/SunshineWoods/scripts.pory"
	lock
# 53 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 54 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiFoundSomething
# 55 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 56 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 57 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 61 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 62 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 63 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 64 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 65 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 66 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 67 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 67 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 68 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 72 "data/maps/SunshineWoods/scripts.pory"
	lock
# 73 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 76 "data/maps/SunshineWoods/scripts.pory"
	release
# 77 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 81 "data/maps/SunshineWoods/scripts.pory"
	lock
# 82 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, faceup
# 83 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 86 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 87 "data/maps/SunshineWoods/scripts.pory"
	release
# 88 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 92 "data/maps/SunshineWoods/scripts.pory"
	lock
# 93 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 94 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 95 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 96 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_ShinjiroAlerted
# 97 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiAlerted
# 98 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 99 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 100 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 103 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 104 "data/maps/SunshineWoods/scripts.pory"
	release
# 105 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 108 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 109 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 110 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 111 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 112 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 113 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 114 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 115 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 117 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 118 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 119 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 120 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 121 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 122 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 123 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 124 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 126 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 127 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 128 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 131 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 132 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 136 "data/maps/SunshineWoods/scripts.pory"
	lock
# 137 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 6, MAP_SUNSHINE_WOODS
# 138 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 139 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 140 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, jumpright
# 141 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_Stayback
# 142 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 143 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_OnGuard
# 144 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 145 "data/maps/SunshineWoods/scripts.pory"
	release
# 146 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 149 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 150 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 151 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 152 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 153 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 154 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 156 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 157 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 158 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 159 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 163 "data/maps/SunshineWoods/scripts.pory"
	lock
# 164 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 165 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 166 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_PawmiIsWeak
# 167 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 168 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 169 "data/maps/SunshineWoods/scripts.pory"
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
	removeobject 6
# 194 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 195 "data/maps/SunshineWoods/scripts.pory"
	removeobject 5
# 196 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 197 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 198 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 199 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 208 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 209 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 213 "data/maps/SunshineWoods/scripts.pory"
	lockall
# 214 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 215 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 216 "data/maps/SunshineWoods/scripts.pory"
	removeobject 8
# 217 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 218 "data/maps/SunshineWoods/scripts.pory"
	releaseall
	end


SunshineWoods_Eventscript_DirectionSign::
# 223 "data/maps/SunshineWoods/scripts.pory"
	lock
# 224 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 227 "data/maps/SunshineWoods/scripts.pory"
	release
	return


SunshineWoods_Eventscript_IkeBattle::
# 231 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
# 232 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_HotaruBattle::
# 237 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
# 238 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_PolicemenBlockingOrphanage::
# 269 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PolicemenBlockingOrphanage_Text_0
# 270 "data/maps/SunshineWoods/scripts.pory"
	closemessage
	return


SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 37 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 74 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 83 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT} Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 101 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokemon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 169 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 189 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 224 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Eventscript_PolicemenBlockingOrphanage_Text_0:
# 269 "data/maps/SunshineWoods/scripts.pory"
	.string "Our apologies but Sunshine Orphanage\n"
	.string "is currently off-limit.$"

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
