SunshineOrphanage_MapScripts::
# 2 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 10 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_ge SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
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
# 8 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_TEMP_1
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 12 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 13 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_TEMP_1
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/SunshineOrphanage/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 0, SunshineOrphanageOnFrame0
# 21 "data/maps/SunshineOrphanage/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 4, SunshineOrphanageOnFrame4
	.2byte 0


SunshineOrphanageOnFrame0::
# 26 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_ShowTheMap
	return


SunshineOrphanage_Eventscript_ShowTheMap::
# 29 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, SlowlyShowTheMap
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 31 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_ShowTheMap_Text_0
# 33 "data/maps/SunshineOrphanage/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 5, 4
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 1
# 35 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
	return


# 38 "data/maps/SunshineOrphanage/scripts.pory"
SlowlyShowTheMap:
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 39 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

SunshineOrphanageOnFrame4::
# 43 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Shinjiro_Notice_Akihiko
	return


Miki_and_Shinjiro_Notice_Akihiko::
# 47 "data/maps/SunshineOrphanage/scripts.pory"
	lockall
# 48 "data/maps/SunshineOrphanage/scripts.pory"
	playse SE_PIN
# 49 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_Runs_To_Akihiko
# 50 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 51 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Shinjiro_Notice_Akihiko_Text_0
# 52 "data/maps/SunshineOrphanage/scripts.pory"
	releaseall
# 53 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Akihiko_walk_to_Shinjiro
	return


# 56 "data/maps/SunshineOrphanage/scripts.pory"
Miki_Runs_To_Akihiko:
# 57 "data/maps/SunshineOrphanage/scripts.pory"
	emote_exclamation_mark
# 58 "data/maps/SunshineOrphanage/scripts.pory"
	delay_16
# 59 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 59 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 60 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_up
	step_end

Miki_and_Akihiko_walk_to_Shinjiro::
# 64 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 65 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_leading_Akihiko_to_Shinjiro
# 66 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, Miki_leading_Akihiko_to_Shinjiro
# 67 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 68 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Akihiko_walk_to_Shinjiro_Text_0
# 72 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 73 "data/maps/SunshineOrphanage/scripts.pory"
	release
# 74 "data/maps/SunshineOrphanage/scripts.pory"
	goto Shinjiro_and_Miki_Join_Party
	return


# 77 "data/maps/SunshineOrphanage/scripts.pory"
Miki_leading_Akihiko_to_Shinjiro:
# 78 "data/maps/SunshineOrphanage/scripts.pory"
	walk_down
# 79 "data/maps/SunshineOrphanage/scripts.pory"
	walk_left
	step_end

Shinjiro_and_Miki_Join_Party::
# 83 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 84 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 4, Shinjiro_joins
# 85 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_joins
# 86 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 87 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 4
# 88 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 3
# 89 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 90 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 91 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_TEMP_1
# 92 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 5
# 93 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 94 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


# 96 "data/maps/SunshineOrphanage/scripts.pory"
Shinjiro_joins:
# 97 "data/maps/SunshineOrphanage/scripts.pory"
	walk_right
	step_end

# 100 "data/maps/SunshineOrphanage/scripts.pory"
Miki_joins:
# 101 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

Boy_1_OrphanageEntrance::
# 105 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 106 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 107 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Boy_1_OrphanageEntrance_Text_0
# 108 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Boy_1_OrphanageEntrance_Text_1
# 110 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Girl_OrphanageEntrance::
# 114 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 115 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 116 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Girl_OrphanageEntrance_Text_0
# 117 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Girl_OrphanageEntrance_Text_1
# 121 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunshine_Orphanage_Direction_Sign::
# 125 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 126 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Sunshine_Orphanage_Direction_Sign_Text_0
# 128 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Welcome_To_Sunshine_Orphanage::
# 132 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 133 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Welcome_To_Sunshine_Orphanage_Text_0
# 135 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Donors_List::
# 139 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 140 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Donors_List_Text_0
# 144 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunflora_NPC::
# 148 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 149 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 150 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
# 151 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Budew_NPC::
# 155 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 156 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 157 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 158 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


SunshineOrphanage_Eventscript_ShowTheMap_Text_0:
# 31 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 10$"

Miki_and_Shinjiro_Notice_Akihiko_Text_0:
# 51 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_MIKI}There you are!$"

Miki_and_Akihiko_walk_to_Shinjiro_Text_0:
# 68 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Miki wants to go to the woods but there\n"
	.string "are wild Pokemons there.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Shinji, it's fineee. As long as we stay\n"
	.string "out of the tall grass.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}To the woods! To the woods!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Sigh...$"

Boy_1_OrphanageEntrance_Text_0:
# 107 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuta$"

Boy_1_OrphanageEntrance_Text_1:
# 108 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Can I grow tall like these sunflowers?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Just drink lots of milk!$"

Girl_OrphanageEntrance_Text_0:
# 116 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuko$"

Girl_OrphanageEntrance_Text_1:
# 117 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sometimes I see people wearing black\n"
	.string "accompanying a man in a white coat\l"
	.string "speaking with our teachers.\p"
	.string "I wonder who they are...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I asked Ms. Kobayashi once and she said\n"
	.string "they donated a lot to the orphanage.$"

Sunshine_Orphanage_Direction_Sign_Text_0:
# 126 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sunshine Woods {DOWN_ARROW}\nBeware of wild Pokemons!$"

Welcome_To_Sunshine_Orphanage_Text_0:
# 133 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Welcome to Sunshine Orphanage!\p"
	.string "If you have any questions, feel free to\n"
	.string "ask the staff at the main hall counter.$"

Donors_List_Text_0:
# 140 "data/maps/SunshineOrphanage/scripts.pory"
	.string "List of top donors (in alphabet order):\n"
	.string "--- Kai --- Kazuhisa ---\p"
	.string "--- Kirijo --- --- --- --- Ryota ---\n"
	.string "--- Takuya$"
