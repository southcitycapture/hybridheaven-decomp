#include "common.h"


extern void func_8038BEC8(f32);
extern void D_8038C158(void);
extern void func_8038D28C(s32);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        func_8038D28C(0x6B);
        func_8038D28C(0x255);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E1C44.s")

extern s32 func_801C0B8C(u64);


s32 func_801E1D28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x124F80) != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E1D74.s")


extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EB084;
extern f32 D_801EB088;
extern f32 D_801EB08C;
extern f32 D_801EB090;
extern f32 D_801EB094;

s32 func_801E1E4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        func_8038BE98(D_801EB084);
        func_8038BD50(D_801EB088, D_801EB08C, 0x42033333);
        D_8038BD88(D_801EB090, D_801EB094, 0x4207999A);
        return 5;
    }
    return 4;
}


s32 func_801E1ED0(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E1EE0(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E1EF0(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E1F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E1FD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2028.s")


s32 func_801E207C(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E20A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E21D4.s")


s32 func_801E2228(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E2238(s32 arg0, s32 arg1) {
    return 17;
}

/* starting point: func_801E22B0 (file030), whose assembly is 95% the same as this function's */

typedef struct func_801E2248_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2248_Struct;

void *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

s32 func_801E2248(s32 arg0, s32 arg1) {
    func_801E2248_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x12 || func_801C1B1C() == 0) {
        return 0x11;
    }
    return 0x12;
}


struct func_801E229C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E229C(s32 arg0, s32 arg1) {
    if ((((struct func_801E229C_Struct *) func_801BF6B0(7))->unkC < 0x15) || (func_801C1B1C() == 0)) {
        return 0x12;
    }
    return 0x13;
}


extern f32 D_801EB0DC;
extern f32 D_801EB0E0;
extern f32 D_801EB0E4;
extern f32 D_801EB0E8;

s32 func_801E22F0(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB0DC);
    func_8038BD50(D_801EB0E0, 36.5f, 0x418C0000);
    D_8038BD88(D_801EB0E4, D_801EB0E8, 0x4215999A);
    return 0x14;
}


typedef struct func_801E2354_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2354_Struct;


s32 func_801E2354(s32 arg0, s32 arg1) {
    if ((((func_801E2354_Struct *)func_801BF6B0(7))->unkC < 0x1A) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


typedef struct func_801E23A8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E23A8_Struct;


s32 func_801E23A8(s32 arg0, s32 arg1) {
    func_801E23A8_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x1D || func_801C1B1C() == 0) {
        return 0x15;
    }
    return 0x16;
}


s32 func_801E23FC(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E24FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2550.s")


s32 func_801E25A4(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801E25B4(s32 arg0, s32 arg1) {
    return 28;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E25C4.s")


s32 func_801E2618(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801E2628(s32 arg0, s32 arg1) {
    return 31;
}



s32 func_801E2638(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x20;
    }
    return 0x1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E29D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2ABC.s")


s32 func_801E2B88(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB5945F) != 0) {
        return 0x27;
    }
    return 0x26;
}


s32 func_801E2BC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB8A19F) == 0) {
        goto ret27;
    }
    func_8038D28C(0x258);
    D_8038C158();
    return 0x28;
ret27:
    return 0x27;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2C18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2D00.s")


extern void func_8038C4D8(s32, s32);

s32 func_801E2DC0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE04DDF) != 0) {
        func_8038C4D8(2, 1);
        func_8038D28C(0x259);
        return 0x2B;
    }
    return 0x2A;
}



s32 func_801E2E14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF901F) != 0) {
        func_8038D28C(0x6A);
        D_8038C158();
        return 0x2C;
    }
    return 0x2B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2E68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2F44.s")


s32 func_801E3008(s32 arg0, s32 arg1) {
    return 47;
}


