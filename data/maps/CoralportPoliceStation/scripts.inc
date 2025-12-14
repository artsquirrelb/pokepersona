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
	clearflag FLAG_TEMP_2
# 22 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject 5
# 23 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_0
# 24 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement LOCALID_PLAYER
# 25 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 20
# 26 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 27 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 28 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 29 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 30 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 31 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 33 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 20
# 34 "data/maps/CoralportPoliceStation/scripts.pory"
	special SpawnCameraObject
# 35 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_3
# 36 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 37 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 38 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 39 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 40 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_1
# 41 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 42 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 43 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 44 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, walkinplacedown
# 45 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 46 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_3
# 47 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 49 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_4
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	message CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 55 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 56 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 57 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 58 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 40
# 59 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, walkinplacedown
# 60 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 61 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6
# 62 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, faceup
# 63 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 64 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7
# 70 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 71 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 72 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_8
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 75 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 10
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, faceright
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, faceleft
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 84 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 86 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9
# 94 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 95 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8
# 96 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11
# 99 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 100 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	special RemoveCameraObject
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 50
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject M_CORALP
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 105 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject A_CORALP
# 106 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 107 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject S_CORALP
# 108 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 109 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject 5
# 110 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_1
# 111 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_2
# 112 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 2
# 113 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST, QUEST_FIND_FISHERMANS_DAUGHTER
# 114 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanReceptionist::
# 119 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 120 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 121 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 2
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_2
# 124 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 1
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_3
# 140 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
CoralportPoliceStation_Eventscript_PolicemanReceptionist_1:
# 142 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 143 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_PolicemanReceptionist_2:
# 122 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki
	goto CoralportPoliceStation_Eventscript_PolicemanReceptionist_1

CoralportPoliceStation_Eventscript_PolicemanReceptionist_3:
# 125 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
# 126 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 127 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 128 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, emoteexclamation
# 129 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 130 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 131 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1
# 134 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 135 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_QUEST_FIND_MINING_KIT_STATE, 2
# 136 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki::
# 148 "data/maps/CoralportPoliceStation/scripts.pory"
	hidefollower
# 149 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm M_CORALP, 5, 16
# 150 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm A_CORALP, 5, 16
# 151 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm S_CORALP, 5, 16
# 152 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 153 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 154 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 155 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 156 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 157 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 158 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 159 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 160 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 161 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 162 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 163 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 164 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_0
# 167 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 168 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1
# 174 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 175 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, walkdown
# 176 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_CAMERA, walkdown
# 177 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 178 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 8
# 179 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, facedown
# 180 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 4
# 181 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, facedown
# 182 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 183 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 184 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_2
# 185 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 3
# 186 "data/maps/CoralportPoliceStation/scripts.pory"
	warp MAP_CORALPORT, 13, 6
# 187 "data/maps/CoralportPoliceStation/scripts.pory"
	waitstate
	return


CoralportPoliceStation_Eventscript_Klefki::
# 191 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 192 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 193 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_KLEFKI, 18, 5
# 194 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_KLEFKI, CRY_MODE_NORMAL
# 195 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 196 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 197 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 198 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_KLEFKI
# 199 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Arcanine::
# 204 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 205 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 206 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_ARCANINE, 18, 5
# 207 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 208 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 209 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 210 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 211 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_ARCANINE
# 212 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanEast::
# 217 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 218 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 219 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_PolicemanEast_Text_0
# 220 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanEast_Text_1
# 223 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 224 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 225 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement VAR_LAST_TALKED, CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0
# 226 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 227 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Woman::
# 232 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 233 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 234 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_Woman_Text_0
# 235 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_Woman_Text_1
# 237 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 238 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_0::
# 243 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 0
	goto_if_eq CoralportPoliceStation_Eventscript_QuestBoard_0_1
# 251 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1
	return

CoralportPoliceStation_Eventscript_QuestBoard_0_1:
# 244 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0
# 246 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 247 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_1::
# 256 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 257 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_MINING_KIT
# 258 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_2
# 265 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_MINING_KIT
# 266 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_4
	return

CoralportPoliceStation_Eventscript_QuestBoard_1_2:
# 259 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0
# 261 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 262 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_QuestBoard_1_4:
# 267 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report
	return


CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report::
# 272 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0
# 274 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 275 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


# 23 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_0:
# 23 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 23 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 23 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 23 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 23 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
	step_end

# 30 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1:
# 30 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 30 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
	step_end

