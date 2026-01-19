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
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 29 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_BUY_SMILE_CANDY
# 30 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_FisherMan_2
Coralport_FishermansHouse_Eventscript_FisherMan_1:
# 33 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_FISHERMANS_DAUGHTER
# 34 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_FisherMan_5
Coralport_FishermansHouse_Eventscript_FisherMan_4:
# 37 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_FISHERMANS_DAUGHTER
# 38 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_FisherMan_8
Coralport_FishermansHouse_Eventscript_FisherMan_7:
# 41 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_FIND_FISHERMANS_DAUGHTER
# 42 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_FisherMan_10
	return

Coralport_FishermansHouse_Eventscript_FisherMan_2:
# 31 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod
	goto Coralport_FishermansHouse_Eventscript_FisherMan_1

Coralport_FishermansHouse_Eventscript_FisherMan_5:
# 35 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Completed
	goto Coralport_FishermansHouse_Eventscript_FisherMan_4

Coralport_FishermansHouse_Eventscript_FisherMan_8:
# 39 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward
	goto Coralport_FishermansHouse_Eventscript_FisherMan_7

Coralport_FishermansHouse_Eventscript_FisherMan_10:
# 43 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	return


Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Completed::
# 49 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 50 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Completed_Text_0
# 51 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 52 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward::
# 57 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 58 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 59 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward_Text_0
# 61 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 62 "data/maps/Coralport_FishermansHouse/scripts.pory"
	giveitem ITEM_OLD_ROD
# 63 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward_Text_1
# 64 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 65 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FIND_FISHERMANS_DAUGHTER
# 66 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 67 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 68 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start::
# 73 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 74 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 1, walkinplaceright
# 75 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, faceleft
# 76 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 77 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0
# 78 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 79 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, walkinplaceleft
# 80 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 81 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 82 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 83 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0
# 85 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 86 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 87 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1
# 88 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 89 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 90 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 1, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1
# 91 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 92 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 93 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2
# 94 "data/maps/Coralport_FishermansHouse/scripts.pory"
	checkplayergender
# 95 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_2
# 100 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_1:
# 103 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 104 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5
# 105 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 106 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 107 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 1, faceright
# 108 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 109 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 110 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2
# 111 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 112 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 113 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 114 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6
# 115 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 116 "data/maps/Coralport_FishermansHouse/scripts.pory"
	special SpawnCameraObject
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 4, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 1, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4
# 119 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5
# 120 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement 4
# 121 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_EXIT
# 122 "data/maps/Coralport_FishermansHouse/scripts.pory"
	removeobject 4
# 123 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement 1
# 124 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_EXIT
# 125 "data/maps/Coralport_FishermansHouse/scripts.pory"
	removeobject 1
# 126 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 127 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_6
# 128 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 129 "data/maps/Coralport_FishermansHouse/scripts.pory"
	special RemoveCameraObject
# 130 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 131 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FIND_FISHERMANS_DAUGHTER
# 132 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 1
# 133 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 134 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 135 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 136 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_2:
# 96 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3
	goto Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_1


Coralport_FishermansHouse_Eventscript_Growlithe::
# 141 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 142 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 143 "data/maps/Coralport_FishermansHouse/scripts.pory"
	showmonpic SPECIES_GROWLITHE, 18, 5
# 144 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 145 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 146 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 147 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setseenmon SPECIES_GROWLITHE
# 148 "data/maps/Coralport_FishermansHouse/scripts.pory"
	hidemonpic
# 149 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_LittleGirl::
# 154 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 155 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 156 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 157 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 158 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BUY_SMILE_CANDY
# 159 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_LittleGirl_2
Coralport_FishermansHouse_Eventscript_LittleGirl_1:
# 162 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_BUY_SMILE_CANDY
# 163 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_LittleGirl_5
Coralport_FishermansHouse_Eventscript_LittleGirl_4:
# 166 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BUY_SMILE_CANDY
# 167 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_LittleGirl_7
# 171 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start
	return

Coralport_FishermansHouse_Eventscript_LittleGirl_2:
# 160 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Completed
	goto Coralport_FishermansHouse_Eventscript_LittleGirl_1

Coralport_FishermansHouse_Eventscript_LittleGirl_5:
# 164 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Reward
	goto Coralport_FishermansHouse_Eventscript_LittleGirl_4

Coralport_FishermansHouse_Eventscript_LittleGirl_7:
# 168 "data/maps/Coralport_FishermansHouse/scripts.pory"
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing
	return


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start::
# 176 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_0
# 179 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 180 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 181 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, emoteexclamation
# 182 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 183 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 184 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_1
# 188 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 189 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 190 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_2
# 191 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 192 "data/maps/Coralport_FishermansHouse/scripts.pory"
	addmoney 500
# 193 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_BUY_SMILE_CANDY
# 194 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 195 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 196 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing::
# 201 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_0
# 202 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 203 "data/maps/Coralport_FishermansHouse/scripts.pory"
	checkitem ITEM_SMILE_CANDY
