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
	
# 14 "data/scripts/debug.pory"
	release
# 15 "data/scripts/debug.pory"
	end
# 16 "data/scripts/debug.pory"

# 17 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage::
# 18 "data/scripts/debug.pory"
	message Debug_FlagsNotSetOverworldConfigMessage_Text
# 19 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 20 "data/scripts/debug.pory"

# 21 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage_Text:
# 22 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 23 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 24 "data/scripts/debug.pory"
	.string "'include/config/overworld.h'!$"
# 25 "data/scripts/debug.pory"

# 26 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage::
# 27 "data/scripts/debug.pory"
	message Debug_FlagsNotSetBattleConfigMessage_Text
# 28 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 29 "data/scripts/debug.pory"

# 30 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage_Text:
# 31 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 32 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 33 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 34 "data/scripts/debug.pory"

# 35 "data/scripts/debug.pory"
Debug_VarsNotSetBattleConfigMessage::
# 36 "data/scripts/debug.pory"
	message Debug_VarsNotSetBattleConfigMessage_Text
# 37 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 38 "data/scripts/debug.pory"

# 39 "data/scripts/debug.pory"
Debug_VarsNotSetBattleConfigMessage_Text:
# 40 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 41 "data/scripts/debug.pory"
	.string "Please define a usable var in:\l"
# 42 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 43 "data/scripts/debug.pory"

# 44 "data/scripts/debug.pory"
Debug_BoxFilledMessage::
# 45 "data/scripts/debug.pory"
	message Debug_BoxFilledMessage_Text
# 46 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 47 "data/scripts/debug.pory"

# 48 "data/scripts/debug.pory"
Debug_BoxFilledMessage_Text:
# 49 "data/scripts/debug.pory"
	.string "Storage boxes filled!$"
# 50 "data/scripts/debug.pory"

# 51 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs::
# 52 "data/scripts/debug.pory"
	lockall
# 53 "data/scripts/debug.pory"
	getpartysize
# 54 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 55 "data/scripts/debug.pory"
	special ChoosePartyMon
# 56 "data/scripts/debug.pory"
	waitstate
# 57 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 58 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 59 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveEVs, MSGBOX_DEFAULT
# 60 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 61 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveEVs, MSGBOX_DEFAULT
# 62 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs_End::
# 63 "data/scripts/debug.pory"
	releaseall
# 64 "data/scripts/debug.pory"
	end
# 65 "data/scripts/debug.pory"

# 66 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveEVs:
# 67 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"
# 68 "data/scripts/debug.pory"

# 69 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveEVs:
# 70 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"
# 71 "data/scripts/debug.pory"

# 72 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs::
# 73 "data/scripts/debug.pory"
	lockall
# 74 "data/scripts/debug.pory"
	getpartysize
# 75 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 76 "data/scripts/debug.pory"
	special ChoosePartyMon
# 77 "data/scripts/debug.pory"
	waitstate
# 78 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 79 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 80 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveIVs, MSGBOX_DEFAULT
# 81 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 82 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveIVs, MSGBOX_DEFAULT
# 83 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs_End::
# 84 "data/scripts/debug.pory"
	releaseall
# 85 "data/scripts/debug.pory"
	end
# 86 "data/scripts/debug.pory"

# 87 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveIVs:
# 88 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"
# 89 "data/scripts/debug.pory"

# 90 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveIVs:
# 91 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"
# 92 "data/scripts/debug.pory"

# 93 "data/scripts/debug.pory"

# 94 "data/scripts/debug.pory"
Debug_CheckSaveBlock::
# 95 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 96 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
# 97 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 98 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
# 99 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 100 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock3Size, MSGBOX_DEFAULT
# 101 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 102 "data/scripts/debug.pory"
	msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
# 103 "data/scripts/debug.pory"
	release
# 104 "data/scripts/debug.pory"
	end
# 105 "data/scripts/debug.pory"

# 106 "data/scripts/debug.pory"
Debug_SaveBlock1Size::
# 107 "data/scripts/debug.pory"
	.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 108 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 109 "data/scripts/debug.pory"

# 110 "data/scripts/debug.pory"
Debug_SaveBlock2Size::
# 111 "data/scripts/debug.pory"
	.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 112 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 113 "data/scripts/debug.pory"

# 114 "data/scripts/debug.pory"
Debug_SaveBlock3Size::
# 115 "data/scripts/debug.pory"
	.string "SaveBlock3 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 116 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 117 "data/scripts/debug.pory"

# 118 "data/scripts/debug.pory"
Debug_PokemonStorageSize::
# 119 "data/scripts/debug.pory"
	.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 120 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 121 "data/scripts/debug.pory"

# 122 "data/scripts/debug.pory"
Debug_CheckROMSpace::
# 123 "data/scripts/debug.pory"
	callnative CheckROMSize
# 124 "data/scripts/debug.pory"
	msgbox Debug_ROMSize, MSGBOX_DEFAULT
