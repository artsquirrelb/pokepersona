SunshineOrphanageMainHall_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_AKIHIKOS_INTRO_STATE, 7
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	clearflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	setobjectxyperm 4, 11, 23
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, Akihiko_FaceUp
	.2byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_Eventscript_OnFrame7
	.2byte 0


faceright:
	face_right
	step_end

SunshineOrphanageMainHall_Eventscript_OnFrame7::
	goto SunshineOrphanageMainHall_Eventscript_HealingPawmi
	return


SunshineOrphanageMainHall_Eventscript_HealingPawmi::
	lock
	delay 30
	playse MUS_HEAL
	waitse
	release
	goto SunshineOrphanageMainHall_Eventscript_PawmiIsHealed
	return


facedown:
	face_down
	step_end

BlisseyHealingPawmi:
	walk_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed::
	lock
	applymovement 11, BlisseyHealingPawmi
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
	waitmoncry
	delay 30
	applymovement LOCALID_PLAYER, facedown
	applymovement 13, facedown
	applymovement 14, facedown
	waitmovement 0
	delay 16
	showobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	applymovement 15, PutdownbyAkihiko
	waitmovement 0
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0
	closemessage
	release
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated
	return


PutdownbyAkihiko:
	walk_down
	face_up
	delay_8
	walk_in_place_up
	delay_8
	walk_in_place_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated::
	lock
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
	applymovement 15, HeartPawmi
	waitmoncry
	waitmovement 0
	delay 30
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0
	closemessage
	applymovement 14, MikiHappy
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1
	closemessage
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2
	setvar VAR_AKIHIKOS_INTRO_STATE, 8
SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1:
	release
	return

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2:
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1


SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi::
	lock
	faceplayer
	msgbox SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0
	release
	return


SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi::
	lock
	faceplayer
	msgbox SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0
	release
	return


HeartPawmi:
	jump_in_place_up
	delay_8
	emote_heart
	step_end

MikiHappy:
	emote_music
	jump_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter::
	lockall
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2
	applymovement 15, PawmiDisappointed
	msgbox NewLabTest_NotChosen
SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1:
	waitmessage
	releaseall
	end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_PAWMI_DELTA, 5, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	call NicknamePartyMon
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	call NicknameBoxMon
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1


PawmiDisappointed:
	shake_horizontal
	step_end

SunshineOrphanageMainHall_Eventscript_GoToSleep::
	lock
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0
	applymovement 4, TeacherFacingAkihiko
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_1
	setvar VAR_AKIHIKOS_INTRO_STATE, 9
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 13
	removeobject 14
	removeobject 15
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
	warpsilent MAP_BLANK_MAP, 0, 0
	release
	end


TeacherFacingAkihiko:
	walk_right
	face_up
	step_end

Boy_1_MainHall::
	lock
	faceplayer
	msgbox Boy_1_MainHall_Text_0
	release
	return


Girl_1_MainHall::
	lock
	faceplayer
	msgbox Girl_1_MainHall_Text_0
	release
	return


Boy_2_MainHall::
	lock
	faceplayer
	msgbox Boy_2_MainHall_Text_0
	release
	return


Girl_2_MainHall::
	lock
	faceplayer
	msgbox Girl_2_MainHall_Text_0
	release
	return


RichMan_MainHall::
	lock
	faceplayer
	msgbox RichMan_MainHall_Text_0
	release
	return


RichLady_MainHall::
	lock
	faceplayer
	msgbox RichLady_MainHall_Text_0
	release
	return


Teacher_MainHall::
	lock
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_lt Teacher_MainHall_2
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Teacher_MainHall_5
Teacher_MainHall_4:
	faceplayer
	msgbox Teacher_MainHall_Text_2
Teacher_MainHall_1:
	release
	return

Teacher_MainHall_2:
	faceplayer
	msgbox Teacher_MainHall_Text_0
	goto Teacher_MainHall_1

Teacher_MainHall_3:
	faceplayer
	msgbox Teacher_MainHall_Text_1
	goto Teacher_MainHall_1

Teacher_MainHall_5:
	compare VAR_AKIHIKOS_INTRO_STATE, 6
	goto_if_eq Teacher_MainHall_3
	goto Teacher_MainHall_4


Boy_3_MainHall::
	lock
	faceplayer
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq Boy_3_MainHall_2
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Boy_3_MainHall_3
	msgbox Boy_3_MainHall_Text_2
Boy_3_MainHall_1:
	release
	return

Boy_3_MainHall_2:
	msgbox Boy_3_MainHall_Text_0
	goto Boy_3_MainHall_1

Boy_3_MainHall_3:
	msgbox Boy_3_MainHall_Text_1
	goto Boy_3_MainHall_1


DiningRoom::
	lock
	msgbox DiningRoom_Text_0
	release
	return


BackyardDoor::
	lock
	msgbox BackyardDoor_Text_0
	release
	return


Girls_HallwayMainHall::
	lock
	msgbox Girls_HallwayMainHall_Text_0
	release
	return


RestroomMainHall::
	lock
	msgbox RestroomMainHall_Text_0
	release
	return


PokeballShelf::
	lock
	msgbox PokeballShelf_Text_0
	release
	return


Porygon_PC::
	lock
	faceplayer
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
	waitmoncry
	goto_if_set FLAG_SYS_POKEMON_GET, Porygon_PC_1
	msgbox Porygon_PC_Text_0
	release
	end

Porygon_PC_1:
	call EventScript_AccessPokemonStorage
	return


MartLady::
	lock
	faceplayer
	msgbox MartLady_Text_0
	goto_if_set FLAG_SYS_POKEMON_GET, MartLady_2
	pokemart Orphanage_Mart_Basic
