#include "common.h"

extern f32 D_8038A938;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 D_80216BF8;
extern s16 D_80388A68;
extern s32 func_80010550(s32, s32, s32);
extern s8 D_8038A93C;
extern u16 D_801BCAE0;
extern u8 D_80389730[];
extern u8 D_8038A93E;
extern u8 func_801E5010[];
extern u8 func_8037B64C[];
extern void func_800058DC(void *, void *);
extern void func_80011140();
extern void func_80020744(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C4A5C(void *, s32);
extern void func_801E4F60(s32);
extern void func_8037AB08();
extern void func_8037B86C();

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_80379970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_80379F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037A320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037A6F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037A960.s")

typedef struct func_8037AA80_Struct { s32 a; s32 b; s32 c; } func_8037AA80_Struct;
typedef struct func_8037AA80_StructA { u8 pad[0x5C]; s32 unk5C; } func_8037AA80_StructA;
extern func_8037AA80_Struct D_80216B90;

void func_8037AA80(func_8037AA80_StructA *arg0, s32 arg1) {
    s32 sp24;
    extern s32 func_80010550();

    sp24 = arg0->unk5C;
    if ((func_8037B9F0((void *)arg0) == 0) && (func_80010550(arg1, sp24) != 0)) {
        func_80011140(arg1, sp24, D_80216B90, 5);
        func_800058DC(arg0, func_8037AB08);
    }
}

typedef struct func_8037B9F0_StructB { u8 pad[0x40]; f32 unk40; f32 unk44; f32 unk48; } func_8037B9F0_StructB;
s32 func_8037B9F0(func_8037B9F0_StructB *arg0);
typedef struct func_8037BAEC_StructBBBF0 {
    u8 pad[0xEF0];
    u16 unkEF0;
} func_8037BAEC_StructBBBF0;
extern func_8037BAEC_StructBBBF0 D_801BBBF0;
typedef struct func_8037AB08_S { s32 a; s32 b; s32 c; } func_8037AB08_S;
typedef struct func_8037AB08_P { u8 pad[0x1C]; s32 unk1C; } func_8037AB08_P;
typedef struct func_8037AB08_O { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x24]; s32 unk54; u8 pad3[4]; func_8037AB08_P *unk5C; } func_8037AB08_O;
typedef struct func_8037AB08_B { u8 pad[0x230]; u8 unk230; u8 pad2[0xEF0-0x231]; u16 unkEF0; u8 pad3[0xEFC-0xEF2]; s32 unkEFC; } func_8037AB08_B;
extern func_8037AB08_B D_801BBBF0_;
void func_8037AB08(func_8037AB08_O *arg0, s32 arg1) {
    func_8037AB08_P *p = arg0->unk5C;
    if (func_8037B9F0(arg0) == 0) {
        func_80011140(arg1, p, D_80216B90, 5);
        if (p->unk1C == 0x01680041) {
            arg0->unk54 = ((func_8037AB08_B *)&D_801BBBF0)->unkEFC;
            func_801C4A5C(arg0, 0);
            arg0->unk2C |= 0x40;
            arg0->unk2C |= 0x20;
            arg0->unk2C |= 0x80;
            ((func_8037AB08_B *)&D_801BBBF0)->unkEF0 = 0x80;
            D_80216BF8 = 0x2D;
            ((func_8037AB08_B *)&D_801BBBF0)->unkEF0 |= 0x2000;
            ((func_8037AB08_B *)&D_801BBBF0)->unk230 = D_8038A93E;
            func_800058DC(arg0, func_801E5010);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037AC08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037AEA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037AFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B08C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B240.s")

typedef struct func_8037B4E4_V { s32 a; s32 b; s32 c; } func_8037B4E4_V;
typedef struct func_8037B4E4_S { u8 pad[0x1C]; s32 unk1C; u8 pad2[2]; u16 unk22; } func_8037B4E4_S;
typedef struct func_8037B4E4_O { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x2C]; func_8037B4E4_S *unk5C; } func_8037B4E4_O;
extern func_8037B4E4_V D_80388A44;
extern func_8037B4E4_V D_80388A38;
struct func_8037BAEC_StructBBBF0;
typedef struct func_8037B4E4_B { u8 pad[0xEF0]; u16 unkEF0; } func_8037B4E4_B;

void func_8037B4E4(func_8037B4E4_O *arg0, s32 arg1) {
    func_8037B4E4_S *s = arg0->unk5C;
    if (s->unk22 & 0x10) {
        func_80011140(arg1, s, D_80388A44, 0xF);
    } else {
        func_80011140(arg1, s, D_80388A38, 0xF);
    }
    if (s->unk1C == 0x01680017) {
        arg0->unk2C |= 0x40;
        arg0->unk2C |= 0x20;
        arg0->unk2C |= 0x80;
        D_80216BF8 = 0x5A;
        ((func_8037B4E4_B *)&D_801BBBF0)->unkEF0 |= 0x2000;
        ((func_8037B4E4_B *)&D_801BBBF0)->unkEF0 &= 0xEFFF;
        func_800058DC(arg0, func_801E5010);
    }
}


typedef struct func_8037B5FC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8037B5FC_Struct;


void func_8037B5FC(void *arg0, s32 arg1) {
    s32 temp;

    temp = ((func_8037B5FC_Struct *)arg0)->unk5C;
    if (func_80010550(arg1, temp, arg1) != 0) {
        D_8038A93C = 0;
        func_80020744(0xA);
        func_800058DC(arg0, func_8037B86C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B64C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B86C.s")


void func_8037B9E4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

typedef struct func_8037B9F0_StructV { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; f32 unk3C; f32 unk40; f32 unk44; } func_8037B9F0_StructV;
typedef struct func_8037B9F0_StructA { u8 pad[0x2C]; func_8037B9F0_StructV *unk2C; } func_8037B9F0_StructA;
extern func_8037B9F0_StructA *D_801BBCD8;

s32 func_8037B9F0(func_8037B9F0_StructB *arg0) {
    if (D_801BCAE0 & 0x8000) {
        func_801E4F60(0x1E);
        func_8011AAF4(D_80389730, 0x3BC, arg0, 0, 1, 10.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 10.0f, arg0->unk40 + D_801BBCD8->unk2C->unk3C, arg0->unk44 + D_801BBCD8->unk2C->unk40, arg0->unk48 + D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_8037B64C);
        return 1;
    }
    return 0;
}



typedef struct func_8037BAEC_StructA930 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_8037BAEC_StructA930;

extern func_8037BAEC_StructA930 D_8038A930;

s32 func_8037BAEC(f32 arg0, f32 arg1, f32 arg2, s16 arg3) {
    if (D_801BBBF0.unkEF0 & 0x1050) {
        return 0;
    }
    D_801BBBF0.unkEF0 = D_801BBBF0.unkEF0 | 0x1000;
    D_8038A930.unk0 = arg0;
    D_8038A930.unk4 = arg1;
    D_8038A930.unk8 = arg2;
    D_80388A68 = arg3;
    return 1;
}



s32 func_8037BB4C(s16 arg0, f32 arg1, f32 arg2, s16 arg3) {
    f32 temp_ft1;

    if (D_801BBBF0.unkEF0 & 0x1050) {
        return 0;
    }
    D_801BBBF0.unkEF0 = (u16) (D_801BBBF0.unkEF0 | 0x1000);
    temp_ft1 = func_8001EAD0(arg0) * arg2;
    D_8038A930.unk0 = temp_ft1;
    D_8038A930.unk4 = arg1;
    D_8038A938 = func_8001EB64(arg0) * arg2;
    D_80388A68 = arg3;
    return 1;
}

