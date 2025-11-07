MansionsGarden_MapScripts::
# 2 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 26 "data/maps/MansionsGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 0
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 3
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_eq MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 22 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 5
	goto_if_gt MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 5 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
# 6 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 42, 20
# 7 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype KIKUNO, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 8 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 46, 22
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 12 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 37, 23
# 13 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype KIKUNO, MOVEMENT_TYPE_FACE_RIGHT
# 14 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 38, 23
# 15 "data/maps/MansionsGarden/scripts.pory"
	setobjectmovementtype INDEEDEE_F, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 18 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
# 19 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm KIKUNO, 44, 18
# 20 "data/maps/MansionsGarden/scripts.pory"
	setobjectxyperm INDEEDEE_F, 48, 20
	goto MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MansionsGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 23 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 27 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, MansionsGarden_Eventscript_OnFrame0
# 28 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 3, MansionsGarden_Eventscript_OnFrame3
# 29 "data/maps/MansionsGarden/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 5, MansionsGarden_Eventscript_OnFrame5
	.2byte 0


EventScript_NewGameSetUp::
# 34 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 100
# 35 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 100
# 36 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKO_RELATIONSHIP_POINTS, 100
# 37 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 39 "data/maps/MansionsGarden/scripts.pory"
	checkplayergender
# 40 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_NewGameSetUp_2
# 45 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_THU, 22, 30, 0
# 46 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
EventScript_NewGameSetUp_1:
# 48 "data/maps/MansionsGarden/scripts.pory"
	pausefakertc
	return

EventScript_NewGameSetUp_2:
# 41 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30, 0
# 42 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
	goto EventScript_NewGameSetUp_1


MansionsGarden_Eventscript_OnFrame0::
# 53 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SlowlyShowTheMap
	return


MansionsGarden_Eventscript_OnFrame3::
# 57 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 4
# 58 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_KikunoVSFennekin
	return


MansionsGarden_Eventscript_OnFrame5::
# 62 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SayingGoodbyeToKikuno
	return


MansionsGarden_Eventscript_SlowlyShowTheMap::
# 66 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 67 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 68 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0
# 69 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 70 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0
# 72 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 73 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 74 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MITSURUS_ROOM2F, 15, 10
	return


MansionsGarden_Eventscript_KikunoVSFennekin::
# 80 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 81 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 82 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 83 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 84 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 85 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1
# 86 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 87 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_BlockShakeCamera
# 88 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 89 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2
# 90 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3
# 91 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 92 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_0
# 93 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 94 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 95 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4
# 96 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 97 "data/maps/MansionsGarden/scripts.pory"
	playse SE_LEDGE
# 98 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5
# 99 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 100 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 101 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 102 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 103 "data/maps/MansionsGarden/scripts.pory"
	lock
# 104 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 105 "data/maps/MansionsGarden/scripts.pory"
	release
# 106 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 107 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 108 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6
# 109 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 110 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_1
# 111 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 112 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 113 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 114 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 115 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 116 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 117 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 118 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8
# 119 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 120 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, faceup
# 121 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 122 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 123 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 124 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_2
# 125 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 126 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 127 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 128 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 129 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10
# 130 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 131 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 132 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_CATCHING
# 133 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 134 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 135 "data/maps/MansionsGarden/scripts.pory"
	setwildbattle SPECIES_FENNEKIN, 5
# 136 "data/maps/MansionsGarden/scripts.pory"
	dowildbattle
# 137 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_VSFennekin
	return


MansionsGarden_Eventscript_VSFennekin::
# 141 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 142 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 143 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 144 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 145 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 146 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 147 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 148 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_0
# 149 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 150 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_VSFennekin_Movement_0
# 151 "data/maps/MansionsGarden/scripts.pory"
	delay 8
# 152 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 153 "data/maps/MansionsGarden/scripts.pory"
	waitmovement KIKUNO
# 154 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 155 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 156 "data/maps/MansionsGarden/scripts.pory"
	playse MUS_HEAL
# 157 "data/maps/MansionsGarden/scripts.pory"
	waitse
# 158 "data/maps/MansionsGarden/scripts.pory"
	special HealPlayerParty
# 159 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_1
# 162 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 163 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 164 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 165 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_VSFennekin_Movement_1
# 166 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, facedown
# 167 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 168 "data/maps/MansionsGarden/scripts.pory"
	waitmovement FENNEKIN
# 169 "data/maps/MansionsGarden/scripts.pory"
	lock
# 170 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 171 "data/maps/MansionsGarden/scripts.pory"
	release
# 172 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 173 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_2
# 175 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 176 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


MansionsGarden_Eventscript_Kikuno::
# 181 "data/maps/MansionsGarden/scripts.pory"
	lock
# 182 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 183 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_Eventscript_Kikuno_2
# 188 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_1
# 189 "data/maps/MansionsGarden/scripts.pory"
	closemessage
MansionsGarden_Eventscript_Kikuno_1:
# 191 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Kikuno_2:
# 184 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_0
# 185 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_Kikuno_1


MansionsGarden_Eventscript_Fennekin::
# 196 "data/maps/MansionsGarden/scripts.pory"
	lock