# 125 "data/scripts/debug.pory"
	release
# 126 "data/scripts/debug.pory"
	end
# 127 "data/scripts/debug.pory"

# 128 "data/scripts/debug.pory"
Debug_ROMSize::
# 129 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
# 130 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_2}MB.$"
# 131 "data/scripts/debug.pory"

# 132 "data/scripts/debug.pory"
Debug_HatchAnEgg::
# 133 "data/scripts/debug.pory"
	lockall
# 134 "data/scripts/debug.pory"
	getpartysize
# 135 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 136 "data/scripts/debug.pory"
	special ChoosePartyMon
# 137 "data/scripts/debug.pory"
	waitstate
# 138 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 139 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 140 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 141 "data/scripts/debug.pory"
	special EggHatch
# 142 "data/scripts/debug.pory"
	waitstate
# 143 "data/scripts/debug.pory"
Debug_HatchAnEgg_End::
# 144 "data/scripts/debug.pory"
	releaseall
# 145 "data/scripts/debug.pory"
	end
# 146 "data/scripts/debug.pory"

# 147 "data/scripts/debug.pory"
Debug_NoPokemon::
# 148 "data/scripts/debug.pory"
	msgbox DebugScript_Text_EmptyParty, MSGBOX_DEFAULT
# 149 "data/scripts/debug.pory"
	releaseall
# 150 "data/scripts/debug.pory"
	end
# 151 "data/scripts/debug.pory"

# 152 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_CantForceHatch::
# 153 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
# 154 "data/scripts/debug.pory"
	releaseall
# 155 "data/scripts/debug.pory"
	end
# 156 "data/scripts/debug.pory"

# 157 "data/scripts/debug.pory"
DebugScript_Text_EmptyParty::
# 158 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"
# 159 "data/scripts/debug.pory"

# 160 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_Text_NotAnEgg::
# 161 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"
# 162 "data/scripts/debug.pory"

# 163 "data/scripts/debug.pory"
DebugScript_ZeroDaycareMons::
# 164 "data/scripts/debug.pory"
	msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
# 165 "data/scripts/debug.pory"
	releaseall
# 166 "data/scripts/debug.pory"
	end
# 167 "data/scripts/debug.pory"

# 168 "data/scripts/debug.pory"
DebugScript_OneDaycareMons::
# 169 "data/scripts/debug.pory"
	msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
# 170 "data/scripts/debug.pory"
	releaseall
# 171 "data/scripts/debug.pory"
	end
# 172 "data/scripts/debug.pory"

# 173 "data/scripts/debug.pory"
DebugScript_DaycareMonsNotCompatible::
# 174 "data/scripts/debug.pory"
	msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
# 175 "data/scripts/debug.pory"
	releaseall
# 176 "data/scripts/debug.pory"
	end
# 177 "data/scripts/debug.pory"

# 178 "data/scripts/debug.pory"
DebugText_DaycareNoPokemon:
# 179 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"
# 180 "data/scripts/debug.pory"

# 181 "data/scripts/debug.pory"
DebugText_DaycareOnePokemon:
# 182 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"
# 183 "data/scripts/debug.pory"

# 184 "data/scripts/debug.pory"
DebugText_DaycarePokemonNotCompatible:
# 185 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\nhave babies together!$"
# 186 "data/scripts/debug.pory"

# 187 "data/scripts/debug.pory"
Debug_ShowExpansionVersion::
# 188 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 189 "data/scripts/debug.pory"
	msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
# 190 "data/scripts/debug.pory"
	release
# 191 "data/scripts/debug.pory"
	end
# 192 "data/scripts/debug.pory"

# 193 "data/scripts/debug.pory"
Debug_ExpansionVersion:
# 194 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"
# 195 "data/scripts/debug.pory"

# 196 "data/scripts/debug.pory"
Debug_Follower_NPC_Not_Enabled::
# 197 "data/scripts/debug.pory"
	msgbox Debug_Enable_To_Use_Follower_NPCs, MSGBOX_DEFAULT
# 198 "data/scripts/debug.pory"
	release
# 199 "data/scripts/debug.pory"
	end
# 200 "data/scripts/debug.pory"

# 201 "data/scripts/debug.pory"
Debug_Enable_To_Use_Follower_NPCs:
# 202 "data/scripts/debug.pory"
	.string "Feature unavailable.\nSet FNPC_ENABLE_NPC_FOLLOWERS to\lTRUE in 'include/config/follower_npc.h'.$"
# 203 "data/scripts/debug.pory"

# 204 "data/scripts/debug.pory"
Debug_Follower_NPC_Event_Script::
# 205 "data/scripts/debug.pory"
	lock
# 206 "data/scripts/debug.pory"
	facefollowernpc
# 207 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Test_Message, MSGBOX_DEFAULT
# 208 "data/scripts/debug.pory"
	releaseall
