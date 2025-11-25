MansionsGarden_MapScripts::
# 2 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MansionsGarden_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 44 "data/maps/MansionsGarden/scripts.pory"
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
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 40 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_gt MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
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
	setflag FLAG_TEMP_2
# 37 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 44, 18
# 38 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 48, 20
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 41 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 45 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, MansionsGarden_Eventscript_OnFrame0
# 46 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 3, MansionsGarden_Eventscript_OnFrame3
# 47 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 5, MansionsGarden_Eventscript_OnFrame5
	.2byte 0


EventScript_NewGameSetUp::
# 52 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 100
# 53 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 100
# 54 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 100
# 55 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 56 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 59 "data/maps/MansionsGarden/scripts.pory"
	checkplayergender
# 60 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_NewGameSetUp_2
# 65 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_THU, 22, 30, 0
# 66 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
EventScript_NewGameSetUp_1:
# 68 "data/maps/MansionsGarden/scripts.pory"
	pausefakertc
	return

EventScript_NewGameSetUp_2:
# 61 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30, 0
# 62 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
	goto EventScript_NewGameSetUp_1


MansionsGarden_Eventscript_OnFrame0::
# 73 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SlowlyShowTheMap
	return


MansionsGarden_Eventscript_OnFrame3::
# 77 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 4
# 78 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_KikunoVSFennekin
	return


MansionsGarden_Eventscript_OnFrame5::
# 82 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SayingGoodbyeToKikuno
	return


MansionsGarden_Eventscript_SlowlyShowTheMap::
# 86 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 87 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 88 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0
# 89 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 90 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0
# 92 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 93 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 94 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_EV_CAP, 52
# 95 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MITSURUS_ROOM2F, 15, 10
	return


MansionsGarden_Eventscript_KikunoVSFennekin::
# 101 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 102 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 103 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 104 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 105 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 106 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1
# 107 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 108 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_BlockShakeCamera
# 109 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 110 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2
# 111 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3
# 112 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 113 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_0
# 114 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 115 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 116 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4
# 117 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 118 "data/maps/MansionsGarden/scripts.pory"
	playse SE_LEDGE
# 119 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5
# 120 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 121 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 122 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 123 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 124 "data/maps/MansionsGarden/scripts.pory"
	lock
# 125 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 126 "data/maps/MansionsGarden/scripts.pory"
	release
# 127 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 128 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 129 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6
# 130 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 131 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_1
# 132 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 133 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 134 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 135 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 136 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 137 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 138 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 139 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8
# 140 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 141 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, faceup
# 142 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 143 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 144 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 145 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_2
# 146 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 147 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 148 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 149 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 150 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10
# 151 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 152 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 153 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_CATCHING
# 154 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 155 "data/maps/MansionsGarden/scripts.pory"
	setwildbattle SPECIES_FENNEKIN, 5
# 156 "data/maps/MansionsGarden/scripts.pory"
	dowildbattle
# 157 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_VSFennekin
	return


MansionsGarden_Eventscript_VSFennekin::
# 161 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 162 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 163 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 164 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 165 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 166 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 167 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 168 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_0
# 169 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 170 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_VSFennekin_Movement_0
# 171 "data/maps/MansionsGarden/scripts.pory"
	delay 8
# 172 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 173 "data/maps/MansionsGarden/scripts.pory"
	waitmovement KIKUNO
# 174 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 175 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 176 "data/maps/MansionsGarden/scripts.pory"
	playse MUS_HEAL
# 177 "data/maps/MansionsGarden/scripts.pory"
	waitse
# 178 "data/maps/MansionsGarden/scripts.pory"
	special HealPlayerParty
# 179 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_1
# 182 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 183 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 184 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 185 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_VSFennekin_Movement_1
# 186 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, facedown
# 187 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 188 "data/maps/MansionsGarden/scripts.pory"
	waitmovement FENNEKIN
# 189 "data/maps/MansionsGarden/scripts.pory"
	lock
# 190 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 191 "data/maps/MansionsGarden/scripts.pory"
	release
# 192 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 193 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_2
# 195 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 196 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


MansionsGarden_Eventscript_Kikuno::
# 201 "data/maps/MansionsGarden/scripts.pory"
	lock
# 202 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 203 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_Eventscript_Kikuno_2
# 208 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_1
# 209 "data/maps/MansionsGarden/scripts.pory"
	closemessage
MansionsGarden_Eventscript_Kikuno_1:
# 211 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Kikuno_2:
# 204 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_0
# 205 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_Kikuno_1


MansionsGarden_Eventscript_Fennekin::
# 216 "data/maps/MansionsGarden/scripts.pory"
	lock
# 217 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 218 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 219 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_0, MSGBOX_YESNO
# 220 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 221 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_1
# 239 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 240 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_Fennekin_Movement_0
# 241 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 242 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_3
# 243 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 244 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return

