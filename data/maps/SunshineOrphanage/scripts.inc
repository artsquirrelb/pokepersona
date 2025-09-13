SunshineOrphanage_MapScripts::
# 2 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 3
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/SunshineOrphanage/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 3, SunshineOrphanageOnFrame3
	.2byte 0


SunshineOrphanageOnFrame3::
# 13 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Shinjiro_Notice_Akihiko
	return


Miki_and_Shinjiro_Notice_Akihiko::
# 17 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 18 "data/maps/SunshineOrphanage/scripts.pory"
	playse SE_PIN
# 19 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_Runs_To_Akihiko
# 20 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Shinjiro_Notice_Akihiko_Text_0
# 21 "data/maps/SunshineOrphanage/scripts.pory"
	release
# 22 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Akihiko_walk_to_Shinjiro
	return


# 25 "data/maps/SunshineOrphanage/scripts.pory"
Miki_Runs_To_Akihiko:
# 26 "data/maps/SunshineOrphanage/scripts.pory"
	emote_exclamation_mark
# 27 "data/maps/SunshineOrphanage/scripts.pory"
	delay_16
# 28 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 28 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 29 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_up
	step_end

Miki_and_Akihiko_walk_to_Shinjiro::
# 33 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 35 "data/maps/SunshineOrphanage/scripts.pory"
	delay 16
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_leading_Akihiko_to_Shinjiro
# 37 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, Miki_leading_Akihiko_to_Shinjiro
# 38 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Akihiko_walk_to_Shinjiro_Text_0
# 45 "data/maps/SunshineOrphanage/scripts.pory"
	waitmessage
# 47 "data/maps/SunshineOrphanage/scripts.pory"
	goto Shinjiro_and_Miki_Join_Party
# 48 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


# 51 "data/maps/SunshineOrphanage/scripts.pory"
Miki_leading_Akihiko_to_Shinjiro:
# 52 "data/maps/SunshineOrphanage/scripts.pory"
	walk_down
# 53 "data/maps/SunshineOrphanage/scripts.pory"
	walk_left
	step_end

Shinjiro_and_Miki_Join_Party::
# 57 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 58 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 4, Shinjiro_joins
# 59 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_joins
# 60 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement
# 61 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 4
# 62 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 3
# 63 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
# 64 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Shinjiro_and_Miki_Join_Party_Text_0
# 65 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 4
# 66 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


# 68 "data/maps/SunshineOrphanage/scripts.pory"
Shinjiro_joins:
# 69 "data/maps/SunshineOrphanage/scripts.pory"
	walk_right
	step_end

# 72 "data/maps/SunshineOrphanage/scripts.pory"
Miki_joins:
# 73 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

Boy_1_OrphanageEntrance::
# 77 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 78 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 79 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Boy_1_OrphanageEntrance_Text_0
# 81 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Girl_OrphanageEntrance::
# 85 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 86 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 87 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Girl_OrphanageEntrance_Text_0
# 92 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunshine_Orphanage_Direction_Sign::
# 96 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 97 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Sunshine_Orphanage_Direction_Sign_Text_0
# 101 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Welcome_To_Sunshine_Orphanage::
# 105 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 106 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Welcome_To_Sunshine_Orphanage_Text_0
# 108 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Donors_List::
# 112 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 113 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Donors_List_Text_0
# 117 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunflora_NPC::
# 121 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 122 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 123 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
# 124 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Budew_NPC::
# 128 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 129 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 130 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 131 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Miki_and_Shinjiro_Notice_Akihiko_Text_0:
# 20 "data/maps/SunshineOrphanage/scripts.pory"
	.string "There you are!$"

Miki_and_Akihiko_walk_to_Shinjiro_Text_0:
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}She wants to go to the woods but there\n"
	.string "are wild Pokemons there.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Shinji, it's fineee. As long as we stay\n"
	.string "out of the tall grass.\p"
	.string "{DESTROY_MUGSHOT} Miki: To the woods! To the woods!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT} Fine...$"

Shinjiro_and_Miki_Join_Party_Text_0:
# 64 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{DESTROY_MUGSHOT}Shinjiro and Miki are now traveling with\n"
	.string "Akihiko.$"

Boy_1_OrphanageEntrance_Text_0:
# 79 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Can I grow tall like these sunflowers?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} Just drink a lot of milk!$"

Girl_OrphanageEntrance_Text_0:
# 88 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sometimes I see people wearing black\n"
	.string "accompany with a man wearing white\l"
	.string "coat speaking with our teachers.\p"
	.string "I wonder who they are...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} I asked Ms. Kobayashi once and she\n"
	.string "said they donated a lot to the\l"
	.string "orphanage.$"

Sunshine_Orphanage_Direction_Sign_Text_0:
# 98 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sunshine Woods {DOWN_ARROW}\l Beware of wild Pokemons!$"

Welcome_To_Sunshine_Orphanage_Text_0:
# 106 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Welcome to Sunshine Orphanage!\p"
	.string "If you have any question, feel free to\n"
	.string "ask the staff at the main hall counter.$"

Donors_List_Text_0:
# 113 "data/maps/SunshineOrphanage/scripts.pory"
	.string "List of top donors (in alphabet order):\n"
	.string "--- Kai --- Kazuhisa ---\p"
	.string "--- Kirijo --- --- ---\l"
	.string "--- Ryota --- --- Takuya$"
