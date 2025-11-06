MansionsGarden_MapScripts::
# 2 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 22 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 0
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 3
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 18 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_gt MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 8 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 37, 23
# 9 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype KIKUNO, MOVEMENT_TYPE_FACE_RIGHT
# 10 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 38, 23
# 11 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype INDEEDEE_F, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 14 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
# 15 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 44, 18
# 16 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 48, 20
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 19 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, MansionsGarden_Eventscript_OnFrame0
# 24 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 3, MansionsGarden_Eventscript_OnFrame3
# 25 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 5, MansionsGarden_Eventscript_OnFrame5
	.2byte 0


EventScript_NewGameSetUp::
# 30 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 100
# 31 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 100
# 32 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 100
# 33 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 35 "data/maps/MansionsGarden/scripts.pory"
	checkplayergender
# 36 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_NewGameSetUp_2
# 41 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_THU, 22, 30, 0
# 42 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
EventScript_NewGameSetUp_1:
# 44 "data/maps/MansionsGarden/scripts.pory"
	pausefakertc
	return

EventScript_NewGameSetUp_2:
# 37 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30, 0
# 38 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
	goto EventScript_NewGameSetUp_1


MansionsGarden_Eventscript_OnFrame0::
# 49 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SlowlyShowTheMap
	return


MansionsGarden_Eventscript_OnFrame3::
# 53 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 4
# 54 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_KikunoVSFennekin
	return


MansionsGarden_Eventscript_OnFrame5::
# 58 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SayingGoodbyeToKikuno
	return


MansionsGarden_Eventscript_SlowlyShowTheMap::
# 62 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 63 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 64 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0
# 65 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 66 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0
# 68 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 69 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 70 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MITSURUS_ROOM2F, 15, 10
	return


MansionsGarden_Eventscript_KikunoVSFennekin::
# 76 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 77 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 78 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 79 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 80 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 81 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1
# 82 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 83 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_BlockShakeCamera
# 84 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 85 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2
# 86 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3
# 87 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 88 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_0
# 89 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 90 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 91 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4
# 92 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 93 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 94 "data/maps/MansionsGarden/scripts.pory"
	playse SE_LEDGE
# 95 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5
# 96 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 97 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 98 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 99 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 100 "data/maps/MansionsGarden/scripts.pory"
	lock
# 101 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 102 "data/maps/MansionsGarden/scripts.pory"
	release
# 103 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 104 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 105 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6
# 106 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 107 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_1
# 108 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 109 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 110 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 111 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 112 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 113 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 114 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 115 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8
# 116 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 117 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, faceup
# 118 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 119 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 120 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 121 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_2
# 122 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 123 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 124 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 125 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 126 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10
# 127 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 128 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 129 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_CATCHING
# 130 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 131 "data/maps/MansionsGarden/scripts.pory"
	setwildbattle SPECIES_FENNEKIN, 5
# 132 "data/maps/MansionsGarden/scripts.pory"
	dowildbattle
# 133 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_VSFennekin
	return


MansionsGarden_Eventscript_VSFennekin::
# 137 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 138 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 139 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 140 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 141 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 142 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 143 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_0
# 144 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 145 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_VSFennekin_Movement_0
# 146 "data/maps/MansionsGarden/scripts.pory"
	delay 8
# 147 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 148 "data/maps/MansionsGarden/scripts.pory"
	waitmovement KIKUNO
# 149 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 150 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 151 "data/maps/MansionsGarden/scripts.pory"
	playse MUS_HEAL
# 152 "data/maps/MansionsGarden/scripts.pory"
	waitse
# 153 "data/maps/MansionsGarden/scripts.pory"
	special HealPlayerParty
# 154 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_1
# 157 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 158 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 159 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 160 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_VSFennekin_Movement_1
# 161 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, facedown
# 162 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 163 "data/maps/MansionsGarden/scripts.pory"
	waitmovement FENNEKIN
# 164 "data/maps/MansionsGarden/scripts.pory"
	lock
# 165 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 166 "data/maps/MansionsGarden/scripts.pory"
	release
# 167 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 168 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_2
# 170 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 171 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


MansionsGarden_Eventscript_Kikuno::
# 176 "data/maps/MansionsGarden/scripts.pory"
	lock
# 177 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 178 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_Eventscript_Kikuno_2
# 183 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_1
# 184 "data/maps/MansionsGarden/scripts.pory"
	closemessage
MansionsGarden_Eventscript_Kikuno_1:
# 186 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Kikuno_2:
# 179 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_0
# 180 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_Kikuno_1


MansionsGarden_Eventscript_Fennekin::
# 191 "data/maps/MansionsGarden/scripts.pory"
	lock
# 192 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 193 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_0, MSGBOX_YESNO
# 194 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 195 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_1
# 215 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 216 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_Fennekin_Movement_0
# 217 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 218 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_3
# 219 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	return

