LittlerootTown_NewLabTest_MapScripts::
	.byte 0


NewLabTest_NewPokeball::
# 4 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	lockall
# 5 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	showmonpic SPECIES_PAWMI, 10, 3
# 6 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	msgbox NewLabTest_NewPokeball_Text_0, MSGBOX_YESNO
# 7 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLabTest_NewPokeball_2
# 28 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	hidemonpic
# 29 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	msgbox NewLabTest_NotChosen
NewLabTest_NewPokeball_1:
# 31 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	waitmessage
# 32 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	releaseall
	end

NewLabTest_NewPokeball_2:
# 8 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	givemon SPECIES_PAWMI, 5, ITEM_ABILITY_PATCH, ITEM_CHERISH_BALL, NATURE_ADAMANT, 2, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 9 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLabTest_NewPokeball_5
# 16 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLabTest_NewPokeball_6
# 24 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	hidemonpic
# 25 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	msgbox NewLabTest_NewPokeball_Text_2
	goto NewLabTest_NewPokeball_1

NewLabTest_NewPokeball_5:
# 10 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 11 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	msgbox NewLabTest_NewPokeball_Text_1
# 12 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	removeobject 1
# 13 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	setflag FLAG_UNUSED_0x264
# 14 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	call NicknamePartyMon
	goto NewLabTest_NewPokeball_1

NewLabTest_NewPokeball_6:
# 17 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	msgbox NewLabTest_NewPokeball_Text_1
# 19 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	removeobject 1
# 20 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	setflag FLAG_UNUSED_0x264
# 21 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	call NicknameBoxMon
	goto NewLabTest_NewPokeball_1


NicknamePartyMon::
# 37 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 38 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	hidemonpic
# 39 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 40 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 41 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 46 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 47 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	hidemonpic
# 48 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 51 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 49 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewLabTest_NewPokeball_Text_0:
# 6 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	.string "Do you want to choose Pawmi?$"

NewLabTest_NewPokeball_Text_1:
# 11 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	.string "Received Pawmi.$"

NewLabTest_NewPokeball_Text_2:
# 25 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	.string "Party full.$"

NicknamePartyMon_Text_0:
# 37 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 51 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	.string "Transfered to PC.$"

NewLabTest_NotChosen::
# 54 "data/maps/LittlerootTown_NewLabTest/scripts.pory"
	.string "You left the Pokeball untouched.$"
