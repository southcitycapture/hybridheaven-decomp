#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_802473E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80247634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_802476B0.s")

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

extern void func_800058DC(void *arg0, void *arg1);
extern struct func_802488E8_StructBBBF0 D_801BBBF0;
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

