#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002C850/func_8002C850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002C850/func_8002C8F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002C850/func_8002CD2C.s")


extern s32 func_80030480(void *, void *, void *, s32);
extern s32 func_80034A10(s32, s32, s32, s32, s32);
extern u8 func_8002F010[];
extern u8 func_8002F6BC[];

void func_8002CDD4(void *arg0, s32 (*arg1)(void *), s32 arg2) {
    func_80030480(arg0, func_8002F6BC, func_8002F010, 0);
    ((s32 *)arg0)[5] = func_80034A10(0, 0, arg2, 1, 0x20);
    ((s32 *)arg0)[6] = func_80034A10(0, 0, arg2, 1, 0x20);
    ((s32 *)arg0)[12] = arg1((u8 *)arg0 + 0x34);
    ((s32 *)arg0)[15] = 0;
    ((s32 *)arg0)[16] = 1;
    ((s32 *)arg0)[17] = 0;
}


struct func_8002CE7C_Struct {
    u8 pad0[0x14];
    s32 unk14;
    f32 unk18;
    s32 unk1C;
    f32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
};

extern u8 func_8002EB40[];
extern u8 func_8002EC2C[];

void func_8002CE7C(void *arg0, s32 arg1) {
    struct func_8002CE7C_Struct *s;

    s = arg0;
    func_80030480(arg0, func_8002EC2C, func_8002EB40, 1);
    s->unk14 = func_80034A10(0, 0, arg1, 1, 0x20);
    s->unk24 = 1;
    s->unk30 = 0;
    s->unk1C = 0;
    s->unk28 = 0;
    s->unk2C = 0;
    s->unk20 = 0.0f;
    s->unk18 = 1.0f;
}


struct func_8002CF08_Struct {
    u8 pad[0x14];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

extern u8 func_8002DDB0[];
extern u8 func_8002DDE0[];

void func_8002CF08(struct func_8002CF08_Struct *arg0, s32 arg1, s32 arg2) {
    func_80030480(arg0, func_8002DDE0, func_8002DDB0, 6);
    arg0->unk14 = 0;
    arg0->unk18 = arg2;
    arg0->unk1C = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002C850/func_8002CF5C.s")


typedef struct func_8002CFB0_Struct {
    u8 pad[0x14];
    s32 unk14;
    s32 unk18;
} func_8002CFB0_Struct;

extern void func_80030810(void);
extern void func_8003089C(void);

void func_8002CFB0(func_8002CFB0_Struct *arg0) {
    func_80030480(arg0, &func_80030810, &func_8003089C, 3);
    arg0->unk14 = 0;
    arg0->unk18 = 1;
}

