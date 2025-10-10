SunshineTown_OldWomansHouse_2F_MapScripts::
	.byte 0


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu::
# 6 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	lock
# 7 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	faceplayer
# 8 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	playmoncry SPECIES_RIOLU, CRY_MODE_NORMAL
# 9 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	waitmoncry
# 10 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 11 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_2
# 14 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward
SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_1:
# 15 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	release
	end

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_2:
# 12 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete
	goto SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_1


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete::
# 20 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete_Text_0
# 21 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 22 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	release
	end


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward::
# 27 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 28 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_1
# 35 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive
	return

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_1:
# 29 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_Text_0
# 30 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 31 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	release
	end


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive::
# 40 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 41 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_1
# 49 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_Text_1
# 50 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 51 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	release
	end

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_1:
# 42 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_Text_0
# 43 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 44 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 45 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	release
	end


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete_Text_0:
# 20 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "Quest was completed.$"

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_Text_0:
# 29 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "Quest's objective were met. Return to\n"
	.string "the Old Woman for reward.$"

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_Text_0:
# 42 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "You play with Riolu.$"

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_Text_1:
# 49 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "Quest's not active. Talk to the Old\n"
	.string "Woman in front of the house to start\l"
	.string "the quest.$"
