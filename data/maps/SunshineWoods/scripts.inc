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
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 5, SunshineWoods_Eventscript_OnFrame
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
	applymovement 6, SunshineWoods_Eventscript_MikiFoundSomething
# 38 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
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
# 61 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 62 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 63 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 64 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_ShinjiroAlerted
# 65 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_MikiAlerted
# 66 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 67 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 68 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_1
# 71 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 72 "data/maps/SunshineWoods/scripts.pory"
	release
# 73 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 76 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 77 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 78 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 79 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 80 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 81 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 82 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 83 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 85 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 86 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 87 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 87 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 88 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 89 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 89 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 90 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 91 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 92 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 94 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 95 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 96 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 99 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiJumpsOut:
# 100 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 104 "data/maps/SunshineWoods/scripts.pory"
	lock
# 105 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 7, MAP_SUNSHINE_WOODS
# 106 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 107 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 108 "data/maps/SunshineWoods/scripts.pory"
	applymovement 7, SunshineWoods_Eventscript_PawmiJumpsOut
# 109 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_Stayback
# 110 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 111 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_OnGuard
# 112 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 113 "data/maps/SunshineWoods/scripts.pory"
	release
# 114 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 117 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 118 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 119 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 120 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 121 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 122 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 124 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 125 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 126 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 127 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 131 "data/maps/SunshineWoods/scripts.pory"
	lock
# 132 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 133 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 134 "data/maps/SunshineWoods/scripts.pory"
	applymovement 7, SunshineWoods_Eventscript_PawmiIsWeak
# 135 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 136 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 137 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 142 "data/maps/SunshineWoods/scripts.pory"
	release
# 143 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 146 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 147 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 148 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 149 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 150 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 151 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 155 "data/maps/SunshineWoods/scripts.pory"
	lock
# 156 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 157 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 158 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 159 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 160 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 161 "data/maps/SunshineWoods/scripts.pory"
	removeobject 7
# 162 "data/maps/SunshineWoods/scripts.pory"
	removeobject 5
# 163 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 164 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
# 165 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 166 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 175 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 176 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 21 "data/maps/SunshineWoods/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{DESTROY_MUGSHOT} Miki: Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 57 "data/maps/SunshineWoods/scripts.pory"
	.string "Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{DESTROY_MUGSHOT} Of course!$"

SunshineWoods_Eventscript_PawmisCry_Text_1:
# 69 "data/maps/SunshineWoods/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokemon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 137 "data/maps/SunshineWoods/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{DESTROY_MUGSHOT}Miki: We should take it back to the\n"
	.string "orphanage!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 157 "data/maps/SunshineWoods/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"
