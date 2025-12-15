# 1 "data/scripts/debug.pory"

# 2 "data/scripts/debug.pory"
Debug_MessageEnd:
# 3 "data/scripts/debug.pory"
	waitmessage
# 4 "data/scripts/debug.pory"
	waitbuttonpress
# 5 "data/scripts/debug.pory"
	releaseall
# 6 "data/scripts/debug.pory"
	end
# 7 "data/scripts/debug.pory"

# 8 "data/scripts/debug.pory"
Debug_ShowFieldMessageStringVar4::
# 9 "data/scripts/debug.pory"
	special ShowFieldMessageStringVar4
# 10 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 11 "data/scripts/debug.pory"

# 12 "data/scripts/debug.pory"
Debug_CheatStart::
# 13 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 14 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_MINING_KIT
# 15 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 16 "data/scripts/debug.pory"
	setflag FLAG_ADVENTURE_STARTED
# 17 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 18 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 19 "data/scripts/debug.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 20 "data/scripts/debug.pory"
	setvar VAR_CHAPTER_7_STATE, 3
# 21 "data/scripts/debug.pory"
	givemon SPECIES_TREECKO, 20, ITEM_NONE
# 22 "data/scripts/debug.pory"
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
# 23 "data/scripts/debug.pory"
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
# 24 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 25 "data/scripts/debug.pory"
	special SetUnlockedPokedexFlags
# 26 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 27 "data/scripts/debug.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
# 28 "data/scripts/debug.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 29 "data/scripts/debug.pory"
	special EnableNationalPokedex
# 30 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 31 "data/scripts/debug.pory"
	setflag FLAG_SYS_B_DASH
# 32 "data/scripts/debug.pory"
	setvar VAR_STORY_QUESTS_STATE, 4 @ 4: Received Running Shoes
# 33 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
# 34 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 35 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 36 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
# 37 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_BIKE
# 38 "data/scripts/debug.pory"
	additem ITEM_ACRO_BIKE
# 39 "data/scripts/debug.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 40 "data/scripts/debug.pory"
	setvar VAR_ROUTE116_STATE, 2
# 41 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 42 "data/scripts/debug.pory"
	setflag FLAG_BADGE01_GET
# 43 "data/scripts/debug.pory"
	setflag FLAG_BADGE02_GET
# 44 "data/scripts/debug.pory"
	setflag FLAG_BADGE03_GET
# 45 "data/scripts/debug.pory"
	setflag FLAG_BADGE04_GET
# 46 "data/scripts/debug.pory"
	setflag FLAG_BADGE05_GET
# 47 "data/scripts/debug.pory"
	setflag FLAG_BADGE06_GET
# 48 "data/scripts/debug.pory"
	setflag FLAG_BADGE07_GET
# 49 "data/scripts/debug.pory"
	setflag FLAG_BADGE08_GET
# 50 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SUNSHINE_TOWN
# 51 "data/scripts/debug.pory"
	setflag FLAG_VISITED_CORALPORT
# 52 "data/scripts/debug.pory"
	setflag FLAG_VISITED_WINDWARD_PORT
# 53 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 54 "data/scripts/debug.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 55 "data/scripts/debug.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 56 "data/scripts/debug.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 57 "data/scripts/debug.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 58 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 59 "data/scripts/debug.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 60 "data/scripts/debug.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 61 "data/scripts/debug.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 62 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 63 "data/scripts/debug.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 64 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 65 "data/scripts/debug.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 66 "data/scripts/debug.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 67 "data/scripts/debug.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 68 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 69 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 70 "data/scripts/debug.pory"
	release
# 71 "data/scripts/debug.pory"
	end
# 72 "data/scripts/debug.pory"

# 73 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage::
# 74 "data/scripts/debug.pory"
	message Debug_FlagsNotSetOverworldConfigMessage_Text
# 75 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 76 "data/scripts/debug.pory"

# 77 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage_Text:
# 78 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 79 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 80 "data/scripts/debug.pory"
	.string "'include/config/overworld.h'!$"
# 81 "data/scripts/debug.pory"

# 82 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage::
# 83 "data/scripts/debug.pory"
	message Debug_FlagsNotSetBattleConfigMessage_Text
# 84 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 85 "data/scripts/debug.pory"

# 86 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage_Text:
# 87 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 88 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 89 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 90 "data/scripts/debug.pory"

# 91 "data/scripts/debug.pory"
Debug_VarsNotSetBattleConfigMessage::
# 92 "data/scripts/debug.pory"
	message Debug_VarsNotSetBattleConfigMessage_Text
# 93 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 94 "data/scripts/debug.pory"

# 95 "data/scripts/debug.pory"
Debug_VarsNotSetBattleConfigMessage_Text:
# 96 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 97 "data/scripts/debug.pory"
	.string "Please define a usable var in:\l"
# 98 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 99 "data/scripts/debug.pory"

# 100 "data/scripts/debug.pory"
Debug_BoxFilledMessage::
# 101 "data/scripts/debug.pory"
	message Debug_BoxFilledMessage_Text
# 102 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 103 "data/scripts/debug.pory"

# 104 "data/scripts/debug.pory"
Debug_BoxFilledMessage_Text:
# 105 "data/scripts/debug.pory"
	.string "Storage boxes filled!$"
# 106 "data/scripts/debug.pory"

