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
	applymovement 2, facedown
# 25 "data/maps/SunshineWoods/scripts.pory"
	applymovement 3, facedown
# 26 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 27 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0
# 31 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 32 "data/maps/SunshineWoods/scripts.pory"
	release
# 33 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 6
# 34 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_SUNSHINE_WOODS, 3, 5
	return


SunshineWoods_Eventscript_OnFrame6::
# 38 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PlayingInTheWoods
	return


SunshineWoods_Eventscript_PlayingInTheWoods::
# 42 "data/maps/SunshineWoods/scripts.pory"
	lock
# 43 "data/maps/SunshineWoods/scripts.pory"
	delay 60
# 44 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiFoundSomething
# 45 "data/maps/SunshineWoods/scripts.pory"
	waitmovement 0
# 46 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisCry
# 47 "data/maps/SunshineWoods/scripts.pory"
	release
	end


# 51 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiFoundSomething:
# 52 "data/maps/SunshineWoods/scripts.pory"
	walk_up
# 53 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 54 "data/maps/SunshineWoods/scripts.pory"
	walk_down
# 55 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 56 "data/maps/SunshineWoods/scripts.pory"
	emote_music
# 57 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 57 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_right
# 58 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_left
	step_end

SunshineWoods_Eventscript_PawmisCry::
# 62 "data/maps/SunshineWoods/scripts.pory"
	lock
# 63 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisCry_Text_0
# 66 "data/maps/SunshineWoods/scripts.pory"
	release
# 67 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown
	return


SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown::
# 71 "data/maps/SunshineWoods/scripts.pory"
	lock
# 72 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, faceup
# 73 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0
# 76 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 77 "data/maps/SunshineWoods/scripts.pory"
	release
# 78 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiCries
	return


SunshineWoods_Eventscript_PawmiCries::
# 82 "data/maps/SunshineWoods/scripts.pory"
	lock
# 83 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 84 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 85 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_AkihikoAlerted
# 86 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_ShinjiroAlerted
# 87 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_MikiAlerted
# 88 "data/maps/SunshineWoods/scripts.pory"
	delay 30
# 89 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 90 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmiCries_Text_0
# 93 "data/maps/SunshineWoods/scripts.pory"
	waitmessage
# 94 "data/maps/SunshineWoods/scripts.pory"
	release
# 95 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmiAppears
	return


# 98 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_AkihikoAlerted:
# 99 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 100 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 101 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 102 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 103 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 104 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 105 "data/maps/SunshineWoods/scripts.pory"
	face_right
	step_end

# 107 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_ShinjiroAlerted:
# 108 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 109 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 110 "data/maps/SunshineWoods/scripts.pory"
	face_up
# 111 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 112 "data/maps/SunshineWoods/scripts.pory"
	face_right
# 113 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 114 "data/maps/SunshineWoods/scripts.pory"
	face_down
	step_end

# 116 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_MikiAlerted:
# 117 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 118 "data/maps/SunshineWoods/scripts.pory"
	jump_in_place_left
	step_end

# 121 "data/maps/SunshineWoods/scripts.pory"
jumpright:
# 122 "data/maps/SunshineWoods/scripts.pory"
	jump_right
	step_end

SunshineWoods_Eventscript_PawmiAppears::
# 126 "data/maps/SunshineWoods/scripts.pory"
	lock
# 127 "data/maps/SunshineWoods/scripts.pory"
	showobjectat 6, MAP_SUNSHINE_WOODS
# 128 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI_DELTA, CRY_MODE_NORMAL
# 129 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 130 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, jumpright
# 131 "data/maps/SunshineWoods/scripts.pory"
	applymovement 5, SunshineWoods_Eventscript_Stayback
# 132 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Stayback
# 133 "data/maps/SunshineWoods/scripts.pory"
	applymovement 4, SunshineWoods_Eventscript_OnGuard
# 134 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 135 "data/maps/SunshineWoods/scripts.pory"
	release
# 136 "data/maps/SunshineWoods/scripts.pory"
	goto SunshineWoods_Eventscript_PawmisInjured
	return


# 139 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Stayback:
# 140 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 141 "data/maps/SunshineWoods/scripts.pory"
	face_left
# 142 "data/maps/SunshineWoods/scripts.pory"
	lock_facing_direction
# 143 "data/maps/SunshineWoods/scripts.pory"
	jump_right
# 144 "data/maps/SunshineWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 146 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_OnGuard:
# 147 "data/maps/SunshineWoods/scripts.pory"
	emote_exclamation_mark
# 148 "data/maps/SunshineWoods/scripts.pory"
	walk_fast_down
# 149 "data/maps/SunshineWoods/scripts.pory"
	face_left
	step_end

SunshineWoods_Eventscript_PawmisInjured::
# 153 "data/maps/SunshineWoods/scripts.pory"
	lock
# 154 "data/maps/SunshineWoods/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 155 "data/maps/SunshineWoods/scripts.pory"
	waitmoncry
# 156 "data/maps/SunshineWoods/scripts.pory"
	applymovement 6, SunshineWoods_Eventscript_PawmiIsWeak
# 157 "data/maps/SunshineWoods/scripts.pory"
	waitmovement
# 158 "data/maps/SunshineWoods/scripts.pory"
	delay 16
# 159 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_PawmisInjured_Text_0
# 164 "data/maps/SunshineWoods/scripts.pory"
	release
