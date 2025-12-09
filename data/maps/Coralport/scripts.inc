Coralport_MapScripts::
# 2 "data/maps/Coralport/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Coralport/scripts.pory"
	setflag FLAG_VISITED_CORALPORT
	return


Coralport_Eventscript_DirectionSign::
# 8 "data/maps/Coralport/scripts.pory"
	lock
# 9 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_DirectionSign_Text_0
# 11 "data/maps/Coralport/scripts.pory"
	closemessage
# 12 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_TownSign::
# 17 "data/maps/Coralport/scripts.pory"
	lock
# 18 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TownSign_Text_0
# 20 "data/maps/Coralport/scripts.pory"
	closemessage
# 21 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_PoliceStationSign::
# 26 "data/maps/Coralport/scripts.pory"
	lock
# 27 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_PoliceStationSign_Text_0
# 29 "data/maps/Coralport/scripts.pory"
	closemessage
# 30 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CandyShopSign::
# 35 "data/maps/Coralport/scripts.pory"
	lock
# 36 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CandyShopSign_Text_0
# 38 "data/maps/Coralport/scripts.pory"
	closemessage
# 39 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Policeman::
# 44 "data/maps/Coralport/scripts.pory"
	lock
# 45 "data/maps/Coralport/scripts.pory"
	faceplayer
# 46 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Policeman_Text_0
# 47 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Policeman_Text_1
# 49 "data/maps/Coralport/scripts.pory"
	closemessage
# 50 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldMan::
# 55 "data/maps/Coralport/scripts.pory"
	lock
# 56 "data/maps/Coralport/scripts.pory"
	faceplayer
# 57 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldMan_Text_0
# 58 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldMan_Text_1
# 60 "data/maps/Coralport/scripts.pory"
	closemessage
# 61 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldWoman::
# 66 "data/maps/Coralport/scripts.pory"
	lock
# 67 "data/maps/Coralport/scripts.pory"
	faceplayer
# 68 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldWoman_Text_0
# 69 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldWoman_Text_1
# 74 "data/maps/Coralport/scripts.pory"
	closemessage
# 75 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnBreak::
# 80 "data/maps/Coralport/scripts.pory"
	lock
# 81 "data/maps/Coralport/scripts.pory"
	faceplayer
# 82 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnBreak_Text_0
# 83 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnBreak_Text_1
# 85 "data/maps/Coralport/scripts.pory"
	closemessage
# 86 "data/maps/Coralport/scripts.pory"
	applymovement VAR_LAST_TALKED, facedown
# 87 "data/maps/Coralport/scripts.pory"
	waitmovement
# 88 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Machamp::
# 93 "data/maps/Coralport/scripts.pory"
	lockall
# 94 "data/maps/Coralport/scripts.pory"
	faceplayer
# 95 "data/maps/Coralport/scripts.pory"
	showmonpic SPECIES_MACHAMP, 18, 5
# 96 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 97 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 98 "data/maps/Coralport/scripts.pory"
	delay 30
# 99 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_MACHAMP
# 100 "data/maps/Coralport/scripts.pory"
	hidemonpic
# 101 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_Vigoroth::
# 106 "data/maps/Coralport/scripts.pory"
	lockall
# 107 "data/maps/Coralport/scripts.pory"
	faceplayer
# 108 "data/maps/Coralport/scripts.pory"
	showmonpic SPECIES_VIGOROTH, 18, 5
# 109 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 110 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 111 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_VIGOROTH
# 112 "data/maps/Coralport/scripts.pory"
	delay 30
# 113 "data/maps/Coralport/scripts.pory"
	hidemonpic
# 114 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_SailorOnHarbor::
# 119 "data/maps/Coralport/scripts.pory"
	lock
# 120 "data/maps/Coralport/scripts.pory"
	faceplayer
# 121 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnHarbor_Text_0
# 122 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnHarbor_Text_1
# 124 "data/maps/Coralport/scripts.pory"
	closemessage
# 125 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnGuard::
# 130 "data/maps/Coralport/scripts.pory"
	lock
# 131 "data/maps/Coralport/scripts.pory"
	faceplayer
# 132 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 133 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 1
	goto_if_lt Coralport_Eventscript_SailorOnGuard_1
	return

Coralport_Eventscript_SailorOnGuard_1:
# 134 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_1
# 136 "data/maps/Coralport/scripts.pory"
	closemessage
# 137 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_TuberM::
# 143 "data/maps/Coralport/scripts.pory"
	lock
# 144 "data/maps/Coralport/scripts.pory"
	faceplayer
# 145 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_TuberM_Text_0
# 146 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TuberM_Text_1
# 147 "data/maps/Coralport/scripts.pory"
	closemessage
# 148 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Sandygast::
# 153 "data/maps/Coralport/scripts.pory"
	lock
# 154 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 155 "data/maps/Coralport/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 12
# 156 "data/maps/Coralport/scripts.pory"
	dowildbattle
# 157 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 158 "data/maps/Coralport/scripts.pory"
	setmetatile 11, 29, 0x246, FALSE
# 159 "data/maps/Coralport/scripts.pory"
	special DrawWholeMapView
# 160 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 161 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Beauty::
# 166 "data/maps/Coralport/scripts.pory"
	lock
# 167 "data/maps/Coralport/scripts.pory"
	faceplayer
# 168 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 169 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_1
# 172 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 173 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_2
# 176 "data/maps/Coralport/scripts.pory"
	closemessage
