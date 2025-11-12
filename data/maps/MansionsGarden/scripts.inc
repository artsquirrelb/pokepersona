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
	setflag FLAG_COMPANION_MENU
# 58 "data/maps/MansionsGarden/scripts.pory"
	checkplayergender
# 59 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_NewGameSetUp_2
# 64 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_THU, 22, 30, 0
# 65 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 50
EventScript_NewGameSetUp_1:
# 67 "data/maps/MansionsGarden/scripts.pory"
	pausefakertc
	return

EventScript_NewGameSetUp_2:
# 60 "data/maps/MansionsGarden/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 30, 0
# 61 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 50
	goto EventScript_NewGameSetUp_1


MansionsGarden_Eventscript_OnFrame0::
# 72 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SlowlyShowTheMap
	return


MansionsGarden_Eventscript_OnFrame3::
# 76 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 4
# 77 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_KikunoVSFennekin
	return


MansionsGarden_Eventscript_OnFrame5::
# 81 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_SayingGoodbyeToKikuno
	return


MansionsGarden_Eventscript_SlowlyShowTheMap::
# 85 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_CutsceneStarts
# 86 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 87 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0
# 88 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 89 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_SlowlyShowTheMap_Text_0
# 91 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 92 "data/maps/MansionsGarden/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 10
# 93 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_MITSURUS_ROOM2F, 15, 10
	return


MansionsGarden_Eventscript_KikunoVSFennekin::
# 99 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 100 "data/maps/MansionsGarden/scripts.pory"
	special SpawnCameraObject
# 101 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0
# 102 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 103 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 104 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1
# 105 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 106 "data/maps/MansionsGarden/scripts.pory"
	call Eventscript_BlockShakeCamera
# 107 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 108 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2
# 109 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3
# 110 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 111 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_0
# 112 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 113 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 114 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4
# 115 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 116 "data/maps/MansionsGarden/scripts.pory"
	playse SE_LEDGE
# 117 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5
# 118 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 119 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 120 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 121 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 122 "data/maps/MansionsGarden/scripts.pory"
	lock
# 123 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 124 "data/maps/MansionsGarden/scripts.pory"
	release
# 125 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 126 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 127 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6
# 128 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 129 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_1
# 130 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 131 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 132 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 133 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 134 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 135 "data/maps/MansionsGarden/scripts.pory"
	delay 40
# 136 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 137 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8
# 138 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 139 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, faceup
# 140 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7
# 141 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 142 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 143 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_KikunoVSFennekin_Text_2
# 144 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 145 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 146 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 147 "data/maps/MansionsGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 148 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10
# 149 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 150 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 151 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_NO_CATCHING
# 152 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 153 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 154 "data/maps/MansionsGarden/scripts.pory"
	setwildbattle SPECIES_FENNEKIN, 5
# 155 "data/maps/MansionsGarden/scripts.pory"
	dowildbattle
# 156 "data/maps/MansionsGarden/scripts.pory"
	goto MansionsGarden_Eventscript_VSFennekin
	return


MansionsGarden_Eventscript_VSFennekin::
# 160 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 161 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 162 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 163 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 164 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 165 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, emotemusic
# 166 "data/maps/MansionsGarden/scripts.pory"
	waitmovement
# 167 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_0
# 168 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 169 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, MansionsGarden_Eventscript_VSFennekin_Movement_0
# 170 "data/maps/MansionsGarden/scripts.pory"
	delay 8
# 171 "data/maps/MansionsGarden/scripts.pory"
	applymovement INDEEDEE_F, MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9
# 172 "data/maps/MansionsGarden/scripts.pory"
	waitmovement KIKUNO
# 173 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 174 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 175 "data/maps/MansionsGarden/scripts.pory"
	playse MUS_HEAL
# 176 "data/maps/MansionsGarden/scripts.pory"
	waitse
# 177 "data/maps/MansionsGarden/scripts.pory"
	special HealPlayerParty
