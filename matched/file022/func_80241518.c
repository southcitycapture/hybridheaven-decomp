#include "context.h"

typedef struct func_80241518_Inner {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x4B - 0xC];
    u8 unk4B;
} func_80241518_Inner;
typedef struct func_80241518_Obj {
    u8 pad0[0x30];
    func_80241518_Inner *unk30;
} func_80241518_Obj;

extern f32 D_80252540;
extern f32 D_80252544;

void func_80241518(func_80241484_Struct_Arg0 *arg0, func_80241518_Obj **arg1) {
    s32 i;
    f32 hi;
    f32 lim;

    hi = D_80252540;
    lim = D_80252544;
    for (i = 0; i < 5; i++) {
        arg1[i]->unk30->unk8 += 0.125;
        if (lim <= arg1[i]->unk30->unk8) {
            arg1[i]->unk30->unk8 = hi;
            if (lim == 0.125) {
            }
        }
    }
    if (arg0->unk92 != 0) {
        for (i = 0; i < 5; i++) {
            arg1[i]->unk30->unk4B = 0;
        }
        D_801BCCA8->unk92 = 1;
        arg0->unk92 = 0x14;
        func_80020744(0x64F);
        func_800058DC((s32)arg0, func_8024162C);
    }
}
