#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E1C44.s")


extern void D_8038C158(void);
extern void func_8038BE98(f32 f);
extern void func_8038BD50(f32 f0, f32 f1, s32 a2);
extern void D_8038BD88(f32 f0, f32 f1, s32 a2);
extern f32 D_801E5954;
extern f32 D_801E5958;
extern f32 D_801E595C;
extern f32 D_801E5960;
extern f32 D_801E5964;

s32 func_801E1D00(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9D2A60) != 0) {
        D_8038C158();
        return 3;
    }
    if (func_801C0B8C(0x7EA5E0) != 0) {
        func_8038BE98(D_801E5954);
        func_8038BD50(D_801E5958, D_801E595C, 0xC2943333);
        D_8038BD88(D_801E5960, D_801E5964, 0x4195999A);
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E1DA0.s")


extern f32 D_801E598C;
extern f32 D_801E5990;
extern f32 D_801E5994;

s32 func_801E1E54(s32 arg0, s32 arg1) {
    if (*(s32 *)((u8 *)func_801BF6B0(4) + 0x3C) >= 6) {
        func_8038BE98(D_801E598C);
        func_8038BD50(0.0f, D_801E5990, 0x41980000);
        D_8038BD88(0.0f, D_801E5994, 0x420D999A);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E1ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E1EDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E1F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E1FA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E1FB4.s")


extern void D_8038BA70();
extern void func_801C2420();
extern s32 func_801C2570();
extern void func_8038BA8C();
extern s32 D_8038DD90[];
extern s32 D_8038DF70[];

s32 func_801E1FC4(s32 arg0, s32 arg1) {
    func_801C2420(0x470, D_8038DD90);
    D_8038BA70();
    D_8038DF70[1] = 0x800;
    if (func_801C2570(0x378, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70[4] = 0x1000;
    if (func_801C2570(0x471, &D_8038DF70[3]) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2054.s")


extern s32 D_801E57B8;

s32 func_801E2A5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7EA5E0) != 0) {
        D_801E57B8 = 0;
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2AA4.s")


struct func_801E2B54_Struct_C {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
};

struct func_801E2B54_Struct_B {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_801E2B54_Struct_C *unk30;
};

struct func_801E2B54_Struct_A {
    u8 pad[0x24];
    struct func_801E2B54_Struct_B *unk24;
};

extern u32 func_801C1134(s32 a0, s32 a1);
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern struct func_801E2B54_Struct_A *D_8038D8D0;

s32 func_801E2B54(s32 arg0, s32 arg1) {
    f32 temp_fv0;

    f32 temp_ft3;

    temp_ft3 = (f32) func_801C1134(3, 0) / 30.0f;
    temp_fv0 = 30.0f * temp_ft3;
    D_8038D8D0->unk24->unk30->unk18 = temp_fv0;
    D_8038D8D0->unk24->unk30->unk1C = temp_fv0;
    if (func_801C1088(3, 0, 0x1E) != 0) {
        func_801C10D8(3, 0);
        D_8038D8D0->unk24->unk22 = 0;
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2C10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2C20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2C40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2C70.s")


extern s32 D_801E57E8;

s32 func_801E2CB4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xAC6CA0) != 0) {
        D_801E57E8 = 0;
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2CFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E338C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E33A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E376C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3C98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3D2C.s")


extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern u8 D_801DBAC0[];
extern u8 D_801DBB60[];
extern u8 func_801DAAF0[];
extern u8 func_801DAC30[];

s32 func_801E3DF8(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_80005670(((void **)*(void **)(func_801DAAF0 + 0x24))[2], D_801DBAC0);
    func_80005670(((void **)((void **)*(void **)(func_801DAAF0 + 0x24))[2])[2], D_801DBB60);
    func_801CC530();
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3E6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3F38.s")


extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 D_801E583C;

s32 func_801E3F80(s32 arg0, s32 arg1) {
    if (D_801E583C >= 0x1F) {
        func_801CC4D8(0, 0x04100044, 0, 0, 5.0f);
        return 6;
    }
    D_801E583C += 1;
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E3FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4054.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4084.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E40C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4200.s")


extern f32 D_801E5A80[];

void func_801E4210(void) {
    u8 *v0;
    f32 *dst;

    func_801C78C0();
    v0 = *(u8 **)(func_801DAAF0 + 0x24);
    dst = D_801E5A80;
    dst[0] = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4);
    dst[1] = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8);
    dst[2] = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E42D8.s")


extern void func_801C1000(s32 arg0, s32 arg1);
extern void func_801E4284(void);

s32 func_801E4358(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xAC6CA0) != 0) {
        func_801C1000(4, 1);
        return 5;
    }
    func_801E4284();
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E43AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E455C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E456C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E457C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E458C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E459C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E45AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E45F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E46D8.s")


extern u8 *D_801DAB14[];
extern f32 D_801E5A74;

s32 func_801E46E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9D2A60) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14[0] + 8) + 8) + 8) + 0x24) + 0x2C) + 4) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14[0] + 8) + 8) + 8) + 0x24) + 0x2C) + 8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14[0] + 8) + 8) + 8) + 0x24) + 0x2C) + 0xC) = D_801E5A74;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14[0] + 8) + 8) + 8) + 0x24) + 0x2C) + 0x12) = 0x1000;
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E47B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E48A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E496C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E497C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E498C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E499C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E49AC.s")


extern s32 D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8038D28C(s32);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E49BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01406F40) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E4A60.s")

