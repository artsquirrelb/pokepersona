WindwardPort_MapScripts::
# 2 "data/maps/WindwardPort/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindwardPort_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/WindwardPort/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, WindwardPort_MapScripts_OnResume
	.byte 0

WindwardPort_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WindwardPort/scripts.pory"
	setflag FLAG_VISITED_WINDWARD_PORT
# 4 "data/maps/WindwardPort/scripts.pory"
	setrespawn HEAL_LOCATION_WINDWARD_PORT
# 5 "data/maps/WindwardPort/scripts.pory"
	setflag FLAG_TEMP_1
# 6 "data/maps/WindwardPort/scripts.pory"
	setflag FLAG_TEMP_2
	return


WindwardPort_MapScripts_OnResume::
# 12 "data/maps/WindwardPort/scripts.pory"
	gettime
# 13 "data/maps/WindwardPort/scripts.pory"
	compare VAR_0x8000, MORNING_HOUR_BEGIN
	goto_if_ge WindwardPort_MapScripts_OnResume_3
WindwardPort_MapScripts_OnResume_2:
# 18 "data/maps/WindwardPort/scripts.pory"
	clearflag FLAG_TEMP_2
# 19 "data/maps/WindwardPort/scripts.pory"
	setflag FLAG_TEMP_1
	return

WindwardPort_MapScripts_OnResume_1:
# 14 "data/maps/WindwardPort/scripts.pory"
	clearflag FLAG_TEMP_1
# 15 "data/maps/WindwardPort/scripts.pory"
	setflag FLAG_TEMP_2
	return

WindwardPort_MapScripts_OnResume_3:
# 13 "data/maps/WindwardPort/scripts.pory"
	compare VAR_0x8000, EVENING_HOUR_BEGIN
	goto_if_lt WindwardPort_MapScripts_OnResume_1
	goto WindwardPort_MapScripts_OnResume_2


WindwardPort_Eventscript_ParasolLady::
# 24 "data/maps/WindwardPort/scripts.pory"
	lock
# 25 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 26 "data/maps/WindwardPort/scripts.pory"
	setspeaker WindwardPort_Eventscript_ParasolLady_Text_0
# 27 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_ParasolLady_Text_1
# 33 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 34 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_CyclistF::
# 39 "data/maps/WindwardPort/scripts.pory"
	lock
# 40 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 41 "data/maps/WindwardPort/scripts.pory"
	setspeaker WindwardPort_Eventscript_CyclistF_Text_0
# 42 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_CyclistF_Text_1
# 45 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 46 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_CyclistM::
# 51 "data/maps/WindwardPort/scripts.pory"
	lock
# 52 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 53 "data/maps/WindwardPort/scripts.pory"
	setspeaker WindwardPort_Eventscript_CyclistM_Text_0
# 54 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_CyclistM_Text_1
# 58 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 59 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_RancherM::
# 64 "data/maps/WindwardPort/scripts.pory"
	lock
# 65 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 66 "data/maps/WindwardPort/scripts.pory"
	setspeaker WindwardPort_Eventscript_RancherM_Text_0
# 67 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_RancherM_Text_1
# 70 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 71 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_RangerF::
# 76 "data/maps/WindwardPort/scripts.pory"
	lock
# 77 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 78 "data/maps/WindwardPort/scripts.pory"
	setspeaker WindwardPort_Eventscript_RangerF_Text_0
# 79 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_RangerF_Text_1
# 81 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 82 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_BikerSouth::
# 87 "data/maps/WindwardPort/scripts.pory"
	lock
# 88 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 89 "data/maps/WindwardPort/scripts.pory"
	setspeaker WindwardPort_Eventscript_BikerSouth_Text_0
# 90 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_BikerSouth_Text_1
# 91 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 92 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_Socialite::
# 97 "data/maps/WindwardPort/scripts.pory"
	lock
# 98 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 99 "data/maps/WindwardPort/scripts.pory"
	setspeaker WindwardPort_Eventscript_Socialite_Text_0
# 100 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_Socialite_Text_1
# 103 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 104 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_RestingOnBench::
# 109 "data/maps/WindwardPort/scripts.pory"
	lock
# 110 "data/maps/WindwardPort/scripts.pory"
	dotimebasedevents
# 111 "data/maps/WindwardPort/scripts.pory"
	applymoveplayer faceright
# 112 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_RestingOnBench_Text_0
# 113 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 114 "data/maps/WindwardPort/scripts.pory"
	delay 60
# 115 "data/maps/WindwardPort/scripts.pory"
	goto_if_set FLAG_DAILY_WINDWARDPORT_BENCH_ITEM, WindwardPort_Eventscript_RestingOnBench_1
# 123 "data/maps/WindwardPort/scripts.pory"
	playse SE_PIN
# 124 "data/maps/WindwardPort/scripts.pory"
	applymoveplayer emoteexclamation
