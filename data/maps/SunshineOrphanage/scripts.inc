SunshineOrphanage_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_SPAWN_INVISIBLE
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	clearflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 0, SunshineOrphanageOnFrame0
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 4, SunshineOrphanageOnFrame4
	.2byte 0


SunshineOrphanageOnFrame0::
	goto SunshineOrphanage_Eventscript_ShowTheMap
	return


SunshineOrphanage_Eventscript_ShowTheMap::
	applymovement LOCALID_PLAYER, SlowlyShowTheMap
	waitmovement 0
	msgbox SunshineOrphanage_Eventscript_ShowTheMap_Text_0
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 5, 4
	setvar VAR_AKIHIKOS_INTRO_STATE, 1
	setvar VAR_CURRENT_LEVEL_CAP, 8
	return


SlowlyShowTheMap:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SunshineOrphanageOnFrame4::
	goto Miki_and_Shinjiro_Notice_Akihiko
	return


Miki_and_Shinjiro_Notice_Akihiko::
	lockall
	playse SE_PIN
	applymovement 3, Miki_Runs_To_Akihiko
	waitmovement 0
	msgbox Miki_and_Shinjiro_Notice_Akihiko_Text_0
	releaseall
	goto Miki_and_Akihiko_walk_to_Shinjiro
	return


Miki_Runs_To_Akihiko:
	emote_exclamation_mark
	delay_16
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

Miki_and_Akihiko_walk_to_Shinjiro::
	lock
	applymovement 3, Miki_leading_Akihiko_to_Shinjiro
	applymovement LOCALID_PLAYER, Miki_leading_Akihiko_to_Shinjiro
	waitmovement 0
	msgbox Miki_and_Akihiko_walk_to_Shinjiro_Text_0
	closemessage
	release
	goto Shinjiro_and_Miki_Join_Party
	return


Miki_leading_Akihiko_to_Shinjiro:
	walk_down
	walk_left
	step_end

Shinjiro_and_Miki_Join_Party::
	lock
	applymovement 4, Shinjiro_joins
	applymovement 3, Miki_joins
	waitmovement 0
	removeobject 4
	removeobject 3
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	msgbox Shinjiro_and_Miki_Join_Party_Text_0
	setvar VAR_AKIHIKOS_INTRO_STATE, 5
	release
	return


Shinjiro_joins:
	walk_right
	step_end

Miki_joins:
	walk_up
	step_end

Boy_1_OrphanageEntrance::
	lock
	faceplayer
	msgbox Boy_1_OrphanageEntrance_Text_0
	release
	return


Girl_OrphanageEntrance::
	lock
	faceplayer
	msgbox Girl_OrphanageEntrance_Text_0
	release
	return


Sunshine_Orphanage_Direction_Sign::
	lock
	msgbox Sunshine_Orphanage_Direction_Sign_Text_0
	release
	return


Welcome_To_Sunshine_Orphanage::
	lock
	msgbox Welcome_To_Sunshine_Orphanage_Text_0
	release
	return


Donors_List::
	lock
	msgbox Donors_List_Text_0
	release
	return


Sunflora_NPC::
	lock
	faceplayer
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
	release
	return


Budew_NPC::
	lock
	faceplayer
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
	release
	return


SunshineOrphanage_Eventscript_ShowTheMap_Text_0:
	.string "Akihiko's Prologue: Sunshine Memories\l"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Level cap: 8$"

Miki_and_Shinjiro_Notice_Akihiko_Text_0:
	.string "There you are!$"

Miki_and_Akihiko_walk_to_Shinjiro_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}She wants to go to the woods but there\n"
	.string "are wild Pokemons there.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Shinji, it's fineee. As long as we stay\n"
	.string "out of the tall grass.\p"
	.string "{DESTROY_MUGSHOT} Miki: To the woods! To the woods!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT} Fine...$"

Shinjiro_and_Miki_Join_Party_Text_0:
	.string "{DESTROY_MUGSHOT}Shinjiro and Miki are now traveling with\n"
	.string "Akihiko.$"

Boy_1_OrphanageEntrance_Text_0:
	.string "Can I grow tall like these sunflowers?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} Just drink a lot of milk!$"

Girl_OrphanageEntrance_Text_0:
	.string "Sometimes I see people wearing black\n"
	.string "accompany with a man wearing white\n"
	.string "coat speaking with our teachers.\p"
	.string "I wonder who they are...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} I asked Ms. Kobayashi once and she\n"
	.string "said they donated a lot to the\n"
	.string "orphanage.$"

Sunshine_Orphanage_Direction_Sign_Text_0:
	.string "Sunshine Woods {DOWN_ARROW}\n Beware of wild Pokemons!$"

Welcome_To_Sunshine_Orphanage_Text_0:
	.string "Welcome to Sunshine Orphanage!\p"
	.string "If you have any question, feel free to\n"
	.string "ask the staff at the main hall counter.$"

Donors_List_Text_0:
	.string "List of top donors (in alphabet order):\n"
	.string "--- Kai --- Kazuhisa ---\p"
	.string "--- Kirijo --- --- --- --- Ryota ---\n"
	.string "--- Takuya --- --- --- --- ---$"