# 209 "data/scripts/debug.pory"
	end
# 210 "data/scripts/debug.pory"

# 211 "data/scripts/debug.pory"
Debug_Follower_NPC_Test_Message:
# 212 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"
# 213 "data/scripts/debug.pory"

# 214 "data/scripts/debug.pory"
Debug_EventScript_Steven_Multi::
# 215 "data/scripts/debug.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 216 "data/scripts/debug.pory"
	release
# 217 "data/scripts/debug.pory"
	end
# 218 "data/scripts/debug.pory"

# 219 "data/scripts/debug.pory"
Debug_EventScript_WallyTutorial::
# 220 "data/scripts/debug.pory"
	special SavePlayerParty
# 221 "data/scripts/debug.pory"
	special LoadWallyZigzagoon
# 222 "data/scripts/debug.pory"
	special StartWallyTutorialBattle
# 223 "data/scripts/debug.pory"
	waitstate
# 224 "data/scripts/debug.pory"
	special LoadPlayerParty
# 225 "data/scripts/debug.pory"
	release
# 226 "data/scripts/debug.pory"
	end
# 227 "data/scripts/debug.pory"

# 228 "data/scripts/debug.pory"
Debug_BerryPestsDisabled::
# 229 "data/scripts/debug.pory"
	msgbox DebugText_BerryPestsDisabled, MSGBOX_DEFAULT
# 230 "data/scripts/debug.pory"
	release
# 231 "data/scripts/debug.pory"
	end
# 232 "data/scripts/debug.pory"

# 233 "data/scripts/debug.pory"
DebugText_BerryPestsDisabled:
# 234 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
# 235 "data/scripts/debug.pory"
	.string "Unable to force pests onto berry trees.$"
# 236 "data/scripts/debug.pory"

# 237 "data/scripts/debug.pory"
Debug_BerryWeedsDisabled::
# 238 "data/scripts/debug.pory"
	msgbox DebugText_BerryWeedsDisabled, MSGBOX_DEFAULT
# 239 "data/scripts/debug.pory"
	release
# 240 "data/scripts/debug.pory"
	end
# 241 "data/scripts/debug.pory"

# 242 "data/scripts/debug.pory"
DebugText_BerryWeedsDisabled:
# 243 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
# 244 "data/scripts/debug.pory"
	.string "Unable to force weeds onto berry trees.$"
# 245 "data/scripts/debug.pory"

# 246 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1::
# 247 "data/scripts/debug.pory"
	lockall
# 248 "data/scripts/debug.pory"
	getpartysize
# 249 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 250 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 251 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 252 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 253 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 254 "data/scripts/debug.pory"
	switch VAR_RESULT
# 255 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single
# 256 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party
# 257 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Close
# 258 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Close:
# 259 "data/scripts/debug.pory"
	releaseall
# 260 "data/scripts/debug.pory"
	end
# 261 "data/scripts/debug.pory"

# 262 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single:
# 263 "data/scripts/debug.pory"
	special ChoosePartyMon
# 264 "data/scripts/debug.pory"
	waitstate
# 265 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 266 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 267 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 268 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 269 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 270 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 271 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 272 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 273 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 274 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 275 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 276 "data/scripts/debug.pory"
	switch VAR_RESULT
# 277 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_Poison
# 278 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_Paralysis
# 279 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_Sleep
# 280 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_Burn
# 281 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_Freeze
# 282 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_Frostbite
# 283 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 284 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 285 "data/scripts/debug.pory"
	releaseall
# 286 "data/scripts/debug.pory"
	end
# 287 "data/scripts/debug.pory"

# 288 "data/scripts/debug.pory"
Debug_EventScript_KoPokemon::
# 289 "data/scripts/debug.pory"
	special ChoosePartyMon
# 290 "data/scripts/debug.pory"
	waitstate
# 291 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 292 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 293 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 294 "data/scripts/debug.pory"
	setko VAR_0x8004
# 295 "data/scripts/debug.pory"
	releaseall
# 296 "data/scripts/debug.pory"
	end
# 297 "data/scripts/debug.pory"

# 298 "data/scripts/debug.pory"
Debug_EventScript_SetHiddenNature::
# 299 "data/scripts/debug.pory"
	special ChoosePartyMon
# 300 "data/scripts/debug.pory"
	waitstate
# 301 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 302 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 303 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 304 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Hardy, 0
# 305 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Lonely, 1
# 306 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Brave, 2
# 307 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Adamant, 3
# 308 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Naughty, 4
# 309 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Bold, 5
# 310 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Docile, 6
# 311 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Relaxed, 7
# 312 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Impish, 8
# 313 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Lax, 9
# 314 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Timid, 10
# 315 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Hasty, 11
# 316 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Serious, 12
# 317 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Jolly, 13
# 318 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Naive, 14
# 319 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Modest, 15
# 320 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Mild, 16
# 321 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Quiet, 17
# 322 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Bashful, 18
# 323 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Rash, 19
# 324 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Calm, 20
# 325 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Gentle, 21
# 326 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Sassy, 22
# 327 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Careful, 23
# 328 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Quirky, 24
# 329 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 330 "data/scripts/debug.pory"
	switch VAR_RESULT
