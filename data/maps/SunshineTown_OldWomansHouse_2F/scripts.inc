SunshineTown_OldWomansHouse_2F_MapScripts::
	.byte 0


SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu::
# 6 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	lockall
# 7 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 8 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_2
# 11 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward
SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_1:
# 12 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	releaseall
	end

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_2:
# 9 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete
	goto SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_1


SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete::
# 17 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	faceplayer
# 18 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	playmoncry SPECIES_RIOLU, CRY_MODE_NORMAL
# 19 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	waitmoncry
# 20 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete_Text_0
# 21 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 22 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	releaseall
	end


SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward::
# 27 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 28 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_1
# 43 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive
	return

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_1:
# 29 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	checkplayergender
# 30 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_5
# 36 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_Text_1
SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_4:
# 38 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 39 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	releaseall
	end

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_5:
# 32 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_Text_0
	goto SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_4


SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive::
# 48 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 49 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_1
# 56 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	faceplayer
# 57 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	playmoncry SPECIES_RIOLU, CRY_MODE_NORMAL
# 58 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	waitmoncry
# 59 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_Text_0
# 60 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 61 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	releaseall
	end

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_1:
# 50 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene
# 51 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 52 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	releaseall
	end


SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene::
# 67 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 68 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	faceplayer
# 69 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	checkplayergender
# 70 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_2
# 86 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_3
# 87 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 88 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 89 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	setflag FLAG_NO_RUNNING
# 90 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	startoverworldencounter 10
# 91 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 92 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 93 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_1
# 94 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 95 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_4
# 96 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_1:
# 98 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
	return

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_2:
# 72 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_0
# 73 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 74 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 75 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	setflag FLAG_NO_RUNNING
# 76 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	startoverworldencounter 5
# 77 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 78 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 79 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_1
# 80 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 81 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_2
# 82 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
	goto SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_1


SunshineTown_OldWomansHouse_2F_Eventscript_Notebook::
# 101 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_Eventscript_Notebook_Text_0
# 102 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
	end


SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete_Text_0:
# 20 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "Riolu's loafing around.$"

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_Text_0:
# 32 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}(Riolu is asleep. We should let it be.)$"

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_Text_1:
# 36 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}(Riolu is asleep. I should let it be.)$"

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_Text_0:
# 59 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "Riolu looks bored.$"

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_0:
# 72 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Alright, lil' guy. If you're bored, come\n"
	.string "at me!$"

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_1:
# 79 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_NONE}{DESTROY_MUGSHOT}Riolu poured all of its energy into\n"
	.string "battle and got sleepy.$"

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_2:
# 81 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}I guess that should do it. Let's return\n"
	.string "to the grandma.$"

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_3:
# 86 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I suppose a battle would tire you out.$"

SunshineTown_OldWomansHouse_2F_QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_4:
# 95 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}That should do it. Time to report to the\n"
	.string "grandma.$"

SunshineTown_OldWomansHouse_2F_Eventscript_Notebook_Text_0:
# 101 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "A book of how to train Riolu into\n"
	.string "Lucario.$"
