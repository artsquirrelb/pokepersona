MansionsGarden_MapScripts::
# 2 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD
# 21 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 53 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_4
# 4 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 4 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 5 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 12, 15, 0x911, FALSE
# 6 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 13, 15, 0x912, FALSE
# 7 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 14, 15, 0x913, FALSE
# 8 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 15, 15, 0x914, FALSE
# 10 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 12, 16, 0x919, TRUE
# 11 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 13, 16, 0x91A, TRUE
# 12 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 14, 16, 0x91B, TRUE
# 13 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 15, 16, 0x91C, TRUE
# 15 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 12, 17, 0x921, TRUE
# 16 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 13, 17, 0x922, TRUE
# 17 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 14, 17, 0x923, TRUE
# 18 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 15, 17, 0x924, TRUE
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 22 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 0
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 3
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 36 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 44 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 49 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_gt MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 23 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 24 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
# 25 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 42, 20
# 26 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype KIKUNO, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 27 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 46, 22
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 30 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 31 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 37, 23
# 32 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype KIKUNO, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 38, 23
# 34 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype INDEEDEE_F, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 37 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 38, 20
# 38 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype KIKUNO, MOVEMENT_TYPE_FACE_RIGHT
# 39 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 38, 21
# 40 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype INDEEDEE_F, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 41 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm FENNEKIN, 39, 21
# 42 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 45 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
# 46 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 44, 18
# 47 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 48, 20
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 50 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 54 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, MansionsGarden_Eventscript_OnFrame0
# 55 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 3, MansionsGarden_Eventscript_OnFrame3
# 56 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 5, MansionsGarden_Eventscript_OnFrame5
# 58 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_TEMP_8, 0, MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko
	.2byte 0


EventScript_NewGameSetUp::
# 63 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 100
# 64 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 100
# 65 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 100
# 66 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_TIME_RESET_ATTEMPTS, 5
# 67 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 68 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 69 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 70 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 71 "data/maps/MansionsGarden/scripts.pory"
	checkplayergender
# 72 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_NewGameSetUp_2
# 77 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 22, 30, 0
# 78 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
EventScript_NewGameSetUp_1:
# 80 "data/maps/MansionsGarden/scripts.pory"
	callnative ScrCmd_InitTimeBasedEvent
# 81 "data/maps/MansionsGarden/scripts.pory"
	pausefakertc
	return

EventScript_NewGameSetUp_2:
# 73 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30, 0
# 74 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
	goto EventScript_NewGameSetUp_1


MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko::
# 86 "data/maps/MansionsGarden/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 87 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_3
MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_1:
# 91 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_2:
# 88 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_TEMP_4
# 89 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
	goto MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_1

MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_3:
# 87 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_2
	goto MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_1


MansionsGarden_Eventscript_OnFrame0::
# 95 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SlowlyShowTheMap
	return


MansionsGarden_Eventscript_OnFrame3::
# 99 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 4
# 100 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_KikunoVSFennekin
	return


MansionsGarden_Eventscript_OnFrame5::
# 104 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SayingGoodbyeToKikuno
	return


MansionsGarden_Eventscript_SlowlyShowTheMap::
# 108 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 109 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 110 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0
# 111 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 112 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0
# 114 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 115 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 116 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 52
# 117 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MITSURUS_ROOM2F, 15, 10
	return


MansionsGarden_Eventscript_KikunoVSFennekin::
# 123 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 124 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 125 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 126 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 127 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 128 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 129 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1
# 130 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 131 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_BlockShakeCamera
# 132 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 133 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2
# 134 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3
# 135 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 136 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_0
# 137 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 138 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 139 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4
# 140 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 141 "data/maps/MansionsGarden/scripts.pory"
	playse SE_LEDGE
# 142 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5
# 143 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 144 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 145 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 146 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 147 "data/maps/MansionsGarden/scripts.pory"
	lock
# 148 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 149 "data/maps/MansionsGarden/scripts.pory"
	release
# 150 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 151 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 152 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6
# 153 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 154 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_1
# 155 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 156 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 157 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 158 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 159 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 160 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 161 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 162 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8
# 163 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 164 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, faceup
# 165 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 166 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 167 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 168 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_2
# 169 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 170 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 171 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 172 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 173 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10
# 174 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 175 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 176 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_CATCHING
# 177 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 178 "data/maps/MansionsGarden/scripts.pory"
	setwildbattle SPECIES_FENNEKIN, 5