# 177 "data/maps/Coralport/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 22, 29, DIR_NORTH
# 178 "data/maps/Coralport/scripts.pory"
	waitmovement
# 179 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Fisherman::
# 184 "data/maps/Coralport/scripts.pory"
	lock
# 185 "data/maps/Coralport/scripts.pory"
	faceplayer
# 186 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_Text_0
# 187 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_Text_1
# 190 "data/maps/Coralport/scripts.pory"
	closemessage
# 191 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Krabby::
# 196 "data/maps/Coralport/scripts.pory"
	lockall
# 197 "data/maps/Coralport/scripts.pory"
	startoverworldencounter 12
# 198 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_1
# 199 "data/maps/Coralport/scripts.pory"
	removeobject VAR_LAST_TALKED
# 200 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_DirectionSign_Text_0:
# 9 "data/maps/Coralport/scripts.pory"
	.string "Route 3 {LEFT_ARROW}\n"
	.string "Route 2 {RIGHT_ARROW}$"

Coralport_Eventscript_TownSign_Text_0:
# 18 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Welcome to Coralport!\n"
	.string "{CLEAR_TO 30}“Home of the sea breeze.”$"

Coralport_Eventscript_PoliceStationSign_Text_0:
# 27 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Coralport Police Station\n"
	.string "{CLEAR_TO 60}“For the people.”$"

Coralport_Eventscript_CandyShopSign_Text_0:
# 36 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}AmeAme Candy Shop\n"
	.string "{CLEAR_TO 24}“Welcome all the sweet lovers!”$"

Coralport_Eventscript_Policeman_Text_0:
# 46 "data/maps/Coralport/scripts.pory"
	.string "Takagi$"

Coralport_Eventscript_Policeman_Text_1:
# 47 "data/maps/Coralport/scripts.pory"
	.string "Welcome to Coralport!\n"
	.string "If you have any problem, please let us\l"
	.string "know.\p"
	.string "We'd be happy to help.$"

Coralport_Eventscript_OldMan_Text_0:
# 57 "data/maps/Coralport/scripts.pory"
	.string "Tomoki$"

Coralport_Eventscript_OldMan_Text_1:
# 58 "data/maps/Coralport/scripts.pory"
	.string "I and my darling have been travelling\n"
	.string "around the world.\p"
	.string "Coralport has this special charm to it\n"
	.string "that made us want to spend the rest of\l"
	.string "our days here.$"

Coralport_Eventscript_OldWoman_Text_0:
# 68 "data/maps/Coralport/scripts.pory"
	.string "Yukine$"

Coralport_Eventscript_OldWoman_Text_1:
# 69 "data/maps/Coralport/scripts.pory"
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
# 82 "data/maps/Coralport/scripts.pory"
	.string "Etsuo$"

Coralport_Eventscript_SailorOnBreak_Text_1:
# 83 "data/maps/Coralport/scripts.pory"
	.string "Please don't talk to me. I'm on break.\p"
	.string "If you need help, talk to the sailors on\n"
	.string "the harbor.$"

Coralport_Eventscript_SailorOnHarbor_Text_0:
# 121 "data/maps/Coralport/scripts.pory"
	.string "Chikatake$"

Coralport_Eventscript_SailorOnHarbor_Text_1:
# 122 "data/maps/Coralport/scripts.pory"
	.string "We have to move these barrels onto the\n"
	.string "board before departure.\p"
	.string "Please excuse us, we're very busy.$"

Coralport_Eventscript_SailorOnGuard_Text_0:
# 132 "data/maps/Coralport/scripts.pory"
	.string "Umito$"

Coralport_Eventscript_SailorOnGuard_Text_1:
# 134 "data/maps/Coralport/scripts.pory"
	.string "This ship will departs for Windward Port\n"
	.string "at 9AM.\p"
	.string "Please come back later when it's\n"
	.string "boarding time at 8:30AM.$"

Coralport_Eventscript_TuberM_Text_0:
# 145 "data/maps/Coralport/scripts.pory"
	.string "Ujou$"

Coralport_Eventscript_TuberM_Text_1:
# 146 "data/maps/Coralport/scripts.pory"
	.string "Sometimes when I poke the sand\n"
	.string "castles, they move!$"

Coralport_Eventscript_Beauty_Text_0:
# 168 "data/maps/Coralport/scripts.pory"
	.string "Harehina$"

Coralport_Eventscript_Beauty_Text_1:
# 169 "data/maps/Coralport/scripts.pory"
	.string "I bought two tickets for this vacation\n"
	.string "but my damned ex cheated on me so I\l"
	.string "brought my younger brother instead.\p"
	.string "I'm enjoying this a lot more than I\n"
	.string "thought.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Good for you.$"

Coralport_Eventscript_Beauty_Text_2:
# 173 "data/maps/Coralport/scripts.pory"
	.string "Oh? Wait, you're just my type. How old\n"
	.string "are you?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}W-what?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}(Hey! Let's just bail!)$"

Coralport_Eventscript_Fisherman_Text_0:
# 186 "data/maps/Coralport/scripts.pory"
	.string "Jumaro$"

Coralport_Eventscript_Fisherman_Text_1:
# 187 "data/maps/Coralport/scripts.pory"
	.string "I'm waiting for a friend of mine.\n"
	.string "We promised to go fishing together but\l"
	.string "he's taking so long.\p"
	.string "I wonder what's wrong.$"