# 204 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_2
Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_1:
# 250 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 251 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 252 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_2:
# 205 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 206 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, emoteexclamation
# 207 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 208 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 209 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_1, MSGBOX_YESNO
# 211 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_4
# 242 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 243 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_5
# 244 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 245 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_BOO
# 246 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_2
# 247 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_1

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_4:
# 212 "data/maps/Coralport_FishermansHouse/scripts.pory"
	removeitem ITEM_SMILE_CANDY
# 213 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_2
# 214 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 215 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_3
# 216 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 217 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, faceleft
# 218 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 219 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 20
# 220 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_USE_ITEM
# 221 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitse
# 222 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 3, Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_0
# 223 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 224 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 225 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitse
# 226 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay 30
# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 2, Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_1
# 228 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 229 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playse SE_PIN
# 230 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitse
# 231 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0
# 232 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_4
# 235 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 236 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_BUY_SMILE_CANDY
# 237 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 238 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 239 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	goto Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_1


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Reward::
# 257 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Reward_Text_0
# 259 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 260 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 261 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 262 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod::
# 267 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod_Text_0
# 269 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 270 "data/maps/Coralport_FishermansHouse/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 271 "data/maps/Coralport_FishermansHouse/scripts.pory"
	setspeaker Coralport_FishermansHouse_Eventscript_FisherMan_Text_0
# 272 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod_Text_1
# 273 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 274 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_BUY_SMILE_CANDY
# 275 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 276 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 277 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Completed::
# 282 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Completed_Text_0
# 284 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 285 "data/maps/Coralport_FishermansHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 286 "data/maps/Coralport_FishermansHouse/scripts.pory"
	refreshquesticon
# 287 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_Wooper::
# 292 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 293 "data/maps/Coralport_FishermansHouse/scripts.pory"
	faceplayer
# 294 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_FISHERMANS_DAUGHTER
# 295 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_Wooper_2
# 303 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_FISHERMANS_DAUGHTER
# 304 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_Wooper_5
# 312 "data/maps/Coralport_FishermansHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_BUY_SMILE_CANDY
# 313 "data/maps/Coralport_FishermansHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_FishermansHouse_Eventscript_Wooper_8
# 322 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 323 "data/maps/Coralport_FishermansHouse/scripts.pory"
	applymovement 3, Coralport_FishermansHouse_Eventscript_Wooper_Movement_0
# 324 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 325 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmovement
# 326 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_Wooper_Text_2
# 328 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 329 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_Wooper_2:
# 296 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 297 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 298 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_Wooper_Text_0
# 299 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 300 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_Wooper_5:
# 305 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 306 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 307 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_Wooper_Text_0
# 308 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 309 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end

Coralport_FishermansHouse_Eventscript_Wooper_8:
# 314 "data/maps/Coralport_FishermansHouse/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 315 "data/maps/Coralport_FishermansHouse/scripts.pory"
	waitmoncry
# 316 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_Wooper_Text_1
# 317 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 318 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


Coralport_FishermansHouse_Eventscript_LockedDoor::
# 334 "data/maps/Coralport_FishermansHouse/scripts.pory"
	lock
# 335 "data/maps/Coralport_FishermansHouse/scripts.pory"
	msgbox Coralport_FishermansHouse_Eventscript_LockedDoor_Text_0
# 336 "data/maps/Coralport_FishermansHouse/scripts.pory"
	closemessage
# 337 "data/maps/Coralport_FishermansHouse/scripts.pory"
	release
	end


# 84 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0:
# 84 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_exclamation_mark
# 84 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 84 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 84 "data/maps/Coralport_FishermansHouse/scripts.pory"
	jump_in_place_left
	step_end

# 90 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1:
# 90 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_exclamation_mark
# 90 "data/maps/Coralport_FishermansHouse/scripts.pory"
	face_player
	step_end

# 110 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2:
# 110 "data/maps/Coralport_FishermansHouse/scripts.pory"
	jump_in_place_left
# 110 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 110 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_right
# 110 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_right
# 110 "data/maps/Coralport_FishermansHouse/scripts.pory"
	face_left
	step_end

# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3:
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 117 "data/maps/Coralport_FishermansHouse/scripts.pory"
	set_invisible
	step_end

# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4:
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_right
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_right
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_right
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_fast_down
# 118 "data/maps/Coralport_FishermansHouse/scripts.pory"
	set_invisible
	step_end

# 119 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5:
# 119 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_diag_southeast
# 119 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_diag_southeast
# 119 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_diag_southeast
	step_end

# 127 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_6:
# 127 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_diag_northwest
# 127 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_diag_northwest
# 127 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_diag_northwest
	step_end

# 222 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_0:
# 222 "data/maps/Coralport_FishermansHouse/scripts.pory"
	walk_in_place_right
# 222 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 222 "data/maps/Coralport_FishermansHouse/scripts.pory"
	delay_16
