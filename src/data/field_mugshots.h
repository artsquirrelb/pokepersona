/*static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");
*/
static const u32 sFieldMugshotGfx_AkihikoNormal[] = INCBIN_U32("graphics/field_mugshots/Akihiko/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_AkihikoHappy[] = INCBIN_U32("graphics/field_mugshots/Akihiko/happy.4bpp.lz");
static const u32 sFieldMugshotGfx_AkihikoSad[] = INCBIN_U32("graphics/field_mugshots/Akihiko/sad.4bpp.lz");
static const u32 sFieldMugshotGfx_AkihikoMad[] = INCBIN_U32("graphics/field_mugshots/Akihiko/mad.4bpp.lz");
static const u32 sFieldMugshotGfx_AkihikoDoubt[] = INCBIN_U32("graphics/field_mugshots/Akihiko/doubt.4bpp.lz");
static const u32 sFieldMugshotGfx_AkihikoSurprised[] = INCBIN_U32("graphics/field_mugshots/Akihiko/surprised.4bpp.lz");
static const u32 sFieldMugshotGfx_AkihikoTired[] = INCBIN_U32("graphics/field_mugshots/Akihiko/tired.4bpp.lz");
static const u32 sFieldMugshotGfx_AkihikoDarkened[] = INCBIN_U32("graphics/field_mugshots/Akihiko/darkened.4bpp.lz");
static const u32 sFieldMugshotGfx_AkihikoSmile[] = INCBIN_U32("graphics/field_mugshots/Akihiko/smile.4bpp.lz");

static const u16 sFieldMugshotPal_AkihikoNormal[] = INCBIN_U16("graphics/field_mugshots/Akihiko/normal.gbapal");
static const u16 sFieldMugshotPal_AkihikoHappy[] = INCBIN_U16("graphics/field_mugshots/Akihiko/happy.gbapal");
static const u16 sFieldMugshotPal_AkihikoSad[] = INCBIN_U16("graphics/field_mugshots/Akihiko/sad.gbapal");
static const u16 sFieldMugshotPal_AkihikoMad[] = INCBIN_U16("graphics/field_mugshots/Akihiko/mad.gbapal");
static const u16 sFieldMugshotPal_AkihikoDoubt[] = INCBIN_U16("graphics/field_mugshots/Akihiko/doubt.gbapal");
static const u16 sFieldMugshotPal_AkihikoSurprised[] = INCBIN_U16("graphics/field_mugshots/Akihiko/surprised.gbapal");
static const u16 sFieldMugshotPal_AkihikoTired[] = INCBIN_U16("graphics/field_mugshots/Akihiko/tired.gbapal");
static const u16 sFieldMugshotPal_AkihikoDarkened[] = INCBIN_U16("graphics/field_mugshots/Akihiko/darkened.gbapal");
static const u16 sFieldMugshotPal_AkihikoSmile[] = INCBIN_U16("graphics/field_mugshots/Akihiko/smile.gbapal");


struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_AKIHIKO] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_AkihikoNormal,
            .pal = sFieldMugshotPal_AkihikoNormal,
        },

        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_AkihikoHappy,
            .pal = sFieldMugshotPal_AkihikoHappy,
        },

        [EMOTE_SAD] =
        {
            .gfx = sFieldMugshotGfx_AkihikoSad,
            .pal = sFieldMugshotPal_AkihikoSad,
        },

        [EMOTE_MAD] =
        {
            .gfx = sFieldMugshotGfx_AkihikoMad,
            .pal = sFieldMugshotPal_AkihikoMad,
        },

        [EMOTE_TIRED] =
        {
            .gfx = sFieldMugshotGfx_AkihikoTired,
            .pal = sFieldMugshotPal_AkihikoTired,
        },

        [EMOTE_SURPRISED] =
        {
            .gfx = sFieldMugshotGfx_AkihikoSurprised,
            .pal = sFieldMugshotPal_AkihikoSurprised,
        },

        [EMOTE_DOUBT] =
        {
            .gfx = sFieldMugshotGfx_AkihikoDoubt,
            .pal = sFieldMugshotPal_AkihikoDoubt,
        },

        [EMOTE_DARKENED] =
        {
            .gfx = sFieldMugshotGfx_AkihikoDarkened,
            .pal = sFieldMugshotPal_AkihikoDarkened,
        },

        [EMOTE_SMILE] =
        {
            .gfx = sFieldMugshotGfx_AkihikoSmile,
            .pal = sFieldMugshotPal_AkihikoSmile,
        },

    },
};