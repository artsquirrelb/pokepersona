MansionMainHall_MapScripts::
# 2 "data/maps/MansionMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/MansionMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MansionMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 2
	goto_if_eq MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 3
	goto_if_ge MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/MansionMainHall/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
	goto MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 7 "data/maps/MansionMainHall/scripts.pory"
	setflag FLAG_TEMP_1
	return

MansionMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/MansionMainHall/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 2, MansionMainHall_Eventscript_OnFrame2
	.2byte 0


MansionMainHall_Eventscript_OnFrame2::
# 16 "data/maps/MansionMainHall/scripts.pory"
	goto MansionMainHall_Eventscript_TakeharuStoppingMitsuru
	return


MansionMainHall_Eventscript_TakeharuStoppingMitsuru::
# 20 "data/maps/MansionMainHall/scripts.pory"
	lock
# 21 "data/maps/MansionMainHall/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 3
# 22 "data/maps/MansionMainHall/scripts.pory"
	delay 10
# 23 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_0
# 24 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 25 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_0
# 26 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 27 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 28 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 29 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 30 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 31 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_TAKEHARU, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_1
# 32 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_2
# 33 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 34 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_1
# 45 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 46 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 47 "data/maps/MansionMainHall/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 48 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, walkinplaceright
# 49 "data/maps/MansionMainHall/scripts.pory"
	waitmoncry
# 50 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 51 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_2
# 53 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 54 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_TAKEHARU, faceup
# 55 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, facedown
# 56 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 57 "data/maps/MansionMainHall/scripts.pory"
	delay 60
# 58 "data/maps/MansionMainHall/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 59 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, walkinplacedown
# 60 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 61 "data/maps/MansionMainHall/scripts.pory"
	waitmoncry
# 62 "data/maps/MansionMainHall/scripts.pory"
	delay 30
# 63 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_3
# 64 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_TAKEHARU, faceright
# 65 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 66 "data/maps/MansionMainHall/scripts.pory"
	delay 30
# 67 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_3
# 71 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 72 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_4
# 73 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 74 "data/maps/MansionMainHall/scripts.pory"
	removeobject LOCALID_INTELEON
# 75 "data/maps/MansionMainHall/scripts.pory"
	setflag FLAG_TEMP_1
# 76 "data/maps/MansionMainHall/scripts.pory"
	delay 30
# 77 "data/maps/MansionMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 78 "data/maps/MansionMainHall/scripts.pory"
	waitfanfare
# 79 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_4
# 80 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 81 "data/maps/MansionMainHall/scripts.pory"
	goto_if_unset FLAG_COMPANION_MENU_GET, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_2
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_1:
# 86 "data/maps/MansionMainHall/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 87 "data/maps/MansionMainHall/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 88 "data/maps/MansionMainHall/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 89 "data/maps/MansionMainHall/scripts.pory"
	clearflag FLAG_LOCK_INTELEON_T
# 90 "data/maps/MansionMainHall/scripts.pory"
	fwdtime 22, 45
# 91 "data/maps/MansionMainHall/scripts.pory"
	release
	end

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_2:
# 83 "data/maps/MansionMainHall/scripts.pory"
	call EventScript_ShowHelpCompanion
# 84 "data/maps/MansionMainHall/scripts.pory"
	setflag FLAG_COMPANION_MENU_GET
	goto MansionMainHall_Eventscript_TakeharuStoppingMitsuru_1


MansionMainHall_Eventscript_Takeharu::
# 96 "data/maps/MansionMainHall/scripts.pory"
	lock
# 97 "data/maps/MansionMainHall/scripts.pory"
	faceplayer
# 98 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Takeharu_Text_0
# 101 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 102 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_Butler::
# 107 "data/maps/MansionMainHall/scripts.pory"
	lock
# 108 "data/maps/MansionMainHall/scripts.pory"
	faceplayer
# 109 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_Butler_Text_0
# 110 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq MansionMainHall_Eventscript_Butler_2
# 130 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Butler_Text_4
# 133 "data/maps/MansionMainHall/scripts.pory"
	closemessage
MansionMainHall_Eventscript_Butler_1:
# 135 "data/maps/MansionMainHall/scripts.pory"
	release
	end

MansionMainHall_Eventscript_Butler_2:
# 111 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Butler_Text_1
# 113 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 114 "data/maps/MansionMainHall/scripts.pory"
	playse SE_FAINT
# 115 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_BUTLER, MansionMainHall_Eventscript_Butler_Movement_0
# 116 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 117 "data/maps/MansionMainHall/scripts.pory"
	waitse