# 178 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_1
# 181 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 182 "data/maps/MansionsGarden/scripts.pory"
	delay 20
# 183 "data/maps/MansionsGarden/scripts.pory"
	playse SE_SHINY
# 184 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_VSFennekin_Movement_1
# 185 "data/maps/MansionsGarden/scripts.pory"
	applymovement KIKUNO, facedown
# 186 "data/maps/MansionsGarden/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 187 "data/maps/MansionsGarden/scripts.pory"
	waitmovement FENNEKIN
# 188 "data/maps/MansionsGarden/scripts.pory"
	lock
# 189 "data/maps/MansionsGarden/scripts.pory"
	setobjectnewmovementtype FENNEKIN, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 190 "data/maps/MansionsGarden/scripts.pory"
	release
# 191 "data/maps/MansionsGarden/scripts.pory"
	delay 30
# 192 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_VSFennekin_Text_2
# 194 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 195 "data/maps/MansionsGarden/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


MansionsGarden_Eventscript_Kikuno::
# 200 "data/maps/MansionsGarden/scripts.pory"
	lock
# 201 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 202 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq MansionsGarden_Eventscript_Kikuno_2
# 207 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_1
# 208 "data/maps/MansionsGarden/scripts.pory"
	closemessage
MansionsGarden_Eventscript_Kikuno_1:
# 210 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Kikuno_2:
# 203 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Kikuno_Text_0
# 204 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_Kikuno_1


MansionsGarden_Eventscript_Fennekin::
# 215 "data/maps/MansionsGarden/scripts.pory"
	lock
# 216 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 217 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_0, MSGBOX_YESNO
# 218 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 219 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_1
# 240 "data/maps/MansionsGarden/scripts.pory"
	playse SE_PIN
# 241 "data/maps/MansionsGarden/scripts.pory"
	applymovement FENNEKIN, MansionsGarden_Eventscript_Fennekin_Movement_0
# 242 "data/maps/MansionsGarden/scripts.pory"
	waitmovement 0
# 243 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_3
# 244 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	return

MansionsGarden_Eventscript_Fennekin_1:
# 220 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_1, MSGBOX_YESNO
# 222 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 223 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionsGarden_Eventscript_Fennekin_5
# 228 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_Fennekin_Text_2
# 229 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 230 "data/maps/MansionsGarden/scripts.pory"
	call MansionsGarden_Eventscript_GetNormalFennekin
MansionsGarden_Eventscript_Fennekin_4:
# 232 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 233 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 234 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 235 "data/maps/MansionsGarden/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 236 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_Fennekin_5:
# 225 "data/maps/MansionsGarden/scripts.pory"
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
	release
	end


MansionsGarden_Eventscript_Indeedee::
# 354 "data/maps/MansionsGarden/scripts.pory"
	lock
# 355 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 356 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_INDEEDEE_F, CRY_MODE_NORMAL
# 357 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 358 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_TrainingHouse_Sign::
# 363 "data/maps/MansionsGarden/scripts.pory"
	lock
# 364 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0
# 365 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 366 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_GuestHouse_Sign::
# 371 "data/maps/MansionsGarden/scripts.pory"
	lock
# 372 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_GuestHouse_Sign_Text_0
# 373 "data/maps/MansionsGarden/scripts.pory"
	closemessage
# 374 "data/maps/MansionsGarden/scripts.pory"
	release
	end


MansionsGarden_Eventscript_WaiterKouhei::
# 379 "data/maps/MansionsGarden/scripts.pory"
	lock
# 380 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 381 "data/maps/MansionsGarden/scripts.pory"
	setspeaker MansionsGarden_Eventscript_WaiterKouhei_Text_0
# 382 "data/maps/MansionsGarden/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt MansionsGarden_Eventscript_WaiterKouhei_2
MansionsGarden_Eventscript_WaiterKouhei_1:
# 387 "data/maps/MansionsGarden/scripts.pory"
	release
	end

