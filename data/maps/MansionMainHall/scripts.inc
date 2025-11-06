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
	setflag FLAG_HIDE_TALK_BUTTON
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
	setvar VAR_MITSURUS_INTRO_STATE, 3
# 21 "data/maps/MansionMainHall/scripts.pory"
	delay 30
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
	msgbox MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_4
# 77 "data/maps/MansionMainHall/scripts.pory"
	call Eventscript_CutsceneEnds
# 78 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_Takeharu::
# 83 "data/maps/MansionMainHall/scripts.pory"
	lock
# 84 "data/maps/MansionMainHall/scripts.pory"
	faceplayer
# 85 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Takeharu_Text_0
# 88 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 89 "data/maps/MansionMainHall/scripts.pory"
	release
	return


MansionMainHall_Eventscript_Butler::
# 93 "data/maps/MansionMainHall/scripts.pory"
	lock
# 94 "data/maps/MansionMainHall/scripts.pory"
	faceplayer
# 95 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_Butler_Text_0
# 96 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq MansionMainHall_Eventscript_Butler_2
# 116 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Butler_Text_4
# 119 "data/maps/MansionMainHall/scripts.pory"
	closemessage
MansionMainHall_Eventscript_Butler_1:
# 121 "data/maps/MansionMainHall/scripts.pory"
	release
	end

MansionMainHall_Eventscript_Butler_2:
# 97 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Butler_Text_1
# 99 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 100 "data/maps/MansionMainHall/scripts.pory"
	playse SE_FAINT
# 101 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_BUTLER, MansionMainHall_Eventscript_Butler_Movement_0
# 102 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 103 "data/maps/MansionMainHall/scripts.pory"
	waitse
# 104 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Butler_Text_2
# 105 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_Butler_Text_0
# 106 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_Butler_Text_3
# 107 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 108 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_BUBBLE
# 109 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 110 "data/maps/MansionMainHall/scripts.pory"
	waitse
# 111 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 112 "data/maps/MansionMainHall/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto MansionMainHall_Eventscript_Butler_1


MansionMainHall_Eventscript_WaiterHaruma::
# 126 "data/maps/MansionMainHall/scripts.pory"
	lock
# 127 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterHaruma_Text_0
# 128 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq MansionMainHall_Eventscript_WaiterHaruma_2
# 146 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterHaruma_Text_4
# 148 "data/maps/MansionMainHall/scripts.pory"
	closemessage
MansionMainHall_Eventscript_WaiterHaruma_1:
# 150 "data/maps/MansionMainHall/scripts.pory"
	release
	end

MansionMainHall_Eventscript_WaiterHaruma_2:
# 129 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterHaruma_Text_1
# 130 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 131 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 132 "data/maps/MansionMainHall/scripts.pory"
	applymovement 7, MansionMainHall_Eventscript_WaiterHaruma_Movement_0
# 133 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 134 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterHaruma_Text_0
# 135 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterHaruma_Text_2
# 137 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterHaruma_Text_0
# 138 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterHaruma_Text_3
# 140 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 141 "data/maps/MansionMainHall/scripts.pory"
	applymovement 7, faceleft
# 142 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 143 "data/maps/MansionMainHall/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto MansionMainHall_Eventscript_WaiterHaruma_1


MansionMainHall_Eventscript_WaitressMinori::
# 155 "data/maps/MansionMainHall/scripts.pory"
	lock
# 156 "data/maps/MansionMainHall/scripts.pory"
	faceplayer
# 157 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressMinori_Text_0
# 158 "data/maps/MansionMainHall/scripts.pory"
	msgbox AlertingWildPokemonGotInside
# 159 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 160 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_BlockingEastHall::
# 173 "data/maps/MansionMainHall/scripts.pory"
	lock
# 174 "data/maps/MansionMainHall/scripts.pory"
	applymovement 4, facedown
