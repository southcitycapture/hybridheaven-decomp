#include "context.h"

typedef struct func_80367C30_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80367C30_Struct;

extern u8 D_801BBBF0[];
extern u8 D_8008DA88[];

s32 func_80006214();
s32 func_80010550(void *, s32);
s32 func_802237B0();
void func_8035DD80(void *, s32);
void func_80368020(void *, void *);

void func_80367C30(func_80367C30_Struct *arg0, void *arg1) {
    func_80367C30_Struct *var_a2;
    s32 sp28;
    s32 sp24;

    if (arg0 != *(func_80367C30_Struct **)(D_801BBBF0 + 0xDC)) {
        var_a2 = *(func_80367C30_Struct **)(D_801BBBF0 + 0xDC);
    } else {
        var_a2 = *(func_80367C30_Struct **)(D_801BBBF0 + 0xEC);
    }
    sp28 = arg0->unk5C;
    sp24 = var_a2->unk5C;
    func_802237B0(arg0, 1, var_a2);
    func_802237B0(var_a2, 1);
    func_80006214(var_a2);
    func_80010550(D_8008DA88, sp24);
    func_80006214(arg0);
    if (func_80010550(arg1, sp28) != 0) {
        func_8035DD80(arg0, 0);
        func_80368020(arg0, arg1);
    }
}
