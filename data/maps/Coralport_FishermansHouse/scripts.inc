Coralport_FishermansHouse_MapScripts::
# 2 "data/maps/Coralport_FishermansHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 6 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 2
	goto_if_ge Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 7
	goto_if_ge Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 19 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BUY_SMILE_CANDY
# 20 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_TEMP_1
# 8 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_TEMP_3
# 9 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setobjectxyperm 1, 10, 3
# 10 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	goto Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 6 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 0
	goto_if_eq Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 13 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_TEMP_1
# 14 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_TEMP_2
# 15 "data/maps/Coralport_FishermansHouse/scripts.pory"
	addobject 1
# 16 "data/maps/Coralport_FishermansHouse/scripts.pory"
	addobject 2
# 17 "data/maps/Coralport_FishermansHouse/scripts.pory"
	addobject 3
	goto Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

Coralport_FishermansHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 21 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	return


Coralport_FishermansHouse_Eventscript_FisherMan::
# 27 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 28 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 29 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 30 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_BUY_SMILE_CANDY
# 31 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_FisherMan_2
Coralport_FishermansHouse_Eventscript_FisherMan_1:
# 34 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_FISHERMANS_DAUGHTER
# 35 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_FisherMan_5
Coralport_FishermansHouse_Eventscript_FisherMan_4:
# 38 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_FISHERMANS_DAUGHTER
# 39 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_FisherMan_8
Coralport_FishermansHouse_Eventscript_FisherMan_7:
# 42 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_FIND_FISHERMANS_DAUGHTER
# 43 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_FisherMan_10
	return

Coralport_FishermansHouse_Eventscript_FisherMan_2:
# 32 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod
	goto Coralport_FishermansHouse_Eventscript_FisherMan_1

Coralport_FishermansHouse_Eventscript_FisherMan_5:
# 36 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Completed
	goto Coralport_FishermansHouse_Eventscript_FisherMan_4

Coralport_FishermansHouse_Eventscript_FisherMan_8:
# 40 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward
	goto Coralport_FishermansHouse_Eventscript_FisherMan_7

Coralport_FishermansHouse_Eventscript_FisherMan_10:
# 44 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	return


Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Completed::
# 50 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 51 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Completed_Text_0
# 52 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 53 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward::
# 58 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 59 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 60 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward_Text_0
# 62 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 63 "data/maps/Coralport_FishermansHouse/scripts.pory"
	giveitem ITEM_OLD_ROD
# 64 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 65 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setvar VAR_ROD_TYPE, 1
# 66 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward_Text_1
# 67 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 68 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FIND_FISHERMANS_DAUGHTER
# 69 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 70 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 71 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start::
# 76 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 77 "data/maps/Coralport_FishermansHouse/scripts.pory"
	hidefollower
# 78 "data/maps/Coralport_FishermansHouse/scripts.pory"
	hidefollowernpc
# 79 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 1, walkinplaceright
# 80 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, faceleft
# 81 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 82 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0
# 83 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 84 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, walkinplaceleft
# 85 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 86 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 87 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 88 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 89 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0
# 90 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 91 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 92 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1
# 93 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 94 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 95 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 1, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1
# 96 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 97 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 98 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2
# 99 "data/maps/Coralport_FishermansHouse/scripts.pory"
	checkplayergender
# 100 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_2
# 105 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_1:
# 108 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 109 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5
# 110 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 111 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 112 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 1, faceright
# 113 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 114 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 115 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2
# 116 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 119 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6
# 120 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 121 "data/maps/Coralport_FishermansHouse/scripts.pory"
	special SpawnCameraObject
# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 1, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4
# 124 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5
# 125 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement 4
# 126 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_EXIT
# 127 "data/maps/Coralport_FishermansHouse/scripts.pory"
	removeobject 4
# 128 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement 1
# 129 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_EXIT
# 130 "data/maps/Coralport_FishermansHouse/scripts.pory"
	removeobject 1
# 131 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 132 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_6
# 133 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 134 "data/maps/Coralport_FishermansHouse/scripts.pory"
	special RemoveCameraObject
# 135 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 136 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FIND_FISHERMANS_DAUGHTER
# 137 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 1
# 138 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 139 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 140 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 141 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_2:
# 101 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3
	goto Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_1


Coralport_FishermansHouse_Eventscript_Growlithe::
# 146 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 147 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 148 "data/maps/Coralport_FishermansHouse/scripts.pory"
	showmonpic SPECIES_GROWLITHE, 18, 5
