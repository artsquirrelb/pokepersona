Coralport_MapScripts::
# 2 "data/maps/Coralport/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Coralport/scripts.pory"
	setflag FLAG_VISITED_CORALPORT
# 4 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 0
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/Coralport/scripts.pory"
	manuallysettime WEEKDAY_MON, 8, 0, 0
	return


Coralport_Eventscript_DirectionSign::
# 11 "data/maps/Coralport/scripts.pory"
	lock
# 12 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_DirectionSign_Text_0
# 14 "data/maps/Coralport/scripts.pory"
	closemessage
# 15 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_TownSign::
# 20 "data/maps/Coralport/scripts.pory"
	lock
# 21 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TownSign_Text_0
# 23 "data/maps/Coralport/scripts.pory"
	closemessage
# 24 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_PoliceStationSign::
# 29 "data/maps/Coralport/scripts.pory"
	lock
# 30 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_PoliceStationSign_Text_0
# 32 "data/maps/Coralport/scripts.pory"
	closemessage
# 33 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CandyShopSign::
# 38 "data/maps/Coralport/scripts.pory"
	lock
# 39 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CandyShopSign_Text_0
# 41 "data/maps/Coralport/scripts.pory"
	closemessage
# 42 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Policeman::
# 47 "data/maps/Coralport/scripts.pory"
	lock
# 48 "data/maps/Coralport/scripts.pory"
	faceplayer
# 49 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Policeman_Text_0
# 50 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Policeman_Text_1
# 52 "data/maps/Coralport/scripts.pory"
	closemessage
# 53 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldMan::
# 58 "data/maps/Coralport/scripts.pory"
	lock
# 59 "data/maps/Coralport/scripts.pory"
	faceplayer
# 60 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldMan_Text_0
# 61 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldMan_Text_1
# 63 "data/maps/Coralport/scripts.pory"
	closemessage
# 64 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldWoman::
# 69 "data/maps/Coralport/scripts.pory"
	lock
# 70 "data/maps/Coralport/scripts.pory"
	faceplayer
# 71 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldWoman_Text_0
# 72 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldWoman_Text_1
# 77 "data/maps/Coralport/scripts.pory"
	closemessage
# 78 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnBreak::
# 83 "data/maps/Coralport/scripts.pory"
	lock
# 84 "data/maps/Coralport/scripts.pory"
	faceplayer
# 85 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnBreak_Text_0
# 86 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnBreak_Text_1
# 88 "data/maps/Coralport/scripts.pory"
	closemessage
# 89 "data/maps/Coralport/scripts.pory"
	applymovement VAR_LAST_TALKED, facedown
# 90 "data/maps/Coralport/scripts.pory"
	waitmovement
# 91 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Machamp::
# 96 "data/maps/Coralport/scripts.pory"
	lockall
# 97 "data/maps/Coralport/scripts.pory"
	faceplayer
# 98 "data/maps/Coralport/scripts.pory"
	showmonpic SPECIES_MACHAMP, 18, 5
# 99 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 100 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 101 "data/maps/Coralport/scripts.pory"
	delay 30
# 102 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_MACHAMP
# 103 "data/maps/Coralport/scripts.pory"
	hidemonpic
# 104 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_Vigoroth::
# 109 "data/maps/Coralport/scripts.pory"
	lockall
# 110 "data/maps/Coralport/scripts.pory"
	faceplayer
# 111 "data/maps/Coralport/scripts.pory"
	showmonpic SPECIES_VIGOROTH, 18, 5
# 112 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 113 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 114 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_VIGOROTH
# 115 "data/maps/Coralport/scripts.pory"
	delay 30
# 116 "data/maps/Coralport/scripts.pory"
	hidemonpic
# 117 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_SailorOnHarbor::
# 122 "data/maps/Coralport/scripts.pory"
	lock
# 123 "data/maps/Coralport/scripts.pory"
	faceplayer
# 124 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnHarbor_Text_0
# 125 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnHarbor_Text_1
# 127 "data/maps/Coralport/scripts.pory"
	closemessage
# 128 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnGuard::
# 133 "data/maps/Coralport/scripts.pory"
	lock
# 134 "data/maps/Coralport/scripts.pory"
	faceplayer
# 135 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 137 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_1
# 139 "data/maps/Coralport/scripts.pory"
	closemessage
# 140 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_TuberM::
# 146 "data/maps/Coralport/scripts.pory"
	lock
# 147 "data/maps/Coralport/scripts.pory"
	faceplayer
# 148 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_TuberM_Text_0
# 149 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TuberM_Text_1
# 150 "data/maps/Coralport/scripts.pory"
	closemessage
# 151 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Sandygast::
# 156 "data/maps/Coralport/scripts.pory"
	lock
# 157 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 158 "data/maps/Coralport/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 12
# 159 "data/maps/Coralport/scripts.pory"
	dowildbattle
# 160 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 161 "data/maps/Coralport/scripts.pory"
	setmetatile 11, 29, 0x246, FALSE
# 162 "data/maps/Coralport/scripts.pory"
	special DrawWholeMapView
# 163 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 164 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Beauty::
# 169 "data/maps/Coralport/scripts.pory"
	lock
# 170 "data/maps/Coralport/scripts.pory"
	faceplayer
# 171 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 172 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_1
# 175 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 176 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_2
# 179 "data/maps/Coralport/scripts.pory"
	closemessage
# 180 "data/maps/Coralport/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 22, 29, DIR_NORTH
# 181 "data/maps/Coralport/scripts.pory"
	waitmovement
# 182 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Fisherman::
# 187 "data/maps/Coralport/scripts.pory"
	lock
