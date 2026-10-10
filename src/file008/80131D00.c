#include "common.h"


struct func_80131D00_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_800057DC(void *a0, void *a1);
extern void func_8001B204(s32 a0, s32 a1, s32 a2, void *a3);
extern void func_8012FE50(s32 a0, s32 a1, s32 a2, s32 a3, s32 stack);
extern u16 D_80089474[];
extern u8 D_80162FC0[];
extern u8 D_8018D6E0[];
extern u8 D_8018D6E8[];
extern s16 D_801BBBF4;
extern u16 D_801BBC20;

void func_80131D00(struct func_80131D00_Struct *arg0, s32 arg1) {
    u16 var_v0;

    if ((D_801BBC20 >> 4) & 1) {
        func_8001B204(0, 0x8C, 0x50, D_8018D6E0);
    } else {
        func_8001B204(0, 0x8C, 0x50, D_8018D6E8);
    }
    if (D_80089474[2] & 0xF000) {
        D_801BBBF4 = 0x73;
        func_8012FE50(2, 0x73, 2, 2, 0);
    }
    if ((s32) arg0->unk3C >= 0x1771) {
        func_800057DC(arg0, D_80162FC0);
    }
    arg0->unk3C = (u16) (arg0->unk3C + 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_80131DD0.s")


extern void func_800058DC(s32, void (*)(void));
extern void func_8013225C(void);

void func_8013222C(void *arg0, s32 arg1) {
    *(u16 *)((u8 *)arg0 + 0x90) = 0x23;
    func_800058DC((s32)arg0, func_8013225C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_8013225C.s")


extern void func_80005700();
extern s16 D_80089354;
extern s8 D_801BBD54;

typedef struct func_80132308_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_80132308_Struct;

void func_80132308(func_80132308_Struct *arg0, s32 arg1) {
    D_801BBD54 = 0;
    if (arg0->unk92 == 0) {
        D_80089354 = 2;
    }
    func_80005700(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_8013234C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_80132358.s")


typedef struct func_80132D28_Struct {
    u8 pad0[0xA4];
    s16 unkA4;
    s16 unkA6;
} func_80132D28_Struct;

typedef struct func_80132D28_StructC {
    u8 pad0[0x898];
    s32 unk898;
} func_80132D28_StructC;

extern func_80132D28_StructC D_8005C4B0;
extern func_80132D28_Struct D_800892B0;

void func_80132D28(void *arg0, s32 arg1) {
    if (D_8005C4B0.unk898 == 0) {
        D_800892B0.unkA6 = 1;
        D_800892B0.unkA4 = 2;
        D_801BBD54 = 0;
        func_80005700(arg0);
    }
}


extern s16 D_80089356;
extern void func_80132DB0(void);

void func_80132D74(s32 arg0, s32 arg1) {
    D_801BBD54 = 0;
    D_80089356 = 1;
    func_800058DC(arg0, func_80132DB0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_80132DB0.s")


extern void func_8001F540(s32, void *);

typedef struct func_80132ED0_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u8 pad1[0x6];
    s32 unk98;
} func_80132ED0_Struct;

void func_80132ED0(func_80132ED0_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_8001F540(arg0->unk98, arg0);
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_80132F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_8013341C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_80133458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_801334A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/func_80133730.s")

