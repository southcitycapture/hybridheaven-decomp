#include "common.h"


extern void func_80030388(s32 a0, s32 a1, s32 a2, f32 a3, f32 f4, f32 f5, f32 f6, f32 f7, f32 s0, f32 s1, f32 s2, f32 s3, f32 s4, f32 s5, f32 s6, f32 s7, f32 s8, f32 s9, s32 s10, s32 s11);

void func_8001F820(void) {
    func_80030388(0, 0, 0, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x20, 0x20);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001F8A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001FBA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001FD14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001FEBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001FEFC.s")


struct func_80020078_Struct {
    u8 unk0;
    u8 pad[3];
    s32 unk4;
    void *unk8;
};

extern struct func_80020078_Struct D_80096020;
extern u8 D_80096030[];
extern void func_8001FEFC(void);

void *func_80020078(void **arg0) {
    if (D_80096020.unk0 == 0) {
        D_80096020.unk4 = 0;
        D_80096020.unk8 = D_80096030;
        D_80096020.unk0 = 1;
    }
    *arg0 = &D_80096020;
    return func_8001FEFC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_800200B0.s")

