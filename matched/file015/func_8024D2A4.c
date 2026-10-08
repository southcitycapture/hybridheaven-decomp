#include "common.h"

struct func_8024D2A4_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};

struct func_8024D2A4_Top {
    u8 pad[0xDC];
    struct func_8024D2A4_Sub *unkDC;
};

extern s32 func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FBB30(void);
extern void func_8024D384(void);
extern struct func_8024D2A4_Top D_801BBBF0;
extern u8 D_802541F4[];
extern u8 D_802542B0[];
extern s32 D_8025A2E0;

void func_8024D2A4(void *arg0, void *arg1) {
    if ((func_801C3D20(540.0f, -60.0f, 25.0f) != 0) || (func_801C3D20(560.0f, -100.0f, 25.0f) != 0)) {
        func_80133980(0x7E);
        func_801339D0(0x73);
        func_801339D0(0x77);
        D_8025A2E0 = func_80005670(arg0, D_802541F4);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        func_801C3B2C(2);
        func_801C3B10(1);
        func_800179B0(D_802542B0);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_801FBB30();
        func_800058DC(arg0, func_8024D384);
    }
}