# 331 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 332 "data/scripts/debug.pory"
	special SetHiddenNature
# 333 "data/scripts/debug.pory"
	releaseall
# 334 "data/scripts/debug.pory"
	end
# 335 "data/scripts/debug.pory"

# 336 "data/scripts/debug.pory"
Debug_EventScript_SetAbility::
# 337 "data/scripts/debug.pory"
	special ChoosePartyMon
# 338 "data/scripts/debug.pory"
	waitstate
# 339 "data/scripts/debug.pory"
	callnative DebugNative_GetAbilityNames
# 340 "data/scripts/debug.pory"
	dynmultipush gStringVar1, 0
# 341 "data/scripts/debug.pory"
	dynmultipush gStringVar2, 1
# 342 "data/scripts/debug.pory"
	dynmultipush gStringVar3, 2
# 343 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 344 "data/scripts/debug.pory"
	switch VAR_RESULT
# 345 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetAbilityClose
# 346 "data/scripts/debug.pory"
	special SetAbility
# 347 "data/scripts/debug.pory"
Debug_EventScript_SetAbilityClose:
# 348 "data/scripts/debug.pory"
	releaseall
# 349 "data/scripts/debug.pory"
	end
# 350 "data/scripts/debug.pory"

# 351 "data/scripts/debug.pory"
Debug_EventScript_SetFriendship::
# 352 "data/scripts/debug.pory"
	special ChoosePartyMon
# 353 "data/scripts/debug.pory"
	waitstate
# 354 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetFriendship
# 355 "data/scripts/debug.pory"
	releaseall
# 356 "data/scripts/debug.pory"
	end
# 357 "data/scripts/debug.pory"

# 358 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Poison:
# 359 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 360 "data/scripts/debug.pory"
	releaseall
# 361 "data/scripts/debug.pory"
	end
# 362 "data/scripts/debug.pory"

# 363 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Paralysis:
# 364 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 365 "data/scripts/debug.pory"
	releaseall
# 366 "data/scripts/debug.pory"
	end
# 367 "data/scripts/debug.pory"

# 368 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Sleep:
# 369 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 370 "data/scripts/debug.pory"
	releaseall
# 371 "data/scripts/debug.pory"
	end
# 372 "data/scripts/debug.pory"

# 373 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Burn:
# 374 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 375 "data/scripts/debug.pory"
	releaseall
# 376 "data/scripts/debug.pory"
	end
# 377 "data/scripts/debug.pory"

# 378 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Freeze:
# 379 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 380 "data/scripts/debug.pory"
	releaseall
# 381 "data/scripts/debug.pory"
	end
# 382 "data/scripts/debug.pory"

# 383 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Frostbite:
# 384 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 385 "data/scripts/debug.pory"
	releaseall
# 386 "data/scripts/debug.pory"
	end
# 387 "data/scripts/debug.pory"

# 388 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party:
# 389 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 390 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 391 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 392 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 393 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 394 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 395 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 396 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 397 "data/scripts/debug.pory"
	switch VAR_RESULT
# 398 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_Poison
# 399 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_Paralysis
# 400 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_Sleep
# 401 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_Burn
# 402 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_Freeze
# 403 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_Frostbite
# 404 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 405 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 406 "data/scripts/debug.pory"
	releaseall
# 407 "data/scripts/debug.pory"
	end
# 408 "data/scripts/debug.pory"

# 409 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Poison:
# 410 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 411 "data/scripts/debug.pory"
	releaseall
# 412 "data/scripts/debug.pory"
	end
# 413 "data/scripts/debug.pory"

# 414 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Paralysis:
# 415 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 416 "data/scripts/debug.pory"
	releaseall
# 417 "data/scripts/debug.pory"
	end
# 418 "data/scripts/debug.pory"

# 419 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Sleep:
# 420 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 421 "data/scripts/debug.pory"
	releaseall
# 422 "data/scripts/debug.pory"
	end
# 423 "data/scripts/debug.pory"

# 424 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Burn:
# 425 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 426 "data/scripts/debug.pory"
	releaseall
# 427 "data/scripts/debug.pory"
	end
# 428 "data/scripts/debug.pory"

# 429 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Freeze:
# 430 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 431 "data/scripts/debug.pory"
	releaseall
# 432 "data/scripts/debug.pory"
	end
# 433 "data/scripts/debug.pory"

# 434 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Frostbite:
# 435 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 436 "data/scripts/debug.pory"
	releaseall
# 437 "data/scripts/debug.pory"
	end
# 438 "data/scripts/debug.pory"