# 107 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs::
# 108 "data/scripts/debug.pory"
	lockall
# 109 "data/scripts/debug.pory"
	getpartysize
# 110 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 111 "data/scripts/debug.pory"
	special ChoosePartyMon
# 112 "data/scripts/debug.pory"
	waitstate
# 113 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 114 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 115 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveEVs, MSGBOX_DEFAULT
# 116 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 117 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveEVs, MSGBOX_DEFAULT
# 118 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs_End::
# 119 "data/scripts/debug.pory"
	releaseall
# 120 "data/scripts/debug.pory"
	end
# 121 "data/scripts/debug.pory"

# 122 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveEVs:
# 123 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"
# 124 "data/scripts/debug.pory"

# 125 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveEVs:
# 126 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"
# 127 "data/scripts/debug.pory"

# 128 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs::
# 129 "data/scripts/debug.pory"
	lockall
# 130 "data/scripts/debug.pory"
	getpartysize
# 131 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 132 "data/scripts/debug.pory"
	special ChoosePartyMon
# 133 "data/scripts/debug.pory"
	waitstate
# 134 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 135 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 136 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveIVs, MSGBOX_DEFAULT
# 137 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 138 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveIVs, MSGBOX_DEFAULT
# 139 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs_End::
# 140 "data/scripts/debug.pory"
	releaseall
# 141 "data/scripts/debug.pory"
	end
# 142 "data/scripts/debug.pory"

# 143 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveIVs:
# 144 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"
# 145 "data/scripts/debug.pory"

# 146 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveIVs:
# 147 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"
# 148 "data/scripts/debug.pory"

# 149 "data/scripts/debug.pory"

# 150 "data/scripts/debug.pory"
Debug_CheckSaveBlock::
# 151 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 152 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
# 153 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 154 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
# 155 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 156 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock3Size, MSGBOX_DEFAULT
# 157 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 158 "data/scripts/debug.pory"
	msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
# 159 "data/scripts/debug.pory"
	release
# 160 "data/scripts/debug.pory"
	end
# 161 "data/scripts/debug.pory"

# 162 "data/scripts/debug.pory"
Debug_SaveBlock1Size::
# 163 "data/scripts/debug.pory"
	.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 164 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 165 "data/scripts/debug.pory"

# 166 "data/scripts/debug.pory"
Debug_SaveBlock2Size::
# 167 "data/scripts/debug.pory"
	.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 168 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 169 "data/scripts/debug.pory"

# 170 "data/scripts/debug.pory"
Debug_SaveBlock3Size::
# 171 "data/scripts/debug.pory"
	.string "SaveBlock3 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 172 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 173 "data/scripts/debug.pory"

# 174 "data/scripts/debug.pory"
Debug_PokemonStorageSize::
# 175 "data/scripts/debug.pory"
	.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 176 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 177 "data/scripts/debug.pory"

# 178 "data/scripts/debug.pory"
Debug_CheckROMSpace::
# 179 "data/scripts/debug.pory"
	callnative CheckROMSize
# 180 "data/scripts/debug.pory"
	msgbox Debug_ROMSize, MSGBOX_DEFAULT
# 181 "data/scripts/debug.pory"
	release
# 182 "data/scripts/debug.pory"
	end
# 183 "data/scripts/debug.pory"

# 184 "data/scripts/debug.pory"
Debug_ROMSize::
# 185 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
# 186 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_2}MB.$"
# 187 "data/scripts/debug.pory"

# 188 "data/scripts/debug.pory"
Debug_HatchAnEgg::
# 189 "data/scripts/debug.pory"
	lockall
# 190 "data/scripts/debug.pory"
	getpartysize
# 191 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 192 "data/scripts/debug.pory"
	special ChoosePartyMon
# 193 "data/scripts/debug.pory"
	waitstate
# 194 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 195 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 196 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 197 "data/scripts/debug.pory"
	special EggHatch
# 198 "data/scripts/debug.pory"
	waitstate
# 199 "data/scripts/debug.pory"
Debug_HatchAnEgg_End::
# 200 "data/scripts/debug.pory"
	releaseall
# 201 "data/scripts/debug.pory"
	end
# 202 "data/scripts/debug.pory"

# 203 "data/scripts/debug.pory"
Debug_NoPokemon::
# 204 "data/scripts/debug.pory"
	msgbox DebugScript_Text_EmptyParty, MSGBOX_DEFAULT
# 205 "data/scripts/debug.pory"
	releaseall
# 206 "data/scripts/debug.pory"
	end
# 207 "data/scripts/debug.pory"

# 208 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_CantForceHatch::
# 209 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
# 210 "data/scripts/debug.pory"
	releaseall
# 211 "data/scripts/debug.pory"
	end
# 212 "data/scripts/debug.pory"

# 213 "data/scripts/debug.pory"
DebugScript_Text_EmptyParty::
# 214 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"
# 215 "data/scripts/debug.pory"

# 216 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_Text_NotAnEgg::
# 217 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"
# 218 "data/scripts/debug.pory"

# 219 "data/scripts/debug.pory"
DebugScript_ZeroDaycareMons::
# 220 "data/scripts/debug.pory"
	msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
# 221 "data/scripts/debug.pory"
	releaseall
# 222 "data/scripts/debug.pory"
	end