MansionsGarden_Eventscript_Fennekin_1:
# 222 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_1, MSGBOX_YESNO
# 224 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 225 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_5
# 230 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_2
# 231 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 232 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetNormalFennekin
MansionsGarden_Eventscript_Fennekin_4:
# 234 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 235 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Fennekin_5:
# 227 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetShinyFennekin
	goto MansionsGarden_Eventscript_Fennekin_4


MansionsGarden_Eventscript_GetShinyFennekin::
# 249 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_ALWAYS
# 250 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_1
# 258 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_2
# 267 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetShinyFennekin_1:
# 251 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 252 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 253 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 254 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 255 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 256 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return

MansionsGarden_Eventscript_GetShinyFennekin_2:
# 259 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 260 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 261 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 262 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 263 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 264 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return


MansionsGarden_Eventscript_GetNormalFennekin::
# 270 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_NEVER
# 271 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_1
# 281 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_2
# 292 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetNormalFennekin_1:
# 272 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 273 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 274 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 275 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 276 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 277 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 278 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 279 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_Eventscript_GetNormalFennekin_2:
# 282 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 283 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 284 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 285 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 286 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 287 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 288 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 289 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return


MustGetFennekin::
# 296 "data/maps/MansionsGarden/scripts.pory"
	lock
# 297 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MustGetFennekin_Movement_0
# 298 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 299 "data/maps/MansionsGarden/scripts.pory"
	msgbox MustGetFennekin_Text_0
# 300 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 301 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_SayingGoodbyeToKikuno::
# 306 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 6
# 307 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 308 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, emotepensive
# 309 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 310 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 311 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0
# 317 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 318 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 319 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 320 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 321 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0
# 322 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 323 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1
# 326 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 327 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 328 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1
# 329 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2
# 330 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 331 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2
# 336 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 337 "data/maps/MansionsGarden/scripts.pory"
	delay 10
# 338 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3
# 339 "data/maps/MansionsGarden/scripts.pory"
	delay 16
# 340 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4
# 341 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 342 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5
# 343 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 344 "data/maps/MansionsGarden/scripts.pory"
	special RemoveCameraObject
# 345 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 346 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3
# 347 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 348 "data/maps/MansionsGarden/scripts.pory"
	setrespawn HEAL_LOCATION_MANSION_TRAINING_HOUSE
# 349 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 350 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 351 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 352 "data/maps/MansionsGarden/scripts.pory"
	fwdtime 22, 45
# 353 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Indeedee::
# 358 "data/maps/MansionsGarden/scripts.pory"
	lock
# 359 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 360 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 361 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 362 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_TrainingHouse_Sign::
# 367 "data/maps/MansionsGarden/scripts.pory"
	lock
# 368 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0
# 369 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 370 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_GuestHouse_Sign::
# 375 "data/maps/MansionsGarden/scripts.pory"
	lock
# 376 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GuestHouse_Sign_Text_0
# 377 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 378 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_WaiterKouhei::
# 383 "data/maps/MansionsGarden/scripts.pory"
	lock
# 384 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 385 "data/maps/MansionsGarden/scripts.pory"
	setspeaker MansionsGarden_Eventscript_WaiterKouhei_Text_0
# 386 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt MansionsGarden_Eventscript_WaiterKouhei_2
MansionsGarden_Eventscript_WaiterKouhei_1:
# 391 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_WaiterKouhei_2:
# 387 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_WaiterKouhei_Text_1
# 389 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_WaiterKouhei_1


MansionsGarden_Eventscript_Furfrou::
# 396 "data/maps/MansionsGarden/scripts.pory"
	lock
# 397 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 398 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 399 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 400 "data/maps/MansionsGarden/scripts.pory"
	startoverworldencounter 5
# 401 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_3
# 402 "data/maps/MansionsGarden/scripts.pory"
	removeobject FURFROU
# 403 "data/maps/MansionsGarden/scripts.pory"
	release
	end


# 88 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0:
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 88 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 103 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0:
# 103 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 103 "data/maps/MansionsGarden/scripts.pory"
	walk_down
	step_end

# 106 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1:
# 106 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_left
# 106 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 106 "data/maps/MansionsGarden/scripts.pory"
	shake_vertical
# 106 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 106 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 106 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
	step_end

# 110 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2:
# 110 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 110 "data/maps/MansionsGarden/scripts.pory"
	jump_right
# 110 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 111 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3:
# 111 "data/maps/MansionsGarden/scripts.pory"
	walk_in_place_right
	step_end

# 116 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4:
# 116 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_right
# 116 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 116 "data/maps/MansionsGarden/scripts.pory"
	shake_horizontal
	step_end

# 119 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5:
# 119 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 119 "data/maps/MansionsGarden/scripts.pory"
	jump_up
# 119 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 129 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6:
# 129 "data/maps/MansionsGarden/scripts.pory"
	emote_sad
	step_end

# 135 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7:
# 135 "data/maps/MansionsGarden/scripts.pory"
	emote_exclamation_mark
# 135 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 139 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8:
# 139 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
	step_end

# 149 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9:
# 149 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 149 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10:
# 150 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
# 150 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_up
	step_end

