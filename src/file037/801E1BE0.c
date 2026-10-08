#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E1BE0.s")


extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
extern f32 D_801E6B50;
extern f32 D_801E6B54;
extern f32 D_801E6B58;
extern f32 D_801E6B5C;
extern f32 D_801E6B60;
extern f32 D_801E6B64;
extern f32 D_801E6B68;
extern f32 D_801E6B6C;

s32 func_801E1C3C(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;

    temp_fv0 = D_801E6B50;
    temp_fv1 = D_801E6B54;
    if (D_8038C17C(0.0f, 3.5f, -52.1f, 303.2f, 72.5f, D_801E6B58, D_801E6B5C, D_801E6B60, temp_fv0, D_801E6B64, D_801E6B68, temp_fv0, D_801E6B6C, -58.5f, temp_fv1, temp_fv1) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E1D18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E1DE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E1EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E1FA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E20F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E21C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E22AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E276C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E284C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E292C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2BD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2CAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2CBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2CF8.s")


extern void func_801CCE0C(s32 arg0);
extern void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
extern void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801E6934;

s32 func_801E2D50(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE88(1, 0xF8, 0x1D, 8);
    func_801CCEC8(1, 0x39, -0x21, 0x48);
    func_801CCE88(2, 0x84, 0x19, 0x40);
    func_801CCEC8(2, -0x80, 0x1C, -0x5F);
    func_801CCE50(0x30, 9, 4);
    D_801E6934 = 0x10;
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2E34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2E84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2EAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2EE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E2FF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3008.s")


struct func_801E3018_Struct {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[8];
    s32 unk10;
};

extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern void func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 func_8038DDD4[];
extern struct func_801E3018_Struct D_8038DF70;

s32 func_801E3018(s32 arg0, s32 arg1) {
    func_801C2420(0x444, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x263, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0xA7, &func_8038DDD4[4]);
    D_8038BA70();
    D_8038DF70.unk4 = 0x3000;
    if (func_801C2570(0x43C, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70.unk10 = 0xE000;
    if (func_801C2570(0x2DD, (u8 *)&D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E30F0.s")


extern void func_801C0D04(s32 arg0, s32 arg1);
extern void func_8038D28C(s32 arg0);

s32 func_801E3624(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x249);
        func_801C0D04(3, 0);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3678.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E37C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E386C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E387C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E388C.s")


void func_801C0D04(s32 a, s32 b);
void func_8038D28C(s32 a);
extern void *D_8038D8D0;
extern f32 D_801E69B0;

s32 func_801E38D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x11EDD81) != 0) {
        func_8038D28C(0x24B);
        func_801C0D04(3, 2);
        D_801E69B0 = *(f32 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x8) + 0x30) + 0x8);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E39F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3A08.s")


struct func_801E3A4C_Struct1 {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_801E3A4C_Struct2 {
    u8 pad0[0x30];
    struct func_801E3A4C_Struct1 *unk30;
};

struct func_801E3A4C_Struct3 {
    u8 pad0[0xC];
    struct func_801E3A4C_Struct2 *unkC;
};

extern f32 D_801E69C4;

s32 func_801E3A4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x11EDD81) != 0) {
        func_801C0D04(3, 3);
        D_801E69C4 = ((struct func_801E3A4C_Struct3 *) D_8038D8D0)->unkC->unk30->unk8;
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3B68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3BBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3BCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3C40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3CA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3ED8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3F38.s")


extern void func_801C7DB4(void);

s32 func_801E3F7C(s32 arg0, s32 arg1) {
    func_801C7DB4();
    func_8038D28C(0x248);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3FAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E439C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E43AC.s")


extern void func_801C4028(s32 a0, f32 a1, f32 a2, f32 a3, s32 a4, s32 a5, s32 a6, f32 a7, f32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, s32 a15);
extern void func_8038C4D8(s32 a0, s32 a1);

s32 func_801E43F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF9020) != 0) {
        func_8038D28C(0x24A);
        func_801C4028(1, 41.0f, 167.0f, 32.0f, 0, 0xF5, 0x23, 8.0f, 8.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x20);
        func_8038C4D8(2, 0);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E44B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E460C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4674.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E48B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E48F0.s")


extern s32 func_801CE284(void);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E4A30(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348005E, 0, 0, 8.0f);
        return 8;
    }
    return 7;
}


void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);
s32 func_801CE274();

s32 func_801E4A88(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005E, 0, 0x100, 1.0f);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4AE0.s")


struct func_801E4AF0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_801E4AF0_Struct *func_801BF6B0(s32 arg0);
void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);

s32 func_801E4AF0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 6) {
        func_801CC4D8(0, 0x04100029, 0, 0, 5.0f);
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4B54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4BAC.s")


extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern u8 func_801DAAF0[];

s32 func_801E4BBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB4D110) != 0) {
        func_801CC470(0, 0x01680040, 0, 1, 1.0f);
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1BD2;
        return 0xE;
    }
    return 0xD;
}


extern u8 D_801DAB14[];

s32 func_801E4C3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC7E3E0) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x4) = 9.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0xC) = -2.0f;
        func_801CC470(0, 0x01680040, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 0xF;
    }
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4EF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E4F60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E51A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E51B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E51F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E52D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E53B8.s")


s32 func_801CEDD4(void);

s32 func_801E54A0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80032, 0, 0x100, 3.0f);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E54F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E55F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E565C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5B38.s")


s32 func_801E5B68(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x198EF81) != 0) {
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5C18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E5C40.s")