MansionsGarden_Eventscript_WaiterKouhei_2:
# 383 "data/maps/MansionsGarden/scripts.pory"
	msgbox MansionsGarden_Eventscript_WaiterKouhei_Text_1
# 385 "data/maps/MansionsGarden/scripts.pory"
	closemessage
	goto MansionsGarden_Eventscript_WaiterKouhei_1


MansionsGarden_Eventscript_Furfrou::
# 392 "data/maps/MansionsGarden/scripts.pory"
	lock
# 393 "data/maps/MansionsGarden/scripts.pory"
	faceplayer
# 394 "data/maps/MansionsGarden/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 395 "data/maps/MansionsGarden/scripts.pory"
	waitmoncry
# 396 "data/maps/MansionsGarden/scripts.pory"
	startoverworldencounter 5
# 397 "data/maps/MansionsGarden/scripts.pory"
	setflag FLAG_TEMP_3
# 398 "data/maps/MansionsGarden/scripts.pory"
	removeobject FURFROU
# 399 "data/maps/MansionsGarden/scripts.pory"
	release
	end


# 87 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_SlowlyShowTheMap_Movement_0:
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 87 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 101 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_0:
# 101 "data/maps/MansionsGarden/scripts.pory"
	walk_down
# 101 "data/maps/MansionsGarden/scripts.pory"
	walk_down
	step_end

# 104 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_1:
# 104 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_left
# 104 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 104 "data/maps/MansionsGarden/scripts.pory"
	shake_vertical
# 104 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 104 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 104 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
	step_end

# 108 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_2:
# 108 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 108 "data/maps/MansionsGarden/scripts.pory"
	jump_right
# 108 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 109 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_3:
# 109 "data/maps/MansionsGarden/scripts.pory"
	walk_in_place_right
	step_end

# 114 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_4:
# 114 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_right
# 114 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 114 "data/maps/MansionsGarden/scripts.pory"
	shake_horizontal
	step_end

# 117 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_5:
# 117 "data/maps/MansionsGarden/scripts.pory"
	lock_facing_direction
# 117 "data/maps/MansionsGarden/scripts.pory"
	jump_up
# 117 "data/maps/MansionsGarden/scripts.pory"
	unlock_facing_direction
	step_end

# 127 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_6:
# 127 "data/maps/MansionsGarden/scripts.pory"
	emote_sad
	step_end

# 133 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_7:
# 133 "data/maps/MansionsGarden/scripts.pory"
	emote_exclamation_mark
# 133 "data/maps/MansionsGarden/scripts.pory"
	face_up
	step_end

# 137 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_8:
# 137 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
	step_end

# 147 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_9:
# 147 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 147 "data/maps/MansionsGarden/scripts.pory"
	walk_up
	step_end

# 148 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_KikunoVSFennekin_Movement_10:
# 148 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_left
# 148 "data/maps/MansionsGarden/scripts.pory"
	walk_fast_up
	step_end

# 169 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_0:
# 169 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 169 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 169 "data/maps/MansionsGarden/scripts.pory"
	walk_up
# 169 "data/maps/MansionsGarden/scripts.pory"
	walk_right
	step_end

# 184 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_VSFennekin_Movement_1:
# 184 "data/maps/MansionsGarden/scripts.pory"
	emote_happy
# 184 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 184 "data/maps/MansionsGarden/scripts.pory"
	face_left
# 184 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 184 "data/maps/MansionsGarden/scripts.pory"
	face_down
# 184 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 184 "data/maps/MansionsGarden/scripts.pory"
	face_right
# 184 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 184 "data/maps/MansionsGarden/scripts.pory"
	face_up
# 184 "data/maps/MansionsGarden/scripts.pory"
	delay_16
# 184 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
# 184 "data/maps/MansionsGarden/scripts.pory"
	jump_in_place_up
	step_end

