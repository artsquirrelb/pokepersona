SunshineTown_KurosawasHouse_MapScripts::
# 5 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 17 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 23
	goto_if_eq SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_ge SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_lt SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playbgm MUS_NONE, TRUE
# 8 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setobjectxyperm 1, 9, 11
	goto SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 14 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_TEMP_2
	return

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_KurosawasHouse_OnWarp23
	.2byte 0

SunshineTown_KurosawasHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_KurosawasHouse_OnFrame23
	.2byte 0


# 22 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
invisible:
# 23 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	set_invisible
	step_end

SunshineTown_KurosawasHouse_OnWarp23::
# 27 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 28 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, invisible
	return


SunshineTown_KurosawasHouse_OnFrame23::
# 32 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki
	return


SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki::
# 36 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 30
# 37 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_0
# 40 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 41 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 8
# 42 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaInformingAkihikoAboutMiki
# 43 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 44 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playse SE_PIN
# 45 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, NoticingKurosawa
# 46 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 47 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_1
# 52 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 53 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo
	return


# 56 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaInformingAkihikoAboutMiki:
# 57 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	set_visible
# 58 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 58 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 58 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 58 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 58 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 58 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 59 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 59 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
	step_end

# 61 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
NoticingKurosawa:
# 62 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_right
# 63 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	emote_exclamation_mark
	step_end

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo::
# 67 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 30
# 68 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoDecidingToGo
# 69 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 70 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, walkdown
# 71 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, facedown
# 72 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 73 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_0
# 75 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 76 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 77 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_1
# 82 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 83 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 10
# 84 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 85 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 86 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_2
# 87 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 88 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow
	return


# 91 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
AkihikoDecidingToGo:
# 92 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 92 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 93 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 93 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 93 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
	step_end

SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow::
# 97 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 98 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, ShinjiroDecidingToFollow
# 99 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 100 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_0
# 108 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 109 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	fadenewbgm MUS_RG_SEVII_67
# 110 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 111 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, ShinjiroFaceUpToKuroSawa
# 112 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 113 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 114 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitfanfare
# 115 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_1
# 117 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 118 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_COMPANION_MENU_GET
# 119 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 120 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 121 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa
	return


# 126 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
ShinjiroDecidingToFollow:
# 127 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
	step_end

# 130 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
ShinjiroFaceUpToKuroSawa:
# 131 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 132 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_up
	step_end

# 134 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaGivingPokebalToShinji:
# 135 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 136 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
	step_end

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa::
# 140 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_0
# 143 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 144 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaGivingPokebalToShinji
# 145 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 146 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 147 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_1
# 153 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 154 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaGettingTheSleepingBags
# 155 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 8
# 156 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 157 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, faceleft
# 158 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 200
# 159 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, faceup
# 160 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 4
# 161 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 162 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 1
# 163 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	giveitem ITEM_CAMP_GEARS
# 164 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_2
# 167 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 168 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 169 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	fwdtime 10, 30
# 170 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 171 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 172 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	warp MAP_SUNSHINE_TOWN, 3, 14
# 173 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitstate
	return


# 176 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaGettingTheSleepingBags:
# 177 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 177 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 178 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 179 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 179 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 179 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 180 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 180 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 180 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 181 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 182 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 183 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 184 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 184 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 184 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 185 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 185 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 185 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 186 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 187 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 187 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 188 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
# 189 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 190 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 191 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 192 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
	step_end

Growlithe_NPC::
# 195 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lockall
# 196 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 197 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 2, Growlithe_NPC_Movement
# 198 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 199 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Growlithe_NPC_Text_0
# 200 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 201 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	releaseall
	return


# 203 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
Growlithe_NPC_Movement:
# 204 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_player
# 205 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	shake_horizontal
	step_end

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse::
# 209 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 210 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	faceplayer
# 211 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setspeaker SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_0
# 212 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_2
# 218 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_2
# 224 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 225 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_TEMP_2
SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_1:
# 227 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_2:
# 213 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_1
# 215 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
	goto SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_1


SunshineTown_KurosawasHouse_Eventscript_TrashcanItem::
# 232 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 233 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_Text_0
# 234 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 235 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end


SunshineTown_KurosawasHouse_Eventscript_Notebook::
# 240 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 241 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_Notebook_Text_0
# 242 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 243 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end


SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_0:
# 37 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_TIRED}...\p"
	.string "(If only I were stronger... I could've\n"
	.string "fought back and had a chance at\l"
	.string "finding Miki...)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}...$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_1:
# 47 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_TIRED}Kurosawa-san...\p"
	.string "{SPEAKER NAME_KUROSAWA}{DESTROY_MUGSHOT}We still haven't found her.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}And the body count didn't add up, which\n"
	.string "means...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_TIRED}...$"

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_0:
# 73 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Where are you going?$"

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_1:
# 77 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}I believe Miki is still alive.\p"
	.string "And if she's alive, there's a big chance\n"
	.string "that she's in danger.\p"
	.string "I'll definitely find her.\p"
	.string "And in order to do that,\p"
	.string "I must get stronger.$"

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_2:
# 86 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}It's time for me to go.$"

SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_0:
# 100 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}I'll go with you, Aki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh? But-\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}No buts.\p"
	.string "Letting a reckless dumbass like you\n"
	.string "travel alone is basically murder.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Not funny.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Besides, Miki is like a sister to me too.\n"
	.string "I'm also worried about her.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Alright. Let's go find her together,\n"
	.string "Shinji.$"

SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_1:
# 115 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{COLOR GREEN}Tips: Shinjiro is now your Companion.\n"
	.string "Companion Menu is now unlocked.\p"
	.string "You can open it in {START_BUTTON} Menu {RIGHT_ARROW} {SELECT_BUTTON}.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_0:
# 140 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Kurosawa-san, thank you for your hard\n"
	.string "work and for taking care of us these\l"
	.string "past few days.\p"
	.string "Please take care.\p"
	.string "{SPEAKER NAME_KUROSAWA}{DESTROY_MUGSHOT}Wait just a moment.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_1:
# 147 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
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
# 164 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Take these Camping Gears. You'll need\n"
	.string "them while outdoors.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Woah, these are great! Thank you,\n"
	.string "Kurosawa-san!\p"
	.string "{SPEAKER NAME_KUROSAWA}{DESTROY_MUGSHOT}Stay safe, kids. I'll keep you updated\n"
	.string "with our search.$"

Growlithe_NPC_Text_0:
# 199 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "Growlithe looks determined.$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_0:
# 211 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "Kurosawa$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_1:
# 213 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}You kids are always welcome to spend\n"
	.string "the night here if you want to.\p"
	.string "{SPEAKER NAME_AKIHIKO}{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you, Kurosawa-san.$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_2:
# 218 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}The Sanadas and the Aragakis were\n"
	.string "supposed to pick you two up but they\l"
	.string "all got into accidents and are\l"
	.string "currently being treated at Kibou\l"
	.string "Hospital.\p"
	.string "The injuries aren't life threatening but\n"
	.string "they'll have to stay there for a month\l"
	.string "or two.\p"
	.string "The adoption papers were already done\n"
	.string "and approved so you're officially a\l"
	.string "Sanada and an Aragaki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}My... parents.\p"
	.string "We should visit them in Kibou City.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Yeah...$"

SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_Text_0:
# 233 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "It's empty.$"

SunshineTown_KurosawasHouse_Eventscript_Notebook_Text_0:
# 241 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "The notebook is full of hard-to-read\n"
	.string "scribbles. Among them is a\l"
	.string "strike-through “Sunshine Orphanage”.$"
