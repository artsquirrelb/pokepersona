WindwardPort_Harbor_MapScripts::
# 2 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindwardPort_Harbor_MapScripts_OnTransition
# 6 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, WindwardPort_Harbor_MapScripts_UpdatingNPCTime
# 3 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WindwardPort_Harbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WindwardPort_Harbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, C1_BOARDING_SHIP, WindwardPort_Harbor_MapScripts_OnFrame4
	.2byte 0


WindwardPort_Harbor_MapScripts_OnTransition::
# 10 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_VISITED_WINDWARD_PORT
# 11 "data/maps/WindwardPort_Harbor/scripts.pory"
	setrespawn HEAL_LOCATION_WINDWARD_PORT
# 12 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_1
# 13 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_2
# 14 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 15 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_CHAPTER_1_STATE, C1_BOARDING_SHIP
	goto_if_eq WindwardPort_Harbor_MapScripts_OnTransition_2
WindwardPort_Harbor_MapScripts_OnTransition_1:
# 19 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 20 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 0
	goto_if_ge WindwardPort_Harbor_MapScripts_OnTransition_7
WindwardPort_Harbor_MapScripts_OnTransition_6:
# 20 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 100
	goto_if_eq WindwardPort_Harbor_MapScripts_OnTransition_5
WindwardPort_Harbor_MapScripts_OnTransition_4:
# 29 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_MapScripts_OnTransition_11
	return

WindwardPort_Harbor_MapScripts_OnTransition_2:
# 16 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_2
# 17 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto WindwardPort_Harbor_MapScripts_OnTransition_1

WindwardPort_Harbor_MapScripts_OnTransition_5:
# 22 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt WindwardPort_Harbor_MapScripts_OnTransition_13
# 22 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 21
	goto_if_ge WindwardPort_Harbor_MapScripts_OnTransition_13
	goto WindwardPort_Harbor_MapScripts_OnTransition_4

WindwardPort_Harbor_MapScripts_OnTransition_7:
# 20 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 20
	goto_if_le WindwardPort_Harbor_MapScripts_OnTransition_5
	goto WindwardPort_Harbor_MapScripts_OnTransition_6

WindwardPort_Harbor_MapScripts_OnTransition_11:
# 30 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 17, 29
# 31 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
	return

WindwardPort_Harbor_MapScripts_OnTransition_13:
# 23 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadenewbgm MUS_DP_LAKE_CAVERNS
# 24 "data/maps/WindwardPort_Harbor/scripts.pory"
	savebgm MUS_DP_LAKE_CAVERNS
# 25 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 26 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_5
	goto WindwardPort_Harbor_MapScripts_OnTransition_4


WindwardPort_Harbor_MapScripts_OnFrame4::
# 35 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab
	return


WindwardPort_Harbor_MapScripts_UpdatingNPCTime::
# 39 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 40 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt WindwardPort_Harbor_MapScripts_UpdatingNPCTime_2
# 40 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_ge WindwardPort_Harbor_MapScripts_UpdatingNPCTime_2
# 44 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_1
WindwardPort_Harbor_MapScripts_UpdatingNPCTime_1:
# 46 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt WindwardPort_Harbor_MapScripts_UpdatingNPCTime_7
# 46 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 21
	goto_if_ge WindwardPort_Harbor_MapScripts_UpdatingNPCTime_7
# 50 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_4
	return

WindwardPort_Harbor_MapScripts_UpdatingNPCTime_2:
# 41 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_1
	goto WindwardPort_Harbor_MapScripts_UpdatingNPCTime_1

WindwardPort_Harbor_MapScripts_UpdatingNPCTime_7:
# 47 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_4
	return


WindwardPort_Harbor_Eventscript_SailorOnGuard::
# 55 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 56 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 57 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0
# 58 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 59 "data/maps/WindwardPort_Harbor/scripts.pory"
	showmoneybox 0, 0
