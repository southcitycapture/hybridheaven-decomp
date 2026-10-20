#include "context.h"

extern s32 func_801D277C();
extern f32 D_801F5A40;
extern f32 D_801F5A44;
extern f32 D_801F5A64;
extern f32 D_801F5A68;

#define OBJ ((func_801ED14C_Struct0 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 8) + 8) + 0x24) + 0x2C)))

s32 func_801F0AEC(s32 arg0, s32 arg1) {
    f32 d;
    func_801ED14C_Struct0 *o;
    u32 n;

    if (D_801F4D08 == 0) goto c0;
    if (D_801F4D08 == 1) goto c1;
    if (D_801F4D08 == 2) goto c2;
    return 9;
c0:
    d = (f32)2.0;
    n = (u32)(d * 30.0f);
    o = OBJ;
    D_801F5A64 = (31.5f - o->unk4) / (f32)n;
    D_801F5A68 = (D_801F5A40 - o->unkC) / (f32)n;
    func_801CC470(2, 0x01680003, 0, 0x1100, 1.0f);
    func_801C0D04(4, 2);
    D_801F4D08 = 1;
    goto done;
c1:
    if (func_801C0DE4(4, 2, 0x40000000) != 0) {
        func_801C0EB0(4, 2);
        func_801CC4D8(2, 0x03200000, 0, 0, 15.0f);
        D_801F4D08 = 2;
    }
    OBJ->unk4 = OBJ->unk4 + D_801F5A64;
    OBJ->unkC = OBJ->unkC + D_801F5A68;
    if (func_801D27D8(0x01680003, 0x14) != 0 || func_801D27D8(0x01680003, 0x28) != 0) {
        func_8038D33C(OBJ->unk4, OBJ->unk8, *(s32 *)&OBJ->unkC, 0x679, D_801F5A44, 1.0f);
        return 9;
    }
    goto done;
c2:
    if (func_801D277C() == 0) {
        return 0xA;
    }
done:
    return 9;
}
