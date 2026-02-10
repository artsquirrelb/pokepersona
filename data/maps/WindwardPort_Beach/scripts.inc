WindwardPort_Beach_MapScripts::
	.byte 0


WindwardPort_Beach_ParasolLady::
# 4 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 5 "data/maps/WindwardPort_Beach/scripts.pory"
	faceplayer
# 6 "data/maps/WindwardPort_Beach/scripts.pory"
	setspeaker WindwardPort_Beach_ParasolLady_Text_0
# 7 "data/maps/WindwardPort_Beach/scripts.pory"
	msgbox WindwardPort_Beach_ParasolLady_Text_1
# 9 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


WindwardPort_Beach_Mareanie::
# 14 "data/maps/WindwardPort_Beach/scripts.pory"
	startoverworldencounter 255
# 15 "data/maps/WindwardPort_Beach/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 16 "data/maps/WindwardPort_Beach/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/WindwardPort_Beach/scripts.pory"
	setflag FLAG_TEMP_1
# 18 "data/maps/WindwardPort_Beach/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 19 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


WindwardPort_Beach_Sandcastle::
# 24 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 25 "data/maps/WindwardPort_Beach/scripts.pory"
	msgbox WindwardPort_Beach_Sandcastle_Text_0
# 26 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


WindwardPort_Beach_Roughneck::
# 31 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 32 "data/maps/WindwardPort_Beach/scripts.pory"
	faceplayer
# 33 "data/maps/WindwardPort_Beach/scripts.pory"
	setspeaker WindwardPort_Beach_Roughneck_Text_0
# 34 "data/maps/WindwardPort_Beach/scripts.pory"
	msgbox WindwardPort_Beach_RoughneckBlock
# 35 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


WindwardPort_Beach_Roughneck_Trigger::
# 45 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 46 "data/maps/WindwardPort_Beach/scripts.pory"
	applymove TOSHITADA, walkinplacedown
# 47 "data/maps/WindwardPort_Beach/scripts.pory"
	turnobject MC, DIR_NORTH
# 48 "data/maps/WindwardPort_Beach/scripts.pory"
	msgbox WindwardPort_Beach_RoughneckBlock
# 49 "data/maps/WindwardPort_Beach/scripts.pory"
	closemessage
# 50 "data/maps/WindwardPort_Beach/scripts.pory"
	applymovement TOSHITADA, WindwardPort_Beach_Roughneck_Trigger_Movement_0
# 51 "data/maps/WindwardPort_Beach/scripts.pory"
	applymoveplayer WindwardPort_Beach_Roughneck_Trigger_Movement_1
# 52 "data/maps/WindwardPort_Beach/scripts.pory"
	delay 30
# 53 "data/maps/WindwardPort_Beach/scripts.pory"
	applymove TOSHITADA, WindwardPort_Beach_Roughneck_Trigger_Movement_2
# 54 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


# 50 "data/maps/WindwardPort_Beach/scripts.pory"
WindwardPort_Beach_Roughneck_Trigger_Movement_0:
# 50 "data/maps/WindwardPort_Beach/scripts.pory"
	walk_down
# 50 "data/maps/WindwardPort_Beach/scripts.pory"
	face_left
	step_end

# 51 "data/maps/WindwardPort_Beach/scripts.pory"
WindwardPort_Beach_Roughneck_Trigger_Movement_1:
# 51 "data/maps/WindwardPort_Beach/scripts.pory"
	face_right
# 51 "data/maps/WindwardPort_Beach/scripts.pory"
	lock_facing_direction
# 51 "data/maps/WindwardPort_Beach/scripts.pory"
	walk_left
# 51 "data/maps/WindwardPort_Beach/scripts.pory"
	unlock_facing_direction
	step_end

# 53 "data/maps/WindwardPort_Beach/scripts.pory"
WindwardPort_Beach_Roughneck_Trigger_Movement_2:
# 53 "data/maps/WindwardPort_Beach/scripts.pory"
	walk_up
# 53 "data/maps/WindwardPort_Beach/scripts.pory"
	face_down
	step_end

WindwardPort_Beach_ParasolLady_Text_0:
# 6 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "Asayo$"

WindwardPort_Beach_ParasolLady_Text_1:
# 7 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "Excuse me, I'm taking a selfie.\n"
	.string "Can you please step away from the\l"
	.string "camera?$"

WindwardPort_Beach_Sandcastle_Text_0:
# 25 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "No matter what you do, the sand castle\n"
	.string "won't budge.$"

WindwardPort_Beach_Roughneck_Text_0:
# 33 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "Toshitada$"

WindwardPort_Beach_RoughneckBlock::
# 39 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "Oi kids. You have no business here.\p"
	.string "Screw off.$"