# 118 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Butler_Text_2
# 119 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_Butler_Text_0
# 120 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Butler_Text_3
# 121 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 122 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_BUBBLE
# 123 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 124 "data/maps/MansionMainHall/scripts.pory"
	waitse
# 125 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 126 "data/maps/MansionMainHall/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto MansionMainHall_Eventscript_Butler_1


MansionMainHall_Eventscript_WaiterHaruma::
# 140 "data/maps/MansionMainHall/scripts.pory"
	lock
# 141 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterHaruma_Text_0
# 142 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq MansionMainHall_Eventscript_WaiterHaruma_2
# 160 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterHaruma_Text_4
# 162 "data/maps/MansionMainHall/scripts.pory"
	closemessage
MansionMainHall_Eventscript_WaiterHaruma_1:
# 164 "data/maps/MansionMainHall/scripts.pory"
	release
	end

MansionMainHall_Eventscript_WaiterHaruma_2:
# 143 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterHaruma_Text_1
# 144 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 145 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 146 "data/maps/MansionMainHall/scripts.pory"
	applymovement 7, MansionMainHall_Eventscript_WaiterHaruma_Movement_0
# 147 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 148 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterHaruma_Text_0
# 149 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterHaruma_Text_2
# 151 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterHaruma_Text_0
# 152 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterHaruma_Text_3
# 154 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 155 "data/maps/MansionMainHall/scripts.pory"
	applymovement 7, faceleft
# 156 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 157 "data/maps/MansionMainHall/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto MansionMainHall_Eventscript_WaiterHaruma_1


MansionMainHall_Eventscript_WaitressMinori::
# 169 "data/maps/MansionMainHall/scripts.pory"
	lock
# 170 "data/maps/MansionMainHall/scripts.pory"
	faceplayer
# 171 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressMinori_Text_0
# 172 "data/maps/MansionMainHall/scripts.pory"
	msgbox AlertingWildPokemonGotInside
# 173 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 174 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_BlockingEastHall::
# 187 "data/maps/MansionMainHall/scripts.pory"
	lock
# 188 "data/maps/MansionMainHall/scripts.pory"
	applymovement 4, facedown
# 189 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 190 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 191 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressMinori_Text_0
# 192 "data/maps/MansionMainHall/scripts.pory"
	msgbox AlertingWildPokemonGotInside
# 193 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 194 "data/maps/MansionMainHall/scripts.pory"
	applymovement 4, faceleft
# 195 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 196 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 197 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_WaitressKoharu::
# 202 "data/maps/MansionMainHall/scripts.pory"
	lock
# 203 "data/maps/MansionMainHall/scripts.pory"
	faceplayer
# 204 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressKoharu_Text_0
# 205 "data/maps/MansionMainHall/scripts.pory"
	msgbox TakeharusOffice
# 206 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 207 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_BlockingTakeharusOffice::
# 219 "data/maps/MansionMainHall/scripts.pory"
	lock
# 220 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 221 "data/maps/MansionMainHall/scripts.pory"
	applymovement 6, faceleft
# 222 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 223 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressKoharu_Text_0
# 224 "data/maps/MansionMainHall/scripts.pory"
	msgbox TakeharusOffice
# 225 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 226 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 227 "data/maps/MansionMainHall/scripts.pory"
	applymovement 6, facedown
# 228 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 229 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_WaiterAoi::
# 234 "data/maps/MansionMainHall/scripts.pory"
	lock
# 235 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterAoi_Text_0
# 236 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MansionMainHall_Eventscript_WaiterAoi_2
# 251 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_3
# 253 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 254 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 255 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, MansionMainHall_Eventscript_WaiterHaruma_Movement_0
# 256 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 257 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterAoi_Text_0
# 258 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_4
# 262 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 263 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 264 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, emoteexclamation
# 265 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 266 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 267 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_CHARM
# 268 "data/maps/MansionMainHall/scripts.pory"
	waitse
# 269 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_CHARM
# 270 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, MansionMainHall_Eventscript_WaiterAoi_Movement_0
# 271 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 272 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterAoi_Text_0
# 273 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_5
# 274 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 275 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_BUBBLE
# 276 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 277 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 278 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 279 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, facedown
# 280 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 281 "data/maps/MansionMainHall/scripts.pory"
	setvar VAR_TEMP_2, 1
# 283 "data/maps/MansionMainHall/scripts.pory"
	release
	end

MansionMainHall_Eventscript_WaiterAoi_2:
# 237 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, shakehorizontal
# 238 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 239 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_1
# 240 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 241 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_BUBBLE
# 242 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 243 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 244 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 245 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_2
# 246 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 247 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_EmptyGuestRoom::
# 288 "data/maps/MansionMainHall/scripts.pory"
	lock
