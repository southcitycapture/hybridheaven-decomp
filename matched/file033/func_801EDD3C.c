#include "context.h"

extern f64 D_801F4AE0;
extern f32 D_801F4AE8;
extern s32 func_801D5998(s32, s32);

#define CHAIN ((func_801EBC00_Struct2 *)ROOT->unk8->unk8->unk8)

s32 func_801EDD3C(s32 arg0, s32 arg1) {
    u64 t;
    func_801EBC00_Struct *p;

    if (D_801F362C == 0) goto c0;
    if (D_801F362C == 1) goto c1;
    return 0x13;
c0:
    func_801CC470(2, 0x03200052, 0, 0x1100, 4.0f);
    func_801C0D04(4, 2);
    D_801F362C = 1;
    goto done;
c1:
    if (func_801C0DE4(4, 2, 0x40000000) != 0) {
        func_801C0EB0(4, 2);
        func_801D5938(0);
        func_801CC4D8(2, 0x03200051, 0, 0, 15.0f);
        return 0x14;
    }
    t = func_801C0F18(4, 2);
    CHAIN->unk24->unk2C->unk4 = (f32)(func_80034C24(t) / D_801F4AE0) * 0.5f * -13.0f + 35.0f;
    if (func_801D5998(0x03200052, 0x18) != 0 || func_801D5998(0x03200052, 0x38) != 0) {
        p = CHAIN->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x678, D_801F4AE8, 1.0f);
    }
done:
    return 0x13;
}
