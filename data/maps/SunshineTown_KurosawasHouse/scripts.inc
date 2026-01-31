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
# 116 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 117 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto_if_unset FLAG_COMPANION_MENU_GET, SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_2
SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_1:
# 121 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 122 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	clearflag FLAG_LOCK_SHINJIRO
# 123 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa
	return

SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_2:
# 118 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	call EventScript_ShowHelpCompanion
# 119 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_COMPANION_MENU_GET
	goto SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_1


# 128 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
ShinjiroDecidingToFollow:
# 129 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
	step_end

# 132 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
ShinjiroFaceUpToKuroSawa:
# 133 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 134 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_up
	step_end

# 136 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaGivingPokebalToShinji:
# 137 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 138 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
	step_end

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa::
# 142 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_0
# 145 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 146 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaGivingPokebalToShinji
# 147 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 148 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 149 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_1
# 155 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 156 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 1, KurosawaGettingTheSleepingBags
# 157 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 8
# 158 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 159 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, faceleft
# 160 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 200
# 161 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 3, faceup
# 162 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 4
# 163 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 164 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 1
# 165 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	giveitem ITEM_CAMP_GEARS
# 166 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_2
# 169 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 170 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay 20
# 171 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	fwdtime 10, 30
# 172 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	fwdweekday WEEKDAY_SUN
# 173 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 174 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	warp MAP_SUNSHINE_TOWN, 3, 14
# 175 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitstate
	return


# 178 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
KurosawaGettingTheSleepingBags:
# 179 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 179 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 180 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 181 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 181 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 181 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_left
# 182 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 182 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 182 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 183 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 184 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 185 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 186 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 186 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 186 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_down
# 187 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 187 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 187 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 188 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_up
# 189 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 189 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 190 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
# 191 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 192 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	delay_16
# 193 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	walk_right
# 194 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_down
	step_end

Growlithe_NPC::
# 198 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 199 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	faceplayer
# 200 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 201 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	applymovement 2, Growlithe_NPC_Movement
# 202 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	waitmovement 0
# 203 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Growlithe_NPC_Text_0
# 204 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end


# 208 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
Growlithe_NPC_Movement:
# 209 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	face_player
# 210 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	shake_horizontal
	step_end

SunshineTown_KurosawasHouse_Eventscript_Kurosawa::
# 214 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 215 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	faceplayer
# 216 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setspeaker SunshineTown_KurosawasHouse_Eventscript_Kurosawa_Text_0
# 217 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	checkplayergender
# 218 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SunshineTown_KurosawasHouse_Eventscript_Kurosawa_1
# 222 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto Eventscript_Kurosawa_Mitsuru_C1
	return

SunshineTown_KurosawasHouse_Eventscript_Kurosawa_1:
# 219 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	goto Eventscript_Kurosawa_Akihiko_P_C1
	return


Eventscript_Kurosawa_Akihiko_P_C1::
# 227 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Eventscript_Kurosawa_Akihiko_P_C1_2
# 233 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Eventscript_Kurosawa_Akihiko_P_C1_Text_1
# 239 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 240 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setvar VAR_TEMP_0, 1
Eventscript_Kurosawa_Akihiko_P_C1_1:
# 242 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end

Eventscript_Kurosawa_Akihiko_P_C1_2:
# 228 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Eventscript_Kurosawa_Akihiko_P_C1_Text_0
# 230 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
	goto Eventscript_Kurosawa_Akihiko_P_C1_1


Eventscript_Kurosawa_Mitsuru_C1::
# 247 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	hidefollowernpc
# 248 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	hidefollower
# 249 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Eventscript_Kurosawa_Mitsuru_C1_2
# 264 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	doemote 1, 0
# 265 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Eventscript_Kurosawa_Mitsuru_C1_Text_2
# 274 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	specialvar VAR_0x8000, GetPlayerFacingDirection
# 275 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	switch VAR_0x8000
# 277 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	case DIR_NORTH, Eventscript_Kurosawa_Mitsuru_C1_7
# 278 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	case DIR_WEST, Eventscript_Kurosawa_Mitsuru_C1_8
# 279 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	case DIR_EAST, Eventscript_Kurosawa_Mitsuru_C1_9
# 280 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	stepinplace VAR_LAST_TALKED, DIR_NORTH
Eventscript_Kurosawa_Mitsuru_C1_5:
# 282 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Eventscript_Kurosawa_Mitsuru_C1_Text_3
# 292 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	setvar VAR_TEMP_1, 1
# 294 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end