# 439 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Single:
# 440 "data/scripts/debug.pory"
	.string "Single$"
# 441 "data/scripts/debug.pory"

# 442 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_PartyWide:
# 443 "data/scripts/debug.pory"
	.string "Party-wide$"
# 444 "data/scripts/debug.pory"

# 445 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Close:
# 446 "data/scripts/debug.pory"
	.string "Close$"
# 447 "data/scripts/debug.pory"

# 448 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Poison:
# 449 "data/scripts/debug.pory"
	.string "Poison$"
# 450 "data/scripts/debug.pory"

# 451 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Paralysis:
# 452 "data/scripts/debug.pory"
	.string "Paralysis$"
# 453 "data/scripts/debug.pory"

# 454 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Sleep:
# 455 "data/scripts/debug.pory"
	.string "Sleep$"
# 456 "data/scripts/debug.pory"

# 457 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Burn:
# 458 "data/scripts/debug.pory"
	.string "Burn$"
# 459 "data/scripts/debug.pory"

# 460 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Freeze:
# 461 "data/scripts/debug.pory"
	.string "Freeze$"
# 462 "data/scripts/debug.pory"

# 463 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Frostbite:
# 464 "data/scripts/debug.pory"
	.string "Frostbite$"
# 465 "data/scripts/debug.pory"

# 466 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_KO:
# 467 "data/scripts/debug.pory"
	.string "KO$"
# 468 "data/scripts/debug.pory"

# 469 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Hardy:
# 470 "data/scripts/debug.pory"
	.string "Hardy$"
# 471 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Lonely:
# 472 "data/scripts/debug.pory"
	.string "Lonely$"
# 473 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Brave:
# 474 "data/scripts/debug.pory"
	.string "Brave$"
# 475 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Adamant:
# 476 "data/scripts/debug.pory"
	.string "Adamant$"
# 477 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Naughty:
# 478 "data/scripts/debug.pory"
	.string "Naughty$"
# 479 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Bold:
# 480 "data/scripts/debug.pory"
	.string "Bold$"
# 481 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Docile:
# 482 "data/scripts/debug.pory"
	.string "Docile$"
# 483 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Relaxed:
# 484 "data/scripts/debug.pory"
	.string "Relaxed$"
# 485 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Impish:
# 486 "data/scripts/debug.pory"
	.string "Impish$"
# 487 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Lax:
# 488 "data/scripts/debug.pory"
	.string "Lax$"
# 489 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Timid:
# 490 "data/scripts/debug.pory"
	.string "Timid$"
# 491 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Hasty:
# 492 "data/scripts/debug.pory"
	.string "Hasty$"
# 493 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Serious:
# 494 "data/scripts/debug.pory"
	.string "Serious$"
# 495 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Jolly:
# 496 "data/scripts/debug.pory"
	.string "Jolly$"
# 497 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Naive:
# 498 "data/scripts/debug.pory"
	.string "Naive$"
# 499 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Modest:
# 500 "data/scripts/debug.pory"
	.string "Modest$"
# 501 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Mild:
# 502 "data/scripts/debug.pory"
	.string "Mild$"
# 503 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Quiet:
# 504 "data/scripts/debug.pory"
	.string "Quiet$"
# 505 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Bashful:
# 506 "data/scripts/debug.pory"
	.string "Bashful$"
# 507 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Rash:
# 508 "data/scripts/debug.pory"
	.string "Rash$"
# 509 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Calm:
# 510 "data/scripts/debug.pory"
	.string "Calm$"
# 511 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Gentle:
# 512 "data/scripts/debug.pory"
	.string "Gentle$"
# 513 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Sassy:
# 514 "data/scripts/debug.pory"
	.string "Sassy$"
# 515 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Careful:
# 516 "data/scripts/debug.pory"
	.string "Careful$"
# 517 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Quirky:
# 518 "data/scripts/debug.pory"
	.string "Quirky$"
# 519 "data/scripts/debug.pory"

# 520 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters::
# 521 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 522 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text, MSGBOX_DEFAULT
# 523 "data/scripts/debug.pory"
	release
# 524 "data/scripts/debug.pory"
	end
# 525 "data/scripts/debug.pory"

# 526 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters_Text::
# 527 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
# 528 "data/scripts/debug.pory"
	.string "Fishing Chain: {STR_VAR_2}.$"
# 529 "data/scripts/debug.pory"

# 530 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_1::
# 531 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 532 "data/scripts/debug.pory"
	.string "Angel Adept Blind Bodice Clique\n"
# 533 "data/scripts/debug.pory"
	.string "Coast Dunce Docile Enact Eosin\l"
# 534 "data/scripts/debug.pory"
	.string "Furlong Focal Gnome Gondola Human\l"
# 535 "data/scripts/debug.pory"
	.string "Hoist Inlet Iodine Justin Jocose\l"
