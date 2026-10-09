#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1D28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1DB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1EB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E1ED4.s")


extern s32 D_8038C97C();
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E1EE4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
    return 1;
}



s32 func_801E1F50(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E1F80(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x895440) != 0) {
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 3;
    }
    return 2;
}



s32 func_801E1FEC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2014.s")


extern s32 D_801FD47C;
extern s32 D_801FD480;

s32 func_801E2024(s32 arg0, s32 arg1) {
    if (func_801C0B8C(3000000) != 0) {
        D_801FD47C = 0;
        D_801FD480 = 0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2074.s")


extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_801FBBD0[];
extern u8 D_801FBBD4[];

s32 func_801E2234(s32 arg0, s32 arg1) {
    func_8001B204(0, 0, 0, D_801FBBD0);
    func_8001B204(1, 0, 0, D_801FBBD4);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2288.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2298.s")


extern s32 func_8038D28C(s32 arg0);

s32 func_801E22A8(s32 arg0, s32 arg1) {
    func_8038D28C(0x7D);
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E22D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E22E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E22F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2378.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E26A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E283C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E28A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2A08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2CAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E2D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E32A8.s")


extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801FBF78;
extern f32 D_801FBF7C;
extern f32 D_801FBF80;
extern f32 D_801FBF84;
extern f32 D_801FBF88;
extern f32 D_801FBF8C;
extern f32 D_801FBF90;
extern f32 D_801FBF94;
extern f32 D_801FBF98;
extern f32 D_801FBF9C;

s32 func_801E33C4(s32 arg0, s32 arg1) {
    f32 a = D_801FBF78;
    f32 b = D_801FBF7C;
    if (D_8038C17C(0.0f, 4.0f, a, 17.8f, D_801FBF80, D_801FBF84, D_801FBF88, D_801FBF8C, D_801FBF90, D_801FBF94, b, D_801FBF98, a, b, 40.0f, D_801FBF9C) != 0) {
        return 0xE;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E3494.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E34A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E34B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E34F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E3610.s")


extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

s32 func_801E370C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03072580) != 0) {
        func_801CCE50(0x32, 0x32, 0x32);
        func_801CCE88(0, 0xFF, 0xFF, 0xFF);
        func_801CCEC8(0, 0, 0, 0x46);
        if (func_801C0B8C(0x03B69F60) != 0) {
            return 4;
        }
    }
    return 3;
}


s32 func_801E379C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03F3A860) != 0) {
        func_801CCE50(0x64, 0x64, 0x64);
        func_801CCE88(0, 0xFF, 0xFF, 0xFF);
        func_801CCEC8(0, -0x7F, 0, 0);
        return 5;
    }
    return 4;
}


s32 func_801E3814(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06F5C4D0) != 0) {
        func_801CCE50(0x32, 0x32, 0x32);
        func_801CCE88(0, 0xFF, 0xFF, 0xFF);
        func_801CCEC8(0, 0, 0, -0x7F);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E388C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E389C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E38D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E39C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E39D8.s")


s32 func_801E39E8(s32 arg0, s32 arg1) {
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E39F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E3B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4034.s")


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E4044(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E40F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E41BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E41CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E41DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E41EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E41FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E42C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E42D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E42E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E42F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E43CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E44B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E454C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E455C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E456C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E457C.s")


extern s32 func_801C2980(s32, s32, s32, s32, s32, s32, s32, void *, s32);
extern u8 D_801D8E60[];

s32 func_801E45C0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x034BCFA0) != 0) {
        func_801C2980(0x4A, 0xC, 0x4D, 0xC8, 0xC8, 0xC8, 0x43, D_801D8E60, 0x168);
        func_801C2980(0x45, 0xA, 0x4D, 0xC8, 0xC8, 0xC8, 0x3C, D_801D8E60, 0x168);
        func_801C2980(0x47, 0xB, 0x4D, 0xC8, 0xC8, 0xC8, 0x50, D_801D8E60, 0x168);
        func_801C2980(0x46, 0x11, 0x4D, 0xC8, 0xC8, 0xC8, 0x64, D_801D8E60, 0x168);
        func_801C2980(0x4C, 0xF, 0x4D, 0xC8, 0xC8, 0xC8, 0x7F, D_801D8E60, 0x168);
        func_801C2980(0x4A, 0xB, 0x4D, 0xC8, 0xC8, 0xC8, 0x3C, D_801D8E60, 0x168);
        func_801C2980(0x44, 0xC, 0x4D, 0xC8, 0xC8, 0xC8, 0x50, D_801D8E60, 0x168);
        func_801C2980(0x48, 0x8, 0x4D, 0xC8, 0xC8, 0xC8, 0xDC, D_801D8E60, 0x168);
        func_801C2980(0x46, 0x6, 0x4D, 0xC8, 0xC8, 0xC8, 0xFA, D_801D8E60, 0x168);
        func_801C2980(0x49, 0x7, 0x4D, 0xC8, 0xC8, 0xC8, 0xC8, D_801D8E60, 0x168);
        func_801C2980(0x47, 0x9, 0x4D, 0xC8, 0xC8, 0xC8, 0xFE, D_801D8E60, 0x168);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E48A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E497C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4D24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4E64.s")


s32 func_801E4EDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x090B103F) != 0) {
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E4FB0.s")


s32 func_801CEDE4();
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E50A0(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC470(1, 0x01B80016, 0, 0x10, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801E50F8(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC470(1, 0x01B80016, 0, 0, 1.0f);
        return 2;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5160.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E51A4.s")


extern void func_801CF450(s32 arg0);
extern s32 D_801FB224;

s32 func_801E536C(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x046DBA60) != 0) {
        func_801CF450(1);
        D_801FB224 = 0;
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E53C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E55A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E55B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E55C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E55D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E561C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5730.s")


extern void func_801C2570(s32 arg0, void *arg1);
extern void func_801CDD20(void);
extern u8 D_801E1110[];

s32 func_801E5740(s32 arg0, s32 arg1) {
    *(s32 *)(D_801E1110 + 4) = 0x1180;
    func_801C2570(0xA5, D_801E1110);
    func_801CDD20();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5848.s")


extern u8 *D_801DAC4C;

s32 func_801E5F10(s32 arg0, s32 arg1) {
    u8 **pp;

    pp = (u8 **)&D_801DAC4C;
    *(s32 *)(*(u8 **)(*(u8 **)(*pp + 0x4) + 0x30) + 0x30) = 0;
    *(s32 *)(*(u8 **)(*(u8 **)(*pp + 0x4) + 0x30) + 0x28) = 0;
    if (func_801C0B8C(0x0294B4A0) != 0) {
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E5FF0.s")


s32 func_801E6020(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02F7E340) != 0 && D_801BBD54 == 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E60A0.s")


s32 func_801E60C8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x036A5420) != 0) {
        if (D_801BBD54 == 0) {
            D_80089354 = 0;
            D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
            return 5;
        }
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6148.s")


s32 func_801E6178(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x03B69F60) != 0) && (D_801BBD54 == 0)) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E61F8.s")


s32 func_801E6220(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x0430B160) != 0) && (D_801BBD54 == 0)) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E62A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E62D0.s")


s32 func_801E633C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xB;
    }
    if (func_801C0B8C(0x6F5C4D0ULL) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 0xC;
    }
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E63C4.s")


s32 func_801E63F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x093BE43FULL) != 0) {
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 0xE;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6498.s")


s32 func_801E64A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01399170) != 0) {
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E64E4.s")


s32 func_801E64F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x46DBA60) != 0) {
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6530.s")


s32 func_801E6540(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x07515250) != 0) {
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E657C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E658C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E659C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E65AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E65BC.s")



s32 func_801E65CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A120) != 0) {
        func_8038D28C(0x1CA);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6628.s")



s32 func_801E6638(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3567E0) != 0) {
        func_8038D28C(0x1CB);
        return 4;
    }
    return 3;
}


extern s32 func_8038D2B0(s32);
extern s32 func_8038D2D4(s32);

s32 func_801E6684(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x01399170) != 0) && (func_8038D2D4(0x1CB) == 0)) {
        func_8038D2B0(0x609);
        func_8038D2B0(0x60A);
        func_8038D2B0(0x60B);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E66F0.s")


s32 func_801E6700(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02CA1C80) != 0) {
        func_8038D28C(0x696);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E674C.s")


s32 func_801E675C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03072580) != 0) {
        func_8038D28C(0x1CC);
        return 9;
    }
    return 8;
}