# 60 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_1, MSGBOX_YESNO
# 63 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 64 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_SailorOnGuard_2
# 91 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
WindwardPort_Harbor_Eventscript_SailorOnGuard_1:
# 93 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_SailorOnGuard_2:
# 65 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkmoney 300
# 66 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_SailorOnGuard_5
# 82 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0
# 83 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_3
# 84 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 85 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
# 86 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_SailorOnGuard_5:
# 67 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHOP
# 68 "data/maps/WindwardPort_Harbor/scripts.pory"
	removemoney 300
# 69 "data/maps/WindwardPort_Harbor/scripts.pory"
	updatemoneybox
# 70 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0
# 71 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_2
# 72 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 73 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
# 74 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement 1, walkinplacedown
# 75 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitmovement
# 76 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 77 "data/maps/WindwardPort_Harbor/scripts.pory"
	addtime 0, 3, 0
# 78 "data/maps/WindwardPort_Harbor/scripts.pory"
	warp MAP_CORALPORT, 4, 20
# 79 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitstate
	goto WindwardPort_Harbor_Eventscript_SailorOnGuard_1


WindwardPort_Harbor_Eventscript_VeteranF::
# 98 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 99 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 100 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_VeteranF_Text_0
# 101 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_VeteranF_Text_1
# 104 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 105 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Pelipper::
# 110 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_PELIPPER
# 111 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Gurdurr::
# 116 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_GURDURR
# 117 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Bewear::
# 122 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_BEWEAR
# 123 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Worker::
# 128 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 129 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 130 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_Worker_Text_0
# 131 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_Worker_Text_1
# 133 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 134 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Sign::
# 139 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 140 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_Sign_Text_0
# 141 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab::
# 146 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 147 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 148 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement A_WP, faceleft
# 149 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement M_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_0
# 150 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 4
# 151 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove S_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_1
# 152 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 153 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Text_0
# 157 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 158 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 159 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_2, 1
# 161 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement M_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_3
# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement S_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_4
# 163 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove A_WP, invisible
# 164 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 165 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject A_WP
# 166 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 167 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject S_WP
# 168 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 169 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject M_WP
# 170 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 171 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_2
# 172 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, C1_TO_MAYOIDOS_LAB
# 173 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger::
# 178 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 179 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2
# 179 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 21
	goto_if_ge WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_1:
# 218 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2:
# 180 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 180 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 181 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 181 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 6
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 182 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 8
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 182 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 10
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 183 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 12
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 196 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 196 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 197 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 5
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 197 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 7
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 198 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 9
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 198 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 11
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 199 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 13
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_1

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7:
# 185 "data/maps/WindwardPort_Harbor/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 186 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_36
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_35:
# 193 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21:
# 201 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 202 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_1, MSGBOX_YESNO
# 203 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_39
# 211 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 212 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer walkright
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_38:
# 214 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_36:
# 187 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 188 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 189 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 190 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_0
# 191 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_35

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_39:
# 204 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 205 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 206 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_2
# 207 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 208 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 44
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_38


WindwardPort_Harbor_Eventscript_GhostBoyMad1::
# 223 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 224 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 225 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 0, 20
# 226 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 0, 20
# 227 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 228 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 229 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_GhostBoyMad
	return


WindwardPort_Harbor_Eventscript_GhostBoyMad2::
# 233 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 234 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 235 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 0, 21
# 236 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 0, 21
# 237 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 238 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 239 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_GhostBoyMad
	return


WindwardPort_Harbor_Eventscript_GhostBoyMad::
# 243 "data/maps/WindwardPort_Harbor/scripts.pory"
	special StopMapMusic
# 244 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 245 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_1
# 249 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 250 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 251 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 252 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 253 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_2
# 254 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 255 "data/maps/WindwardPort_Harbor/scripts.pory"
	trainerbattle_no_intro TRAINER_GHOSTBOY, WindwardPort_Harbor_GhostBoy_Defeated
# 256 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_3
# 258 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 259 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 260 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_4
# 261 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 262 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 263 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 264 "data/maps/WindwardPort_Harbor/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY
# 265 "data/maps/WindwardPort_Harbor/scripts.pory"
	warpwhitefade MAP_ROUTE2_HOUSE, 4, 4
# 266 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitstate
	return


