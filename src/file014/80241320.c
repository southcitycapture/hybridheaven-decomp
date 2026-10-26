#include "common.h"

#define func_8024134C func_8024134C__func_80241320

extern void func_800058DC();
extern void func_8024134C();

void func_80241320(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x3C) = 0;
    func_800058DC(arg0, func_8024134C);
}
#undef func_8024134C

/* hh-block asm/nonmatchings/file014/80241320/_ro_func_8024134C.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file014/80241320/func_8024134C.s","D_8024A350"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241320/_ro_func_8024134C.s")


struct func_8024134C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_80005700(void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8024A350[];

void func_8024134C(struct func_8024134C_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ > 0) {
        func_8011AAF4(D_8024A350, 0x50, arg0, 0, 1, 0.0f, 465.0f, -74.0f, -117.0f, 0.0f, 265.0f, -138.0f, -72.0f, 0.0f, 50.0f, -1, -1);
        func_80005700(arg0);
    }
}

