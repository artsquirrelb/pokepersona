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
	waitmovement 0
# 93 "data/maps/MansionsGarden/scripts.pory"
	delay 10
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
	setflag FLAG_SMART_WILD_AI
# 131 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 132 "data/maps/MansionsGarden/scripts.pory"
	setwildbattle SPECIES_FENNEKIN, 5
# 133 "data/maps/MansionsGarden/scripts.pory"
	dowildbattle
# 134 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_VSFennekin
	return


MansionsGarden_Eventscript_VSFennekin::
# 138 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 139 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 140 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 141 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 142 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 143 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 144 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 145 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_0
# 146 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 147 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_VSFennekin_Movement_0
# 148 "data/maps/MansionsGarden/scripts.pory"
	delay 8
# 149 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 150 "data/maps/MansionsGarden/scripts.pory"
	waitmovement KIKUNO
# 151 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 152 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 153 "data/maps/MansionsGarden/scripts.pory"
	playse MUS_HEAL
# 154 "data/maps/MansionsGarden/scripts.pory"
	waitse
# 155 "data/maps/MansionsGarden/scripts.pory"
	special HealPlayerParty
# 156 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_1
# 159 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 160 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 161 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 162 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_VSFennekin_Movement_1
# 163 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, facedown
# 164 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 165 "data/maps/MansionsGarden/scripts.pory"
	waitmovement FENNEKIN
# 166 "data/maps/MansionsGarden/scripts.pory"
	lock
# 167 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 168 "data/maps/MansionsGarden/scripts.pory"
	release
# 169 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 170 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_2
# 172 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 173 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


MansionsGarden_Eventscript_Kikuno::
# 178 "data/maps/MansionsGarden/scripts.pory"
	lock
# 179 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 180 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_Eventscript_Kikuno_2
# 185 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_1
# 186 "data/maps/MansionsGarden/scripts.pory"
	closemessage
MansionsGarden_Eventscript_Kikuno_1:
# 188 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Kikuno_2:
# 181 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_0
# 182 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_Kikuno_1


MansionsGarden_Eventscript_Fennekin::
# 193 "data/maps/MansionsGarden/scripts.pory"
	lock
# 194 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 195 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_0, MSGBOX_YESNO
# 196 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 197 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_1
# 218 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 219 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_Fennekin_Movement_0
# 220 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 221 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_3
# 222 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	return

MansionsGarden_Eventscript_Fennekin_1:
# 198 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_1, MSGBOX_YESNO
# 200 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 201 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_5
# 206 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_2
# 207 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 208 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetNormalFennekin
MansionsGarden_Eventscript_Fennekin_4:
# 210 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 211 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 212 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 213 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 214 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Fennekin_5:
# 203 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetShinyFennekin
	goto MansionsGarden_Eventscript_Fennekin_4


MansionsGarden_Eventscript_GetShinyFennekin::
# 227 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_ALWAYS
# 228 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_1
# 236 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetShinyFennekin_2
# 245 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetShinyFennekin_1:
# 229 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 230 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 231 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 232 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 233 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 234 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return

MansionsGarden_Eventscript_GetShinyFennekin_2:
# 237 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 238 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 239 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 240 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 241 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 242 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
	return


MansionsGarden_Eventscript_GetNormalFennekin::
# 248 "data/maps/MansionsGarden/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_NEVER
# 249 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_1
# 259 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MansionsGarden_Eventscript_GetNormalFennekin_2
# 270 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_1
	return

MansionsGarden_Eventscript_GetNormalFennekin_1:
# 250 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 251 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 252 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 253 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 254 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 255 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 256 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 257 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return

MansionsGarden_Eventscript_GetNormalFennekin_2:
# 260 "data/maps/MansionsGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data/maps/MansionsGarden/scripts.pory"
	waitfanfare
