#include "context.h"

struct func_80240B24_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
};

struct func_80240B24_Local {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
};

extern s32 func_801C3044();
extern void func_801C2F0C(s32 arg0, s16 *arg1);
extern u8 D_801BBFAC[];
extern void func_80240BA0();

void func_80240B24(struct func_80240B24_Struct *arg0, s32 arg1) {
    u8 pad[0x10];
    struct func_80240B24_Local sp;

    if (func_801C3044() == 0) {
        sp.unk0 = 0x1000;
        sp.unk4 = 0x0410002C;
        sp.unkC = 0x1E;
        sp.unk8 = 4.0f;
        func_801C2F0C(5, &sp.unk0);
        arg0->unk3C = 0;
        D_801BBFAC[0x78] = 4;
        func_800058DC(arg0, (void *)func_80240BA0);
    }
}
