#include "context.h"

extern u8 D_802591F0[];
extern s32 D_801C2F0C(s32, void *);
void func_8024A780(s32 arg0, s32 arg1);
extern f32 D_802592E4;
extern f32 D_802592E8;
extern f32 D_802592EC;
extern f32 D_802592F0;
extern f32 D_802592F4;

typedef struct {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_8024A644_StructG;

#define GG ((func_8024A644_StructG *)&D_801BBBF0)

void func_8024A644(s32 arg0, s32 arg1) {
    struct { s16 unk00; s32 unk04; f32 unk08; u8 pad[0x14]; } sp;

    if (func_800178E8() != 0) {
        func_80133980(0x73);
        sp.unk00 = 0x1100;
        sp.unk04 = 0x0348007A;
        sp.unk08 = 10.0f;
        D_801C2F0C(4, &sp);
        GG->unk1E8 = D_802592E4;
        GG->unk1EC = D_802592E8;
        GG->unk1F0 = D_802592EC;
        GG->unk1F4 = -75.0f;
        GG->unk1F8 = D_802592F0;
        GG->unk1FC = D_802592F4;
        func_8011AAF4(D_802591F0, 0x143, (void *)arg0, 0, 1, 0.0f, GG->unk1E8, GG->unk1EC, GG->unk1F0, 0.0f, GG->unk1F4, GG->unk1F8, GG->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800058DC((void *)arg0, (void *)func_8024A780);
    }
}
