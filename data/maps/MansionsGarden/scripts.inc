MansionsGarden_MapScripts::
# 2 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 52 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 12, 15, 0x311, FALSE
# 5 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 13, 15, 0x312, FALSE
# 6 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 14, 15, 0x313, FALSE
# 7 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 15, 15, 0x314, FALSE
# 9 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 12, 16, 0x319, TRUE
# 10 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 13, 16, 0x31A, TRUE
# 11 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 14, 16, 0x31B, TRUE
# 12 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 15, 16, 0x31C, TRUE
# 14 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 12, 17, 0x321, TRUE
# 15 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 13, 17, 0x322, TRUE
# 16 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 14, 17, 0x323, TRUE
# 17 "data/maps/MansionsGarden/scripts.pory"
	setmetatile 15, 17, 0x324, TRUE
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 21 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 0
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 28 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 3
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 35 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 43 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 48 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_gt MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 22 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 23 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
# 24 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 42, 20
# 25 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype KIKUNO, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 26 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 46, 22
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 29 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 30 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 37, 23
# 31 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype KIKUNO, MOVEMENT_TYPE_FACE_RIGHT
# 32 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 38, 23
# 33 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype INDEEDEE_F, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 36 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 38, 20
# 37 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype KIKUNO, MOVEMENT_TYPE_FACE_RIGHT
# 38 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 38, 21
# 39 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype INDEEDEE_F, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 40 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm FENNEKIN, 39, 21
# 41 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 44 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
# 45 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 44, 18
# 46 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 48, 20
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 49 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 53 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, MansionsGarden_Eventscript_OnFrame0
# 54 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 3, MansionsGarden_Eventscript_OnFrame3
# 55 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 5, MansionsGarden_Eventscript_OnFrame5
	.2byte 0


EventScript_NewGameSetUp::
# 60 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 100
# 61 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 100
# 62 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 100
# 63 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 64 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 66 "data/maps/MansionsGarden/scripts.pory"
	checkplayergender
# 67 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_NewGameSetUp_2
# 73 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
EventScript_NewGameSetUp_1:
# 76 "data/maps/MansionsGarden/scripts.pory"
	pausefakertc
	return

EventScript_NewGameSetUp_2:
# 69 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
	goto EventScript_NewGameSetUp_1


MansionsGarden_Eventscript_OnFrame0::
# 81 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 22, 30, 0
# 82 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 83 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 84 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SlowlyShowTheMap
	return


MansionsGarden_Eventscript_OnFrame3::
# 88 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 4
# 89 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_KikunoVSFennekin
	return


MansionsGarden_Eventscript_OnFrame5::
# 93 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SayingGoodbyeToKikuno
	return


MansionsGarden_Eventscript_SlowlyShowTheMap::
# 97 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 98 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 99 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0
# 100 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 101 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0
# 103 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 104 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 105 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 52
# 106 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MITSURUS_ROOM2F, 15, 10
	return


MansionsGarden_Eventscript_KikunoVSFennekin::
# 112 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 113 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 114 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 115 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 116 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 117 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 118 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1
# 119 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 120 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_BlockShakeCamera
# 121 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 122 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2
# 123 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3
# 124 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 125 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_0
# 126 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 127 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 128 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4
# 129 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 130 "data/maps/MansionsGarden/scripts.pory"
	playse SE_LEDGE
# 131 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5
# 132 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 133 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 134 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 135 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 136 "data/maps/MansionsGarden/scripts.pory"
	lock
# 137 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 138 "data/maps/MansionsGarden/scripts.pory"
	release
# 139 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 140 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 141 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6
# 142 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 143 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_1
# 144 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 145 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 146 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 147 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 148 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 149 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 150 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 151 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8
# 152 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 153 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, faceup
# 154 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 155 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 156 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 157 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_2
# 158 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 159 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 160 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 161 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 162 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10
# 163 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 164 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 165 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_CATCHING
# 166 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 167 "data/maps/MansionsGarden/scripts.pory"
	setwildbattle SPECIES_FENNEKIN, 5
# 168 "data/maps/MansionsGarden/scripts.pory"
	dowildbattle
# 169 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_VSFennekin
	return