s32 func_801E67A8(s32 arg0, s32 arg1) {
    if (func_8038D2D4(0x1CC) == 0) {
        func_8038D28C(0x1CD);
        return 0xA;
    }
    return 9;
}


s32 func_801E67EC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03B69F60) != 0) {
        func_8038D28C(0x3E0);
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6838.s")


s32 func_801E687C(s32 arg0, s32 arg1) {
    if (func_8038D2D4(0x1CE) == 0) {
        return 0xD;
    }
    return 0xC;
}


s32 func_801E68B0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0430B160) != 0) {
        func_8038D28C(0x3E1);
        return 0xE;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E68FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6950.s")


s32 func_801E6B94(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06CB0B50) != 0) {
        func_8038D28C(0x3E3);
        return 0x11;
    }
    return 0x10;
}



s32 func_801E6BE0(s32 arg0, s32 arg1) {
    if (func_8038D2D4(0x3E3) == 0) {
        func_8038D28C(0x1D0);
        func_8038D2B0(0x619);
        return 0x12;
    }
    return 0x11;
}


s32 func_801E6C2C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x072B2CB0) != 0) {
        return 0x13;
    }
    return 0x12;
}


extern s32 D_801FB308;

s32 func_801E6C68(s32 arg0, s32 arg1) {
    D_801FB308 = 0;
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6C80.s")



s32 func_801E6EC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x093BE43FULL) != 0) {
        func_8038D28C(0xA);
        return 0x16;
    }
    return 0x15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6F10.s")


extern f32 D_801FC070;
extern f32 D_801FC074;
extern f32 D_801FC078;
extern f32 D_801FC07C;
extern f32 D_801FC080;
extern f32 D_801FC084;

void func_8038BEC8(f32);
void func_8038BE98(f32);
void func_8038BD50(f32, f32, f32);
void D_8038BD88(f32, f32, f32);

s32 func_801E6F20(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BE98(D_801FC070);
    func_8038BD50(-195.0f, 2.0f, -102.0f);
    D_8038BD88(D_801FC074, 10.0f, 63.0f);
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038BD50(D_801FC078, D_801FC07C, -36.6f);
        D_8038BD88(D_801FC080, D_801FC084, -32.5f);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E6FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E70C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E7200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E7324.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E755C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E7630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E7980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E7BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E7CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E7DF8.s")


struct func_801E7ECC_Struct3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};

struct func_801E7ECC_Struct2 {
    u8 pad[0x2C];
    struct func_801E7ECC_Struct3 *unk2C;
};

struct func_801E7ECC_Struct1 {
    u8 pad[0xE8];
    struct func_801E7ECC_Struct2 *unkE8;
};

s32 func_801C0B8C(u64 time);
void func_8038BD50(f32 arg0, f32 arg1, f32 arg2);
void D_8038BD88(f32 arg0, f32 arg1, f32 arg2);

extern struct func_801E7ECC_Struct1 D_801BBBF0;
extern f32 D_801FC2F8;
extern f32 D_801FC2FC;
extern f32 D_801FC300;
extern f32 D_801FC304;
extern f32 D_801FC308;
extern f32 D_801FC30C;
extern f32 D_801FC310;

s32 func_801E7ECC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        func_8038BD50(D_801FC2F8, D_801FC2FC, -20.1f);
        D_8038BD88(D_801FC300, D_801FC304, -5.0f);
        return 0xC;
    }
    D_801BBBF0.unkE8->unk2C->unk30 = D_801BBBF0.unkE8->unk2C->unk30 + D_801FC308;
    D_801BBBF0.unkE8->unk2C->unk34 = D_801BBBF0.unkE8->unk2C->unk34 + D_801FC30C;
    D_801BBBF0.unkE8->unk2C->unk38 = D_801BBBF0.unkE8->unk2C->unk38 + D_801FC310;
    return 0xB;
}


extern void D_8038C158(void);
extern s32 D_801FB394;
extern f32 D_801FC314;
extern f32 D_801FC318;

s32 func_801E7F9C(s32 arg0, s32 arg1) {
    struct func_801E7ECC_Struct3 *s;

    if (func_801C0B8C(0x47352AA) != 0) {
        D_801FB394 = 0;
        D_8038C158();
        return 0xD;
    }
    s = D_801BBBF0.unkE8->unk2C;
    s->unk30 = s->unk30 + 0.09375f;
    s = D_801BBBF0.unkE8->unk2C;
    s->unk34 = s->unk34 + D_801FC314;
    s = D_801BBBF0.unkE8->unk2C;
    s->unk38 = s->unk38 + D_801FC318;
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E8044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E8324.s")


extern f32 D_801FC424;
extern f32 D_801FC428;
extern f32 D_801FC42C;
extern f32 D_801FC430;
extern f32 D_801FC434;
extern f32 D_801FC438;
extern f32 D_801FC43C;
extern f32 D_801FC440;

s32 func_801E8718(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0508189A) != 0) {
        func_8038BD50(D_801FC424, D_801FC428, -10.0f);
        D_8038BD88(D_801FC42C, D_801FC430, -9.2f);
        if (func_801C0B8C(0x05175ADA) != 0) {
            func_8038BD50(D_801FC434, D_801FC438, -15.7f);
            D_8038BD88(D_801FC43C, D_801FC440, -9.2f);
            return 0x10;
        }
        return 0xF;
    }
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E87E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E8910.s")


extern f32 D_801FC474;
extern f32 D_801FC478;
extern f32 D_801FC47C;
extern f32 D_801FC480;

s32 func_801E8A08(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x057A897A) != 0) {
        return 0x13;
    }
    func_8038BD50(D_801FC474, D_801FC478, 2.8f);
    D_8038BD88(D_801FC47C, D_801FC480, -11.0f);
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E8A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E8BE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E8D6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E8EE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E9078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E91C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E931C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E9470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E95F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E975C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E97EC.s")


extern f32 D_801FC7A0;

s32 func_801E9958(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0736915AULL) != 0) {
        return 0x1F;
    }
    func_8038BD50(-81.5f, 11.5f, -52.8f);
    D_8038BD88(-168.0f, D_801FC7A0, -32.0f);
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E99CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E9B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E9B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E9B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E9B9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EA004.s")


extern f32 D_801FC7F4;
extern f32 D_801FD4B0;

s32 func_801EA4BC(s32 arg0, s32 arg1) {
    D_801FD4B0 = D_801FC7F4;
    return 4;
}


f32 func_80029280(f32);
f32 func_80032720(f32);
void func_801BF628(s32, s32 *);
void func_801CCE0C(s32);
void func_801CCE50(s32, s32, s32);
void func_801CCE88(s32, s32, s32, s32);
void func_801CCEC8(s32, s32, s32, s32);

extern f32 D_801FC7F8;
extern f32 D_801FC7FC;
extern f32 D_801FC800;
extern f32 D_801FC804;

