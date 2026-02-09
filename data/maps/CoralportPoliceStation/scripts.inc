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
# 72 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_8
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 10
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, faceright
# 84 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, faceleft
# 85 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 86 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_EXIT
# 87 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 88 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9
# 96 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9
# 99 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10
# 100 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 8
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	special RemoveCameraObject
# 105 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 50
# 106 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject M_CORALP
# 107 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 108 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject A_CORALP
# 109 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 110 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject S_CORALP
# 111 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 112 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject 5
# 113 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_1
# 114 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_2
# 115 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 2
# 116 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST, QUEST_FIND_FISHERMANS_DAUGHTER
# 117 "data/maps/CoralportPoliceStation/scripts.pory"
	addminutes 15
# 118 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanReceptionist::
# 123 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 124 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 125 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 2
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_2
# 128 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 1
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_3
# 144 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
CoralportPoliceStation_Eventscript_PolicemanReceptionist_1:
# 146 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 147 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_PolicemanReceptionist_2:
# 126 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki
	goto CoralportPoliceStation_Eventscript_PolicemanReceptionist_1

CoralportPoliceStation_Eventscript_PolicemanReceptionist_3:
# 129 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
# 130 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 131 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 132 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, emoteexclamation
# 133 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 134 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 135 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1
# 138 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 139 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_QUEST_FIND_MINING_KIT_STATE, 2
# 140 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki::
# 152 "data/maps/CoralportPoliceStation/scripts.pory"
	hidefollower
# 153 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm M_CORALP, 5, 16
# 154 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm A_CORALP, 5, 16
# 155 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm S_CORALP, 5, 16
# 156 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 157 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 158 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 159 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 160 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 161 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 162 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 163 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 164 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 165 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 166 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 167 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 168 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_0
# 171 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 172 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1
# 178 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 179 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, walkdown
# 180 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_CAMERA, walkdown
# 181 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 182 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 8
# 183 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, facedown
# 184 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 4
# 185 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, facedown
# 186 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 187 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 188 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_2
# 189 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 3
# 190 "data/maps/CoralportPoliceStation/scripts.pory"
	addminutes 15
# 191 "data/maps/CoralportPoliceStation/scripts.pory"
	warp MAP_CORALPORT, 13, 6
# 192 "data/maps/CoralportPoliceStation/scripts.pory"
	waitstate
	return


CoralportPoliceStation_Eventscript_Klefki::
# 196 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 197 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 198 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_KLEFKI, 18, 5
# 199 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_KLEFKI, CRY_MODE_NORMAL
# 200 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 201 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 202 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 203 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_KLEFKI
# 204 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Arcanine::
# 209 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 210 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 211 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_ARCANINE, 18, 5
# 212 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 213 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 214 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 215 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 216 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_ARCANINE
# 217 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanEast::
# 222 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 223 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 224 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_PolicemanEast_Text_0
# 225 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanEast_Text_1
# 228 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 229 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 230 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement VAR_LAST_TALKED, CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0
# 231 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 232 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Woman::
# 237 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 238 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 239 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_Woman_Text_0
# 240 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_Woman_Text_1
# 242 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 243 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_0::
# 248 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 0
	goto_if_eq CoralportPoliceStation_Eventscript_QuestBoard_0_1
# 256 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1
	return

CoralportPoliceStation_Eventscript_QuestBoard_0_1:
# 249 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0
# 251 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 252 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_1::
# 261 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 262 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_MINING_KIT
# 263 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_2
# 270 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_MINING_KIT
# 271 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_4
	return

CoralportPoliceStation_Eventscript_QuestBoard_1_2:
# 264 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0
# 266 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 267 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_QuestBoard_1_4:
# 272 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report
	return


CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report::
# 277 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0
# 279 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 280 "data/maps/CoralportPoliceStation/scripts.pory"
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

# 78 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5:
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 79 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6:
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
	step_end

# 81 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7:
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	face_right
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
	step_end

# 97 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8:
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	set_visible
	step_end

# 98 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9:
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 99 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10:
# 99 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 99 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 99 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 101 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11:
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 230 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0:
# 230 "data/maps/CoralportPoliceStation/scripts.pory"
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
	.string "However, I can lend you my Growlithe. It\n"
	.string "has a great sense of smell.\p"
	.string "Do you have something that it can\n"
	.string "sniff?\l"
	.string "Recently worn clothes of your\l"
	.string "daughter, for example.$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_8:
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Of course! Please send your Growlithe\n"
	.string "to my house.\l"
	.string "It's the one on the beach!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9:
# 88 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}.......\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}... {PAUSE 40}(He's... also looking for a family\n"
	.string "member...)\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}....{PAUSE 40} Aki.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}...{PAUSE 40} {CREATE MUGSHOT_A EMOTE_NORMAL}Uh- yeah?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}If you want to ask about Miki, go ask.\p"
	.string "If you want to help that man, go help\n"
	.string "him.\p"
	.string "Stop standing there moping around.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}R-right.$"

CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0:
# 129 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.$"

CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1:
# 135 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 168 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.\n"
	.string "How can we help you?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Hello, have you found anything about\n"
	.string "Miki, the missing girl from Sunshine\l"
	.string "Orphanage?$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1:
# 172 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 188 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}Let's go outside.$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_0:
# 224 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Utaro$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_1:
# 225 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Almost everyone in the station has left\n"
	.string "to investigate the explosion at\l"
	.string "Sunshine Orphanage.\p"
	.string "Now all of this desk work is passed onto\n"
	.string "me... {PAUSE 40} Sigh...\p"
	.string "Not gonna lie, I prefer field work.$"

CoralportPoliceStation_Eventscript_Woman_Text_0:
# 239 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Miku$"

CoralportPoliceStation_Eventscript_Woman_Text_1:
# 240 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "I'm waiting for my registration papers\n"
	.string "to be processed.{PAUSE_UNTIL_PRESS} It's taking so long...$"

CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0:
# 249 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's currently no new case that you\n"
	.string "can accept.\p"
	.string "(TODO: QUEST LIST for Coralport Police\n"
	.string "Station)$"

CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0:
# 264 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "This case has already been solved.\p"
	.string "We sincerely thank you for your help.$"

CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0:
# 277 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's no new clues about this case.\p"
	.string "Please come back later (TODO lol).$"