# 223 "data/scripts/debug.pory"

# 224 "data/scripts/debug.pory"
DebugScript_OneDaycareMons::
# 225 "data/scripts/debug.pory"
	msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
# 226 "data/scripts/debug.pory"
	releaseall
# 227 "data/scripts/debug.pory"
	end
# 228 "data/scripts/debug.pory"

# 229 "data/scripts/debug.pory"
DebugScript_DaycareMonsNotCompatible::
# 230 "data/scripts/debug.pory"
	msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
# 231 "data/scripts/debug.pory"
	releaseall
# 232 "data/scripts/debug.pory"
	end
# 233 "data/scripts/debug.pory"

# 234 "data/scripts/debug.pory"
DebugText_DaycareNoPokemon:
# 235 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"
# 236 "data/scripts/debug.pory"

# 237 "data/scripts/debug.pory"
DebugText_DaycareOnePokemon:
# 238 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"
# 239 "data/scripts/debug.pory"

# 240 "data/scripts/debug.pory"
DebugText_DaycarePokemonNotCompatible:
# 241 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\nhave babies together!$"
# 242 "data/scripts/debug.pory"

# 243 "data/scripts/debug.pory"
Debug_ShowExpansionVersion::
# 244 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 245 "data/scripts/debug.pory"
	msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
# 246 "data/scripts/debug.pory"
	release
# 247 "data/scripts/debug.pory"
	end
# 248 "data/scripts/debug.pory"

# 249 "data/scripts/debug.pory"
Debug_ExpansionVersion:
# 250 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"
# 251 "data/scripts/debug.pory"

# 252 "data/scripts/debug.pory"
Debug_Follower_NPC_Not_Enabled::
# 253 "data/scripts/debug.pory"
	msgbox Debug_Enable_To_Use_Follower_NPCs, MSGBOX_DEFAULT
# 254 "data/scripts/debug.pory"
	release
# 255 "data/scripts/debug.pory"
	end
# 256 "data/scripts/debug.pory"

# 257 "data/scripts/debug.pory"
Debug_Enable_To_Use_Follower_NPCs:
# 258 "data/scripts/debug.pory"
	.string "Feature unavailable.\nSet FNPC_ENABLE_NPC_FOLLOWERS to\lTRUE in 'include/config/follower_npc.h'.$"
# 259 "data/scripts/debug.pory"

# 260 "data/scripts/debug.pory"
Debug_Follower_NPC_Event_Script::
# 261 "data/scripts/debug.pory"
	lock
# 262 "data/scripts/debug.pory"
	facefollowernpc
# 263 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Test_Message, MSGBOX_DEFAULT
# 264 "data/scripts/debug.pory"
	releaseall
# 265 "data/scripts/debug.pory"
	end
# 266 "data/scripts/debug.pory"

# 267 "data/scripts/debug.pory"
Debug_Follower_NPC_Test_Message:
# 268 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"
# 269 "data/scripts/debug.pory"

# 270 "data/scripts/debug.pory"
Debug_EventScript_Steven_Multi::
# 271 "data/scripts/debug.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 272 "data/scripts/debug.pory"
	release
# 273 "data/scripts/debug.pory"
	end
# 274 "data/scripts/debug.pory"

# 275 "data/scripts/debug.pory"
Debug_BerryPestsDisabled::
# 276 "data/scripts/debug.pory"
	msgbox DebugText_BerryPestsDisabled, MSGBOX_DEFAULT
# 277 "data/scripts/debug.pory"
	release
# 278 "data/scripts/debug.pory"
	end
# 279 "data/scripts/debug.pory"

# 280 "data/scripts/debug.pory"
DebugText_BerryPestsDisabled:
# 281 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
# 282 "data/scripts/debug.pory"
	.string "Unable to force pests onto berry trees.$"
# 283 "data/scripts/debug.pory"

# 284 "data/scripts/debug.pory"
Debug_BerryWeedsDisabled::
# 285 "data/scripts/debug.pory"
	msgbox DebugText_BerryWeedsDisabled, MSGBOX_DEFAULT
# 286 "data/scripts/debug.pory"
	release
# 287 "data/scripts/debug.pory"
	end
# 288 "data/scripts/debug.pory"

# 289 "data/scripts/debug.pory"
DebugText_BerryWeedsDisabled:
# 290 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
# 291 "data/scripts/debug.pory"
	.string "Unable to force weeds onto berry trees.$"
# 292 "data/scripts/debug.pory"

# 293 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1::
# 294 "data/scripts/debug.pory"
	lockall
# 295 "data/scripts/debug.pory"
	getpartysize
# 296 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 297 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 298 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 299 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 300 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 301 "data/scripts/debug.pory"
	switch VAR_RESULT
# 302 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single
# 303 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party
# 304 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Close
# 305 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Close:
# 306 "data/scripts/debug.pory"
	releaseall
# 307 "data/scripts/debug.pory"
	end
# 308 "data/scripts/debug.pory"

# 309 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single:
# 310 "data/scripts/debug.pory"
	special ChoosePartyMon
# 311 "data/scripts/debug.pory"
	waitstate
# 312 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 313 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 314 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 315 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 316 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 317 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 318 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 319 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 320 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 321 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 322 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 323 "data/scripts/debug.pory"
	switch VAR_RESULT