s32 func_801EA4DC(s32 arg0, s32 arg1) {
    s32 sp28[126];
    s8 sp27;
    s8 sp25[2];

    func_801BF628(3, sp28);
    if (sp28[3] >= 4) {
        func_801CCE0C(3);
        func_801CCE50(0x64, 0x64, 0x64);
        func_801CCE88(0, 0x64, 0x64, 0x64);
        func_801CCEC8(0, -0x64, 0, 0);
        func_801CCE88(1, 0, 0, 0);
        func_801CCE88(2, 0, 0, 0);
        return 5;
    }
    if (func_801C0B8C(0x81B320) != 0) {
        D_801FD4B0 += D_801FC7F8;
        if (D_801FC7FC < D_801FD4B0) {
            D_801FD4B0 = 0.0f;
        }
        func_801CCE0C(2);
        func_801CCE50(0x64, 0x64, 0x64);
        sp27 = (s8) (s32) (func_80032720(D_801FD4B0) * 80.0f);
        sp25[1] = (s8) (s32) (func_80029280(D_801FD4B0) * 80.0f);
        func_801CCE88(0, 0xBC, 0xBC, 0xBC);
        func_801CCEC8(0, sp27, 0x14, sp25[1]);
        func_801CCE88(1, 0xBC, 0xBC, 0xBC);
        sp27 = (s8) (s32) (func_80032720(D_801FD4B0 + D_801FC800) * 80.0f);
        func_801CCEC8(1, sp27, 0x14, (s8) (s32) (func_80029280(D_801FD4B0 + D_801FC804) * 80.0f));
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EA6F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EA988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EAE10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB2C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB2E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB468.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB49C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB594.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB5A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB5B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB5C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB8E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EBAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EBD7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EBE68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC138.s")


s32 func_801C2C90(f32 a0, f32 a1, s32 a2, s32 a3, s32 t0, s32 t1, s32 t2, void *t3, s32 t4);

extern u8 D_801D8F00[];
extern f32 D_801FC85C;

s32 func_801EC17C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x050384BA) != 0) {
        func_801C2C90(D_801FC85C, 15.0f, 0xC0C00000, 0xB0, 0xB0, 0xB0, 0x80, D_801D8F00, 9);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC224.s")


void func_801C2420(s32 arg0, void *arg1);
void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801DAFD8[];
extern u8 D_801DB084[];
extern u8 D_801DB088[];
extern u8 D_801DB164[];
extern u8 D_801E0A48[];
extern u8 func_801DAE70[];
extern u8 func_801DAEE8[];

s32 func_801EC234(s32 arg0, s32 arg1) {
    func_801C2420(0x2B, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB164);
    func_801C2420(0x141, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DB084);
    func_801CC4C0(1, D_801DB088);
    func_801C2420(0x11C, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, func_801DAE70 + 0x5C);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(3, func_801DAEE8 + 0x30);
    func_801CC458(4, D_801DAFD8);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC318.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC414.s")


extern f32 D_801FC868;
extern f32 D_801FC86C;

struct func_801EC5B4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801EC5B4_Struct2 {
    u8 pad0[0x2C];
    struct func_801EC5B4_Struct3 *unk2C;
};

struct func_801EC5B4_Struct1 {
    u8 pad0[0x24];
    struct func_801EC5B4_Struct2 *unk24;
};

struct func_801EC5B4_Struct0 {
    u8 pad0[8];
    struct func_801EC5B4_Struct1 *unk8;
};

extern struct func_801EC5B4_Struct0 *D_801DAB14;

s32 func_801EC5B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2424EE0) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FC868;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 15.5f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC86C;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        return 4;
    }
    return 3;
}


struct func_801EC668_StructE {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_801EC668_StructD {
    u8 pad0[0x2C];
    struct func_801EC668_StructE *unk2C;
};

struct func_801EC668_StructC {
    u8 pad0[0x24];
    struct func_801EC668_StructD *unk24;
};

struct func_801EC668_StructB {
    u8 pad0[0x8];
    struct func_801EC668_StructC *unk8;
};

struct func_801EC668_StructA {
    u8 pad0[0x24];
    struct func_801EC668_StructB *unk24;
};

extern void func_801CC470(s32, s32, s32, s32, f32);
extern struct func_801EC668_StructA func_801DAAF0;

s32 func_801EC668(s32 arg0, s32 arg1) {
    if (func_801DAAF0.unk24->unk8->unk24->unk2C->unk8 <= 0.0f) {
        func_801CC470(0, 0x01B80014, 0, 0x100, 1.0f);
        return 5;
    }
    return 4;
}


struct func_801EC6E4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801EC6E4_Struct2 {
    u8 pad0[0x2C];
    struct func_801EC6E4_Struct3 *unk2C;
};

struct func_801EC6E4_Struct1 {
    u8 pad0[0x24];
    struct func_801EC6E4_Struct2 *unk24;
};

struct func_801EC6E4_Struct0 {
    u8 pad0[8];
    struct func_801EC6E4_Struct1 *unk8;
};

extern f32 D_801FC870;

s32 func_801EC6E4(s32 arg0, s32 arg1) {
    struct func_801EC6E4_Struct0 **pp;

    if (func_801C0B8C(0x02A57D80) != 0) {
        pp = (struct func_801EC6E4_Struct0 **)&func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk24->unk2C->unk4 = 87.0f;
        (*pp)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk24->unk2C->unkC = D_801FC870;
        (*pp)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01680003, 0, 0x100, 1.0f);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC7B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC7C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC7D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EC7E8.s")


extern f32 D_801FC874;

s32 func_801EC7F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x040D9900) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -76.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC874;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01B8001B, 0, 0x100, 3.0f);
        return 0xB;
    }
    return 0xA;
}


extern f32 D_801FC878;
extern f32 D_801FC87C;

s32 func_801EC8CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FC878;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC87C;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01B8000B, 0, 1, 3.0f);
        return 0xC;
    }
    return 0xB;
}


s32 func_801EC9A0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x047352AA) != 0) {
        func_801CC470(0, 0x01B8000B, 0, 0, 18.0f);
        return 0xD;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECA04.s")



s32 func_801ECA68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0508189AULL) != 0) {
        func_801CC470(0, 0x01B8000D, 0, 0, 2.5f);
        return 0xF;
    }
    return 0xE;
}


extern f32 D_801FC880;
extern f32 D_801FC884;

s32 func_801ECACC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0545219A) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FC880;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC884;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1BED;
        func_801CC470(0, 0x02A80011, 0, 0x1000, 1.0f);
        return 0x10;
    }
    return 0xF;
}


extern void func_801D1AF8(s32 a);
extern f32 D_801FC888;
extern f32 D_801FC88C;

s32 func_801ECBA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05822A9A) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FC888;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC88C;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1A6D;
        func_801CC470(0, 0x02A80011, 0, 0x1000, 1.0f);
        return 0x11;
    }
    if (func_801C0B8C(0x0563A61A) != 0) {
        func_801D1AF8(1);
    }
    return 0x10;
}


s32 func_801D1B04();

s32 func_801ECC94(s32 arg0, s32 arg1) {
    if (func_801D1B04() == 0) {
        return 0x12;
    }
    return 0x11;
}


extern void func_801CC528(void);

s32 func_801ECCC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x75FC43A) != 0) {
        func_801CC528();
    }
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECD08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECD18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECD28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECD38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECD48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECD58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECD68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECD78.s")


struct func_801ECDBC_E {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801ECDBC_D {
    u8 pad0[0x2C];
    struct func_801ECDBC_E *unk2C;
};

struct func_801ECDBC_C {
    u8 pad0[0x24];
    struct func_801ECDBC_D *unk24;
};

struct func_801ECDBC_B {
    u8 pad0[0x8];
    struct func_801ECDBC_C *unk8;
};

struct func_801ECDBC_A {
    u8 pad0[0x8];
    struct func_801ECDBC_B *unk8;
};

s32 func_801ECDBC(s32 arg0, s32 arg1) {
    struct func_801ECDBC_A **pp;

    pp = (struct func_801ECDBC_A **)&D_801DAB14;
    if ((*pp)->unk8->unk8->unk24 != NULL) {
        if (func_801C0B8C(0x01298BE0) != 0) {
            return 2;
        }
        pp = (struct func_801ECDBC_A **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = 71.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = -12.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(1, 0x02A80001, 0, 0x1001, 6.0f);
    }
    return 1;
}


s32 func_801ECEC0(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x02A80001, 0, 0x1000, 4.0f);
    return 3;
}


extern f32 D_801FC890;
extern f32 D_801FC894;

struct func_801ECF08_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801ECF08_Struct2 {
    u8 pad0[0x2C];
    struct func_801ECF08_Struct3 *unk2C;
};

struct func_801ECF08_Node {
    u8 pad0[8];
    struct func_801ECF08_Node *unk8;
    u8 pad1[0x18];
    struct func_801ECF08_Struct2 *unk24;
};

s32 func_801ECF08(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01406F40) != 0) {
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801FC890;
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FC894;
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ECFC8.s")


s32 func_801ECFD8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016CAF60) != 0) {
        func_801CC470(1, 0x02A80000, 0, 0x1000, 3.0f);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED048.s")


s32 func_801ED058(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02A57D80) != 0) {
        func_801CC470(1, 0x02A80001, 0, 0x1000, 13.0f);
        return 9;
    }
    return 8;
}


extern void func_801D1258(s32 arg0);

s32 func_801ED0BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02F1C8C0) != 0) {
        func_801D1258(1);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED108.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED118.s")


extern f32 D_801FC898;
extern f32 D_801FD478;

s32 func_801ED1E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x035B11E0) != 0) {
        func_801D1258(0);
        func_801CC470(1, 0x01B8000E, 2, 0x1100, 2.0f);
        return 0xD;
    }
    D_801FD478 += D_801FC898;
    *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)&func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = (s16) (s32) ((D_801FD478 * 2048.0f) / 90.0f);
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED2B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED3C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED3D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED3E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED3F8.s")


extern f32 D_801FC8A0;
extern f32 D_801FC8A4;