Eventscript_Kurosawa_Mitsuru_C1_2:
# 250 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Eventscript_Kurosawa_Mitsuru_C1_Text_0
# 254 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 255 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	doemote 1, E_HAPPY
# 256 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox Eventscript_Kurosawa_Mitsuru_C1_Text_1
# 258 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	doemote MC, E_QUESTION
# 259 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end

Eventscript_Kurosawa_Mitsuru_C1_7:
# 277 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	stepinplace VAR_LAST_TALKED, DIR_SOUTH
	goto Eventscript_Kurosawa_Mitsuru_C1_5

Eventscript_Kurosawa_Mitsuru_C1_8:
# 278 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	stepinplace VAR_LAST_TALKED, DIR_EAST
	goto Eventscript_Kurosawa_Mitsuru_C1_5

Eventscript_Kurosawa_Mitsuru_C1_9:
# 279 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	stepinplace VAR_LAST_TALKED, DIR_WEST
	goto Eventscript_Kurosawa_Mitsuru_C1_5


SunshineTown_KurosawasHouse_Eventscript_TrashcanItem::
# 299 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 300 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_Text_0
# 301 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 302 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end


SunshineTown_KurosawasHouse_Eventscript_Notebook::
# 307 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	lock
# 308 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	msgbox SunshineTown_KurosawasHouse_Eventscript_Notebook_Text_0
# 309 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	closemessage
# 310 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	release
	end


SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_0:
# 37 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_TIRED}...\p"
	.string "(If only I were stronger... I could've\n"
	.string "fought back and had a chance at\l"
	.string "finding Miki...)\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_PENSIVE}...$"

SunshineTown_KurosawasHouse_Eventscript_KurosawaInformingAkihikoAboutMiki_Text_1:
# 47 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_TIRED}Kurosawa-san...\p"
	.string "{SPEAKER NAME_KRSW}{DESTROY_MUGSHOT}We still haven't found her.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_PENSIVE}And the body count didn't add up, which\n"
	.string "means...\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_TIRED}...$"

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_0:
# 73 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Where are you going?$"

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_1:
# 77 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}I believe Miki is still alive.\p"
	.string "And if she's alive, there's a big chance\n"
	.string "that she's in danger.\p"
	.string "I'll definitely find her.\p"
	.string "And in order to do that,\p"
	.string "I must get stronger.$"

SunshineTown_KurosawasHouse_Eventscript_AkihikoDecidingToGo_Text_2:
# 86 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}It's time for me to go.$"

SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_0:
# 100 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}I'll go with you, Aki.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh? But-\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}No buts.\p"
	.string "Letting a reckless dumbass like you\n"
	.string "travel alone is basically murder.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}Not funny.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Besides, Miki is like a sister to me too.\n"
	.string "I'm also worried about her.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}...\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Alright. Let's go find her together,\n"
	.string "Shinji.$"

SunshineTown_KurosawasHouse_Eventscript_ShinjiroDecidingToFollow_Text_1:
# 115 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{COLOR GREEN}Tips: Shinjiro is now your Companion.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_0:
# 142 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Kurosawa-san, thank you for your hard\n"
	.string "work and for taking care of us these\l"
	.string "past few days.\p"
	.string "Please take care.\p"
	.string "{SPEAKER NAME_KRSW}{DESTROY_MUGSHOT}Wait just a moment.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_1:
# 149 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_NONE}Kurosawa gave Shinjiro a Pokéball.\p"
	.string "{SPEAKER NAME_KRSW}Sanada-kun already has a Pokémon so\n"
	.string "I'm giving this to you, Aragaki-kun.\p"
	.string "Befriending a Pokémon will greatly help\n"
	.string "you on your journey.\p"
	.string "You also should help other people if you\n"
	.string "can.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Thank you, Kurosawa-san. We will.\p"
	.string "{SPEAKER NAME_KRSW}{DESTROY_MUGSHOT}Oh, right. Hang on.$"

