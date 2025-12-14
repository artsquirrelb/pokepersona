CoralportPoliceStation_MapScripts::
# 2 "data/maps/CoralportPoliceStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/CoralportPoliceStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_2
	return

CoralportPoliceStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/CoralportPoliceStation/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, 1, CoralportPoliceStation_MapScripts_OnFrame1
	.2byte 0


CoralportPoliceStation_MapScripts_OnFrame1::
# 14 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_OverhearingFishermansRequest
	return


CoralportPoliceStation_Eventscript_OverhearingFishermansRequest::
# 18 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_2
# 19 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject 5
# 20 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_0
# 21 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement LOCALID_PLAYER
# 22 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 20
# 23 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 24 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 25 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 26 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 27 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 28 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 29 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 30 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 20
# 31 "data/maps/CoralportPoliceStation/scripts.pory"
	special SpawnCameraObject
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_3
# 33 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 34 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 35 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 36 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 37 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_1
# 38 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 39 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_RUN_IN_PLACE_UP
# 40 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 41 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, walkinplacedown
# 42 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 43 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_3
# 44 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 45 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 46 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_4
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4
# 49 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 50 "data/maps/CoralportPoliceStation/scripts.pory"
	message CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5
# 51 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 52 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 53 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 54 "data/maps/CoralportPoliceStation/scripts.pory"
	release
# 55 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 40
# 56 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 1, walkinplacedown
# 57 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 58 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6
# 59 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, faceup
# 60 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 61 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7
# 67 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, walkinplaceup
# 68 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0
# 69 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_8
# 71 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 72 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement 5, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6
# 75 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 10
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7
# 78 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, faceright
# 79 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, faceleft
# 80 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement 5
# 81 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_EXIT
# 82 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9
# 91 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 92 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8
# 93 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9
# 94 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10
# 95 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11
# 96 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 97 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 98 "data/maps/CoralportPoliceStation/scripts.pory"
	special RemoveCameraObject
# 99 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 50
# 100 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject M_CORALP
# 101 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 102 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject A_CORALP
# 103 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 104 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject S_CORALP
# 105 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 106 "data/maps/CoralportPoliceStation/scripts.pory"
	removeobject 5
# 107 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_1
# 108 "data/maps/CoralportPoliceStation/scripts.pory"
	setflag FLAG_TEMP_2
# 109 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 2
# 110 "data/maps/CoralportPoliceStation/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST, QUEST_FIND_FISHERMANS_DAUGHTER
# 111 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanReceptionist::
# 116 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 117 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 118 "data/maps/CoralportPoliceStation/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 2
	goto_if_eq CoralportPoliceStation_Eventscript_PolicemanReceptionist_2
# 122 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanReceptionist_Text_0
CoralportPoliceStation_Eventscript_PolicemanReceptionist_1:
# 124 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 125 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end

CoralportPoliceStation_Eventscript_PolicemanReceptionist_2:
# 119 "data/maps/CoralportPoliceStation/scripts.pory"
	goto CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki
	goto CoralportPoliceStation_Eventscript_PolicemanReceptionist_1


CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki::
# 130 "data/maps/CoralportPoliceStation/scripts.pory"
	hidefollower
# 131 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm M_CORALP, 5, 16
# 132 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm A_CORALP, 5, 16
# 133 "data/maps/CoralportPoliceStation/scripts.pory"
	setobjectxyperm S_CORALP, 5, 16
# 134 "data/maps/CoralportPoliceStation/scripts.pory"
	clearflag FLAG_TEMP_1
# 135 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject M_CORALP
# 136 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 137 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject A_CORALP
# 138 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 139 "data/maps/CoralportPoliceStation/scripts.pory"
	addobject S_CORALP
# 140 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 1
# 141 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 142 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1
# 143 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2
# 144 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 145 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 146 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_0
# 149 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2
# 150 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1
# 156 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 157 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement A_CORALP, walkdown
# 158 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement LOCALID_CAMERA, walkdown
# 159 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 160 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 8
# 161 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement S_CORALP, facedown
# 162 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 4
# 163 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement M_CORALP, facedown
# 164 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 165 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 30
# 166 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_2
# 167 "data/maps/CoralportPoliceStation/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 3
# 168 "data/maps/CoralportPoliceStation/scripts.pory"
	warp MAP_CORALPORT, 13, 6
# 169 "data/maps/CoralportPoliceStation/scripts.pory"
	waitstate
	return


CoralportPoliceStation_Eventscript_Klefki::
# 173 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 174 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 175 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_KLEFKI, 18, 5
# 176 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_KLEFKI, CRY_MODE_NORMAL
# 177 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 178 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 179 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 180 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_KLEFKI
# 181 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Arcanine::
# 186 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 187 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 188 "data/maps/CoralportPoliceStation/scripts.pory"
	showmonpic SPECIES_ARCANINE, 18, 5
# 189 "data/maps/CoralportPoliceStation/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 190 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmoncry
# 191 "data/maps/CoralportPoliceStation/scripts.pory"
	delay 60