MansionsGarden_Eventscript_Fennekin_1:
# 196 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_1, MSGBOX_YESNO
# 198 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 199 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_5
# 204 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_2
# 205 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 206 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetNormalFennekin
MansionsGarden_Eventscript_Fennekin_4:
# 208 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 209 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 210 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 211 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Fennekin_5:
# 201 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetShinyFennekin
	goto MansionsGarden_Eventscript_Fennekin_4


MansionsGarden_Eventscript_GetShinyFennekin::
# 224 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_ALWAYS
# 225 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_1
# 234 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_2
# 244 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetShinyFennekin_1:
# 226 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 227 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 228 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 229 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 230 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 231 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 232 "data/maps/MansionsGarden/scripts.pory"
	call NicknamePartyMon
	return

MansionsGarden_Eventscript_GetShinyFennekin_2:
# 235 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 236 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 237 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 238 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 239 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 240 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 241 "data/maps/MansionsGarden/scripts.pory"
	call NicknameBoxMon
	return


MansionsGarden_Eventscript_GetNormalFennekin::
# 247 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_NEVER
# 248 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 249 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 250 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 251 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 252 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 253 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 254 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
# 255 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 256 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_1
# 259 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_2
# 263 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetNormalFennekin_1:
# 257 "data/maps/MansionsGarden/scripts.pory"
	call NicknamePartyMon
	return

MansionsGarden_Eventscript_GetNormalFennekin_2:
# 260 "data/maps/MansionsGarden/scripts.pory"
	call NicknameBoxMon
	return


MustGetFennekin::
# 267 "data/maps/MansionsGarden/scripts.pory"
	lock
# 268 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MustGetFennekin_Movement_0
# 269 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 270 "data/maps/MansionsGarden/scripts.pory"
	msgbox MustGetFennekin_Text_0
# 271 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 272 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_SayingGoodbyeToKikuno::
# 277 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 6
# 278 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 279 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, emotepensive
# 280 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 281 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 282 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0
# 288 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 289 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 290 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 291 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 292 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0
# 293 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 294 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1
# 297 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 298 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 299 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1
# 300 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2
# 301 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 302 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2
# 307 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 308 "data/maps/MansionsGarden/scripts.pory"
	delay 10
# 309 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3
# 310 "data/maps/MansionsGarden/scripts.pory"
	delay 16
# 311 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4
# 312 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 313 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5
# 314 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 315 "data/maps/MansionsGarden/scripts.pory"
	special RemoveCameraObject
# 316 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 317 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3
# 318 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 319 "data/maps/MansionsGarden/scripts.pory"
	setrespawn HEAL_LOCATION_MANSION_TRAINING_HOUSE
# 320 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Indeedee::
# 325 "data/maps/MansionsGarden/scripts.pory"
	lock
# 326 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 327 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 328 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 329 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_TrainingHouse_Sign::
# 334 "data/maps/MansionsGarden/scripts.pory"
	lock
# 335 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0
# 336 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 337 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_GuestHouse_Sign::
# 342 "data/maps/MansionsGarden/scripts.pory"
	lock
# 343 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GuestHouse_Sign_Text_0
# 344 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 345 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_WaiterKouhei::
# 350 "data/maps/MansionsGarden/scripts.pory"
	lock
# 351 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 352 "data/maps/MansionsGarden/scripts.pory"
	setspeaker MansionsGarden_Eventscript_WaiterKouhei_Text_0
# 353 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt MansionsGarden_Eventscript_WaiterKouhei_2
MansionsGarden_Eventscript_WaiterKouhei_1:
# 358 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_WaiterKouhei_2:
# 354 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_WaiterKouhei_Text_1
# 356 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_WaiterKouhei_1


# 64 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0:
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 64 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 78 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0:
# 78 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 78 "data/maps/MansionsGarden/scripts.pory"
	walk_down
	step_end

# 81 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1:
# 81 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_left
# 81 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 81 "data/maps/MansionsGarden/scripts.pory"
	shake_vertical
# 81 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 81 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 81 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
	step_end

# 85 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2:
# 85 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 85 "data/maps/MansionsGarden/scripts.pory"
	jump_right
# 85 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 86 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3:
# 86 "data/maps/MansionsGarden/scripts.pory"
	walk_in_place_right
	step_end

# 91 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4:
# 91 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_right
# 91 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 91 "data/maps/MansionsGarden/scripts.pory"
	shake_horizontal
	step_end

# 95 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5:
# 95 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 95 "data/maps/MansionsGarden/scripts.pory"
	jump_up
# 95 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 105 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6:
# 105 "data/maps/MansionsGarden/scripts.pory"
	emote_sad
	step_end

# 111 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7:
# 111 "data/maps/MansionsGarden/scripts.pory"
	emote_exclamation_mark
# 111 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 115 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8:
# 115 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
	step_end

# 125 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9:
# 125 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 125 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 126 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10:
# 126 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
# 126 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_up
	step_end

# 145 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_0:
# 145 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 145 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 145 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 145 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 160 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_1:
# 160 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
# 160 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 160 "data/maps/MansionsGarden/scripts.pory"
	face_left
# 160 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 160 "data/maps/MansionsGarden/scripts.pory"
	face_down
