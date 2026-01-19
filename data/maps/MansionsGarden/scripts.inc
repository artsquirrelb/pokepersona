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
# 70 "data/maps/MansionsGarden/scripts.pory"
	checkplayergender
# 71 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_NewGameSetUp_2
# 77 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
EventScript_NewGameSetUp_1:
# 79 "data/maps/MansionsGarden/scripts.pory"
	callnative ScrCmd_InitTimeBasedEvent
# 80 "data/maps/MansionsGarden/scripts.pory"
	pausefakertc
	return

EventScript_NewGameSetUp_2:
# 73 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
	goto EventScript_NewGameSetUp_1


MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko::
# 84 "data/maps/MansionsGarden/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 85 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_3
MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_1:
# 89 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_2:
# 86 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_TEMP_4
# 87 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
	goto MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_1

MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_3:
# 85 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_2
	goto MansionsGarden_CheckIfMitsuruPrologueIsDoneForAkihiko_1


MansionsGarden_Eventscript_OnFrame0::
# 93 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 22, 30, 0
# 94 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 95 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 96 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SlowlyShowTheMap
	return


MansionsGarden_Eventscript_OnFrame3::
# 100 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 4
# 101 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_KikunoVSFennekin
	return


MansionsGarden_Eventscript_OnFrame5::
# 105 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SayingGoodbyeToKikuno
	return


MansionsGarden_Eventscript_SlowlyShowTheMap::
# 109 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 110 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 111 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0
# 112 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 113 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0
# 115 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 116 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 117 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 52
# 118 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MITSURUS_ROOM2F, 15, 10
	return


MansionsGarden_Eventscript_KikunoVSFennekin::
# 124 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 125 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 126 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 127 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 128 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 129 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 130 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1
# 131 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 132 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_BlockShakeCamera
# 133 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 134 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2
# 135 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3
# 136 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 137 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_0
# 138 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 139 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 140 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4
# 141 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 142 "data/maps/MansionsGarden/scripts.pory"
	playse SE_LEDGE
# 143 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5
# 144 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 145 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 146 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 147 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 148 "data/maps/MansionsGarden/scripts.pory"
	lock
# 149 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 150 "data/maps/MansionsGarden/scripts.pory"
	release
# 151 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 152 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 153 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6
# 154 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 155 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_1
# 156 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 157 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 158 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 159 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 160 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 161 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 162 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 163 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8
# 164 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 165 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, faceup
# 166 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 167 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 168 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 169 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_2
# 170 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 171 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 172 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 173 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 174 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10
# 175 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 176 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 177 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_CATCHING
# 178 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 179 "data/maps/MansionsGarden/scripts.pory"
	setwildbattle SPECIES_FENNEKIN, 5
# 180 "data/maps/MansionsGarden/scripts.pory"
	dowildbattle
# 181 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_VSFennekin
	return


MansionsGarden_Eventscript_VSFennekin::
# 185 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 186 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 187 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 188 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 189 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 190 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 191 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 192 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_0
# 193 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 194 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_VSFennekin_Movement_0
# 195 "data/maps/MansionsGarden/scripts.pory"
	delay 8
# 196 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 197 "data/maps/MansionsGarden/scripts.pory"
	waitmovement KIKUNO
# 198 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 199 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 200 "data/maps/MansionsGarden/scripts.pory"
	playse MUS_HEAL
# 201 "data/maps/MansionsGarden/scripts.pory"
	waitse
# 202 "data/maps/MansionsGarden/scripts.pory"
	special HealPlayerParty
# 203 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_1
# 206 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 207 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 208 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 209 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_VSFennekin_Movement_1
# 210 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, facedown
# 211 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 212 "data/maps/MansionsGarden/scripts.pory"
	waitmovement FENNEKIN
# 213 "data/maps/MansionsGarden/scripts.pory"
	lock
# 214 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 215 "data/maps/MansionsGarden/scripts.pory"
	release
# 216 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 217 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_2
# 219 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 220 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 221 "data/maps/MansionsGarden/scripts.pory"
	fwdtime 23, 0
	end


MansionsGarden_Eventscript_Kikuno::
# 226 "data/maps/MansionsGarden/scripts.pory"
	lock
# 227 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 228 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_Eventscript_Kikuno_2
# 233 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_1
# 234 "data/maps/MansionsGarden/scripts.pory"
	closemessage
MansionsGarden_Eventscript_Kikuno_1:
# 236 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Kikuno_2:
# 229 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_0
# 230 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_Kikuno_1


MansionsGarden_Eventscript_Fennekin::
# 241 "data/maps/MansionsGarden/scripts.pory"
	lock