SunshineTown_KurosawasHouse_Eventscript_SayingGoodbyeToKurosawa_Text_2:
# 166 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_KRSW}Take these Camping Gears. You'll need\n"
	.string "them while outdoors.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Woah, these are great! Thank you,\n"
	.string "Kurosawa-san!\p"
	.string "{SPEAKER NAME_KRSW}{DESTROY_MUGSHOT}Stay safe, kids. I'll keep you updated\n"
	.string "with our search.$"

Growlithe_NPC_Text_0:
# 203 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "Growlithe looks determined.$"

SunshineTown_KurosawasHouse_Eventscript_Kurosawa_Text_0:
# 216 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "Kurosawa$"

Eventscript_Kurosawa_Akihiko_P_C1_Text_0:
# 228 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}You kids are always welcome to spend\n"
	.string "the night here if you want to.\p"
	.string "{SPEAKER NAME_A}{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Thank you, Kurosawa-san.$"

Eventscript_Kurosawa_Akihiko_P_C1_Text_1:
# 233 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
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
	.string "{SPEAKER NAME_A}{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}My... parents.\p"
	.string "We should visit them in Kibou City.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_PENSIVE}Yeah...$"

Eventscript_Kurosawa_Mitsuru_C1_Text_0:
# 250 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_KRSW}That reminds me, how are Sanada and\n"
	.string "Aragaki?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}They're improving very quickly, sir.\n"
	.string "I'm certainly still not used to the\l"
	.string "rowdy bickering between them but\l"
	.string "they're...{PAUSE 60} {CREATE MUGSHOT_M EMOTE_SMILE}fun to be around.$"

Eventscript_Kurosawa_Mitsuru_C1_Text_1:
# 256 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_KRSW}Ahaha, I can see that.\n"
	.string "I'm glad for you, Kirijo.$"

Eventscript_Kurosawa_Mitsuru_C1_Text_2:
# 265 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_KRSW}Oh, Kirijo. What brings you here?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Good day, Kurosawa-san. I hope you've\n"
	.string "been doing well.\p"
	.string "My father sent you his regards.\p"
	.string "{SPEAKER NAME_KRSW}{DESTROY_MUGSHOT}Hahaha, always so formal, aren't you?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}If I may so ask, how's the investigation\n"
	.string "going?\p"
	.string "{SPEAKER NAME_KRSW}{DESTROY_MUGSHOT}To be honest, it's not going too well.\p"
	.string "Especially when I have to be discreet\n"
	.string "about it.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}..... Our apologies for putting you in\n"
	.string "such a tough spot, Kurosawa-san.\p"
	.string "If only that incident didn't-$"

Eventscript_Kurosawa_Mitsuru_C1_Text_3:
# 282 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "{SPEAKER NAME_KRSW}{DESTROY_MUGSHOT}Now now, young lady. I have to cut you\n"
	.string "short here.\p"
	.string "What happened back then was entirely\n"
	.string "due to my choice in pursuing justice.\p"
	.string "It's neither you nor your father's\n"
	.string "fault.\p"
	.string "It's the same now, I'm simply just doing\n"
	.string "my best to protect this region and its\l"
	.string "people.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}... {PAUSE 60}You're a very righteous man,\n"
	.string "Kurosawa-san.\p"
	.string "It's our honor to have you as an ally.\p"
	.string "{SPEAKER NAME_KRSW}{DESTROY_MUGSHOT}I can say the same to you, Kirijo.\n"
	.string "However, there's a part of me wishing\l"
	.string "the opposite.\p"
	.string "Kids like you shouldn't be the one\n"
	.string "bearing burdens that we adults failed\l"
	.string "to.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}Kurosawa-san...$"

SunshineTown_KurosawasHouse_Eventscript_TrashcanItem_Text_0:
# 300 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "It's empty.$"

SunshineTown_KurosawasHouse_Eventscript_Notebook_Text_0:
# 308 "data/maps/SunshineTown_KurosawasHouse/scripts.pory"
	.string "The notebook is full of hard-to-read\n"
	.string "scribbles. Among them is a\l"
	.string "strike-through “Sunshine Orphanage”.$"
