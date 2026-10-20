#include "context.h"

typedef struct func_8024373C_S {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    s32 unk5C;
    u8 pad60[0x9C - 0x60];
    s16 unk9C;
} func_8024373C_S;
extern s32 func_8012CE9C(s32, s32, func_8024373C_V, s32);
extern void func_802431C4();
extern void func_8013A1B4();
extern f64 D_80249B50;
extern f64 D_80249B58;

void func_8024373C(func_8024373C_S *arg0, s32 arg1) {
    s32 a5c;
    f32 d;

    a5c = arg0->unk5C;
    d = (f64)((f32)arg0->unk9C - (arg0->unk24->unk2C->unk4 + arg0->unk24->unk2C->unkC)) * D_80249B50;
    arg0->unk24->unk2C->unk4 += d;
    arg0->unk24->unk2C->unkC += d;
    if (func_8012CE9C(arg1, a5c, *(func_8024373C_V *)D_80246C64, 3) == 0) {
        if (!(D_80249B58 < (f64)((d < 0.0f) ? -d : d))) {
            func_8013A1B4(arg1, *(func_8024373C_V *)D_80246C64, 0x1FFFFF);
            func_80010550(arg1, a5c);
            func_800058DC(arg0, func_802431C4);
        }
    }
}