# 165 "data/maps/SunshineWoods/scripts.pory"
	goto TakePawmiToHeal
	return


# 168 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_PawmiIsWeak:
# 169 "data/maps/SunshineWoods/scripts.pory"
	emote_poisoned
# 170 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 171 "data/maps/SunshineWoods/scripts.pory"
	delay_16
# 172 "data/maps/SunshineWoods/scripts.pory"
	shake_vertical
# 173 "data/maps/SunshineWoods/scripts.pory"
	delay_16
	step_end

TakePawmiToHeal::
# 177 "data/maps/SunshineWoods/scripts.pory"
	lock
# 178 "data/maps/SunshineWoods/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi
# 179 "data/maps/SunshineWoods/scripts.pory"
	msgbox TakePawmiToHeal_Text_0
# 180 "data/maps/SunshineWoods/scripts.pory"
	closemessage
# 181 "data/maps/SunshineWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 182 "data/maps/SunshineWoods/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
# 183 "data/maps/SunshineWoods/scripts.pory"
	removeobject 6
# 184 "data/maps/SunshineWoods/scripts.pory"
	removeobject 4
# 185 "data/maps/SunshineWoods/scripts.pory"
	removeobject 5
# 186 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 187 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 188 "data/maps/SunshineWoods/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 189 "data/maps/SunshineWoods/scripts.pory"
	release
	return


# 198 "data/maps/SunshineWoods/scripts.pory"
SunshineWoods_Eventscript_Akihiko_Picking_up_Pawmi:
# 199 "data/maps/SunshineWoods/scripts.pory"
	walk_left
	step_end

OW_Chewtle::
# 203 "data/maps/SunshineWoods/scripts.pory"
	lock
# 204 "data/maps/SunshineWoods/scripts.pory"
	faceplayer
# 205 "data/maps/SunshineWoods/scripts.pory"
	startoverworldencounter 5
# 206 "data/maps/SunshineWoods/scripts.pory"
	removeobject 8
# 207 "data/maps/SunshineWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 208 "data/maps/SunshineWoods/scripts.pory"
	release
	end


SunshineWoods_Eventscript_DirectionSign::
# 213 "data/maps/SunshineWoods/scripts.pory"
	lock
# 214 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Eventscript_DirectionSign_Text_0
# 217 "data/maps/SunshineWoods/scripts.pory"
	release
	return


SunshineWoods_Eventscript_IkeBattle::
# 221 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_IKE, SunshineWoods_Text_IkeIntro, SunshineWoods_Text_IkeDefeated
# 222 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_IkePostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_HotaruBattle::
# 227 "data/maps/SunshineWoods/scripts.pory"
	trainerbattle_single TRAINER_HOTARU, SunshineWoods_Text_HotaruIntro, SunshineWoods_Text_HotaruDefeated
# 228 "data/maps/SunshineWoods/scripts.pory"
	msgbox SunshineWoods_Text_HotaruPostBattle, MSGBOX_AUTOCLOSE
	end


SunshineWoods_Eventscript_DoNotEnterTheGrass_Text_0:
# 28 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Alright, we're here.\p"
	.string "Don't enter the tall grass, okay?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Okay!$"

SunshineWoods_Eventscript_PawmisCry_Text_0:
# 64 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Big bro! Look! I just made this flower\n"
	.string "crown! It's for you!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}It's very pretty! Thank you, Miki!$"

SunshineWoods_Eventscript_ShinjiAskingForAFlowerCrown_Text_0:
# 73 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Will you make one for me too, Miki?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT} Of course!$"

SunshineWoods_Eventscript_PawmiCries_Text_0:
# 91 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Could be a wild Pokemon. Be careful!$"

SunshineWoods_Eventscript_PawmisInjured_Text_0:
# 159 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Wait...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}It looks heavily injured.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}We should take it back to the\n"
	.string "orphanage!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah!$"

TakePawmiToHeal_Text_0:
# 179 "data/maps/SunshineWoods/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Come on, lil' guy.$"

SunshineWoods_Eventscript_DirectionSign_Text_0:
# 214 "data/maps/SunshineWoods/scripts.pory"
	.string "Sunshine Orphanage {UP_ARROW}\n"
	.string "Sunshine Town {LEFT_ARROW}$"

SunshineWoods_Text_IkeIntro::
# 232 "data/maps/SunshineWoods/scripts.pory"
	.string "Hey! If you have a Pokémon, let's\n"
	.string "battle!$"

SunshineWoods_Text_IkeDefeated::
# 237 "data/maps/SunshineWoods/scripts.pory"
	.string "Woah! You're quite good!$"

SunshineWoods_Text_IkePostBattle::
# 241 "data/maps/SunshineWoods/scripts.pory"
	.string "Your Pokémon looks... kinda different.$"

SunshineWoods_Text_HotaruIntro::
# 245 "data/maps/SunshineWoods/scripts.pory"
	.string "I have cute Pokémons!$"

SunshineWoods_Text_HotaruDefeated::
# 249 "data/maps/SunshineWoods/scripts.pory"
	.string "They'll look even cuter when evolved. I\n"
	.string "even have them hold Soothe Bells!$"

SunshineWoods_Text_HotaruPostBattle::
# 253 "data/maps/SunshineWoods/scripts.pory"
	.string "You want to know where I got the items?\p"
	.string "A grandma in Sunshine Town gave them to\n"
	.string "me after I played with her Pokémon.$"