# 175 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 176 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 177 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressMinori_Text_0
# 178 "data/maps/MansionMainHall/scripts.pory"
	msgbox AlertingWildPokemonGotInside
# 179 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 180 "data/maps/MansionMainHall/scripts.pory"
	applymovement 4, faceleft
# 181 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 182 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 183 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_WaitressKoharu::
# 188 "data/maps/MansionMainHall/scripts.pory"
	lock
# 189 "data/maps/MansionMainHall/scripts.pory"
	faceplayer
# 190 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressKoharu_Text_0
# 191 "data/maps/MansionMainHall/scripts.pory"
	msgbox TakeharusOffice
# 192 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 193 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_BlockingTakeharusOffice::
# 205 "data/maps/MansionMainHall/scripts.pory"
	lock
# 206 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 207 "data/maps/MansionMainHall/scripts.pory"
	applymovement 6, faceleft
# 208 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 209 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaitressKoharu_Text_0
# 210 "data/maps/MansionMainHall/scripts.pory"
	msgbox TakeharusOffice
# 211 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 212 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 213 "data/maps/MansionMainHall/scripts.pory"
	applymovement 6, facedown
# 214 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 215 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_WaiterAoi::
# 220 "data/maps/MansionMainHall/scripts.pory"
	lock
# 221 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterAoi_Text_0
# 222 "data/maps/MansionMainHall/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq MansionMainHall_Eventscript_WaiterAoi_2
# 237 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_3
# 239 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 240 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 241 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, MansionMainHall_Eventscript_WaiterHaruma_Movement_0
# 242 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 243 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterAoi_Text_0
# 244 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_4
# 248 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 249 "data/maps/MansionMainHall/scripts.pory"
	playse SE_PIN
# 250 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, emoteexclamation
# 251 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 252 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 253 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_CHARM
# 254 "data/maps/MansionMainHall/scripts.pory"
	waitse
# 255 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_CHARM
# 256 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, MansionMainHall_Eventscript_WaiterAoi_Movement_0
# 257 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 258 "data/maps/MansionMainHall/scripts.pory"
	setspeaker MansionMainHall_Eventscript_WaiterAoi_Text_0
# 259 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_5
# 260 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 261 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_BUBBLE
# 262 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 263 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 264 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 265 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, facedown
# 266 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 267 "data/maps/MansionMainHall/scripts.pory"
	setvar VAR_TEMP_2, 1
# 269 "data/maps/MansionMainHall/scripts.pory"
	release
	end

MansionMainHall_Eventscript_WaiterAoi_2:
# 223 "data/maps/MansionMainHall/scripts.pory"
	applymovement 5, shakehorizontal
# 224 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 225 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_1
# 226 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 227 "data/maps/MansionMainHall/scripts.pory"
	playse SE_M_BUBBLE
# 228 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emotesweat
# 229 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 230 "data/maps/MansionMainHall/scripts.pory"
	delay 20
# 231 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_WaiterAoi_Text_2
# 232 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 233 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_EmptyGuestRoom::
# 274 "data/maps/MansionMainHall/scripts.pory"
	lock
# 275 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_EmptyGuestRoom_Text_0
# 276 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 277 "data/maps/MansionMainHall/scripts.pory"
	release
	end


MansionMainHall_Eventscript_NotTheWayOutToMainGarden::
# 282 "data/maps/MansionMainHall/scripts.pory"
	lock
# 283 "data/maps/MansionMainHall/scripts.pory"
	msgbox MansionMainHall_Eventscript_NotTheWayOutToMainGarden_Text_0
# 284 "data/maps/MansionMainHall/scripts.pory"
	closemessage
# 285 "data/maps/MansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 286 "data/maps/MansionMainHall/scripts.pory"
	waitmovement 0
# 287 "data/maps/MansionMainHall/scripts.pory"
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

# 101 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_Butler_Movement_0:
# 101 "data/maps/MansionMainHall/scripts.pory"
	emote_cry
