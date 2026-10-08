#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_80249170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_80249960.s")


extern void func_80249EF8(void);
extern s32 D_801BBCCC;

void func_80249EC4(void *arg0, s32 arg1) {
    if (D_801BBCCC != 0) {
        func_800058DC(arg0, func_80249EF8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_80249EF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_80249FF4.s")


typedef struct func_8024A0D4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024A0D4_Struct;

extern s32 func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801C2F0C(s32, s32);
extern void func_8024A418(void);
extern u8 D_8025CBE0[];
extern f32 D_8025CD48;
extern f32 D_8025CD4C;

void func_8024A0D4(func_8024A0D4_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk3C++ >= 0x78) {
        func_8011AAF4(D_8025CBE0, 0x280, arg0, 2, 1, 0.0f, D_8025CD48, -180.0f, -30.0f, 0.0f, D_8025CD4C, -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_800058DC(arg0, func_8024A418);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_8024A1B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_8024A33C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_8024A418.s")


typedef struct func_8024A4FC_Inner {
    u8 pad[0x8];
    f32 unk8;
} func_8024A4FC_Inner;

typedef struct func_8024A4FC_Outer {
    u8 pad[0x2C];
    func_8024A4FC_Inner *unk2C;
} func_8024A4FC_Outer;

extern func_8024A4FC_Outer *D_801BBCD0;
extern void func_8024A54C(void);

void func_8024A4FC(void *arg0, s32 arg1) {
    if (D_801BBCD0->unk2C->unk8 <= -600.0f) {
        func_800058DC(arg0, (void *) func_8024A54C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_8024A54C.s")

