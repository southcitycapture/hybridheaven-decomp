#include "context.h"
extern void func_80011258(s32, s32);
extern void func_80006214(void *);
extern u8 D_8008DA88[];
extern u8 D_8038CC62;
typedef struct func_8036B158_Struct { u8 pad[0x5C]; s32 unk5C; } func_8036B158_Struct;

void func_8036B158(func_8036B158_Struct *arg0, s32 arg1) {
    func_8036B158_Struct *a2;
    s32 v1;
    s32 sp24;
    s8 *v0;

    if ((void *)arg0 != (void *)D_801BBBF0.unkDC) {
        a2 = (func_8036B158_Struct *)D_801BBBF0.unkDC;
    } else {
        a2 = (func_8036B158_Struct *)D_801BBBF0.unkEC;
    }
    v1 = arg0->unk5C;
    sp24 = a2->unk5C;
    if ((void *)arg0 != (void *)D_801BBBF0.unkDC) {
        v0 = (s8 *)D_801BC03C;
    } else {
        v0 = (s8 *)D_801BC3D8;
    }
    D_8038CC62 += 1;
    v0[0x374] = v0[0x374] - 1;
    if (v0[0x374] < 0) {
        func_80011258(arg1, v1 + 0x22);
        func_80006214(a2);
        func_80011258((s32)D_8008DA88, sp24 + 0x22);
        func_80006214(arg0);
        v0[0x374] = 0;
        return;
    }
    func_800111E0(arg1, v1 + 0x22);
    func_80006214(a2);
    func_800111E0((s32)D_8008DA88, sp24 + 0x22);
    func_80006214(arg0);
}