# 324 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_Poison
# 325 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_Paralysis
# 326 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_Sleep
# 327 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_Burn
# 328 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_Freeze
# 329 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_Frostbite
# 330 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 331 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 332 "data/scripts/debug.pory"
	releaseall
# 333 "data/scripts/debug.pory"
	end
# 334 "data/scripts/debug.pory"

# 335 "data/scripts/debug.pory"
Debug_EventScript_KoPokemon::
# 336 "data/scripts/debug.pory"
	special ChoosePartyMon
# 337 "data/scripts/debug.pory"
	waitstate
# 338 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 339 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 340 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 341 "data/scripts/debug.pory"
	setko VAR_0x8004
# 342 "data/scripts/debug.pory"
	releaseall
# 343 "data/scripts/debug.pory"
	end
# 344 "data/scripts/debug.pory"

# 345 "data/scripts/debug.pory"
Debug_EventScript_SetHiddenNature::
# 346 "data/scripts/debug.pory"
	special ChoosePartyMon
# 347 "data/scripts/debug.pory"
	waitstate
# 348 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 349 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 350 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 351 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Hardy, 0
# 352 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Lonely, 1
# 353 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Brave, 2
# 354 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Adamant, 3
# 355 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Naughty, 4
# 356 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Bold, 5
# 357 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Docile, 6
# 358 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Relaxed, 7
# 359 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Impish, 8
# 360 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Lax, 9
# 361 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Timid, 10
# 362 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Hasty, 11
# 363 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Serious, 12
# 364 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Jolly, 13
# 365 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Naive, 14
# 366 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Modest, 15
# 367 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Mild, 16
# 368 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Quiet, 17
# 369 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Bashful, 18
# 370 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Rash, 19
# 371 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Calm, 20
# 372 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Gentle, 21
# 373 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Sassy, 22
# 374 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Careful, 23
# 375 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Quirky, 24
# 376 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 377 "data/scripts/debug.pory"
	switch VAR_RESULT
# 378 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 379 "data/scripts/debug.pory"
	special SetHiddenNature
# 380 "data/scripts/debug.pory"
	releaseall
# 381 "data/scripts/debug.pory"
	end
# 382 "data/scripts/debug.pory"

# 383 "data/scripts/debug.pory"
Debug_EventScript_SetAbility::
# 384 "data/scripts/debug.pory"
	special ChoosePartyMon
# 385 "data/scripts/debug.pory"
	waitstate
# 386 "data/scripts/debug.pory"
	callnative DebugNative_GetAbilityNames
# 387 "data/scripts/debug.pory"
	dynmultipush gStringVar1, 0
# 388 "data/scripts/debug.pory"
	dynmultipush gStringVar2, 1
# 389 "data/scripts/debug.pory"
	dynmultipush gStringVar3, 2
# 390 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 391 "data/scripts/debug.pory"
	switch VAR_RESULT
# 392 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetAbilityClose
# 393 "data/scripts/debug.pory"
	special SetAbility
# 394 "data/scripts/debug.pory"
Debug_EventScript_SetAbilityClose:
# 395 "data/scripts/debug.pory"
	releaseall
# 396 "data/scripts/debug.pory"
	end
# 397 "data/scripts/debug.pory"

# 398 "data/scripts/debug.pory"
Debug_EventScript_SetFriendship::
# 399 "data/scripts/debug.pory"
	special ChoosePartyMon
# 400 "data/scripts/debug.pory"
	waitstate
# 401 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetFriendship
# 402 "data/scripts/debug.pory"
	releaseall
# 403 "data/scripts/debug.pory"
	end
# 404 "data/scripts/debug.pory"

# 405 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Poison:
# 406 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 407 "data/scripts/debug.pory"
	releaseall
# 408 "data/scripts/debug.pory"
	end
# 409 "data/scripts/debug.pory"

# 410 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Paralysis:
# 411 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 412 "data/scripts/debug.pory"
	releaseall
# 413 "data/scripts/debug.pory"
	end
# 414 "data/scripts/debug.pory"

# 415 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Sleep:
# 416 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 417 "data/scripts/debug.pory"
	releaseall
# 418 "data/scripts/debug.pory"
	end
# 419 "data/scripts/debug.pory"

# 420 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Burn:
# 421 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 422 "data/scripts/debug.pory"
	releaseall
# 423 "data/scripts/debug.pory"
	end
# 424 "data/scripts/debug.pory"

# 425 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Freeze:
# 426 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 427 "data/scripts/debug.pory"
	releaseall
# 428 "data/scripts/debug.pory"
	end
# 429 "data/scripts/debug.pory"

# 430 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Frostbite:
# 431 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 432 "data/scripts/debug.pory"
	releaseall
# 433 "data/scripts/debug.pory"
	end
# 434 "data/scripts/debug.pory"

# 435 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party:
# 436 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 437 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 438 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 439 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 440 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 441 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 442 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 443 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 444 "data/scripts/debug.pory"
	switch VAR_RESULT
# 445 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_Poison
# 446 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_Paralysis
# 447 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_Sleep
# 448 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_Burn
# 449 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_Freeze
# 450 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_Frostbite
# 451 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 452 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 453 "data/scripts/debug.pory"
	releaseall
# 454 "data/scripts/debug.pory"
	end
# 455 "data/scripts/debug.pory"

