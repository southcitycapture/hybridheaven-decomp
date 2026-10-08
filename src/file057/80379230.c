#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803795D8.s")

void func_803796C8(void) {
}


void func_803796D0(u8 *arg0) {
    *(s16 *)(arg0 + 0xA0) = 0;
    arg0[0xA6] = arg0[0xA6] & 0xFFDF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803796E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803796EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803797F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037A884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037AAC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037AC58.s")


extern void func_80005700();

void func_8037ACCC(void *arg0, s32 arg1) {
    if (((s16 *)arg0)[0x58]++ >= 0x1F) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037AD08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037ADF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037AED8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B0B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B23C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B5A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B72C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B9A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BA70.s")


extern s32 func_80236BA4(s32, void *);
extern u8 *D_8008DA88;
extern u8 D_801BCC21;

void func_8037BB28(u8 *arg0, u8 *arg1) {
    u8 *var_v0;
    u8 *temp_v0;
    s32 temp_v1;
    s32 temp_a0;

    arg1 = arg0;
    if (arg0[0x90] == 0) {
        var_v0 = *(u8 **)(arg0 + 0xA4) + 0x9E;
    } else {
        var_v0 = *(u8 **)(arg1 + 0xA4) + 0xA0;
    }
    if ((*(u16 *)var_v0 == 0) || (temp_v0 = *(u8 **)(D_8008DA88 + 0x30), temp_a0 = temp_v0[0xB]-- == 0, temp_a0 != 0) || (((s32) D_801BCC21 >= 0xA) && (D_801BCC21 != 0xF)) || (func_80236BA4(temp_a0, arg1) == 0)) {
        func_80005700(arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BBCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BD64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BEA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BFB8.s")


extern u8 D_801BBBF0[];

void func_8037C50C(void) {
    u8 *p = D_801BBBF0;

    p[0x71C] |= 0x10;
    p[0xAB8] |= 0x10;
}



void func_8037C530(void) {
    D_801BBBF0[0x71C] = D_801BBBF0[0x71C] & 0xEF;
    D_801BBBF0[0xAB8] = D_801BBBF0[0xAB8] & 0xEF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037C554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037C778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D5B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D68C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D93C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DAE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DC64.s")


typedef struct func_8037DCEC_Inner {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
} func_8037DCEC_Inner;

typedef struct func_8037DCEC_Outer {
    u8 pad[0x30];
    func_8037DCEC_Inner *unk30;
} func_8037DCEC_Outer;

void func_8037DCEC(s32 arg0, func_8037DCEC_Outer *arg1, u8 arg2) {
    u8 temp_v1;
    func_8037DCEC_Inner *temp_v0;

    arg1->unk30->unkE = arg2;
    temp_v0 = arg1->unk30;
    temp_v1 = temp_v0->unkE;
    temp_v0->unkD = temp_v1;
    arg1->unk30->unkC = temp_v1;
    arg1->unk30->unk9 = temp_v1;
    arg1->unk30->unkA = temp_v1;
    arg1->unk30->unk8 = temp_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DD2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DEE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E0A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E1C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E7E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E9B8.s")


struct func_8037EB58_Struct {
    u8 pad[0xA8];
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};

extern s32 func_800058DC(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_8037E438(void *, s32, s32, u8, s32, s8 *, s32);
extern s32 func_8037EBD0;

void func_8037EB58(struct func_8037EB58_Struct *arg0, s32 arg1) {
    s8 sp37;
    u8 temp_a3;

    sp37 = 0;
    if (arg0->unkB0++ >= 9) {
        temp_a3 = arg0->unkA8;
        func_8037E438(arg0, 0x32, 0x50, temp_a3, temp_a3, &sp37, 0);
        func_80006214(arg0);
        arg0->unkB0 = 0;
        func_800058DC(arg0, &func_8037EBD0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037EBD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037EEC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037F170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037F3D4.s")

