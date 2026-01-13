#include "global.h"
#include "script.h"
#include "event_data.h"
#include "mystery_gift.h"
#include "util.h"
#include "constants/event_objects.h"
#include "constants/map_scripts.h"
#include "main_menu.h"
#include "main.h"
#include "random.h"
#include "battle_setup.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "field_weather.h"
#include "new_game.h"
#include "start_menu.h"
#include "constants/metatile_labels.h"
#include "fieldmap.h"
#include "field_screen_effect.h"
#include "overworld.h"
#include "event_scripts.h"
#include "sound.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "data.h"
#include "constants/battle.h"
#include "event_object_movement.h"
#include "script_pokemon_util.h"
#include "palette.h"
#include "decompress.h"
#include "window.h"
#include "text.h"
#include "menu.h"
#include "gpu_regs.h"
#include "constants/weather.h"
#include "global.fieldmap.h"
#include "tilesets.h"
#include "constants/decorations.h"
#include "decoration_inventory.h"
#include "decoration.h"
#include "pokedex.h"
#include "pokedex_plus_hgss.h"
#include "field_player_avatar.h"
#include "naming_screen.h"
#include "config/general.h"
#include "overworld.h"

//
//  Overworld Trainers Left HUD
//

static void Task_DelayPrintOverworldTrainerHUD(u8 taskId);
//static void Task_DelayPrintOverworldMonHUD(u8 taskId);
//static void PrintTrainerCount(u32 spriteId, u32 bgColor, u32 startTile);
//void MonHUDSpriteCallback(struct Sprite *sprite);


static EWRAM_DATA u8 gOWHUDSprite;
static EWRAM_DATA u8 gOWHUDSpriteMask;
//static EWRAM_DATA u8 gOWMonHUDSprite;
//static EWRAM_DATA u8 gOWMonHUDSpriteMask;
static const u32 sTrainerCountGfx[] = INCBIN_U32("graphics/interface/trainercount_hud.4bpp.smol");
//static const u32 sMonRewardGfx[] = INCBIN_U32("graphics/interface/monreward_hud.4bpp.smol");

static const u16 sTrainerCountPal[] = INCBIN_U16("graphics/interface/trainercount_hud.gbapal");

#define TRAINER_COUNT_PAL_TAG       OBJ_EVENT_PAL_TAG_EMOTES // Shares the same pal as overworld emotes
#define TAG_TRAINER_COUNT_GFX       30050
//#define TAG_MON_REWARD_GFX          30051

static const struct SpritePalette sSpritePal_TrainerCountHUD =
{
    .data = sTrainerCountPal,
    .tag = TRAINER_COUNT_PAL_TAG,
};

static const struct CompressedSpriteSheet sSpriteSheet_TrainerCountHUD = 
{
    .data = sTrainerCountGfx,
    .size = 32*32*1/2,
    .tag = TAG_TRAINER_COUNT_GFX,
};

/*static const struct CompressedSpriteSheet sSpriteSheet_MonRewardHUD = 
{
    .data = sMonRewardGfx,
    .size = 16*32*1/2,
    .tag = TAG_MON_REWARD_GFX,
};*/