MansionsGarden_Eventscript_VSFennekin::
# 173 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 174 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 175 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 176 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 177 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 178 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 179 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 180 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_0
# 181 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 182 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_VSFennekin_Movement_0
# 183 "data/maps/MansionsGarden/scripts.pory"
	delay 8
# 184 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 185 "data/maps/MansionsGarden/scripts.pory"
	waitmovement KIKUNO
# 186 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 187 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 188 "data/maps/MansionsGarden/scripts.pory"
	playse MUS_HEAL
# 189 "data/maps/MansionsGarden/scripts.pory"
	waitse
# 190 "data/maps/MansionsGarden/scripts.pory"
	special HealPlayerParty
# 191 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_1
# 194 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 195 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 196 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 197 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_VSFennekin_Movement_1
# 198 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, facedown
# 199 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 200 "data/maps/MansionsGarden/scripts.pory"
	waitmovement FENNEKIN
# 201 "data/maps/MansionsGarden/scripts.pory"
	lock
# 202 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 203 "data/maps/MansionsGarden/scripts.pory"
	release
# 204 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 205 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_2
# 207 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 208 "data/maps/MansionsGarden/scripts.pory"
	fwdtime 23, 0
	end


MansionsGarden_Eventscript_Kikuno::
# 213 "data/maps/MansionsGarden/scripts.pory"
	lock
# 214 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 215 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_Eventscript_Kikuno_2
# 220 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_1
# 221 "data/maps/MansionsGarden/scripts.pory"
	closemessage
MansionsGarden_Eventscript_Kikuno_1:
# 223 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Kikuno_2:
# 216 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_0
# 217 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_Kikuno_1


MansionsGarden_Eventscript_Fennekin::
# 228 "data/maps/MansionsGarden/scripts.pory"
	lock
# 229 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 230 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 231 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_0, MSGBOX_YESNO
# 232 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 233 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_1
# 250 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 251 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_Fennekin_Movement_0
# 252 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 253 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_3
# 254 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 255 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Fennekin_1:
# 234 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_1, MSGBOX_YESNO
# 236 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 237 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_5
# 242 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_2
# 243 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 244 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetNormalFennekin
MansionsGarden_Eventscript_Fennekin_4:
# 246 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 247 "data/maps/MansionsGarden/scripts.pory"
	release
	return

MansionsGarden_Eventscript_Fennekin_5:
# 239 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetShinyFennekin
	goto MansionsGarden_Eventscript_Fennekin_4


MansionsGarden_Eventscript_GetShinyFennekin::
# 261 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_ALWAYS
# 262 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_1
# 270 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_2
# 279 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetShinyFennekin_1:
# 263 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 264 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 265 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 266 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 267 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 268 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return

MansionsGarden_Eventscript_GetShinyFennekin_2:
# 271 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 273 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 274 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 275 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 276 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return


MansionsGarden_Eventscript_GetNormalFennekin::
# 282 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_NEVER
# 283 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_1
# 293 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_2
# 304 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetNormalFennekin_1:
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
# 290 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 291 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_Eventscript_GetNormalFennekin_2:
# 294 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 295 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 296 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 297 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 298 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 299 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 300 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 301 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return


MustGetFennekin::
# 308 "data/maps/MansionsGarden/scripts.pory"
	lock
# 309 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MustGetFennekin_Movement_0
# 310 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 311 "data/maps/MansionsGarden/scripts.pory"
	msgbox MustGetFennekin_Text_0
# 312 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 313 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_SayingGoodbyeToKikuno::
# 318 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 6
# 319 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 320 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, emotepensive
# 321 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 322 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 323 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0
# 329 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 330 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 331 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 332 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 333 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0
# 334 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 335 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1
# 338 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 339 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 340 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1
# 341 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2
# 342 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 343 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2
# 348 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 349 "data/maps/MansionsGarden/scripts.pory"
	delay 10
# 350 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3
# 351 "data/maps/MansionsGarden/scripts.pory"
	delay 16
# 352 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4
# 353 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 354 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5
# 355 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 356 "data/maps/MansionsGarden/scripts.pory"
	special RemoveCameraObject