# 170 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_0:
# 170 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 170 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 170 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 170 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 185 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_1:
# 185 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
# 185 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 185 "data/maps/MansionsGarden/scripts.pory"
	face_left
# 185 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 185 "data/maps/MansionsGarden/scripts.pory"
	face_down
# 185 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 185 "data/maps/MansionsGarden/scripts.pory"
	face_right
# 185 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 185 "data/maps/MansionsGarden/scripts.pory"
	face_up
# 185 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 185 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
# 185 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
	step_end

# 240 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_Fennekin_Movement_0:
# 240 "data/maps/MansionsGarden/scripts.pory"
	emote_question_mark
	step_end

# 255 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_GetShinyFennekin_Movement_0:
# 255 "data/maps/MansionsGarden/scripts.pory"
	enter_pokeball
# 255 "data/maps/MansionsGarden/scripts.pory"
	set_invisible
	step_end

# 297 "data/maps/MansionsGarden/scripts.pory"
MustGetFennekin_Movement_0:
# 297 "data/maps/MansionsGarden/scripts.pory"
	walk_left
# 297 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 321 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0:
# 321 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 321 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 321 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 328 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1:
# 328 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 328 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 329 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2:
# 329 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 329 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 329 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 329 "data/maps/MansionsGarden/scripts.pory"
	face_left
	step_end

# 338 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3:
# 338 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 338 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 338 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 340 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4:
# 340 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 340 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 342 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5:
# 342 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
# 342 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
	step_end

MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0:
# 90 "data/maps/MansionsGarden/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{CLEAR_TO 64}{COLOR GREEN}Level cap: 10$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_0:
# 113 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Indeedee, Round!$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_1:
# 131 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Damn it. This one is so slippery.$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_2:
# 145 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Young Lady! Be careful!$"

MansionsGarden_Eventscript_VSFennekin_Text_0:
# 168 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks satisfied after\n"
	.string "spending all of its energy in battle.$"

MansionsGarden_Eventscript_VSFennekin_Text_1:
# 179 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Phew. Thanks to you, this Fennekin\n"
	.string "finally calmed down.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Where did it come from? We don't\n"
	.string "normally see Fennekin around here.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}It managed to sneak up into the east\n"
	.string "hall and made a mess of the place.$"

MansionsGarden_Eventscript_VSFennekin_Text_2:
# 193 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Looks like it wants to go with you?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good timing. I do want a fire type in my\n"
	.string "team.$"

MansionsGarden_Eventscript_Kikuno_Text_0:
# 204 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Go on, Young Lady. It'll be a great\n"
	.string "teammate on your journey.$"

MansionsGarden_Eventscript_Kikuno_Text_1:
# 208 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Please stay safe, Young Lady.$"

MansionsGarden_Eventscript_Fennekin_Text_0:
# 219 "data/maps/MansionsGarden/scripts.pory"
	.string "Touch Fennekin with the Pokéball?$"

MansionsGarden_Eventscript_Fennekin_Text_1:
# 222 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Now that I get a closer look at it...\p"
	.string "It seems like there are sparkles around\n"
	.string "this Fennekin?)$"

MansionsGarden_Eventscript_Fennekin_Text_2:
# 230 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Oh, it's just dust.)$"

MansionsGarden_Eventscript_Fennekin_Text_3:
# 242 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks confused, but it's still\n"
	.string "waiting for you.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_0:
# 253 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin happily went into the\n"
	.string "Pokéball.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_1:
# 267 "data/maps/MansionsGarden/scripts.pory"
	.string "Party full.$"

MustGetFennekin_Text_0:
# 299 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should let Fennekin join the team.\n"
	.string "It'll be a great help for my mission.)$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0:
# 311 "data/maps/MansionsGarden/scripts.pory"
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
# 323 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}I guess this is goodbye then.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes... Please take care, Kikuno.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}You too, Young Lady.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2:
# 331 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Oh right.\p"
	.string "I'm not sure if you have heard, but in\n"
	.string "case you need some healing, Nurse Sawa\l"
	.string "has returned from her maternity leave.\p"
	.string "She should be at the Training House.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you for informing me.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}My pleasure.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3:
# 346 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should get going now.)$"

MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0:
# 368 "data/maps/MansionsGarden/scripts.pory"
	.string "Training House$"

MansionsGarden_Eventscript_GuestHouse_Sign_Text_0:
# 376 "data/maps/MansionsGarden/scripts.pory"
	.string "Guest & Staff House$"

MansionsGarden_Eventscript_WaiterKouhei_Text_0:
# 385 "data/maps/MansionsGarden/scripts.pory"
	.string "Kouhei$"

MansionsGarden_Eventscript_WaiterKouhei_Text_1:
# 387 "data/maps/MansionsGarden/scripts.pory"
	.string "It's my shift to stand guard tonight,\n"
	.string "Young Lady.\p"
	.string "I will make sure no wild Pokémon disrupt\n"
	.string "our staff's goodnight sleep.$"