# 456 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Poison:
# 457 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 458 "data/scripts/debug.pory"
	releaseall
# 459 "data/scripts/debug.pory"
	end
# 460 "data/scripts/debug.pory"

# 461 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Paralysis:
# 462 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 463 "data/scripts/debug.pory"
	releaseall
# 464 "data/scripts/debug.pory"
	end
# 465 "data/scripts/debug.pory"

# 466 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Sleep:
# 467 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 468 "data/scripts/debug.pory"
	releaseall
# 469 "data/scripts/debug.pory"
	end
# 470 "data/scripts/debug.pory"

# 471 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Burn:
# 472 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 473 "data/scripts/debug.pory"
	releaseall
# 474 "data/scripts/debug.pory"
	end
# 475 "data/scripts/debug.pory"

# 476 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Freeze:
# 477 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 478 "data/scripts/debug.pory"
	releaseall
# 479 "data/scripts/debug.pory"
	end
# 480 "data/scripts/debug.pory"

# 481 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Frostbite:
# 482 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 483 "data/scripts/debug.pory"
	releaseall
# 484 "data/scripts/debug.pory"
	end
# 485 "data/scripts/debug.pory"

# 486 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Single:
# 487 "data/scripts/debug.pory"
	.string "Single$"
# 488 "data/scripts/debug.pory"

# 489 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_PartyWide:
# 490 "data/scripts/debug.pory"
	.string "Party-wide$"
# 491 "data/scripts/debug.pory"

# 492 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Close:
# 493 "data/scripts/debug.pory"
	.string "Close$"
# 494 "data/scripts/debug.pory"

# 495 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Poison:
# 496 "data/scripts/debug.pory"
	.string "Poison$"
# 497 "data/scripts/debug.pory"

# 498 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Paralysis:
# 499 "data/scripts/debug.pory"
	.string "Paralysis$"
# 500 "data/scripts/debug.pory"

# 501 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Sleep:
# 502 "data/scripts/debug.pory"
	.string "Sleep$"
# 503 "data/scripts/debug.pory"

# 504 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Burn:
# 505 "data/scripts/debug.pory"
	.string "Burn$"
# 506 "data/scripts/debug.pory"

# 507 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Freeze:
# 508 "data/scripts/debug.pory"
	.string "Freeze$"
# 509 "data/scripts/debug.pory"

# 510 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Frostbite:
# 511 "data/scripts/debug.pory"
	.string "Frostbite$"
# 512 "data/scripts/debug.pory"

# 513 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_KO:
# 514 "data/scripts/debug.pory"
	.string "KO$"
# 515 "data/scripts/debug.pory"

# 516 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Hardy:
# 517 "data/scripts/debug.pory"
	.string "Hardy$"
# 518 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Lonely:
# 519 "data/scripts/debug.pory"
	.string "Lonely$"
# 520 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Brave:
# 521 "data/scripts/debug.pory"
	.string "Brave$"
# 522 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Adamant:
# 523 "data/scripts/debug.pory"
	.string "Adamant$"
# 524 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Naughty:
# 525 "data/scripts/debug.pory"
	.string "Naughty$"
# 526 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Bold:
# 527 "data/scripts/debug.pory"
	.string "Bold$"
# 528 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Docile:
# 529 "data/scripts/debug.pory"
	.string "Docile$"
# 530 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Relaxed:
# 531 "data/scripts/debug.pory"
	.string "Relaxed$"
# 532 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Impish:
# 533 "data/scripts/debug.pory"
	.string "Impish$"
# 534 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Lax:
# 535 "data/scripts/debug.pory"
	.string "Lax$"
# 536 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Timid:
# 537 "data/scripts/debug.pory"
	.string "Timid$"
# 538 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Hasty:
# 539 "data/scripts/debug.pory"
	.string "Hasty$"
# 540 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Serious:
# 541 "data/scripts/debug.pory"
	.string "Serious$"
# 542 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Jolly:
# 543 "data/scripts/debug.pory"
	.string "Jolly$"
# 544 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Naive:
# 545 "data/scripts/debug.pory"
	.string "Naive$"
# 546 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Modest:
# 547 "data/scripts/debug.pory"
	.string "Modest$"
# 548 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Mild:
# 549 "data/scripts/debug.pory"
	.string "Mild$"
# 550 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Quiet:
# 551 "data/scripts/debug.pory"
	.string "Quiet$"
# 552 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Bashful:
# 553 "data/scripts/debug.pory"
	.string "Bashful$"
# 554 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Rash:
# 555 "data/scripts/debug.pory"
	.string "Rash$"
# 556 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Calm:
# 557 "data/scripts/debug.pory"
	.string "Calm$"
# 558 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Gentle:
# 559 "data/scripts/debug.pory"
	.string "Gentle$"
# 560 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Sassy:
# 561 "data/scripts/debug.pory"
	.string "Sassy$"
# 562 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Careful:
# 563 "data/scripts/debug.pory"
	.string "Careful$"
# 564 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Quirky:
# 565 "data/scripts/debug.pory"
	.string "Quirky$"
# 566 "data/scripts/debug.pory"

# 567 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters::
# 568 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 569 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text, MSGBOX_DEFAULT
# 570 "data/scripts/debug.pory"
	release
# 571 "data/scripts/debug.pory"
	end
# 572 "data/scripts/debug.pory"