# 357 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 358 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3
# 359 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 360 "data/maps/MansionsGarden/scripts.pory"
	setrespawn HEAL_LOCATION_MANSION_TRAINING_HOUSE
# 361 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 362 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 363 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 364 "data/maps/MansionsGarden/scripts.pory"
	fwdtime 23, 15
# 365 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Indeedee::
# 370 "data/maps/MansionsGarden/scripts.pory"
	lock
# 371 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 372 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 373 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 374 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_TrainingHouse_Sign::
# 379 "data/maps/MansionsGarden/scripts.pory"
	lock
# 380 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0
# 381 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 382 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_GuestHouse_Sign::
# 387 "data/maps/MansionsGarden/scripts.pory"
	lock
# 388 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GuestHouse_Sign_Text_0
# 389 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 390 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_WaiterKouhei::
# 395 "data/maps/MansionsGarden/scripts.pory"
	lock
# 396 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 397 "data/maps/MansionsGarden/scripts.pory"
	setspeaker MansionsGarden_Eventscript_WaiterKouhei_Text_0
# 398 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt MansionsGarden_Eventscript_WaiterKouhei_2
MansionsGarden_Eventscript_WaiterKouhei_1:
# 403 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_WaiterKouhei_2:
# 399 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_WaiterKouhei_Text_1
# 401 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_WaiterKouhei_1


MansionsGarden_Eventscript_Furfrou::
# 408 "data/maps/MansionsGarden/scripts.pory"
	lock
# 409 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 410 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 411 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 412 "data/maps/MansionsGarden/scripts.pory"
	startoverworldencounter 5
# 413 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_3
# 414 "data/maps/MansionsGarden/scripts.pory"
	removeobject FURFROU
# 415 "data/maps/MansionsGarden/scripts.pory"
	release
	end


# 99 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0:
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 99 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 115 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0:
# 115 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 115 "data/maps/MansionsGarden/scripts.pory"
	walk_down
	step_end

# 118 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1:
# 118 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_left
# 118 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 118 "data/maps/MansionsGarden/scripts.pory"
	shake_vertical
# 118 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 118 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 118 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
	step_end

# 122 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2:
# 122 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 122 "data/maps/MansionsGarden/scripts.pory"
	jump_right
# 122 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 123 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3:
# 123 "data/maps/MansionsGarden/scripts.pory"
	walk_in_place_right
	step_end

# 128 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4:
# 128 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_right
# 128 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 128 "data/maps/MansionsGarden/scripts.pory"
	shake_horizontal
	step_end

# 131 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5:
# 131 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 131 "data/maps/MansionsGarden/scripts.pory"
	jump_up
# 131 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 141 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6:
# 141 "data/maps/MansionsGarden/scripts.pory"
	emote_sad
	step_end

# 147 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7:
# 147 "data/maps/MansionsGarden/scripts.pory"
	emote_exclamation_mark
# 147 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 151 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8:
# 151 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
	step_end

# 161 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9:
# 161 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 161 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10:
# 162 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
# 162 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_up
	step_end

# 182 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_0:
# 182 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 182 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 182 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 182 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 197 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_1:
# 197 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
# 197 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 197 "data/maps/MansionsGarden/scripts.pory"
	face_left
# 197 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 197 "data/maps/MansionsGarden/scripts.pory"
	face_down
# 197 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 197 "data/maps/MansionsGarden/scripts.pory"
	face_right
# 197 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 197 "data/maps/MansionsGarden/scripts.pory"
	face_up
# 197 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 197 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
# 197 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
	step_end

# 251 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_Fennekin_Movement_0:
# 251 "data/maps/MansionsGarden/scripts.pory"
	emote_question_mark
	step_end

# 267 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_GetShinyFennekin_Movement_0:
# 267 "data/maps/MansionsGarden/scripts.pory"
	enter_pokeball
# 267 "data/maps/MansionsGarden/scripts.pory"
	set_invisible
	step_end

# 309 "data/maps/MansionsGarden/scripts.pory"
MustGetFennekin_Movement_0:
# 309 "data/maps/MansionsGarden/scripts.pory"
	walk_left