# 101 "data/maps/MansionMainHall/scripts.pory"
	shake_horizontal
	step_end

# 132 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_WaiterHaruma_Movement_0:
# 132 "data/maps/MansionMainHall/scripts.pory"
	emote_exclamation_mark
# 132 "data/maps/MansionMainHall/scripts.pory"
	face_player
	step_end

# 256 "data/maps/MansionMainHall/scripts.pory"
MansionMainHall_Eventscript_WaiterAoi_Movement_0:
# 256 "data/maps/MansionMainHall/scripts.pory"
	emote_heart
	step_end

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_0:
# 24 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_TAKEHARU}Mitsuru.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_1:
# 33 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Father...\p"
	.string "{SPEAKER NAME_TAKEHARU}{DESTROY_MUGSHOT}So you really intend to go, no matter\n"
	.string "what I say.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I'm sorry, Father...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}But we already talked about this\n"
	.string "before.\p"
	.string "This is also my responsibility as a\n"
	.string "Kirijo.\p"
	.string "I simply cannot sit still while our\n"
	.string "family's name is getting further\l"
	.string "tainted.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}Please... don't stop me, Father.\p"
	.string "{SPEAKER NAME_TAKEHARU}{DESTROY_MUGSHOT}You already know I don't fully agree\n"
	.string "with this.\p"
	.string "No sane parents would let their\n"
	.string "children do something this dangerous.\p"
	.string "However, I'm also aware that I won't be\n"
	.string "able to stop you, since stubborness\l"
	.string "apparently runs in both of our veins.\p"
	.string "So please, take Inteleon with you. He\n"
	.string "can look over you in my stead.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_2:
# 50 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Father.....\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}If that'll put your mind more at ease,\n"
	.string "I'll do so.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_3:
# 66 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I must go now.\p"
	.string "Please take care, Father.\p"
	.string "{SPEAKER NAME_TAKEHARU}{DESTROY_MUGSHOT}Stay safe, and come back to me, Mitsuru.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}I'm fully intended to.$"

MansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_4:
# 76 "data/maps/MansionMainHall/scripts.pory"
	.string "Inteleon is now your Companion.$"

MansionMainHall_Eventscript_Takeharu_Text_0:
# 85 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_TAKEHARU}If you need anything on your journey,\n"
	.string "just make a call to home.\p"
	.string "I'll be sure to assist you whenever.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That is assuring. Thank you, Father.$"

MansionMainHall_Eventscript_Butler_Text_0:
# 95 "data/maps/MansionMainHall/scripts.pory"
	.string "Butler Yuuma$"

MansionMainHall_Eventscript_Butler_Text_1:
# 97 "data/maps/MansionMainHall/scripts.pory"
	.string "So you decided to go after all...\p"
	.string "I will miss you so much, Young Ladyyyy.$"

MansionMainHall_Eventscript_Butler_Text_2:
# 104 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}Y-Yuuma-san, please don't cry. I'll\n"
	.string "definitely be back in no time!$"

MansionMainHall_Eventscript_Butler_Text_3:
# 106 "data/maps/MansionMainHall/scripts.pory"
	.string "{DESTROY_MUGSHOT}-sniff sniff-$"

MansionMainHall_Eventscript_Butler_Text_4:
# 116 "data/maps/MansionMainHall/scripts.pory"
	.string "-sniff sniff-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}P-Please stop crying, Yuuma-san...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}(Sigh, how do I comfort a person in\n"
	.string "distress...?)$"

MansionMainHall_Eventscript_WaiterHaruma_Text_0:
# 127 "data/maps/MansionMainHall/scripts.pory"
	.string "Haruma$"

MansionMainHall_Eventscript_WaiterHaruma_Text_1:
# 129 "data/maps/MansionMainHall/scripts.pory"
	.string "That dang kid Aoi better not slacking\n"
	.string "off and leaving me finish cleaning\l"
	.string "these statues on my own.$"