# 573 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters_Text::
# 574 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
# 575 "data/scripts/debug.pory"
	.string "Fishing Chain: {STR_VAR_2}.$"
# 576 "data/scripts/debug.pory"

# 577 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_1::
# 578 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 579 "data/scripts/debug.pory"
	.string "Angel Adept Blind Bodice Clique\n"
# 580 "data/scripts/debug.pory"
	.string "Coast Dunce Docile Enact Eosin\l"
# 581 "data/scripts/debug.pory"
	.string "Furlong Focal Gnome Gondola Human\l"
# 582 "data/scripts/debug.pory"
	.string "Hoist Inlet Iodine Justin Jocose\l"
# 583 "data/scripts/debug.pory"
	.string "Knoll Koala Linden Loads Milliner\l"
# 584 "data/scripts/debug.pory"
	.string "Modal Number Nodule Onset Oddball\l"
# 585 "data/scripts/debug.pory"
	.string "Pneumo Poncho Quanta Qophs Rhone\l"
# 586 "data/scripts/debug.pory"
	.string "Roman Snout Sodium Tundra Tocsin\l"
# 587 "data/scripts/debug.pory"
	.string "Uncle Udder Vulcan Vocal Whale\l"
# 588 "data/scripts/debug.pory"
	.string "Woman Xmas Xenon Yunnan Young\l"
# 589 "data/scripts/debug.pory"
	.string "Zloty Zodiac.$"
# 590 "data/scripts/debug.pory"

# 591 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_2::
# 592 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 593 "data/scripts/debug.pory"
	.string "Angel angel adept for the nuance loads\n"
# 594 "data/scripts/debug.pory"
	.string "of the arena cocoa and quaalude. Blind\l"
# 595 "data/scripts/debug.pory"
	.string "blind bodice for the submit oboe of the\l"
# 596 "data/scripts/debug.pory"
	.string "club snob and abbot. Clique clique\l"
# 597 "data/scripts/debug.pory"
	.string "coast for the pouch loco of the franc\l"
# 598 "data/scripts/debug.pory"
	.string "assoc and accede. Dunce dunce docile\l"
# 599 "data/scripts/debug.pory"
	.string "for the loudness mastodon of the\l"
# 600 "data/scripts/debug.pory"
	.string "loud statehood and huddle.$"
# 601 "data/scripts/debug.pory"

# 602 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_3::
# 603 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 604 "data/scripts/debug.pory"
	.string "Enact enact eosin for the quench coed\n"
# 605 "data/scripts/debug.pory"
	.string "of the pique canoe and bleep. Furlong\l"
# 606 "data/scripts/debug.pory"
	.string "furlong focal for the genuflect\l"
# 607 "data/scripts/debug.pory"
	.string "profound of the motif aloof and offers.\l"
# 608 "data/scripts/debug.pory"
	.string "Gnome gnome gondola for the impugn\l"
# 609 "data/scripts/debug.pory"
	.string "logos of the unplug analog and smuggle.\l"
# 610 "data/scripts/debug.pory"
	.string "Human human hoist for the buddhist\l"
# 611 "data/scripts/debug.pory"
	.string "alcohol of the riyadh caliph and\l"
# 612 "data/scripts/debug.pory"
	.string "bathhouse.$"
# 613 "data/scripts/debug.pory"

# 614 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_4::
# 615 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 616 "data/scripts/debug.pory"
	.string "Inlet inlet iodine for the quince\n"
# 617 "data/scripts/debug.pory"
	.string "champion of the ennui scampi and shiite.\l"
# 618 "data/scripts/debug.pory"
	.string "Justin justin jocose for the djibouti\l"
# 619 "data/scripts/debug.pory"
	.string "sojourn of the oranj raj and hajjis.\l"
# 620 "data/scripts/debug.pory"
	.string "Knoll knoll koala for the banknote\l"
# 621 "data/scripts/debug.pory"
	.string "lookout of the dybbuk outlook and\l"
# 622 "data/scripts/debug.pory"
	.string "trekked. Linden linden loads for the\l"
# 623 "data/scripts/debug.pory"
	.string "ulna monolog of the consul menthol and\l"
# 624 "data/scripts/debug.pory"
	.string "shallot.$"
# 625 "data/scripts/debug.pory"

# 626 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_5::
# 627 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 628 "data/scripts/debug.pory"
	.string "Milliner milliner modal for the alumna\n"
# 629 "data/scripts/debug.pory"
	.string "solomon of the album custom and summon.\l"
# 630 "data/scripts/debug.pory"
	.string "Number number nodule for the unmade\l"
# 631 "data/scripts/debug.pory"
	.string "economic of the shotgun bison and\l"
# 632 "data/scripts/debug.pory"
	.string "tunnel. Onset onset oddball for the\l"
# 633 "data/scripts/debug.pory"
	.string "abandon podium of the antiquo tempo\l"
# 634 "data/scripts/debug.pory"
	.string "and moonlit. Pneumo pneumo poncho for\l"
# 635 "data/scripts/debug.pory"
	.string "the dauphin opossum of the holdup\l"
# 636 "data/scripts/debug.pory"
	.string "bishop and supplies.$"
# 637 "data/scripts/debug.pory"

# 638 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_6::
# 639 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 640 "data/scripts/debug.pory"
	.string "Quanta quanta qophs for the inquest\n"
