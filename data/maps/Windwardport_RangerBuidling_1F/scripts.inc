Windwardport_RangerBuidling_1F_MapScripts::
	.byte 0


Windwardport_RangerBuilding_1F_Elevator::
# 4 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	lock
# 5 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Windwardport_RangerBuilding_1F_Elevator_Text_0, MSGBOX_YESNO
# 6 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_RangerBuilding_1F_Elevator_1
# 14 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	applymoveplayer facedown
# 15 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	release
	end

Windwardport_RangerBuilding_1F_Elevator_1:
# 8 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	call Eventscript_ElevatorSFX
# 9 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	warpsilent MAP_WINDWARDPORT_RANGER_BUIDLING_2F, 3, 5
# 10 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	waitstate
	return


Eventscript_ElevatorSFX::
# 21 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 22 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	playse SE_ESCALATOR
# 23 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	waitse
# 24 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	playse SE_CLICK
# 25 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	waitse
# 26 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 27 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	waitse
	return


Eventscript_DoorLocked::
# 31 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	lock
# 32 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Eventscript_DoorLocked_Text_0
# 33 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_1F_Flygon::
# 38 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	moncryscript SPECIES_FLYGON
# 39 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_1F_Nurse::
# 44 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_1F_Nurse_Text_0
# 45 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	call Eventscript_Ranger_Nurse_Greetings
# 46 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_1F_Nurse_Text_0
# 47 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	call Eventscript_Nurse_Goodbye
# 48 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	release
	end


Eventscript_Ranger_Nurse_Greetings::
# 53 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	lock
# 54 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	faceplayer
# 55 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Eventscript_Ranger_Nurse_Greetings_Text_0
# 57 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	hidefollower
# 58 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	playse MUS_HEAL
# 59 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	waitse
# 60 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	special HealPlayerParty
# 61 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	updatefollowingmon
	return


Windwardport_RangerBuilding_1F_Receptionist::
# 65 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	lock
# 66 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	faceplayer
# 67 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_1F_Receptionist_Text_0
# 68 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Windwardport_RangerBuilding_1F_Receptionist_Text_1
# 69 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Windwardport_RangerBuilding_1F_Receptionist_Text_2
# 72 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_1F_AceF::
# 77 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	lock
# 78 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	faceplayer
# 79 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_1F_AceF_Text_0
# 80 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Windwardport_RangerBuilding_1F_AceF_Text_1
# 82 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_1F_Lady::
# 87 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	lock
# 88 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	faceplayer
# 89 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_1F_Lady_Text_0
# 90 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Windwardport_RangerBuilding_1F_Lady_Text_1
# 93 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_1F_RangerFnKid::
# 98 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	lock
# 99 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_1F_RangerFnKid_Text_0
# 100 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	stepinplace 1, DIR_WEST
# 101 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Windwardport_RangerBuilding_1F_RangerFnKid_Text_1
# 103 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_1F_RangerFnKid_Text_2
# 104 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	stepinplace 5, DIR_EAST
# 105 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Windwardport_RangerBuilding_1F_RangerFnKid_Text_3
# 109 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_1F_RangerFnKid_Text_0
# 110 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	stepinplace 1, DIR_WEST
# 111 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Windwardport_RangerBuilding_1F_RangerFnKid_Text_4
# 112 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_1F_LeaderRoomSign::
# 117 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	lock
# 118 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	msgbox Windwardport_RangerBuilding_1F_LeaderRoomSign_Text_0
# 119 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_1F_Elevator_Text_0:
# 5 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Go to 2F?$"

Eventscript_DoorLocked_Text_0:
# 32 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "It's locked.$"

Windwardport_RangerBuilding_1F_Nurse_Text_0:
# 44 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Nurse Floria$"

Eventscript_Ranger_Nurse_Greetings_Text_0:
# 55 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Hello and welcome to the Pokémon\n"
	.string "Ranger Base.\p"
	.string "Let me heal your tired Pokémon.$"

Windwardport_RangerBuilding_1F_Receptionist_Text_0:
# 67 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Joel$"

Windwardport_RangerBuilding_1F_Receptionist_Text_1:
# 68 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Welcome to Windward Port's Pokémon\n"
	.string "Ranger Base!$"

Windwardport_RangerBuilding_1F_Receptionist_Text_2:
# 69 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Oh, you want to join the Ranger Team?\p"
	.string "You'll have to speak to Team Leader Jui.\p"
	.string "They're currently on a mission on Route\n"
	.string "4.$"

Windwardport_RangerBuilding_1F_AceF_Text_0:
# 79 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Lyra$"

Windwardport_RangerBuilding_1F_AceF_Text_1:
# 80 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "In Kitoha, the ranger force mostly\n"
	.string "deals with problems caused by wild\l"
	.string "Pokémon.\p"
	.string "The moment it involves criminal\n"
	.string "activities, they'll transfer the case to\l"
	.string "the police force.$"

Windwardport_RangerBuilding_1F_Lady_Text_0:
# 89 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Linda$"

Windwardport_RangerBuilding_1F_Lady_Text_1:
# 90 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "My children are studying at the Ranger\n"
	.string "School in the east of Pawlonia City.\p"
	.string "They want to be a Pokémon trainer.\p"
	.string "My eldest daughter specifically wants\n"
	.string "to join the ranger force when she\l"
	.string "graduates.$"

Windwardport_RangerBuilding_1F_RangerFnKid_Text_0:
# 99 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Eriza$"

Windwardport_RangerBuilding_1F_RangerFnKid_Text_1:
# 101 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "You said a Murkrow snatched your\n"
	.string "Gimmighoul badge?$"

Windwardport_RangerBuilding_1F_RangerFnKid_Text_2:
# 103 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Genroku$"

Windwardport_RangerBuilding_1F_RangerFnKid_Text_3:
# 105 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Yes! My best friend gifted it to me.\p"
	.string "He'll be sad if he found out I lost it.\p"
	.string "Can you help me find it?$"

Windwardport_RangerBuilding_1F_RangerFnKid_Text_4:
# 111 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Sure. Where were you when the Murkrow\n"
	.string "attacked?$"

Windwardport_RangerBuilding_1F_LeaderRoomSign_Text_0:
# 118 "data/maps/Windwardport_RangerBuidling_1F/scripts.pory"
	.string "Team Leader's Office$"