# 262 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GetShinyFennekin_Text_0
# 263 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 264 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_GetShinyFennekin_Movement_0
# 265 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 266 "data/maps/MansionsGarden/scripts.pory"
	removeobject FENNEKIN
# 267 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_2
	return


MustGetFennekin::
# 274 "data/maps/MansionsGarden/scripts.pory"
	lock
# 275 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MustGetFennekin_Movement_0
# 276 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 277 "data/maps/MansionsGarden/scripts.pory"
	msgbox MustGetFennekin_Text_0
# 278 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 279 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_SayingGoodbyeToKikuno::
# 284 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 6
# 285 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 286 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, emotepensive
# 287 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 288 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 289 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0
# 295 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 296 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 297 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 298 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 299 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0
# 300 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 301 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_1
# 304 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 305 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 306 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1
# 307 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2
# 308 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 309 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2
# 314 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 315 "data/maps/MansionsGarden/scripts.pory"
	delay 10
# 316 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3
# 317 "data/maps/MansionsGarden/scripts.pory"
	delay 16
# 318 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4
# 319 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 320 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5
# 321 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 322 "data/maps/MansionsGarden/scripts.pory"
	special RemoveCameraObject
# 323 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 324 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3
# 325 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 326 "data/maps/MansionsGarden/scripts.pory"
	setrespawn HEAL_LOCATION_MANSION_TRAINING_HOUSE
# 327 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Indeedee::
# 332 "data/maps/MansionsGarden/scripts.pory"
	lock
# 333 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 334 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 335 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 336 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_TrainingHouse_Sign::
# 341 "data/maps/MansionsGarden/scripts.pory"
	lock
# 342 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0
# 343 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 344 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_GuestHouse_Sign::
# 349 "data/maps/MansionsGarden/scripts.pory"
	lock
# 350 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GuestHouse_Sign_Text_0
# 351 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 352 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_WaiterKouhei::
# 357 "data/maps/MansionsGarden/scripts.pory"
	lock
# 358 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 359 "data/maps/MansionsGarden/scripts.pory"
	setspeaker MansionsGarden_Eventscript_WaiterKouhei_Text_0
# 360 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt MansionsGarden_Eventscript_WaiterKouhei_2
MansionsGarden_Eventscript_WaiterKouhei_1:
# 365 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_WaiterKouhei_2:
# 361 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_WaiterKouhei_Text_1
# 363 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_WaiterKouhei_1


MansionsGarden_Eventscript_Furfrou::
# 370 "data/maps/MansionsGarden/scripts.pory"
	lock
# 371 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 372 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 373 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 374 "data/maps/MansionsGarden/scripts.pory"
	startoverworldencounter 5
# 375 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_3
# 376 "data/maps/MansionsGarden/scripts.pory"
	removeobject FURFROU
# 377 "data/maps/MansionsGarden/scripts.pory"
	release
	end


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

# 147 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_0:
# 147 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 147 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 147 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 147 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 162 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_1:
# 162 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
# 162 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 162 "data/maps/MansionsGarden/scripts.pory"
	face_left
# 162 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 162 "data/maps/MansionsGarden/scripts.pory"
	face_down
# 162 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 162 "data/maps/MansionsGarden/scripts.pory"
	face_right
# 162 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 162 "data/maps/MansionsGarden/scripts.pory"
	face_up
# 162 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 162 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
# 162 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
	step_end

# 219 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_Fennekin_Movement_0:
# 219 "data/maps/MansionsGarden/scripts.pory"
	emote_question_mark
	step_end

# 233 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_GetShinyFennekin_Movement_0:
# 233 "data/maps/MansionsGarden/scripts.pory"
	enter_pokeball
# 233 "data/maps/MansionsGarden/scripts.pory"
	set_invisible
	step_end

# 275 "data/maps/MansionsGarden/scripts.pory"
MustGetFennekin_Movement_0:
# 275 "data/maps/MansionsGarden/scripts.pory"
	walk_left