# 179 "data/maps/MansionsGarden/scripts.pory"
	dowildbattle
# 180 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_VSFennekin
	return


MansionsGarden_Eventscript_VSFennekin::
# 184 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 185 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 186 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 187 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 188 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 189 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 190 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 191 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_0
# 192 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 193 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_VSFennekin_Movement_0
# 194 "data/maps/MansionsGarden/scripts.pory"
	delay 8
# 195 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 196 "data/maps/MansionsGarden/scripts.pory"
	waitmovement KIKUNO
# 197 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 198 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 199 "data/maps/MansionsGarden/scripts.pory"
	playse MUS_HEAL
# 200 "data/maps/MansionsGarden/scripts.pory"
	waitse
# 201 "data/maps/MansionsGarden/scripts.pory"
	special HealPlayerParty
# 202 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_1
# 205 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 206 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 207 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 208 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_VSFennekin_Movement_1
# 209 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, facedown
# 210 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 211 "data/maps/MansionsGarden/scripts.pory"
	waitmovement FENNEKIN
# 212 "data/maps/MansionsGarden/scripts.pory"
	lock
# 213 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 214 "data/maps/MansionsGarden/scripts.pory"
	release
# 215 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 216 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_2
# 218 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 219 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 220 "data/maps/MansionsGarden/scripts.pory"
	fwdtime 23, 0
	end


MansionsGarden_Eventscript_Kikuno::
# 225 "data/maps/MansionsGarden/scripts.pory"
	lock
# 226 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 227 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_Eventscript_Kikuno_2
# 232 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_1
# 233 "data/maps/MansionsGarden/scripts.pory"
	closemessage
MansionsGarden_Eventscript_Kikuno_1:
# 235 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Kikuno_2:
# 228 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_0
# 229 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_Kikuno_1


MansionsGarden_Eventscript_Fennekin::
# 240 "data/maps/MansionsGarden/scripts.pory"
	lock
# 241 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 242 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 243 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_0, MSGBOX_YESNO
# 244 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 245 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_1
# 262 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 263 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_Fennekin_Movement_0
# 264 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 265 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_3
# 266 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 267 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Fennekin_1:
# 246 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_1, MSGBOX_YESNO
# 248 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 249 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_5
# 254 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_2
# 255 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 256 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetNormalFennekin
MansionsGarden_Eventscript_Fennekin_4:
# 258 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 259 "data/maps/MansionsGarden/scripts.pory"
	release
	return

MansionsGarden_Eventscript_Fennekin_5:
# 251 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetShinyFennekin
	goto MansionsGarden_Eventscript_Fennekin_4


MansionsGarden_Eventscript_GetShinyFennekin::
# 273 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CALM_MIND, shinyMode = SHINY_MODE_ALWAYS
# 274 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_1
# 282 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_2
# 291 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetShinyFennekin_1:
# 275 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 276 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 277 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 278 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 279 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 280 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return

MansionsGarden_Eventscript_GetShinyFennekin_2:
# 283 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 284 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 285 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 286 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 287 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 288 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return


MansionsGarden_Eventscript_GetNormalFennekin::
# 294 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CALM_MIND, shinyMode = SHINY_MODE_NEVER
# 295 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_1
# 305 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_2
# 316 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetNormalFennekin_1:
# 296 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 297 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 298 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 299 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 300 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 301 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 302 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 303 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_Eventscript_GetNormalFennekin_2:
# 306 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 307 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 308 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 309 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 310 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 311 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 312 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 313 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return


MustGetFennekin::
# 320 "data/maps/MansionsGarden/scripts.pory"
	lock
# 321 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MustGetFennekin_Movement_0
# 322 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 323 "data/maps/MansionsGarden/scripts.pory"
	msgbox MustGetFennekin_Text_0
# 324 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 325 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_SayingGoodbyeToKikuno::
# 330 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 6
# 331 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 332 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, emotepensive
# 333 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 334 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 335 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0
# 341 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 342 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 343 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 344 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 345 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0
# 346 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 347 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1
# 350 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 351 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 352 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1
# 353 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2
# 354 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 355 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2
# 360 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 361 "data/maps/MansionsGarden/scripts.pory"
	delay 10
# 362 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3
# 363 "data/maps/MansionsGarden/scripts.pory"
	delay 16
# 364 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4
# 365 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 366 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5
# 367 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 368 "data/maps/MansionsGarden/scripts.pory"
	special RemoveCameraObject
