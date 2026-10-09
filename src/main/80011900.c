#include "common.h"


struct func_80011900_Inner {
    u8 pad[0x34];
    f32 unk34;
    f32 unk38;
};

struct func_80011900_Struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0x30 - 0x23];
    struct func_80011900_Inner *unk30;
};

extern void func_800317D0(s32, void *, s32, void *);

void func_80011900(struct func_80011900_Struct *arg0, s32 arg1) {
    arg0->unk22 = 1;
    func_800317D0(arg1, arg0->unk30, 0x3C, arg0);
    arg0->unk30->unk34 = 1.0f;
    arg0->unk30->unk38 = 1.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80011900/func_80011958.s")


struct func_80013730_Struct1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 unk14;
    u8 unk15;
    u8 unk16;
    u8 unk17;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
    u16 unk1C;
    u16 unk1E;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
};

struct func_80013730_Struct0 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x9];
    struct func_80013730_Struct1 *unk2C;
};

struct func_80013730_Struct2 {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u16 unk8;
    u16 unkA;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

void func_80013730(struct func_80013730_Struct0 *arg0, struct func_80013730_Struct2 *arg1) {
    arg0->unk22 = 1;
    arg0->unk2C->unk0 = (f32) arg1->unk0;
    arg0->unk2C->unk4 = (f32) arg1->unk2;
    arg0->unk2C->unk8 = 0.0f;
    arg0->unk2C->unkC = 0.0f;
    arg0->unk2C->unk10 = 0;
    arg0->unk2C->unk12 = 0;
    arg0->unk2C->unk14 = arg1->unk4;
    arg0->unk2C->unk15 = arg1->unk5;
    arg0->unk2C->unk16 = arg1->unk6;
    arg0->unk2C->unk17 = arg1->unk7;
    arg0->unk2C->unk18 = 0xFF;
    arg0->unk2C->unk19 = 0xFF;
    arg0->unk2C->unk1A = 0xFF;
    arg0->unk2C->unk1B = 0xFF;
    arg0->unk2C->unk1C = arg1->unk8;
    arg0->unk2C->unk1E = arg1->unkA;
    arg0->unk2C->unk20 = arg1->unkC;
    arg0->unk2C->unk24 = arg1->unk10;
    arg0->unk2C->unk28 = arg1->unk14;
    arg0->unk2C->unk2C = arg1->unk18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80011900/func_80013828.s")