s32 func_801ED408(s32 arg0, s32 arg1) {
    struct func_801ECF08_Node **p;

    if (func_801C0B8C(0x040D9900) != 0) {
        p = (struct func_801ECF08_Node **)((u32)&func_801DAAF0.unk24);
        (*p)->unk8->unk8->unk24->unk2C->unk4 = D_801FC8A0;
        (*p)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*p)->unk8->unk8->unk24->unk2C->unkC = D_801FC8A4;
        (*p)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x01B8000E, 0, 0x100, 6.0f);
        return 0x13;
    }
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED4EC.s")


extern f32 D_801FC8B0;
extern f32 D_801FC8B4;

struct func_801ED5D0_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801ED5D0_Struct2 {
    u8 pad0[0x2C];
    struct func_801ED5D0_Struct3 *unk2C;
};
struct func_801ED5D0_Node {
    u8 pad0[8];
    struct func_801ED5D0_Node *unk8;
    u8 pad1[0x18];
    struct func_801ED5D0_Struct2 *unk24;
};

s32 func_801ED5D0(s32 arg0, s32 arg1) {
    struct func_801ED5D0_Node **pp;

    if (func_801C0B8C(0x04FFB42A) != 0) {
        pp = (struct func_801ED5D0_Node **)&func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = D_801FC8B0;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = D_801FC8B4;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A80017, 0, 0, 1.0f);
        return 0x15;
    }
    return 0x14;
}


extern f32 D_801FC8B8;
extern f32 D_801FC8BC;

struct func_801ED6B4_Struct5 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801ED6B4_Struct4 {
    u8 pad0[0x2C];
    struct func_801ED6B4_Struct5 *unk2C;
};
struct func_801ED6B4_Struct3 {
    u8 pad0[0x24];
    struct func_801ED6B4_Struct4 *unk24;
};
struct func_801ED6B4_Struct2 {
    u8 pad0[8];
    struct func_801ED6B4_Struct3 *unk8;
};
struct func_801ED6B4_Struct1 {
    u8 pad0[8];
    struct func_801ED6B4_Struct2 *unk8;
};

s32 func_801ED6B4(s32 arg0, s32 arg1)
{
    if (func_801C0B8C(0x054CC2BA) != 0) {
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801FC8B8;
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FC8BC;
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        return 0x16;
    }
    return 0x15;
}



s32 func_801ED774(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x057A897A) != 0) {
        return 0x17;
    }
    func_801C0B8C(0x054CC2BA);
    return 0x16;
}


extern f32 D_801FC8C0;
extern f32 D_801FC8C4;

struct func_801ED7C4_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801ED7C4_Sub {
    u8 pad0[0x2C];
    struct func_801ED7C4_Data *unk2C;
};

struct func_801ED7C4_Node {
    u8 pad0[8];
    struct func_801ED7C4_Node *unk8;
    u8 pad1[0x18];
    struct func_801ED7C4_Sub *unk24;
};

s32 func_801ED7C4(s32 arg0, s32 arg1) {
    struct func_801ED7C4_Node **slot;

    if (func_801C0B8C(0x05BF339A) != 0) {
        slot = (struct func_801ED7C4_Node **)(u32)&func_801DAAF0.unk24;
        (*slot)->unk8->unk8->unk24->unk2C->unk4 = D_801FC8C0;
        (*slot)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*slot)->unk8->unk8->unk24->unk2C->unkC = D_801FC8C4;
        (*slot)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A80002, 0, 0x1001, 1.0f);
        return 0x18;
    }
    return 0x17;
}


s32 func_801ED8A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x065028FA) != 0) {
        func_801CC470(1, 0x02A80002, 0, 0x1000, 6.0f);
        return 0x19;
    }
    return 0x18;
}


extern s32 func_801C0B8C(u64 time);

s32 func_801ED90C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x07399E9A) != 0) {
        return 0x1A;
    }
    if (func_801C0B8C(0x071E275A) != 0) {
        return 0x19;
    }
    if (func_801C0B8C(0x06FFA2DA) != 0) {
        return 0x19;
    }
    if (func_801C0B8C(0x06D97D3A) != 0) {
        return 0x19;
    }
    return 0x19;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED9A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED9B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED9C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED9D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801ED9E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EDA28.s")



s32 func_801EDBBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x020545E0) != 0) {
        func_801CC470(2, 0x01B80012, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}


extern void func_801CFD34(s32 arg0);
extern s32 D_801FB5A4;

s32 func_801EDC20(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x800;
        func_801CFD34(1);
        func_801CC470(2, 0x01B80009, 0, 0, 6.0f);
        D_801FB5A4 = 0;
        return 4;
    }
    return 3;
}


extern s32 func_801CFD50();

s32 func_801EDCB8(s32 arg0, s32 arg1) {
    if (D_801FB5A4 == 0) {
        goto block_case0;
    }
    if (D_801FB5A4 == 1) {
        goto block_case1;
    }
    return 4;

block_case0:
    if (func_801C0B8C(0x04FFB42A) != 0) {
        func_801CC470(2, 0x01B8000A, 0, 0, 1.0f);
        func_8038D28C(0x1D6);
        D_801FB5A4 = 1;
    }
    goto block_ret4;

block_case1:
    if (func_801CFD50() != 0) {
        func_801CC470(2, 0x01B8001E, 0, 0, 4.0f);
        return 5;
    }

block_ret4:
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EDD84.s")


s32 func_801EDE5C(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x01B80021, 0, 0x1100, 6.0f);
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EDEA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EDEB4.s")



s32 func_801EDEC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05F49B7A) != 0) {
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EDF00.s")


s32 func_801EDFF4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0622623A) != 0) {
        return 0xC;
    }
    return 0xB;
}


s32 func_801EE030(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x02A8001D, 0, 0x1000, 9.0f);
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE098.s")


s32 func_801EE0A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06670C5A) != 0) {
        return 0x11;
    }
    return 0x10;
}


extern f32 D_801FC8D4;

s32 func_801EE0E4(s32 arg0, s32 arg1) {
    u8 **pp;

    if (func_801C0B8C(0x06670C5A) != 0) {
        pp = (u8 **)&D_801DAB14;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*pp + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4) = -197.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*pp + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*pp + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = D_801FC8D4;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*pp + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x800;
        func_801CC470(2, 0x02A80007, 0, 0x100, 3.0f);
        return 0x12;
    }
    return 0x11;
}


extern f32 D_801FC8D8;
extern f32 D_801FC8DC;

struct func_801EE1D8_Params {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

struct func_801EE1D8_Node {
    u8 pad0[0x8];
    struct func_801EE1D8_Node *unk8;
    u8 pad1[0x18];
    struct func_801EE1D8_Node *unk24;
    u8 pad2[0x4];
    struct func_801EE1D8_Params *unk2C;
};

s32 func_801EE1D8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06D97D3A) != 0) {
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801FC8D8;
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = -15.5f;
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8DC;
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(2, 0x02A8001F, 0, 0x100, 3.0f);
        return 0x13;
    }
    return 0x12;
}


s32 func_801EE2D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x070EE51A) != 0) {
        *(f32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)((u8 *)&func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4) = 5120.0f;
        return 0x14;
    }
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE38C.s")


