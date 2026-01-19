Route2_Gatehouse_MapScripts::
# 2 "data/maps/Route2_Gatehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_Gatehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route2_Gatehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route2_Gatehouse/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE2_2
	return


Route2_Gatehouse_Eventscript_Nurse::
# 8 "data/maps/Route2_Gatehouse/scripts.pory"
	lock
# 9 "data/maps/Route2_Gatehouse/scripts.pory"
	faceplayer
# 10 "data/maps/Route2_Gatehouse/scripts.pory"
	setspeaker Route2_Gatehouse_Eventscript_Nurse_Text_0
# 11 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_Nurse_Text_1
# 13 "data/maps/Route2_Gatehouse/scripts.pory"
	hidefollower
# 14 "data/maps/Route2_Gatehouse/scripts.pory"
	playse MUS_HEAL
# 15 "data/maps/Route2_Gatehouse/scripts.pory"
	waitse
# 16 "data/maps/Route2_Gatehouse/scripts.pory"
	special HealPlayerParty
# 17 "data/maps/Route2_Gatehouse/scripts.pory"
	updatefollowingmon
# 18 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_Nurse_Text_2
# 21 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 22 "data/maps/Route2_Gatehouse/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 23 "data/maps/Route2_Gatehouse/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end


Route2_Gatehouse_Eventscript_Mart_Employee::
# 29 "data/maps/Route2_Gatehouse/scripts.pory"
	lock
# 30 "data/maps/Route2_Gatehouse/scripts.pory"
	faceplayer
# 31 "data/maps/Route2_Gatehouse/scripts.pory"
	setspeaker Route2_Gatehouse_Eventscript_Mart_Employee_Text_0
# 32 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_Mart_Employee_Text_1
# 33 "data/maps/Route2_Gatehouse/scripts.pory"
	pokemart GeneralMart_C1_1
# 34 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox gText_PleaseComeAgain
# 35 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end


Route2_Gatehouse_Eventscript_Man::
# 40 "data/maps/Route2_Gatehouse/scripts.pory"
	lockall
# 41 "data/maps/Route2_Gatehouse/scripts.pory"
	faceplayer
# 42 "data/maps/Route2_Gatehouse/scripts.pory"
	setspeaker Route2_Gatehouse_Eventscript_Man_Text_0
# 43 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_Man_Text_1
# 45 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 46 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end


Route2_Gatehouse_Eventscript_OldMan::
# 51 "data/maps/Route2_Gatehouse/scripts.pory"
	lock
# 52 "data/maps/Route2_Gatehouse/scripts.pory"
	faceplayer
# 53 "data/maps/Route2_Gatehouse/scripts.pory"
	setspeaker Route2_Gatehouse_Eventscript_OldMan_Text_0
# 54 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_OldMan_Text_1
# 56 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 57 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end


Route2_Gatehouse_Eventscript_KidF::
# 62 "data/maps/Route2_Gatehouse/scripts.pory"
	lockall
# 63 "data/maps/Route2_Gatehouse/scripts.pory"
	faceplayer
# 64 "data/maps/Route2_Gatehouse/scripts.pory"
	setspeaker Route2_Gatehouse_Eventscript_KidF_Text_0
# 65 "data/maps/Route2_Gatehouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EXP_CANDIES_ROUTE2_GATEHOUSE, Route2_Gatehouse_Eventscript_KidF_1
# 81 "data/maps/Route2_Gatehouse/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_Gatehouse_Eventscript_KidF_2
# 101 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_KidF_Text_3
# 102 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 103 "data/maps/Route2_Gatehouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 104 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end

Route2_Gatehouse_Eventscript_KidF_1:
# 66 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_KidF_Text_1
# 69 "data/maps/Route2_Gatehouse/scripts.pory"
	setspeaker Route2_Gatehouse_Eventscript_KidF_Text_0
# 70 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_KidF_Text_2
# 71 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 72 "data/maps/Route2_Gatehouse/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 5
# 73 "data/maps/Route2_Gatehouse/scripts.pory"
	setflag FLAG_RECEIVED_EXP_CANDIES_ROUTE2_GATEHOUSE
# 74 "data/maps/Route2_Gatehouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 75 "data/maps/Route2_Gatehouse/scripts.pory"
	setspeaker Route2_Gatehouse_Eventscript_KidF_Text_0
# 76 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_KidF_Text_3
# 77 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 78 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end

Route2_Gatehouse_Eventscript_KidF_2:
# 82 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_KidF_Text_4
# 85 "data/maps/Route2_Gatehouse/scripts.pory"
	setspeaker Route2_Gatehouse_Eventscript_KidF_Text_0
# 86 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_KidF_Text_5
# 92 "data/maps/Route2_Gatehouse/scripts.pory"
	setspeaker Route2_Gatehouse_Eventscript_KidF_Text_0