WindwardPort_Harbor_Eventscript_PreschoolerM::
# 274 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 275 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 276 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 277 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 278 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_2
WindwardPort_Harbor_Eventscript_PreschoolerM_1:
# 281 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_5
WindwardPort_Harbor_Eventscript_PreschoolerM_4:
# 284 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_8
WindwardPort_Harbor_Eventscript_PreschoolerM_7:
# 287 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_11
WindwardPort_Harbor_Eventscript_PreschoolerM_10:
# 290 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_13
	return

WindwardPort_Harbor_Eventscript_PreschoolerM_2:
# 279 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartQuestGhosBoy
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_1

WindwardPort_Harbor_Eventscript_PreschoolerM_5:
# 282 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_FoundGhostBoy1
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_4

WindwardPort_Harbor_Eventscript_PreschoolerM_8:
# 285 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartTreasureHunt2
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_7

WindwardPort_Harbor_Eventscript_PreschoolerM_11:
# 288 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_TreasureHint
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_10

WindwardPort_Harbor_Eventscript_PreschoolerM_13:
# 291 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_2
# 292 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_15
# 296 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartQuiz3
	return

WindwardPort_Harbor_Eventscript_PreschoolerM_15:
# 293 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_FoundTreasure
	return


WindwardPort_Harbor_Eventscript_StartQuestGhosBoy::
# 302 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_BUBBLE
# 303 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement GHOSTBOY, emotecry
# 304 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_0
# 305 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 306 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 307 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_1
# 323 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_4
# 324 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 325 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_5, MSGBOX_YESNO
# 327 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_7
# 336 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_HideAndSeekRejected
	return

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_1:
# 308 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_1
# 309 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 310 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_2, MSGBOX_YESNO
# 312 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_4
# 319 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_HideAndSeekRejected
	return

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_4:
# 313 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_3
# 315 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 316 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek
	return

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_7:
# 328 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_6
# 330 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 331 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_7
# 332 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 333 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek
	return


WindwardPort_Harbor_Eventscript_HideAndSeekRejected::
# 342 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 343 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_HideAndSeekRejected_Text_0
# 344 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 345 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 346 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 347 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_StartHideAndSeek::
# 352 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_0
# 354 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 355 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartHideAndSeek_Text_0
# 357 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 358 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 1
# 359 "data/maps/WindwardPort_Harbor/scripts.pory"
	getobjectfacingdirection GHOSTBOY, VAR_0x8002
# 360 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8002, DIR_WEST
	goto_if_eq WindwardPort_Harbor_Eventscript_StartHideAndSeek_2
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_2
WindwardPort_Harbor_Eventscript_StartHideAndSeek_1:
# 366 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 367 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 17, 29
# 368 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 17, 29
# 369 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 370 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 371 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectnewmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, faceright
# 373 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartHideAndSeek_2:
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_1
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek_1


WindwardPort_Harbor_Eventscript_FoundGhostBoy1::
# 378 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 379 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emoteexclamation
# 380 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_0
# 383 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 384 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 2
# 385 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_1
# 386 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 387 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 388 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 389 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 390 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 391 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 392 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 393 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 394 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 395 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 396 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundGhostBoy1_2
# 403 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_2
# 406 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_FoundGhostBoy1_1:
# 408 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 409 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 410 "data/maps/WindwardPort_Harbor/scripts.pory"
	special SetCB2LoadMap
# 411 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_2:
# 397 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_1
# 400 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_FoundGhostBoy1_1


WindwardPort_Harbor_Eventscript_StartTreasureHunt2::
# 416 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_0, MSGBOX_YESNO
# 418 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_StartTreasureHunt2_1
# 428 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 429 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emotemusic
# 430 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 431 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_2
# 436 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 437 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 3
# 438 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 439 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 440 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_1:
# 419 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 420 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_1
# 421 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 422 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 423 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 424 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_TreasureInBarrel::
# 446 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_TreasureInBarrel_1
	return

