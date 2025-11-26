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
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 13 "data/maps/ThundershardsCave_1F/scripts.pory"
	hidetalkbutton
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 16 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 19 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 22 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4
# 28 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 31 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 35 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 38 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 40 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 42 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 45 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 46 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 49 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 50 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 59 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 60 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 62 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 64 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 65 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 66 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
# 67 "data/maps/ThundershardsCave_1F/scripts.pory"
	showtalkbutton
	end


ThundershardsCave_1F_EventScript_NeckBeardInvites2::
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 73 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 75 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 76 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 77 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 79 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 81 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 83 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 85 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 89 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 90 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 92 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 93 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 95 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 96 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 97 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 99 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 100 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 101 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 102 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 103 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 104 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 105 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 106 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 107 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 111 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 113 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 119 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 120 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 121 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 124 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 125 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 126 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 127 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 128 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


Common_EventScript_MiningRock::
# 133 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 134 "data/maps/ThundershardsCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_MINING_KIT, Common_EventScript_MiningRock_2
# 150 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_1
Common_EventScript_MiningRock_1:
# 152 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 153 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
# 154 "data/maps/ThundershardsCave_1F/scripts.pory"
	showtalkbutton
	end

Common_EventScript_MiningRock_2:
# 135 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_0, MSGBOX_YESNO
# 136 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MiningRock_5
	goto Common_EventScript_MiningRock_1

Common_EventScript_MiningRock_5:
# 137 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 138 "data/maps/ThundershardsCave_1F/scripts.pory"
	dotimebasedevents
# 139 "data/maps/ThundershardsCave_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/ThundershardsCave_1F/scripts.pory"
	special StartMining
# 141 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitstate
# 142 "data/maps/ThundershardsCave_1F/scripts.pory"
	hidetalkbutton
# 143 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 144 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 145 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 146 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Common_EventScript_MiningRock_1


# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0:
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
	step_end

# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1:
# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
	shake_horizontal
	step_end

# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2:
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	rock_smash_break
	step_end

# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3:
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
	step_end

# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4:
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5:
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6:
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_down
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0:
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1:
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_up
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2:
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_up
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0:
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Big Man$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1:
# 31 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rocks are fascinating, don't you agree,\n"
	.string "young lady?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}Huh? Oh- yes, I suppose they are.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2:
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rock-loving Big Man?$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3:
# 38 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I know right? Your answer just made my\n"
	.string "day!\p"
	.string "If only my son thought the same.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4:
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Here, your can have this. I got it from\n"
	.string "mining the rock just now.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5:
# 46 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I'd love to give you a tools to mine\n"
	.string "rocks on your own.\p"
	.string "Unfortunately I only have this old\n"
	.string "mining kit with me and it's my lucky\l"
	.string "charm.\p"
	.string "If you visit my house in Coralport I can\n"
	.string "give you a new one.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6:
# 49 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Mr. Nebe$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7:
# 50 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Just ask around for Nebe's house when\n"
	.string "you get there. Coralport is very\l"
	.string "hospitable.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}I- Thank you. Nebe-san.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8:
# 60 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}.......\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should go on with my mission.)$"

Common_EventScript_MiningRock_Text_0:
# 135 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Start mining this rock?$"

Common_EventScript_MiningRock_Text_1:
# 150 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "You don't have tools to break this\n"
	.string "mining rock.$"
