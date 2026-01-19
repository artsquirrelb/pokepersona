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
	manuallysettime WEEKDAY_WED, 16, 30, 0
# 23 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 24 "data/maps/SunshineOrphanage/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 25 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_ShowTheMap
	return


SunshineOrphanage_Eventscript_ShowTheMap::
# 28 "data/maps/SunshineOrphanage/scripts.pory"
	applymovement LOCALID_PLAYER, SlowlyShowTheMap
# 29 "data/maps/SunshineOrphanage/scripts.pory"
	waitmovement 0
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_ShowTheMap_Text_0
# 32 "data/maps/SunshineOrphanage/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 5, 4
# 33 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 1
# 34 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 35 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 52
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
	setflag FLAG_TEMP_1
# 90 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 5
# 91 "data/maps/SunshineOrphanage/scripts.pory"
	fwdtime 16, 40
# 92 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


# 95 "data/maps/SunshineOrphanage/scripts.pory"
Shinjiro_joins:
# 96 "data/maps/SunshineOrphanage/scripts.pory"
	walk_right
	step_end

# 99 "data/maps/SunshineOrphanage/scripts.pory"
Miki_joins:
# 100 "data/maps/SunshineOrphanage/scripts.pory"
	walk_up
	step_end

Boy_1_OrphanageEntrance::
# 104 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 105 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 106 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Boy_1_OrphanageEntrance_Text_0
# 107 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Boy_1_OrphanageEntrance_Text_1
# 109 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Girl_OrphanageEntrance::
# 114 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 115 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 116 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker Girl_OrphanageEntrance_Text_0
# 117 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Girl_OrphanageEntrance_Text_1
# 120 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Sunshine_Orphanage_Direction_Sign::
# 125 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 126 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Sunshine_Orphanage_Direction_Sign_Text_0
# 128 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Welcome_To_Sunshine_Orphanage::
# 133 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 134 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Welcome_To_Sunshine_Orphanage_Text_0
# 136 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Donors_List::
# 141 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 142 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox Donors_List_Text_0
# 146 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Sunflora_NPC::
# 151 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 152 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 153 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
# 154 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


Budew_NPC::
# 159 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 160 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 161 "data/maps/SunshineOrphanage/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 162 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


SunshineOrphanage_Eventscript_MetalClawTutor::
# 167 "data/maps/SunshineOrphanage/scripts.pory"
	lock
# 168 "data/maps/SunshineOrphanage/scripts.pory"
	faceplayer
# 169 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 170 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawTutor_Text_1, MSGBOX_YESNO
# 173 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineOrphanage_Eventscript_MetalClawTutor_2
# 198 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_MetalClawDeclined
SunshineOrphanage_Eventscript_MetalClawTutor_1:
# 200 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end

SunshineOrphanage_Eventscript_MetalClawTutor_2:
# 174 "data/maps/SunshineOrphanage/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 175 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineOrphanage_Eventscript_MetalClawTutor_6
# 182 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 183 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawTutor_Text_3
# 184 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 185 "data/maps/SunshineOrphanage/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_CLAW
# 186 "data/maps/SunshineOrphanage/scripts.pory"
	buffermovename STR_VAR_2, MOVE_METAL_CLAW
# 187 "data/maps/SunshineOrphanage/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 188 "data/maps/SunshineOrphanage/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq SunshineOrphanage_Eventscript_MetalClawTutor_8
# 192 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 193 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawTutor_Text_4
# 194 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
	goto SunshineOrphanage_Eventscript_MetalClawTutor_1

SunshineOrphanage_Eventscript_MetalClawTutor_6:
# 176 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 177 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawTutor_Text_2
# 178 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 179 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end

SunshineOrphanage_Eventscript_MetalClawTutor_8:
# 189 "data/maps/SunshineOrphanage/scripts.pory"
	goto SunshineOrphanage_Eventscript_MetalClawDeclined
	goto SunshineOrphanage_Eventscript_MetalClawTutor_1


SunshineOrphanage_Eventscript_MetalClawDeclined::
# 205 "data/maps/SunshineOrphanage/scripts.pory"
	setspeaker SunshineOrphanage_Eventscript_MetalClawTutor_Text_0
# 206 "data/maps/SunshineOrphanage/scripts.pory"
	msgbox SunshineOrphanage_Eventscript_MetalClawDeclined_Text_0
# 207 "data/maps/SunshineOrphanage/scripts.pory"
	closemessage
# 208 "data/maps/SunshineOrphanage/scripts.pory"
	release
	end


SunshineOrphanage_Eventscript_ShowTheMap_Text_0:
# 30 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Akihiko's Prologue: Sunshine Memories\n"
	.string "{COLOR GREEN}{CLEAR_TO 64}Level cap: 10$"

Miki_and_Shinjiro_Notice_Akihiko_Text_0:
# 51 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_MK}There you are!$"

Miki_and_Akihiko_walk_to_Shinjiro_Text_0:
# 68 "data/maps/SunshineOrphanage/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}Miki wants to go to the woods but there\n"
	.string "are wild Pokémon there.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Shinji, it's fineee. As long as we stay\n"
	.string "out of the tall grass.\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}To the woods! To the woods!\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_PENSIVE}Sigh...$"

Boy_1_OrphanageEntrance_Text_0:
# 106 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuta$"

Boy_1_OrphanageEntrance_Text_1:
# 107 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Can I grow tall like these sunflowers?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_HAPPY}Just drink lots of milk!$"

Girl_OrphanageEntrance_Text_0:
# 116 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Yuko$"

Girl_OrphanageEntrance_Text_1:
# 117 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sometimes I see people wearing black\n"
	.string "accompanying a man in a white coat\l"
	.string "speaking with our teachers.\p"
	.string "I wonder who they are...\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}I asked Ms. Kobayashi once and she said\n"
	.string "they donated a lot to the orphanage.$"

Sunshine_Orphanage_Direction_Sign_Text_0:
# 126 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Sunshine Woods {DOWN_ARROW}\n Beware of wild Pokémon!$"

Welcome_To_Sunshine_Orphanage_Text_0:
# 134 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Welcome to Sunshine Orphanage!\p"
	.string "If you have any questions, feel free to\n"
	.string "ask the staff at the main hall counter.$"

Donors_List_Text_0:
# 142 "data/maps/SunshineOrphanage/scripts.pory"
	.string "List of top donors (in alphabet order):\n"
	.string "--- Kai --- Kazuhisa ---\p"
	.string "--- Kirijo --- --- --- --- Ryota ---\n"
	.string "--- Takuya$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_0:
# 169 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Materu$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_1:
# 170 "data/maps/SunshineOrphanage/scripts.pory"
	.string "I'm interested in Steel-type Pokémon\n"
	.string "and recently learned how to teach the\l"
	.string "move {COLOR BLUE}Metal Claw {COLOR 2}to a Pokémon.\p"
	.string "Do you want me to?$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_2:
# 177 "data/maps/SunshineOrphanage/scripts.pory"
	.string "But you don't have any Pokémon...$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_3:
# 183 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Which Pokémon should I teach {COLOR BLUE}Metal Claw\n"
	.string "{COLOR 2}to?$"

SunshineOrphanage_Eventscript_MetalClawTutor_Text_4:
# 193 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Just speak to me if you want me to\n"
	.string "teach {COLOR BLUE}Metal Claw {COLOR 2}to a Pokémon!$"

SunshineOrphanage_Eventscript_MetalClawDeclined_Text_0:
# 206 "data/maps/SunshineOrphanage/scripts.pory"
	.string "Aw... Okay.$"