WindwardPort_Harbor_Eventscript_TreasureInBarrel_1:
# 448 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 449 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 450 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 451 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_TreasureInBarrel_Text_0
# 453 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 454 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 4
# 455 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_TreasureHint::
# 461 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_TreasureHint_Text_0
# 463 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 464 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_FoundTreasure::
# 469 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 470 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundTreasure_2
# 477 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_2
# 478 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_3
WindwardPort_Harbor_Eventscript_FoundTreasure_1:
# 481 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_4
# 482 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 483 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CARBOS
# 485 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 486 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_5
# 488 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 489 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 490 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 491 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 492 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 493 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 494 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 495 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 496 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 497 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 498 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 499 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundTreasure_6
# 505 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_7
# 507 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_FoundTreasure_5:
# 509 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 510 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_2
# 511 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 512 "data/maps/WindwardPort_Harbor/scripts.pory"
	special SetCB2LoadMap
# 513 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_FoundTreasure_2:
# 471 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_0
# 472 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 473 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_1
	goto WindwardPort_Harbor_Eventscript_FoundTreasure_1

WindwardPort_Harbor_Eventscript_FoundTreasure_6:
# 500 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_6
# 502 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_FoundTreasure_5


WindwardPort_Harbor_Eventscript_StartQuiz3::
# 518 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuiz3_Text_0, MSGBOX_YESNO
# 520 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_StartQuiz3_2
# 531 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 532 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_1
# 533 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 534 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuiz3_Text_2
WindwardPort_Harbor_Eventscript_StartQuiz3_1:
# 537 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 538 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 539 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 540 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartQuiz3_2:
# 521 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 522 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 5
# 523 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_0
# 524 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 525 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuiz3_Text_1
	goto WindwardPort_Harbor_Eventscript_StartQuiz3_1


WindwardPort_Harbor_Eventscript_QuizQuestions::
# 545 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_0
# 548 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_1, 0
# 549 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_2, 1
# 550 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_3, 2
# 551 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 552 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_2
WindwardPort_Harbor_Eventscript_QuizQuestions_1:
# 557 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 558 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 559 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_4
# 560 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_5, 0
# 561 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_6, 1
# 562 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_7, 2
# 563 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 564 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_5
WindwardPort_Harbor_Eventscript_QuizQuestions_4:
# 569 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 570 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 571 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_8
# 572 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_9, 0
# 573 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_10, 1
# 574 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_11, 2
# 575 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_12, 3
# 576 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 577 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_8
WindwardPort_Harbor_Eventscript_QuizQuestions_7:
# 582 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 583 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_13
# 585 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_14, 0
# 586 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_15, 1
# 587 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_16, 2
# 588 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 589 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_11
WindwardPort_Harbor_Eventscript_QuizQuestions_10:
# 594 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 595 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 596 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_17
# 598 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_18, 0
# 599 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_19, 1
# 600 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_20, 2
# 601 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_21, 3
# 602 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_14
# 602 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_14
WindwardPort_Harbor_Eventscript_QuizQuestions_13:
# 607 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 608 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 609 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_22
# 611 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_19
WindwardPort_Harbor_Eventscript_QuizQuestions_18:
# 618 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_22
# 618 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_22
WindwardPort_Harbor_Eventscript_QuizQuestions_21:
# 627 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_27
# 627 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_27
WindwardPort_Harbor_Eventscript_QuizQuestions_26:
# 637 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 5
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_31
	return

WindwardPort_Harbor_Eventscript_QuizQuestions_2:
# 553 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 554 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 555 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_1

WindwardPort_Harbor_Eventscript_QuizQuestions_5:
# 565 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 566 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 567 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_4

WindwardPort_Harbor_Eventscript_QuizQuestions_8:
# 578 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 579 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 580 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_7

WindwardPort_Harbor_Eventscript_QuizQuestions_11:
# 590 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 591 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 592 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_10

WindwardPort_Harbor_Eventscript_QuizQuestions_14:
# 603 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 604 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 605 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_13

WindwardPort_Harbor_Eventscript_QuizQuestions_19:
# 612 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_23
# 614 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 615 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 616 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_18

WindwardPort_Harbor_Eventscript_QuizQuestions_22:
# 619 "data/maps/WindwardPort_Harbor/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_F
# 620 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_24
# 622 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 623 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 624 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 625 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_21

