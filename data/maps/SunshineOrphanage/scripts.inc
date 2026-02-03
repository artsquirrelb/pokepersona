SunshineOrphanage_MapScripts::
# 2 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/SunshineOrphanage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_ge SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 5 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 6 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
	goto SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineOrphanage_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 12 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_TEMP_1
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
# 29 "data/maps/SunshineOrphanage/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 5, 4
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 1
# 31 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 52
	return


# 35 "data/maps/SunshineOrphanage/scripts.pory"
SlowlyShowTheMap:
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
# 36 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

SunshineOrphanageOnFrame4::
# 40 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Shinjiro_Notice_Akihiko
	return


Miki_and_Shinjiro_Notice_Akihiko::
# 44 "data/maps/SunshineOrphanage/scripts.pory"
	lockall
# 45 "data/maps/SunshineOrphanage/scripts.pory"
	playse SE_PIN
# 46 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_Runs_To_Akihiko
# 47 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 48 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Shinjiro_Notice_Akihiko_Text_0
# 49 "data/maps/SunshineOrphanage/scripts.pory"
	releaseall
# 50 "data/maps/SunshineOrphanage/scripts.pory"
	goto Miki_and_Akihiko_walk_to_Shinjiro
	return


# 53 "data/maps/SunshineOrphanage/scripts.pory"
Miki_Runs_To_Akihiko:
# 54 "data/maps/SunshineOrphanage/scripts.pory"
	emote_exclamation_mark
# 55 "data/maps/SunshineOrphanage/scripts.pory"
	delay_16
# 56 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 56 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_right
# 57 "data/maps/SunshineOrphanage/scripts.pory"
	walk_fast_up
	step_end

Miki_and_Akihiko_walk_to_Shinjiro::
# 61 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 62 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 3, Miki_leading_Akihiko_to_Shinjiro
# 63 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, Miki_leading_Akihiko_to_Shinjiro
# 64 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 65 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Miki_and_Akihiko_walk_to_Shinjiro_Text_0
# 69 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 70 "data/maps/SunshineOrphanage/scripts.pory"
	release
# 71 "data/maps/SunshineOrphanage/scripts.pory"
	goto Shinjiro_and_Miki_Join_Party
	return


# 74 "data/maps/SunshineOrphanage/scripts.pory"
Miki_leading_Akihiko_to_Shinjiro:
# 75 "data/maps/SunshineOrphanage/scripts.pory"
	walk_down
# 76 "data/maps/SunshineOrphanage/scripts.pory"
	walk_left
	step_end

Shinjiro_and_Miki_Join_Party::
# 80 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 81 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement 4, Shinjiro_joins
# 82 "data/maps/SunshineOrphanage/scripts.pory"
	applymove 3, Miki_joins
# 83 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 4
# 84 "data/maps/SunshineOrphanage/scripts.pory"
	delay 1
# 85 "data/maps/SunshineOrphanage/scripts.pory"
	removeobject 3
# 86 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_TEMP_1
# 87 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 5
# 88 "data/maps/SunshineOrphanage/scripts.pory"
	fwdtime 16, 40
# 89 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


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
	end


Girl_OrphanageEntrance::
# 111 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 112 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 113 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Girl_OrphanageEntrance_Text_0
# 114 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Girl_OrphanageEntrance_Text_1
# 117 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Sunshine_Orphanage_Direction_Sign::
# 122 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 123 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Sunshine_Orphanage_Direction_Sign_Text_0
# 125 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Welcome_To_Sunshine_Orphanage::
# 130 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 131 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Welcome_To_Sunshine_Orphanage_Text_0
# 133 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Donors_List::
# 138 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 139 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Donors_List_Text_0
# 143 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Sunflora_NPC::
# 148 "data/maps/SunshineOrphanage/scripts.pory"
	moncryscript SPECIES_SUNFLORA
# 149 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Budew_NPC::
# 154 "data/maps/SunshineOrphanage/scripts.pory"
	moncryscript SPECIES_BUDEW
# 155 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


