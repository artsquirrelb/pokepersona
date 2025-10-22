SunshineTown_KurosawasHouse_MapScripts::
# 5 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 14 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 23
	goto_if_eq SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_ge SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playbgm MUS_NONE, TRUE
# 8 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setobjectxyperm 1, 9, 11
	goto SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_TEMP_1
	return

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_KurosawasHouse_OnWarp23
	.2byte 0

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_KurosawasHouse_OnFrame23
	.2byte 0


# 19 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
invisible:
# 20 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	set_invisible
	step_end

SunshineTown_KurosawasHouse_OnWarp23::
# 24 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 25 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, invisible
	return


SunshineTown_KurosawasHouse_OnFrame23::
# 29 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki
	return


SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki::
# 33 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 30
# 34 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_0
# 37 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 38 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 8
# 39 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaInformingAkihikoAboutMiki
# 40 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 41 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playse SE_PIN
# 42 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, NoticingKurosawa
# 43 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 44 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_1
# 49 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 50 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo
	return


# 53 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaInformingAkihikoAboutMiki:
# 54 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	set_visible
# 55 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 55 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 55 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 55 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 55 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 55 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 56 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 56 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
	step_end

# 58 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
NoticingKurosawa:
# 59 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_right
# 60 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	emote_exclamation_mark
	step_end

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo::
# 64 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 30
# 65 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoDecidingToGo
# 66 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 67 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, walkdown
# 68 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, facedown
# 69 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 70 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_0
# 72 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 73 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 74 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_1
# 79 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 80 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 10
# 81 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 82 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 83 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_2
# 84 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 85 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow
	return


# 88 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
AkihikoDecidingToGo:
# 89 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 89 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 90 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 90 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 90 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
	step_end

SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow::
# 94 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 95 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, ShinjiroDecidingToFollow
# 96 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 97 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_0
# 105 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 106 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playbgm MUS_SUNSHINE_ORPHANAGE, TRUE
# 107 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 108 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, ShinjiroFaceUpToKuroSawa
# 109 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 110 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa
	return


# 115 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
ShinjiroDecidingToFollow:
# 116 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
	step_end

# 119 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
ShinjiroFaceUpToKuroSawa:
# 120 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 121 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_up
	step_end

# 123 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaGivingPokebalToShinji:
# 124 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 125 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
	step_end

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa::
# 129 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_0
# 133 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 134 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaGivingPokebalToShinji
# 135 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 136 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 137 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_1
# 143 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 144 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaGettingTheSleepingBags
# 145 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 8
# 146 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 147 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, faceleft
# 148 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 96
# 149 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, faceup
# 150 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 4
# 151 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 152 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 1
# 153 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_2
# 156 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 157 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 158 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	warp MAP_SUNSHINE_TOWN, 3, 14
	return


# 161 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaGettingTheSleepingBags:
# 162 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 162 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 163 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 164 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 164 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 164 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 165 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 165 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 165 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 166 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 167 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 168 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 169 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 169 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 169 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 170 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 170 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 170 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 171 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 172 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 172 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 173 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
# 174 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 175 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 176 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 177 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
	step_end

Growlithe_NPC::
# 180 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lockall
# 181 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 182 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 2, Growlithe_NPC_Movement
# 183 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 184 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Growlithe_NPC_Text_0
# 185 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 186 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	releaseall
	return


# 188 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
Growlithe_NPC_Movement:
# 189 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_player
# 190 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	shake_horizontal
	step_end

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse::
# 194 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 195 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	faceplayer
# 196 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setspeaker SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_0
# 197 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_1
# 203 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_2
# 209 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 210 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_TEMP_2
	return

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_1:
# 198 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_1
# 200 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
	return


SunshineTown_KurosawasHouse_Eventscript_TrashcanItem::
# 215 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 216 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE, SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_2
# 221 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
# 222 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE
SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_1:
# 224 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end

SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_2:
# 217 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_Text_0
# 218 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
	goto SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_1


SunshineTown_KurosawasHouse_Eventscript_Notebook::
# 229 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 230 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_Notebook_Text_0
# 231 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 232 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end


SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_0:
# 34 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_TIRED}...\p"
	.string "(If only I were stronger... I could've\n"
	.string "fought back and had a chance at\l"
	.string "finding Miki...)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}...$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_1:
# 44 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_TIRED}Kurosawa-san...\p"
	.string "{SPEAKER NAME_KUROSAWA}{DESTROY_MUGSHOT}We still haven't found her.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}And the body count didn't add up, which\n"
	.string "means...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_TIRED}...$"

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_0:
# 70 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Where are you going?$"

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_1:
# 74 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}I believe Miki is still alive.\p"
	.string "And if she's alive, there's a big chance\n"
	.string "that she's in danger.\p"
	.string "I'll definitely find her.\p"
	.string "And in order to do that,\p"
	.string "I must get stronger.$"

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_2:
# 83 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}It's time for me to go.$"

SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_0:
# 97 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}I'll go with you, Aki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh? But-\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}No buts.\p"
	.string "Letting a reckless dumbass like you\n"
	.string "traveling alone is basically murder.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Not funny.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Beside, Miki is like a sister to me too.\n"
	.string "I'm also worried about her.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Alright. Let's go find her together,\n"
	.string "Shinji.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_0:
# 129 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Kurosawa-san, thank you for your hard\n"
	.string "work and for taking care of us these\l"
	.string "past few days.\p"
	.string "Please take care.\p"
	.string "{SPEAKER NAME_KUROSAWA}{DESTROY_MUGSHOT}Wait just a moment.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_1:
# 137 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_NONE}Kurosawa gave Shinjiro a Pokéball.\p"
	.string "{SPEAKER NAME_KUROSAWA}Sanada-kun already has a Pokémon so\n"
	.string "I'm giving this to you, Aragaki-kun.\p"
	.string "Befriending a Pokémon will greatly help\n"
	.string "you on your journey.\p"
	.string "You also should help other people if you\n"
	.string "can.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Thank you, Kurosawa-san. We will.\p"
	.string "{SPEAKER NAME_KUROSAWA}{DESTROY_MUGSHOT}Oh, right. Hang on.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_2:
# 153 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Take these sleeping bags. You'll need\n"
	.string "them when night falls.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Woah, these are great! Thank you,\n"
	.string "Kurosawa-san!\p"
	.string "{SPEAKER NAME_KUROSAWA}{DESTROY_MUGSHOT}Stay safe, kids. I'll keep you updated\n"
	.string "with our searching.$"

Growlithe_NPC_Text_0:
# 184 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "Growlithe looks determined.$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_0:
# 196 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "Kurosawa$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_1:
# 198 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}You kids are always welcomed to spend\n"
	.string "the night here if you want to.\p"
	.string "{SPEAKER NAME_AKIHIKO}{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you, Kurosawa-san.$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_2:
# 203 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}The Sanadas and the Aragakis were\n"
	.string "supposed to pick you two up but they\l"
	.string "all got into accidents and are\l"
	.string "currently being treated at Kibou\l"
	.string "Hospital.\p"
	.string "The injuries aren't threatening but\n"
	.string "they'll have to stay there for a month\l"
	.string "or two.\p"
	.string "The adoption papers were already done\n"
	.string "and approved so you're officially a\l"
	.string "Sanada and an Aragaki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}My... parents.\p"
	.string "We should visit them in Kibou City.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Yeah...$"

SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_Text_0:
# 217 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "It's empty.$"

SunshineTown_KurosawasHouse_Eventscript_Notebook_Text_0:
# 230 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "The notebook is full of hard-to-read\n"
	.string "scribles. Among them is a\l"
	.string "stroke-through “Sunshine Orphanage”.$"
