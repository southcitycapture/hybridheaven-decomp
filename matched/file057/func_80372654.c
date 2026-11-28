#include "common.h"
typedef s32 (*func_803714B4_Emitter)(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);


typedef struct func_80372654_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_80372654_StructVec;
extern void func_8013A334(f32 *a0, s32 a1, s32 a2, s32 a3);

func_80372654_StructVec func_80372654(void *arg1, void *arg2) {
    s32 temp;
    func_80372654_StructVec sp30;
    func_80372654_StructVec sp24;
    func_80372654_StructVec sp18;

    temp = *(s32 *) ((u8 *) arg1 + 0x5C);
    func_8013A334((f32 *) &sp24, (s32) arg2, temp, 9);
    func_8013A334((f32 *) &sp18, (s32) arg2, temp, 0xC);
    sp30.x = (sp24.x + sp18.x) / (f32) 2;
    sp30.y = (sp24.y + sp18.y) / (f32) 2;
    sp30.z = (sp24.z + sp18.z) / (f32) 2;
    return sp30;
}
