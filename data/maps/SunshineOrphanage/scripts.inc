SunshineOrphanage_MapScripts::
# 2 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/SunshineOrphanage/scripts.pory"
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
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 10 "data/maps/SunshineOrphanage/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/SunshineOrphanage/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 0, SunshineOrphanageOnFrame0
# 15 "data/maps/SunshineOrphanage/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 4, SunshineOrphanageOnFrame4
	.2byte 0


SunshineOrphanageOnFrame0::
# 20 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_ShowTheMap
	return


SunshineOrphanage_Eventscript_ShowTheMap::
# 23 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, SlowlyShowTheMap
# 24 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 25 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_ShowTheMap_Text_0
# 26 "data/maps/SunshineOrphanage/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 5, 4
# 27 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 1
# 28 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 8
	return


# 31 "data/maps/SunshineOrphanage/scripts.pory"
SlowlyShowTheMap:
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

SunshineOrphanageOnFrame4::
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Shinjiro_Notice_Akihiko
	return


Miki_and_Shinjiro_Notice_Akihiko::
# 40 "data/maps/SunshineOrphanage/scripts.pory"
	lockall
# 41 "data/maps/SunshineOrphanage/scripts.pory"
	playse SE_PIN
# 42 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_Runs_To_Akihiko
# 43 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 44 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Shinjiro_Notice_Akihiko_Text_0
# 45 "data/maps/SunshineOrphanage/scripts.pory"
	releaseall
# 46 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Akihiko_walk_to_Shinjiro
	return


# 49 "data/maps/SunshineOrphanage/scripts.pory"
Miki_Runs_To_Akihiko:
# 50 "data/maps/SunshineOrphanage/scripts.pory"
	emote_exclamation_mark
# 51 "data/maps/SunshineOrphanage/scripts.pory"
	delay_16
# 52 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 52 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 53 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_up
	step_end

Miki_and_Akihiko_walk_to_Shinjiro::
# 57 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 58 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_leading_Akihiko_to_Shinjiro
# 59 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, Miki_leading_Akihiko_to_Shinjiro
# 60 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 61 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Akihiko_walk_to_Shinjiro_Text_0
# 66 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 67 "data/maps/SunshineOrphanage/scripts.pory"
	release
# 68 "data/maps/SunshineOrphanage/scripts.pory"
	goto Shinjiro_and_Miki_Join_Party
	return


# 71 "data/maps/SunshineOrphanage/scripts.pory"
Miki_leading_Akihiko_to_Shinjiro:
# 72 "data/maps/SunshineOrphanage/scripts.pory"
	walk_down
# 73 "data/maps/SunshineOrphanage/scripts.pory"
	walk_left
	step_end

Shinjiro_and_Miki_Join_Party::
# 77 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 78 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 4, Shinjiro_joins
# 79 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_joins
# 80 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 81 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 4
# 82 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 3
# 83 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 84 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 85 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Shinjiro_and_Miki_Join_Party_Text_0
# 86 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 5
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
	setspeaker Boy_1_OrphanageEntrance_Text_0
# 101 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Boy_1_OrphanageEntrance_Text_1
# 103 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Girl_OrphanageEntrance::
# 107 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 108 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 109 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Girl_OrphanageEntrance_Text_0
# 110 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Girl_OrphanageEntrance_Text_1
# 115 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunshine_Orphanage_Direction_Sign::
# 119 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 120 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Sunshine_Orphanage_Direction_Sign_Text_0
# 124 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Welcome_To_Sunshine_Orphanage::
# 128 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 129 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Welcome_To_Sunshine_Orphanage_Text_0
# 131 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Donors_List::
# 135 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 136 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Donors_List_Text_0
# 140 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Sunflora_NPC::
# 144 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 145 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 146 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
# 147 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


Budew_NPC::
# 151 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 152 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 153 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 154 "data/maps/SunshineOrphanage/scripts.pory"
	release
	return


SunshineOrphanage_Eventscript_ShowTheMap_Text_0:
# 25 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\l"
	.string "{COLOR LIGHT_GREEN}{SHADOW TRANSPARENT}- Level cap: 8 -$"

Miki_and_Shinjiro_Notice_Akihiko_Text_0:
# 44 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_MIKI}There you are!$"

Miki_and_Akihiko_walk_to_Shinjiro_Text_0:
# 61 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Miki wants to go to the woods but there\n"
	.string "are wild Pokemons there.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Shinji, it's fineee. As long as we stay\n"
	.string "out of the tall grass.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}To the woods! To the woods!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT} Fine...$"

Shinjiro_and_Miki_Join_Party_Text_0:
# 85 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_NONE}{DESTROY_MUGSHOT}Shinjiro and Miki are now traveling with\n"
	.string "Akihiko.$"

Boy_1_OrphanageEntrance_Text_0:
# 100 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuta$"

Boy_1_OrphanageEntrance_Text_1:
# 101 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Can I grow tall like these sunflowers?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} Just drink a lot of milk!$"

Girl_OrphanageEntrance_Text_0:
# 109 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuko$"

Girl_OrphanageEntrance_Text_1:
# 111 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sometimes I see people wearing black\n"
	.string "accompanying a man wearing white coat\l"
	.string "speaking with our teachers.\p"
	.string "I wonder who they are...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} I asked Ms. Kobayashi once and she\n"
	.string "said they donated a lot to the\l"
	.string "orphanage.$"

Sunshine_Orphanage_Direction_Sign_Text_0:
# 121 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sunshine Woods {DOWN_ARROW}\n Beware of wild Pokemons!$"

Welcome_To_Sunshine_Orphanage_Text_0:
# 129 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Welcome to Sunshine Orphanage!\p"
	.string "If you have any question, feel free to\n"
	.string "ask the staff at the main hall counter.$"

Donors_List_Text_0:
# 136 "data/maps/SunshineOrphanage/scripts.pory"
	.string "List of top donors (in alphabet order):\n"
	.string "--- Kai --- Kazuhisa ---\p"
	.string "--- Kirijo --- --- --- --- Ryota ---\n"
	.string "--- Takuya$"