WindwardPort_Harbor_Eventscript_QuizQuestions_27:
# 628 "data/maps/WindwardPort_Harbor/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_F
# 629 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_25
# 631 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 632 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 633 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 634 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_ABILITY_CHANGER, 1
# 635 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_26

WindwardPort_Harbor_Eventscript_QuizQuestions_31:
# 638 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_26
# 640 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 641 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 642 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 643 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_ABILITY_CHANGER, 1
# 644 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 645 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	return


WindwardPort_Harbor_Eventscript_QuizFinished::
# 650 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 651 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_0
# 653 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 654 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizFinished_2
# 659 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_2
WindwardPort_Harbor_Eventscript_QuizFinished_1:
# 662 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 663 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emotemusic
# 664 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 665 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_3
# 667 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 668 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 669 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 670 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 671 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 672 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 673 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 674 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 675 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 676 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 677 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 678 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizFinished_6
# 684 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_5
# 686 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_QuizFinished_5:
# 688 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 689 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_3
# 690 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 6
# 691 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 692 "data/maps/WindwardPort_Harbor/scripts.pory"
	special SetCB2LoadMap
# 693 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_QuizFinished_2:
# 655 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_1
	goto WindwardPort_Harbor_Eventscript_QuizFinished_1

WindwardPort_Harbor_Eventscript_QuizFinished_6:
# 679 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_4
# 681 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_QuizFinished_5


WindwardPort_Harbor_Eventscript_ShipSchedule::
# 698 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_ShipSchedule_Text_0
# 700 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 701 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


# 149 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_0:
# 149 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_left
# 149 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_right
	step_end

# 151 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_1:
# 151 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_down
# 151 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_left
	step_end

# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_2:
# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_left
# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_visible
	step_end

# 161 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_3:
# 161 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_right
# 161 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_invisible
	step_end

# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_4:
# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_up
# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_invisible
	step_end

# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_0:
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_music
	step_end

# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_1:
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
	step_end

# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_2:
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
	step_end

# 523 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_0:
# 523 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_happy
	step_end

# 532 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_1:
# 532 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_sad
	step_end

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0:
# 57 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Anderson$"

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_1:
# 60 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "This ship is departing for Coralport.\p"
	.string "It will arrive at the destination in\n"
	.string "approximately {COLOR RED}3 hours{COLOR 2}.\p"
	.string "It costs {COLOR GREEN}¥100 {COLOR 2}per ticket. Would you like\n"
	.string "to board the ship?$"

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_2:
# 71 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "This way, please.$"

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_3:
# 83 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "money for 3 tickets.$"

WindwardPort_Harbor_Eventscript_VeteranF_Text_0:
# 100 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Jura$"

WindwardPort_Harbor_Eventscript_VeteranF_Text_1:
# 101 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Windward Port is in the center of the\n"
	.string "region so you would think it's the\l"
	.string "biggest.\p"
	.string "In fact, the biggest port is the one\n"
	.string "next to Faeruma City, my hometown.\p"
	.string "Faeruma Pharmacy factory produces\n"
	.string "most of the region's medicine supply\l"
	.string "and that's where Faeruma Port comes in.$"

WindwardPort_Harbor_Eventscript_Worker_Text_0:
# 130 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Earu$"

WindwardPort_Harbor_Eventscript_Worker_Text_1:
# 131 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'm so glad my shift is in the daytime.\p"
	.string "My co-workers said they kept hearing a\n"
	.string "weeping sound at night and honestly, I\l"
	.string "don't want to find out where that sound\l"
	.string "comes from.$"

WindwardPort_Harbor_Eventscript_Sign_Text_0:
# 140 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Please stay clear of the entrance.$"

WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Text_0:
# 153 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}We're in Windward Port at last.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Let's visit my personal lab to pick up\n"
	.string "our package.\p"
	.string "It's the house with the tall red roof at\n"
	.string "the south of the city.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Sure.$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_0:
# 190 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The wind is getting chilly.$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_1:
# 202 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leave the harbor and ignore the kid?$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_2:
# 206 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The wind is getting stronger and\n"
	.string "chillier.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0:
