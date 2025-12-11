Coralport_MapScripts::
# 2 "data/maps/Coralport/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Coralport/scripts.pory"
	setflag FLAG_VISITED_CORALPORT
# 4 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/Coralport/scripts.pory"
	setrespawn HEAL_LOCATION_CORALPORT
# 6 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 0
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/Coralport/scripts.pory"
	manuallysettime WEEKDAY_MON, 8, 0, 0
	return


Coralport_Eventscript_DirectionSign::
# 13 "data/maps/Coralport/scripts.pory"
	lock
# 14 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_DirectionSign_Text_0
# 16 "data/maps/Coralport/scripts.pory"
	closemessage
# 17 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_TownSign::
# 22 "data/maps/Coralport/scripts.pory"
	lock
# 23 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TownSign_Text_0
# 25 "data/maps/Coralport/scripts.pory"
	closemessage
# 26 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_PoliceStationSign::
# 31 "data/maps/Coralport/scripts.pory"
	lock
# 32 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_PoliceStationSign_Text_0
# 34 "data/maps/Coralport/scripts.pory"
	closemessage
# 35 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CandyShopSign::
# 40 "data/maps/Coralport/scripts.pory"
	lock
# 41 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CandyShopSign_Text_0
# 43 "data/maps/Coralport/scripts.pory"
	closemessage
# 44 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Policeman::
# 49 "data/maps/Coralport/scripts.pory"
	lock
# 50 "data/maps/Coralport/scripts.pory"
	faceplayer
# 51 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Policeman_Text_0
# 52 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Policeman_Text_1
# 54 "data/maps/Coralport/scripts.pory"
	closemessage
# 55 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldMan::
# 60 "data/maps/Coralport/scripts.pory"
	lock
# 61 "data/maps/Coralport/scripts.pory"
	faceplayer
# 62 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldMan_Text_0
# 63 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldMan_Text_1
# 65 "data/maps/Coralport/scripts.pory"
	closemessage
# 66 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldWoman::
# 71 "data/maps/Coralport/scripts.pory"
	lock
# 72 "data/maps/Coralport/scripts.pory"
	faceplayer
# 73 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldWoman_Text_0
# 74 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldWoman_Text_1
# 79 "data/maps/Coralport/scripts.pory"
	closemessage
# 80 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnBreak::
# 85 "data/maps/Coralport/scripts.pory"
	lock
# 86 "data/maps/Coralport/scripts.pory"
	faceplayer
# 87 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnBreak_Text_0
# 88 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnBreak_Text_1
# 90 "data/maps/Coralport/scripts.pory"
	closemessage
# 91 "data/maps/Coralport/scripts.pory"
	applymovement VAR_LAST_TALKED, facedown
# 92 "data/maps/Coralport/scripts.pory"
	waitmovement
# 93 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Machamp::
# 98 "data/maps/Coralport/scripts.pory"
	lockall
# 99 "data/maps/Coralport/scripts.pory"
	faceplayer
# 100 "data/maps/Coralport/scripts.pory"
	showmonpic SPECIES_MACHAMP, 18, 5
# 101 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 102 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 103 "data/maps/Coralport/scripts.pory"
	delay 30
# 104 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_MACHAMP
# 105 "data/maps/Coralport/scripts.pory"
	hidemonpic
# 106 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_Vigoroth::
# 111 "data/maps/Coralport/scripts.pory"
	lockall
# 112 "data/maps/Coralport/scripts.pory"
	faceplayer
# 113 "data/maps/Coralport/scripts.pory"
	showmonpic SPECIES_VIGOROTH, 18, 5
# 114 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 115 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 116 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_VIGOROTH
# 117 "data/maps/Coralport/scripts.pory"
	delay 30
# 118 "data/maps/Coralport/scripts.pory"
	hidemonpic
# 119 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_SailorOnHarbor::
# 124 "data/maps/Coralport/scripts.pory"
	lock
# 125 "data/maps/Coralport/scripts.pory"
	faceplayer
# 126 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnHarbor_Text_0
# 127 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnHarbor_Text_1
# 129 "data/maps/Coralport/scripts.pory"
	closemessage
# 130 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnGuard::
# 135 "data/maps/Coralport/scripts.pory"
	lock
# 136 "data/maps/Coralport/scripts.pory"
	faceplayer
# 137 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 138 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 2
	goto_if_lt Coralport_Eventscript_SailorOnGuard_2
Coralport_Eventscript_SailorOnGuard_1:
# 177 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_2:
# 140 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_1
# 142 "data/maps/Coralport/scripts.pory"
	closemessage
# 143 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 0
	goto_if_eq Coralport_Eventscript_SailorOnGuard_4
	goto Coralport_Eventscript_SailorOnGuard_1

Coralport_Eventscript_SailorOnGuard_4:
# 144 "data/maps/Coralport/scripts.pory"
	delay 20
