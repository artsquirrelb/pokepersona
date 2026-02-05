Windwardport_RangerBuidling_2F_MapScripts::
	.byte 0


Windwardport_RangerBuilding_2F_Elevator::
# 4 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	lock
# 5 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	msgbox Windwardport_RangerBuilding_2F_Elevator_Text_0, MSGBOX_YESNO
# 6 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_RangerBuilding_2F_Elevator_1
# 14 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	applymoveplayer facedown
# 15 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	release
	end

Windwardport_RangerBuilding_2F_Elevator_1:
# 8 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	call Eventscript_ElevatorSFX
# 9 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	warpsilent MAP_WINDWARDPORT_RANGER_BUIDLING_1F, 3, 5
# 10 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	waitstate
	return


Windwardport_RangerBuilding_2F_RangerM::
# 21 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	lock
# 22 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	faceplayer
# 23 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_2F_RangerM_Text_0
# 24 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	msgbox Windwardport_RangerBuilding_2F_RangerM_Text_1
# 27 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_2F_RangerF::
# 32 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	lock
# 33 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	faceplayer
# 34 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_2F_RangerF_Text_0
# 35 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	msgbox Windwardport_RangerBuilding_2F_RangerF_Text_1
# 37 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_2F_Excadrill::
# 42 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	moncryscript SPECIES_EXCADRILL
# 43 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_2F_Researcher::
# 48 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	lock
# 49 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	faceplayer
# 50 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	setspeaker Windwardport_RangerBuilding_2F_Researcher_Text_0
# 51 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	msgbox Windwardport_RangerBuilding_2F_Researcher_Text_1
# 53 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	release
	end


Windwardport_RangerBuilding_2F_Elevator_Text_0:
# 5 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	.string "Go to 1F?$"

Windwardport_RangerBuilding_2F_RangerM_Text_0:
# 23 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	.string "Dokuji$"

Windwardport_RangerBuilding_2F_RangerM_Text_1:
# 24 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	.string "There has been an increase in cases of\n"
	.string "wild Pokémon getting more aggressive\l"
	.string "lately.\p"
	.string "What they have in common is that the\n"
	.string "Pokémon involved have unnatural colors\l"
	.string "on their body parts.\p"
	.string "We have been partnering with Pokémon\n"
	.string "researchers to crack the reason.$"

Windwardport_RangerBuilding_2F_RangerF_Text_0:
# 34 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	.string "Mayuu$"

Windwardport_RangerBuilding_2F_RangerF_Text_1:
# 35 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	.string "They recently discovered that\n"
	.string "Excadrill could Mega evolve in Kalos.\p"
	.string "The reward for this month's top 3\n"
	.string "rangers includes a Mega Stone of their\l"
	.string "choice so I'm trying my hardest to\l"
	.string "achieve that.$"

Windwardport_RangerBuilding_2F_Researcher_Text_0:
# 50 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	.string "Tetsuhiro$"

Windwardport_RangerBuilding_2F_Researcher_Text_1:
# 51 "data/maps/Windwardport_RangerBuidling_2F/scripts.pory"
	.string "Besides the body parts' colors changed,\n"
	.string "the Pokémon that went savage\l"
	.string "sometimes know moves that they\l"
	.string "normally can't learn.$"