SunshineOrphanage_Eventscript_MetalClawTutor::
# 160 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 161 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 162 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 163 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawTutor_Text_1, MSGBOX_YESNO
# 166 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineOrphanage_Eventscript_MetalClawTutor_2
# 191 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_MetalClawDeclined
SunshineOrphanage_Eventscript_MetalClawTutor_1:
# 193 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end

SunshineOrphanage_Eventscript_MetalClawTutor_2:
# 167 "data/maps/SunshineOrphanage/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 168 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineOrphanage_Eventscript_MetalClawTutor_6
# 175 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 176 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawTutor_Text_3
# 177 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 178 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_CLAW
# 179 "data/maps/SunshineOrphanage/scripts.pory"
	buffermovename STR_VAR_2, MOVE_METAL_CLAW
# 180 "data/maps/SunshineOrphanage/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 181 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq SunshineOrphanage_Eventscript_MetalClawTutor_8
# 185 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 186 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawTutor_Text_4
# 187 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
	goto SunshineOrphanage_Eventscript_MetalClawTutor_1

SunshineOrphanage_Eventscript_MetalClawTutor_6:
# 169 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 170 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawTutor_Text_2
# 171 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 172 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end

SunshineOrphanage_Eventscript_MetalClawTutor_8:
# 182 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_MetalClawDeclined
	goto SunshineOrphanage_Eventscript_MetalClawTutor_1


SunshineOrphanage_Eventscript_MetalClawDeclined::
# 198 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 199 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawDeclined_Text_0
# 200 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 201 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


SunshineOrphanage_Eventscript_ShowTheMap_Text_0:
# 27 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 10$"

Miki_and_Shinjiro_Notice_Akihiko_Text_0:
# 48 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_MK}There you are!$"

Miki_and_Akihiko_walk_to_Shinjiro_Text_0:
# 65 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Miki wants to go to the woods but there\n"
	.string "are wild Pokémon there.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Shinji, it's fineee. As long as we stay\n"
	.string "out of the tall grass.\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}To the woods! To the woods!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_PENSIVE}Sigh...$"

Boy_1_OrphanageEntrance_Text_0:
# 103 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuta$"

Boy_1_OrphanageEntrance_Text_1:
# 104 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Can I grow tall like these sunflowers?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}Just drink lots of milk!$"

Girl_OrphanageEntrance_Text_0:
# 113 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuko$"

Girl_OrphanageEntrance_Text_1:
# 114 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sometimes I see people wearing black\n"
	.string "accompanying a man in a white coat\l"
	.string "speaking with our teachers.\p"
	.string "I wonder who they are...\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}I asked Ms. Kobayashi once and she said\n"
	.string "they donated a lot to the orphanage.$"

Sunshine_Orphanage_Direction_Sign_Text_0:
# 123 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sunshine Woods {DOWN_ARROW}\n Beware of wild Pokémon!$"

Welcome_To_Sunshine_Orphanage_Text_0:
# 131 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Welcome to Sunshine Orphanage!\p"
	.string "If you have any questions, feel free to\n"
	.string "ask the staff at the main hall counter.$"

Donors_List_Text_0:
# 139 "data/maps/SunshineOrphanage/scripts.pory"
	.string "List of top donors (in alphabet order):\n"
	.string "--- Kai --- Kazuhisa ---\p"
	.string "--- Kirijo --- --- --- --- Ryota ---\n"
	.string "--- Takuya$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_0:
# 162 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Materu$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_1:
# 163 "data/maps/SunshineOrphanage/scripts.pory"
	.string "I'm interested in Steel-type Pokémon\n"
	.string "and recently learned how to teach the\l"
	.string "move {COLOR BLUE}Metal Claw {COLOR 2}to a Pokémon.\p"
	.string "Do you want me to?$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_2:
# 170 "data/maps/SunshineOrphanage/scripts.pory"
	.string "But you don't have any Pokémon...$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_3:
# 176 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Which Pokémon should I teach {COLOR BLUE}Metal Claw\n"
	.string "{COLOR 2}to?$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_4:
# 186 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Just speak to me if you want me to\n"
	.string "teach {COLOR BLUE}Metal Claw {COLOR 2}to a Pokémon!$"

SunshineOrphanage_Eventscript_MetalClawDeclined_Text_0:
# 199 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Aw... Okay.$"