# 641 "data/scripts/debug.pory"
	.string "sheqel of the cinq coq and suqqu. Rhone\l"
# 642 "data/scripts/debug.pory"
	.string "rhone roman for the burnt porous of the\l"
# 643 "data/scripts/debug.pory"
	.string "lemur clamor and carrot. Snout snout\l"
# 644 "data/scripts/debug.pory"
	.string "sodium for the ensnare bosom of the\l"
# 645 "data/scripts/debug.pory"
	.string "genus pathos and missing. Tundra\l"
# 646 "data/scripts/debug.pory"
	.string "tundra tocsin for the nutmeg isotope\l"
# 647 "data/scripts/debug.pory"
	.string "of the peasant ingot and ottoman.$"
# 648 "data/scripts/debug.pory"

# 649 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_7::
# 650 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 651 "data/scripts/debug.pory"
	.string "Uncle uncle udder for the dunes cloud\n"
# 652 "data/scripts/debug.pory"
	.string "of the hindu thou and continuum. Vulcan\l"
# 653 "data/scripts/debug.pory"
	.string "vulcan vocal for the alluvial ovoid of\l"
# 654 "data/scripts/debug.pory"
	.string "the yugoslav chekhov and revved. Whale\l"
# 655 "data/scripts/debug.pory"
	.string "whale woman for the meanwhile blowout\l"
# 656 "data/scripts/debug.pory"
	.string "of the forepaw meadow and glowworm.\l"
# 657 "data/scripts/debug.pory"
	.string "Xmas xmas xenon for the bauxite\l"
# 658 "data/scripts/debug.pory"
	.string "doxology of the tableaux equinox and\l"
# 659 "data/scripts/debug.pory"
	.string "exxon.$"
# 660 "data/scripts/debug.pory"

# 661 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_8::
# 662 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 663 "data/scripts/debug.pory"
	.string "Yunnan yunnan young for the dynamo\n"
# 664 "data/scripts/debug.pory"
	.string "coyote of the obloquy employ and\l"
# 665 "data/scripts/debug.pory"
	.string "sayyid. Zloty zloty zodiac for the gizmo\l"
# 666 "data/scripts/debug.pory"
	.string "ozone of the franz laissez and buzzing.$"
# 667 "data/scripts/debug.pory"

# 668 "data/scripts/debug.pory"

# 669 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_9::                 @ Special thanks to Nintendo for this nice pangram to test other glyphs
# 670 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 671 "data/scripts/debug.pory"
	.string "42 × 138 = 5796.\n"
# 672 "data/scripts/debug.pory"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer\l"
# 673 "data/scripts/debug.pory"
	.string "lynx at a café; voilà, they're “worth”\l"
# 674 "data/scripts/debug.pory"
	.string "♂1/♀1 = ¥1. That's 10 + 9 - 8 = 11\l"
# 675 "data/scripts/debug.pory"
	.string "Nintendo GBA can connect to a Nintendo\l"
# 676 "data/scripts/debug.pory"
	.string "GameCube console! He claimed-though I don't\l"
# 677 "data/scripts/debug.pory"
	.string "believe him-to have done so in an eyes-shut\l"
# 678 "data/scripts/debug.pory"
	.string "state…?$"
# 679 "data/scripts/debug.pory"

# 680 "data/scripts/debug.pory"
Debug_PrintFontTest::
# 681 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_1, MSGBOX_DEFAULT
# 682 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_2, MSGBOX_DEFAULT
# 683 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_3, MSGBOX_DEFAULT
# 684 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_4, MSGBOX_DEFAULT
# 685 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_5, MSGBOX_DEFAULT
# 686 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_6, MSGBOX_DEFAULT
# 687 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_7, MSGBOX_DEFAULT
# 688 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_8, MSGBOX_DEFAULT
# 689 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_9, MSGBOX_DEFAULT
# 690 "data/scripts/debug.pory"
	releaseall
# 691 "data/scripts/debug.pory"
	end
# 692 "data/scripts/debug.pory"

# 693 "data/scripts/debug.pory"
Debug_EventScript_FontTest::
# 694 "data/scripts/debug.pory"
	lockall
# 695 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
# 696 "data/scripts/debug.pory"
@	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 697 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 698 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 699 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 700 "data/scripts/debug.pory"
@	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 701 "data/scripts/debug.pory"
@	switch VAR_RESULT
# 702 "data/scripts/debug.pory"
@	case 0, Debug_EventScript_InflictStatus1_Single
# 703 "data/scripts/debug.pory"
@	case 1, Debug_EventScript_InflictStatus1_Party
# 704 "data/scripts/debug.pory"
@	case 2, Debug_EventScript_InflictStatus1_Close
# 705 "data/scripts/debug.pory"
@Debug_EventScript_InflictStatus1_Close:
# 706 "data/scripts/debug.pory"
@	releaseall
# 707 "data/scripts/debug.pory"
@	end
# 708 "data/scripts/debug.pory"

# 709 "data/scripts/debug.pory"
Debug_EventScript_TellTheTime::
# 710 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 711 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 712 "data/scripts/debug.pory"
	waitmessage
# 713 "data/scripts/debug.pory"
	closemessage
# 714 "data/scripts/debug.pory"
	end
# 715 "data/scripts/debug.pory"