# 242 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 243 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 244 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_0, MSGBOX_YESNO
# 245 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 246 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_1
# 263 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 264 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_Fennekin_Movement_0
# 265 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 266 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_3
# 267 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 268 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Fennekin_1:
# 247 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_1, MSGBOX_YESNO
# 249 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 250 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_5
# 255 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_2
# 256 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 257 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetNormalFennekin
MansionsGarden_Eventscript_Fennekin_4:
# 259 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 260 "data/maps/MansionsGarden/scripts.pory"
	release
	return

MansionsGarden_Eventscript_Fennekin_5:
# 252 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetShinyFennekin
	goto MansionsGarden_Eventscript_Fennekin_4


MansionsGarden_Eventscript_GetShinyFennekin::
# 274 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CALM_MIND, shinyMode = SHINY_MODE_ALWAYS
# 275 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_1
# 283 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_2
# 292 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetShinyFennekin_1:
# 276 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 277 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 278 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 279 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 280 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 281 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return

MansionsGarden_Eventscript_GetShinyFennekin_2:
# 284 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 285 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 286 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 287 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 288 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 289 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return


MansionsGarden_Eventscript_GetNormalFennekin::
# 295 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CALM_MIND, shinyMode = SHINY_MODE_NEVER
# 296 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_1
# 306 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_2
# 317 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetNormalFennekin_1:
# 297 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 298 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 299 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 300 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 301 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 302 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 303 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 304 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_Eventscript_GetNormalFennekin_2:
# 307 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 308 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 309 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 310 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 311 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 312 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 313 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 314 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return


MustGetFennekin::
# 321 "data/maps/MansionsGarden/scripts.pory"
	lock
# 322 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MustGetFennekin_Movement_0
# 323 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 324 "data/maps/MansionsGarden/scripts.pory"
	msgbox MustGetFennekin_Text_0
# 325 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 326 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_SayingGoodbyeToKikuno::
# 331 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 6
# 332 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 333 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, emotepensive
# 334 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 335 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 336 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0
# 342 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 343 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 344 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 345 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 346 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0
# 347 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 348 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1
# 351 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 352 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 353 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1
# 354 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2
# 355 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 356 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2
# 361 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 362 "data/maps/MansionsGarden/scripts.pory"
	delay 10
# 363 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3
# 364 "data/maps/MansionsGarden/scripts.pory"
	delay 16
# 365 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4
# 366 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 367 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5
# 368 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 369 "data/maps/MansionsGarden/scripts.pory"
	special RemoveCameraObject
# 370 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 371 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3
# 372 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 373 "data/maps/MansionsGarden/scripts.pory"
	setrespawn HEAL_LOCATION_MANSIONS_GARDEN
# 374 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 375 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 376 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 377 "data/maps/MansionsGarden/scripts.pory"
	fwdtime 23, 15
# 378 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Indeedee::
# 383 "data/maps/MansionsGarden/scripts.pory"
	lock
# 384 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 385 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 386 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 387 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_TrainingHouse_Sign::
# 392 "data/maps/MansionsGarden/scripts.pory"
	lock
# 393 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0
# 394 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 395 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_GuestHouse_Sign::
# 400 "data/maps/MansionsGarden/scripts.pory"
	lock
# 401 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GuestHouse_Sign_Text_0
# 402 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 403 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_WaiterKouhei::
# 408 "data/maps/MansionsGarden/scripts.pory"
	lock
# 409 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 410 "data/maps/MansionsGarden/scripts.pory"
	setspeaker MansionsGarden_Eventscript_WaiterKouhei_Text_0
# 411 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt MansionsGarden_Eventscript_WaiterKouhei_2
MansionsGarden_Eventscript_WaiterKouhei_1:
# 416 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_WaiterKouhei_2:
# 412 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_WaiterKouhei_Text_1
# 414 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_WaiterKouhei_1


MansionsGarden_Eventscript_Furfrou::
# 421 "data/maps/MansionsGarden/scripts.pory"
	lock
# 422 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 423 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 424 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 425 "data/maps/MansionsGarden/scripts.pory"
	startoverworldencounter 5
# 426 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_3
# 427 "data/maps/MansionsGarden/scripts.pory"
	removeobject FURFROU
# 428 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_MitsuruPrologueStart::
# 433 "data/maps/MansionsGarden/scripts.pory"
	hidefollower
# 434 "data/maps/MansionsGarden/scripts.pory"
	hidefollowernpc
# 435 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 436 "data/maps/MansionsGarden/scripts.pory"
	lock
# 437 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 438 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq MansionsGarden_Eventscript_MitsuruPrologueStart_1
# 447 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_1
# 463 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_2, MSGBOX_YESNO
# 464 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MansionsGarden_Eventscript_MitsuruPrologueStart_4
# 478 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 479 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 480 "data/maps/MansionsGarden/scripts.pory"
	applymovement 27, pointup3
