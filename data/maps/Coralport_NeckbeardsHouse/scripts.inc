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


Coralport_NeckbeardsHouse_CheckIfMitsuru::
# 74 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	checkplayergender
# 75 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Coralport_NeckbeardsHouse_CheckIfMitsuru_1
# 109 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start
	return

Coralport_NeckbeardsHouse_CheckIfMitsuru_1:
# 76 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	isfollowernpc OBJ_EVENT_GFX_MAY_NORMAL
# 77 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_NeckbeardsHouse_CheckIfMitsuru_4
# 84 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto_if_unset FLAG_LOCK_MITSURU, Coralport_NeckbeardsHouse_CheckIfMitsuru_7
# 94 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 95 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_PIN
# 96 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_CheckIfMitsuru_Movement_2
# 97 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 98 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 99 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_CheckIfMitsuru_Text_0
# 101 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 102 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 103 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	warp MAP_CORALPORT, 4
# 104 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitstate
	return

Coralport_NeckbeardsHouse_CheckIfMitsuru_4:
# 78 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Coralport_NeckbeardsHouse_CheckIfMitsuru_Movement_0
# 79 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_NeckbeardsHouse_CheckIfMitsuru_Movement_1
# 80 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 81 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start
	return

Coralport_NeckbeardsHouse_CheckIfMitsuru_7:
# 85 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	hidefollower
# 86 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	switchmaincharacter
# 87 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	updatefollowingmon
# 88 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 20
# 89 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement LOCALID_PLAYER, walkinplaceup
# 90 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 91 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start
	return


Coralport_NeckbeardsHouse_TriggerLeft::
# 114 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	hidefollower
# 115 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_NeckbeardsHouse_TriggerLeft_Movement_0
# 116 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 117 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Coralport_NeckbeardsHouse_TriggerLeft_Movement_1
# 118 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 119 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 20
# 120 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_CheckIfMitsuru
	return


Coralport_NeckbeardsHouse_TriggerRight::
# 124 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	goto Coralport_NeckbeardsHouse_CheckIfMitsuru
	return


Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start::
# 127 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	lock
# 128 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setvar VAR_QUEST_FIND_MINING_KIT_STATE, 1
# 129 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 130 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_0
# 131 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 132 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_PIN
# 133 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_CheckIfMitsuru_Movement_2
# 134 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 135 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_1
# 137 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 138 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 139 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_0
# 140 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 141 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 142 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_2
# 146 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 147 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 148 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_M_BUBBLE
# 149 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, emotecry
# 150 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 151 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 152 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 153 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_3
# 155 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 156 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 157 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_1
# 158 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 159 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	isfollowernpc OBJ_EVENT_GFX_MAY_NORMAL
# 160 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_2
# 165 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement LOCALID_PLAYER, walkinplaceleft
# 166 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_2
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_1:
# 168 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 169 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_4
# 170 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 171 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, faceright
# 172 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 173 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_5
# 177 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 178 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_PIN
# 179 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, emoteexclamation
# 180 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 181 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_6
# 183 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_3
# 185 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 186 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 187 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, walkinplaceup
# 188 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_M_SCRATCH
# 189 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitse
# 190 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 10
# 191 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_M_SCRATCH
# 192 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitse
# 193 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 10
# 194 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_M_SCRATCH
# 195 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitse
# 196 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_4
# 198 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 199 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 200 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_7
# 201 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 202 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 203 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_8
# 204 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 205 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, walkinplaceright
# 206 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setspeaker Coralport_NeckbeardsHouse_Eventscript_Neckbeard_Text_0
# 207 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	msgbox Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_9
# 211 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	closemessage
# 212 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay 30
# 213 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement 1, Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_5
# 214 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitmovement
# 215 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	playse SE_EXIT
# 216 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	waitse
# 217 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	removeobject 1
# 218 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 219 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 220 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FIND_MINING_KIT
# 221 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	release
	end

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_2:
# 161 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkinplaceleft
# 162 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	applymovement LOCALID_PLAYER, walkinplaceleft
	goto Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_1


# 78 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_CheckIfMitsuru_Movement_0:
# 78 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_up
# 78 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_right
# 78 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_up
	step_end

# 79 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_CheckIfMitsuru_Movement_1:
# 79 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_down
# 79 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_up
	step_end

# 96 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_CheckIfMitsuru_Movement_2:
# 96 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	emote_exclamation_mark
# 96 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_down
	step_end

# 115 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_TriggerLeft_Movement_0:
# 115 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_right
# 115 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_up
	step_end

# 117 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_TriggerLeft_Movement_1:
# 117 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_down
# 117 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_right
# 117 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_up
	step_end

# 139 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_0:
# 139 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	emote_pensive
# 139 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_right
# 139 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay_16
# 139 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	delay_16
# 139 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_down
	step_end

# 157 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_1:
# 157 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_left
# 157 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_down
	step_end

# 166 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_2:
# 166 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_right
# 166 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_left
	step_end

# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_3:
# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_up
# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_up
# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_left
# 184 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_up
	step_end

# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_4:
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_right
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 197 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	face_right
	step_end

# 213 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Movement_5:
# 213 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 213 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 213 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	walk_fast_down
# 213 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
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
	.string "with me!\p"
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

Coralport_NeckbeardsHouse_CheckIfMitsuru_Text_0:
# 99 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Who are you kids?\p"
	.string "Well, sorry but I'm not in the state to\n"
	.string "be welcoming strangers in my house\l"
	.string "right now, please kindly see yourselves\l"
	.string "out.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_0:
# 130 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Oh Arceus... They aren't here...$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_1:
# 136 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Oh! You're... that young lady in\n"
	.string "Thundershard Cave.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_2:
# 142 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Well... This is awkward.\p"
	.string "I did promise to give you a mining kit\n"
	.string "when you visit me...\p"
	.string "But as you can see, some thieves have\n"
	.string "broken into my house and stolen all of\l"
	.string "my tools, as well as my rock collection...$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_3:
# 153 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Sorry, I'd love to give you a warm\n"
	.string "welcome but right now I probably should\l"
	.string "file a report with the police.\p"
	.string "Now please excuse me.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_4:
# 169 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Please wait, Nebe-san.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_5:
# 173 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I'm very sorry for your loss.\p"
	.string "I'd love to repay your kindness back\n"
	.string "then at the cave so is there anything I\l"
	.string "could do to help?\p"
	.string "A picture of your toolbox or rocks\n"
	.string "collection perhaps?\p"
	.string "I'm currently traveling through the\n"
	.string "region so I may happen to come across\l"
	.string "them.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_6:
# 181 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Oh that's very kind of you!\p"
	.string "Hang on a moment, I do have some\n"
	.string "pictures of the stolen stuff.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_7:
# 200 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "There they are!$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_8:
# 203 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "{PLAYER} received a bunch of photos\n"
	.string "of Nebe with his collections.$"

Coralport_NeckbeardsHouse_QUEST_FIND_MINING_KIT_Start_Text_9:
# 207 "data/maps/Coralport_NeckbeardsHouse/scripts.pory"
	.string "Thank you very much for offering to\n"
	.string "help! You're a kind young lady.\p"
	.string "Now I'll go to the police station to\n"
	.string "report the case.\p"
	.string "I'll also let them know that you'll be\n"
	.string "helping so you can ask them about the\l"
	.string "investigation's progress.\p"
	.string "See you around and good luck on your\n"
	.string "journey, young lady.$"
