SunshineWoods_MapScripts::
# 2 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/SunshineWoods/scripts.pory"
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
# 7 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, Akihiko_Looking_at_Miki
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnFrame
	.2byte 0


Akihiko_Looking_at_Miki::
# 12 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 13 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 6, MAP_SUNSHINE_WOODS
	return


# 15 "data/maps/SunshineWoods/scripts.pory"
playerfaceright:
# 16 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass::
# 20 "data/maps/SunshineWoods/scripts.pory"
	lock
# 21 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 25 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 26 "data/maps/SunshineWoods/scripts.pory"
	release
# 27 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 28 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_OnFrame::
# 32 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 36 "data/maps/SunshineWoods/scripts.pory"
	lock
# 37 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 38 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiFoundSomething
# 39 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 40 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 41 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 45 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 46 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 47 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 48 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 49 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 50 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 51 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 51 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 52 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 56 "data/maps/SunshineWoods/scripts.pory"
	lock
# 57 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 60 "data/maps/SunshineWoods/scripts.pory"
	release
# 61 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 65 "data/maps/SunshineWoods/scripts.pory"
	lock
# 66 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, faceup
# 67 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 70 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 71 "data/maps/SunshineWoods/scripts.pory"
	release
# 72 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 76 "data/maps/SunshineWoods/scripts.pory"
	lock
# 77 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 78 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 79 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 80 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_ShinjiroAlerted
# 81 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiAlerted
# 82 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 83 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 84 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 87 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 88 "data/maps/SunshineWoods/scripts.pory"
	release
# 89 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 92 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 93 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 94 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 95 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 96 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 97 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 98 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 99 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 101 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 102 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 103 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 104 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 105 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 106 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 107 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 108 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 110 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 111 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 112 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 115 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 116 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 120 "data/maps/SunshineWoods/scripts.pory"
	lock
# 121 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 6, MAP_SUNSHINE_WOODS
# 122 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 123 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 124 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, jumpright
# 125 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_Stayback
# 126 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 127 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_OnGuard
# 128 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 129 "data/maps/SunshineWoods/scripts.pory"
	release
# 130 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 133 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 134 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 135 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 136 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 137 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 138 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 140 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 141 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 142 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 143 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 147 "data/maps/SunshineWoods/scripts.pory"
	lock
# 148 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 149 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 150 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_PawmiIsWeak
# 151 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 152 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 153 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 158 "data/maps/SunshineWoods/scripts.pory"
	release
# 159 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 162 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 163 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 164 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 165 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 166 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 167 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 171 "data/maps/SunshineWoods/scripts.pory"
	lock
# 172 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 173 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 174 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 175 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 176 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
# 177 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 178 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 179 "data/maps/SunshineWoods/scripts.pory"
	removeobject 5
# 180 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 181 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 182 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 183 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 192 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 193 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 197 "data/maps/SunshineWoods/scripts.pory"
	lock
# 198 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 199 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 200 "data/maps/SunshineWoods/scripts.pory"
	removeobject 8
# 201 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 202 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 207 "data/maps/SunshineWoods/scripts.pory"
	lock
# 208 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 211 "data/maps/SunshineWoods/scripts.pory"
	release
	return


SunshineWoods_Eventscript_IkeBattle::
# 215 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
# 216 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_HotaruBattle::
# 221 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
# 222 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 22 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 58 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 67 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT} Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 85 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokemon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 153 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 173 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 208 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Text_IkeIntro::
# 226 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 231 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 235 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 239 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémons!$"

SunshineWoods_Text_HotaruDefeated::
# 243 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 247 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