# 160 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 160 "data/maps/MansionsGarden/scripts.pory"
	face_right
# 160 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 160 "data/maps/MansionsGarden/scripts.pory"
	face_up
# 160 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 160 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
# 160 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
	step_end

# 216 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_Fennekin_Movement_0:
# 216 "data/maps/MansionsGarden/scripts.pory"
	emote_question_mark
	step_end

# 230 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_GetShinyFennekin_Movement_0:
# 230 "data/maps/MansionsGarden/scripts.pory"
	enter_pokeball
# 230 "data/maps/MansionsGarden/scripts.pory"
	set_invisible
	step_end

# 268 "data/maps/MansionsGarden/scripts.pory"
MustGetFennekin_Movement_0:
# 268 "data/maps/MansionsGarden/scripts.pory"
	walk_left
# 268 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 292 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0:
# 292 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 292 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 292 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 299 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1:
# 299 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 299 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 300 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2:
# 300 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 300 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 300 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 300 "data/maps/MansionsGarden/scripts.pory"
	face_left
	step_end

# 309 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3:
# 309 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 309 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 309 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 311 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4:
# 311 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 311 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 313 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5:
# 313 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
# 313 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
	step_end

MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0:
# 66 "data/maps/MansionsGarden/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{CLEAR_TO 64}{COLOR GREEN}Level cap: 10$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_0:
# 88 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Indeedee, Round!$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_1:
# 107 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Damn it. This one is so slippy.$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_2:
# 121 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Young Lady! Be careful!$"

MansionsGarden_Eventscript_VSFennekin_Text_0:
# 143 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks satisfied after\n"
	.string "spending all of its energy to the\l"
	.string "battle.$"

MansionsGarden_Eventscript_VSFennekin_Text_1:
# 154 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Phew. Thanks to you this Fennekin\n"
	.string "finally calms down.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Where did it come from? We don't\n"
	.string "normally see Fennekin around here.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}It managed to sneak up into the east\n"
	.string "hall and made a mess out of the place.$"

MansionsGarden_Eventscript_VSFennekin_Text_2:
# 168 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Looks like it wants to go with you?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good timing. I do want a fire type in my\n"
	.string "team.$"

MansionsGarden_Eventscript_Kikuno_Text_0:
# 179 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Go on, Young Lady. It'll be a great\n"
	.string "teammate on your journey.$"

MansionsGarden_Eventscript_Kikuno_Text_1:
# 183 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Please stay safe, Young Lady.$"

MansionsGarden_Eventscript_Fennekin_Text_0:
# 193 "data/maps/MansionsGarden/scripts.pory"
	.string "Touch Fennekin with the Pokéball?$"

MansionsGarden_Eventscript_Fennekin_Text_1:
# 196 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Now that I get a closer look at it.\p"
	.string "It seems like there are sparkles around\n"
	.string "this Fennekin?)$"

MansionsGarden_Eventscript_Fennekin_Text_2:
# 204 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Oh, it's just dust.$"

MansionsGarden_Eventscript_Fennekin_Text_3:
# 218 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks confused, but it's still\n"
	.string "waiting for you.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_0:
# 228 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin happily went into the\n"
	.string "Pokéball.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_1:
# 244 "data/maps/MansionsGarden/scripts.pory"
	.string "Party full.$"

MustGetFennekin_Text_0:
# 270 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should let Fennekin join the team.\n"
	.string "It'll be a great help for my mission.)$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0:
# 282 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}I guess no one manage to stop you at\n"
	.string "all.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Kikuno...\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}Young Lady, how about I join you on\n"
	.string "your mission?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You know I won't agree to that.\p"
	.string "It's too dangerous and I can't\n"
	.string "guaranteer your safety.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}Hahaha, it's funny how you say the\n"
	.string "exact same thing as everyone who tried\l"
	.string "to stop you.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1:
# 294 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}I guess this is goodbye then.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes... Please take care, Kikuno.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}You too, Young Lady.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2:
# 302 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Oh right.\p"
	.string "I'm not sure if you have heard but in\n"
	.string "case you need some healing, Nurse Sawa\l"
	.string "has returned from her maternity leave.\p"
	.string "She should be at the Training House.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you for informing me.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}My pleasure.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3:
# 317 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should get going now.)$"

MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0:
# 335 "data/maps/MansionsGarden/scripts.pory"
	.string "Training House$"

MansionsGarden_Eventscript_GuestHouse_Sign_Text_0:
# 343 "data/maps/MansionsGarden/scripts.pory"
	.string "Guest & Staff House$"

MansionsGarden_Eventscript_WaiterKouhei_Text_0:
# 352 "data/maps/MansionsGarden/scripts.pory"
	.string "Kouhei$"

MansionsGarden_Eventscript_WaiterKouhei_Text_1:
# 354 "data/maps/MansionsGarden/scripts.pory"
	.string "It's my shift to stand guard tonight,\n"
	.string "Young Lady.\p"
	.string "I will make sure no wild Pokémon can\n"
	.string "disrupt our staff's goodnight sleep.$"
