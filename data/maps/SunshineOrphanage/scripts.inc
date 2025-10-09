SunshineOrphanage_MapScripts::
# 2 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 9 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 5 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 6 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 7 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 11 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 12 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/SunshineOrphanage/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 0, SunshineOrphanageOnFrame0
# 17 "data/maps/SunshineOrphanage/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 4, SunshineOrphanageOnFrame4
	.2byte 0


SunshineOrphanageOnFrame0::
# 22 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_ShowTheMap
	return


SunshineOrphanage_Eventscript_ShowTheMap::
# 25 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, SlowlyShowTheMap
# 26 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 27 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_ShowTheMap_Text_0
# 28 "data/maps/SunshineOrphanage/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 5, 4
# 29 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 1
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 8
	return


# 33 "data/maps/SunshineOrphanage/scripts.pory"
SlowlyShowTheMap:
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

SunshineOrphanageOnFrame4::
# 38 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Shinjiro_Notice_Akihiko
	return


Miki_and_Shinjiro_Notice_Akihiko::
# 42 "data/maps/SunshineOrphanage/scripts.pory"
	lockall
# 43 "data/maps/SunshineOrphanage/scripts.pory"
	playse SE_PIN
# 44 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_Runs_To_Akihiko
# 45 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 46 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Shinjiro_Notice_Akihiko_Text_0
# 47 "data/maps/SunshineOrphanage/scripts.pory"
	releaseall
# 48 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Akihiko_walk_to_Shinjiro
	return


# 51 "data/maps/SunshineOrphanage/scripts.pory"
Miki_Runs_To_Akihiko:
# 52 "data/maps/SunshineOrphanage/scripts.pory"
	emote_exclamation_mark
# 53 "data/maps/SunshineOrphanage/scripts.pory"
	delay_16
# 54 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 54 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 55 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_up
	step_end

Miki_and_Akihiko_walk_to_Shinjiro::
# 59 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 60 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_leading_Akihiko_to_Shinjiro
# 61 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, Miki_leading_Akihiko_to_Shinjiro
# 62 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 63 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Akihiko_walk_to_Shinjiro_Text_0
# 68 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 69 "data/maps/SunshineOrphanage/scripts.pory"
	release
# 70 "data/maps/SunshineOrphanage/scripts.pory"
	goto Shinjiro_and_Miki_Join_Party
	return


# 73 "data/maps/SunshineOrphanage/scripts.pory"
Miki_leading_Akihiko_to_Shinjiro:
# 74 "data/maps/SunshineOrphanage/scripts.pory"
	walk_down
# 75 "data/maps/SunshineOrphanage/scripts.pory"
	walk_left
	step_end

Shinjiro_and_Miki_Join_Party::
# 79 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 80 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 4, Shinjiro_joins
# 81 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_joins
# 82 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 83 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 4
# 84 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 3
# 85 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 86 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 87 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Shinjiro_and_Miki_Join_Party_Text_0
# 88 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 5
# 89 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 90 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


# 92 "data/maps/SunshineOrphanage/scripts.pory"
Shinjiro_joins:
# 93 "data/maps/SunshineOrphanage/scripts.pory"
	walk_right
	step_end

# 96 "data/maps/SunshineOrphanage/scripts.pory"
Miki_joins:
# 97 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

Boy_1_OrphanageEntrance::
# 101 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 102 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 103 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Boy_1_OrphanageEntrance_Text_0
# 104 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Boy_1_OrphanageEntrance_Text_1
# 106 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Girl_OrphanageEntrance::
# 110 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 111 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 112 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Girl_OrphanageEntrance_Text_0
# 113 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Girl_OrphanageEntrance_Text_1
# 118 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunshine_Orphanage_Direction_Sign::
# 122 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 123 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Sunshine_Orphanage_Direction_Sign_Text_0
# 127 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Welcome_To_Sunshine_Orphanage::
# 131 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 132 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Welcome_To_Sunshine_Orphanage_Text_0
# 134 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Donors_List::
# 138 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 139 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Donors_List_Text_0
# 143 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunflora_NPC::
# 147 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 148 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 149 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
# 150 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Budew_NPC::
# 154 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 155 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 156 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 157 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


SunshineOrphanage_Eventscript_ShowTheMap_Text_0:
# 27 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}- Level cap: 8 -$"

Miki_and_Shinjiro_Notice_Akihiko_Text_0:
# 46 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_MIKI}There you are!$"

Miki_and_Akihiko_walk_to_Shinjiro_Text_0:
# 63 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Miki wants to go to the woods but there\n"
	.string "are wild Pokemons there.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Shinji, it's fineee. As long as we stay\n"
	.string "out of the tall grass.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}To the woods! To the woods!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT} Fine...$"

Shinjiro_and_Miki_Join_Party_Text_0:
# 87 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_NONE}{DESTROY_MUGSHOT}Shinjiro and Miki are now traveling with\n"
	.string "Akihiko.$"

Boy_1_OrphanageEntrance_Text_0:
# 103 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuta$"

Boy_1_OrphanageEntrance_Text_1:
# 104 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Can I grow tall like these sunflowers?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} Just drink a lot of milk!$"

Girl_OrphanageEntrance_Text_0:
# 112 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuko$"

Girl_OrphanageEntrance_Text_1:
# 114 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sometimes I see people wearing black\n"
	.string "accompanying a man wearing white coat\l"
	.string "speaking with our teachers.\p"
	.string "I wonder who they are...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} I asked Ms. Kobayashi once and she\n"
	.string "said they donated a lot to the\l"
	.string "orphanage.$"

Sunshine_Orphanage_Direction_Sign_Text_0:
# 124 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sunshine Woods {DOWN_ARROW}\n Beware of wild Pokemons!$"

Welcome_To_Sunshine_Orphanage_Text_0:
# 132 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Welcome to Sunshine Orphanage!\p"
	.string "If you have any question, feel free to\n"
	.string "ask the staff at the main hall counter.$"

Donors_List_Text_0:
# 139 "data/maps/SunshineOrphanage/scripts.pory"
	.string "List of top donors (in alphabet order):\n"
	.string "--- Kai --- Kazuhisa ---\p"
	.string "--- Kirijo --- --- --- --- Ryota ---\n"
	.string "--- Takuya$"
