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
	setflag FLAG_PREVENT_OVERWORLD_SPEEDUP
# 22 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_2
# 23 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject 5
# 24 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_0
# 25 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement LOCALID_PLAYER
# 26 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 20
# 27 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 28 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 29 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 30 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 31 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 33 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 34 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 20
# 35 "data/maps/CoralportPoliceStation/scripts.pory"
	special SpawnCameraObject
# 36 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_3
# 37 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 38 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 39 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 40 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 41 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_1
# 42 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 43 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 44 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 45 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, walkinplacedown
# 46 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 47 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_3
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 49 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 50 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_4
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	message CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5
# 55 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 56 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 57 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 58 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 59 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 40
# 60 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, walkinplacedown
# 61 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 62 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6
# 63 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, faceup
# 64 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 65 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7
# 71 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 72 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_8
# 75 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 10
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, faceright
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, faceleft
# 84 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 85 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 87 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9
# 95 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 96 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10
# 99 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 8
# 100 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	special RemoveCameraObject
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 50
# 105 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject M_CORALP
# 106 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 107 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject A_CORALP
# 108 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 109 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject S_CORALP
# 110 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 111 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject 5
# 112 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_1
# 113 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_2
# 114 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 2
# 115 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST, QUEST_FIND_FISHERMANS_DAUGHTER
# 116 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_PREVENT_OVERWORLD_SPEEDUP
# 117 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanReceptionist::
# 122 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 123 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 124 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 2
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_2
# 127 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 1
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_3
# 143 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
CoralportPoliceStation_Eventscript_PolicemanReceptionist_1:
# 145 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 146 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_PolicemanReceptionist_2:
# 125 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki
	goto CoralportPoliceStation_Eventscript_PolicemanReceptionist_1

CoralportPoliceStation_Eventscript_PolicemanReceptionist_3:
# 128 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
# 129 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 130 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 131 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, emoteexclamation
# 132 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 133 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 134 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1
# 137 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 138 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_QUEST_FIND_MINING_KIT_STATE, 2
# 139 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki::
# 151 "data/maps/CoralportPoliceStation/scripts.pory"
	hidefollower
# 152 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm M_CORALP, 5, 16
# 153 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm A_CORALP, 5, 16
# 154 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm S_CORALP, 5, 16
# 155 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 156 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 157 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 158 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 159 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 160 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 161 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 162 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 163 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 164 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 165 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 166 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 167 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_0
# 170 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 171 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1
# 177 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 178 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, walkdown
# 179 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_CAMERA, walkdown
# 180 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 181 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 8
# 182 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, facedown
# 183 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 4
# 184 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, facedown
# 185 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 186 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 187 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_2
# 188 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 3
# 189 "data/maps/CoralportPoliceStation/scripts.pory"
	warp MAP_CORALPORT, 13, 6
# 190 "data/maps/CoralportPoliceStation/scripts.pory"
	waitstate
	return


CoralportPoliceStation_Eventscript_Klefki::
# 194 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 195 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 196 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_KLEFKI, 18, 5
# 197 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_KLEFKI, CRY_MODE_NORMAL
# 198 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 199 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 200 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 201 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_KLEFKI
# 202 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Arcanine::
# 207 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 208 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 209 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_ARCANINE, 18, 5
# 210 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 211 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 212 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 213 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 214 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_ARCANINE
# 215 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanEast::
# 220 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 221 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 222 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_PolicemanEast_Text_0
# 223 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanEast_Text_1
# 226 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 227 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 228 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement VAR_LAST_TALKED, CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0
# 229 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 230 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Woman::
# 235 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 236 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 237 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_Woman_Text_0
# 238 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_Woman_Text_1
# 240 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 241 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_0::
# 246 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_QUEST_FIND_MINING_KIT_STATE, 0
	goto_if_eq CoralportPoliceStation_Eventscript_QuestBoard_0_1
# 254 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1
	return

CoralportPoliceStation_Eventscript_QuestBoard_0_1:
# 247 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0
# 249 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 250 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_QuestBoard_1::
# 259 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 260 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_FIND_MINING_KIT
# 261 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_2
# 268 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_MINING_KIT
# 269 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportPoliceStation_Eventscript_QuestBoard_1_4
	return

CoralportPoliceStation_Eventscript_QuestBoard_1_2:
# 262 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0
# 264 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 265 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_QuestBoard_1_4:
# 270 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report
	return


CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report::
# 275 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0
# 277 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 278 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


# 24 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_0:
# 24 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 24 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 24 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 24 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 24 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1:
# 31 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 31 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
	step_end

# 32 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2:
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_right
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
	step_end

# 36 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_3:
# 36 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 36 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_diag_northwest
	step_end

# 52 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4:
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
	step_end

# 77 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5:
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 78 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6:
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
	step_end

# 80 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7:
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	face_right
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
	step_end

# 96 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8:
# 96 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 96 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
# 96 "data/maps/CoralportPoliceStation/scripts.pory"
	set_visible
	step_end

# 97 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9:
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 98 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10:
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 100 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11:
# 100 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 228 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0:
# 228 "data/maps/CoralportPoliceStation/scripts.pory"
	emote_sad
	step_end

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0:
# 40 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Ikumi$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_1:
# 41 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Officer, please help me!\n"
	.string "My daughter has gone missing!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2:
# 46 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Namake$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_3:
# 47 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "When was the last time you saw her?$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_4:
# 50 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Since this morning! I woke up and she\n"
	.string "was already not in the house!\p"
	.string "I've been searching for her everywhere!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5:
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Oh what do I do........{PAUSE 60}$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6:
# 62 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Please calm down, sir.$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7:
# 65 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Of course! Please send your Growlithe\n"
	.string "to my house.\l"
	.string "It's the one on the beach!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9:
# 87 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 128 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.$"

CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_1:
# 134 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 167 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.\n"
	.string "How can we help you?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hello, have you found anything about\n"
	.string "Miki, the missing girl from Sunshine\l"
	.string "Orphanage?$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1:
# 171 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 187 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Let's go outside.$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_0:
# 222 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Utaro$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_1:
# 223 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Almost everyone in the station have\n"
	.string "left to investigate the explosion case\l"
	.string "of Sunshine Orphanage.\p"
	.string "Now all of these desk works are passed\n"
	.string "onto me... {PAUSE 40} Sigh...\p"
	.string "Not gonna lie, I prefer field work.$"

CoralportPoliceStation_Eventscript_Woman_Text_0:
# 237 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Miku$"

CoralportPoliceStation_Eventscript_Woman_Text_1:
# 238 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "I'm waiting for my registration paper to\n"
	.string "be processed.{PAUSE_UNTIL_PRESS} It's taking so long...$"

CoralportPoliceStation_Eventscript_QuestBoard_0_Text_0:
# 247 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's currently no new case that you\n"
	.string "can accept.\p"
	.string "(TODO: QUEST LIST for Coralport Police\n"
	.string "Station)$"

CoralportPoliceStation_Eventscript_QuestBoard_1_Text_0:
# 262 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "This case has already been solved.\p"
	.string "We sincerely thank you for your help.$"

CoralportPoliceStation_Eventscript_QuestBoard_1_QUEST_FIND_MINING_KIT_Report_Text_0:
# 275 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "There's no new clue about this case.\p"
	.string "Please come back later (TODO lol).$"
