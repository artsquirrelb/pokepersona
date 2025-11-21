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
	fadenewbgm MUS_RG_SEVII_67
# 107 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 108 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, ShinjiroFaceUpToKuroSawa
# 109 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 110 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 111 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitfanfare
# 112 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_1
# 114 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 115 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_COMPANION_MENU
# 116 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 117 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 118 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa
	return


# 123 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
ShinjiroDecidingToFollow:
# 124 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
	step_end

# 127 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
ShinjiroFaceUpToKuroSawa:
# 128 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 129 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_up
	step_end

# 131 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaGivingPokebalToShinji:
# 132 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 133 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
	step_end

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa::
# 137 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_0
# 140 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 141 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaGivingPokebalToShinji
# 142 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 143 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 144 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_1
# 150 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 151 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaGettingTheSleepingBags
# 152 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 8
# 153 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 154 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, faceleft
# 155 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 200
# 156 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, faceup
# 157 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 4
# 158 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 159 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 1
# 160 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	giveitem ITEM_CAMP_GEARS
# 161 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_2
# 164 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 165 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 166 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	fwdtime 9, 30
# 167 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 169 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	warp MAP_SUNSHINE_TOWN, 3, 14
# 170 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
	end


# 174 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaGettingTheSleepingBags:
# 175 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 175 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 176 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 177 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 177 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 177 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 178 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 178 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 178 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 179 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 180 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 181 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 182 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 182 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 182 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 183 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 183 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 183 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 184 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 185 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 185 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 186 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
# 187 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 188 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 189 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 190 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
	step_end

Growlithe_NPC::
# 193 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lockall
# 194 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 195 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 2, Growlithe_NPC_Movement
# 196 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 197 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Growlithe_NPC_Text_0
# 198 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 199 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	releaseall
	return


# 201 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
Growlithe_NPC_Movement:
# 202 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_player
# 203 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	shake_horizontal
	step_end

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse::
# 207 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 208 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	faceplayer
# 209 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setspeaker SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_0
# 210 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_1
# 216 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_2
# 222 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 223 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_TEMP_2
	return

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_1:
# 211 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_1
# 213 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
	return


SunshineTown_KurosawasHouse_Eventscript_TrashcanItem::
# 228 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 229 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_SUNSHINE_ORPHANAGE_ANTIDOTE, SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_2
# 234 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
# 235 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_SUNSHINE_ORPHANAGE_ANTIDOTE
SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_1:
# 237 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end

SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_2:
# 230 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_Text_0
# 231 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
	goto SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_1


SunshineTown_KurosawasHouse_Eventscript_Notebook::
# 242 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 243 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_Notebook_Text_0
# 244 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 245 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
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
	.string "travel alone is basically murder.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Not funny.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Besides, Miki is like a sister to me too.\n"
	.string "I'm also worried about her.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Alright. Let's go find her together,\n"
	.string "Shinji.$"

SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_1:
# 112 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{COLOR GREEN}Tips: Shinjiro is now your Companion.\n"
	.string "Companion Menu is now unlocked.\p"
	.string "You can open it in {START_BUTTON} Menu {RIGHT_ARROW} {SELECT_BUTTON}.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_0:
# 137 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Kurosawa-san, thank you for your hard\n"
	.string "work and for taking care of us these\l"
	.string "past few days.\p"
	.string "Please take care.\p"
	.string "{SPEAKER NAME_KUROSAWA}{DESTROY_MUGSHOT}Wait just a moment.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_1:
# 144 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
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
# 161 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Take these Camping Gears. You'll need\n"
	.string "them while outdoors.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Woah, these are great! Thank you,\n"
	.string "Kurosawa-san!\p"
	.string "{SPEAKER NAME_KUROSAWA}{DESTROY_MUGSHOT}Stay safe, kids. I'll keep you updated\n"
	.string "with our search.$"

Growlithe_NPC_Text_0:
# 197 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "Growlithe looks determined.$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_0:
# 209 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "Kurosawa$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_1:
# 211 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}You kids are always welcome to spend\n"
	.string "the night here if you want to.\p"
	.string "{SPEAKER NAME_AKIHIKO}{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you, Kurosawa-san.$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInHisHouse_Text_2:
# 216 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
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
# 230 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "It's empty.$"

SunshineTown_KurosawasHouse_Eventscript_Notebook_Text_0:
# 243 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "The notebook is full of hard-to-read\n"
	.string "scribbles. Among them is a\l"
	.string "strike-through “Sunshine Orphanage”.$"