# 188 "data/maps/Coralport/scripts.pory"
	faceplayer
# 189 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_Text_0
# 190 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_Text_1
# 193 "data/maps/Coralport/scripts.pory"
	closemessage
# 194 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Krabby::
# 199 "data/maps/Coralport/scripts.pory"
	lockall
# 200 "data/maps/Coralport/scripts.pory"
	startoverworldencounter 12
# 201 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_1
# 202 "data/maps/Coralport/scripts.pory"
	removeobject VAR_LAST_TALKED
# 203 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_DirectionSign_Text_0:
# 12 "data/maps/Coralport/scripts.pory"
	.string "Route 3 {LEFT_ARROW}\n"
	.string "Route 2 {RIGHT_ARROW}$"

Coralport_Eventscript_TownSign_Text_0:
# 21 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Welcome to Coralport!\n"
	.string "{CLEAR_TO 30}“Home of the sea breeze.”$"

Coralport_Eventscript_PoliceStationSign_Text_0:
# 30 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Coralport Police Station\n"
	.string "{CLEAR_TO 60}“For the people.”$"

Coralport_Eventscript_CandyShopSign_Text_0:
# 39 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 60}AmeAme Candy Shop\n"
	.string "{CLEAR_TO 24}“Welcome all the sweet lovers!”$"

Coralport_Eventscript_Policeman_Text_0:
# 49 "data/maps/Coralport/scripts.pory"
	.string "Takagi$"

Coralport_Eventscript_Policeman_Text_1:
# 50 "data/maps/Coralport/scripts.pory"
	.string "Welcome to Coralport!\n"
	.string "If you have any problem, please let us\l"
	.string "know.\p"
	.string "We'd be happy to help.$"

Coralport_Eventscript_OldMan_Text_0:
# 60 "data/maps/Coralport/scripts.pory"
	.string "Tomoki$"

Coralport_Eventscript_OldMan_Text_1:
# 61 "data/maps/Coralport/scripts.pory"
	.string "I and my darling have been travelling\n"
	.string "around the world.\p"
	.string "Coralport has this special charm to it\n"
	.string "that made us want to spend the rest of\l"
	.string "our days here.$"

Coralport_Eventscript_OldWoman_Text_0:
# 71 "data/maps/Coralport/scripts.pory"
	.string "Yukine$"

Coralport_Eventscript_OldWoman_Text_1:
# 72 "data/maps/Coralport/scripts.pory"
	.string "This guy said to me one day “Let's\n"
	.string "travel the world!”\p"
	.string "We were still so young and I agreed.\n"
	.string "Then he brought us to all kind of\l"
	.string "beautiful places.\p"
	.string "It was only until last year that he\n"
	.string "proposed, just on the beach over there.\p"
	.string "That was quite late now that I think\n"
	.string "about it.\p"
	.string "Although it also kind of slipped out of\n"
	.string "my mind, since I was having so much fun\l"
	.string "being around him.$"

Coralport_Eventscript_SailorOnBreak_Text_0:
# 85 "data/maps/Coralport/scripts.pory"
	.string "Etsuo$"

Coralport_Eventscript_SailorOnBreak_Text_1:
# 86 "data/maps/Coralport/scripts.pory"
	.string "Please don't talk to me. I'm on break.\p"
	.string "If you need help, talk to the sailors on\n"
	.string "the harbor.$"

Coralport_Eventscript_SailorOnHarbor_Text_0:
# 124 "data/maps/Coralport/scripts.pory"
	.string "Chikatake$"

Coralport_Eventscript_SailorOnHarbor_Text_1:
# 125 "data/maps/Coralport/scripts.pory"
	.string "We have to move these barrels onto the\n"
	.string "board before departure.\p"
	.string "Please excuse us, we're very busy.$"

Coralport_Eventscript_SailorOnGuard_Text_0:
# 135 "data/maps/Coralport/scripts.pory"
	.string "Umito$"

Coralport_Eventscript_SailorOnGuard_Text_1:
# 137 "data/maps/Coralport/scripts.pory"
	.string "This ship will departs for Windward Port\n"
	.string "at 9AM.\p"
	.string "Please come back later when it's\n"
	.string "boarding time at 8:30AM.$"

Coralport_Eventscript_TuberM_Text_0:
# 148 "data/maps/Coralport/scripts.pory"
	.string "Ujou$"

Coralport_Eventscript_TuberM_Text_1:
# 149 "data/maps/Coralport/scripts.pory"
	.string "Sometimes when I poke the sand\n"
	.string "castles, they move!$"

Coralport_Eventscript_Beauty_Text_0:
# 171 "data/maps/Coralport/scripts.pory"
	.string "Harehina$"

Coralport_Eventscript_Beauty_Text_1:
# 172 "data/maps/Coralport/scripts.pory"
	.string "I bought two tickets for this vacation\n"
	.string "but my damned ex cheated on me so I\l"
	.string "brought my younger brother instead.\p"
	.string "I'm enjoying this a lot more than I\n"
	.string "thought.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Good for you.$"

Coralport_Eventscript_Beauty_Text_2:
# 176 "data/maps/Coralport/scripts.pory"
	.string "Oh? Wait, you're just my type. How old\n"
	.string "are you?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}W-what?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}(Hey! Let's just bail!)$"

Coralport_Eventscript_Fisherman_Text_0:
# 189 "data/maps/Coralport/scripts.pory"
	.string "Jumaro$"

Coralport_Eventscript_Fisherman_Text_1:
# 190 "data/maps/Coralport/scripts.pory"
	.string "I'm waiting for a friend of mine.\n"
	.string "We promised to go fishing together but\l"
	.string "he's taking so long.\p"
	.string "I wonder what's wrong.$"