# 289 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_EmptyGuestRoom_Text_0
# 290 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 291 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_NotTheWayOutToMainGarden::
# 296 "data/maps/MansionMainHall/scripts.pory"
	lock
# 297 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_NotTheWayOutToMainGarden_Text_0
# 298 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 299 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 300 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 301 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_IndeedeeM::
# 306 "data/maps/MansionMainHall/scripts.pory"
	moncryscript SPECIES_INDEEDEE_M
# 307 "data/maps/MansionMainHall/scripts.pory"
	release
	end


# 23 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_0:
# 23 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 23 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 23 "data/maps/MansionMainHall/scripts.pory"
	walk_down
	step_end

# 31 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_1:
# 31 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 31 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 31 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 31 "data/maps/MansionMainHall/scripts.pory"
	walk_right
	step_end

# 32 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_2:
# 32 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 32 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 32 "data/maps/MansionMainHall/scripts.pory"
	walk_right
# 32 "data/maps/MansionMainHall/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_3:
# 63 "data/maps/MansionMainHall/scripts.pory"
	walk_right
# 63 "data/maps/MansionMainHall/scripts.pory"
	walk_right
# 63 "data/maps/MansionMainHall/scripts.pory"
	face_left
	step_end

# 72 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_4:
# 72 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 72 "data/maps/MansionMainHall/scripts.pory"
	set_invisible
	step_end

# 115 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_Butler_Movement_0:
# 115 "data/maps/MansionMainHall/scripts.pory"
	emote_cry
# 115 "data/maps/MansionMainHall/scripts.pory"
	shake_horizontal
	step_end

# 146 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_WaiterHaruma_Movement_0:
# 146 "data/maps/MansionMainHall/scripts.pory"
	emote_exclamation_mark
# 146 "data/maps/MansionMainHall/scripts.pory"
	face_player
	step_end

# 270 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_WaiterAoi_Movement_0:
# 270 "data/maps/MansionMainHall/scripts.pory"
	emote_heart
	step_end

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_0:
# 25 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_TKHR}Mitsuru.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_1:
# 34 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Father...\p"
	.string "{SPEAKER NAME_TKHR}{DESTROY_MUGSHOT}So you really intend to go, no matter\n"
	.string "what I say.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}I'm sorry, Father...\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}But we already talked about this\n"
	.string "before.\p"
	.string "This is also my responsibility as a\n"
	.string "Kirijo.\p"
	.string "I simply cannot sit still while our\n"
	.string "family's name gets further tainted.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}Please... don't stop me, Father.\p"
	.string "{SPEAKER NAME_TKHR}{DESTROY_MUGSHOT}You already know I don't fully agree\n"
	.string "with this.\p"
	.string "No sane parent would let their child do\n"
	.string "something this dangerous.\p"
	.string "However, I'm also aware that I won't be\n"
	.string "able to stop you, since stubborness\l"
	.string "apparently runs in both of our veins.\p"
	.string "So please, take Inteleon with you. He\n"
	.string "can look over you in my stead.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_2:
# 51 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Father.....\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}If that'll put your mind more at ease,\n"
	.string "I'll do so.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_3:
# 67 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I must go now.\p"
	.string "Please take care, Father.\p"
	.string "{SPEAKER NAME_TKHR}{DESTROY_MUGSHOT}Stay safe, and come back to me, Mitsuru.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}I fully intend to.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_4:
# 79 "data/maps/MansionMainHall/scripts.pory"
	.string "Inteleon is now your Companion.$"

MansionMainHall_Eventscript_Takeharu_Text_0:
# 98 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_TKHR}If you need anything on your journey,\n"
	.string "just make a call home.\p"
	.string "I'll be sure to assist you whenever.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}That is assuring. Thank you, Father.$"

MansionMainHall_Eventscript_Butler_Text_0:
# 109 "data/maps/MansionMainHall/scripts.pory"
	.string "Butler Yuuma$"

MansionMainHall_Eventscript_Butler_Text_1:
# 111 "data/maps/MansionMainHall/scripts.pory"
	.string "So you decided to go after all...\p"
	.string "I will miss you so much, Young Ladyyyy.$"

MansionMainHall_Eventscript_Butler_Text_2:
# 118 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}Y-Yuuma-san, please don't cry. I'll\n"
	.string "definitely be back in no time!$"

MansionMainHall_Eventscript_Butler_Text_3:
# 120 "data/maps/MansionMainHall/scripts.pory"
	.string "{DESTROY_MUGSHOT}-sniff sniff-$"