# 241 "data/maps/MansionsGarden/scripts.pory"
MansionsGarden_Eventscript_Fennekin_Movement_0:
# 241 "data/maps/MansionsGarden/scripts.pory"
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
# 89 "data/maps/MansionsGarden/scripts.pory"
	.string "{CLEAR_TO 10}Mitsuru's Prologue: Responsibilities\n"
	.string "{CLEAR_TO 64}{COLOR GREEN}Level cap: 10$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_0:
# 111 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Indeedee, Round!$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_1:
# 129 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Damn it. This one is so slippy.$"

MansionsGarden_Eventscript_KikunoVSFennekin_Text_2:
# 143 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Young Lady! Be careful!$"

MansionsGarden_Eventscript_VSFennekin_Text_0:
# 167 "data/maps/MansionsGarden/scripts.pory"
	.string "Fennekin looks satisfied after\n"
	.string "spending all of its energy to the\l"
	.string "battle.$"

MansionsGarden_Eventscript_VSFennekin_Text_1:
# 178 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Phew. Thanks to you this Fennekin\n"
	.string "finally calms down.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Where did it come from? We don't\n"
	.string "normally see Fennekin around here.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}It managed to sneak up into the east\n"
	.string "hall and made a mess out of the place.$"

MansionsGarden_Eventscript_VSFennekin_Text_2:
# 192 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Looks like it wants to go with you?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Good timing. I do want a fire type in my\n"
	.string "team.$"

MansionsGarden_Eventscript_Kikuno_Text_0:
# 203 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Go on, Young Lady. It'll be a great\n"
	.string "teammate on your journey.$"

MansionsGarden_Eventscript_Kikuno_Text_1:
# 207 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Please stay safe, Young Lady.$"

MansionsGarden_Eventscript_Fennekin_Text_0:
# 217 "data/maps/MansionsGarden/scripts.pory"
	.string "Touch Fennekin with the Pokéball?$"

MansionsGarden_Eventscript_Fennekin_Text_1:
# 220 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Now that I get a closer look at it.\p"
	.string "It seems like there are sparkles around\n"
	.string "this Fennekin?)$"

MansionsGarden_Eventscript_Fennekin_Text_2:
# 228 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Oh, it's just dust.)$"

MansionsGarden_Eventscript_Fennekin_Text_3:
# 243 "data/maps/MansionsGarden/scripts.pory"
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
# 323 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}I guess this is goodbye then.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes... Please take care, Kikuno.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}You too, Young Lady.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_2:
# 331 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_KIKUNO}Oh right.\p"
	.string "I'm not sure if you have heard but in\n"
	.string "case you need some healing, Nurse Sawa\l"
	.string "has returned from her maternity leave.\p"
	.string "She should be at the Training House.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you for informing me.\p"
	.string "{SPEAKER NAME_KIKUNO}{DESTROY_MUGSHOT}My pleasure.$"

MansionsGarden_Eventscript_SayingGoodbyeToKikuno_Text_3:
# 346 "data/maps/MansionsGarden/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should get going now.)$"

MansionsGarden_Eventscript_TrainingHouse_Sign_Text_0:
# 364 "data/maps/MansionsGarden/scripts.pory"
	.string "Training House$"

MansionsGarden_Eventscript_GuestHouse_Sign_Text_0:
# 372 "data/maps/MansionsGarden/scripts.pory"
	.string "Guest & Staff House$"

MansionsGarden_Eventscript_WaiterKouhei_Text_0:
# 381 "data/maps/MansionsGarden/scripts.pory"
	.string "Kouhei$"

MansionsGarden_Eventscript_WaiterKouhei_Text_1:
# 383 "data/maps/MansionsGarden/scripts.pory"
	.string "It's my shift to stand guard tonight,\n"
	.string "Young Lady.\p"
	.string "I will make sure no wild Pokémon can\n"
	.string "disrupt our staff's goodnight sleep.$"
