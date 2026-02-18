MansionMainHall_MapScripts::
# 2 "data/maps/MansionMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/MansionMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MansionMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_STOPPED_BY_TKHR
	goto_if_eq MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_FIND_KUKI
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
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_STOPPED_BY_TKHR, MansionMainHall_Eventscript_OnFrame2
	.2byte 0


MansionMainHall_Eventscript_OnFrame2::
# 16 "data/maps/MansionMainHall/scripts.pory"
	goto MansionMainHall_Eventscript_TakeharuStoppingMitsuru
	return


MansionMainHall_Eventscript_TakeharuStoppingMitsuru::
# 20 "data/maps/MansionMainHall/scripts.pory"
	lock
# 21 "data/maps/MansionMainHall/scripts.pory"
	delay 10
# 22 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_0
# 23 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 24 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_0
# 25 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 26 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 27 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 28 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 29 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 30 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_TAKEHARU, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_1
# 31 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_2
# 32 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 33 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_1
# 44 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 45 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 46 "data/maps/MansionMainHall/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 47 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, walkinplaceright
# 48 "data/maps/MansionMainHall/scripts.pory"
	waitmoncry
# 49 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 50 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_2
# 52 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 53 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_TAKEHARU, faceup
# 54 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, facedown
# 55 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 56 "data/maps/MansionMainHall/scripts.pory"
	delay 60
# 57 "data/maps/MansionMainHall/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 58 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, walkinplacedown
# 59 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 60 "data/maps/MansionMainHall/scripts.pory"
	waitmoncry
# 61 "data/maps/MansionMainHall/scripts.pory"
	delay 30
# 62 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_3
# 63 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_TAKEHARU, faceright
# 64 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 65 "data/maps/MansionMainHall/scripts.pory"
	delay 30
# 66 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_3
# 70 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 71 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_4
# 72 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 73 "data/maps/MansionMainHall/scripts.pory"
	removeobject LOCALID_INTELEON
# 74 "data/maps/MansionMainHall/scripts.pory"
	setflag FLAG_TEMP_1
# 75 "data/maps/MansionMainHall/scripts.pory"
	delay 30
# 76 "data/maps/MansionMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 77 "data/maps/MansionMainHall/scripts.pory"
	waitfanfare
# 78 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_4
# 79 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 80 "data/maps/MansionMainHall/scripts.pory"
	goto_if_unset FLAG_COMPANION_MENU_GET, MansionMainHall_Eventscript_TakeharuStoppingMitsuru_2
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_1:
# 85 "data/maps/MansionMainHall/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 86 "data/maps/MansionMainHall/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 87 "data/maps/MansionMainHall/scripts.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 88 "data/maps/MansionMainHall/scripts.pory"
	clearflag FLAG_LOCK_INTELEON_T
# 89 "data/maps/MansionMainHall/scripts.pory"
	fwdtime 22, 45
# 90 "data/maps/MansionMainHall/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_FIND_KUKI
# 91 "data/maps/MansionMainHall/scripts.pory"
	release
	end

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_2:
# 82 "data/maps/MansionMainHall/scripts.pory"
	call EventScript_ShowHelpCompanion
# 83 "data/maps/MansionMainHall/scripts.pory"
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
	compare VAR_MITSURUS_INTRO_STATE, M_INTRO_COMPLETED
	goto_if_lt MansionMainHall_Eventscript_BlockingEastHall_1
	return

MansionMainHall_Eventscript_BlockingEastHall_1:
# 189 "data/maps/MansionMainHall/scripts.pory"
	lock
# 190 "data/maps/MansionMainHall/scripts.pory"
	applymovement 4, facedown
# 191 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 192 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 193 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressMinori_Text_0
# 194 "data/maps/MansionMainHall/scripts.pory"
	msgbox AlertingWildPokemonGotInside
# 195 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 196 "data/maps/MansionMainHall/scripts.pory"
	applymovement 4, faceleft
# 197 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 198 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 199 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_WaitressKoharu::
# 205 "data/maps/MansionMainHall/scripts.pory"
	lock
# 206 "data/maps/MansionMainHall/scripts.pory"
	faceplayer
# 207 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressKoharu_Text_0
# 208 "data/maps/MansionMainHall/scripts.pory"
	msgbox TakeharusOffice
# 209 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 210 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_BlockingTakeharusOffice::
# 222 "data/maps/MansionMainHall/scripts.pory"
	lock
# 223 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 224 "data/maps/MansionMainHall/scripts.pory"
	applymovement 6, faceleft
# 225 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 226 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressKoharu_Text_0
# 227 "data/maps/MansionMainHall/scripts.pory"
	msgbox TakeharusOffice
# 228 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 229 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 230 "data/maps/MansionMainHall/scripts.pory"
	applymovement 6, facedown
# 231 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 232 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_WaiterAoi::
# 237 "data/maps/MansionMainHall/scripts.pory"
	lock
# 238 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterAoi_Text_0
# 239 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MansionMainHall_Eventscript_WaiterAoi_2
# 254 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_3
# 256 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 257 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 258 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, MansionMainHall_Eventscript_WaiterHaruma_Movement_0
# 259 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 260 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterAoi_Text_0
# 261 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_4
# 265 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 266 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 267 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, emoteexclamation
# 268 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 269 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 270 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_CHARM
# 271 "data/maps/MansionMainHall/scripts.pory"
	waitse
