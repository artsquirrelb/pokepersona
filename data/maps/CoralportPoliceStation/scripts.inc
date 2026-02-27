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
	map_script_2 VAR_CHAPTER_1_STATE, C1_TO_POLICE_STATION, CoralportPoliceStation_MapScripts_OnFrame1
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
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4
# 55 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 56 "data/maps/CoralportPoliceStation/scripts.pory"
	message CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5
# 57 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 58 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 59 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 60 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 61 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 40
# 62 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, walkinplacedown
# 63 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 64 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6
# 65 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, faceup
# 66 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 67 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 75 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_8
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 10
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7
# 85 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, faceright
# 86 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, faceleft
# 87 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 88 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_EXIT
# 89 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 90 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	applymove S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10
# 105 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11
# 106 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 107 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 108 "data/maps/CoralportPoliceStation/scripts.pory"
	special RemoveCameraObject
# 109 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 50
# 110 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject M_CORALP
# 111 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 112 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject A_CORALP
# 113 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 114 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject S_CORALP
# 115 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 116 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject 5
# 117 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_1
# 118 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_2
# 119 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, C1_ASK_ABOUT_MIKI
# 120 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST, QUEST_FIND_FISHERMANS_DAUGHTER
# 121 "data/maps/CoralportPoliceStation/scripts.pory"
	addminutes 15
# 122 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanReceptionist::
# 127 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 128 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 129 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_CHAPTER_1_STATE, C1_ASK_ABOUT_MIKI
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_2
# 132 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 1
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_3
# 148 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
CoralportPoliceStation_Eventscript_PolicemanReceptionist_1:
# 150 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 151 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_PolicemanReceptionist_2:
# 130 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki
	goto CoralportPoliceStation_Eventscript_PolicemanReceptionist_1

CoralportPoliceStation_Eventscript_PolicemanReceptionist_3:
# 133 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
# 134 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 135 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 136 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, emoteexclamation
# 137 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 138 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 139 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1
# 142 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 143 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_QUEST_FIND_MINING_KIT_STATE, 2
# 144 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki::
# 156 "data/maps/CoralportPoliceStation/scripts.pory"
	hidefollower
# 157 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm M_CORALP, 5, 16
# 158 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm A_CORALP, 5, 16
# 159 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm S_CORALP, 5, 16
# 160 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 161 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 162 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 163 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 164 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 165 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 166 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 167 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 168 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 169 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 170 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 171 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 172 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_0
# 175 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 176 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1
# 182 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 183 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, walkdown
# 184 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_CAMERA, walkdown
# 185 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 186 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 8
# 187 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, facedown
# 188 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 4
# 189 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, facedown
# 190 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 191 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 192 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_2
# 193 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, C1_WAITING_SHIP
# 194 "data/maps/CoralportPoliceStation/scripts.pory"
	addminutes 15
# 195 "data/maps/CoralportPoliceStation/scripts.pory"
	warp MAP_CORALPORT, 13, 6
# 196 "data/maps/CoralportPoliceStation/scripts.pory"
	waitstate
	return


CoralportPoliceStation_Eventscript_Klefki::
# 200 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 201 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 202 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_KLEFKI, 18, 5
# 203 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_KLEFKI, CRY_MODE_NORMAL
# 204 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 205 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 206 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 207 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_KLEFKI
# 208 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Arcanine::
# 213 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 214 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 215 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_ARCANINE, 18, 5
# 216 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 217 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 218 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 219 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 220 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_ARCANINE
# 221 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanEast::
# 226 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 227 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 228 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_PolicemanEast_Text_0
# 229 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanEast_Text_1
# 232 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 233 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 234 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement VAR_LAST_TALKED, CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0
# 235 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 236 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Woman::
# 241 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 242 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 243 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_Woman_Text_0
# 244 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_Woman_Text_1
# 246 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 247 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_0::
# 252 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 0
	goto_if_eq CoralportPoliceStation_Eventscript_QuestBoard_0_1
# 260 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1
	return

CoralportPoliceStation_Eventscript_QuestBoard_0_1:
# 253 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0
# 255 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 256 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_1::
# 265 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 266 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_MINING_KIT
# 267 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_2
# 274 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_MINING_KIT
# 275 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_4
	return

CoralportPoliceStation_Eventscript_QuestBoard_1_2:
# 268 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0
# 270 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 271 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_QuestBoard_1_4:
# 276 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report
	return


CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report::
# 281 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0
# 283 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 284 "data/maps/CoralportPoliceStation/scripts.pory"
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

# 54 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4:
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
	step_end

# 80 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5:
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 81 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6:
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
	step_end

# 83 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7:
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 84 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
# 84 "data/maps/CoralportPoliceStation/scripts.pory"
	face_right
# 84 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 84 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 84 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
	step_end

# 102 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8:
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	set_visible
	step_end

# 103 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9:
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 104 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10:
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 105 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11:
# 105 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 234 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0:
# 234 "data/maps/CoralportPoliceStation/scripts.pory"
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
	.string "This morning!\n"
	.string "I woke up and she wasn't in the house!\p"
	.string "I've been searching for her everywhere!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5:
# 56 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Oh, what do I do........{PAUSE 60}$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6:
# 64 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Please calm down, sir.$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7:
# 67 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Of course! Please send your Growlithe\n"
	.string "to my house.\l"
	.string "It's the one on the beach!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9:
# 90 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 133 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.$"

CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1:
# 139 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 172 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.\n"
	.string "How can we help you?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Hello, have you found anything about\n"
	.string "Miki, the missing girl from Sunshine\l"
	.string "Orphanage?$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1:
# 176 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 192 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}Let's go outside.$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_0:
# 228 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Utaro$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_1:
# 229 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Almost everyone in the station has left\n"
	.string "to investigate the explosion at\l"
	.string "Sunshine Orphanage.\p"
	.string "Now all of this desk work is passed onto\n"
	.string "me... {PAUSE 40} Sigh...\p"
	.string "Not gonna lie, I prefer field work.$"

CoralportPoliceStation_Eventscript_Woman_Text_0:
# 243 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Miku$"

CoralportPoliceStation_Eventscript_Woman_Text_1:
# 244 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "I'm waiting for my registration papers\n"
	.string "to be processed.{PAUSE_UNTIL_PRESS} It's taking so long...$"

CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0:
# 253 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's currently no new case that you\n"
	.string "can accept.\p"
	.string "(TODO: QUEST LIST for Coralport Police\n"
	.string "Station)$"

CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0:
# 268 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "This case has already been solved.\p"
	.string "We sincerely thank you for your help.$"

CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0:
# 281 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's no new clues about this case.\p"
	.string "Please come back later (TODO lol).$"
