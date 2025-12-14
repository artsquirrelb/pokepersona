Coralport_NeckbeardsHouse_MapScripts::
# 2 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Coralport_NeckbeardsHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Coralport_NeckbeardsHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 1
	goto_if_ge Coralport_NeckbeardsHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Coralport_NeckbeardsHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setobjectxyperm 1, 8, 4
	return


Coralport_NeckbeardsHouse_Eventscript_Neckbeard::
# 10 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	lock
# 11 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 12 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 13 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_MINING_KIT
# 14 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_NeckbeardsHouse_Eventscript_Neckbeard_2
Coralport_NeckbeardsHouse_Eventscript_Neckbeard_1:
# 18 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_MINING_KIT
# 19 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_NeckbeardsHouse_Eventscript_Neckbeard_5
Coralport_NeckbeardsHouse_Eventscript_Neckbeard_4:
# 23 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_MINING_KIT
# 24 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_NeckbeardsHouse_Eventscript_Neckbeard_7
	return

Coralport_NeckbeardsHouse_Eventscript_Neckbeard_2:
# 15 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	faceplayer
# 16 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed
	goto Coralport_NeckbeardsHouse_Eventscript_Neckbeard_1

Coralport_NeckbeardsHouse_Eventscript_Neckbeard_5:
# 20 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	faceplayer
# 21 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Reward
	goto Coralport_NeckbeardsHouse_Eventscript_Neckbeard_4

Coralport_NeckbeardsHouse_Eventscript_Neckbeard_7:
# 25 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Ongoing
	return


Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed::
# 30 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_Text_0, MSGBOX_YESNO
# 31 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_2
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_1:
# 34 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 35 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_Text_2
# 36 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 37 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	release
	end

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_2:
# 32 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_Text_1
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_1


Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Reward::
# 42 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 43 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Reward_Text_0
# 45 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 46 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	giveitem ITEM_MINING_KIT
# 47 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 48 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Reward_Text_1
# 50 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 51 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FIND_MINING_KIT
# 52 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 53 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	refreshquesticon
# 54 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	release
	end


Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Ongoing::
# 59 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 60 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 1
	goto_if_eq Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Ongoing_2
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Ongoing_1:
# 67 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 68 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	refreshquesticon
# 69 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	release
	end

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Ongoing_2:
# 61 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	faceplayer
# 62 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Ongoing_Text_0
# 65 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Ongoing_1


Coralport_NeckbeardsHouse_TriggerLeft::
# 74 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setvar VAR_QUEST_FIND_MINING_KIT_STATE, 1
# 75 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_NeckbeardsHouse_TriggerLeft_Movement_0
# 76 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 77 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Coralport_NeckbeardsHouse_TriggerLeft_Movement_1
# 78 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 79 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 20
# 80 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start
	return


Coralport_NeckbeardsHouse_TriggerRight::
# 84 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setvar VAR_QUEST_FIND_MINING_KIT_STATE, 1
# 85 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start
	return


Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start::
# 88 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	lock
# 89 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 90 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_0
# 91 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 92 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_PIN
# 93 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_0
# 94 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 95 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 96 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_1
# 97 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 98 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 99 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_1
# 100 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 101 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 102 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_2
# 106 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 107 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 108 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_M_BUBBLE
# 109 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, emotecry
# 110 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 111 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 112 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 113 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_3
# 115 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 116 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 117 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_2
# 118 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 119 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement LOCALID_PLAYER, walkinplaceleft
# 120 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 121 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_4
# 122 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 123 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, faceright
# 124 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 125 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_5
# 129 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 130 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_PIN
# 131 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, emoteexclamation
# 132 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 133 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_6
# 135 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_3
# 137 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 138 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 139 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, walkinplaceup
# 140 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_M_SCRATCH
# 141 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitse
# 142 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 10
# 143 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_M_SCRATCH
# 144 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitse
# 145 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 10
# 146 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_M_SCRATCH
# 147 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitse
# 148 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_4
# 150 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 151 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 152 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_7
# 153 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 154 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_8
# 156 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 157 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, walkinplaceright
# 158 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 159 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_9
# 163 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 164 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 165 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_5
# 166 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 167 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_EXIT
# 168 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitse
# 169 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	removeobject 1
# 170 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 171 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 172 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FIND_MINING_KIT
# 173 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	release
	end