MansionMainHall_Eventscript_WaiterHaruma_Text_2:
# 135 "data/maps/MansionMainHall/scripts.pory"
	.string "Young Lady, what can I do for you?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I don't see Kikuno anywhere. Do you\n"
	.string "know where she went to?$"

MansionMainHall_Eventscript_WaiterHaruma_Text_3:
# 138 "data/maps/MansionMainHall/scripts.pory"
	.string "{DESTROY_MUGSHOT}I saw she go outside to the main garden\n"
	.string "just earlier.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you, Haruma.$"

MansionMainHall_Eventscript_WaiterHaruma_Text_4:
# 146 "data/maps/MansionMainHall/scripts.pory"
	.string "Kikuno-san just went outside to the\n"
	.string "main garden.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. Thank you, Haruma.$"

MansionMainHall_Eventscript_WaitressMinori_Text_0:
# 157 "data/maps/MansionMainHall/scripts.pory"
	.string "Minori$"

MansionMainHall_Eventscript_WaitressKoharu_Text_0:
# 190 "data/maps/MansionMainHall/scripts.pory"
	.string "Koharu$"

MansionMainHall_Eventscript_WaiterAoi_Text_0:
# 221 "data/maps/MansionMainHall/scripts.pory"
	.string "Aoi$"

MansionMainHall_Eventscript_WaiterAoi_Text_1:
# 225 "data/maps/MansionMainHall/scripts.pory"
	.string "I have to work harder. FOR OUR YOUNG\n"
	.string "LADY!!$"

MansionMainHall_Eventscript_WaiterAoi_Text_2:
# 231 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I better leave him alone... with the\n"
	.string "statues.)$"

MansionMainHall_Eventscript_WaiterAoi_Text_3:
# 237 "data/maps/MansionMainHall/scripts.pory"
	.string "Ugh, why are these statues so big... And\n"
	.string "why are there so many of them in this\l"
	.string "mansion...\p"
	.string "Thanksfully this is the last one I have\n"
	.string "to clean tonight.$"

MansionMainHall_Eventscript_WaiterAoi_Text_4:
# 244 "data/maps/MansionMainHall/scripts.pory"
	.string "Y-Young Lady! How can I help?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Oh, it's nothing.\p"
	.string ".......\p"
	.string "You've worked hard, Aoi.$"

MansionMainHall_Eventscript_WaiterAoi_Text_5:
# 259 "data/maps/MansionMainHall/scripts.pory"
	.string "T-This is nothing, Young Lady!! I can\n"
	.string "still work harder!!$"

MansionMainHall_Eventscript_EmptyGuestRoom_Text_0:
# 275 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(It's my guest room. I don't have any\n"
	.string "guest visited right now so it must be\l"
	.string "empty.)$"

MansionMainHall_Eventscript_NotTheWayOutToMainGarden_Text_0:
# 283 "data/maps/MansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I have no business in the Berry Garden\n"
	.string "right now.$"

AlertingWildPokemonGotInside::
# 164 "data/maps/MansionMainHall/scripts.pory"
	.string "Earlier some wild Pokémon got inside the\n"
	.string "east hall and made a mess.\p"
	.string "The matter was resolved but we're still\n"
	.string "cleaning up.\p"
	.string "You may prefer to exit through this\n"
	.string "west hall right now, Young Lady.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I see. That explained the noise I heard\n"
	.string "earlier.\p"
	.string "Thank you for your hard work.$"

TakeharusOffice::
# 197 "data/maps/MansionMainHall/scripts.pory"
	.string "Master Kirijo told us to not let anyone\n"
	.string "in his office.\p"
	.string "I'll go ask him if you want to, Young\n"
	.string "Lady.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}It's fine, Koharu.\p"
	.string "(Besides, I already discussed with\n"
	.string "Father about all the documents he\l"
	.string "keeps in there.)$"