# 244 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Yamaki?$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_1:
# 245 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leaving a kid alone at night while he's\n"
	.string "waiting for you?\p"
	.string "Do you know what people like you are\n"
	.string "called?\p"
	.string "Yes, I'm talking to {COLOR RED}YOU{COLOR 2}. Not the\n"
	.string "characters {COLOR RED}YOU{COLOR 2}'re controlling.\p"
	.string "They aren't scumbags like {COLOR RED}YOU{COLOR 2}.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_2:
# 253 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Die.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_3:
# 256 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The air is getting colder and colder.\p"
	.string "It's hard to open your eyes.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_4:
# 260 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leave. And don't your dare come back.$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0:
# 277 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Yamaki$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_0:
# 304 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "-sob- -sob-$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_1:
# 308 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}What's wrong, little boy?\n"
	.string "Why are you here alone?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_2:
# 310 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}No one wants to play with me...\p"
	.string "Will you play with me, mister?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_3:
# 313 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Sure! Just for a little while, though.\p"
	.string "After that you gotta go home, alright?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_4:
# 323 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Why are you crying? Are you lost?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_5:
# 325 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}No one wants to play with me...\p"
	.string "Will you play with me, miss?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_6:
# 328 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I don't see why not.\p"
	.string "But promise me you'll go home after\n"
	.string "we're done playing?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_7:
# 331 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Promise!$"

WindwardPort_Harbor_Eventscript_HideAndSeekRejected_Text_0:
# 343 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Why does no one want to play with me?$"

WindwardPort_Harbor_Eventscript_StartHideAndSeek_Text_0:
# 355 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright! Let's play a round of\n"
	.string "hide-and-seek!\p"
	.string "I'll go hide! Don't worry, I won't leave\n"
	.string "this harbor!$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_0:
# 380 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh! You found me!\p"
	.string "Hehehe, that makes me really happy. I\n"
	.string "thought you'd leave me alone.\p"
	.string "I'll go home now. Let's play again some\n"
	.string "times!$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_1:
# 397 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}(Did he just vanish??)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}(Maybe I'm getting tired. It's pretty\n"
	.string "late-)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}(Wait! Since when the sun's out??)$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_2:
# 403 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}(Did my eyes play tricks on me? He just\n"
	.string "vanished.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}(Perhaps I do need to go rest. It's late\n"
	.string "after all-)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}(Wait, it's already morning?)$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_0:
# 416 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Hello! We meet again!\p"
	.string "Will you play with me today?$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_1:
# 420 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Understood. I'll play by myself then...$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_2:
# 431 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Awesome!\p"
	.string "So... Let's play treasure hunt today!\p"
	.string "I've hidden a Revive within one of the\n"
	.string "cargo boxes in this harbor.\p"
	.string "If you can find it and bring it back to\n"
	.string "me, I'll give you a gift!\p"
	.string "Now off you go! I'll be waiting for you\n"
	.string "here until you find it.$"

WindwardPort_Harbor_Eventscript_TreasureInBarrel_Text_0:
# 451 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "There's something inside the barrel!\p"
	.string "It's a Revive. It must be the hidden\n"
	.string "treasure.$"

WindwardPort_Harbor_Eventscript_TreasureHint_Text_0:
# 461 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You still haven't found it? Let me give\n"
	.string "you a hint then!\p"
	.string "It's inside a wooden barrel!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_0:
# 471 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}It's this one, right?$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_1:
# 473 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Woah! You found it!\p"
	.string "You're really good at games, mister!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_2:
# 477 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Is this the right one?$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_3:
# 478 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Woah! You found it!\p"
	.string "You're really good at games, miss!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_4:
# 481 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'll give you a gift as promised!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_5:
# 486 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I have to go now.\p"
	.string "I had fun today! Let's play again next\n"
	.string "time!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_6:
# 500 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}(I swear he vanished into thin air\n"
	.string "again.)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(What a weird boy.)$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_7:
# 505 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}(He just vanished again.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(That's... quite weird.)$"

