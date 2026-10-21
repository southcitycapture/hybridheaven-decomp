#include "context.h"

typedef struct func_8036920C_Struct {
    u8 pad0[0x1C];
    u8 unk1C[4];
    u16 unk20;
    u8 unk22[2];
} func_8036920C_Struct;
extern f64 D_8038AD60;
extern void func_801DB6B8();
extern s32 func_8000E634(void *);
extern s32 func_80011590(s32);
extern void func_800112B0(s32, void *);
extern void func_803693E4();

void func_8036920C(s32 arg0, s32 arg1) {
    func_8036920C_Struct *sp24;
    func_80369094_Struct *a3;
    s32 v1;
    u16 a0;

    sp24 = (func_8036920C_Struct *)((func_80367C30_Struct *)arg0)->unk5C;
    if (arg0 == D_801BBCCC) {
        a3 = &D_801BC03C;
    } else {
        a3 = &D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        v1 = (s32)&D_801BC03C;
    } else {
        v1 = (s32)&D_801BC3D8;
    }
    func_801DB6B8(arg0, arg1, 0, a3);
    if (((func_803690F8_Struct *)a3)->unk30 << 19 >> 31 == 1) {
        a0 = ((func_80369094_Struct *)v1)->unk2D9;
    } else {
        a0 = a3->unk2D9;
    }
    if (a0 == 0x3C || a0 == 0x3B || a0 == 0x3D) {
        v1 = 0;
    } else if (a0 == 0x2B) {
        v1 = func_80011590(10) & 0xFFFF;
    } else {
        v1 = (u32)((f64)(u32)func_8000E634(sp24->unk1C) * D_8038AD60) & 0xFFFF;
    }
    if (v1 < sp24->unk20) {
        func_800112B0(arg1, sp24->unk22);
        func_800058DC(arg0, func_803693E4);
    }
}