# 192 "data/maps/CoralportPoliceStation/scripts.pory"
	hidemonpic
# 193 "data/maps/CoralportPoliceStation/scripts.pory"
	setseenmon SPECIES_ARCANINE
# 194 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_PolicemanEast::
# 199 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 200 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 201 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_PolicemanEast_Text_0
# 202 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_PolicemanEast_Text_1
# 205 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 206 "data/maps/CoralportPoliceStation/scripts.pory"
	playse SE_PIN
# 207 "data/maps/CoralportPoliceStation/scripts.pory"
	applymovement VAR_LAST_TALKED, CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0
# 208 "data/maps/CoralportPoliceStation/scripts.pory"
	waitmovement
# 209 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


CoralportPoliceStation_Eventscript_Woman::
# 214 "data/maps/CoralportPoliceStation/scripts.pory"
	lock
# 215 "data/maps/CoralportPoliceStation/scripts.pory"
	faceplayer
# 216 "data/maps/CoralportPoliceStation/scripts.pory"
	setspeaker CoralportPoliceStation_Eventscript_Woman_Text_0
# 217 "data/maps/CoralportPoliceStation/scripts.pory"
	msgbox CoralportPoliceStation_Eventscript_Woman_Text_1
# 219 "data/maps/CoralportPoliceStation/scripts.pory"
	closemessage
# 220 "data/maps/CoralportPoliceStation/scripts.pory"
	release
	end


# 20 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_0:
# 20 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 20 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 20 "data/maps/CoralportPoliceStation/scripts.pory"
	player_run_up
# 20 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 20 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_1:
# 27 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 27 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
	step_end

# 28 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_2:
# 28 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_right
# 28 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
	step_end

# 32 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_3:
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 32 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_diag_northwest
	step_end

# 48 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_4:
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
# 48 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_faster_left
	step_end

# 73 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_5:
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 73 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 74 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_6:
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_right
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 74 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
	step_end

# 76 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_7:
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 76 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_fast_down
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	face_right
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	lock_facing_direction
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 77 "data/maps/CoralportPoliceStation/scripts.pory"
	unlock_facing_direction
	step_end

# 92 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_8:
# 92 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 92 "data/maps/CoralportPoliceStation/scripts.pory"
	face_up
# 92 "data/maps/CoralportPoliceStation/scripts.pory"
	set_visible
	step_end

# 93 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_9:
# 93 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_up
# 93 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 94 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_10:
# 94 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 94 "data/maps/CoralportPoliceStation/scripts.pory"
	walk_left
# 94 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 95 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Movement_11:
# 95 "data/maps/CoralportPoliceStation/scripts.pory"
	set_invisible
	step_end

# 207 "data/maps/CoralportPoliceStation/scripts.pory"
CoralportPoliceStation_Eventscript_PolicemanEast_Movement_0:
# 207 "data/maps/CoralportPoliceStation/scripts.pory"
	emote_sad
	step_end

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_0:
# 36 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Ikumi$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_1:
# 37 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Officer, please help me!\n"
	.string "My daughter has gone missing!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_2:
# 42 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Namake$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_3:
# 43 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "When was the last time you saw her?$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_4:
# 46 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Since this morning! I woke up and she\n"
	.string "was already not in the house!\p"
	.string "I've been searching for her everywhere!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_5:
# 50 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Oh what do I do........{PAUSE 60}$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_6:
# 58 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Please calm down, sir.$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_7:
# 61 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 69 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Of course! Please send your Growlithe\n"
	.string "to my house.\l"
	.string "It's the one on the beach!$"

CoralportPoliceStation_Eventscript_OverhearingFishermansRequest_Text_9:
# 83 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 122 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_0:
# 146 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Welcome to Coralport Police Station.\n"
	.string "How can we help you?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hello, have you found anything about\n"
	.string "Miki, the missing girl from Sunshine\l"
	.string "Orphanage?$"

CoralportPoliceStation_Eventscript_AkihikoAskingAboutMiki_Text_1:
# 150 "data/maps/CoralportPoliceStation/scripts.pory"
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
# 166 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Let's go outside.$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_0:
# 201 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Utaro$"

CoralportPoliceStation_Eventscript_PolicemanEast_Text_1:
# 202 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Almost everyone in the station have\n"
	.string "left to investigate the explosion case\l"
	.string "of Sunshine Orphanage.\p"
	.string "Now all of these desk works are passed\n"
	.string "onto me... {PAUSE 40} Sigh...\p"
	.string "Not gonna lie, I prefer field work.$"

CoralportPoliceStation_Eventscript_Woman_Text_0:
# 216 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "Miku$"

CoralportPoliceStation_Eventscript_Woman_Text_1:
# 217 "data/maps/CoralportPoliceStation/scripts.pory"
	.string "I'm waiting for my registration paper to\n"
	.string "be processed.\l"
	.string "{PAUSE_UNTIL_PRESS} It's taking so long...$"
