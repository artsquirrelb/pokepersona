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
	compare VAR_AKIHIKOS_INTRO_STATE, 3
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
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 3, SunshineOrphanageOnFrame3
	.2byte 0


SunshineOrphanageOnFrame0::
# 18 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_ShowTheMap
	return


SunshineOrphanage_Eventscript_ShowTheMap::
# 21 "data/maps/SunshineOrphanage/scripts.pory"
	lockall
# 22 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, SlowlyShowTheMap
# 23 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 24 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_ShowTheMap_Text_0
# 25 "data/maps/SunshineOrphanage/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 5, 4
# 26 "data/maps/SunshineOrphanage/scripts.pory"
	releaseall
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

SunshineOrphanageOnFrame3::
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Shinjiro_Notice_Akihiko
	return


Miki_and_Shinjiro_Notice_Akihiko::
# 38 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	playse SE_PIN
# 40 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_Runs_To_Akihiko
# 41 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Shinjiro_Notice_Akihiko_Text_0
# 42 "data/maps/SunshineOrphanage/scripts.pory"
	release
# 43 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Akihiko_walk_to_Shinjiro
	return


# 46 "data/maps/SunshineOrphanage/scripts.pory"
Miki_Runs_To_Akihiko:
# 47 "data/maps/SunshineOrphanage/scripts.pory"
	emote_exclamation_mark
# 48 "data/maps/SunshineOrphanage/scripts.pory"
	delay_16
# 49 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 49 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 50 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_up
	step_end

Miki_and_Akihiko_walk_to_Shinjiro::
# 54 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 55 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 56 "data/maps/SunshineOrphanage/scripts.pory"
	delay 16
# 57 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_leading_Akihiko_to_Shinjiro
# 58 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, Miki_leading_Akihiko_to_Shinjiro
# 59 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 60 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Akihiko_walk_to_Shinjiro_Text_0
# 66 "data/maps/SunshineOrphanage/scripts.pory"
	waitmessage
# 68 "data/maps/SunshineOrphanage/scripts.pory"
	goto Shinjiro_and_Miki_Join_Party
# 69 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


# 72 "data/maps/SunshineOrphanage/scripts.pory"
Miki_leading_Akihiko_to_Shinjiro:
# 73 "data/maps/SunshineOrphanage/scripts.pory"
	walk_down
# 74 "data/maps/SunshineOrphanage/scripts.pory"
	walk_left
	step_end

Shinjiro_and_Miki_Join_Party::
# 78 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 79 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 4, Shinjiro_joins
# 80 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_joins
# 81 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement
# 82 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 4
# 83 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 3
# 84 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
# 85 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Shinjiro_and_Miki_Join_Party_Text_0
# 86 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 4
# 87 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


# 89 "data/maps/SunshineOrphanage/scripts.pory"
Shinjiro_joins:
# 90 "data/maps/SunshineOrphanage/scripts.pory"
	walk_right
	step_end

# 93 "data/maps/SunshineOrphanage/scripts.pory"
Miki_joins:
# 94 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

Boy_1_OrphanageEntrance::
# 98 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 99 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 100 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Boy_1_OrphanageEntrance_Text_0
# 102 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Girl_OrphanageEntrance::
# 106 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 107 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 108 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Girl_OrphanageEntrance_Text_0
# 113 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunshine_Orphanage_Direction_Sign::
# 117 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 118 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Sunshine_Orphanage_Direction_Sign_Text_0
# 122 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Welcome_To_Sunshine_Orphanage::
# 126 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 127 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Welcome_To_Sunshine_Orphanage_Text_0
# 129 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Donors_List::
# 133 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 134 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Donors_List_Text_0
# 138 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunflora_NPC::
# 142 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 143 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 144 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
# 145 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Budew_NPC::
# 149 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 150 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 151 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 152 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


SunshineOrphanage_Eventscript_ShowTheMap_Text_0:
# 24 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\l"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Level cap: 8$"

Miki_and_Shinjiro_Notice_Akihiko_Text_0:
# 41 "data/maps/SunshineOrphanage/scripts.pory"
	.string "There you are!$"

Miki_and_Akihiko_walk_to_Shinjiro_Text_0:
# 60 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}She wants to go to the woods but there\n"
	.string "are wild Pokemons there.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Shinji, it's fineee. As long as we stay\n"
	.string "out of the tall grass.\p"
	.string "{DESTROY_MUGSHOT} Miki: To the woods! To the woods!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT} Fine...$"

Shinjiro_and_Miki_Join_Party_Text_0:
# 85 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{DESTROY_MUGSHOT}Shinjiro and Miki are now traveling with\n"
	.string "Akihiko.$"

Boy_1_OrphanageEntrance_Text_0:
# 100 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Can I grow tall like these sunflowers?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} Just drink a lot of milk!$"

Girl_OrphanageEntrance_Text_0:
# 109 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sometimes I see people wearing black\n"
	.string "accompany with a man wearing white\l"
	.string "coat speaking with our teachers.\p"
	.string "I wonder who they are...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} I asked Ms. Kobayashi once and she\n"
	.string "said they donated a lot to the\l"
	.string "orphanage.$"

Sunshine_Orphanage_Direction_Sign_Text_0:
# 119 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sunshine Woods {DOWN_ARROW}\l Beware of wild Pokemons!$"

Welcome_To_Sunshine_Orphanage_Text_0:
# 127 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Welcome to Sunshine Orphanage!\p"
	.string "If you have any question, feel free to\n"
	.string "ask the staff at the main hall counter.$"

Donors_List_Text_0:
# 134 "data/maps/SunshineOrphanage/scripts.pory"
	.string "List of top donors (in alphabet order):\n"
	.string "--- Kai --- Kazuhisa ---\p"
	.string "--- Kirijo --- --- ---\l"
	.string "--- Ryota --- --- Takuya$"