# 197 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 198 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_0, MSGBOX_YESNO
# 199 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 200 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_1
# 221 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 222 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_Fennekin_Movement_0
# 223 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 224 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_3
# 225 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	return

MansionsGarden_Eventscript_Fennekin_1:
# 201 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_1, MSGBOX_YESNO
# 203 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 204 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_5
# 209 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_2
# 210 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 211 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetNormalFennekin
MansionsGarden_Eventscript_Fennekin_4:
# 213 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 214 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 215 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 216 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 217 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Fennekin_5:
# 206 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetShinyFennekin
	goto MansionsGarden_Eventscript_Fennekin_4


MansionsGarden_Eventscript_GetShinyFennekin::
# 230 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_ALWAYS
# 231 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_1
# 239 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_2
# 248 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetShinyFennekin_1:
# 232 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 233 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 234 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 235 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 236 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 237 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return

MansionsGarden_Eventscript_GetShinyFennekin_2:
# 240 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 241 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 242 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 243 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 244 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 245 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return


MansionsGarden_Eventscript_GetNormalFennekin::
# 251 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_NEVER
# 252 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_1
# 262 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_2
# 273 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetNormalFennekin_1:
# 253 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 254 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 255 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 256 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 257 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 258 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 259 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 260 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_Eventscript_GetNormalFennekin_2:
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
# 269 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 270 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return


MustGetFennekin::
# 277 "data/maps/MansionsGarden/scripts.pory"
	lock
# 278 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MustGetFennekin_Movement_0
# 279 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 280 "data/maps/MansionsGarden/scripts.pory"
	msgbox MustGetFennekin_Text_0
# 281 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 282 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_SayingGoodbyeToKikuno::
# 287 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 6
# 288 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 289 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, emotepensive
# 290 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 291 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 292 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0
# 298 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 299 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 300 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 301 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 302 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0
# 303 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 304 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1
# 307 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 308 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 309 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1
# 310 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2
# 311 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 312 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2
# 317 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 318 "data/maps/MansionsGarden/scripts.pory"
	delay 10
# 319 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3
# 320 "data/maps/MansionsGarden/scripts.pory"
	delay 16
# 321 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4
# 322 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 323 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5
# 324 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 325 "data/maps/MansionsGarden/scripts.pory"
	special RemoveCameraObject
# 326 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 327 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3
# 328 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 329 "data/maps/MansionsGarden/scripts.pory"
	setrespawn HEAL_LOCATION_MANSION_TRAINING_HOUSE
# 330 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Indeedee::
# 335 "data/maps/MansionsGarden/scripts.pory"
	lock
# 336 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 337 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 338 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 339 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_TrainingHouse_Sign::
# 344 "data/maps/MansionsGarden/scripts.pory"
	lock
# 345 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0
# 346 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 347 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_GuestHouse_Sign::
# 352 "data/maps/MansionsGarden/scripts.pory"
	lock
# 353 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GuestHouse_Sign_Text_0
# 354 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 355 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_WaiterKouhei::
# 360 "data/maps/MansionsGarden/scripts.pory"
	lock
# 361 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 362 "data/maps/MansionsGarden/scripts.pory"
	setspeaker MansionsGarden_Eventscript_WaiterKouhei_Text_0
# 363 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt MansionsGarden_Eventscript_WaiterKouhei_2
MansionsGarden_Eventscript_WaiterKouhei_1:
# 368 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_WaiterKouhei_2:
# 364 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_WaiterKouhei_Text_1
# 366 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_WaiterKouhei_1


MansionsGarden_Eventscript_Furfrou::
# 373 "data/maps/MansionsGarden/scripts.pory"
	lock
# 374 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 375 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 376 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 377 "data/maps/MansionsGarden/scripts.pory"
	startoverworldencounter 5
# 378 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_3
# 379 "data/maps/MansionsGarden/scripts.pory"
	removeobject FURFROU
# 380 "data/maps/MansionsGarden/scripts.pory"
	release
	end


# 68 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0:
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 68 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 82 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0:
# 82 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 82 "data/maps/MansionsGarden/scripts.pory"
	walk_down
	step_end

# 85 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1:
# 85 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_left
# 85 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 85 "data/maps/MansionsGarden/scripts.pory"
	shake_vertical
# 85 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 85 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 85 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
	step_end

# 89 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2:
# 89 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 89 "data/maps/MansionsGarden/scripts.pory"
	jump_right
# 89 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 90 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3:
# 90 "data/maps/MansionsGarden/scripts.pory"
	walk_in_place_right
	step_end

# 95 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4:
# 95 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_right
# 95 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 95 "data/maps/MansionsGarden/scripts.pory"
	shake_horizontal
	step_end

# 98 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5:
# 98 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 98 "data/maps/MansionsGarden/scripts.pory"
	jump_up
# 98 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 108 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6:
# 108 "data/maps/MansionsGarden/scripts.pory"
	emote_sad
	step_end

# 114 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7:
# 114 "data/maps/MansionsGarden/scripts.pory"
	emote_exclamation_mark
# 114 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 118 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8:
# 118 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
	step_end

