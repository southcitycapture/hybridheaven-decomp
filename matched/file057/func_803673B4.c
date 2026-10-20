#include "context.h"

typedef struct func_803673B4_StructVec {
    s32 x, y, z;
} func_803673B4_StructVec;

typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;

extern func_803673B4_StructGlobal D_801BBBF0;
extern void func_80360400(func_803673B4_StructVec *, s32, s32);
extern void func_803709D0(s32, func_803673B4_StructVec, s32);
extern void func_80020718(s32);
extern void func_802254F8(s32, u8, s32);
extern void func_80367288(s32, s32, u8);

void func_803673B4(s32 arg0, s32 arg1, u8 arg2) {
    s32 sp34;
    func_803673B4_StructVec sp28;

    if (arg0 != D_801BBBF0.unkDC) {
        sp34 = D_801BBBF0.unkDC;
    } else {
        sp34 = D_801BBBF0.unkEC;
    }
    func_80360400(&sp28, arg0, arg1);
    func_803709D0(sp34, sp28, 0);
    func_80020718(0x3AC);
    func_802254F8(sp34, arg2, 2);
    func_80367288(arg0, arg1, arg2);
}