# 481 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 482 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_4
# 483 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 484 "data/maps/MansionsGarden/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 485 "data/maps/MansionsGarden/scripts.pory"
	switchmaincharacter
# 486 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 0
# 487 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
# 488 "data/maps/MansionsGarden/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 489 "data/maps/MansionsGarden/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 490 "data/maps/MansionsGarden/scripts.pory"
	makecharaUnavailable CHARACTER_AKIHIKO
# 491 "data/maps/MansionsGarden/scripts.pory"
	makecharaUnavailable CHARACTER_INTELEON_T
# 492 "data/maps/MansionsGarden/scripts.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
# 493 "data/maps/MansionsGarden/scripts.pory"
	destroyfollowernpc
# 494 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 495 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 496 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 497 "data/maps/MansionsGarden/scripts.pory"
	removeitem ITEM_EXP_SHARE
# 498 "data/maps/MansionsGarden/scripts.pory"
	removeitem ITEM_CAMP_GEARS
# 499 "data/maps/MansionsGarden/scripts.pory"
	removeitem ITEM_ESCAPE_ROPE
# 500 "data/maps/MansionsGarden/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 501 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 22, 30, 0
# 502 "data/maps/MansionsGarden/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, MITSURUS_PROLOGUE
# 503 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 0
# 504 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MANSIONS_GARDEN, 43, 27
# 505 "data/maps/MansionsGarden/scripts.pory"
	special DrawWholeMapView
# 506 "data/maps/MansionsGarden/scripts.pory"
	waitstate
	return

MansionsGarden_Eventscript_MitsuruPrologueStart_1:
# 439 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_0
# 441 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 442 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_MitsuruPrologueStart_4:
# 466 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_MitsuruPrologueStart_Text_3
# 467 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 468 "data/maps/MansionsGarden/scripts.pory"
	playse SE_M_STAT_DECREASE
# 469 "data/maps/MansionsGarden/scripts.pory"
	applymovement 27, pointdown3
# 470 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 471 "data/maps/MansionsGarden/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 472 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_TEMP_0, 1
# 473 "data/maps/MansionsGarden/scripts.pory"
	release
	end


# 111 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0:
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 127 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0:
# 127 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 127 "data/maps/MansionsGarden/scripts.pory"
	walk_down
	step_end

# 130 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1:
# 130 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_left
# 130 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 130 "data/maps/MansionsGarden/scripts.pory"
	shake_vertical
# 130 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 130 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 130 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
	step_end

# 134 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2:
# 134 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 134 "data/maps/MansionsGarden/scripts.pory"
	jump_right
# 134 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 135 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3:
# 135 "data/maps/MansionsGarden/scripts.pory"
	walk_in_place_right
	step_end

# 140 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4:
# 140 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_right
# 140 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 140 "data/maps/MansionsGarden/scripts.pory"
	shake_horizontal
	step_end

# 143 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5:
# 143 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 143 "data/maps/MansionsGarden/scripts.pory"
	jump_up
# 143 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 153 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6:
# 153 "data/maps/MansionsGarden/scripts.pory"
	emote_sad
	step_end

# 159 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7:
# 159 "data/maps/MansionsGarden/scripts.pory"
	emote_exclamation_mark
# 159 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 163 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8:
# 163 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
	step_end

# 173 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9:
# 173 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 173 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 174 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10:
# 174 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
# 174 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_up
	step_end

# 194 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_0:
# 194 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 194 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 194 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 194 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 209 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_1:
# 209 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
# 209 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 209 "data/maps/MansionsGarden/scripts.pory"
	face_left
# 209 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 209 "data/maps/MansionsGarden/scripts.pory"
	face_down
# 209 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 209 "data/maps/MansionsGarden/scripts.pory"
	face_right
# 209 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 209 "data/maps/MansionsGarden/scripts.pory"
	face_up
# 209 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 209 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
# 209 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
	step_end

# 264 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_Fennekin_Movement_0:
# 264 "data/maps/MansionsGarden/scripts.pory"
	emote_question_mark
	step_end

# 280 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_GetShinyFennekin_Movement_0:
# 280 "data/maps/MansionsGarden/scripts.pory"
	enter_pokeball
# 280 "data/maps/MansionsGarden/scripts.pory"
	set_invisible
	step_end

# 322 "data/maps/MansionsGarden/scripts.pory"
MustGetFennekin_Movement_0:
# 322 "data/maps/MansionsGarden/scripts.pory"
	walk_left
# 322 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 346 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0:
# 346 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 346 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 346 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 353 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1:
# 353 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 353 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 354 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2:
# 354 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 354 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 354 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 354 "data/maps/MansionsGarden/scripts.pory"
	face_left
	step_end