# 128 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9:
# 128 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 128 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 129 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10:
# 129 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
# 129 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_up
	step_end

# 150 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_0:
# 150 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 150 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 150 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 150 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 165 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_1:
# 165 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
# 165 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 165 "data/maps/MansionsGarden/scripts.pory"
	face_left
# 165 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 165 "data/maps/MansionsGarden/scripts.pory"
	face_down
# 165 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 165 "data/maps/MansionsGarden/scripts.pory"
	face_right
# 165 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 165 "data/maps/MansionsGarden/scripts.pory"
	face_up
# 165 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 165 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
# 165 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
	step_end

# 222 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_Fennekin_Movement_0:
# 222 "data/maps/MansionsGarden/scripts.pory"
	emote_question_mark
	step_end

# 236 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_GetShinyFennekin_Movement_0:
# 236 "data/maps/MansionsGarden/scripts.pory"
	enter_pokeball
# 236 "data/maps/MansionsGarden/scripts.pory"
	set_invisible
	step_end

# 278 "data/maps/MansionsGarden/scripts.pory"
MustGetFennekin_Movement_0:
# 278 "data/maps/MansionsGarden/scripts.pory"
	walk_left
# 278 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 302 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0:
# 302 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 302 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 302 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 309 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1:
# 309 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 309 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 310 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2:
# 310 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 310 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 310 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 310 "data/maps/MansionsGarden/scripts.pory"
	face_left
	step_end

# 319 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3:
# 319 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 319 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 319 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 321 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4:
# 321 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 321 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 323 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5:
# 323 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
# 323 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
	step_end

MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0:
# 70 "data/maps/MansionsGarden/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{CLEAR_TO 64}{COLOR GREEN}Level cap: 10$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_0:
# 92 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Indeedee, Round!$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_1:
# 110 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Damn it. This one is so slippy.$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_2:
# 124 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Young Lady! Be careful!$"

MansionsGarden_Eventscript_VSFennekin_Text_0:
# 148 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks satisfied after\n"
	.string "spending all of its energy to the\l"
	.string "battle.$"

MansionsGarden_Eventscript_VSFennekin_Text_1:
# 159 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Phew. Thanks to you this Fennekin\n"
	.string "finally calms down.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Where did it come from? We don't\n"
	.string "normally see Fennekin around here.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}It managed to sneak up into the east\n"
	.string "hall and made a mess out of the place.$"

MansionsGarden_Eventscript_VSFennekin_Text_2:
# 173 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Looks like it wants to go with you?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good timing. I do want a fire type in my\n"
	.string "team.$"

MansionsGarden_Eventscript_Kikuno_Text_0:
# 184 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Go on, Young Lady. It'll be a great\n"
	.string "teammate on your journey.$"

MansionsGarden_Eventscript_Kikuno_Text_1:
# 188 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Please stay safe, Young Lady.$"

MansionsGarden_Eventscript_Fennekin_Text_0:
# 198 "data/maps/MansionsGarden/scripts.pory"
	.string "Touch Fennekin with the Pokéball?$"

MansionsGarden_Eventscript_Fennekin_Text_1:
# 201 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Now that I get a closer look at it.\p"
	.string "It seems like there are sparkles around\n"
	.string "this Fennekin?)$"

MansionsGarden_Eventscript_Fennekin_Text_2:
# 209 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Oh, it's just dust.)$"

MansionsGarden_Eventscript_Fennekin_Text_3:
# 224 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks confused, but it's still\n"
	.string "waiting for you.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_0:
# 234 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin happily went into the\n"
	.string "Pokéball.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_1:
# 248 "data/maps/MansionsGarden/scripts.pory"
	.string "Party full.$"

MustGetFennekin_Text_0:
# 280 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should let Fennekin join the team.\n"
	.string "It'll be a great help for my mission.)$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0:
# 292 "data/maps/MansionsGarden/scripts.pory"
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
# 304 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}I guess this is goodbye then.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes... Please take care, Kikuno.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}You too, Young Lady.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2:
# 312 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Oh right.\p"
	.string "I'm not sure if you have heard but in\n"
	.string "case you need some healing, Nurse Sawa\l"
	.string "has returned from her maternity leave.\p"
	.string "She should be at the Training House.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you for informing me.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}My pleasure.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3:
# 327 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should get going now.)$"

MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0:
# 345 "data/maps/MansionsGarden/scripts.pory"
	.string "Training House$"

MansionsGarden_Eventscript_GuestHouse_Sign_Text_0:
# 353 "data/maps/MansionsGarden/scripts.pory"
	.string "Guest & Staff House$"

MansionsGarden_Eventscript_WaiterKouhei_Text_0:
# 362 "data/maps/MansionsGarden/scripts.pory"
	.string "Kouhei$"

MansionsGarden_Eventscript_WaiterKouhei_Text_1:
# 364 "data/maps/MansionsGarden/scripts.pory"
	.string "It's my shift to stand guard tonight,\n"
	.string "Young Lady.\p"
	.string "I will make sure no wild Pokémon can\n"
	.string "disrupt our staff's goodnight sleep.$"