# 93 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_KidF_Text_6
# 95 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 96 "data/maps/Route2_Gatehouse/scripts.pory"
	setvar VAR_TEMP_0, 2
# 97 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end


Route2_Gatehouse_Eventscript_WallNoticeRight::
# 110 "data/maps/Route2_Gatehouse/scripts.pory"
	lock
# 111 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_WallNoticeRight_Text_0
# 112 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 113 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end


Route2_Gatehouse_Eventscript_WallNoticeLeft::
# 118 "data/maps/Route2_Gatehouse/scripts.pory"
	lock
# 119 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_WallNoticeLeft_Text_0
# 120 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 121 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end


Route2_Gatehouse_Eventscript_Bookshelves::
# 126 "data/maps/Route2_Gatehouse/scripts.pory"
	lock
# 127 "data/maps/Route2_Gatehouse/scripts.pory"
	msgbox Route2_Gatehouse_Eventscript_Bookshelves_Text_0
# 129 "data/maps/Route2_Gatehouse/scripts.pory"
	closemessage
# 130 "data/maps/Route2_Gatehouse/scripts.pory"
	release
	end


Route2_Gatehouse_Eventscript_Nurse_Text_0:
# 10 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Nurse Eimi$"

Route2_Gatehouse_Eventscript_Nurse_Text_1:
# 11 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Hello and welcome to Route 2's\n"
	.string "Gatehouse.\p"
	.string "Let me heal your tired Pokémon.$"

Route2_Gatehouse_Eventscript_Nurse_Text_2:
# 18 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Thank you for waiting. We have restored\n"
	.string "your tired Pokémon to full health.\p"
	.string "We hope to see you again.$"

Route2_Gatehouse_Eventscript_Mart_Employee_Text_0:
# 31 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Mart Employee Yura$"

Route2_Gatehouse_Eventscript_Mart_Employee_Text_1:
# 32 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Hello. What can I do for you?$"

Route2_Gatehouse_Eventscript_Man_Text_0:
# 42 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Waka$"

Route2_Gatehouse_Eventscript_Man_Text_1:
# 43 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Coralport has the only harbor of the\n"
	.string "entire Sunshine Island.\p"
	.string "That makes you think it'll be a bustling\n"
	.string "town but in truth, it's quite a peaceful\l"
	.string "place to live in.$"

Route2_Gatehouse_Eventscript_OldMan_Text_0:
# 53 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Okashi$"

Route2_Gatehouse_Eventscript_OldMan_Text_1:
# 54 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "My daughter and her husband run a\n"
	.string "candy shop in Coralport.\p"
	.string "I usually bring their daughter outside\n"
	.string "to play when it gets busy.$"

Route2_Gatehouse_Eventscript_KidF_Text_0:
# 64 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Ame$"

Route2_Gatehouse_Eventscript_KidF_Text_1:
# 66 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Hello, gorgeous sister! I like your hair!\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SURPRISED}!{PAUSE 60} {CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}My, thank you, little kid. I like your\n"
	.string "eyes too.$"

Route2_Gatehouse_Eventscript_KidF_Text_2:
# 70 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Hehe, thank you. You can have these\n"
	.string "candies!$"

Route2_Gatehouse_Eventscript_KidF_Text_3:
# 76 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Please visit our shop in Coralport, you\n"
	.string "can get more candies!$"

Route2_Gatehouse_Eventscript_KidF_Text_4:
# 82 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Hello, grandpa!\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}M-Me? Grandpa???\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Hey, little girl. I'm still 16!$"

Route2_Gatehouse_Eventscript_KidF_Text_5:
# 86 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh... Then why is your hair gray like my\n"
	.string "grandpa's?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}I- uh......{PAUSE 60}\n"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_STRUGGLED}Psst, Shinji, why is my hair gray?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SURPRISED}How the f-{PAUSE 60} {CREATE_MUGSHOT MUGSHOT_S EMOTE_GEEZ}(How should I know!? It\n"
	.string "probably has something to do with\l"
	.string "genes?)\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SERIOUS}I believe it has something to do with\n"
	.string "genes.$"

Route2_Gatehouse_Eventscript_KidF_Text_6:
# 93 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh, I see...\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_GEEZ}Sigh.........$"

Route2_Gatehouse_Eventscript_WallNoticeRight_Text_0:
# 111 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Route 2 {RIGHT_ARROW}$"

Route2_Gatehouse_Eventscript_WallNoticeLeft_Text_0:
# 119 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Coralport {LEFT_ARROW}$"

Route2_Gatehouse_Eventscript_Bookshelves_Text_0:
# 127 "data/maps/Route2_Gatehouse/scripts.pory"
	.string "Kitoha region contains of 3 main\n"
	.string "islands: The biggest one, Paulownia\l"
	.string "Island on the west,\n"
	.string "Sunshine Island on the east and the\l"
	.string "smallest one, Uzumaki Island on the\l"
	.string "south.$"
