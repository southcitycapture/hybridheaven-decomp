#include "common.h"

extern struct func_802488E8_StructBBBF0 D_801BBBF0;
extern void func_800058DC(void *arg0, void *arg1);

struct func_802473E0_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x36 - 0x30];
    u16 unk36;
    struct func_802473E0_Cfg *unk38;
    u8 pad2[0x74 - 0x3C];
    s32 unk74;
};

struct func_802473E0_Cfg {
    u8 pad0[0x18];
    u32 unk18;
};

struct func_802473E0_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    s16 unk12;
    u8 pad2[0x24 - 0x14];
    s32 unk24;
    u8 pad3[0x30 - 0x28];
    s32 unk30;
    u8 pad4[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_802473E0_Node {
    u8 pad0[0x30];
    struct func_802473E0_Data *unk30;
};

struct func_802473E0_Sub {
    u8 pad0[0x8];
    s32 unk8;
};

struct func_802473E0_Ent {
    u16 *unk0;
    struct func_802473E0_Sub *unk4;
};

extern void func_80005E44(void *arg0, void *arg1);
extern void func_80006214(void *arg0);
extern void func_8012636C(void *arg0, s32 arg1);
extern void func_800062F8(void *arg0, u32 arg1);
extern s32 func_8000C3B0(void *arg0);
extern void func_8012C89C(void *arg0, s32 arg1, u32 arg2, s32 arg3);
extern s32 func_8000522C(u16 arg0, s32 arg1);
extern u8 D_80164F40[];
extern struct func_802473E0_Ent *D_80171CEC[];
extern void func_80247634(void);

void func_802473E0(struct func_802473E0_Obj *arg0, struct func_802473E0_Node **arg1) {
    struct func_802473E0_Node **temp_s1;
    struct func_802473E0_Ent *temp_v0;
    s32 var_v0;
    s8 var_s0;

    if (*(s32 *)((u8 *)&D_801BBBF0 + 0xE0) != 0) {
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            func_80005E44(arg0, D_80164F40);
        }
        func_80006214(arg0);
        arg0->unk2C = arg0->unk2C | 0xC00;
        func_8012636C(arg0, 0);
        arg1[1]->unk30->unk4 = (f32) ((f64) arg1[0]->unk30->unk4 + 60.0);
        arg1[1]->unk30->unk8 = arg1[0]->unk30->unk8;
        arg1[1]->unk30->unkC = arg1[0]->unk30->unkC;
        arg1[1]->unk30->unk12 = arg1[0]->unk30->unk12;
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            func_8012C89C(arg0, var_s0, arg0->unk38->unk18 >> 16, var_s0);
        }
        temp_v0 = D_80171CEC[arg0->unk36];
        arg0->unk74 = func_8000522C(*temp_v0->unk0, temp_v0->unk4->unk8);
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            func_800062F8(arg1[var_s0], 0x80000C00);
        }
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            arg1[var_s0]->unk30->unk24 = 0x13;
            var_v0 = func_8000C3B0(arg1[0]);
            arg1[var_s0]->unk30->unk30 = var_v0;
            arg1[var_s0]->unk30->unk4C = *((u8 *)&D_801BBBF0 + 0xF32);
            arg1[var_s0]->unk30->unk4D = *((u8 *)&D_801BBBF0 + 0xF33);
            arg1[var_s0]->unk30->unk4E = *((u8 *)&D_801BBBF0 + 0xF34);
            arg1[var_s0]->unk30->unk4F = *((u8 *)&D_801BBBF0 + 0xF35);
        }
        func_800058DC(arg0, func_80247634);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80247634.s")


struct func_802476B0_StructObj {
    u8 pad0[0x18];
    u32 unk18;
};
struct func_802476B0_StructArg2 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_802476B0_StructArg1 {
    u8 pad0[0x30];
    struct func_802476B0_StructArg2 *unk30;
};
struct func_802476B0_StructArg0 {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x38 - 0x30];
    struct func_802476B0_StructObj *unk38;
};

extern void func_802477BC(void);
extern s32 D_801BBCD0;

void func_802476B0(void *arg0, void **arg1) {
    struct func_802476B0_StructArg0 *a0 = (struct func_802476B0_StructArg0 *) arg0;
    u32 temp_v0;
    u8 *b;

    if (D_801BBCD0 != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        a0->unk2C = a0->unk2C | 0x20;
        func_8012636C(arg0, 0);
        temp_v0 = a0->unk38->unk18;
        func_8012C89C(arg0, 0, temp_v0 >> 0x10, temp_v0 & 0xFFFF);
        func_800062F8(*arg1, 0x80000C00);
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk24 = 0x13;
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        b = (u8 *) &D_801BBBF0;
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4C = b[0xF32];
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4D = b[0xF33];
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4E = b[0xF34];
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4F = b[0xF35];
        func_800058DC(arg0, func_802477BC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_802477BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_802478F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80247B6C.s")


struct func_802488E8_StructArg {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x54 - 0x4C];
    s32 unk54;
};

struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};

extern u8 D_80249CB8;
extern void func_80248C04(void);

void func_802488E8(struct func_802488E8_StructArg *arg0, s32 arg1) {
    D_801BBBF0.unkF0C = 0;
    D_801BBBF0.unk198 = -10.0f;
    D_801BBBF0.unk1A0 = 10.0f;
    D_80249CB8 = D_801BBBF0.unk39C;
    D_801BBBF0.unk39C = 0;
    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x60;
    arg0->unk54 = 1;
    arg0->unk48 = 0.0f;
    arg0->unk40 = 0.0f;
    func_800058DC(arg0, func_80248C04);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80248970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80248C04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80248D60.s")


typedef struct func_80248DE0_StructCBC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80248DE0_StructCBC;

struct func_80248DE0_StructBBBF0 {
    u8 pad0[0xDC];
    u8 *unkDC;
    u8 pad1[0x18E - 0xE0];
    s16 unk18E;
    s16 unk190;
    u8 pad2[0x39C - 0x192];
    u8 unk39C;
    u8 pad3[0xEF0 - 0x39D];
    s16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
};

extern void func_80011140(s32, void *, func_80248DE0_StructCBC, s32);
extern void func_80010550(s32, void *);
extern void func_801C4A5C(void *, s32);
extern void func_801E5010(void);
extern func_80248DE0_StructCBC D_80249CBC;
extern s32 D_8024F518;

void func_80248DE0(void *arg0, s32 arg1) {
    u8 *sp24;

    sp24 = *(u8 **)((u8 *)arg0 + 0x5C);
    if (D_8024F518 == 0xD) {
        func_80011140(arg1, sp24, D_80249CBC, 0xA);
        if (*(s32 *)(sp24 + 0x1C) == 0x1680041) {
            ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unk39C = D_80249CB8;
            ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unk18E = 4;
            ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unk190 = 0;
            *(s32 *)(((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkDC + 0x2C) = 0x3E0;
            ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkEF0 = 0x80;
            *(s32 *)(((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkDC + 0x54) = ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkEFC;
            func_801C4A5C(((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkDC, 0);
            func_800058DC(arg0, func_801E5010);
        }
    } else {
        func_80010550(arg1, sp24);
    }
}


extern s32 D_8024F510;
void func_80248F04(void);

void func_80248ED4(s32 arg0, s32 arg1) {
    D_8024F510 = arg0;
    func_800058DC((void *) arg0, (void *) func_80248F04);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80248F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80248F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80248FBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_802491C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80249250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80249284.s")