# 363 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3:
# 363 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 363 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 363 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 365 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4:
# 365 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 365 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 367 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5:
# 367 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
# 367 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
	step_end

MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0:
# 113 "data/maps/MansionsGarden/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{CLEAR_TO 64}{COLOR GREEN}Level cap: 10$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_0:
# 137 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Indeedee, Round!$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_1:
# 155 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Damn it. This one is so slippery.$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_2:
# 169 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Young Lady! Be careful!$"

MansionsGarden_Eventscript_VSFennekin_Text_0:
# 192 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks satisfied after\n"
	.string "spending all of its energy in battle.$"

MansionsGarden_Eventscript_VSFennekin_Text_1:
# 203 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Phew. Thanks to you, this Fennekin\n"
	.string "finally calmed down.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Where did it come from? We don't\n"
	.string "normally see Fennekin around here.\p"
	.string "{SPEAKER NAME_KKN}{DESTROY_MUGSHOT}It managed to sneak up into the east\n"
	.string "hall and made a mess of the place.$"

MansionsGarden_Eventscript_VSFennekin_Text_2:
# 217 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Looks like it wants to go with you?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Good timing. I do want a fire type in my\n"
	.string "team.$"

MansionsGarden_Eventscript_Kikuno_Text_0:
# 229 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Go on, Young Lady. It'll be a great\n"
	.string "teammate on your journey.$"

MansionsGarden_Eventscript_Kikuno_Text_1:
# 233 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Please stay safe, Young Lady.$"

MansionsGarden_Eventscript_Fennekin_Text_0:
# 244 "data/maps/MansionsGarden/scripts.pory"
	.string "Touch Fennekin with the Pokéball?$"

MansionsGarden_Eventscript_Fennekin_Text_1:
# 247 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(Now that I get a closer look at it...\p"
	.string "It seems like there are sparkles around\n"
	.string "this Fennekin?)$"

MansionsGarden_Eventscript_Fennekin_Text_2:
# 255 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(Oh, it's just dust.)$"

MansionsGarden_Eventscript_Fennekin_Text_3:
# 266 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks confused, but it's still\n"
	.string "waiting for you.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_0:
# 278 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin happily went into the\n"
	.string "Pokéball.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_1:
# 292 "data/maps/MansionsGarden/scripts.pory"
	.string "Party full.$"

MustGetFennekin_Text_0:
# 324 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(I should let Fennekin join the team.\n"
	.string "It'll be a great help for my mission.)$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0:
# 336 "data/maps/MansionsGarden/scripts.pory"
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
# 348 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}I guess this is goodbye then.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Yes... Please take care, Kikuno.\p"
	.string "{SPEAKER NAME_KKN}{DESTROY_MUGSHOT}You too, Young Lady.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2:
# 356 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KKN}Oh right.\p"
	.string "I'm not sure if you have heard, but in\n"
	.string "case you need some healing, Nurse Sawa\l"
	.string "has returned from her maternity leave.\p"
	.string "She should be at the Training House.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I see. Thank you for informing me.\p"
	.string "{SPEAKER NAME_KKN}{DESTROY_MUGSHOT}My pleasure.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3:
# 371 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(I should get going now.)$"

MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0:
# 393 "data/maps/MansionsGarden/scripts.pory"
	.string "Training House$"

MansionsGarden_Eventscript_GuestHouse_Sign_Text_0:
# 401 "data/maps/MansionsGarden/scripts.pory"
	.string "Guest & Staff House$"

MansionsGarden_Eventscript_WaiterKouhei_Text_0:
# 410 "data/maps/MansionsGarden/scripts.pory"
	.string "Kouhei$"

MansionsGarden_Eventscript_WaiterKouhei_Text_1:
# 412 "data/maps/MansionsGarden/scripts.pory"
	.string "It's my shift to stand guard tonight,\n"
	.string "Young Lady.\p"
	.string "I will make sure no wild Pokémon disrupt\n"
	.string "our staff's goodnight sleep.$"

MansionsGarden_Eventscript_MitsuruPrologueStart_Text_0:
# 439 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}.......{PAUSE 60} Could we talk later? I still want to\n"
	.string "stay here alone for a while.$"

MansionsGarden_Eventscript_MitsuruPrologueStart_Text_1:
# 447 "data/maps/MansionsGarden/scripts.pory"
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
# 463 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}It's a long story. Do you still want to\n"
	.string "listen? {COLOR GREEN}(Begin Mitsuru's prologue\l"
	.string "quest?)$"

MansionsGarden_Eventscript_MitsuruPrologueStart_Text_3:
# 466 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SAD}......... {PAUSE 60}Very well.$"

MansionsGarden_Eventscript_MitsuruPrologueStart_Text_4:
# 482 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Very well.$"