# 369 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 370 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3
# 371 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 372 "data/maps/MansionsGarden/scripts.pory"
	setrespawn HEAL_LOCATION_MANSIONS_GARDEN
# 373 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 374 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 375 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 376 "data/maps/MansionsGarden/scripts.pory"
	fwdtime 23, 15
# 377 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Indeedee::
# 382 "data/maps/MansionsGarden/scripts.pory"
	lock
# 383 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 384 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 385 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 386 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_TrainingHouse_Sign::
# 391 "data/maps/MansionsGarden/scripts.pory"
	lock
# 392 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0
# 393 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 394 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_GuestHouse_Sign::
# 399 "data/maps/MansionsGarden/scripts.pory"
	lock
# 400 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GuestHouse_Sign_Text_0
# 401 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 402 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_WaiterKouhei::
# 407 "data/maps/MansionsGarden/scripts.pory"
	lock
# 408 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 409 "data/maps/MansionsGarden/scripts.pory"
	setspeaker MansionsGarden_Eventscript_WaiterKouhei_Text_0
# 410 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt MansionsGarden_Eventscript_WaiterKouhei_2
MansionsGarden_Eventscript_WaiterKouhei_1:
# 415 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_WaiterKouhei_2:
# 411 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_WaiterKouhei_Text_1
# 413 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_WaiterKouhei_1


MansionsGarden_Eventscript_Furfrou::
# 420 "data/maps/MansionsGarden/scripts.pory"
	lock
# 421 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 422 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 423 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 424 "data/maps/MansionsGarden/scripts.pory"
	startoverworldencounter 5
# 425 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_3
# 426 "data/maps/MansionsGarden/scripts.pory"
	removeobject FURFROU
# 427 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_MitsuruPrologueStart::
# 432 "data/maps/MansionsGarden/scripts.pory"
	hidefollower
# 433 "data/maps/MansionsGarden/scripts.pory"
	hidefollowernpc
# 434 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 435 "data/maps/MansionsGarden/scripts.pory"
	lock
# 436 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 437 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq MansionsGarden_Eventscript_MitsuruPrologueStart_1
# 446 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_1
# 462 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_2, MSGBOX_YESNO
# 463 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MansionsGarden_Eventscript_MitsuruPrologueStart_4
# 477 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 478 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 479 "data/maps/MansionsGarden/scripts.pory"
	applymovement 27, pointup3
# 480 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 481 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_4
# 482 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 483 "data/maps/MansionsGarden/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 484 "data/maps/MansionsGarden/scripts.pory"
	switchmaincharacter
# 485 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 0
# 486 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
# 487 "data/maps/MansionsGarden/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 488 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_LOCK_MITSURU
# 489 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_LOCK_AKIHIKO
# 490 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_LOCK_INTELEON_T
# 491 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
# 492 "data/maps/MansionsGarden/scripts.pory"
	destroyfollowernpc
# 493 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 494 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 495 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 496 "data/maps/MansionsGarden/scripts.pory"
	removeitem ITEM_EXP_SHARE
# 497 "data/maps/MansionsGarden/scripts.pory"
	removeitem ITEM_CAMP_GEARS
# 498 "data/maps/MansionsGarden/scripts.pory"
	removeitem ITEM_ESCAPE_ROPE
# 499 "data/maps/MansionsGarden/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 500 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 22, 30, 0
# 501 "data/maps/MansionsGarden/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, MITSURUS_PROLOGUE
# 502 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 0
# 503 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MANSIONS_GARDEN, 43, 27
# 504 "data/maps/MansionsGarden/scripts.pory"
	special DrawWholeMapView
# 505 "data/maps/MansionsGarden/scripts.pory"
	waitstate
	return

MansionsGarden_Eventscript_MitsuruPrologueStart_1:
# 438 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_0
# 440 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 441 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_MitsuruPrologueStart_4:
# 465 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_3
# 466 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 467 "data/maps/MansionsGarden/scripts.pory"
	playse SE_M_STAT_DECREASE
# 468 "data/maps/MansionsGarden/scripts.pory"
	applymovement 27, pointdown3
# 469 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 470 "data/maps/MansionsGarden/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 471 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_TEMP_0, 1
# 472 "data/maps/MansionsGarden/scripts.pory"
	release
	end


# 110 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0:
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 110 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 126 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0:
# 126 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 126 "data/maps/MansionsGarden/scripts.pory"
	walk_down
	step_end