# 222 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_heart
	step_end

# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_1:
# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
	face_down
# 227 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_happy
	step_end

# 246 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Movement_2:
# 246 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_sad
	step_end

# 323 "data/maps/Coralport_FishermansHouse/scripts.pory"
Coralport_FishermansHouse_Eventscript_Wooper_Movement_0:
# 323 "data/maps/Coralport_FishermansHouse/scripts.pory"
	emote_heart
	step_end

Coralport_FishermansHouse_Eventscript_FisherMan_Text_0:
# 28 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Ikumi$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Completed_Text_0:
# 50 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "You're always welcomed here. You're\n"
	.string "literally our saviors.$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward_Text_0:
# 59 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Oh you finally came by! Thank you so\n"
	.string "much for helping us at Coralport Cave!\p"
	.string "Please have this as thanks!$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Reward_Text_1:
# 63 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "If you need help with anything, please\n"
	.string "tell me!$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0:
# 77 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Here's her clothes from yesterday, can\n"
	.string "you pick up something, Growlithe?$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1:
# 87 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "You do?? Thanks Arceus!$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2:
# 93 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Wait, who are you lots? What do you\n"
	.string "want? I'm busy-$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3:
# 96 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}We're here to help you find your\n"
	.string "daughter.\p"
	.string "We were at the police station when you\n"
	.string "went there asking for help.$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4:
# 100 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Rest assured, sir. We're here to help you\n"
	.string "find your daughter.\p"
	.string "We were at the police station when you\n"
	.string "went there asking for help.$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5:
# 104 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Really? That's great! Thank you so\n"
	.string "much!$"

Coralport_FishermansHouse_Eventscript_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6:
# 114 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Looks like Growlithe has picked up her\n"
	.string "scent, let's follow it!$"

Coralport_FishermansHouse_Eventscript_LittleGirl_Text_0:
# 157 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Misa$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_0:
# 176 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Thank you for saving me!\n"
	.string "{PAUSE_UNTIL_PRESS} I'm a little worried that Wooper is still\l"
	.string "looking a bit sad, though.\p"
	.string "I hope it would cheer up soon...$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_1:
# 184 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Oh I know! How about I go buy a Smile\n"
	.string "Candy for it?\p"
	.string "Oh, but they don't sell it in Sunshine\n"
	.string "Island... and Pa probably won't allow me\l"
	.string "to go.\p"
	.string "I'm very sorry to ask for your help\n"
	.string "again but if you happen to see a Smile\l"
	.string "Candy on sale, please buy one for me?\p"
	.string "Here, you can use the allowance money\n"
	.string "I've been saving up for it!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Start_Text_2:
# 190 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{PLAYER} received 500 Pokedollars to\n"
	.string "buy a Smile Candy.$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_0:
# 201 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "I heard they sell Smile Candy in\n"
	.string "Paulownia City. Please get me one for\l"
	.string "Wooper!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_1:
# 209 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Oh! That's a {COLOR BLUE}Smile Candy{COLOR 2}!\p"
	.string "Did you buy it for me?$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_2:
# 213 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "{PLAYER} gave Misa a {COLOR BLUE}Smile Candy{COLOR 2}.$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_3:
# 215 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "I'll give it to Wooper right now!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_4:
# 232 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Look at its big smile! Thank you for\n"
	.string "that!!\p"
	.string "By the way, I asked Pa to make you a\n"
	.string "Good Rod!\n"
	.string "Just speak to him, he'll give it to you!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Ongoing_Text_5:
# 243 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "But- I... {PAUSE 60}I understand...$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Reward_Text_0:
# 257 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "I asked Pa to make you a Good Rod!\n"
	.string "Just speak to him, he'll give it to you!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod_Text_0:
# 267 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Misa asked me to make a Good Rod for\n"
	.string "you. I just got it done yesterday!\p"
	.string "There you go!$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_GetGoodRod_Text_1:
# 272 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Thank you so much for fulfilling my\n"
	.string "daughter's wish. Our family owe you so\l"
	.string "much.$"

Coralport_FishermansHouse_Eventscript_QUEST_BUY_SMILE_CANDY_Completed_Text_0:
# 282 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Woope starts smiling more after eating\n"
	.string "the Smile Candy.\p"
	.string "That makes me so happy!$"

Coralport_FishermansHouse_Eventscript_Wooper_Text_0:
# 298 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Wooper still looks depressed.$"

Coralport_FishermansHouse_Eventscript_Wooper_Text_1:
# 316 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Wooper looks better than the last time\n"
	.string "you saw it.$"

Coralport_FishermansHouse_Eventscript_Wooper_Text_2:
# 326 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "Wooper is smiling brightly!$"

Coralport_FishermansHouse_Eventscript_LockedDoor_Text_0:
# 335 "data/maps/Coralport_FishermansHouse/scripts.pory"
	.string "It's locked.$"
