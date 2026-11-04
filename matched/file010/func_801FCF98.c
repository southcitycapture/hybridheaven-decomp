#include "common.h"
extern u8 D_801BBC0D;
extern s32 (*D_802171F0[])();


struct func_801FCF98_Inner {
    u8 pad0[0x10];
    u32 unk10;
    u8 pad14[4];
    u32 unk18;
};
struct func_801FCF98_Struct {
    u8 pad0[0x38];
    struct func_801FCF98_Inner *unk38;
    u8 pad3C[0x94 - 0x3C];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    s16 unkA2;
};
extern void func_80133980(s32);
extern s32 func_80133A24(s32, void *);
extern s32 func_8014ADB4(f32, f32, f32, s32, s32, s32, s32);
extern void func_8014B36C(s32);

void func_801FCF98(struct func_801FCF98_Struct *arg0) {
    u16 pad;
    u16 sp;
    u8 a3;
    s32 arg2;
    u32 hi;
    u32 lo;

    if (arg0->unk38 != NULL) {
        hi = arg0->unk38->unk18 >> 16;
        if (hi == 0) {
            a3 = 3;
            sp = (arg0->unk38->unk10 >> 8) & 0xFF;
        } else {
            sp = hi;
            arg2 = (arg0->unk38->unk10 >> 8) & 0xFF;
            if (arg2 == 0) {
                a3 = 3;
            } else {
                a3 = arg2;
            }
        }
        pad = sp;
        if ((arg0->unk38->unk10 & 0xFF) &&
            (sp == 0 || func_80133A24(sp, arg0) == 0 || !((u16)(arg0->unk38->unk10 >> 16) & 8)) &&
            a3 >= D_801BBC0D + 1) {
            lo = arg0->unk38->unk18 & 0xFFFF;
            if (lo == 0) {
                func_8014B36C(func_8014ADB4(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unkA2, 0, arg0->unk38->unk10 & 0xFF, 3) & 0xFFFF);
            } else {
                func_8014ADB4(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unkA2, lo, arg0->unk38->unk10 & 0xFF, 0);
            }
        }
        if (pad) {
            func_80133980(pad);
        }
    }
}
