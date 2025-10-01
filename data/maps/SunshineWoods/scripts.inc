SunshineWoods_MapScripts::
# 2 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 5 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, Akihiko_Looking_at_Miki
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnFrame6
	.2byte 0


Akihiko_Looking_at_Miki::
# 15 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 16 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 6, MAP_SUNSHINE_WOODS
	return


# 18 "data/maps/SunshineWoods/scripts.pory"
playerfaceright:
# 19 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass::
# 23 "data/maps/SunshineWoods/scripts.pory"
	lock
# 24 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 28 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 29 "data/maps/SunshineWoods/scripts.pory"
	release
# 30 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 31 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_OnFrame6::
# 35 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 39 "data/maps/SunshineWoods/scripts.pory"
	lock
# 40 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 41 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiFoundSomething
# 42 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 43 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 44 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 48 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 49 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 50 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 51 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 52 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 53 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 54 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 54 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 55 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 59 "data/maps/SunshineWoods/scripts.pory"
	lock
# 60 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 63 "data/maps/SunshineWoods/scripts.pory"
	release
# 64 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 68 "data/maps/SunshineWoods/scripts.pory"
	lock
# 69 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, faceup
# 70 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 73 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 74 "data/maps/SunshineWoods/scripts.pory"
	release
# 75 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 79 "data/maps/SunshineWoods/scripts.pory"
	lock
# 80 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 81 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 82 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 83 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_ShinjiroAlerted
# 84 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiAlerted
# 85 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 86 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 87 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 90 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 91 "data/maps/SunshineWoods/scripts.pory"
	release
# 92 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 95 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 96 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 97 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 98 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 99 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 100 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 101 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 102 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 104 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 105 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 106 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 107 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 108 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 109 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 110 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 111 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 113 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 114 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 115 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 118 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 119 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 123 "data/maps/SunshineWoods/scripts.pory"
	lock
# 124 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 6, MAP_SUNSHINE_WOODS
# 125 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 126 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 127 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, jumpright
# 128 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_Stayback
# 129 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 130 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_OnGuard
# 131 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 132 "data/maps/SunshineWoods/scripts.pory"
	release
# 133 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 136 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 137 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 138 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 139 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 140 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 141 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 143 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 144 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 145 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 146 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 150 "data/maps/SunshineWoods/scripts.pory"
	lock
# 151 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 152 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 153 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_PawmiIsWeak
# 154 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 155 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 156 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 161 "data/maps/SunshineWoods/scripts.pory"
	release
# 162 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 165 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 166 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 167 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 168 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 169 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 170 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 174 "data/maps/SunshineWoods/scripts.pory"
	lock
# 175 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 176 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 177 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 178 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 179 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
# 180 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 181 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 182 "data/maps/SunshineWoods/scripts.pory"
	removeobject 5
# 183 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 184 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 185 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 186 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 195 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 196 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 200 "data/maps/SunshineWoods/scripts.pory"
	lock
# 201 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 202 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 203 "data/maps/SunshineWoods/scripts.pory"
	removeobject 8
# 204 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 205 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 210 "data/maps/SunshineWoods/scripts.pory"
	lock
# 211 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 214 "data/maps/SunshineWoods/scripts.pory"
	release
	return


SunshineWoods_Eventscript_IkeBattle::
# 218 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
# 219 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_HotaruBattle::
# 224 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
# 225 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 25 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 61 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 70 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT} Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 88 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokemon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 156 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 176 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 211 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Text_IkeIntro::
# 229 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 234 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 238 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 242 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémons!$"

SunshineWoods_Text_HotaruDefeated::
# 246 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 250 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