# 129 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1:
# 129 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_left
# 129 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 129 "data/maps/MansionsGarden/scripts.pory"
	shake_vertical
# 129 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 129 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 129 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
	step_end

# 133 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2:
# 133 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 133 "data/maps/MansionsGarden/scripts.pory"
	jump_right
# 133 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 134 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3:
# 134 "data/maps/MansionsGarden/scripts.pory"
	walk_in_place_right
	step_end

# 139 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4:
# 139 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_right
# 139 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 139 "data/maps/MansionsGarden/scripts.pory"
	shake_horizontal
	step_end

# 142 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5:
# 142 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 142 "data/maps/MansionsGarden/scripts.pory"
	jump_up
# 142 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 152 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6:
# 152 "data/maps/MansionsGarden/scripts.pory"
	emote_sad
	step_end

# 158 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7:
# 158 "data/maps/MansionsGarden/scripts.pory"
	emote_exclamation_mark
# 158 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 162 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8:
# 162 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
	step_end

# 172 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9:
# 172 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 172 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 173 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10:
# 173 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
# 173 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_up
	step_end

# 193 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_0:
# 193 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 193 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 193 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 193 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 208 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_1:
# 208 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
# 208 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 208 "data/maps/MansionsGarden/scripts.pory"
	face_left
# 208 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 208 "data/maps/MansionsGarden/scripts.pory"
	face_down
# 208 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 208 "data/maps/MansionsGarden/scripts.pory"
	face_right
# 208 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 208 "data/maps/MansionsGarden/scripts.pory"
	face_up
# 208 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 208 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
# 208 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
	step_end

# 263 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_Fennekin_Movement_0:
# 263 "data/maps/MansionsGarden/scripts.pory"
	emote_question_mark
	step_end

# 279 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_GetShinyFennekin_Movement_0:
# 279 "data/maps/MansionsGarden/scripts.pory"
	enter_pokeball
# 279 "data/maps/MansionsGarden/scripts.pory"
	set_invisible
	step_end

# 321 "data/maps/MansionsGarden/scripts.pory"
MustGetFennekin_Movement_0:
# 321 "data/maps/MansionsGarden/scripts.pory"
	walk_left
# 321 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 345 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0:
# 345 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 345 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 345 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 352 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1:
# 352 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 352 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 353 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2:
# 353 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 353 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 353 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 353 "data/maps/MansionsGarden/scripts.pory"
	face_left
	step_end

# 362 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3:
# 362 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 362 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 362 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 364 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4:
# 364 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 364 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 366 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5:
# 366 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
# 366 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
	step_end

MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0:
# 112 "data/maps/MansionsGarden/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{CLEAR_TO 64}{COLOR GREEN}Level cap: 10$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_0:
# 136 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Indeedee, Round!$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_1:
# 154 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Damn it. This one is so slippery.$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_2:
# 168 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Young Lady! Be careful!$"

MansionsGarden_Eventscript_VSFennekin_Text_0:
# 191 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks satisfied after\n"
	.string "spending all of its energy in battle.$"

MansionsGarden_Eventscript_VSFennekin_Text_1:
# 202 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Phew. Thanks to you, this Fennekin\n"
	.string "finally calmed down.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Where did it come from? We don't\n"
	.string "normally see Fennekin around here.\p"
	.string "{SPEAKER NAME_KKN}{DESTROY_MUGSHOT}It managed to sneak up into the east\n"
	.string "hall and made a mess of the place.$"

MansionsGarden_Eventscript_VSFennekin_Text_2:
# 216 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Looks like it wants to go with you?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Good timing. I do want a fire type in my\n"
	.string "team.$"

MansionsGarden_Eventscript_Kikuno_Text_0:
# 228 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Go on, Young Lady. It'll be a great\n"
	.string "teammate on your journey.$"

MansionsGarden_Eventscript_Kikuno_Text_1:
# 232 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Please stay safe, Young Lady.$"

MansionsGarden_Eventscript_Fennekin_Text_0:
# 243 "data/maps/MansionsGarden/scripts.pory"
	.string "Touch Fennekin with the Pokéball?$"

MansionsGarden_Eventscript_Fennekin_Text_1:
# 246 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(Now that I get a closer look at it...\p"
	.string "It seems like there are sparkles around\n"
	.string "this Fennekin?)$"