# 275 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 299 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_0:
# 299 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 299 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 299 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 306 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_1:
# 306 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 306 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 307 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_2:
# 307 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 307 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 307 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 307 "data/maps/MansionsGarden/scripts.pory"
	face_left
	step_end

# 316 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_3:
# 316 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 316 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 316 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 318 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_4:
# 318 "data/maps/MansionsGarden/scripts.pory"
	walk_right
# 318 "data/maps/MansionsGarden/scripts.pory"
	face_down
	step_end

# 320 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Movement_5:
# 320 "data/maps/MansionsGarden/scripts.pory"
	walk_diag_northwest
# 320 "data/maps/MansionsGarden/scripts.pory"
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
# 145 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks satisfied after\n"
	.string "spending all of its energy to the\l"
	.string "battle.$"

MansionsGarden_Eventscript_VSFennekin_Text_1:
# 156 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Phew. Thanks to you this Fennekin\n"
	.string "finally calms down.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Where did it come from? We don't\n"
	.string "normally see Fennekin around here.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}It managed to sneak up into the east\n"
	.string "hall and made a mess out of the place.$"

MansionsGarden_Eventscript_VSFennekin_Text_2:
# 170 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Looks like it wants to go with you?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good timing. I do want a fire type in my\n"
	.string "team.$"

MansionsGarden_Eventscript_Kikuno_Text_0:
# 181 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Go on, Young Lady. It'll be a great\n"
	.string "teammate on your journey.$"

MansionsGarden_Eventscript_Kikuno_Text_1:
# 185 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Please stay safe, Young Lady.$"

MansionsGarden_Eventscript_Fennekin_Text_0:
# 195 "data/maps/MansionsGarden/scripts.pory"
	.string "Touch Fennekin with the Pokéball?$"

MansionsGarden_Eventscript_Fennekin_Text_1:
# 198 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Now that I get a closer look at it.\p"
	.string "It seems like there are sparkles around\n"
	.string "this Fennekin?)$"

MansionsGarden_Eventscript_Fennekin_Text_2:
# 206 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Oh, it's just dust.)$"

MansionsGarden_Eventscript_Fennekin_Text_3:
# 221 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks confused, but it's still\n"
	.string "waiting for you.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_0:
# 231 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin happily went into the\n"
	.string "Pokéball.$"

MansionsGarden_Eventscript_GetShinyFennekin_Text_1:
# 245 "data/maps/MansionsGarden/scripts.pory"
	.string "Party full.$"

MustGetFennekin_Text_0:
# 277 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should let Fennekin join the team.\n"
	.string "It'll be a great help for my mission.)$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_0:
# 289 "data/maps/MansionsGarden/scripts.pory"
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
# 301 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}I guess this is goodbye then.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes... Please take care, Kikuno.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}You too, Young Lady.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2:
# 309 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Oh right.\p"
	.string "I'm not sure if you have heard but in\n"
	.string "case you need some healing, Nurse Sawa\l"
	.string "has returned from her maternity leave.\p"
	.string "She should be at the Training House.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you for informing me.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}My pleasure.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3:
# 324 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should get going now.)$"

MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0:
# 342 "data/maps/MansionsGarden/scripts.pory"
	.string "Training House$"

MansionsGarden_Eventscript_GuestHouse_Sign_Text_0:
# 350 "data/maps/MansionsGarden/scripts.pory"
	.string "Guest & Staff House$"

MansionsGarden_Eventscript_WaiterKouhei_Text_0:
# 359 "data/maps/MansionsGarden/scripts.pory"
	.string "Kouhei$"

MansionsGarden_Eventscript_WaiterKouhei_Text_1:
# 361 "data/maps/MansionsGarden/scripts.pory"
	.string "It's my shift to stand guard tonight,\n"
	.string "Young Lady.\p"
	.string "I will make sure no wild Pokémon can\n"
	.string "disrupt our staff's goodnight sleep.$"
