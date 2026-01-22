#ifndef GUARD_DEXNAV_H
#define GUARD_DEXNAV_H

#include "config/dexnav.h"

// GUI Info
enum RowGUIInfo
{
    ROW_WATER,
    ROW_LAND_TOP,
    ROW_LAND_BOT,
    ROW_HIDDEN,
    ROW_FISHING,
    ROWS_COUNT
};

#define ROW_WATER_ICON_X        20
#define ROW_WATER_ICON_Y        36

#define ROW_LAND_ICON_X         20
#define ROW_LAND_TOP_ICON_Y     72
#define ROW_LAND_BOT_ICON_Y     (ROW_LAND_TOP_ICON_Y + 28)

#define ROW_HIDDEN_ICON_X       19
#define ROW_HIDDEN_ICON_Y       138

#define ROW_FISHING_ICON_X       60
#define ROW_FISHING_ICON_Y       138

enum EncounterType
{
    ENCOUNTER_TYPE_LAND,
    ENCOUNTER_TYPE_WATER,
    ENCOUNTER_TYPE_FISHING,
    ENCOUNTER_TYPE_HIDDEN // Get from species
};

#define COL_WATER_COUNT         5
#define COL_LAND_COUNT          5
#define COL_HIDDEN_COUNT        1
#define COL_FISHING_COUNT       3

#define COL_WATER_MAX           (COL_WATER_COUNT - 1)
#define COL_LAND_MAX            (COL_LAND_COUNT - 1)
#define COL_HIDDEN_MAX          (COL_HIDDEN_COUNT - 1)
#define COL_FISHING_MAX         (COL_FISHING_COUNT - 1)

// SEARCH INFO
#define SCANSTART_X             0
#define SCANSTART_Y             0
#define SCANSIZE_X              12
#define SCANSIZE_Y              12

#define SPECIES_INFO_Y          2
#define TYPE_ICONS_Y            (SPECIES_INFO_Y + 47)
#define SEARCH_LEVEL_Y          0//unused
#define HA_INFO_Y               (TYPE_ICONS_Y)
#define CHAIN_BONUS_Y           (HA_INFO_Y + 24)

#define MON_LEVEL_NONEXISTENT   255 // If mon not in area GetEncounterLevel returns this to exit the search

// GUI tags
#define ICON_PAL_TAG            56000
#define SILOUETTE_PAL_TAG       56001
#define ICON_GFX_TAG            55130
#define SELECTION_CURSOR_TAG    0x4005
#define CAPTURED_ALL_TAG        0x4002

// Search tags
#define OWNED_ICON_TAG          0x4003
#define HIDDEN_SEARCH_TAG       SELECTION_CURSOR_TAG
#define HIDDEN_MON_ICON_TAG     0x4006
#define LIT_STAR_TILE_TAG       0x4010
#define HELD_ITEM_TAG           0xd750

// DexNav search variable
#define DEXNAV_MASK_SPECIES         0x3FFF  // First 14 bits
#define DEXNAV_MASK_ENVIRONMENT     0xC000  // Last two bit

void EndDexNavSearch(void);
void Task_OpenDexNavFromStartMenu(u8 taskId);
bool32 TryStartDexNavSearch(void);
void TryIncrementSpeciesSearchLevel(void);
void ResetDexNavSearch(void);
bool32 TryFindHiddenPokemon(void);
u32 CalculateDexNavShinyRolls(void);
void IncrementDexNavChain(void);
bool32 OnStep_DexNavSearch(void);
//void StartDexNavFishingBattle(void);

extern u16 gDexNavSpecies;

#endif // GUARD_DEXNAV_H