MartLady_1:
	msgbox MartLady_Text_1
	release
	end

MartLady_2:
	pokemart Orphanage_Mart_ExpandedItems
	goto MartLady_1



	.align 2
Orphanage_Mart_Basic:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	pokemartlistend

Orphanage_Mart_ExpandedItems::
	pokemart OldaleTown_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Orphanage_Mart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	pokemartlistend

Blissey_Heal::
	lockall
	faceplayer
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
	waitmoncry
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq Blissey_Heal_1
	goto_if_set FLAG_SYS_POKEMON_GET, Blissey_Heal_2
	msgbox Blissey_Heal_Text_0
	releaseall
	return

Blissey_Heal_1:
	goto BlisseyHealedPawmi
	return

Blissey_Heal_2:
	special HealPlayerParty
	releaseall
	return


BlisseyHealedPawmi::
	lockall
	msgbox BlisseyHealedPawmi_Text_0
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
	applymovement 11, BlisseyHappy
	waitmovement 0
	releaseall
	return


BlisseyHappy:
	walk_in_place_slow_down
	emote_music
	step_end

Minccino_NPC::
	lock
	faceplayer
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
	release
	return


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}There you go.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Looks like it wants to stay with you.\p"
	.string "{DESTROY_MUGSHOT}Miki: Can we keep it?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Can we, Ms. Kobayashi?\p"
	.string "{DESTROY_MUGSHOT}Ms. Kobayashi: Normally you aren't\n"
	.string "allowed to have your own Pokemon here.\p"
	.string "However, since you are going to leave in\n"
	.string "a few days, we can make an exception.\p"
	.string "Just make sure to not cause trouble in\n"
	.string "the mean time.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1:
	.string "Miki: Yay!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Thank you, Ms. Kobayashi!\p"
	.string "{DESTROY_MUGSHOT}Ms. Kobayashi: Here, I'll give you a\n"
	.string "pokeball to keep it.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2:
	.string "{PLAYER} received 1{COLOR GREEN}{SHADOW LIGHT_GREEN} (hidden){COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Cherish Ball.$"

SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Go on, Pawmi is waiting for you.$"

SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0:
	.string "Miki: Let's give Pawmi a home, big bro!$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0:
	.string "Let Pawmi in the Cherish Ball?$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1:
	.string "Received Pawmi.$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2:
	.string "Party full.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Tips: The shiny chance is roughly\n"
	.string "1/100.\p"
	.string "No Pokemon are shiny locked, including\n"
	.string "the story starters.\p"
	.string "The story starters have been buffed\n"
	.string "and come with pre-determined Nature\n"
	.string "and Perfect IVs.\p"
	.string "You also can not release them.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_1:
	.string "Ms. Kobayashi: Alright.\p"
	.string "I supposed it's quite late now. You all\n"
	.string "should go to rest.\p"
	.string "See you tomorrow.$"

Boy_1_MainHall_Text_0:
	.string "I really like the omelet rice the chef\n"
	.string "cooks for us.$"

Girl_1_MainHall_Text_0:
	.string "When I graduate and get a job I'll\n"
	.string "contribute back to our orphanage.$"

Boy_2_MainHall_Text_0:
	.string "They don't allow us children to have\n"
	.string "Pokemon of our own but we can still play\n"
	.string "with the staff's Pokemons.$"

Girl_2_MainHall_Text_0:
	.string "{PLAYER}! I'm also getting adopted\n"
	.string "next week!\p"
	.string "My future adoptive parents are talking\n"
	.string "with my teacher right now.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} That's great! Congrats!$"

RichMan_MainHall_Text_0:
	.string "We decided to adopt a daughter because\n"
	.string "my wife wanted one.\p"
	.string "If she's happy then I'm happy.$"

RichLady_MainHall_Text_0:
	.string "We will raise Momo with love and care.$"

Teacher_MainHall_Text_0:
	.string "Oh {PLAYER}, Miki is waiting for you\n"
	.string "outside with Shinjiro.$"

Teacher_MainHall_Text_1:
	.string "I'm a little busy right now. Can you go\n"
	.string "play somewhere else, {PLAYER}?$"

Teacher_MainHall_Text_2:
	.string "Take care of Pawmi, okay dear?$"

Boy_3_MainHall_Text_0:
	.string "Oh hey, {PLAYER}! Miki is waiting for\n"
	.string "you outside.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} I know, thanks!$"

Boy_3_MainHall_Text_1:
	.string "Stay safe in the woods.\p {CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} We will!$"

Boy_3_MainHall_Text_2:
	.string "I heard you found a rare Pokemon in the\n"
	.string "woods?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED} Pawmi is rare?$"

DiningRoom_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} It's the dining room. The pancakes here\n"
	.string "are the best.$"

BackyardDoor_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Outside is the backyard. We grow crops\n"
	.string "there.$"

Girls_HallwayMainHall_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

RestroomMainHall_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the restroom. I'm good for now.$"

PokeballShelf_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Those belong to the staff. I shouldn't\n"
	.string "touch them.$"

Porygon_PC_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Porygon can access the Pokemon\n"
	.string "Storage. If only I have a Pokemon.$"

MartLady_Text_0:
	.string "Hi {PLAYER}, what should I get you?$"

MartLady_Text_1:
	.string "Play safe okay, child?$"

Blissey_Heal_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Blissey is very good at healing. I can\n"
	.string "ask it for help when I have an injured\n"
	.string "Pokemon.$"

BlisseyHealedPawmi_Text_0:
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you for healing Pawmi, Blissey!$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transfered to PC.$"

NewLabTest_NotChosen::
	.string "Pawmi looks at Akihiko expectantly.$"
		