# 145 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 146 "data/maps/Coralport/scripts.pory"
	addobject S_CORAL
# 147 "data/maps/Coralport/scripts.pory"
	addobject A_CORAL
# 148 "data/maps/Coralport/scripts.pory"
	addobject M_CORAL
# 149 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 150 "data/maps/Coralport/scripts.pory"
	waitmovement
# 151 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 152 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_SailorOnGuard_Movement_0
# 153 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_SailorOnGuard_Movement_1
# 154 "data/maps/Coralport/scripts.pory"
	waitmovement
# 155 "data/maps/Coralport/scripts.pory"
	delay 30
# 156 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_2
# 161 "data/maps/Coralport/scripts.pory"
	closemessage
# 162 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 163 "data/maps/Coralport/scripts.pory"
	delay 4
# 164 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, walkleft
# 165 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, facedown
# 166 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_SailorOnGuard_Movement_2
# 167 "data/maps/Coralport/scripts.pory"
	waitmovement
# 168 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 169 "data/maps/Coralport/scripts.pory"
	delay 1
# 170 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 171 "data/maps/Coralport/scripts.pory"
	delay 1
# 172 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 173 "data/maps/Coralport/scripts.pory"
	delay 1
# 174 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 1
	goto Coralport_Eventscript_SailorOnGuard_1


Coralport_Eventscript_TuberM::
# 182 "data/maps/Coralport/scripts.pory"
	lock
# 183 "data/maps/Coralport/scripts.pory"
	faceplayer
# 184 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_TuberM_Text_0
# 185 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TuberM_Text_1
# 186 "data/maps/Coralport/scripts.pory"
	closemessage
# 187 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Sandygast::
# 192 "data/maps/Coralport/scripts.pory"
	lock
# 193 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 194 "data/maps/Coralport/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 11
# 195 "data/maps/Coralport/scripts.pory"
	dowildbattle
# 196 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 197 "data/maps/Coralport/scripts.pory"
	setmetatile 11, 29, 0x246, FALSE
# 198 "data/maps/Coralport/scripts.pory"
	special DrawWholeMapView
# 199 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 200 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Beauty::
# 205 "data/maps/Coralport/scripts.pory"
	lock
# 206 "data/maps/Coralport/scripts.pory"
	faceplayer
# 207 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 208 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_1
# 211 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 212 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_2
# 215 "data/maps/Coralport/scripts.pory"
	closemessage
# 216 "data/maps/Coralport/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 22, 29, DIR_NORTH, 2
# 217 "data/maps/Coralport/scripts.pory"
	waitmovement
# 218 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Fisherman::
# 223 "data/maps/Coralport/scripts.pory"
	lock
# 224 "data/maps/Coralport/scripts.pory"
	faceplayer
# 225 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_Text_0
# 226 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_Text_1
# 229 "data/maps/Coralport/scripts.pory"
	closemessage
# 230 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Krabby::
# 235 "data/maps/Coralport/scripts.pory"
	lockall
# 236 "data/maps/Coralport/scripts.pory"
	startoverworldencounter 12
# 237 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_1
# 238 "data/maps/Coralport/scripts.pory"
	removeobject VAR_LAST_TALKED
# 239 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_MustTalkToSailorOnGuard::
# 244 "data/maps/Coralport/scripts.pory"
	lock
# 245 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 246 "data/maps/Coralport/scripts.pory"
	waitmovement
# 247 "data/maps/Coralport/scripts.pory"
	checkplayergender
# 248 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Coralport_Eventscript_MustTalkToSailorOnGuard_2
# 253 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1
Coralport_Eventscript_MustTalkToSailorOnGuard_1:
# 256 "data/maps/Coralport/scripts.pory"
	closemessage
# 257 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_MustTalkToSailorOnGuard_2:
# 249 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0
	goto Coralport_Eventscript_MustTalkToSailorOnGuard_1


setameamequestasreward::
# 262 "data/maps/Coralport/scripts.pory"
	lock
# 263 "data/maps/Coralport/scripts.pory"
	msgbox setameamequestasreward_Text_0
# 264 "data/maps/Coralport/scripts.pory"
	closemessage
# 265 "data/maps/Coralport/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 10
# 266 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_AMEAME_PARTTIME
# 267 "data/maps/Coralport/scripts.pory"
	release
	end


# 152 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_SailorOnGuard_Movement_0:
# 152 "data/maps/Coralport/scripts.pory"
	walk_right
# 152 "data/maps/Coralport/scripts.pory"
	walk_down
# 152 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 153 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_SailorOnGuard_Movement_1:
# 153 "data/maps/Coralport/scripts.pory"
	walk_down
# 153 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 166 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_SailorOnGuard_Movement_2:
# 166 "data/maps/Coralport/scripts.pory"
	walk_down
# 166 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

Coralport_Eventscript_DirectionSign_Text_0:
# 14 "data/maps/Coralport/scripts.pory"
	.string "Route 3 {LEFT_ARROW}\n"
	.string "Route 2 {RIGHT_ARROW}$"

