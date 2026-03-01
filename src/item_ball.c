#include "global.h"
#include "item_ball.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/items.h"
#include "constants/trainer_types.h"
#include "constants/vars.h"

static u32 GetItemBallAmountFromTemplate(u32);
static u32 GetItemBallIdFromTemplate(u32);
static u32 GetTrainerPointGainFromTemplate(u32);
static u32 GetMoneyFoundFromTemplate(u32);

static u32 GetItemBallAmountFromTemplate(u32 itemBallId)
{
    u32 amount = gMapHeader.events->objectEvents[itemBallId].movementRangeX;

    if (amount > MAX_BAG_ITEM_CAPACITY)
        return MAX_BAG_ITEM_CAPACITY;

    return (amount == 0) ? 1 : amount;
}

static u32 GetTrainerPointGainFromTemplate(u32 itemBallId)
{
    u16 chest = gMapHeader.events->objectEvents[itemBallId].graphicsId;
    if (chest == OBJ_EVENT_GFX_POKE_CHEST)
        return POKECHEST_TP;
    else if (chest == OBJ_EVENT_GFX_GREAT_CHEST)
        return GREATCHEST_TP;
    else if (chest == OBJ_EVENT_GFX_ULTRA_CHEST)
        return ULTRACHEST_TP;
    else
        return gMapHeader.events->objectEvents[itemBallId].trainerpoint;
}

static u32 GetMoneyFoundFromTemplate(u32 itemBallId)
{
    u16 chest = gMapHeader.events->objectEvents[itemBallId].graphicsId;
    u16 baseAmount = gMapHeader.events->objectEvents[itemBallId].movementRangeY;
    
    if (chest == OBJ_EVENT_GFX_ULTRA_CHEST)
        return ( baseAmount * 1000);
    if (chest == OBJ_EVENT_GFX_GREAT_CHEST)
        return (baseAmount * 500);
    else
        return (baseAmount * 100);
}

static u32 GetItemBallIdFromTemplate(u32 itemBallId)
{
    enum Item itemId = gMapHeader.events->objectEvents[itemBallId].trainerRange_berryTreeId;

    return (itemId >= ITEMS_COUNT) ? (ITEM_NONE + 1) : itemId;
}

void Script_IsChestItem (void)
{
    u32 itemBallId = (gSpecialVar_LastTalked - 1);
    u16 chest = gMapHeader.events->objectEvents[itemBallId].graphicsId;
    if (chest == OBJ_EVENT_GFX_POKE_CHEST
    || chest == OBJ_EVENT_GFX_GREAT_CHEST
    || chest == OBJ_EVENT_GFX_ULTRA_CHEST)
        gSpecialVar_Result = TRUE;
}

bool8 IsChestItemOpened(u32 itemBallId)
{
    return FlagGet(gMapHeader.events->objectEvents[itemBallId].questId);
}

void SetChestItemFlag(void)
{
    u32 itemBallId = (gSpecialVar_LastTalked - 1);
    FlagSet(gMapHeader.events->objectEvents[itemBallId].questId);
}


void ClearChestItemFlag(void)
{
    u32 itemBallId = (gSpecialVar_LastTalked - 1);
    FlagClear(gMapHeader.events->objectEvents[itemBallId].questId);
}

void GetItemBallIdAndAmountFromTemplate(void)
{
    u32 itemBallId = (gSpecialVar_LastTalked - 1);
    gSpecialVar_Result = GetItemBallIdFromTemplate(itemBallId);
    gSpecialVar_0x8009 = GetItemBallAmountFromTemplate(itemBallId);
    gSpecialVar_0x800A = IsChestItemOpened(itemBallId);
    VarSet(VAR_TEMP_A, GetMoneyFoundFromTemplate(itemBallId));
    VarSet(VAR_TEMP_B, GetTrainerPointGainFromTemplate(itemBallId));
}
