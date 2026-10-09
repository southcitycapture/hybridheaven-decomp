#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF348.s")


struct func_801FF3D0_Struct {
    u8 pad0[0x9E];
    u8 unk9E;
    u8 pad9F;
    u16 unkA0;
    u16 unkA2;
    u8 *unkA4;
    u16 unkA8;
};

s32 func_801FF3D0(struct func_801FF3D0_Struct *arg0) {
    u8 *temp_v1;

    if (!(arg0->unkA8 & 2)) {
        return 0;
    }
    if (arg0->unk9E != 2) {
        return 0;
    }
    arg0->unk9E = 3;
    arg0->unkA2 = 0;
    temp_v1 = arg0->unkA4;
    *temp_v1 |= 4;
    temp_v1 = arg0->unkA4;
    *temp_v1 &= 0xFFF7;
    return 1;
}


typedef struct func_801FF438_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_801FF438_Struct;

extern void func_80005700();
extern void *func_8012C4D0(s32, func_801FF438_Struct, s32);
extern s32 D_801BBC2C;
extern func_801FF438_Struct D_80217724;

s32 func_801FF438(u8 *arg0, s32 arg1) {
    s32 pad;
    u16 sp2A;

    if (arg0 != NULL) {
        sp2A = arg0[0x9F];
        func_80005700();
        ((u8 *) func_8012C4D0(D_801BBC2C, D_80217724, 3))[0x9F] = sp2A;
        return 1;
    }
    return 0;
}


typedef struct func_801FF4C8_Struct {
    u8 pad0[0x9F];
    u8 unk9F;
    u8 pad1[0xA8 - 0xA0];
    u16 unkA8;
} func_801FF4C8_Struct;

extern u16 D_8021774C[];
void func_801FF52C(void);
void func_801FF588(void);
void func_800058DC(void *self, void *fn);

void func_801FF4C8(func_801FF4C8_Struct *arg0, s32 arg1) {
    if (D_8021774C[arg0->unk9F] == 0) {
        func_800058DC(arg0, func_801FF588);
        return;
    }
    arg0->unkA8 = arg0->unkA8 | 4;
    func_800058DC(arg0, func_801FF52C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF52C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF628.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF73C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF774.s")


typedef struct func_801FF7DC_Struct {
    u8 pad[0xA0];
    u16 unkA0;
} func_801FF7DC_Struct;

extern s32 func_801C3D90();
extern void func_800058DC(void *, void *);
extern void func_801FF83C();
extern void (*D_8021793C[])();

void func_801FF7DC(func_801FF7DC_Struct *arg0, s32 arg1) {
    void (*temp_v0)(void *, s32);

    if (func_801C3D90(arg0, arg1) != 0) {
        temp_v0 = (void (*)(void *, s32)) D_8021793C[arg0->unkA0];
        if (temp_v0 != NULL) {
            temp_v0(arg0, arg1);
        }
        func_800058DC(arg0, func_801FF83C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FF83C.s")


struct func_801FF9C0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_801FF9C0_StructO {
    u8 pad0[0x30];
    struct func_801FF9C0_StructX *unk30;
};

struct func_801FF9C0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8017AD28[];
extern f32 D_8021955C;

void func_801FF9C0(struct func_801FF9C0_StructA *arg0, struct func_801FF9C0_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FF9C0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x20F, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_8021955C;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_801FFAB0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_801FFAB0_StructO {
    u8 pad0[0x30];
    struct func_801FFAB0_StructX *unk30;
};

struct func_801FFAB0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219560;

void func_801FFAB0(struct func_801FFAB0_StructA *arg0, struct func_801FFAB0_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FFAB0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x20F, 1);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219560;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FFBA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FFC90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FFD80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FFE70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_801FFF60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802005F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802006E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802007D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802008C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802009B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200B90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200C80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80200F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802014F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802015E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802016D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802017C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802018B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802019A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201C70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201D60.s")


void func_80201DC0(u8 *arg0, s32 arg1) {
    *(u16 *)(arg0 + 0xA8) = *(u16 *)(arg0 + 0xA8) | 1;
}


void func_80201DD4(void *arg0, s32 arg1) {
    u16 *flags = (u16 *) ((u8 *) arg0 + 0xA8);

    *flags = *flags | 8;
}


struct func_80201DE8_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_80201DE8_StructC {
    u8 pad0[0x30];
    struct func_80201DE8_StructB *unk30;
};

struct func_80201DE8_StructA {
    u8 pad0[0x24];
    struct func_80201DE8_StructC *unk24;
    u8 pad28[0x90 - 0x28];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

void func_80201DE8(struct func_80201DE8_StructA *arg0, s32 arg1) {
    arg0->unk24->unk30->unk4 = arg0->unk90;
    arg0->unk24->unk30->unk8 = (f32) ((f64) arg0->unk94 + 1.5);
    arg0->unk24->unk30->unkC = arg0->unk98;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201E38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201E44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80201F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80202408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802026C4.s")


extern f32 D_80219610;

struct func_80202BCC_Struct {
    u8 pad0[0xA2];
    u16 unkA2;
    u8 pad1[0xAC - 0xA4];
    f32 unkAC;
};

void func_80202BCC(struct func_80202BCC_Struct *arg0) {
    arg0->unkAC = D_80219610;
    arg0->unkA2 = 0;
}


struct func_80202BE0_Struct {
    u8 pad0[0xA2];
    u16 unkA2;
};

void func_80202BE0(struct func_80202BE0_Struct *arg0) {
    arg0->unkA2 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80202BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80202BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80203254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_802033F8.s")