# 125 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_RestingOnBench_Text_2
# 126 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 127 "data/maps/WindwardPort/scripts.pory"
	random 3
# 128 "data/maps/WindwardPort/scripts.pory"
	switch VAR_RESULT
# 129 "data/maps/WindwardPort/scripts.pory"
	case 0, WindwardPort_Eventscript_RestingOnBench_6
# 130 "data/maps/WindwardPort/scripts.pory"
	case 1, WindwardPort_Eventscript_RestingOnBench_7
# 131 "data/maps/WindwardPort/scripts.pory"
	case 2, WindwardPort_Eventscript_RestingOnBench_8
WindwardPort_Eventscript_RestingOnBench_4:
# 133 "data/maps/WindwardPort/scripts.pory"
	setflag FLAG_DAILY_WINDWARDPORT_BENCH_ITEM
# 134 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_RestingOnBench_Text_3
# 135 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 136 "data/maps/WindwardPort/scripts.pory"
	release
	end

WindwardPort_Eventscript_RestingOnBench_1:
# 116 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_RestingOnBench_Text_1
# 117 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 118 "data/maps/WindwardPort/scripts.pory"
	applymoveplayer walkright
# 119 "data/maps/WindwardPort/scripts.pory"
	release
	end

WindwardPort_Eventscript_RestingOnBench_6:
# 129 "data/maps/WindwardPort/scripts.pory"
	giveitem ITEM_SUPER_POTION
	goto WindwardPort_Eventscript_RestingOnBench_4

WindwardPort_Eventscript_RestingOnBench_7:
# 130 "data/maps/WindwardPort/scripts.pory"
	giveitem ITEM_SODA_POP
	goto WindwardPort_Eventscript_RestingOnBench_4

WindwardPort_Eventscript_RestingOnBench_8:
# 131 "data/maps/WindwardPort/scripts.pory"
	giveitem ITEM_FULL_HEAL
	goto WindwardPort_Eventscript_RestingOnBench_4


WindwardPort_Eventscript_Wartortle::
# 141 "data/maps/WindwardPort/scripts.pory"
	moncryscript SPECIES_WARTORTLE
# 142 "data/maps/WindwardPort/scripts.pory"
	releaseall
	end


WindwardPort_Eventscript_Youngster::
# 147 "data/maps/WindwardPort/scripts.pory"
	lock
# 148 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 149 "data/maps/WindwardPort/scripts.pory"
	setspeaker WindwardPort_Eventscript_Youngster_Text_0
# 150 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_Youngster_Text_1
# 153 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 154 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_Fisherman::
# 159 "data/maps/WindwardPort/scripts.pory"
	lock
# 160 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 161 "data/maps/WindwardPort/scripts.pory"
	setspeaker WindwardPort_Eventscript_Fisherman_Text_0
# 162 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_Fisherman_Text_1
# 164 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 165 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_Corphish::
# 170 "data/maps/WindwardPort/scripts.pory"
	moncryscript SPECIES_CORPHISH
# 171 "data/maps/WindwardPort/scripts.pory"
	releaseall
	end


WindwardPort_Eventscript_CitySign::
# 176 "data/maps/WindwardPort/scripts.pory"
	lock
# 177 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_CitySign_Text_0
# 178 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 179 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_DirectionSign::
# 184 "data/maps/WindwardPort/scripts.pory"
	lock
# 185 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_DirectionSign_Text_0
# 186 "data/maps/WindwardPort/scripts.pory"
	closemessage
# 187 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_Lilligant::
# 192 "data/maps/WindwardPort/scripts.pory"
	moncryscript SPECIES_LILLIGANT
# 193 "data/maps/WindwardPort/scripts.pory"
	release
	end


WindwardPort_Eventscript_ParasolLady_Text_0:
# 26 "data/maps/WindwardPort/scripts.pory"
	.string "Tsugumi$"

WindwardPort_Eventscript_ParasolLady_Text_1:
# 27 "data/maps/WindwardPort/scripts.pory"
	.string "I'm always wondering if Pokémon came\n"
	.string "first or their Egg came first.\p"
	.string "Oh, that also reminds me, there's no\n"
	.string "Pokémon Daycare in Kitoha region.\p"
	.string "I'll let you in a secret. {PAUSE_UNTIL_PRESS}Apparently,\n"
	.string "there's a store in Miharu Town that can\l"
	.string "turn a Pokémon “shiny”.\p"
	.string "I heard it was all thanks to a special\n"
	.string "kind of herb that could only grow in\l"
	.string "their garden.\p"
	.string "Of course, it won't be cheap to use\n"
	.string "their service.\p"
	.string "We're all slaves to capitalism... {PAUSE_UNTIL_PRESS}Sigh...$"

WindwardPort_Eventscript_CyclistF_Text_0:
# 41 "data/maps/WindwardPort/scripts.pory"
	.string "Demie$"