# 149 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 150 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 151 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 152 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setseenmon SPECIES_GROWLITHE
# 153 "data/maps/Coralport_FishermansHouse/scripts.pory"
	hidemonpic
# 154 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_LittleGirl::
# 159 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 160 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 161 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 162 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 163 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BUY_SMILE_CANDY
# 164 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_LittleGirl_2
Coralport_FishermansHouse_Eventscript_LittleGirl_1:
# 167 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_BUY_SMILE_CANDY
# 168 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_LittleGirl_5
Coralport_FishermansHouse_Eventscript_LittleGirl_4:
# 171 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BUY_SMILE_CANDY
# 172 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_LittleGirl_7
# 176 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start
	return

Coralport_FishermansHouse_Eventscript_LittleGirl_2:
# 165 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Completed
	goto Coralport_FishermansHouse_Eventscript_LittleGirl_1

Coralport_FishermansHouse_Eventscript_LittleGirl_5:
# 169 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Reward
	goto Coralport_FishermansHouse_Eventscript_LittleGirl_4

Coralport_FishermansHouse_Eventscript_LittleGirl_7:
# 173 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing
	return


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start::
# 181 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_0
# 184 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 185 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 186 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, emoteexclamation
# 187 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 188 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 189 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_1
# 193 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 194 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_2
# 196 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 197 "data/maps/Coralport_FishermansHouse/scripts.pory"
	addmoney 500
# 198 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_BUY_SMILE_CANDY
# 199 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 200 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 201 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing::
# 206 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_0
# 207 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 208 "data/maps/Coralport_FishermansHouse/scripts.pory"
	checkitem ITEM_SMILE_CANDY
# 209 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_2
Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_1:
# 255 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 256 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 257 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_2:
# 210 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 211 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, emoteexclamation
# 212 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 213 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 214 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_1, MSGBOX_YESNO
# 216 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_4
# 247 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 248 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_5
# 249 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 250 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_BOO
# 251 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_2
# 252 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_1

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_4:
# 217 "data/maps/Coralport_FishermansHouse/scripts.pory"
	removeitem ITEM_SMILE_CANDY
# 218 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_2
# 219 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 220 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_3
# 221 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 222 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, faceleft
# 223 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 224 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 20
# 225 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_USE_ITEM
# 226 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitse
# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 3, Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_0
# 228 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 229 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 230 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitse
# 231 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 232 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_1
# 233 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 234 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 235 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitse
# 236 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 237 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_4
# 240 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 241 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_BUY_SMILE_CANDY
# 242 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 243 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 244 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_1


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Reward::
# 262 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Reward_Text_0
# 264 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 265 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 266 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 267 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod::
# 272 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod_Text_0
# 274 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 275 "data/maps/Coralport_FishermansHouse/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 276 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 277 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod_Text_1
# 278 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 279 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_BUY_SMILE_CANDY
# 280 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 281 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 282 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Completed::
# 287 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Completed_Text_0
# 289 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 290 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 291 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 292 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_Wooper::
# 297 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 298 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 299 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_FISHERMANS_DAUGHTER
# 300 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_Wooper_2
# 308 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_FISHERMANS_DAUGHTER
# 309 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_Wooper_5
# 317 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_BUY_SMILE_CANDY
# 318 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_Wooper_8
# 327 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 328 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 3, Coralport_FishermansHouse_Eventscript_Wooper_Movement_0
# 329 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 330 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 331 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_Wooper_Text_2
# 333 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 334 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_Wooper_2:
# 301 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 302 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 303 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_Wooper_Text_0
# 304 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 305 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_Wooper_5:
# 310 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 311 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 312 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_Wooper_Text_0
# 313 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 314 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_Wooper_8:
# 319 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 320 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 321 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_Wooper_Text_1
# 322 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 323 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


# 89 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0:
# 89 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_exclamation_mark
# 89 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 89 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 89 "data/maps/Coralport_FishermansHouse/scripts.pory"
	jump_in_place_left
	step_end

# 95 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1:
# 95 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_exclamation_mark
# 95 "data/maps/Coralport_FishermansHouse/scripts.pory"
	face_player
	step_end

# 115 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2:
# 115 "data/maps/Coralport_FishermansHouse/scripts.pory"
	jump_in_place_left
# 115 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 115 "data/maps/Coralport_FishermansHouse/scripts.pory"
	face_down
# 115 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 115 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 115 "data/maps/Coralport_FishermansHouse/scripts.pory"
	face_left
	step_end

# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3:
# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
	set_invisible
	step_end

# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4:
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_right
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	set_invisible
	step_end