MansionMainHall_Eventscript_Butler_Text_4:
# 130 "data/maps/MansionMainHall/scripts.pory"
	.string "-sniff sniff-\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}P-Please stop crying, Yuuma-san...\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}(Sigh, how do I comfort a person in\n"
	.string "distress...?)$"

MansionMainHall_Eventscript_WaiterHaruma_Text_0:
# 141 "data/maps/MansionMainHall/scripts.pory"
	.string "Haruma$"

MansionMainHall_Eventscript_WaiterHaruma_Text_1:
# 143 "data/maps/MansionMainHall/scripts.pory"
	.string "That dang kid Aoi better not be\n"
	.string "slacking off and leaving me to finish\l"
	.string "cleaning these statues on my own.$"

MansionMainHall_Eventscript_WaiterHaruma_Text_2:
# 149 "data/maps/MansionMainHall/scripts.pory"
	.string "Young Lady, what can I do for you?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I don't see Kikuno anywhere. Do you\n"
	.string "know where she went off to?$"

MansionMainHall_Eventscript_WaiterHaruma_Text_3:
# 152 "data/maps/MansionMainHall/scripts.pory"
	.string "{DESTROY_MUGSHOT}I saw her go outside to the main garden\n"
	.string "a bit earlier.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I see. Thank you, Haruma.$"

MansionMainHall_Eventscript_WaiterHaruma_Text_4:
# 160 "data/maps/MansionMainHall/scripts.pory"
	.string "Kikuno-san just went outside to the\n"
	.string "main garden.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I see. Thank you, Haruma.$"

MansionMainHall_Eventscript_WaitressMinori_Text_0:
# 171 "data/maps/MansionMainHall/scripts.pory"
	.string "Minori$"

MansionMainHall_Eventscript_WaitressKoharu_Text_0:
# 204 "data/maps/MansionMainHall/scripts.pory"
	.string "Koharu$"

MansionMainHall_Eventscript_WaiterAoi_Text_0:
# 235 "data/maps/MansionMainHall/scripts.pory"
	.string "Aoi$"

MansionMainHall_Eventscript_WaiterAoi_Text_1:
# 239 "data/maps/MansionMainHall/scripts.pory"
	.string "I have to work harder. FOR OUR YOUNG\n"
	.string "LADY!!$"

MansionMainHall_Eventscript_WaiterAoi_Text_2:
# 245 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(I better leave him alone... with the\n"
	.string "statues.)$"

MansionMainHall_Eventscript_WaiterAoi_Text_3:
# 251 "data/maps/MansionMainHall/scripts.pory"
	.string "Ugh, why are these statues so big... And\n"
	.string "why are there so many of them in this\l"
	.string "mansion...\p"
	.string "Thanksfully this is the last one I have\n"
	.string "to clean tonight.$"

MansionMainHall_Eventscript_WaiterAoi_Text_4:
# 258 "data/maps/MansionMainHall/scripts.pory"
	.string "Y-Young Lady! How can I help?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Oh, it's nothing.\p"
	.string ".......\p"
	.string "You've worked hard, Aoi.$"

MansionMainHall_Eventscript_WaiterAoi_Text_5:
# 273 "data/maps/MansionMainHall/scripts.pory"
	.string "T-This is nothing, Young Lady!! I can\n"
	.string "still work harder!!$"

MansionMainHall_Eventscript_EmptyGuestRoom_Text_0:
# 289 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(It's my guest room. I don't have any\n"
	.string "guest visiting right now so it must be\l"
	.string "empty.)$"

MansionMainHall_Eventscript_NotTheWayOutToMainGarden_Text_0:
# 297 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I have no business in the Berry Garden\n"
	.string "right now.$"

AlertingWildPokemonGotInside::
# 178 "data/maps/MansionMainHall/scripts.pory"
	.string "Earlier some wild Pokémon got inside the\n"
	.string "east hall and made a mess.\p"
	.string "The matter was resolved but we're still\n"
	.string "cleaning up.\p"
	.string "You may prefer to exit through this\n"
	.string "west hall right now, Young Lady.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I see. That explained the noise I heard\n"
	.string "earlier.\p"
	.string "Thank you for your hard work.$"

TakeharusOffice::
# 211 "data/maps/MansionMainHall/scripts.pory"
	.string "Master Kirijo told us to not let anyone\n"
	.string "in his office.\p"
	.string "I'll go ask him if you want to, Young\n"
	.string "Lady.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}It's fine, Koharu.\p"
	.string "(Besides, I already discussed with\n"
	.string "Father about all the documents he\l"
	.string "keeps in there.)$"