s32 func_801EE550(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02148820) != 0) {
        func_801CC470(3, 0x01B80002, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}


extern f32 D_801FC8E8;

struct func_801EE5B4_Fx {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

struct func_801EE5B4_Obj {
    u8 pad0[0x2C];
    struct func_801EE5B4_Fx *unk2C;
};

struct func_801EE5B4_Node {
    u8 pad0[0x8];
    struct func_801EE5B4_Node *unk8;
    u8 pad1[0x18];
    struct func_801EE5B4_Obj *unk24;
};

s32 func_801EE5B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        ((struct func_801EE5B4_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -197.0f;
        ((struct func_801EE5B4_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EE5B4_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8E8;
        ((struct func_801EE5B4_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x01B8001C, 0, 0, 4.0f);
        return 4;
    }
    return 3;
}


extern void *func_801BF6B0(s32 arg0);

s32 func_801EE6B8(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(0))[3] >= 0xE) {
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE6F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE874.s")



s32 func_801EE954(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x01B80020, 0, 0x1100, 6.0f);
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE99C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE9AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EE9BC.s")


extern f32 D_801FC8F4;

struct func_801EE9F8_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_801EE9F8_Node24 {
    u8 pad0[0x2C];
    struct func_801EE9F8_Leaf *unk2C;
};
struct func_801EE9F8_Node {
    u8 pad0[0x8];
    struct func_801EE9F8_Node *unk8;
    u8 pad1[0x18];
    struct func_801EE9F8_Node24 *unk24;
};
struct func_801EE9F8_Slot {
    struct func_801EE9F8_Node *unk0;
};

s32 func_801EE9F8(s32 arg0, s32 arg1) {
    struct func_801EE9F8_Slot *slot;

    if (func_801C0B8C(0x05F49B7A) != 0) {
        slot = (struct func_801EE9F8_Slot *) &D_801DAB14;
        slot->unk0->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -199.0f;
        slot->unk0->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        slot->unk0->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8F4;
        slot->unk0->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(3, 0x02A8001E, 0x2D, 0x1000, 9.0f);
        return 0xD;
    }
    return 0xC;
}


extern void func_801C13F8(s32 arg0);

s32 func_801EEAFC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0622623A) != 0) {
        return 0xE;
    }
    func_801C13F8(4);
    return 0xD;
}



s32 func_801EEB48(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x02A8001E, 0, 0x1000, 9.0f);
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEB90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEBA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEBB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEBC0.s")


extern f32 D_801FC8F8;

#define LW(p, off) (*(s32 *)((u8 *)(p) + (off)))
#define FUNC_801EEBFC_NODE LW(LW(LW(LW(LW(LW(ptr, 0), 8), 8), 8), 8), 0x24)

s32 func_801EEBFC(s32 arg0, s32 arg1) {
    s32 **ptr;

    if (func_801C0B8C(0x06670C5A) != 0) {
        ptr = (s32 **)&D_801DAB14;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 4) = -202.0f;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 8) = 0.0f;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 12) = D_801FC8F8;
        *(s16 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 18) = 0x800;
        func_801CC470(3, 0x02A80006, 0, 0x100, 3.0f);
        return 0x14;
    }
    return 0x13;
}


extern f32 D_801FC8FC;
extern f32 D_801FC900;

#define FUNC_801EED00_NODE ((s32 *)(((s32 *)(((s32 *)(((s32 *)(((s32 *)(((s32 *)D_801DAB14)[2]))[2]))[2]))[2]))[9]))[11]

s32 func_801EED00(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06D97D3A) != 0) {
        ((f32 *)FUNC_801EED00_NODE)[1] = D_801FC8FC;
        ((f32 *)FUNC_801EED00_NODE)[2] = -15.5f;
        ((f32 *)FUNC_801EED00_NODE)[3] = D_801FC900;
        ((s16 *)FUNC_801EED00_NODE)[9] = 0x800;
        func_801CC470(3, 0x02A80020, 0, 0x100, 3.0f);
        return 0x15;
    }
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEE08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEE74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEE84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEEA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEEB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EEEF8.s")



s32 func_801EF0E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x021C2940) != 0) {
        func_801CC470(4, 0x01B80002, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}


extern f32 D_801FC904;

struct func_801EF144_Fl {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801EF144_Node2 {
    u8 pad0[0x2C];
    struct func_801EF144_Fl *unk2C;
};

struct func_801EF144_Node {
    u8 pad0[8];
    struct func_801EF144_Node *unk8;
    u8 pad1[0x18];
    struct func_801EF144_Node2 *unk24;
};

#define FUNC_801EF144_FL (((struct func_801EF144_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C)

s32 func_801EF144(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        FUNC_801EF144_FL->unk4 = -206.0f;
        FUNC_801EF144_FL->unk8 = 0.0f;
        FUNC_801EF144_FL->unkC = 3.0f;
        FUNC_801EF144_FL->unk12 = 0xC2D;
        func_801CC470(4, 0x01B8000B, 0, 0x1000, D_801FC904);
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF258.s")



s32 func_801EF268(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04B05BAA) != 0) {
        func_801CC470(4, 0x01B8000B, 0, 0x1000, 6.0f);
        return 6;
    }
    return 5;
}


s32 func_801EF2CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04FFB42A) != 0) {
        func_801CC470(4, 0x01B8000B, 0, 0x1000, 2.0f);
        return 7;
    }
    return 6;
}


extern f32 D_801FC908;
extern f32 D_801FC90C;

#define FUNC_801EF330_DEREF8(x) (*(u8 **)((u8 *)(x) + 8))
#define FUNC_801EF330_X5 FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8((u8 *)D_801DAB14)))))
#define FUNC_801EF330_Q (*(u8 **)((u8 *)FUNC_801EF330_X5 + 0x24))
#define FUNC_801EF330_R (*(u8 **)((u8 *)FUNC_801EF330_Q + 0x2C))

s32 func_801EF330(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05E5593A) != 0) {
        *(f32 *)((u8 *)FUNC_801EF330_R + 4) = D_801FC908;
        *(f32 *)((u8 *)FUNC_801EF330_R + 8) = 0.0f;
        *(f32 *)((u8 *)FUNC_801EF330_R + 0xC) = D_801FC90C;
        *(s16 *)((u8 *)FUNC_801EF330_R + 0x12) = 0x800;
        return 8;
    }
    return 7;
}


struct func_801EF420_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801EF420_Sub {
    u8 pad0[0x2C];
    struct func_801EF420_Vec *unk2C;
};

struct func_801EF420_Node {
    u8 pad0[8];
    struct func_801EF420_Node *unk8;
    u8 pad1[0x18];
    struct func_801EF420_Sub *unk24;
};

extern f32 D_801FC910;
extern f32 D_801FC914;

s32 func_801EF420(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x066EAD7A) != 0) {
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801FC910;
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC914;
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(4, 0x01680003, 0, 0x100, 1.0f);
        return 9;
    }
    return 8;
}


extern f32 D_801FC918;
extern f32 D_801FC91C;

struct func_801EF534_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

struct func_801EF534_Node {
    u8 pad0[0x8];
    struct func_801EF534_Node *unk8;
    u8 pad1[0x18];
    struct func_801EF534_Node *unk24;
    u8 pad2[0x4];
    struct func_801EF534_Leaf *unk2C;
};

s32 func_801EF534(s32 arg0, s32 arg1) {
    u32 pp;

    if (func_801C0B8C(0x06D97D3A) != 0) {
        pp = (u32)&func_801DAAF0.unk24;
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801FC918;
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = -15.5f;
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC91C;
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        return 0xA;
    }
    return 9;
}


s32 func_801EF628(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x070EE51A) != 0) {
        ((f32 *)((s32 *)((s32 *)((s32 *)((s32 *)((s32 *)((s32 *)((s32 *)D_801DAB14)[2])[2])[2])[2])[2])[9])[11])[1] = 5120.0f;
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF6A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF714.s")


s32 func_801EF744(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x758231A) != 0) {
        if (D_801BBD54 != 0) {
            return 2;
        } else {
            D_80089354 = 0;
            D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
            return 3;
        }
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF7CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF7F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF834.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF844.s")


extern s32 D_801FD458;
extern s32 D_801FD45C;

s32 func_801EF854(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        D_801FD458 = 0;
        D_801FD45C = 0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF8A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EF9B8.s")


extern void func_801D0498(s32 arg0);

s32 func_801EFA0C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x020545E0) != 0) {
        func_8038D28C(0x628);
        func_801D0498(1);
        return 4;
    }
    return 3;
}



s32 func_801EFA60(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0223CA60) != 0) {
        func_801D0498(0);
        return 5;
    }
    return 4;
}


s32 func_801EFAAC(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x02F1C8C0) != 0) {
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFAE8.s")


s32 func_801EFAF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03D09000) != 0) {
        return 8;
    }
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFB34.s")


void func_801D0498(s32 arg0);
void func_801D0B04(s32 arg0);
extern s32 D_801FB6E4;
extern s32 D_801FB6E8;

s32 func_801EFB44(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0575F59A) != 0) {
        D_801FB6E4 = 0;
        D_801FB6E8 = 0;
        func_801D0498(1);
        func_801D0B04(0);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFBA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFCD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFCE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFCF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFD04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFD14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFD24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFD34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFD44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFD54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFD64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFD74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFDC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFDD0.s")



s32 func_801EFDE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038D28C(0x1D5);
        return 4;
    }
    return 3;
}


s32 func_801EFE2C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xAF79E0) != 0) {
        func_8038D28C(0x7E);
        return 5;
    }
    return 4;
}


s32 func_801EFE78(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01406F40) != 0) {
        func_8038D28C(0x693);
        func_8038D28C(0x100);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EFECC.s")


s32 func_801F008C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02C40200) != 0) {
        func_8038D28C(0x69A);
        return 8;
    }
    if ((func_801D1AC0(0x01680003, 0x14) != 0) || (func_801D1AC0(0x01680003, 0x28) != 0)) {
        func_8038D28C(0x6A3);
    }
    return 7;
}


