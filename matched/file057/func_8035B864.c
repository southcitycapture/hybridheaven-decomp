#include "context.h"

typedef struct func_8035B864_S2 {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    f32 unkC;
} func_8035B864_S2;

typedef struct func_8035B864_S1 {
    u8 pad0[0x2C];
    func_8035B864_S2 *unk2C;
} func_8035B864_S1;

typedef struct func_8035B864_S0 {
    u8 pad0[0x24];
    func_8035B864_S1 *unk24;
} func_8035B864_S0;

typedef struct func_8035B864_Arg {
    u8 pad0[0xC];
    func_8035B864_S0 *unkC;
    u8 pad1[0x3E - 0x10];
    u16 unk3E;
} func_8035B864_Arg;

typedef struct func_8035B864_Glob {
    u8 pad0[0x31];
    u8 unk31;
} func_8035B864_Glob;

extern f32 D_8038A080;

void func_8035B864(func_8035B864_Arg *arg0, s32 arg1) {
    func_8035B864_S2 *temp;
    func_8035B864_Glob *g;

    temp = arg0->unkC->unk24->unk2C;
    if (((func_8035B864_Glob *)D_8038CC14)->unk31 == 1) {
        func_80020718(0x107);
        arg0->unk3E = 1;
        ((func_8035B864_Glob *)D_8038CC14)->unk31 = 2;
        func_802254F8(arg0, 0x32, 0);
    }
    if (arg0->unk3E == 0) {
        func_801CE4D4(arg0, 0x23, temp->unk4, temp->unk8, temp->unkC, 0xA0, 0x40, 0xFF, 0xFF, 0x80, 0x80, 0xA0, 0xC0, 0xFF, 0x20, 0x18, 0x32, D_8038A080, 1);
    }
    if (arg0->unk3E++ >= 0x33) {
        func_800058DC(arg0, func_8035B234);
    }
}
