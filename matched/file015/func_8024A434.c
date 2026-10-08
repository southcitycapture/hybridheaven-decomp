#include "common.h"

struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};

struct func_8024A434_Arg {
    u8 pad[0x3C];
    s16 unk3C;
};

struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};

extern s32 func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FBB30(void);
extern struct func_8024A434_StructBBF0 D_801BBBF0;
extern void *D_80253474;
extern s32 D_8025A2C0;
extern void func_8024A4EC(void);

void func_8024A434(struct func_8024A434_Arg *arg0, s32 arg1) {
    if (func_801C3D20(-380.0f, -540.0f, 40.0f) != 0) {
        func_80133980(0x76);
        func_801339D0(0x73);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        D_8025A2C0 = func_80005670(arg0, &D_80253474);
        arg0->unk3C = 0;
        func_801FBB30();
        func_80020718(7);
        func_800058DC(arg0, &func_8024A4EC);
    }
}