# 536 "data/scripts/debug.pory"
	.string "Knoll Koala Linden Loads Milliner\l"
# 537 "data/scripts/debug.pory"
	.string "Modal Number Nodule Onset Oddball\l"
# 538 "data/scripts/debug.pory"
	.string "Pneumo Poncho Quanta Qophs Rhone\l"
# 539 "data/scripts/debug.pory"
	.string "Roman Snout Sodium Tundra Tocsin\l"
# 540 "data/scripts/debug.pory"
	.string "Uncle Udder Vulcan Vocal Whale\l"
# 541 "data/scripts/debug.pory"
	.string "Woman Xmas Xenon Yunnan Young\l"
# 542 "data/scripts/debug.pory"
	.string "Zloty Zodiac.$"
# 543 "data/scripts/debug.pory"

# 544 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_2::
# 545 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 546 "data/scripts/debug.pory"
	.string "Angel angel adept for the nuance loads\n"
# 547 "data/scripts/debug.pory"
	.string "of the arena cocoa and quaalude. Blind\l"
# 548 "data/scripts/debug.pory"
	.string "blind bodice for the submit oboe of the\l"
# 549 "data/scripts/debug.pory"
	.string "club snob and abbot. Clique clique\l"
# 550 "data/scripts/debug.pory"
	.string "coast for the pouch loco of the franc\l"
# 551 "data/scripts/debug.pory"
	.string "assoc and accede. Dunce dunce docile\l"
# 552 "data/scripts/debug.pory"
	.string "for the loudness mastodon of the\l"
# 553 "data/scripts/debug.pory"
	.string "loud statehood and huddle.$"
# 554 "data/scripts/debug.pory"

# 555 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_3::
# 556 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 557 "data/scripts/debug.pory"
	.string "Enact enact eosin for the quench coed\n"
# 558 "data/scripts/debug.pory"
	.string "of the pique canoe and bleep. Furlong\l"
# 559 "data/scripts/debug.pory"
	.string "furlong focal for the genuflect\l"
# 560 "data/scripts/debug.pory"
	.string "profound of the motif aloof and offers.\l"
# 561 "data/scripts/debug.pory"
	.string "Gnome gnome gondola for the impugn\l"
# 562 "data/scripts/debug.pory"
	.string "logos of the unplug analog and smuggle.\l"
# 563 "data/scripts/debug.pory"
	.string "Human human hoist for the buddhist\l"
# 564 "data/scripts/debug.pory"
	.string "alcohol of the riyadh caliph and\l"
# 565 "data/scripts/debug.pory"
	.string "bathhouse.$"
# 566 "data/scripts/debug.pory"

# 567 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_4::
# 568 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 569 "data/scripts/debug.pory"
	.string "Inlet inlet iodine for the quince\n"
# 570 "data/scripts/debug.pory"
	.string "champion of the ennui scampi and shiite.\l"
# 571 "data/scripts/debug.pory"
	.string "Justin justin jocose for the djibouti\l"
# 572 "data/scripts/debug.pory"
	.string "sojourn of the oranj raj and hajjis.\l"
# 573 "data/scripts/debug.pory"
	.string "Knoll knoll koala for the banknote\l"
# 574 "data/scripts/debug.pory"
	.string "lookout of the dybbuk outlook and\l"
# 575 "data/scripts/debug.pory"
	.string "trekked. Linden linden loads for the\l"
# 576 "data/scripts/debug.pory"
	.string "ulna monolog of the consul menthol and\l"
# 577 "data/scripts/debug.pory"
	.string "shallot.$"
# 578 "data/scripts/debug.pory"

# 579 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_5::
# 580 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 581 "data/scripts/debug.pory"
	.string "Milliner milliner modal for the alumna\n"
# 582 "data/scripts/debug.pory"
	.string "solomon of the album custom and summon.\l"
# 583 "data/scripts/debug.pory"
	.string "Number number nodule for the unmade\l"
# 584 "data/scripts/debug.pory"
	.string "economic of the shotgun bison and\l"
# 585 "data/scripts/debug.pory"
	.string "tunnel. Onset onset oddball for the\l"
# 586 "data/scripts/debug.pory"
	.string "abandon podium of the antiquo tempo\l"
# 587 "data/scripts/debug.pory"
	.string "and moonlit. Pneumo pneumo poncho for\l"
# 588 "data/scripts/debug.pory"
	.string "the dauphin opossum of the holdup\l"
# 589 "data/scripts/debug.pory"
	.string "bishop and supplies.$"
# 590 "data/scripts/debug.pory"

# 591 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_6::
# 592 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 593 "data/scripts/debug.pory"
	.string "Quanta quanta qophs for the inquest\n"
# 594 "data/scripts/debug.pory"
	.string "sheqel of the cinq coq and suqqu. Rhone\l"
# 595 "data/scripts/debug.pory"
	.string "rhone roman for the burnt porous of the\l"
