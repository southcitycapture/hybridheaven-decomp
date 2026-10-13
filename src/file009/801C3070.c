#include "common.h"

extern s32 func_80010550();
extern u8 D_801BBBF0[];
extern u8 D_801BBDA0[];
extern void func_801C3070();
extern void func_801C31FC();
extern void func_801C3374();
extern void func_801C33FC();
extern void func_801E5010();

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3070.s")


struct func_801C3174_Sub {
    u8 pad[0x78];
    s16 unk78;
};

struct func_801C3174_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C3174_Sub *unk5C;
};

struct func_801C3174_Global {
    u32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
};

extern void func_800058DC(void *a, void *b);
extern struct func_801C3174_Global D_801E0B20;

void func_801C3174(struct func_801C3174_Obj *arg0, s32 arg1) {
    struct func_801C3174_Sub *temp_v1;

    temp_v1 = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x20;
    arg0->unk44 = 0.0f;
    arg0->unk40 = 0.0f;
    arg0->unk48 = 0.0f;
    D_801E0B20.unk0 = 0x01680041;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk6 = 0x1100;
    D_801E0B20.unk8 = 1.0f;
    temp_v1->unk78 = 1;
    func_800058DC(arg0, func_801C31FC);
}



typedef struct func_801C31FC_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C31FC_StructDC;

typedef struct func_801C31FC_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C31FC_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x1DA - 0x192];
    u16 unk1DA;
    u16 unk1DC;
    u8 pad3[0xEF0 - 0x1DE];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C31FC_StructBBBF0;

typedef struct func_801C31FC_StructArg {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    s32 unk5C;
} func_801C31FC_StructArg;

void func_801C31FC(func_801C31FC_StructArg *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a0;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_801E0B20, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        temp_a0 = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk1DA;
        ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk1DC = 1;
        if (temp_a0 == 1) {
            func_800058DC(arg0, func_801C3070);
            temp_a0 = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk1DA;
        }
        if (temp_a0 == 2) {
            ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk18E = 3;
            ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk190 = 0;
            ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkEF0 = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkEF0 & 0xFFBF;
            ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkDC->unk2C = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkDC->unk2C | 0x40;
            arg0->unk54 = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkEFC;
            func_800058DC(arg0, func_801E5010);
        }
    }
}


struct func_801C32EC_Sub {
    u8 pad[0x78];
    s16 unk78;
};

struct func_801C32EC_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C32EC_Sub *unk5C;
};

struct func_801C32EC_Global {
    u32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
};


void func_801C32EC(struct func_801C32EC_Obj *arg0, s32 arg1) {
    struct func_801C32EC_Sub *temp_v1;

    temp_v1 = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x20;
    arg0->unk44 = 0.0f;
    arg0->unk40 = 0.0f;
    arg0->unk48 = 0.0f;
    D_801E0B20.unk0 = 0x01680041;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk6 = 0x1100;
    D_801E0B20.unk8 = 1.0f;
    temp_v1->unk78 = 1;
    func_800058DC(arg0, func_801C3374);
}


extern s32 func_8012CE9C(s32, s32, struct func_801C3174_Global, s32);

void func_801C3374(struct func_801C3174_Obj *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = (s32) arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_801E0B20, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        *(s16 *) (D_801BBDA0 + 0x2C) = 1;
        func_800058DC(arg0, func_801C33FC);
    }
}

/* starting point: func_801C1E74 (file009), whose assembly is 96% the same as this function's */


typedef struct func_801C33FC_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C33FC_StructDC;

typedef struct func_801C33FC_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C33FC_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x1DA - 0x192];
    u16 unk1DA;
    u8 pad3[0xEF0 - 0x1DC];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C33FC_StructBBBF0;

typedef struct func_801C33FC_StructArg {
    u8 pad0[0x54];
    s32 unk54;
} func_801C33FC_StructArg;

void func_801C33FC(void *arg0, s32 arg1) {
    if (((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unk1DA == 2) {
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unk18E = 3;
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unk190 = 0;
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkEF0 = ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkEF0 & 0xFFBF;
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C = ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C | 0x40;
        ((func_801C33FC_StructArg *) arg0)->unk54 = ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkEFC;
        func_800058DC(arg0, &func_801E5010);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3468.s")

/* starting point: func_801C1F40 (file009), adapted: 6-arg call with the 12-byte struct passed by value */
typedef struct func_801C34C8_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C34C8_StructDC;

typedef struct func_801C34C8_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C34C8_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x1DA - 0x192];
    u16 unk1DA;
    u16 unk1DC;
    u8 pad3[0xEF0 - 0x1DE];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C34C8_StructBBBF0;

typedef struct func_801C34C8_StructArg {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    s32 unk5C;
} func_801C34C8_StructArg;

void func_801C34C8(func_801C34C8_StructArg *arg0, s32 arg1) {
    extern void func_801C3070();
    extern void func_801E5010();
    s32 temp_a1;
    s32 temp_a0;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_801E0B20, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        temp_a0 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk1DA;
        ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk1DC = 1;
        if (temp_a0 == 1) {
            func_800058DC(arg0, func_801C3070);
            temp_a0 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk1DA;
        }
        if (temp_a0 == 2) {
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk18E = 3;
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk190 = 0;
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkEF0 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkEF0 & 0xFFBF;
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkDC->unk2C = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkDC->unk2C | 0x40;
            arg0->unk54 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkEFC;
            func_800058DC(arg0, func_801E5010);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C35B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C36F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3A1C.s")

