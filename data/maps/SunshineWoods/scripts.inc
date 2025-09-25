SunshineWoods_MapScripts::
# 2 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/SunshineWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineWoods/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, Akihiko_Looking_at_Miki
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineWoods_Eventscript_OnFrame
	.2byte 0


Akihiko_Looking_at_Miki::
# 11 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, playerfaceright
# 12 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 13 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 6, MAP_SUNSHINE_WOODS
	return


# 14 "data/maps/SunshineWoods/scripts.pory"
playerfaceright:
# 15 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass::
# 19 "data/maps/SunshineWoods/scripts.pory"
	lock
# 20 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 24 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 25 "data/maps/SunshineWoods/scripts.pory"
	release
# 26 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 27 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_OnFrame::
# 31 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 35 "data/maps/SunshineWoods/scripts.pory"
	lock
# 36 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 37 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 38 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiFoundSomething
# 39 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 40 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 44 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 45 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 46 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 47 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 48 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 49 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 50 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 50 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 51 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 55 "data/maps/SunshineWoods/scripts.pory"
	lock
# 56 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 59 "data/maps/SunshineWoods/scripts.pory"
	release
# 60 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 64 "data/maps/SunshineWoods/scripts.pory"
	lock
# 65 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, PlayerFaceUp
# 66 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, faceup
# 67 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 69 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 70 "data/maps/SunshineWoods/scripts.pory"
	release
# 71 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 75 "data/maps/SunshineWoods/scripts.pory"
	lock
# 76 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 77 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 78 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 80 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_ShinjiroAlerted
# 81 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiAlerted
# 82 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 83 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 86 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 87 "data/maps/SunshineWoods/scripts.pory"
	release
# 88 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 91 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 92 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 93 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 94 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 95 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 96 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 97 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 98 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 100 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 101 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 102 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 103 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 104 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 105 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 106 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 107 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 109 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 110 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 111 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 114 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiJumpsOut:
# 115 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 119 "data/maps/SunshineWoods/scripts.pory"
	lock
# 120 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 7, MAP_SUNSHINE_WOODS
# 121 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 6, MAP_SUNSHINE_WOODS
# 122 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 122 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 123 "data/maps/SunshineWoods/scripts.pory"
	applymovement 7, SunshineWoods_Eventscript_PawmiJumpsOut
# 124 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, jumpright
# 125 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_Stayback
# 126 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 127 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_OnGuard
# 128 "data/maps/SunshineWoods/scripts.pory"
	release
# 129 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 132 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 133 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 134 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 135 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 136 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 137 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 139 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 140 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 141 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 142 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 146 "data/maps/SunshineWoods/scripts.pory"
	lock
# 147 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 148 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 149 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 150 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_PawmiIsWeak
# 151 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 152 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 157 "data/maps/SunshineWoods/scripts.pory"
	release
# 158 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 161 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 162 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 163 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 164 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 165 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 166 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 170 "data/maps/SunshineWoods/scripts.pory"
	lock
# 171 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 172 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 173 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 174 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 175 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
# 176 "data/maps/SunshineWoods/scripts.pory"
	removeobject 7
# 177 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 178 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 179 "data/maps/SunshineWoods/scripts.pory"
	removeobject 5
# 180 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 181 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 190 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 191 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 192 "data/maps/SunshineWoods/scripts.pory"
	lock
# 193 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 194 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 195 "data/maps/SunshineWoods/scripts.pory"
	removeobject 8
# 196 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 197 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 202 "data/maps/SunshineWoods/scripts.pory"
	lock
# 203 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 206 "data/maps/SunshineWoods/scripts.pory"
	release
	return


SunshineWoods_Eventscript_IkeBattle::
# 210 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
# 211 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_HotaruBattle::
# 216 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
# 217 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 21 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 57 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 66 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT} Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 84 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokemon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 152 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 172 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 203 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Text_IkeIntro::
# 221 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 226 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 230 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 234 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémons!$"

SunshineWoods_Text_HotaruDefeated::
# 238 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 242 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
