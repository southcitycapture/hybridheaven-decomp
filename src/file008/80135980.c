#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80135980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801359C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80135DD8.s")


typedef struct func_80135DE4_StructInner {
    u8 pad0[0x14];
    u32 unk14;
} func_80135DE4_StructInner;

typedef struct func_80135DE4_Struct {
    u8 pad0[0x38];
    func_80135DE4_StructInner *unk38;
    u8 pad1[0x54];
    u16 unk90;
} func_80135DE4_Struct;

s32 func_8012A630(func_80135DE4_Struct *arg0, f32 arg1);
void func_80133980(u32 arg0);
void func_800058DC(void *arg0, void *arg1);
extern void func_80135E54(void);

void func_80135DE4(func_80135DE4_Struct *arg0, s32 arg1) {
    if (func_8012A630(arg0, (f32) (arg0->unk90 * 0xA)) != 0) {
        func_80133980(arg0->unk38->unk14 >> 0x10);
        func_800058DC(arg0, func_80135E54);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80135E54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80135E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136000.s")


extern s32 func_80135E60(void *, f32, s32, s32);
extern s32 func_8013D4A0(s32, s32);
extern void func_801364B4();
extern void func_801363C8();
extern void func_801362DC();
extern s8 D_801BBC06;
extern s16 D_801BBD82;
extern u16 D_801BBD86;
extern u8 D_80217F5C[];

typedef struct func_801361C8_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_801361C8_StructInner;

typedef struct func_801361C8_Struct {
    u8 pad0[0x38];
    func_801361C8_StructInner *unk38;
} func_801361C8_Struct;

void func_801361C8(func_801361C8_Struct *arg0, s32 arg1) {
    if (func_80135E60(arg0, (f32) ((arg0->unk38->unk10 >> 16) & 0xFF), 1, 0x41000000) == 0) {
        func_800058DC(arg0, &func_801364B4);
        return;
    }
    if (D_801BBD86 == 1) {
        if (func_8013D4A0(0x27, 0) == 0) {
            D_801BBD82 = 1;
            func_800179B0(&D_80217F5C);
            func_80020744(0x3DB);
            func_800058DC(arg0, &func_801363C8);
            return;
        }
        func_800179B0(&D_80217F5C);
        func_80020744(0x3DB);
        D_801BBC06 = (arg0->unk38->unk10 >> 8) & 0xFF;
        func_800058DC(arg0, &func_801362DC);
    }
}


typedef struct func_801362DC_StructBBBF0 {
    u8 pad0[0xF00];
    s16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801362DC_StructBBBF0;

extern func_801362DC_StructBBBF0 D_801BBBF0;
extern void func_80136354();
s32 func_800178E8();
void func_800058DC(void *arg0, void *arg1);

void func_801362DC(u8 *arg0, void *arg1) {
    if (func_800178E8() != 0) {
        *(s16 *)((u8 *)&D_801BBBF0 + 0x194) = 1;
        *(s16 *)((u8 *)&D_801BBBF0 + 0x192) = 4;
        D_801BBBF0.unkF10 = 0x02A80003;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 3.0f;
        *(s16 *)(arg0 + 0x90) = 0x40;
        func_800058DC(arg0, func_80136354);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801363C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_8013643C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801364B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801364F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801366BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801367C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136840.s")


extern void func_80136900();

void func_80136898(s32 arg0, void *arg1) {
    if (func_800178E8() != 0) {
        *(s16 *)&D_801BBBF0.pad0[0x194] = 1;
        D_801BBBF0.unkF10 = 0x02A80003;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 3.0f;
        func_800058DC((void *)arg0, (void *)&func_80136900);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801369B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136B0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136C68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136CA8.s")


s32 func_80150584();

void func_80136D7C(s32 arg0, s32 arg1) {
    u8 *base;

    if (func_80150584() != 0) {
        base = (u8 *) &D_801BBBF0;
        *(f32 *) (base + 0x29C) = *(f32 *) (base + 0x2A4);
        *(f32 *) (base + 0x2A0) = *(f32 *) (base + 0x2A8);
        *(u8 *) (base + 0xF35) = *(u8 *) (base + 0xF48);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136DC4.s")

