ThundershardsCave_1F_MapScripts::
# 2 "data/maps/ThundershardsCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_gt ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
	return


ThundershardsCave_1F_EventScript_NeckBeardInvites1::
# 11 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 12 "data/maps/ThundershardsCave_1F/scripts.pory"
	hidetalkbutton
# 13 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 16 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 19 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 22 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 28 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 32 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 35 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 39 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 40 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 42 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 45 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 49 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 60 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 62 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 64 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
# 65 "data/maps/ThundershardsCave_1F/scripts.pory"
	showtalkbutton
	end


ThundershardsCave_1F_EventScript_NeckBeardInvites2::
# 70 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 71 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 73 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 75 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 76 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 77 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 9, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 79 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 9
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 81 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0
# 83 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 85 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 89 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 90 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, emotemusic
# 91 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 92 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 93 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 95 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 96 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, walkleft
# 97 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 98 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 99 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 100 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 101 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 102 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 103 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 106 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 107 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 109 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1
# 111 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2
# 113 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 12
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 12
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 9
# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 119 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 121 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 123 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 124 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 125 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


ThundershardsCave_1F_EventScript_MiningRock::
# 130 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 131 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_MiningRock_Text_0, MSGBOX_YESNO
# 132 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ThundershardsCave_1F_EventScript_MiningRock_2
ThundershardsCave_1F_EventScript_MiningRock_1:
# 145 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 146 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
# 147 "data/maps/ThundershardsCave_1F/scripts.pory"
	showtalkbutton
	end

ThundershardsCave_1F_EventScript_MiningRock_2:
# 133 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 134 "data/maps/ThundershardsCave_1F/scripts.pory"
	dotimebasedevents
# 135 "data/maps/ThundershardsCave_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/ThundershardsCave_1F/scripts.pory"
	special StartMining
# 137 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitstate
# 138 "data/maps/ThundershardsCave_1F/scripts.pory"
	hidetalkbutton
# 139 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 140 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 8, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 141 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 142 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 8
# 143 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_MINING_ROCK_THUNDERSHARDS_CAVE_1F
	goto ThundershardsCave_1F_EventScript_MiningRock_1


# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0:
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
	step_end

# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1:
# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
	shake_horizontal
	step_end

# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2:
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	rock_smash_break
	step_end

# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3:
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4:
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5:
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
	step_end

# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6:
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_down
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0:
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1:
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_up
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
	step_end

# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2:
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_up
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0:
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Big Man$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1:
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rocks are fascinating, don't you agree,\n"
	.string "young lady?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}Huh? Oh- yes, I suppose they are.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2:
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rock-loving Big Man?$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3:
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I know right? Your answer just made my\n"
	.string "day!\p"
	.string "If only my son thought the same.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4:
# 42 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Here, your can have this. I got it from\n"
	.string "breaking the rock just now.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5:
# 45 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I'd love to give you a pickaxe so you\n"
	.string "can break rocks for items on your own.\p"
	.string "Unfortunately I only have this old one\n"
	.string "with me and it's my lucky charm.\p"
	.string "If you visit my house in Coralport I can\n"
	.string "give you a new one.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6:
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Mr. Nebe$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7:
# 49 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Just ask around for Nebe's house when\n"
	.string "you get there. Coralport is very\l"
	.string "hospitable.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}I- Thank you. Nebe-san.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8:
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}.......\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should go on with my mission.)$"

ThundershardsCave_1F_EventScript_MiningRock_Text_0:
# 131 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Start mining this rock?$"