# 716 "data/scripts/debug.pory"
Debug_EventScript_PrintTimeOfDay::
# 717 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 718 "data/scripts/debug.pory"
	msgbox DebugEventScript_PrintWeekday_Text_0, MSGBOX_DEFAULT
# 719 "data/scripts/debug.pory"
	waitmessage
# 720 "data/scripts/debug.pory"
	closemessage
# 721 "data/scripts/debug.pory"
	end
# 722 "data/scripts/debug.pory"

# 723 "data/scripts/debug.pory"
Debug_EventScript_FakeRTCNotEnabled::
# 724 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 725 "data/scripts/debug.pory"
	waitmessage
# 726 "data/scripts/debug.pory"
	closemessage
# 727 "data/scripts/debug.pory"
	return
# 728 "data/scripts/debug.pory"

# 729 "data/scripts/debug.pory"
Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 730 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\nenabled. Please enable it in include/\lconfig/overworld.h$"
# 731 "data/scripts/debug.pory"

# 732 "data/scripts/debug.pory"

# 733 "data/scripts/debug.pory"
Debug_EventScript_TellTheTime_Text_0:
# 734 "data/scripts/debug.pory"
	.string "Time and date:\n"
# 735 "data/scripts/debug.pory"
	.string "{STR_VAR_1}, {STR_VAR_2}:{STR_VAR_3}$"
# 736 "data/scripts/debug.pory"

# 737 "data/scripts/debug.pory"
DebugEventScript_PrintWeekday_Text_0:
# 738 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"

Debug_EventScript_Script_1::
# 742 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_1_Text_0
# 743 "data/scripts/debug.pory"
	closemessage
# 744 "data/scripts/debug.pory"
	getcharaAvailability CHARACTER_MITSURU
# 745 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_1_2
# 749 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_MITSURU
Debug_EventScript_Script_1_1:
# 751 "data/scripts/debug.pory"
	release
	end

Debug_EventScript_Script_1_2:
# 746 "data/scripts/debug.pory"
	makecharaUnavailable CHARACTER_MITSURU
	goto Debug_EventScript_Script_1_1


Debug_EventScript_Script_2::
# 756 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_2_Text_0
# 757 "data/scripts/debug.pory"
	closemessage
# 758 "data/scripts/debug.pory"
	getcharaAvailability CHARACTER_AKIHIKO
# 759 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_2_2
# 763 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_AKIHIKO
Debug_EventScript_Script_2_1:
# 765 "data/scripts/debug.pory"
	release
	end

Debug_EventScript_Script_2_2:
# 760 "data/scripts/debug.pory"
	makecharaUnavailable CHARACTER_AKIHIKO
	goto Debug_EventScript_Script_2_1


Debug_EventScript_Script_3::
# 770 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_3_Text_0
# 771 "data/scripts/debug.pory"
	closemessage
# 772 "data/scripts/debug.pory"
	getcharaAvailability CHARACTER_SHINJIRO
# 773 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_3_2
# 777 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_SHINJIRO
Debug_EventScript_Script_3_1:
# 779 "data/scripts/debug.pory"
	release
	end

Debug_EventScript_Script_3_2:
# 774 "data/scripts/debug.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
	goto Debug_EventScript_Script_3_1


Debug_EventScript_Script_4::
# 784 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_4_Text_0
# 785 "data/scripts/debug.pory"
	closemessage
# 786 "data/scripts/debug.pory"
	isfollowernpc OBJ_EVENT_GFX_MAY_NORMAL
# 787 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_4_2
# 791 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_4_Text_2
Debug_EventScript_Script_4_1:
# 793 "data/scripts/debug.pory"
	closemessage
# 794 "data/scripts/debug.pory"
	release
	end

Debug_EventScript_Script_4_2:
# 788 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_4_Text_1
	goto Debug_EventScript_Script_4_1


Debug_EventScript_Script_5::
# 799 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_5_Text_0
# 800 "data/scripts/debug.pory"
	closemessage
# 801 "data/scripts/debug.pory"
	isfollowernpc OBJ_EVENT_GFX_MAY_NORMAL
# 802 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_5_Text_1
# 803 "data/scripts/debug.pory"
	closemessage
# 804 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_6::
# 809 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_7::
# 814 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_8::
# 819 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_1_Text_0:
# 742 "data/scripts/debug.pory"
	.string "toggle mitsuru$"

Debug_EventScript_Script_2_Text_0:
# 756 "data/scripts/debug.pory"
	.string "toggle akihiko$"

Debug_EventScript_Script_3_Text_0:
# 770 "data/scripts/debug.pory"
	.string "toggle shinjiro$"

Debug_EventScript_Script_4_Text_0:
# 784 "data/scripts/debug.pory"
	.string "checking if follower npc is mitsuru$"

Debug_EventScript_Script_4_Text_1:
# 788 "data/scripts/debug.pory"
	.string "follower is mitsuru$"

Debug_EventScript_Script_4_Text_2:
# 791 "data/scripts/debug.pory"
	.string "follower isnt mitsuru$"

Debug_EventScript_Script_5_Text_0:
# 799 "data/scripts/debug.pory"
	.string "checking if follower npc gfx$"

Debug_EventScript_Script_5_Text_1:
# 802 "data/scripts/debug.pory"
	.string "follower gfx id is {STR_VAR_1}$"