s32 func_801E3018(s32 arg0, s32 arg1) {
    return 48;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E3028.s")


s32 func_801E307C(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x32;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E30A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E316C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E31C0.s")


s32 func_801E3214(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x36;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E323C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E3310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E3364.s")


s32 func_801E33B8(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x3A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E33E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E34BC.s")


typedef struct func_801E3590_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E3590_Struct;

s32 func_801E3590(s32 arg0, s32 arg1) {
    if ((((func_801E3590_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x3C;
    }
    return 0x3D;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E35E4.s")


extern f32 D_801EB2F0;
extern f32 D_801EB2F4;
extern f32 D_801EB2F8;

s32 func_801E3638(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB2F0);
    func_8038BD50(D_801EB2F4, 2.0f, 0xC3DA4CCD);
    D_8038BD88(D_801EB2F8, 13.0f, 0xC3D20CCD);
    return 0x3F;
}


s32 func_801E36A0(s32 arg0, s32 arg1) {
    return 64;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E36B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E3704.s")


extern f32 D_801EB2FC;
extern f32 D_801EB300;
extern f32 D_801EB304;
extern f32 D_801EB308;

s32 func_801E3758(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB2FC);
    func_8038BD50(D_801EB300, 2.5f, 0xC3CCB333);
    D_8038BD88(D_801EB304, D_801EB308, 0xC3D40CCD);
    return 0x43;
}


s32 func_801E37C0(s32 arg0, s32 arg1) {
    return 68;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E37D0.s")



s32 func_801E3824(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x55) || (func_801C1B1C() == 0)) {
        return 0x45;
    }
    return 0x46;
}


s32 func_801E3878(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x47;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E38A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E3968.s")


s32 func_801E39BC(s32 arg0, s32 arg1) {
    return 74;
}


s32 func_801E39CC(s32 arg0, s32 arg1) {
    return 75;
}



s32 func_801E39DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x4C;
    }
    return 0x4B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E3A24.s")


s32 func_801E3AFC(s32 arg0, s32 arg1) {
    return 77;
}


s32 func_801E3B0C(s32 arg0, s32 arg1) {
    return 78;
}


s32 func_801E3B1C(s32 arg0, s32 arg1) {
    return 79;
}


s32 func_801E3B2C(s32 arg0, s32 arg1) {
    return 80;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E3B3C(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E3B78.s")


extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);
extern s32 D_801EA4BC;

s32 func_801E3BD0(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE88(1, 0xF8, 0x1D, 8);
    func_801CCEC8(1, 0x39, -0x21, 0x48);
    func_801CCE88(2, 0x84, 0x18, 0x76);
    func_801CCEC8(2, -0x80, 0x1C, -0x5F);
    func_801CCE50(0x30, 9, 4);
    D_801EA4BC = 0x10;
    return 2;
}

extern s32 func_801E3B78();

s32 func_801E3C8C(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x3;
}


s32 func_801E3CB4(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x4;
}


s32 func_801E3CDC(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x5;
}


s32 func_801E3D04(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x6;
}


s32 func_801E3D2C(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x7;
}


s32 func_801E3D54(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x8;
}


s32 func_801E3D7C(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x9;
}


s32 func_801E3DA4(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x9;
}


extern void D_8038BA70(void);
extern void func_801C2420(s32, void *);
extern s32 func_801C2570(s32, void *);
extern void func_8038BA8C(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 func_8038DDD4[];
extern u8 D_8038DE08[];
extern u8 D_8038DF70[];

s32 func_801E3DCC(s32 arg0, s32 arg1) {
    func_801C2420(0x263, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x443, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0x444, func_8038DDD4 + 4);
    D_8038BA70();
    func_801C2420(0x445, func_8038DDD4 + 0x1C);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DE08);
    D_8038BA70();
    ((s32 *)D_8038DF70)[1] = 0x3000;
    if (func_801C2570(0x43C, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    ((s32 *)D_8038DF70)[4] = 0xE000;
    if (func_801C2570(0x2DD, D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E3ED4.s")


s32 func_801E4778(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4788(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4798(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E47A8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E47B8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E47C8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E47D8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E47E8(s32 arg0, s32 arg1) {
    return 9;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E47F8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E483C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E484C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E485C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E486C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E487C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E488C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E489C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E48AC(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E48BC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4900(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4910(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4920(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4930(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4940(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4950(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4960(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4970(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E4980(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E49C4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E49D4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E49E4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E49F4(s32 arg0, s32 arg1) {
    return 5;
}


extern s32 D_801EA570;
extern s32 D_801EA574;

void func_801E4A04(void) {
    D_801EA570 = 0;
    D_801EA574 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E4A18.s")


s32 func_801E4C38(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD7261F) != 0) {
        func_801E4A04();
        return 6;
    }
    return 5;
}

extern s32 func_801E4A18();

s32 func_801E4C84(s32 arg0, s32 arg1) {
    func_801E4A18();
    return 0x7;
}


s32 func_801E4CAC(s32 arg0, s32 arg1) {
    func_801E4A18();
    return 0x8;
}


s32 func_801E4CD4(s32 arg0, s32 arg1) {
    func_801E4A18();
    return 0x9;
}


s32 func_801E4CFC(s32 arg0, s32 arg1) {
    func_801E4A18();
    return 0x9;
}



s32 func_801E4D24(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4D68(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4D78(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4D88(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4D98(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4DA8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4DB8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4DC8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4DD8(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E4DE8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4E2C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4E3C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4E4C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4E5C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4E6C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4E7C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4E8C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4E9C(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E4EAC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4EF0(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4F00(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4F10(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4F20(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4F30(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4F40(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4F50(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4F60(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E4F70(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4FB4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4FC4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4FD4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4FE4(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4FF4(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5004(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5014(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5024(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E5034(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E5078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E5204.s")

extern s32 func_801E5204();

s32 func_801E52D4(s32 arg0, s32 arg1) {
    func_801E5204();
    return 0x3;
}


s32 func_801E52FC(s32 arg0, s32 arg1) {
    func_801E5204();
    return 0x4;
}


s32 func_801E5324(s32 arg0, s32 arg1) {
    func_801E5204();
    return 0x5;
}


s32 func_801E534C(s32 arg0, s32 arg1) {
    func_801E5204();
    return 0x6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E5374.s")


s32 func_801E5538(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5548(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5558(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E5568(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E5578(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E55BC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E55CC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E55DC(s32 arg0, s32 arg1) {
    return 4;
}


extern s32 func_801C7DB4();
extern s32 D_801EA65C;

s32 func_801E55EC(s32 arg0, s32 arg1) {
    D_801EA65C = 0;
    func_801C7DB4();
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E561C.s")


extern void func_801C7F10();

s32 func_801E5858(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF901F) != 0) {
        func_801C7F10();
        func_801C7DB4();
        func_8038D28C(0x25A);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E58B4.s")


s32 func_801E5D50(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5D60(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E5D70(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E5D80(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E5D90(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E5DA0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E5DE4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E5DF4(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 D_801EA694;

s32 func_801E5E04(s32 arg0, s32 arg1) {
    D_801EA694 = 0;
    return 0x4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E5E1C.s")


s32 func_801E5F78(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5F88(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5F98(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5FA8(s32 arg0, s32 arg1) {
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E5FB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E604C.s")

extern s32 func_801CC470(s32, s32, s32, s32, f32);

struct func_801E60B4_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};

struct func_801E60B4_Struct_D {
    u8 pad[0x2C];
    struct func_801E60B4_Struct_F *unk2C;
};

struct func_801E60B4_Struct_C {
    u8 pad[0x24];
    struct func_801E60B4_Struct_D *unk24;
};

struct func_801E60B4_Struct_B {
    u8 pad[0x8];
    struct func_801E60B4_Struct_C *unk8;
};

extern struct func_801E60B4_Struct_B *D_801DAB14;

s32 func_801E60B4(s32 arg0, s32 arg1) {
    struct func_801E60B4_Struct_D *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348006B, 0, 0x100, 5.0f);
        return 3;
    }
    return 2;
}


s32 func_801E6170(s32 arg0, s32 arg1) {
    return 4;
}


extern f32 D_801EB390;
extern f32 D_801EB394;

s32 func_801E6180(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDBBA0) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801EB390;
        D_801DAB14->unk8->unk24->unk2C->unk8 = D_801EB394;
        D_801DAB14->unk8->unk24->unk2C->unkC = 36.5f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1C00;
        return 5;
    }
    return 4;
}


extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 D_801EA6EC;

s32 func_801E6234(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        func_801CC4D8(0, 0x0348006D, 0, 0, 3.0f);
        D_801EA6EC = 0;
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E62A0.s")


s32 func_801E63A4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E63B4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E63C4(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E63D4(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E63E4(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E63F4(s32 arg0, s32 arg1) {
    return 13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E6404.s")


s32 func_801E6458(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E6468(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E6478(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801CC4D8(0, 0x0348006D, 0, 0, 3.0f);
        return 0x11;
    }
    return 0x10;
}

extern s32 func_801CE274();

s32 func_801E64DC(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006D, 0, 0, 3.0f);
        return 0x12;
    }
    return 0x11;
}


s32 func_801CE284(void);

s32 func_801E6534(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x13;
    }
    return 0x12;
}


s32 func_801E6564(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_801CC4D8(0, 0x0348006C, 0, 0, 10.0f);
        return 0x14;
    }
    return 0x13;
}


s32 func_801E65C8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006C, 0, 0, 8.0f);
        return 0x15;
    }
    return 0x14;
}


s32 func_801E6620(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E6630(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB8A19F) != 0) {
        func_801CC4D8(0, 0x0348006E, 0, 0, 3.0f);
        return 0x17;
    }
    return 0x16;
}



s32 func_801E6694(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006E, 0, 0, 5.0f);
        return 0x18;
    }
    return 0x17;
}


s32 func_801E66EC(s32 arg0, s32 arg1) {
    return 25;
}


extern f32 D_801EB398;
extern f32 D_801EB39C;
extern struct func_801E77A0_A func_801DAAF0;

s32 func_801E66FC(s32 arg0, s32 arg1) {
    u8 *p;

    if (func_801C0B8C(0xD7261F) != 0) {
        p = (u8 *) &func_801DAAF0;
        p += 0x24;
        *(f32 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 4) = D_801EB398;
        *(f32 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 8) = 0.0f;
        *(f32 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 0xC) = D_801EB39C;
        *(s16 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 0x12) = 0x1000;
        func_801CC470(0, 0x03480070, 0, 1, 1.0f);
        return 0x1A;
    }
    return 0x19;
}



s32 func_801E67D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF901F) != 0) {
        func_801CC470(0, 0x03480070, 0, 0, 10.0f);
        func_8038D28C(0x23B);
        return 0x1B;
    }
    return 0x1A;
}


s32 func_801E683C(s32 arg0, s32 arg1) {
    return 28;
}


s32 func_801E684C(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E685C(s32 arg0, s32 arg1) {
    return 30;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E686C.s")


s32 func_801E68C0(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E68D0(s32 arg0, s32 arg1) {
    return 33;
}


s32 func_801E68E0(s32 arg0, s32 arg1) {
    return 34;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E68F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E6944.s")


s32 func_801E6998(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x03480066, 0, 0, 3.0f);
    D_801EA6EC = 0;
    return 0x25;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E69E4.s")


s32 func_801E6AE8(s32 arg0, s32 arg1) {
    return 39;
}


typedef struct func_801E6AF8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6AF8_Struct;

s32 func_801E6AF8(s32 arg0, s32 arg1) {
    if ((((func_801E6AF8_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x27;
    }
    return 0x28;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E6B4C.s")


s32 func_801E6BA0(s32 arg0, s32 arg1) {
    return 42;
}


s32 func_801E6BB0(s32 arg0, s32 arg1) {
    return 43;
}


s32 func_801E6BC0(s32 arg0, s32 arg1) {
    return 44;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E6BD0.s")


s32 func_801E6C24(s32 arg0, s32 arg1) {
    return 46;
}


s32 func_801E6C34(s32 arg0, s32 arg1) {
    return 46;
}



s32 func_801E6C44(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E6C88_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_801E6C88_Struct_E {
    u8 pad[0x2C];
    struct func_801E6C88_Struct_F *unk2C;
};
struct func_801E6C88_Struct_D {
    u8 pad[0x24];
    struct func_801E6C88_Struct_E *unk24;
};
struct func_801E6C88_Struct_C {
    u8 pad[0x8];
    struct func_801E6C88_Struct_D *unk8;
};
struct func_801E6C88_Struct_B {
    u8 pad[0x8];
    struct func_801E6C88_Struct_C *unk8;
};

s32 func_801E6C88(s32 arg0, s32 arg1) {
    struct func_801E6C88_Struct_E *temp_v0;

    temp_v0 = ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0348007D, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E6D54(s32 arg0, s32 arg1) {
    return 3;
}


struct func_801E6D64_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};

struct func_801E6D64_Struct_E {
    u8 pad[0x2C];
    struct func_801E6D64_Struct_F *unk2C;
};

struct func_801E6D64_Struct_D {
    u8 pad[0x24];
    struct func_801E6D64_Struct_E *unk24;
};

struct func_801E6D64_Struct_C {
    u8 pad[0x8];
    struct func_801E6D64_Struct_D *unk8;
};

struct func_801E6D64_Struct_B {
    u8 pad[0x8];
    struct func_801E6D64_Struct_C *unk8;
};

s32 func_801E6D64(s32 arg0, s32 arg1) {
    struct func_801E6D64_Struct_B **pp;

    if (func_801C0B8C(0xDBBA0) != 0) {
        pp = (struct func_801E6D64_Struct_B **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = -42.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = 43.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x6AA;
        return 4;
    }
    return 3;
}


s32 func_801E6E24(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E6E34(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E6E44(s32 arg0, s32 arg1) {
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E6E54.s")

extern s32 D_801EA7AC;
extern s32 func_801D51F0(s32 a0);

s32 func_801E6EA8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x0348001D, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E6F00.s")


s32 func_801E7010(s32 arg0, s32 arg1) {
    return 11;
}

/* starting point: func_801E22B0 (file030), whose assembly is 95% the same as this function's */

typedef struct func_801E7020_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7020_Struct;


s32 func_801E7020(s32 arg0, s32 arg1) {
    func_801E7020_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x12 || func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}


struct func_801E7074_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E7074(s32 arg0, s32 arg1) {
    if ((((struct func_801E7074_Struct *) func_801BF6B0(7))->unkC < 0x15) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}



s32 func_801E70C8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480069, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7120.s")


s32 func_801E733C(s32 arg0, s32 arg1) {
    return 16;
}


typedef struct func_801E734C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E734C_Struct;


s32 func_801E734C(s32 arg0, s32 arg1) {
    if ((((func_801E734C_Struct *)func_801BF6B0(7))->unkC < 0x1A) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E73A0.s")


s32 func_801E73F4(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480069, 0, 0, 3.0f);
    func_801D51F0(1);
    return 0x13;
}


extern s32 func_801D5194();

s32 func_801E7444(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480069, 0, 0, 4.0f);
        return 0x14;
    }
    return 0x13;
}


s32 func_801D51A4(void);

s32 func_801E749C(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 21;
    }
    return 20;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E74DC.s")


s32 func_801E7530(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E7540(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E7550(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(1, 0x0348006A, 0, 0, 3.0f);
        D_801EA7AC = 0;
        return 0x19;
    }
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E75B8.s")


s32 func_801E76C4(s32 arg0, s32 arg1) {
    return 27;
}



s32 func_801E76D4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB8A19F) != 0) {
        func_801CC4D8(1, 0x0348006F, 0, 0, 3.0f);
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801E7738(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348006F, 0, 0, 5.0f);
        return 0x1D;
    }
    return 0x1C;
}


s32 func_801E7790(s32 arg0, s32 arg1) {
    return 30;
}


struct func_801E77A0_A { u8 pad0[0x24]; struct func_801E77A0_B *unk24; };
struct func_801E77A0_B { u8 pad0[0x8]; struct func_801E77A0_C *unk8; };
struct func_801E77A0_C { u8 pad0[0x8]; struct func_801E77A0_D *unk8; };
struct func_801E77A0_D { u8 pad0[0x24]; struct func_801E77A0_E *unk24; };
struct func_801E77A0_E { u8 pad0[0x2C]; struct func_801E77A0_F *unk2C; };
struct func_801E77A0_F { u8 pad0[0x4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };



s32 func_801E77A0(s32 arg0, s32 arg1)
{
  struct func_801E77A0_B **pp;
  if (func_801C0B8C(0xD7261F) != 0)
  {
    pp = &func_801DAAF0.unk24;
    pp += 0;
    (*pp)->unk8->unk8->unk24->unk2C->unk4 = 11.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unkC = -424.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0xF1C;
    func_801CC470(1, 0x03480016, 0, 1, 1.0f);
    return 0x1F;
  }
  return 0x1E;
}



s32 func_801E7884(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0xEF901F) != 0) {
        func_801CC470(1, 0x03480016, 0, 0, 4.0f);
        return 0x20;
    }
    return 0x1F;
}


s32 func_801E78E8(s32 arg0, s32 arg1) {
    return 33;
}


s32 func_801E78F8(s32 arg0, s32 arg1) {
    struct func_801E77A0_B **pp;

    if (func_801C0B8C(0x11D56E0) != 0) {
        pp = (struct func_801E77A0_B **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = 14.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = -424.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0;
        return 0x22;
    }
    return 0x21;
}


s32 func_801E79B4(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E79C4(s32 arg0, s32 arg1) {
    return 36;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E79D4.s")



s32 func_801E7A28(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x0348007F, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x26;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7A80.s")


s32 func_801E7C10(s32 arg0, s32 arg1) {
    return 40;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7C20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7C74.s")


s32 func_801E7CC8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480071, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x2B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7D20.s")


s32 func_801E7E30(s32 arg0, s32 arg1) {
    return 45;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7E94.s")



s32 func_801E7EE8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480068, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x30;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7F40.s")


s32 func_801E8050(s32 arg0, s32 arg1) {
    return 50;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E80B4.s")


s32 func_801E8108(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480067, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x35;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8160.s")


s32 func_801E8270(s32 arg0, s32 arg1) {
    return 55;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8280.s")



s32 func_801E82D4(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x55) || (func_801C1B1C() == 0)) {
        return 0x38;
    }
    return 0x39;
}



s32 func_801E8328(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480072, 0, 0, 30.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x3A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8380.s")



s32 func_801E8490(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        return 0x3C;
    }
    return 0x3B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E84C0.s")


s32 func_801E8514(s32 arg0, s32 arg1) {
    return 62;
}


s32 func_801E8524(s32 arg0, s32 arg1) {
    return 63;
}


s32 func_801E8534(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801CC4D8(1, 0x03480073, 0, 0, 3.0f);
        return 0x40;
    }
    return 0x3F;
}



s32 func_801E8598(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480073, 0, 0, 4.0f);
        func_801D51F0(1);
        return 0x41;
    }
    return 0x40;
}



s32 func_801E85F8(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 66;
    }
    return 65;
}


s32 func_801E8638(s32 arg0, s32 arg1) {
    return 66;
}

extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

s32 func_801E8648(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x493E0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 9, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E86D0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E8700(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E8710(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E8720(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E8730(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E8740(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E8750(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E8760(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E8770(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E8780(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        func_8038D28C(0xA);
        return 0xB;
    }
    return 0xA;
}



s32 func_801E8810(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 11;
    }
    return 12;
}


s32 func_801E8838(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E8848(s32 arg0, s32 arg1) {
    return 1;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E9DF0[];

s32 func_801E8858(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9DF0);
    return 2;
}


s32 func_8038CBF0(void);

s32 func_801E888C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E88BC.s")



s32 func_801E8924(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E8954(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E897C.s")



s32 func_801E89CC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}


s32 func_801E89FC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8A24.s")



s32 func_801E8A74(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA;
    }
    return 0xB;
}


s32 func_801E8AA4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8ACC.s")



s32 func_801E8B34(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xD;
    }
    return 0xE;
}


extern u8 D_801E9E6C[];

s32 func_801E8B64(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9E6C);
    return 15;
}



s32 func_801E8B98(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x10;
    }
    return 0xF;
}


s32 func_801E8BC8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8BF0.s")



s32 func_801E8C58(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801E8C88(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8CB0.s")



s32 func_801E8D18(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x15;
    }
    return 0x16;
}


extern u8 D_801E9EF4[];

s32 func_801E8D48(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9EF4);
    return 23;
}



s32 func_801E8D7C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x18;
    }
    return 0x17;
}


s32 func_801E8DAC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x19;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8DD4.s")



s32 func_801E8E3C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1A;
    }
    return 0x1B;
}


s32 func_801E8E6C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8E94.s")



s32 func_801E8EE4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1D;
    }
    return 0x1E;
}


s32 func_801E8F14(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8F3C.s")



s32 func_801E8F8C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E8FBC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x22;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E8FE4.s")



s32 func_801E904C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x23;
    }
    return 0x24;
}


extern u8 D_801EA038[];

s32 func_801E907C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA038);
    return 37;
}



s32 func_801E90B0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x26;
    }
    return 0x25;
}


s32 func_801E90E0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x27;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E9108.s")



s32 func_801E9170(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x28;
    }
    return 0x29;
}


s32 func_801E91A0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2A;
}


s32 func_801E91C8(s32 arg0, s32 arg1) {
    return 43;
}


s32 func_801E91D8(s32 arg0, s32 arg1) {
    return 44;
}


s32 func_801E91E8(s32 arg0, s32 arg1) {
    return 45;
}


s32 func_801E91F8(s32 arg0, s32 arg1) {
    return 46;
}


typedef struct func_801E9208_Struct {
    s32 w[9];
} func_801E9208_Struct;

s32 func_801C18CC(s32 arg0, func_801E9208_Struct *arg1);
extern func_801E9208_Struct D_801EA9E0;

s32 func_801E9208(s32 arg0, s32 arg1) {
    func_801E9208_Struct sp1C;

    sp1C = D_801EA9E0;
    func_801C18CC(3, &sp1C);
    return 47;
}



s32 func_801E926C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2F;
    }
    return 0x30;
}


extern u8 D_801EA098[];

s32 func_801E929C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA098);
    return 49;
}



s32 func_801E92D0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x32;
    }
    return 0x31;
}


s32 func_801E9300(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x33;
}


typedef struct func_801E9328_Struct {
    s32 w[9];
} func_801E9328_Struct;

extern func_801E9328_Struct D_801EAA04;

s32 func_801E9328(s32 arg0, s32 arg1) {
    func_801E9328_Struct sp1C;

    sp1C = D_801EAA04;
    func_801C18CC(3, &sp1C);
    return 52;
}



s32 func_801E938C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x34;
    }
    return 0x35;
}


s32 func_801E93BC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x36;
}


typedef struct func_801E93E4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E93E4_Struct;

extern func_801E93E4_Struct D_801EAA28;

s32 func_801E93E4(s32 arg0, s32 arg1) {
    func_801E93E4_Struct sp18;

    sp18 = D_801EAA28;
    func_801C18CC(2, &sp18);
    return 0x37;
}



s32 func_801E944C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x37;
    }
    return 0x38;
}


extern u8 D_801EA0F4[];

s32 func_801E947C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA0F4);
    return 57;
}



s32 func_801E94B0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3A;
    }
    return 0x39;
}


s32 func_801E94E0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3B;
}


typedef struct func_801E9508_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9508_Struct;

extern func_801E9508_Struct D_801EAA40;

s32 func_801E9508(s32 arg0, s32 arg1) {
    func_801E9508_Struct sp18;

    sp18 = D_801EAA40;
    func_801C18CC(2, &sp18);
    return 0x3C;
}



s32 func_801E9570(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3C;
    }
    return 0x3D;
}


s32 func_801E95A0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3E;
}


typedef struct func_801E95C8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E95C8_Struct;

extern func_801E95C8_Struct D_801EAA58;

s32 func_801E95C8(s32 arg0, s32 arg1) {
    func_801E95C8_Struct sp18;

    sp18 = D_801EAA58;
    func_801C18CC(2, &sp18);
    return 0x3F;
}



s32 func_801E9630(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3F;
    }
    return 0x40;
}


s32 func_801E9660(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x41;
}


typedef struct func_801E9688_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9688_Struct;

extern func_801E9688_Struct D_801EAA70;

s32 func_801E9688(s32 arg0, s32 arg1) {
    func_801E9688_Struct sp18;

    sp18 = D_801EAA70;
    func_801C18CC(2, &sp18);
    return 0x42;
}



s32 func_801E96F0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x42;
    }
    return 0x43;
}


s32 func_801E9720(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x44;
}


typedef struct func_801E9748_Struct {
    s32 w[9];
} func_801E9748_Struct;

extern func_801E9748_Struct D_801EAA88;

s32 func_801E9748(s32 arg0, s32 arg1) {
    func_801E9748_Struct sp1C;

    sp1C = D_801EAA88;
    func_801C18CC(3, &sp1C);
    return 69;
}



s32 func_801E97AC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x45;
    }
    return 0x46;
}


extern u8 D_801EA170[];

s32 func_801E97DC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA170);
    return 71;
}



s32 func_801E9810(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x48;
    }
    return 0x47;
}


s32 func_801E9840(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x49;
}


typedef struct func_801E9868_Struct {
    s32 w[9];
} func_801E9868_Struct;

extern func_801E9868_Struct D_801EAAAC;

s32 func_801E9868(s32 arg0, s32 arg1) {
    func_801E9868_Struct sp1C;

    sp1C = D_801EAAAC;
    func_801C18CC(3, &sp1C);
    return 74;
}



s32 func_801E98CC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4A;
    }
    return 0x4B;
}


s32 func_801E98FC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4C;
}


typedef struct func_801E9924_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9924_Struct;

extern func_801E9924_Struct D_801EAAD0;

s32 func_801E9924(s32 arg0, s32 arg1) {
    func_801E9924_Struct sp18;

    sp18 = D_801EAAD0;
    func_801C18CC(2, &sp18);
    return 0x4D;
}



s32 func_801E998C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4D;
    }
    return 0x4E;
}


extern u8 D_801EA1EC[];

s32 func_801E99BC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA1EC);
    return 79;
}



s32 func_801E99F0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x50;
    }
    return 0x4F;
}


s32 func_801E9A20(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x51;
}


typedef struct func_801E9A48_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9A48_Struct;

extern func_801E9A48_Struct D_801EAAE8;

s32 func_801E9A48(s32 arg0, s32 arg1) {
    func_801E9A48_Struct sp18;

    sp18 = D_801EAAE8;
    func_801C18CC(2, &sp18);
    return 0x52;
}



s32 func_801E9AB0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x52;
    }
    return 0x53;
}


s32 func_801E9AE0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x54;
}


typedef struct func_801E9B08_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9B08_Struct;

extern func_801E9B08_Struct D_801EAB00;

s32 func_801E9B08(s32 arg0, s32 arg1) {
    func_801E9B08_Struct sp18;

    sp18 = D_801EAB00;
    func_801C18CC(2, &sp18);
    return 0x55;
}



s32 func_801E9B70(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x55;
    }
    return 0x56;
}


extern u8 D_801EA230[];

s32 func_801E9BA0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA230);
    return 87;
}



s32 func_801E9BD4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x58;
    }
    return 0x57;
}


s32 func_801E9C04(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x59;
}


typedef struct func_801E9C2C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9C2C_Struct;

extern func_801E9C2C_Struct D_801EAB18;

s32 func_801E9C2C(s32 arg0, s32 arg1) {
    func_801E9C2C_Struct sp18;

    sp18 = D_801EAB18;
    func_801C18CC(2, &sp18);
    return 0x5A;
}



s32 func_801E9C94(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5A;
    }
    return 0x5B;
}


s32 func_801E9CC4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5C;
}


s32 func_801E9CEC(s32 arg0, s32 arg1) {
    return 93;
}


s32 func_801E9CFC(s32 arg0, s32 arg1) {
    return 94;
}


extern void func_8038CD3C(void *);
extern u8 D_801EA254[];

s32 func_801E9D0C(s32 arg0, s32 arg1) {
    func_8038CD3C(D_801EA254);
    return 0x5F;
}


extern void func_8038CF3C(s32, s32);

s32 func_801E9D3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2932E0) != 0) {
        func_8038CF3C(1, 0x2D);
        return 0x60;
    }
    return 0x5F;
}


s32 func_8038CF94(void);

s32 func_801E9D88(s32 arg0, s32 arg1) {
    if (func_8038CF94() != 0) {
        return 0x61;
    }
    return 0x60;
}


s32 func_801E9DB8(s32 arg0, s32 arg1) {
    return 97;
}


s32 func_801E9DC8(s32 arg0, s32 arg1) {
    return 98;
}


s32 func_801E9DD8(s32 arg0, s32 arg1) {
    return 99;
}

