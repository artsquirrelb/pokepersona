CoralportPoliceStation_MapScripts::
# 2 "data/maps/CoralportPoliceStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/CoralportPoliceStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_3
# 6 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 1
	goto_if_ge CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_3
	return

CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/CoralportPoliceStation/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, 1, CoralportPoliceStation_MapScripts_OnFrame1
	.2byte 0


CoralportPoliceStation_MapScripts_OnFrame1::
# 17 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_OverhearingFishermansRequest
	return


CoralportPoliceStation_Eventscript_OverhearingFishermansRequest::
# 21 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 22 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 23 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_2
# 24 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject 5
# 25 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_0
# 26 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement LOCALID_PLAYER
# 27 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 20
# 28 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 29 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 30 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 31 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 33 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 34 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 35 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 20
# 36 "data/maps/CoralportPoliceStation/scripts.pory"
	special SpawnCameraObject
# 37 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_3
# 38 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 39 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 40 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 41 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 42 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_1
# 43 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 44 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 45 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 46 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, walkinplacedown
# 47 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_3
# 49 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 50 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_4
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 55 "data/maps/CoralportPoliceStation/scripts.pory"
	message CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5
# 56 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 57 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 58 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 59 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 60 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 40
# 61 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, walkinplacedown
# 62 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 63 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6
# 64 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, faceup
# 65 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 66 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 75 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_8
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 10
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7
# 84 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, faceright
# 85 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, faceleft
# 86 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 87 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_EXIT
# 88 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 89 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9
# 100 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	applymove S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11
# 105 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 106 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 107 "data/maps/CoralportPoliceStation/scripts.pory"
	special RemoveCameraObject
# 108 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 50
# 109 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject M_CORALP
# 110 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 111 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject A_CORALP
# 112 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 113 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject S_CORALP
# 114 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 115 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject 5
# 116 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_1
# 117 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_2
# 118 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 2
# 119 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST, QUEST_FIND_FISHERMANS_DAUGHTER
# 120 "data/maps/CoralportPoliceStation/scripts.pory"
	addminutes 15
# 121 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanReceptionist::
# 126 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 127 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 128 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 2
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_2
# 131 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 1
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_3
# 147 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
CoralportPoliceStation_Eventscript_PolicemanReceptionist_1:
# 149 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 150 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_PolicemanReceptionist_2:
# 129 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki
	goto CoralportPoliceStation_Eventscript_PolicemanReceptionist_1

CoralportPoliceStation_Eventscript_PolicemanReceptionist_3:
# 132 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
# 133 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 134 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 135 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, emoteexclamation
# 136 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 137 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 138 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1
# 141 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 142 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_QUEST_FIND_MINING_KIT_STATE, 2
# 143 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki::
# 155 "data/maps/CoralportPoliceStation/scripts.pory"
	hidefollower
# 156 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm M_CORALP, 5, 16
# 157 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm A_CORALP, 5, 16
# 158 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm S_CORALP, 5, 16
# 159 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 160 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 161 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 162 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 163 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 164 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 165 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 166 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 167 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 168 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 169 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 170 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 171 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_0
# 174 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 175 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1
# 181 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 182 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, walkdown
# 183 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_CAMERA, walkdown
# 184 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 185 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 8
# 186 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, facedown
# 187 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 4
# 188 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, facedown
# 189 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 190 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 191 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_2
# 192 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 3
# 193 "data/maps/CoralportPoliceStation/scripts.pory"
	addminutes 15
# 194 "data/maps/CoralportPoliceStation/scripts.pory"
	warp MAP_CORALPORT, 13, 6
# 195 "data/maps/CoralportPoliceStation/scripts.pory"
	waitstate
	return


CoralportPoliceStation_Eventscript_Klefki::
# 199 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 200 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 201 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_KLEFKI, 18, 5
# 202 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_KLEFKI, CRY_MODE_NORMAL
# 203 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 204 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 205 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 206 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_KLEFKI
# 207 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Arcanine::
# 212 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 213 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 214 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_ARCANINE, 18, 5
# 215 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 216 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 217 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 218 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 219 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_ARCANINE
# 220 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanEast::
# 225 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 226 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 227 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_PolicemanEast_Text_0
# 228 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanEast_Text_1
# 231 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 232 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 233 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement VAR_LAST_TALKED, CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0
# 234 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 235 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Woman::
# 240 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 241 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 242 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_Woman_Text_0
# 243 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_Woman_Text_1
# 245 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 246 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_0::
# 251 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 0
	goto_if_eq CoralportPoliceStation_Eventscript_QuestBoard_0_1
# 259 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1
	return

CoralportPoliceStation_Eventscript_QuestBoard_0_1:
# 252 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0
# 254 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 255 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_1::
# 264 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 265 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_MINING_KIT
# 266 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_2
# 273 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_MINING_KIT
# 274 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_4
	return

