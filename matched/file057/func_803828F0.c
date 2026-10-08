#include "common.h"

typedef struct func_803828F0_Struct {
    u8 unk[7];
} func_803828F0_Struct;

typedef struct func_803828F0_Obj {
    u8 pad0[0xB0];
    s16 unkB0;
} func_803828F0_Obj;

extern u16 D_80089474[];
extern u8 D_801BC03C[];
extern func_803828F0_Struct D_80389BC4;
extern func_803828F0_Struct D_80389BCC;
extern func_803828F0_Struct D_80389BD4;

void *func_800058DC(void *, void *);
void func_80382A24(void);
void func_803821B0(void *, s32, s32, s32, s32, s32, s32, s8 *);
void func_803822F0(void *, s32, s32, s32, s32, s32, s32, s8 *);

void func_803828F0(void *arg0, void *arg1) {
    s8 sp4F;
    u8 sp4E;
    func_803828F0_Struct sp44;
    func_803828F0_Struct sp3C;
    func_803828F0_Struct sp34;
    s16 temp_v0;

    sp4F = 0;
    sp44 = D_80389BC4;
    sp3C = D_80389BCC;
    sp34 = D_80389BD4;
    temp_v0 = ((func_803828F0_Obj *) arg0)->unkB0;
    ((func_803828F0_Obj *) arg0)->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0 || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        sp4E = D_801BC03C[0x2FF];
        func_803821B0(arg0, 0x2E, 0x9C, 0x50, 0x50, 0xFF, 3, &sp4F);
        func_803822F0(arg0, 0x7C, 0x9E, ((u8 *) &sp44)[sp4E], ((u8 *) &sp3C)[sp4E], ((u8 *) &sp34)[sp4E], sp4E, &sp4F);
        ((func_803828F0_Obj *) arg0)->unkB0 = 0x40;
        func_800058DC(arg0, func_80382A24);
    }
}