Coralport_Eventscript_TownSign_Text_0:
# 23 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Welcome to Coralport!\n"
	.string "{CLEAR_TO 30}“Home of the sea breeze.”$"

Coralport_Eventscript_PoliceStationSign_Text_0:
# 32 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Coralport Police Station\n"
	.string "{CLEAR_TO 60}“For the people.”$"

Coralport_Eventscript_CandyShopSign_Text_0:
# 41 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 60}AmeAme Candy Shop\n"
	.string "{CLEAR_TO 24}“Welcome all the sweet lovers!”$"

Coralport_Eventscript_Policeman_Text_0:
# 51 "data/maps/Coralport/scripts.pory"
	.string "Takagi$"

Coralport_Eventscript_Policeman_Text_1:
# 52 "data/maps/Coralport/scripts.pory"
	.string "Welcome to Coralport!\n"
	.string "If you have any problem, please let us\l"
	.string "know.\p"
	.string "We'd be happy to help.$"

Coralport_Eventscript_OldMan_Text_0:
# 62 "data/maps/Coralport/scripts.pory"
	.string "Tomoki$"

Coralport_Eventscript_OldMan_Text_1:
# 63 "data/maps/Coralport/scripts.pory"
	.string "I and my darling have been travelling\n"
	.string "around the world.\p"
	.string "Coralport has this special charm to it\n"
	.string "that made us want to spend the rest of\l"
	.string "our days here.$"

Coralport_Eventscript_OldWoman_Text_0:
# 73 "data/maps/Coralport/scripts.pory"
	.string "Yukine$"

Coralport_Eventscript_OldWoman_Text_1:
# 74 "data/maps/Coralport/scripts.pory"
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
# 87 "data/maps/Coralport/scripts.pory"
	.string "Etsuo$"

Coralport_Eventscript_SailorOnBreak_Text_1:
# 88 "data/maps/Coralport/scripts.pory"
	.string "Please don't talk to me. I'm on break.\p"
	.string "If you need help, talk to the sailors on\n"
	.string "the harbor.$"

Coralport_Eventscript_SailorOnHarbor_Text_0:
# 126 "data/maps/Coralport/scripts.pory"
	.string "Chikatake$"

Coralport_Eventscript_SailorOnHarbor_Text_1:
# 127 "data/maps/Coralport/scripts.pory"
	.string "We have to move these barrels onto the\n"
	.string "board before departure.\p"
	.string "Please excuse us, we're very busy.$"

Coralport_Eventscript_SailorOnGuard_Text_0:
# 137 "data/maps/Coralport/scripts.pory"
	.string "Umito$"

Coralport_Eventscript_SailorOnGuard_Text_1:
# 140 "data/maps/Coralport/scripts.pory"
	.string "This ship will depart for Windward Port.\p"
	.string "Please come back later when it's\n"
	.string "boarding time.$"

Coralport_Eventscript_SailorOnGuard_Text_2:
# 156 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}What now?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It appears that we have no other\n"
	.string "choice but to wait until boarding time.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Maybe we can pay the police station a\n"
	.string "visit?\p"
	.string "I'd like to check if they've found\n"
	.string "anything about Miki.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, let's do that.$"

Coralport_Eventscript_TuberM_Text_0:
# 184 "data/maps/Coralport/scripts.pory"
	.string "Ujou$"

Coralport_Eventscript_TuberM_Text_1:
# 185 "data/maps/Coralport/scripts.pory"
	.string "Sometimes when I poke the sand\n"
	.string "castles, they move!$"

Coralport_Eventscript_Beauty_Text_0:
# 207 "data/maps/Coralport/scripts.pory"
	.string "Harehina$"

Coralport_Eventscript_Beauty_Text_1:
# 208 "data/maps/Coralport/scripts.pory"
	.string "I bought two tickets for this vacation\n"
	.string "but my damned ex cheated on me so I\l"
	.string "brought my younger brother instead.\p"
	.string "I'm enjoying this a lot more than I\n"
	.string "thought.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Good for you.$"

Coralport_Eventscript_Beauty_Text_2:
# 212 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh? Wait, you're just my type. How old\n"
	.string "are you?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}W-what?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}(Hey! Let's just bail!)$"

Coralport_Eventscript_Fisherman_Text_0:
# 225 "data/maps/Coralport/scripts.pory"
	.string "Jumaro$"

Coralport_Eventscript_Fisherman_Text_1:
# 226 "data/maps/Coralport/scripts.pory"
	.string "I'm waiting for a friend of mine.\n"
	.string "We promised to go fishing together but\l"
	.string "he's taking so long.\p"
	.string "I wonder what's wrong.$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0:
# 249 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1:
# 253 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

setameamequestasreward_Text_0:
# 263 "data/maps/Coralport/scripts.pory"
	.string "set ameame quest state reward$"