s32 func_801F0108(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02D34440) != 0) {
        func_8038D28C(0x69B);
        return 9;
    }
    return 8;
}


s32 func_801F0154(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02F1C8C0) != 0) {
        func_8038D2B0(0x629);
        func_8038D2B0(0x62A);
        func_8038D2B0(0x62B);
        return 0xA;
    }
    if ((func_801D1AC0(0x01680003, 0x14) != 0) || (func_801D1AC0(0x01680003, 0x28) != 0)) {
        func_8038D28C(0x6A2);
    }
    return 9;
}


s32 func_801D1220(s32 arg0, s32 arg1);
s32 func_801D1AC0(s32 arg0, s32 arg1);
s32 func_8038D28C(s32 arg0);

s32 func_801F01E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03938700) != 0) {
        return 0xB;
    }
    if ((func_801D1AC0(0x01680003, 0x14) != 0) || (func_801D1AC0(0x01680003, 0x28) != 0)) {
        func_8038D28C(0x6A2);
    }
    if ((func_801D1220(0x01B8000E, 0xE) != 0) || (func_801D1220(0x01B8000E, 0x1E) != 0)) {
        func_8038D28C(0x6A0);
    }
    return 0xA;
}


s32 func_801F0288(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03D09000) != 0) {
        func_8038D2B0(0x62C);
        func_8038D2B0(0x62D);
        return 0xC;
    }
    if ((func_801D1AC0(0x01680003, 0x14) != 0) || (func_801D1AC0(0x01680003, 0x28) != 0)) {
        func_8038D28C(0x6A3);
    }
    if ((func_801D1220(0x01B8000E, 0xE) != 0) || (func_801D1220(0x01B8000E, 0x1E) != 0)) {
        func_8038D28C(0x6A1);
    }
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F0340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F0350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F0360.s")


s32 func_801F0370(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        func_8038D28C(0x101);
        return 0x10;
    }
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F03BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F03CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F03DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F03EC.s")


s32 func_801F03FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x050384BA) != 0) {
        return 0x15;
    }
    return 0x14;
}


s32 func_801F0438(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0549B57A) != 0) {
        func_8038D28C(0x1D7);
        return 0x16;
    }
    return 0x15;
}


s32 func_801F0484(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x054CC2BA) != 0) {
        func_8038D28C(0x7F);
        return 0x17;
    }
    return 0x16;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F04D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F04E0.s")



s32 func_801F04F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05B7927A) != 0) {
        func_8038D28C(0x5C6);
        return 0x1A;
    }
    return 0x19;
}


extern s32 D_801FB748;

s32 func_801F053C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05F49B7A) != 0) {
        func_8038D28C(0x5C7);
        D_801FB748 = 0;
        return 0x1B;
    }
    return 0x1A;
}



s32 func_801F0590(s32 arg0, s32 arg1) {
    if (D_801FB748 == 0) {
        goto case0;
    }
    if (D_801FB748 == 1) {
        goto case1;
    }
    return 0x1B;
case0:
    if (func_801C0B8C(0x06BAF8BA) != 0) {
        func_8038D28C(0x1D9);
        D_801FB748 = 1;
    }
    goto tail;
case1:
    if (func_801C0B8C(0x06D97D3A) != 0) {
        func_8038D28C(0x1DA);
        return 0x1C;
    }
    goto tail;
tail:
    return 0x1B;
}



s32 func_801F0628(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06FFA2DA) != 0) {
        func_8038D28C(0x1DB);
        return 0x1D;
    }
    return 0x1C;
}


s32 func_801F0674(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x07399E9A) != 0) {
        func_8038D28C(0x1DD);
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801F06C0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x075081FA) != 0) {
        func_8038D28C(0xA);
        return 0x1F;
    }
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F070C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F071C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F0940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F0AC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F13A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F1804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F1994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F1B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F1C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F1EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F1FBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F20DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F21F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F2458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F26C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F2C5C.s")


extern f32 D_801FD058;
extern f32 D_801FD05C;
extern f32 D_801FD060;
extern f32 D_801FD064;
extern f32 D_801FD068;
extern f32 D_801FD06C;

s32 func_801F2D68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x040F1FA0) != 0) {
        func_8038BD50(-36.0f, D_801FD058, 48.3f);
        D_8038BD88(D_801FD05C, D_801FD060, 7.6f);
        return 0x10;
    }
    D_801BBBF0.unkE8->unk2C->unk30 = D_801BBBF0.unkE8->unk2C->unk30 + D_801FD064;
    D_801BBBF0.unkE8->unk2C->unk34 = D_801BBBF0.unkE8->unk2C->unk34 + D_801FD068;
    D_801BBBF0.unkE8->unk2C->unk38 = D_801BBBF0.unkE8->unk2C->unk38 + D_801FD06C;
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F2E3C.s")


extern f32 D_801FD098;
extern f32 D_801FD09C;
extern f32 D_801FD0A0;
extern f32 D_801FD0A4;
extern f32 D_801FD0A8;
extern f32 D_801FD0AC;

s32 func_801F2F64(s32 arg0, s32 arg1) {
    struct func_801E7ECC_Struct1 *p;

    if (func_801C0B8C((u64) 0x043440D5) != 0) {
        func_8038BD50(D_801FD098, D_801FD09C, 54.0f);
        D_8038BD88(21.5f, D_801FD0A0, -16.8f);
        return 0x12;
    }
    p = &D_801BBBF0;
    p->unkE8->unk2C->unk30 = p->unkE8->unk2C->unk30 + D_801FD0A4;
    p->unkE8->unk2C->unk34 = p->unkE8->unk2C->unk34 + D_801FD0A8;
    p->unkE8->unk2C->unk38 = p->unkE8->unk2C->unk38 + D_801FD0AC;
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F3034.s")


extern f32 D_801FD0E4;
extern f32 D_801FD0E8;
extern f32 D_801FD0EC;

s32 func_801F321C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x049F1095) != 0) {
        return 0x14;
    }
    D_801BBBF0.unkE8->unk2C->unk30 += D_801FD0E4;
    D_801BBBF0.unkE8->unk2C->unk34 += D_801FD0E8;
    D_801BBBF0.unkE8->unk2C->unk38 += D_801FD0EC;
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F32B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F3420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F35A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F38C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F3A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F3A2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F3A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F3A4C.s")


extern void func_801CCE0C(s32);
extern f32 D_801FB870;
extern f32 D_801FD2A0;

s32 func_801F3A88(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE50(0x64, 0x64, 0x64);
    func_801CCE88(0, 0x64, 0x64, 0x64);
    func_801CCEC8(0, -0x7F, 0x19, 0);
    D_801FB870 = D_801FD2A0;
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F3AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F3EF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F4134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F45C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F484C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F4AD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F4F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F5134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F5528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F57B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F57C8.s")


extern void D_8038BA70(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DDD8[];
extern u8 D_8038DDF0[];
extern u8 D_8038DE08[];
extern u8 D_8038DE20[];
extern u8 D_8038DE38[];
extern u8 D_8038DE50[];

s32 func_801F57D8(s32 arg0, s32 arg1) {
    func_801C2420(0x263, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x264, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x266, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDD8);
    D_8038BA70();
    func_801C2420(0x268, D_8038DDF0);
    D_8038BA70();
    func_801C2420(0x269, D_8038DE08);
    D_8038BA70();
    func_801C2420(0x265, D_8038DE20);
    D_8038BA70();
    func_801C2420(0x84, D_8038DE38);
    D_8038BA70();
    func_801C2420(0x3, D_8038DE50);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F58D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F60D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F60E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F60F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F61A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F62B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6378.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F63CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6468.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6498.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F64DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F66E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6904.s")


typedef struct func_801F6914_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_801F6914_Struct3;

typedef struct func_801F6914_Struct2 {
    u8 pad0[0x30];
    func_801F6914_Struct3 *unk30;
} func_801F6914_Struct2;

typedef struct func_801F6914_Struct1 {
    u8 pad0[0xC];
    func_801F6914_Struct2 *unkC;
} func_801F6914_Struct1;

extern func_801F6914_Struct1 *D_8038D8D0;

s32 func_801F6914(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x43440D5) != 0) {
        D_8038D8D0->unkC->unk30->unk4 = 5120.0f;
        return 5;
    }
    D_8038D8D0->unkC->unk30->unk4 = 0.0f;
    D_8038D8D0->unkC->unk30->unk8 = 0.0f;
    D_8038D8D0->unkC->unk30->unkC = 0.0f;
    D_8038D8D0->unkC->unk30->unk12 = 0;
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F69C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F69D0.s")


struct func_801F6A14_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
    u8 pad2[0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_801F6A14_StructB {
    u8 pad0[0x30];
    struct func_801F6A14_StructC *unk30;
};

struct func_801F6A14_StructA {
    u8 pad0[0x10];
    struct func_801F6A14_StructB *unk10;
};

s32 func_801F6A14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x047149D5) != 0) {
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk4 = 0.0f;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk8 = 0.0f;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unkC = 0.0f;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk12 = 0;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk48 = 0;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk49 = 0;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk4A = 0;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk4B = 0xFF;
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6F10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F6F20.s")


struct func_801F6F64_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801F6F64_StructB {
    u8 pad0[0x30];
    struct func_801F6F64_StructC *unk30;
};

struct func_801F6F64_StructA {
    u8 pad0[0x14];
    struct func_801F6F64_StructB *unk14;
};

s32 func_801F6F64(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8DE81F) != 0) {
        ((struct func_801F6F64_StructA *)D_8038D8D0)->unk14->unk30->unk4 = 0.0f;
        ((struct func_801F6F64_StructA *)D_8038D8D0)->unk14->unk30->unk8 = 5.0f;
        ((struct func_801F6F64_StructA *)D_8038D8D0)->unk14->unk30->unkC = 0.0f;
        return 2;
    }
    return 1;
}