WindwardPort_Eventscript_CyclistF_Text_1:
# 42 "data/maps/WindwardPort/scripts.pory"
	.string "The road here is perfect to ride around\n"
	.string "on a bicycle.\p"
	.string "Only in the daytime, though. I wouldn't\n"
	.string "want to stay outside at night.\p"
	.string "Why? Because at night the Moonlight\n"
	.string "Gang hangs around and they're\l"
	.string "annoying.$"

WindwardPort_Eventscript_CyclistM_Text_0:
# 53 "data/maps/WindwardPort/scripts.pory"
	.string "Ouma$"

WindwardPort_Eventscript_CyclistM_Text_1:
# 54 "data/maps/WindwardPort/scripts.pory"
	.string "Windward Port is pretty and all but in\n"
	.string "my opinion, it's not a very ideal place\l"
	.string "to live in.\p"
	.string "Too roburst for me, and there's gang\n"
	.string "activity when the sun goes down.\p"
	.string "The Pokémon Rangers can't do anything\n"
	.string "about it because they only take care of\l"
	.string "Pokémon-related problems, while the\l"
	.string "nearest police station is all the way in\l"
	.string "Paulownia City.$"

WindwardPort_Eventscript_RancherM_Text_0:
# 66 "data/maps/WindwardPort/scripts.pory"
	.string "Bunsaku$"

WindwardPort_Eventscript_RancherM_Text_1:
# 67 "data/maps/WindwardPort/scripts.pory"
	.string "I delivered my crops here from Miharu.\p"
	.string "It's a very beautiful town with pink\n"
	.string "blossoms all year.\p"
	.string "You should visit us sometimes.$"

WindwardPort_Eventscript_RangerF_Text_0:
# 78 "data/maps/WindwardPort/scripts.pory"
	.string "Aiba$"

WindwardPort_Eventscript_RangerF_Text_1:
# 79 "data/maps/WindwardPort/scripts.pory"
	.string "I'm on my break.\p"
	.string "If you need help with a problem relating\n"
	.string "to Pokémon, talk to the staff inside.$"

WindwardPort_Eventscript_BikerSouth_Text_0:
# 89 "data/maps/WindwardPort/scripts.pory"
	.string "Robo$"

WindwardPort_Eventscript_BikerSouth_Text_1:
# 90 "data/maps/WindwardPort/scripts.pory"
	.string "What are you looking at, brats? Scram!$"

WindwardPort_Eventscript_Socialite_Text_0:
# 99 "data/maps/WindwardPort/scripts.pory"
	.string "Yukise$"

WindwardPort_Eventscript_Socialite_Text_1:
# 100 "data/maps/WindwardPort/scripts.pory"
	.string "Hello, child. If you ever find yourself\n"
	.string "tired on your journey, just take a\l"
	.string "break.\p"
	.string "Resting is just as important.\p"
	.string "Feel free to sit down next to me. Who\n"
	.string "knows, you may find something\l"
	.string "pleasantly surprising.$"

WindwardPort_Eventscript_RestingOnBench_Text_0:
# 112 "data/maps/WindwardPort/scripts.pory"
	.string "{PLAYER} decided to rest for a while.$"

WindwardPort_Eventscript_RestingOnBench_Text_1:
# 116 "data/maps/WindwardPort/scripts.pory"
	.string "It's time to go.$"

WindwardPort_Eventscript_RestingOnBench_Text_2:
# 125 "data/maps/WindwardPort/scripts.pory"
	.string "Oh! There's something under the bench!$"

WindwardPort_Eventscript_RestingOnBench_Text_3:
# 134 "data/maps/WindwardPort/scripts.pory"
	.string "What a pleasant surpise!$"

WindwardPort_Eventscript_Youngster_Text_0:
# 149 "data/maps/WindwardPort/scripts.pory"
	.string "Umaru$"

WindwardPort_Eventscript_Youngster_Text_1:
# 150 "data/maps/WindwardPort/scripts.pory"
	.string "There's always some weird noise in that\n"
	.string "house at the south of the city.\p"
	.string "I saw the owner visiting the Pokémon\n"
	.string "Ranger building once a week.\p"
	.string "She wears lab coat so I assume she's a\n"
	.string "scientist or researcher?$"

WindwardPort_Eventscript_Fisherman_Text_0:
# 161 "data/maps/WindwardPort/scripts.pory"
	.string "Hibari$"

WindwardPort_Eventscript_Fisherman_Text_1:
# 162 "data/maps/WindwardPort/scripts.pory"
	.string "I love the sea breeze.\n"
	.string "Sitting here while listening to the\l"
	.string "sound of the waves is my favorite\l"
	.string "activity of the day.$"

WindwardPort_Eventscript_CitySign_Text_0:
# 177 "data/maps/WindwardPort/scripts.pory"
	.string "Welcome to Windward Port!$"

WindwardPort_Eventscript_DirectionSign_Text_0:
# 185 "data/maps/WindwardPort/scripts.pory"
	.string "Route 4 {LEFT_ARROW}$"