# 596 "data/scripts/debug.pory"
	.string "lemur clamor and carrot. Snout snout\l"
# 597 "data/scripts/debug.pory"
	.string "sodium for the ensnare bosom of the\l"
# 598 "data/scripts/debug.pory"
	.string "genus pathos and missing. Tundra\l"
# 599 "data/scripts/debug.pory"
	.string "tundra tocsin for the nutmeg isotope\l"
# 600 "data/scripts/debug.pory"
	.string "of the peasant ingot and ottoman.$"
# 601 "data/scripts/debug.pory"

# 602 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_7::
# 603 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 604 "data/scripts/debug.pory"
	.string "Uncle uncle udder for the dunes cloud\n"
# 605 "data/scripts/debug.pory"
	.string "of the hindu thou and continuum. Vulcan\l"
# 606 "data/scripts/debug.pory"
	.string "vulcan vocal for the alluvial ovoid of\l"
# 607 "data/scripts/debug.pory"
	.string "the yugoslav chekhov and revved. Whale\l"
# 608 "data/scripts/debug.pory"
	.string "whale woman for the meanwhile blowout\l"
# 609 "data/scripts/debug.pory"
	.string "of the forepaw meadow and glowworm.\l"
# 610 "data/scripts/debug.pory"
	.string "Xmas xmas xenon for the bauxite\l"
# 611 "data/scripts/debug.pory"
	.string "doxology of the tableaux equinox and\l"
# 612 "data/scripts/debug.pory"
	.string "exxon.$"
# 613 "data/scripts/debug.pory"

# 614 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_8::
# 615 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 616 "data/scripts/debug.pory"
	.string "Yunnan yunnan young for the dynamo\n"
# 617 "data/scripts/debug.pory"
	.string "coyote of the obloquy employ and\l"
# 618 "data/scripts/debug.pory"
	.string "sayyid. Zloty zloty zodiac for the gizmo\l"
# 619 "data/scripts/debug.pory"
	.string "ozone of the franz laissez and buzzing.$"
# 620 "data/scripts/debug.pory"

# 621 "data/scripts/debug.pory"

# 622 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_9::                 @ Special thanks to Nintendo for this nice pangram to test other glyphs
# 623 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 624 "data/scripts/debug.pory"
	.string "42 × 138 = 5796.\n"
# 625 "data/scripts/debug.pory"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer\l"
# 626 "data/scripts/debug.pory"
	.string "lynx at a café; voilà, they're “worth”\l"
# 627 "data/scripts/debug.pory"
	.string "♂1/♀1 = ¥1. That's 10 + 9 - 8 = 11\l"
# 628 "data/scripts/debug.pory"
	.string "Nintendo GBA can connect to a Nintendo\l"
# 629 "data/scripts/debug.pory"
	.string "GameCube console! He claimed-though I don't\l"
# 630 "data/scripts/debug.pory"
	.string "believe him-to have done so in an eyes-shut\l"
# 631 "data/scripts/debug.pory"
	.string "state…?$"
# 632 "data/scripts/debug.pory"

# 633 "data/scripts/debug.pory"
Debug_PrintFontTest::
# 634 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_1, MSGBOX_DEFAULT
# 635 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_2, MSGBOX_DEFAULT
# 636 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_3, MSGBOX_DEFAULT
# 637 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_4, MSGBOX_DEFAULT
# 638 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_5, MSGBOX_DEFAULT
# 639 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_6, MSGBOX_DEFAULT
# 640 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_7, MSGBOX_DEFAULT
# 641 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_8, MSGBOX_DEFAULT
# 642 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_9, MSGBOX_DEFAULT
# 643 "data/scripts/debug.pory"
	releaseall
# 644 "data/scripts/debug.pory"
	end
# 645 "data/scripts/debug.pory"

# 646 "data/scripts/debug.pory"
Debug_EventScript_FontTest::
# 647 "data/scripts/debug.pory"
	lockall
# 648 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
# 649 "data/scripts/debug.pory"
@	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 650 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 651 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 652 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 653 "data/scripts/debug.pory"
@	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 654 "data/scripts/debug.pory"
@	switch VAR_RESULT
# 655 "data/scripts/debug.pory"
@	case 0, Debug_EventScript_InflictStatus1_Single
# 656 "data/scripts/debug.pory"
@	case 1, Debug_EventScript_InflictStatus1_Party
# 657 "data/scripts/debug.pory"
@	case 2, Debug_EventScript_InflictStatus1_Close
# 658 "data/scripts/debug.pory"
@Debug_EventScript_InflictStatus1_Close:
# 659 "data/scripts/debug.pory"
@	releaseall
# 660 "data/scripts/debug.pory"
@	end
# 661 "data/scripts/debug.pory"

# 662 "data/scripts/debug.pory"
Debug_EventScript_TellTheTime::
# 663 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 664 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 665 "data/scripts/debug.pory"
	waitmessage