struct func_801F6FE8_Struct1;
struct func_801F6FE8_Struct2;
struct func_801F6FE8_Struct3 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
};
struct func_801F6FE8_Struct2 {
    u8 pad0[0x30];
    struct func_801F6FE8_Struct3 *unk30;
};
struct func_801F6FE8_Struct1 {
    u8 pad0[0x14];
    struct func_801F6FE8_Struct2 *unk14;
};

f64 func_80034C24(u64);                             /* extern */
u64 func_801C0B2C();                                /* extern */
extern f64 D_801FD390;
extern f64 D_801FD398;
extern f64 D_801FD3A0;

s32 func_801F6FE8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0B8C(0xC7E3DF) != 0) {
        ((struct func_801F6FE8_Struct1 *) D_8038D8D0)->unk14->unk30->unk4 = 5120.0f;
        return 3;
    }
    temp_ret = func_801C0B2C();
    ((struct func_801F6FE8_Struct1 *) D_8038D8D0)->unk14->unk30->unk8 = (f32) ((((f64) (f32) ((func_80034C24(temp_ret) / D_801FD390) - D_801FD398) / D_801FD3A0) * 13.0) + 5.0);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F70BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F70CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F70DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F70EC.s")


typedef struct func_801F7130_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F7130_StructB;

typedef struct func_801F7130_StructA {
    u8 pad0[0x30];
    func_801F7130_StructB *unk30;
} func_801F7130_StructA;

typedef struct func_801F7130_StructRoot {
    u8 pad0[0x18];
    func_801F7130_StructA *unk18;
} func_801F7130_StructRoot;

s32 func_801F7130(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x047149D5) != 0) {
        ((func_801F7130_StructRoot *)D_8038D8D0)->unk18->unk30->unk4 = -16.0f;
        ((func_801F7130_StructRoot *)D_8038D8D0)->unk18->unk30->unk8 = 0.0f;
        ((func_801F7130_StructRoot *)D_8038D8D0)->unk18->unk30->unkC = -28.0f;
        ((func_801F7130_StructRoot *)D_8038D8D0)->unk18->unk30->unk12 = 0;
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F71CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F71DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F71EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F71FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F720C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F7250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F72EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F72FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F730C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F731C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F732C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F7370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F752C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F7768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F79EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F79FC.s")


s32 func_801F7A0C(s32 arg0, s32 arg1) {
    func_801C2420(0x11C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAE70 + 0x5C);
    func_801CC4C0(0, func_801DAE70 + 0x60);
    func_801C2420(0x57, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, func_801DAEE8 + 0x30);
    func_801CC4C0(1, func_801DAEE8 + 0x34);
    func_801CC458(2, D_801DAFD8);
    return 1;
}


extern void func_80005670(void *a, void *b);
extern void func_801CC530(void);
extern void func_801CFD28(s32 a);
extern void func_801D03E0(s32 a);
extern void func_801D03EC(s32 a);
extern void func_801D048C(s32 a);
extern void func_801D0A68(s32 a);
extern u8 D_801DAFC4[];

s32 func_801F7AB0(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(func_801DAAF0.unk24, func_801DAE70 + 0x48);
    func_801D048C(1);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(func_801DAAF0.unk24->unk8, func_801DAEE8 + 0x1C);
    func_801D0A68(1);
    func_80005670(*(void **)((u8 *)func_801DAAF0.unk24->unk8 + 0x8), D_801DAFC4);
    func_801CC530();
    return 2;
}


extern f32 D_801FD3A8;

s32 func_801F7B54(s32 arg0, s32 arg1) {
    struct func_801EC5B4_Struct2 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -3.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FD3A8;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(0, 0x01B80017, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}



s32 func_801F7C1C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2F4D60) != 0) {
        func_801CC470(0, 0x01B80017, 0, 0x100, 6.0f);
        return 4;
    }
    return 3;
}


extern f32 D_801FD3AC;

s32 func_801F7C80(s32 arg0, s32 arg1) {
    if (((s32 *) func_801BF6B0(0))[3] >= 3) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -3.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FD3AC;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(0, 0x02A80019, 0, 0, 2.0f);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F7D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F7D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F7D78.s")


s32 func_801F7E4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0132B39F) != 0) {
        return 9;
    }
    return 8;
}


extern f32 D_801FD3B4;
extern f32 D_801FD3B8;

struct func_801F7E88_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801F7E88(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01607A5F) != 0) {
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unk4 = D_801FD3B4;
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unk8 = 0.0f;
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unkC = D_801FD3B8;
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unk12 = 0x1800;
        func_801CC470(0, 0x02A8000D, 0, 0, 3.0f);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F7F5C.s")


extern s32 D_801FB9C8;

s32 func_801F8030(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01BC07DF) != 0) {
        D_801FB9C8 = 0;
        return 0xC;
    }
    return 0xB;
}


extern s32 D_801CFD40();
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801F8078(s32 arg0, s32 arg1) {
    if (D_801FB9C8 == 0) {
        goto case0;
    }
    if (D_801FB9C8 != 1) {
        goto done;
    }
    goto case1;

case0:
    if (func_801C0B8C(0x01F16FBF) != 0) {
        func_801CC4D8(0, 0x01B80019, 0, 0, 6.0f);
        D_801FB9C8 = 1;
    }
    goto done;

case1:
    if (D_801CFD40() == 0) {
        func_801CC470(0, 0x01B80019, 0, 0, 2.5f);
        D_801FB9C8 = 0;
        return 0xD;
    }

done:
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8144.s")


s32 func_801F82C0(s32 arg0, s32 arg1) {
    s32 *temp;

    temp = func_801BF6B0(0);
    if (temp[3] >= 0xC) {
        return 0xF;
    }
    return 0xE;
}


s32 func_801F8300(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x031AFB9F) != 0) {
        return 0x10;
    }
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F833C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F837C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F838C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8544.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8554.s")


s32 func_801F86E4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x047149D5) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = 5120.0f;
        return 0x16;
    }
    return 0x15;
}


extern f32 D_801FD3CC;
extern f32 D_801FD3D0;

struct func_801F8744_Hdr {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801F8744(s32 arg0, s32 arg1) {
    struct func_801F8744_Hdr *hdr;

    hdr = (struct func_801F8744_Hdr *)func_801BF6B0(0);
    if (hdr->unkC >= 0x14) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FD3CC;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 19.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FD3D0;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x02A80012, 0, 0x1000, 6.0f);
        return 0x17;
    }
    return 0x16;
}


extern f32 D_801FB9CC;

s32 func_801F8820(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04ECE275) != 0) {
        func_801CC470(0, 0x02A80012, 0x17, 0x1000, 1.0f);
        func_801CC4D8(0, 0x02A80014, 0, 0, 150.0f);
        D_801FB9CC = func_801DAAF0.unk24->unk8->unk24->unk2C->unk8;
        return 0x18;
    }
    return 0x17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F88C8.s")


extern s32 D_801FB9D0;

s32 func_801F89DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05A3FD75) != 0) {
        func_801CC470(0, 0x02A80016, 0, 0, 3.0f);
        D_801FB9D0 = 0;
        return 0x1A;
    }
    return 0x19;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8A58.s")