static const union AnimCmd sSpriteAnim_TrainerCountHUD0[] =
{
    ANIMCMD_FRAME(0, 60),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sSpriteAnimTable_TrainerCountHUD[] =
{
    sSpriteAnim_TrainerCountHUD0,
};

static const struct OamData sOamData_TrainerCountHUD =
{
    .size = SPRITE_SIZE(32x32),
    .shape = SPRITE_SHAPE(32x32),
    .priority = 0,
};

/*static const struct OamData sOamData_MonRewardHUD =
{
    .size = SPRITE_SIZE(16x32),
    .shape = SPRITE_SHAPE(16x32),
    .priority = 1,
};*/

static const struct SpriteTemplate sSpriteTemplate_TrainerCountHUD =
{
    .tileTag = TAG_TRAINER_COUNT_GFX,
    .paletteTag = TRAINER_COUNT_PAL_TAG,
    .oam = &sOamData_TrainerCountHUD,
    .anims = sSpriteAnimTable_TrainerCountHUD,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

/*static const struct SpriteTemplate sSpriteTemplate_MonRewardHUD =
{
    .tileTag = TAG_MON_REWARD_GFX,
    .paletteTag = TRAINER_COUNT_PAL_TAG,
    .oam = &sOamData_MonRewardHUD,
    .anims = sSpriteAnimTable_TrainerCountHUD,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = MonHUDSpriteCallback
};*/


void CreateOverworldTalkHUD(void)
{
    if(FuncIsActiveTask(Task_DelayPrintOverworldTrainerHUD))
        return;
    CreateTask(Task_DelayPrintOverworldTrainerHUD, 15);
}

static void Task_DelayPrintOverworldTrainerHUD(u8 taskId)
{
    if (!gPaletteFade.active)
    {   if (FlagGet(FLAG_HIDE_HELP_BUTTON) == FALSE){
        LoadCompressedSpriteSheet(&sSpriteSheet_TrainerCountHUD);
        LoadSpritePalette(&sSpritePal_TrainerCountHUD);
        gOWHUDSprite = SPRITE_NONE;
        gOWHUDSprite = CreateSprite(&sSpriteTemplate_TrainerCountHUD, 16, 144, 0);
        gSprites[gOWHUDSprite].invisible = FALSE;

        //PrintTrainerCount(gOWHUDSprite, 0, gSprites[gOWHUDSprite].oam.tileNum + 5);

            if (GetFlashLevel() > 0)
            {
            SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_OBJWIN_ON);
            SetGpuRegBits(REG_OFFSET_WINOUT, WINOUT_WINOBJ_OBJ);
            gOWHUDSpriteMask = SPRITE_NONE;
            gOWHUDSpriteMask = CreateSprite(&sSpriteTemplate_TrainerCountHUD, 19, 146, 0);
            gSprites[gOWHUDSpriteMask].invisible = FALSE;
            gSprites[gOWHUDSpriteMask].oam.objMode = ST_OAM_OBJ_WINDOW;
            }
        DestroyTask(taskId);
        }
    }
}


/*void CreateOverworldMonHUD(void)
{
    if(FuncIsActiveTask(Task_DelayPrintOverworldMonHUD))
        return;
    CreateTask(Task_DelayPrintOverworldMonHUD, 15);
}

static void Task_DelayPrintOverworldMonHUD(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_MonRewardHUD);
        LoadSpritePalette(&sSpritePal_TrainerCountHUD);
        gOWMonHUDSprite = SPRITE_NONE;
        gOWMonHUDSprite = CreateSprite(&sSpriteTemplate_MonRewardHUD, 14, 14, 0);
        gSprites[gOWMonHUDSprite].invisible = FALSE;

        if (GetFlashLevel() > 0)
        {
            SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_OBJWIN_ON);
            SetGpuRegBits(REG_OFFSET_WINOUT, WINOUT_WINOBJ_OBJ);
            gOWMonHUDSpriteMask = SPRITE_NONE;
            gOWMonHUDSpriteMask = CreateSprite(&sSpriteTemplate_MonRewardHUD, 14, 14, 0);
            gSprites[gOWMonHUDSpriteMask].invisible = FALSE;
            gSprites[gOWMonHUDSpriteMask].oam.objMode = ST_OAM_OBJ_WINDOW;
        }
        DestroyTask(taskId);
    }
}

void MonHUDSpriteCallback(struct Sprite *sprite)
{
        DestroySprite(sprite);

}*/

/*static const struct WindowTemplate sTrainerCountWindowTemplate = {
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 7,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 1 + 120
};

static u8 *AddTextPrinterAndCreateWindowOnTrainerCount(const u8 *str, u32 x, u32 y, u32 bgColor, u32 *windowId)
{
    u16 winId;
    u8 color[3];
    struct WindowTemplate winTemplate = sTrainerCountWindowTemplate;

    winId = AddWindow(&winTemplate);
    FillWindowPixelBuffer(winId, PIXEL_FILL(bgColor));

    color[0] = bgColor;
    color[1] = 1;
    color[2] = 15;

    AddTextPrinterParameterized4(winId, FONT_SHORT, x, y, 0, 0, color, TEXT_SKIP_DRAW, str);

    *windowId = winId;
    return (u8 *)(GetWindowAttribute(winId, WINDOW_TILE_DATA));
}

static void TextIntoTrainerCountObject(void *dest, u8 *windowTileData, u32 windowWidth)
{
    CpuCopy32(windowTileData, dest, windowWidth * TILE_SIZE_4BPP);
    CpuCopy32(windowTileData + (4 * TILE_SIZE_4BPP), dest + (5 * TILE_SIZE_4BPP), windowWidth * TILE_SIZE_4BPP);
}

static const u8 sText_TrainerCountPrefix[]         = _("Talk");
static void PrintTrainerCount(u32 spriteId, u32 bgColor, u32 startTile) // 0xbc0 for one part of the TrainerCount
{
    u8 *windowTileData;
    u32 windowId;

    void *objVram = (void *)(OBJ_VRAM0);
    windowTileData = AddTextPrinterAndCreateWindowOnTrainerCount(sText_TrainerCountPrefix, 2, 0, bgColor, &windowId);
    TextIntoTrainerCountObject(objVram + (startTile * TILE_SIZE_4BPP), windowTileData, 7);
    RemoveWindow(windowId);
}*/

void HideHelpButton (void)
{
    gSprites[gOWHUDSprite].invisible = TRUE;
}

void ShowHelpButton (void)
{
    if (FlagGet(FLAG_HIDE_HELP_BUTTON) == FALSE){
        gSprites[gOWHUDSprite].invisible = FALSE;
    }
}