WindwardPort_Harbor_Eventscript_StartQuiz3_Text_0:
# 518 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh! We meet again!\p"
	.string "How about another game tonight?$"

WindwardPort_Harbor_Eventscript_StartQuiz3_Text_1:
# 525 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Awesome! It's a simple quiz of 5\n"
	.string "questions this time!\n"
	.string "I'll give you a small prize depending on\l"
	.string "how many questions you answer\l"
	.string "correctly!\p"
	.string "You may want to take a look around the\n"
	.string "harbor before attempting.\p"
	.string "When you're ready for the quiz, talk to\n"
	.string "me again!$"

WindwardPort_Harbor_Eventscript_StartQuiz3_Text_2:
# 534 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh, I guess you're busy then...$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_0:
# 545 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright! Here we go!\p"
	.string "Question 1: Not counting you, your\n"
	.string "friends, people in the ships and the\l"
	.string "Pokémon,\p"
	.string "how many people are there when it's\n"
	.string "daytime in this harbor?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_1:
# 548 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "5$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_2:
# 549 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "4$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_3:
# 550 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "3$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_4:
# 559 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Question 2: How long does it take to\n"
	.string "travel from Windward Port to Coralport\l"
	.string "by ship?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_5:
# 560 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "3 hours$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_6:
# 561 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "4 hours$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_7:
# 562 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "5 hours$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_8:
# 571 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Question 3: How many white barrels are\n"
	.string "there in this harbor?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_9:
# 572 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "6$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_10:
# 573 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "7$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_11:
# 574 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "8$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_12:
# 575 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "9$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_13:
# 583 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Those questions were quite hard, right?\n"
	.string "I'll give you an easier one this time.\p"
	.string "Question 4: What type is Wynaut?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_14:
# 585 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Water$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_15:
# 586 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Psychic$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_16:
# 587 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Normal$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_17:
# 596 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright, last question!\p"
	.string "Question 5: Which one of these\n"
	.string "abilities can a Gimmighoul normally\l"
	.string "have?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_18:
# 598 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Run Away$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_19:
# 599 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Rattled$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_20:
# 600 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Cursed Body$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_21:
# 601 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Good As Gold$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_22:
# 609 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Whew, that was all of the questions!\p"
	.string "Let's see how many correct answers you\n"
	.string "got{PAUSE 30}.{PAUSE 30}.{PAUSE 30}.$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_23:
# 612 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oof... Too bad, you got none...\p"
	.string "I'll still give you a small prize for\n"
	.string "spending time with me, though!$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_24:
# 620 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You got {COLOR BLUE}{STR_VAR_1}{COLOR 2} correct\n"
	.string "answer(s)!\p"
	.string "Here's the prize for that!$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_25:
# 629 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You got {COLOR BLUE}{STR_VAR_1}{COLOR 2} correct\n"
	.string "answers!\p"
	.string "Here's the prize for that!$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_26:
# 638 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You got everything right! That's\n"
	.string "awesome!\p"
	.string "Here, you can have all of these!$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_0:
# 651 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "It was fun today, too!\p"
	.string "Oh right, I haven't learned your name.\n"
	.string "If you don't mind, can I know it?$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_1:
# 655 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}I'm Akihiko!\p"
	.string "Let's play again next time, Yamaki.$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_2:
# 659 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}You can call me Mitsuru.\p"
	.string "We should play again next time, Yamaki.$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_3:
# 665 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Of course!\p"
	.string "Gotta go now, bye-bye!$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_4:
# 679 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(He vanished again...)\p"
	.string "(Wait a minute... Since when did I learn\n"
	.string "that his name was Yamaki?)$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_5:
# 684 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(He vanished...)\p"
	.string "(Wait... How did I know his name was\n"
	.string "Yamaki? He never told me, didn't he?)$"

WindwardPort_Harbor_Eventscript_ShipSchedule_Text_0:
# 698 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{CLEAR_TO 30}Windward Port -> Coralport\n"
	.string "{CLEAR_TO 30}Boarding time: 6PM - 5:59AM.$"

WindwardPort_Harbor_GhostBoy_Defeated::
# 269 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "...$"