MansionsGarden_Eventscript_Fennekin_Text_2:
# 254 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(Oh, it's just dust.)$"

MansionsGarden_Eventscript_Fennekin_Text_3:
# 265 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks confused, but it's still\n"
	.string "waiting for you.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_0:
# 277 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin happily went into the\n"
	.string "Pokéball.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_1:
# 291 "data/maps/MansionsGarden/scripts.pory"
	.string "Party full.$"

MustGetFennekin_Text_0:
# 323 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(I should let Fennekin join the team.\n"
	.string "It'll be a great help for my mission.)$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0:
# 335 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}I guess no one managed to stop you at\n"
	.string "all.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Kikuno...\p"
	.string "{SPEAKER NAME_KKN}{DESTROY_MUGSHOT}Young Lady, how about I join you on\n"
	.string "your mission?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}You know I won't agree to that.\p"
	.string "It's too dangerous and I can't\n"
	.string "guarantee your safety.\p"
	.string "{SPEAKER NAME_KKN}{DESTROY_MUGSHOT}Hahaha, it's funny how you say the\n"
	.string "exact same thing as everyone who tried\l"
	.string "to stop you.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1:
# 347 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}I guess this is goodbye then.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Yes... Please take care, Kikuno.\p"
	.string "{SPEAKER NAME_KKN}{DESTROY_MUGSHOT}You too, Young Lady.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2:
# 355 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Oh right.\p"
	.string "I'm not sure if you have heard, but in\n"
	.string "case you need some healing, Nurse Sawa\l"
	.string "has returned from her maternity leave.\p"
	.string "She should be at the Training House.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I see. Thank you for informing me.\p"
	.string "{SPEAKER NAME_KKN}{DESTROY_MUGSHOT}My pleasure.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3:
# 370 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(I should get going now.)$"

MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0:
# 392 "data/maps/MansionsGarden/scripts.pory"
	.string "Training House$"

MansionsGarden_Eventscript_GuestHouse_Sign_Text_0:
# 400 "data/maps/MansionsGarden/scripts.pory"
	.string "Guest & Staff House$"

MansionsGarden_Eventscript_WaiterKouhei_Text_0:
# 409 "data/maps/MansionsGarden/scripts.pory"
	.string "Kouhei$"

MansionsGarden_Eventscript_WaiterKouhei_Text_1:
# 411 "data/maps/MansionsGarden/scripts.pory"
	.string "It's my shift to stand guard tonight,\n"
	.string "Young Lady.\p"
	.string "I will make sure no wild Pokémon disrupt\n"
	.string "our staff's goodnight sleep.$"

MansionsGarden_Eventscript_MitsuruPrologueStart_Text_0:
# 438 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}.......{PAUSE 60} Could we talk later? I still want to\n"
	.string "stay here alone for a while.$"

MansionsGarden_Eventscript_MitsuruPrologueStart_Text_1:
# 446 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}So... This is your uh... house? Mansion?\n"
	.string "Land??\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}To be more exact, it's my family's\n"
	.string "mansion.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Woah.............\p"
	.string "Why aren't you going in, by the way? The\n"
	.string "gate's locked and no one's home?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}There's always somebody home. Although\n"
	.string "my Father may have been at the company\l"
	.string "in Paulownia City at the moment.\p"
	.string "I'm not going in because...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Well, you may call it “resolve”, I\n"
	.string "suppose?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I've made a promise to myself to never\n"
	.string "waver until my mission is completed.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Oh, I get it. It's like visiting home\n"
	.string "would make you reluctant to travel far\l"
	.string "from home again.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}Although in my case, it'd strenghten my\n"
	.string "resolve further.\p"
	.string "'Cause you know, I want my life before\n"
	.string "the explosion back.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}But enough about me, I actually want to\n"
	.string "ask you something.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}I'm all ears.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}How did you know about me and Shinji?{PAUSE_UNTIL_PRESS}\n"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}I mean, we're just 2 random orphan kids.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}..........$"

MansionsGarden_Eventscript_MitsuruPrologueStart_Text_2:
# 462 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}It's a long story. Do you still want to\n"
	.string "listen? {COLOR GREEN}(Begin Mitsuru's prologue\l"
	.string "quest?)$"

MansionsGarden_Eventscript_MitsuruPrologueStart_Text_3:
# 465 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}......... {PAUSE 60}Very well.$"

MansionsGarden_Eventscript_MitsuruPrologueStart_Text_4:
# 481 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Very well.$"
