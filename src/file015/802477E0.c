#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_802477E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_8024781C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_802478B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_80247A2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_80247AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_80247B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_80247DA0.s")


s32 func_801C3044();
void func_801C2F0C(s32, s16 *);
void func_800058DC(s32, void *);
void func_8024800C();

struct func_80247FA4_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

void func_80247FA4(s32 arg0, s32 arg1) {
    struct func_80247FA4_Struct s;

    if (func_801C3044() == 0) {
        s.a = 0;
        s.b = 0x03480017;
        s.d = 0x14;
        s.c = 1.0f;
        func_801C2F0C(3, &s.a);
        func_800058DC(arg0, func_8024800C);
    }
}


struct func_8024800C_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

extern void func_8024806C();

void func_8024800C(s32 arg0, s32 arg1) {
    struct func_8024800C_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0;
        sp18.b = 0x03480017;
        sp18.c = 3.0f;
        func_801C2F0C(4, &sp18.a);
        func_800058DC(arg0, func_8024806C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_8024806C.s")


s32 func_800178E8();
void func_800179B0(void *);
extern u8 D_80252DEC[];
void func_8024814C();

void func_80248108(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_800179B0(D_80252DEC);
        func_800058DC(arg0, func_8024814C);
    }
}


extern s32 func_800178E8();
extern void func_80020718(s32);
extern void func_80248190();

void func_8024814C(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80020718(7);
        func_800058DC(arg0, func_80248190);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802477E0/func_80248190.s")