# 124 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5:
# 124 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_diag_southeast
# 124 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 124 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
	step_end

# 132 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_6:
# 132 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_up
# 132 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_up
# 132 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_diag_northwest
	step_end

# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_0:
# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_in_place_right
# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_heart
	step_end

# 232 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_1:
# 232 "data/maps/Coralport_FishermansHouse/scripts.pory"
	face_down
# 232 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_happy
	step_end

# 251 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_2:
# 251 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_sad
	step_end

# 328 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_Wooper_Movement_0:
# 328 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_heart
	step_end

Coralport_FishermansHouse_Eventscript_FisherMan_Text_0:
# 29 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Ikumi$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Completed_Text_0:
# 51 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "You're always welcome here. You're\n"
	.string "literally our saviors.$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward_Text_0:
# 60 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Oh, you finally came by! Thank you so\n"
	.string "much for helping us at Coralport Cave!\p"
	.string "Please, have this as thanks!$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward_Text_1:
# 66 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "If you need help with anything, please\n"
	.string "tell me!$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0:
# 82 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Here's her clothes from yesterday, can\n"
	.string "you pick up something, Growlithe?$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1:
# 92 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "You do?? Thanks Arceus!$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2:
# 98 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Wait, who are you lot? What do you want?\n"
	.string "I'm busy-$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3:
# 101 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}We're here to help you find your\n"
	.string "daughter.\p"
	.string "We were at the police station when you\n"
	.string "went there asking for help.$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4:
# 105 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Rest assured, sir. We're here to help you\n"
	.string "find your daughter.\p"
	.string "We were at the police station when you\n"
	.string "went there asking for help.$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5:
# 109 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Really? That's great! Thank you so\n"
	.string "much!$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6:
# 119 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Looks like Growlithe has picked up her\n"
	.string "scent, let's follow it!$"

Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0:
# 162 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Misa$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_0:
# 181 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Thank you for saving me!\n"
	.string "{PAUSE_UNTIL_PRESS} I'm a little worried that Wooper is still\l"
	.string "looking a bit sad, though.\p"
	.string "I hope it will cheer up soon...$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_1:
# 189 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Oh, I know! How about I go buy a Smile\n"
	.string "Candy for it?\p"
	.string "Oh, but they don't sell it in Sunshine\n"
	.string "Island... and Pa probably won't allow me\l"
	.string "to go.\p"
	.string "I'm very sorry to ask for your help\n"
	.string "again, but if you happen to see a Smile\l"
	.string "Candy on sale, please buy one for me.\p"
	.string "Here, you can use the allowance money\n"
	.string "I've been saving up for it!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_2:
# 195 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{PLAYER} received 500 Pokedollars to\n"
	.string "buy a Smile Candy.$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_0:
# 206 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "I heard they sell Smile Candy in\n"
	.string "Paulownia City. Please get me one for\l"
	.string "Wooper!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_1:
# 214 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Oh! That's a {COLOR BLUE}Smile Candy{COLOR 2}!\p"
	.string "Did you buy it for me?$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_2:
# 218 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{PLAYER} gave Misa a {COLOR BLUE}Smile Candy{COLOR 2}.$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_3:
# 220 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "I'll give it to Wooper right now!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_4:
# 237 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Look at its big smile! Thank you for\n"
	.string "that!!\p"
	.string "By the way, I asked Pa to make you a\n"
	.string "Good Rod!\n"
	.string "Just speak to him, he'll give it to you!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_5:
# 248 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "But- I... {PAUSE 60}I understand...$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Reward_Text_0:
# 262 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "I asked Pa to make you a Good Rod!\n"
	.string "Just speak to him, he'll give it to you!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod_Text_0:
# 272 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Misa asked me to make a Good Rod for\n"
	.string "you. I just got it done yesterday!\p"
	.string "There you go!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod_Text_1:
# 277 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Thank you so much for fulfilling my\n"
	.string "daughter's wish. Our family owes you so\l"
	.string "much.$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Completed_Text_0:
# 287 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Wooper starts smiling more after eating\n"
	.string "the Smile Candy.\p"
	.string "That makes me so happy!$"

Coralport_FishermansHouse_Eventscript_Wooper_Text_0:
# 303 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Wooper still looks depressed.$"

Coralport_FishermansHouse_Eventscript_Wooper_Text_1:
# 321 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Wooper looks better than the last time\n"
	.string "you saw it.$"

Coralport_FishermansHouse_Eventscript_Wooper_Text_2:
# 331 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Wooper is smiling brightly!$"
