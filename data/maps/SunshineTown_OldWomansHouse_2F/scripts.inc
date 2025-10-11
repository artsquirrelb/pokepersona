SunshineTown_OldWomansHouse_2F_MapScripts::
	.byte 0


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu::
# 6 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	lockall
# 7 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 8 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_2
# 11 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward
SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_1:
# 12 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	releaseall
	end

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_2:
# 9 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete
	goto SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_1


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete::
# 17 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	faceplayer
# 18 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	playmoncry SPECIES_RIOLU, CRY_MODE_NORMAL
# 19 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	waitmoncry
# 20 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete_Text_0
# 21 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 22 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	releaseall
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
	releaseall
	end


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive::
# 40 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 41 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_1
# 48 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	faceplayer
# 49 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	playmoncry SPECIES_RIOLU, CRY_MODE_NORMAL
# 50 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	waitmoncry
# 51 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_Text_0
# 52 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 53 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	releaseall
	end

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_1:
# 42 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	call SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene
# 43 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 44 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	releaseall
	end


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene::
# 59 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 60 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	faceplayer
# 61 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_0
# 62 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 63 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 64 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	setflag FLAG_NO_RUNNING
# 65 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	startoverworldencounter 5
# 66 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 67 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 68 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_1
# 69 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 70 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_2
# 71 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
# 72 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return


SunshineTown_OldWomansHouse_2F_Eventscript_Notebook::
# 75 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_2F_Eventscript_Notebook_Text_0
# 76 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	closemessage
	end


SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_QuestwasComplete_Text_0:
# 20 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "Riolu's loafing around.$"

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfReward_Text_0:
# 29 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}(Riolu is asleep. We should let it be.)$"

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_CheckIfActive_Text_0:
# 51 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "Riolu looks bored.$"

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_0:
# 61 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Alright, lil' guy. If you're bored, come\n"
	.string "at me!$"

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_1:
# 68 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_NONE}{DESTROY_MUGSHOT}Riolu poured all of its energy to the\n"
	.string "battle and got sleepy.$"

SunshineTown_OldWomansHouse_2F_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Riolu_Cutscene_Text_2:
# 70 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}I guess that should do it. Let's return\n"
	.string "to the grandma.$"

SunshineTown_OldWomansHouse_2F_Eventscript_Notebook_Text_0:
# 75 "data/maps/SunshineTown_OldWomansHouse_2F/scripts.pory"
	.string "A book of how to train Riolu into\n"
	.string "Lucario.$"