CoralportPoliceStation_Eventscript_QuestBoard_1_2:
# 267 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0
# 269 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 270 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_QuestBoard_1_4:
# 275 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report
	return


CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report::
# 280 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0
# 282 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 283 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


# 25 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_0:
# 25 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 25 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 25 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 25 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 25 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1:
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
	step_end

# 33 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2:
# 33 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_right
# 33 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
	step_end

# 37 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_3:
# 37 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 37 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_diag_northwest
	step_end

# 53 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4:
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
	step_end

# 79 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5:
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 80 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6:
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
	step_end

# 82 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7:
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	face_right
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
	step_end

# 101 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8:
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	set_visible
	step_end

# 102 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9:
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 103 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10:
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 104 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11:
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 233 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0:
# 233 "data/maps/CoralportPoliceStation/scripts.pory"
	emote_sad
	step_end

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0:
# 41 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Ikumi$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_1:
# 42 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Officer, please help me!\n"
	.string "My daughter has gone missing!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2:
# 47 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Namake$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_3:
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "When was the last time you saw her?$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_4:
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "This morning! I woke up and she wasn't\n"
	.string "in the house!\p"
	.string "I've been searching for her everywhere!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5:
# 55 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Oh, what do I do........{PAUSE 60}$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6:
# 63 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Please calm down, sir.$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7:
# 66 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "It's still relatively recent when you\n"
	.string "last saw her and she could be playing\l"
	.string "around here somewhere.\p"
	.string "We're currently short-handed due to\n"
	.string "the recent incident at Sunshine\l"
	.string "Orphanage.\p"
	.string "I also can't really leave my post unless\n"
	.string "it's an emergency.\p"
	.string "However, I can lend you my Growlithe.\n"
	.string "It has a great sense of smell.\p"
	.string "Do you have something that it can\n"
	.string "sniff?\p"
	.string "Recently worn clothes of your\n"
	.string "daughter, for example.$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_8:
# 75 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Of course! Please send your Growlithe\n"
	.string "to my house.\l"
	.string "It's the one on the beach!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9:
# 89 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}.......\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}... {PAUSE 40}(He's... also looking for a family\n"
	.string "member...)\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}...{PAUSE 40} Aki.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}...{PAUSE 40} {CREATE MUGSHOT_A EMOTE_NORMAL}Uh- yeah?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}If you want to ask about Miki,\n"
	.string "go ask.\p"
	.string "If you want to help that man,\n"
	.string "go help him.\p"
	.string "Stop standing there moping around.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}R-right.$"

CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0:
# 132 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.$"

CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1:
# 138 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Oh! You're that kind trainer who\n"
	.string "volunteered to help the investigation\l"
	.string "of Nebe-san's stolen mining collection.\p"
	.string "To be honest, the Coralport Police\n"
	.string "Station is currently short-handed, so\l"
	.string "we'd like to express our biggest\l"
	.string "gratitude.\p"
	.string "If you want to know further about the\n"
	.string "case, please kindly check the\l"
	.string "Information Board on your left.$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_0:
# 171 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.\n"
	.string "How can we help you?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Hello, have you found anything about\n"
	.string "Miki, the missing girl from Sunshine\l"
	.string "Orphanage?$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1:
# 175 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh, you're her brother, I guess.\p"
	.string "We're extremely sorry but we still\n"
	.string "haven't found anything new about her,\l"
	.string "nor the reason for which the explosion\l"
	.string "happened.\p"
	.string "We've been looking high and low but we\n"
	.string "still haven't found any traces of her or\l"
	.string "her body.\p"
	.string "The investigation is still on-going so\n"
	.string "there's not much more I can say.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}I see..... Thanks.$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_2:
# 191 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}Let's go outside.$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_0:
# 227 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Utaro$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_1:
# 228 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Almost everyone in the station has left\n"
	.string "to investigate the explosion at\l"
	.string "Sunshine Orphanage.\p"
	.string "Now all of this desk work is passed onto\n"
	.string "me... {PAUSE 40} Sigh...\p"
	.string "Not gonna lie, I prefer field work.$"

CoralportPoliceStation_Eventscript_Woman_Text_0:
# 242 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Miku$"

CoralportPoliceStation_Eventscript_Woman_Text_1:
# 243 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "I'm waiting for my registration papers\n"
	.string "to be processed.{PAUSE_UNTIL_PRESS} It's taking so long...$"

CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0:
# 252 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's currently no new case that you\n"
	.string "can accept.\p"
	.string "(TODO: QUEST LIST for Coralport Police\n"
	.string "Station)$"

CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0:
# 267 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "This case has already been solved.\p"
	.string "We sincerely thank you for your help.$"

CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0:
# 280 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's no new clues about this case.\p"
	.string "Please come back later (TODO lol).$"
