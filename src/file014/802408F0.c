#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_802408F0.s")

extern void func_800058DC(void *, void *);
extern void func_80020744(s32);
extern void func_801268F4(s32);
extern s32 func_80133A24(s32);

typedef struct func_80240A68_StructB {
    u8 pad0[0x10];
    u32 unk10;
} func_80240A68_StructB;

typedef struct func_80240A68_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x38 - 0x30];
    func_80240A68_StructB *unk38;
    u8 pad2[0x3E - 0x3C];
    u8 unk3E;
} func_80240A68_StructA;

extern u8 D_801BBBF0[];
extern void func_80240B24(void);
extern void func_80240BE4(void);

void func_80240A68(func_80240A68_StructA *arg0, s32 arg1) {
    *(f32 *) (D_801BBBF0 + 0x390) = 0.0f;
    *(f32 *) (D_801BBBF0 + 0x394) = 0.0f;
    *(f32 *) (D_801BBBF0 + 0x398) = 0.0f;
    if ((arg0->unk38->unk10 >> 0x18) == 0) {
        if (func_80133A24(0x50) != 0) {
            func_800058DC(arg0, func_80240BE4);
            arg0->unk2C = 0xC60;
            arg0->unk3E = 0;
            func_801268F4(0);
        }
    } else if (func_80133A24(0x4F) != 0) {
        func_80020744(0x144);
        func_800058DC(arg0, func_80240B24);
        arg0->unk2C = 0xC20;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_80240B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_80240BD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_80240BE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_80240CD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_80240CE0.s")


typedef struct func_80240D74_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_80240D74_StructC;

typedef struct func_80240D74_StructB {
    u8 pad0[0x30];
    func_80240D74_StructC *unk30;
} func_80240D74_StructB;

typedef struct func_80240D74_StructA {
    u8 pad0[0x24];
    func_80240D74_StructB *unk24;
    u8 pad1[0x94 - 0x28];
    s16 unk94;
} func_80240D74_StructA;

extern void func_8012C89C(void *, s32, s32, s32);
extern f32 D_8024A324;
extern f32 D_8024A328;
extern f32 D_8024A32C;
extern void func_80240E38(void);

void func_80240D74(func_80240D74_StructA *arg0, s32 arg1) {
    if (func_80133A24(0x47) != 0) {
        func_8012C89C(arg0, 0, 0x23B, 0);
        arg0->unk24->unk30->unk4 = D_8024A324;
        arg0->unk24->unk30->unk8 = D_8024A328;
        arg0->unk24->unk30->unkC = D_8024A32C;
        arg0->unk24->unk30->unk10 = 1;
        arg0->unk24->unk30->unk12 = -1;
        arg0->unk94 = 0x12C;
        func_80020744(0x141);
        func_800058DC(arg0, func_80240E38);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_80240E38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_80240F48.s")

extern s32 func_80126CC0(void *, void *);
void func_8024101C(s32 arg0, s32 arg1);

extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_80126EAC(void);
extern u8 D_80164F40[];
extern f32 D_8024A33C;
extern f32 D_8024A340;

void func_80240F54(func_80240D74_StructA *arg0, s32 arg1) {
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        arg0->unk24->unk30->unk4 = -151.0f;
        arg0->unk24->unk30->unk8 = D_8024A33C;
        arg0->unk24->unk30->unkC = D_8024A340;
        arg0->unk24->unk30->unk12 = 0;
        func_8012C89C(arg0, 0, 0x23B, 0);
        func_800058DC(arg0, &func_8024101C);
    }
}


extern s32 func_8012A564(s32, s32);
extern void func_80241064(void);

void func_8024101C(s32 arg0, s32 arg1) {
    if (func_8012A564(arg0, 0x430C0000) != 0) {
        func_801268F4(0);
        func_800058DC((void *) arg0, (void *) func_80241064);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_80241064.s")


typedef struct func_80241144_Struct {
    u8 pad[0x94];
    s16 unk94;
} func_80241144_Struct;

extern void func_80133980(s32);
extern void func_8024118C(void);

void func_80241144(func_80241144_Struct *arg0, s32 arg1) {
    arg0->unk94 = 0xA0;
    func_80133980(0x4E);
    func_80020744(0x143);
    func_800058DC(arg0, func_8024118C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_8024118C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_80241200.s")


typedef struct func_8024120C_StructB {
    u8 pad0[2];
    u16 unk2;
} func_8024120C_StructB;

typedef struct func_8024120C_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    func_8024120C_StructB *unk38;
} func_8024120C_Struct;

extern void func_80005700(void *);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80127014(void);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_802412A0(void);

void func_8024120C(func_8024120C_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x47) != 0) {
        func_80005700(arg0);
        return;
    }
    if (func_80126CC0(arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_802412A0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_802412A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_802412F4.s")