# 309 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 333 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0:
# 333 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 333 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 333 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 340 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1:
# 340 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 340 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 341 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2:
# 341 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 341 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 341 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 341 "data/maps/MansionsGarden/scripts.pory"
	face_left
	step_end

# 350 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3:
# 350 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 350 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 350 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 352 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4:
# 352 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 352 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 354 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5:
# 354 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
# 354 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
	step_end

MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0:
# 101 "data/maps/MansionsGarden/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{CLEAR_TO 64}{COLOR GREEN}Level cap: 10$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_0:
# 125 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Indeedee, Round!$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_1:
# 143 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Damn it. This one is so slippery.$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_2:
# 157 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Young Lady! Be careful!$"

MansionsGarden_Eventscript_VSFennekin_Text_0:
# 180 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks satisfied after\n"
	.string "spending all of its energy in battle.$"

MansionsGarden_Eventscript_VSFennekin_Text_1:
# 191 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Phew. Thanks to you, this Fennekin\n"
	.string "finally calmed down.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Where did it come from? We don't\n"
	.string "normally see Fennekin around here.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}It managed to sneak up into the east\n"
	.string "hall and made a mess of the place.$"

MansionsGarden_Eventscript_VSFennekin_Text_2:
# 205 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Looks like it wants to go with you?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good timing. I do want a fire type in my\n"
	.string "team.$"

MansionsGarden_Eventscript_Kikuno_Text_0:
# 216 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Go on, Young Lady. It'll be a great\n"
	.string "teammate on your journey.$"

MansionsGarden_Eventscript_Kikuno_Text_1:
# 220 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Please stay safe, Young Lady.$"

MansionsGarden_Eventscript_Fennekin_Text_0:
# 231 "data/maps/MansionsGarden/scripts.pory"
	.string "Touch Fennekin with the Pokéball?$"

MansionsGarden_Eventscript_Fennekin_Text_1:
# 234 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Now that I get a closer look at it...\p"
	.string "It seems like there are sparkles around\n"
	.string "this Fennekin?)$"

MansionsGarden_Eventscript_Fennekin_Text_2:
# 242 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Oh, it's just dust.)$"

MansionsGarden_Eventscript_Fennekin_Text_3:
# 253 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks confused, but it's still\n"
	.string "waiting for you.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_0:
# 265 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin happily went into the\n"
	.string "Pokéball.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_1:
# 279 "data/maps/MansionsGarden/scripts.pory"
	.string "Party full.$"

MustGetFennekin_Text_0:
# 311 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should let Fennekin join the team.\n"
	.string "It'll be a great help for my mission.)$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0:
# 323 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}I guess no one managed to stop you at\n"
	.string "all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Kikuno...\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}Young Lady, how about I join you on\n"
	.string "your mission?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You know I won't agree to that.\p"
	.string "It's too dangerous and I can't\n"
	.string "guarantee your safety.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}Hahaha, it's funny how you say the\n"
	.string "exact same thing as everyone who tried\l"
	.string "to stop you.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1:
# 335 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}I guess this is goodbye then.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes... Please take care, Kikuno.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}You too, Young Lady.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2:
# 343 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Oh right.\p"
	.string "I'm not sure if you have heard, but in\n"
	.string "case you need some healing, Nurse Sawa\l"
	.string "has returned from her maternity leave.\p"
	.string "She should be at the Training House.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you for informing me.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}My pleasure.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3:
# 358 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should get going now.)$"

MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0:
# 380 "data/maps/MansionsGarden/scripts.pory"
	.string "Training House$"

MansionsGarden_Eventscript_GuestHouse_Sign_Text_0:
# 388 "data/maps/MansionsGarden/scripts.pory"
	.string "Guest & Staff House$"

MansionsGarden_Eventscript_WaiterKouhei_Text_0:
# 397 "data/maps/MansionsGarden/scripts.pory"
	.string "Kouhei$"

MansionsGarden_Eventscript_WaiterKouhei_Text_1:
# 399 "data/maps/MansionsGarden/scripts.pory"
	.string "It's my shift to stand guard tonight,\n"
	.string "Young Lady.\p"
	.string "I will make sure no wild Pokémon disrupt\n"
	.string "our staff's goodnight sleep.$"
