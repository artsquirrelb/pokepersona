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
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SunshineWoods/scripts.pory"
	clearflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	return

SunshineWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 5, Akihiko_Looking_at_Miki
	.2byte 0

SunshineWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/SunshineWoods/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 5, SunshineWoods_Eventscript_PlayingInTheWoods
	.2byte 0


Akihiko_Looking_at_Miki::
# 11 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, playerfaceright
# 12 "data/maps/SunshineWoods/scripts.pory"
	hideobjectat 7, MAP_SUNSHINE_WOODS
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
	setvar VAR_AKIHIKOS_INTRO_STATE, 5
# 27 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 31 "data/maps/SunshineWoods/scripts.pory"
	lock
# 32 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_MikiFoundSomething
# 33 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 34 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 38 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 39 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 40 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 41 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 42 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 43 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 44 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 45 "data/maps/SunshineWoods/scripts.pory"
	delay_8
# 46 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 47 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 51 "data/maps/SunshineWoods/scripts.pory"
	lock
# 52 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 53 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 58 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 59 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 60 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 61 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_ShinjiroAlerted
# 62 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_MikiAlerted
# 63 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 64 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_1
# 67 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 68 "data/maps/SunshineWoods/scripts.pory"
	release
# 69 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 72 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 73 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 74 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 75 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 76 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 77 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 79 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 80 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 81 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 82 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 83 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 84 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 85 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 86 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 88 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 89 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 90 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 93 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiJumpsOut:
# 94 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_right
# 95 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 99 "data/maps/SunshineWoods/scripts.pory"
	lock
# 100 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 7, MAP_SUNSHINE_WOODS
# 101 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 102 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 103 "data/maps/SunshineWoods/scripts.pory"
	applymovement 7, SunshineWoods_Eventscript_PawmiJumpsOut
# 104 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_Stayback
# 105 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 106 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_OnGuard
# 107 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 108 "data/maps/SunshineWoods/scripts.pory"
	release
# 109 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 112 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 113 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 114 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 115 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 116 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 117 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 119 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 120 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 121 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 122 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 126 "data/maps/SunshineWoods/scripts.pory"
	lock
# 127 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 128 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 129 "data/maps/SunshineWoods/scripts.pory"
	applymovement 7, SunshineWoods_Eventscript_PawmiIsWeak
# 130 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 131 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 136 "data/maps/SunshineWoods/scripts.pory"
	release
# 137 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 140 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 141 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 142 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 143 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 144 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 148 "data/maps/SunshineWoods/scripts.pory"
	lock
# 149 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 150 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 151 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 152 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 153 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 154 "data/maps/SunshineWoods/scripts.pory"
	removeobject 7
# 155 "data/maps/SunshineWoods/scripts.pory"
	removeobject 5
# 156 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 157 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
# 158 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 159 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 168 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 169 "data/maps/SunshineWoods/scripts.pory"
	walk_in_place_left
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 21 "data/maps/SunshineWoods/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{DESTROY_MUGSHOT} Miki: Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 54 "data/maps/SunshineWoods/scripts.pory"
	.string "Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{DESTROY_MUGSHOT} Of course!$"

SunshineWoods_Eventscript_PawmisCry_Text_1:
# 65 "data/maps/SunshineWoods/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokemon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 131 "data/maps/SunshineWoods/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{DESTROY_MUGSHOT}Miki: We should take it back to the\n"
	.string "orphanage!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 150 "data/maps/SunshineWoods/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"
