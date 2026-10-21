#include "context.h"

typedef struct func_8035A7F4_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_8035A7F4_Struct;

typedef struct func_8035A7F4_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_8035A7F4_Vec;

extern s32 D_8035A3D8(u8);
extern s32 D_8013A334(void *, s32, s32, u16);

void func_8035A7F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4C;
    u8 *sp48;
    func_8035A7F4_Vec sp3C;
    func_8035A7F4_Vec sp30;
    func_8035A7F4_Vec sp24;

    sp4C = ((func_8035A7F4_Struct *)arg0)->unk5C;
    if ((func_8035A7F4_Struct *)arg0 == *(func_8035A7F4_Struct **)&D_801BBCCC) {
        sp48 = D_801BC03C;
    } else {
        sp48 = D_801BC3D8;
    }
    D_8013A334(&sp3C, arg1, sp4C, arg2);
    D_8013A334(&sp30, arg1, sp4C, arg3);
    sp24.x = (sp3C.x + sp30.x) / 2;
    sp24.y = (sp3C.y + sp30.y) / 2;
    sp24.z = (sp3C.z + sp30.z) / 2;
    func_8035A5B0((void *)arg0, arg1, *(func_8035A734_StructTmp *)&sp24, D_8035A3D8(sp48[0x2D9]));
}