# 666 "data/scripts/debug.pory"
	closemessage
# 667 "data/scripts/debug.pory"
	end
# 668 "data/scripts/debug.pory"

# 669 "data/scripts/debug.pory"
Debug_EventScript_PrintTimeOfDay::
# 670 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 671 "data/scripts/debug.pory"
	msgbox DebugEventScript_PrintWeekday_Text_0, MSGBOX_DEFAULT
# 672 "data/scripts/debug.pory"
	waitmessage
# 673 "data/scripts/debug.pory"
	closemessage
# 674 "data/scripts/debug.pory"
	end
# 675 "data/scripts/debug.pory"

# 676 "data/scripts/debug.pory"
Debug_EventScript_FakeRTCNotEnabled::
# 677 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 678 "data/scripts/debug.pory"
	waitmessage
# 679 "data/scripts/debug.pory"
	closemessage
# 680 "data/scripts/debug.pory"
	return
# 681 "data/scripts/debug.pory"

# 682 "data/scripts/debug.pory"
Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 683 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\nenabled. Please enable it in include/\lconfig/overworld.h$"
# 684 "data/scripts/debug.pory"

# 685 "data/scripts/debug.pory"

# 686 "data/scripts/debug.pory"
Debug_EventScript_TellTheTime_Text_0:
# 687 "data/scripts/debug.pory"
	.string "Time and date:\n"
# 688 "data/scripts/debug.pory"
	.string "{STR_VAR_1}, {STR_VAR_2}:{STR_VAR_3}$"
# 689 "data/scripts/debug.pory"

# 690 "data/scripts/debug.pory"
DebugEventScript_PrintWeekday_Text_0:
# 691 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"

Debug_EventScript_Script_1::
# 695 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_1_Text_0
# 696 "data/scripts/debug.pory"
	closemessage
# 697 "data/scripts/debug.pory"
	getcharaAvailability CHARACTER_MITSURU
# 698 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_1_2
# 702 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_MITSURU
Debug_EventScript_Script_1_1:
# 704 "data/scripts/debug.pory"
	release
	end

Debug_EventScript_Script_1_2:
# 699 "data/scripts/debug.pory"
	makecharaUnavailable CHARACTER_MITSURU
	goto Debug_EventScript_Script_1_1


Debug_EventScript_Script_2::
# 709 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_2_Text_0
# 710 "data/scripts/debug.pory"
	closemessage
# 711 "data/scripts/debug.pory"
	getcharaAvailability CHARACTER_AKIHIKO
# 712 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_2_2
# 716 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_AKIHIKO
Debug_EventScript_Script_2_1:
# 718 "data/scripts/debug.pory"
	release
	end

Debug_EventScript_Script_2_2:
# 713 "data/scripts/debug.pory"
	makecharaUnavailable CHARACTER_AKIHIKO
	goto Debug_EventScript_Script_2_1


Debug_EventScript_Script_3::
# 723 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_3_Text_0
# 724 "data/scripts/debug.pory"
	closemessage
# 725 "data/scripts/debug.pory"
	getcharaAvailability CHARACTER_SHINJIRO
# 726 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_3_2
# 730 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_SHINJIRO
Debug_EventScript_Script_3_1:
# 732 "data/scripts/debug.pory"
	release
	end

Debug_EventScript_Script_3_2:
# 727 "data/scripts/debug.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
	goto Debug_EventScript_Script_3_1


Debug_EventScript_Script_4::
# 737 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_4_Text_0
# 738 "data/scripts/debug.pory"
	closemessage
# 739 "data/scripts/debug.pory"
	isfollowernpc OBJ_EVENT_GFX_MAY_NORMAL
# 740 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_4_2
# 744 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_4_Text_2
Debug_EventScript_Script_4_1:
# 746 "data/scripts/debug.pory"
	closemessage
# 747 "data/scripts/debug.pory"
	release
	end

Debug_EventScript_Script_4_2:
# 741 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_4_Text_1
	goto Debug_EventScript_Script_4_1


Debug_EventScript_Script_5::
# 752 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_6::
# 757 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_7::
# 762 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_8::
# 767 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_1_Text_0:
# 695 "data/scripts/debug.pory"
	.string "toggle mitsuru$"

Debug_EventScript_Script_2_Text_0:
# 709 "data/scripts/debug.pory"
	.string "toggle akihiko$"

Debug_EventScript_Script_3_Text_0:
# 723 "data/scripts/debug.pory"
	.string "toggle shinjiro$"

Debug_EventScript_Script_4_Text_0:
# 737 "data/scripts/debug.pory"
	.string "checking if follower npc is mitsuru$"

Debug_EventScript_Script_4_Text_1:
# 741 "data/scripts/debug.pory"
	.string "follower is mitsuru$"

Debug_EventScript_Script_4_Text_2:
# 744 "data/scripts/debug.pory"
	.string "follower isnt mitsuru$"