# 31 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2:
# 31 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_right
# 31 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
	step_end

# 35 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_3:
# 35 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 35 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_diag_northwest
	step_end

# 51 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4:
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
	step_end

# 76 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5:
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 77 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6:
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
	step_end

# 79 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7:
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	face_right
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
	step_end

# 95 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8:
# 95 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 95 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
# 95 "data/maps/CoralportPoliceStation/scripts.pory"
	set_visible
	step_end

# 96 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9:
# 96 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 96 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 97 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10:
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 98 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11:
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 225 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0:
# 225 "data/maps/CoralportPoliceStation/scripts.pory"
	emote_sad
	step_end

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0:
# 39 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Ikumi$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_1:
# 40 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Officer, please help me!\n"
	.string "My daughter has gone missing!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2:
# 45 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Namake$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_3:
# 46 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "When was the last time you saw her?$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_4:
# 49 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Since this morning! I woke up and she\n"
	.string "was already not in the house!\p"
	.string "I've been searching for her everywhere!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5:
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Oh what do I do........{PAUSE 60}$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6:
# 61 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Please calm down, sir.$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7:
# 64 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "It's still relatively recent that you\n"
	.string "last saw her and she could be playing\l"
	.string "around here somewhere.\p"
	.string "We're currently short-handed due to\n"
	.string "the recent incident at Sunshine\l"
	.string "Orphanage.\p"
	.string "I also can't really leave my post unless\n"
	.string "it's emergency.\p"
	.string "However, I can lend you my Growlithe. It\n"
	.string "has a great sense of smell.\p"
	.string "Do you have something that it can\n"
	.string "sniff?\l"
	.string "Recently worn clothes of your\l"
	.string "daughter, for example.$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_8:
# 72 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Of course! Please send your Growlithe\n"
	.string "to my house.\l"
	.string "It's the one on the beach!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9:
# 86 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}.......\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}... {PAUSE 40}(He's... also looking for a family\n"
	.string "member...)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}....{PAUSE 40} Aki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}...{PAUSE 40} {CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Uh- yeah?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}If you want to ask about Miki, go ask.\p"
	.string "If you want to help that man, go help\n"
	.string "him.\p"
	.string "Stop standing there and mopping\n"
	.string "around.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}R-right.$"

CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0:
# 125 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.$"

CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1:
# 131 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Oh! You're that kind trainer who\n"
	.string "volunteered to help the investigation\l"
	.string "of Nebe-san's stolen mining collection\l"
	.string "case.\p"
	.string "To be honest, the Coralport Police\n"
	.string "Station is currently heavily\l"
	.string "short-handed so we'd like to express\l"
	.string "our biggest gratitude.\p"
	.string "If you want to know further about the\n"
	.string "case, please kindly check the\l"
	.string "Information Board on your left.$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_0:
# 164 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.\n"
	.string "How can we help you?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hello, have you found anything about\n"
	.string "Miki, the missing girl from Sunshine\l"
	.string "Orphanage?$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1:
# 168 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh, you're her brother, I guess.\p"
	.string "We're extremely sorry but we still\n"
	.string "haven't found anything new about her,\l"
	.string "nor the reason for which the explosion\l"
	.string "happened.\p"
	.string "We've been looking high and low but we\n"
	.string "still find no traces of her nor her body.\p"
	.string "The investigation is still on-going so\n"
	.string "there's not much I can say further.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}I see..... Thanks.$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_2:
# 184 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Let's go outside.$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_0:
# 219 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Utaro$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_1:
# 220 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Almost everyone in the station have\n"
	.string "left to investigate the explosion case\l"
	.string "of Sunshine Orphanage.\p"
	.string "Now all of these desk works are passed\n"
	.string "onto me... {PAUSE 40} Sigh...\p"
	.string "Not gonna lie, I prefer field work.$"

CoralportPoliceStation_Eventscript_Woman_Text_0:
# 234 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Miku$"

CoralportPoliceStation_Eventscript_Woman_Text_1:
# 235 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "I'm waiting for my registration paper to\n"
	.string "be processed.{PAUSE_UNTIL_PRESS} It's taking so long...$"

CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0:
# 244 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's currently no new case that you\n"
	.string "can accept.\p"
	.string "(TODO: QUEST LIST for Coralport Police\n"
	.string "Station)$"

CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0:
# 259 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "This case has already been solved.\p"
	.string "We sincerely thank you for your help.$"

CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0:
# 272 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's no new clue about this case.\p"
	.string "Please come back later (TODO lol).$"