s32 func_801F8A68(s32 arg0, s32 arg1) {
    if (D_801FB9D0 >= 0x10) {
        func_8038D28C(0x81);
        return 0x1D;
    }
    D_801FB9D0 += 1;
    return 0x1C;
}



s32 func_801F8AB8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x063C93F5) != 0) {
        func_801CC528();
    }
    return 0x1D;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8AFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8B0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8B50.s")


extern f32 D_801FD3F0;

struct func_801F8C28_Tgt {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F8C28_S3 {
    u8 pad0[0x2C];
    struct func_801F8C28_Tgt *unk2C;
};

struct func_801F8C28_S2 {
    u8 pad0[0x24];
    struct func_801F8C28_S3 *unk24;
};

struct func_801F8C28_S1 {
    u8 pad0[0x8];
    void *unk8;
};

s32 func_801F8C28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01607A5F) != 0) {
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unk4 = 16.5f;
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unkC = D_801FD3F0;
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A8000C, 0, 0, 3.0f);
        return 3;
    }
    return 2;
}


extern f32 D_801FD3F4;

struct func_801F8D0C_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F8D0C_Struct2 {
    u8 pad0[0x2C];
    struct func_801F8D0C_Struct3 *unk2C;
};

struct func_801F8D0C_Struct1 {
    u8 pad0[8];
    struct func_801F8D0C_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801F8D0C_Struct2 *unk24;
};

s32 func_801F8D0C(s32 arg0, s32 arg1) {
    struct func_801F8D0C_Struct1 **pp;

    if (func_801C0B8C(0x017EFEDF) != 0) {
        pp = (struct func_801F8D0C_Struct1 **) &func_801DAAF0.unk24;
        pp += 0;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = D_801FD3F4;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x01B80023, 0, 0x1100, 3.0f);
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8DE8.s")


extern s32 func_801D03F8();
extern s32 D_801FBA50;

s32 func_801F8E30(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801FBA50;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 5;

case0:
    if (func_801C0B8C(0x01F16FBF) != 0) {
        func_801CC4D8(1, 0x01B8001A, 0, 0, 6.0f);
        D_801FBA50 = 1;
    }
    goto ret5;

case1:
    if (func_801D03F8() == 0) {
        func_801CC470(1, 0x01B8001A, 0, 0, 2.5f);
        D_801FBA50 = 0;
        return 6;
    }

ret5:
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F8EFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F90D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F914C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F918C.s")


extern f32 D_801FD404;
extern f32 D_801FD408;

struct func_801F9270_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801F9270_L4 {
    u8 pad0[0x2C];
    struct func_801F9270_Target *unk2C;
};
struct func_801F9270_L3 {
    u8 pad0[0x24];
    struct func_801F9270_L4 *unk24;
};
struct func_801F9270_L2 {
    u8 pad0[0x8];
    struct func_801F9270_L3 *unk8;
};
struct func_801F9270_L1 {
    u8 pad0[0x8];
    struct func_801F9270_L2 *unk8;
};

s32 func_801F9270(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x040F1FA0) != 0) {
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801FD404;
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FD408;
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1B60;
        func_801CC470(1, 0x01B8000B, 0, 0x1000, 1.0f);
        return 0xC;
    }
    return 0xB;
}


extern f32 D_801FD40C;
extern f32 D_801FD410;

#define FUNC_801F9354_NODE (*(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)D_801DAB14 + 0x8) + 0x8) + 0x24))

s32 func_801F9354(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0422738A) != 0) {
        *(f32 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0x4) = D_801FD40C;
        *(f32 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0x8) = 0.0f;
        *(f32 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0xC) = D_801FD410;
        *(s16 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0x12) = 0x1B60;
        func_801CC470(1, 0x0348008B, 0, 0, 2.0f);
        return 0xD;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F949C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F94AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F94BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F94CC.s")


struct func_801F9510_Vals {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F9510_Node {
    u8 pad0[0x2C];
    struct func_801F9510_Vals *unk2C;
};

struct func_801F9510_Link {
    u8 pad0[0x8];
    struct func_801F9510_Link *unk8;
    u8 pad1[0x18];
    struct func_801F9510_Node *unk24;
};

extern f32 D_801FD414;

s32 func_801F9510(s32 arg0, s32 arg1) {
    struct func_801F9510_Node *temp_v0;

    temp_v0 = ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -5.5f;
        ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FD414;
        ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(2, 0x01B80018, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801F95F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2F4D60) != 0) {
        func_801CC470(2, 0x01B80018, 0, 0x100, 6.0f);
        return 3;
    }
    return 2;
}


extern f32 D_801FD418;

struct func_801F965C_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F965C_Struct2 {
    u8 pad0[0x2C];
    struct func_801F965C_Struct3 *unk2C;
};

struct func_801F965C_Struct1 {
    u8 pad0[8];
    struct func_801F965C_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801F965C_Struct2 *unk24;
};

s32 func_801F965C(s32 arg0, s32 arg1) {
    u8 *root;

    if (func_801C0B8C(0xC7E3DF) != 0) {
        root = (u8 *)&func_801DAAF0;
        root += 0x24;
        (*(struct func_801F965C_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk4 = -5.5f;
        (*(struct func_801F965C_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801F965C_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FD418;
        (*(struct func_801F965C_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(2, 0x2A8001A, 0, 0, 2.0f);
        return 4;
    }
    return 3;
}


extern s32 func_801D0A34();
extern void func_801D0A74(s32 a);
extern void func_801D0AEC(s32 a);

s32 func_801F9750(s32 arg0, s32 arg1) {
    if (func_801D0A34() != 0) {
        func_801D0A74(1);
        func_801D0AEC(1);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F97C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F97D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F97E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F97F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9828.s")



s32 func_801F9838(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0xF4240) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F98C0.s")



s32 func_801F98F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04976F75) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 1);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9964.s")


s32 func_801F998C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    if (func_801C0B8C(0x049F1095) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 2);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9A14.s")


s32 func_801F9A44(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    if (func_801C0B8C(0x06166E55) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9ACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9AF4.s")


extern s32 D_801FBB08;

s32 func_801F9B04(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x1E1);
        D_801FBB08 = 0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9B54.s")



s32 func_801F9BEC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        func_8038D28C(0x1E4);
        return 3;
    }
    return 2;
}


s32 func_801F9C38(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC7E3DF) != 0) {
        func_8038D28C(0x3E7);
        return 4;
    }
    return 3;
}


s32 func_801F9C84(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEE8A68) != 0) {
        func_8038D28C(0x3E8);
        return 5;
    }
    return 4;
}


s32 func_801F9CD0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF5AA9F) != 0) {
        func_8038D28C(0x1E5);
        return 6;
    }
    return 5;
}


s32 func_801F9D1C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01650E40) != 0) {
        func_8038D28C(0x1E6);
        return 7;
    }
    return 6;
}


s32 func_801F9D68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x017EFEDF) != 0) {
        func_8038D28C(0x1E8);
        return 8;
    }
    return 7;
}



s32 func_801F9DB4(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x0208531F) != 0) {
        func_8038D28C(0x1F4);
        return 9;
    }
    return 8;
}


extern s32 D_801FBB0C;

s32 func_801F9E00(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0282651F) != 0) {
        func_8038D28C(0x699);
        D_801FBB08 = 0;
        D_801FBB0C = 0;
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F9E5C.s")


s32 func_801FA008(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x040F1FA0) != 0) {
        func_8038D28C(0x698);
        return 0xC;
    }
    return 0xB;
}


s32 func_801FA054(s32 arg0, s32 arg1) {
    if (D_801FBB08 == 0) {
        goto case0;
    }
    if (D_801FBB08 == 1) {
        goto case1;
    }
    return 0xC;
case0:
    if (func_801C0B8C(0x043440D5) != 0) {
        func_8038D28C(0x102);
        D_801FBB08 = 1;
    }
    goto tail;
case1:
    if (func_801C0B8C(0x049F1095) != 0) {
        func_8038D28C(0x1F5);
        return 0xD;
    }
tail:
    return 0xC;
}


s32 func_801FA0EC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06166E55) != 0) {
        func_8038D28C(0xA);
        return 0xE;
    }
    return 0xD;
}


s32 func_801FA138(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x062D51B5) != 0) {
        func_8038D28C(0x1F6);
        return 0xF;
    }
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801FA184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801FA194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801FA1A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801FA1B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801FA1C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801FA1D4.s")