# 272 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_CHARM
# 273 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, MansionMainHall_Eventscript_WaiterAoi_Movement_0
# 274 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 275 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterAoi_Text_0
# 276 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_5
# 277 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 278 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_BUBBLE
# 279 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 280 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 281 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 282 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, facedown
# 283 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 284 "data/maps/MansionMainHall/scripts.pory"
	setvar VAR_TEMP_2, 1
# 286 "data/maps/MansionMainHall/scripts.pory"
	release
	end

MansionMainHall_Eventscript_WaiterAoi_2:
# 240 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, shakehorizontal
# 241 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 242 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_1
# 243 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 244 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_BUBBLE
# 245 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 246 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 247 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 248 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_2
# 249 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 250 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_EmptyGuestRoom::
# 291 "data/maps/MansionMainHall/scripts.pory"
	lock
# 292 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_EmptyGuestRoom_Text_0
# 293 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 294 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_NotTheWayOutToMainGarden::
# 299 "data/maps/MansionMainHall/scripts.pory"
	lock
# 300 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_NotTheWayOutToMainGarden_Text_0
# 301 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 302 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 303 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 304 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_IndeedeeM::
# 309 "data/maps/MansionMainHall/scripts.pory"
	moncryscript SPECIES_INDEEDEE_M
# 310 "data/maps/MansionMainHall/scripts.pory"
	release
	end


# 22 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_0:
# 22 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 22 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 22 "data/maps/MansionMainHall/scripts.pory"
	walk_down
	step_end

# 30 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_1:
# 30 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 30 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 30 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 30 "data/maps/MansionMainHall/scripts.pory"
	walk_right
	step_end

# 31 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_2:
# 31 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 31 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 31 "data/maps/MansionMainHall/scripts.pory"
	walk_right
# 31 "data/maps/MansionMainHall/scripts.pory"
	walk_right
	step_end

# 62 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_3:
# 62 "data/maps/MansionMainHall/scripts.pory"
	walk_right
# 62 "data/maps/MansionMainHall/scripts.pory"
	walk_right
# 62 "data/maps/MansionMainHall/scripts.pory"
	face_left
	step_end

# 71 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_4:
# 71 "data/maps/MansionMainHall/scripts.pory"
	walk_down
# 71 "data/maps/MansionMainHall/scripts.pory"
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

# 273 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_WaiterAoi_Movement_0:
# 273 "data/maps/MansionMainHall/scripts.pory"
	emote_heart
	step_end

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_0:
# 24 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_TKHR}Mitsuru.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_1:
# 33 "data/maps/MansionMainHall/scripts.pory"
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
# 50 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Father.....\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}If that'll put your mind more at ease,\n"
	.string "I'll do so.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_3:
# 66 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I must go now.\p"
	.string "Please take care, Father.\p"
	.string "{SPEAKER NAME_TKHR}{DESTROY_MUGSHOT}Stay safe, and come back to me, Mitsuru.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}I fully intend to.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_4:
# 78 "data/maps/MansionMainHall/scripts.pory"
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
# 207 "data/maps/MansionMainHall/scripts.pory"
	.string "Koharu$"

MansionMainHall_Eventscript_WaiterAoi_Text_0:
# 238 "data/maps/MansionMainHall/scripts.pory"
	.string "Aoi$"

MansionMainHall_Eventscript_WaiterAoi_Text_1:
# 242 "data/maps/MansionMainHall/scripts.pory"
	.string "I have to work harder. FOR OUR YOUNG\n"
	.string "LADY!!$"

MansionMainHall_Eventscript_WaiterAoi_Text_2:
# 248 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(I better leave him alone... with the\n"
	.string "statues.)$"

MansionMainHall_Eventscript_WaiterAoi_Text_3:
# 254 "data/maps/MansionMainHall/scripts.pory"
	.string "Ugh, why are these statues so big... And\n"
	.string "why are there so many of them in this\l"
	.string "mansion...\p"
	.string "Thanksfully this is the last one I have\n"
	.string "to clean tonight.$"

MansionMainHall_Eventscript_WaiterAoi_Text_4:
# 261 "data/maps/MansionMainHall/scripts.pory"
	.string "Y-Young Lady! How can I help?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Oh, it's nothing.\p"
	.string ".......\p"
	.string "You've worked hard, Aoi.$"

MansionMainHall_Eventscript_WaiterAoi_Text_5:
# 276 "data/maps/MansionMainHall/scripts.pory"
	.string "T-This is nothing, Young Lady!! I can\n"
	.string "still work harder!!$"

MansionMainHall_Eventscript_EmptyGuestRoom_Text_0:
# 292 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(It's my guest room. I don't have any\n"
	.string "guest visiting right now so it must be\l"
	.string "empty.)$"

MansionMainHall_Eventscript_NotTheWayOutToMainGarden_Text_0:
# 300 "data/maps/MansionMainHall/scripts.pory"
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
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I see. That explains the noise I heard\n"
	.string "earlier.\p"
	.string "Thank you for your hard work.$"

TakeharusOffice::
# 214 "data/maps/MansionMainHall/scripts.pory"
	.string "Master Kirijo told us to not let anyone\n"
	.string "in his office.\p"
	.string "I'll go ask him if you want to, Young\n"
	.string "Lady.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}It's fine, Koharu.\p"
	.string "(Besides, I already discussed with\n"
	.string "Father about all the documents he\l"
	.string "keeps in there.)$"
