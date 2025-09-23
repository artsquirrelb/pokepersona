SunshineOrphanage_MapScripts::
# 2 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 5 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/SunshineOrphanage/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 0, SunshineOrphanageOnFrame0
# 13 "data/maps/SunshineOrphanage/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 4, SunshineOrphanageOnFrame4
	.2byte 0


SunshineOrphanageOnFrame0::
# 18 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_ShowTheMap
	return


SunshineOrphanage_Eventscript_ShowTheMap::
# 21 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, SlowlyShowTheMap
# 22 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 23 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_ShowTheMap_Text_0
# 24 "data/maps/SunshineOrphanage/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 5, 4
# 25 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 1
# 26 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 8
	return


# 29 "data/maps/SunshineOrphanage/scripts.pory"
SlowlyShowTheMap:
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

SunshineOrphanageOnFrame4::
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Shinjiro_Notice_Akihiko
	return


Miki_and_Shinjiro_Notice_Akihiko::
# 38 "data/maps/SunshineOrphanage/scripts.pory"
	lockall
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	playse SE_PIN
# 40 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_Runs_To_Akihiko
# 41 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 42 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Shinjiro_Notice_Akihiko_Text_0
# 43 "data/maps/SunshineOrphanage/scripts.pory"
	releaseall
# 44 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Akihiko_walk_to_Shinjiro
	return


# 47 "data/maps/SunshineOrphanage/scripts.pory"
Miki_Runs_To_Akihiko:
# 48 "data/maps/SunshineOrphanage/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/SunshineOrphanage/scripts.pory"
	delay_16
# 50 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 50 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 51 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_up
	step_end

Miki_and_Akihiko_walk_to_Shinjiro::
# 55 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 56 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_leading_Akihiko_to_Shinjiro
# 57 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, Miki_leading_Akihiko_to_Shinjiro
# 58 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 59 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Akihiko_walk_to_Shinjiro_Text_0
# 64 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 65 "data/maps/SunshineOrphanage/scripts.pory"
	release
# 66 "data/maps/SunshineOrphanage/scripts.pory"
	goto Shinjiro_and_Miki_Join_Party
	return


# 69 "data/maps/SunshineOrphanage/scripts.pory"
Miki_leading_Akihiko_to_Shinjiro:
# 70 "data/maps/SunshineOrphanage/scripts.pory"
	walk_down
# 71 "data/maps/SunshineOrphanage/scripts.pory"
	walk_left
	step_end

Shinjiro_and_Miki_Join_Party::
# 75 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 76 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 4, Shinjiro_joins
# 77 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_joins
# 78 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 79 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 4
# 80 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 3
# 81 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
# 82 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Shinjiro_and_Miki_Join_Party_Text_0
# 83 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 5
# 84 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


# 86 "data/maps/SunshineOrphanage/scripts.pory"
Shinjiro_joins:
# 87 "data/maps/SunshineOrphanage/scripts.pory"
	walk_right
	step_end

# 90 "data/maps/SunshineOrphanage/scripts.pory"
Miki_joins:
# 91 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

Boy_1_OrphanageEntrance::
# 95 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 96 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 97 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Boy_1_OrphanageEntrance_Text_0
# 98 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Boy_1_OrphanageEntrance_Text_1
# 100 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Girl_OrphanageEntrance::
# 104 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 105 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 106 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Girl_OrphanageEntrance_Text_0
# 107 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Girl_OrphanageEntrance_Text_1
# 112 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunshine_Orphanage_Direction_Sign::
# 116 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 117 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Sunshine_Orphanage_Direction_Sign_Text_0
# 121 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Welcome_To_Sunshine_Orphanage::
# 125 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 126 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Welcome_To_Sunshine_Orphanage_Text_0
# 128 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Donors_List::
# 132 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 133 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Donors_List_Text_0
# 137 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunflora_NPC::
# 141 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 142 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 143 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
# 144 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Budew_NPC::
# 148 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 149 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 150 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 151 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


SunshineOrphanage_Eventscript_ShowTheMap_Text_0:
# 23 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\l"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Level cap: 8$"

Miki_and_Shinjiro_Notice_Akihiko_Text_0:
# 42 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_MIKI}There you are!$"

Miki_and_Akihiko_walk_to_Shinjiro_Text_0:
# 59 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Miki wants to go to the woods but there\n"
	.string "are wild Pokemons there.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Shinji, it's fineee. As long as we stay\n"
	.string "out of the tall grass.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}To the woods! To the woods!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT} Fine...$"

Shinjiro_and_Miki_Join_Party_Text_0:
# 82 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_NONE}{DESTROY_MUGSHOT}Shinjiro and Miki are now traveling with\n"
	.string "Akihiko.$"

Boy_1_OrphanageEntrance_Text_0:
# 97 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuta$"

Boy_1_OrphanageEntrance_Text_1:
# 98 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Can I grow tall like these sunflowers?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} Just drink a lot of milk!$"

Girl_OrphanageEntrance_Text_0:
# 106 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuko$"

Girl_OrphanageEntrance_Text_1:
# 108 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sometimes I see people wearing black\n"
	.string "accompanying a man wearing white coat\l"
	.string "speaking with our teachers.\p"
	.string "I wonder who they are...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} I asked Ms. Kobayashi once and she\n"
	.string "said they donated a lot to the\l"
	.string "orphanage.$"

Sunshine_Orphanage_Direction_Sign_Text_0:
# 118 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sunshine Woods {DOWN_ARROW}\n Beware of wild Pokemons!$"

Welcome_To_Sunshine_Orphanage_Text_0:
# 126 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Welcome to Sunshine Orphanage!\p"
	.string "If you have any question, feel free to\n"
	.string "ask the staff at the main hall counter.$"

Donors_List_Text_0:
# 133 "data/maps/SunshineOrphanage/scripts.pory"
	.string "List of top donors (in alphabet order):\n"
	.string "--- Kai --- Kazuhisa ---\p"
	.string "--- Kirijo --- --- --- --- Ryota ---\n"
	.string "--- Takuya$"