# 75 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_TriggerLeft_Movement_0:
# 75 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_right
# 75 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_up
	step_end

# 77 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_TriggerLeft_Movement_1:
# 77 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_down
# 77 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_right
# 77 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_up
	step_end

# 93 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_0:
# 93 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	emote_exclamation_mark
# 93 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_down
	step_end

# 99 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_1:
# 99 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	emote_pensive
# 99 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_right
# 99 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay_16
# 99 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay_16
# 99 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_down
	step_end

# 117 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_2:
# 117 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_left
# 117 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_down
	step_end

# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_3:
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_up
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_up
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_up
	step_end

# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_4:
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_right
	step_end

# 165 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_5:
# 165 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 165 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 165 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 165 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	set_invisible
	step_end

Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0:
# 12 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Nebe$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_Text_0:
# 30 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Good day, {PLAYER}! Are you here to\n"
	.string "trade me some shards?$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_Text_1:
# 32 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "TO DO SHARDS TRADE MENU :')$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Completed_Text_2:
# 35 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "I wish you the best on your journey.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Reward_Text_0:
# 43 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Thank you for retrieving my mining\n"
	.string "tools! The kit I promised you is also\l"
	.string "among those.\p"
	.string "Here it is!$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Reward_Text_1:
# 48 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "If you happen to find some colored\n"
	.string "shards while mining, please trade them\l"
	.string "to me!\p"
	.string "I do have some items I collected while\n"
	.string "travelling the region that you may find\l"
	.string "interesting.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Ongoing_Text_0:
# 62 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "I have reported the case to the police.\p"
	.string "If there's any new progression, they'll\n"
	.string "let us know.\p"
	.string "Sorry for the messy house, I'm still\n"
	.string "cleaning up.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_0:
# 90 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Oh Arceus... They aren't here...$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_1:
# 96 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Oh! You're... that young lady in\n"
	.string "Thundershard Cave.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_2:
# 102 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Well... This is awkward.\p"
	.string "I did promise to give you a mining kit\n"
	.string "when you visit me...\p"
	.string "But as you can see, some thieves have\n"
	.string "broken into my house and stole all of my\l"
	.string "tools, as well as my rocks collection...$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_3:
# 113 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Sorry, I'd love to give you a warm\n"
	.string "welcome but right now I probably should\l"
	.string "file a case to the police.\p"
	.string "Now please excuse me.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_4:
# 121 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please wait, Nebe-san.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_5:
# 125 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I'm very sorry for your loss.\p"
	.string "I'd love to repay your kindness back\n"
	.string "then at the cave so is there anything I\l"
	.string "could help?\p"
	.string "A picture of your toolbox or rocks\n"
	.string "collection perhaps?\p"
	.string "I'm currently traveling through the\n"
	.string "region so I may happen to come across\l"
	.string "them.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_6:
# 133 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Oh that's very kind of you!\p"
	.string "Hang on a moment, I do have some\n"
	.string "pictures of the stolen stuff.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_7:
# 152 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "There they are!$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_8:
# 155 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "{PLAYER} received a bunch of photos\n"
	.string "of Nebe with his collections.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_9:
# 159 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Thank you very much for offering help!\n"
	.string "You're a kind young lady.\p"
	.string "Now I'll go to the police station to\n"
	.string "report the case.\p"
	.string "I'll also let them know that you'll be\n"
	.string "helping so you can ask them about the\l"
	.string "investigation's progress.\p"
	.string "See you around and good luck on your\n"
	.string "journey, young lady.$"
