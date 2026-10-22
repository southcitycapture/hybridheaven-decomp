#include "context.h"

struct func_803753C4_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x4C - 0x30];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 *unk54;
    struct func_803753C4_Obj2 *unk58;
    u8 pad5C[2];
    s16 unk5E;
};
struct func_803753C4_Obj2 {
    u8 pad0[8];
    void *unk8;
};
struct func_803753C4_Bits {
    u8 pad0[0x30];
    u32 a : 9;
    u32 b : 2;
    u32 c : 21;
};
struct func_803753C4_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad[0x1118 - 0xE0];
    struct func_803753C4_Obj *unk1118;
};
extern void func_8037532C();

void func_803753C4(s32 arg0, s32 arg1, s32 arg2) {
    s32 a1;
    struct func_803753C4_Obj2 *t1;
    u8 *t2;
    struct func_803753C4_Bits *t0;
    u8 a2;
    extern s32 func_80374994();

    a1 = ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk2C;
    t1 = ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk58;
    t2 = ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk54;
    if (a1 == ((struct func_803753C4_G *)D_801BBBF0)->unkDC) {
        t0 = (struct func_803753C4_Bits *)D_801BC03C;
    } else {
        t0 = (struct func_803753C4_Bits *)D_801BC3D8;
    }
    if (func_80374994(arg0 * 1, a1, arg2, arg0) != 0) {
        if (t1->unk8 == NULL) {
            ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk5E = 0;
            if (t2[1] & 4) {
                func_800058DC(arg0, func_80374CE4);
                return;
            }
            func_800058DC(arg0, func_80374BAC);
            return;
        }
        a2 = ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk4C;
        if (t0->b == 3) {
            a2 = (a2 ^ 1) & 0xFF;
        }
        if (func_80374E88(a1, t1->unk8, a2) == 0) {
            ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk5E = 0;
            if (t2[1] & 4) {
                func_800058DC(arg0, func_80374CE4);
                return;
            }
            func_800058DC(arg0, func_80374BAC);
            return;
        }
        ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk58 = t1->unk8;
        func_800058DC(arg0, func_8037532C);
    }
}
