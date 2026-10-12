#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038D28C(s32 a);


s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038D28C(0x68);
    func_8038BED4();
    return 1;
}


extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E6898;
extern f32 D_801E689C;
extern f32 D_801E68A0;
extern f32 D_801E68A4;
extern f32 D_801E68A8;
extern f32 D_801E68AC;
extern f32 D_801E68B0;

s32 func_801E1C14(s32 arg0, s32 arg1) {
    f32 fv0;
    f32 fv1;
    f32 ft4;

    fv0 = D_801E6898;
    fv1 = D_801E689C;
    ft4 = D_801E68A0;
    if (func_8038BEF8(0.0f, 4.0f, -11.5f, 48.5f, D_801E68A4, D_801E68A8, D_801E68AC, D_801E68B0, fv0, fv1, ft4, fv0, fv1, ft4) != 0) {
        func_8038BED4();
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E1CC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E1D9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E1E6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E1F40.s")


s32 func_801E2004(s32 arg0, s32 arg1) {
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E2014.s")

extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);

extern f32 D_801E6940;
extern f32 D_801E6944;

s32 func_801E2068(s32 arg0, s32 arg1) {
    func_8038BD50(D_801E6940, 53.0f, 7.2f);
    D_8038BD88(D_801E6944, 65.5f, 0.0f);
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E20C0.s")


s32 func_801E2114(s32 arg0, s32 arg1) {
    return 11;
}



s32 func_801E2124(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 0xC;
    }
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E216C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E2240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E2314.s")


extern void func_8038BE98(f32);
extern f32 D_801E69A8;

s32 func_801E23C0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35001) != 0) {
        func_8038BED4();
        func_8038BE98(D_801E69A8);
        return 0x10;
    }
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E2418.s")


s32 func_801E24D8(s32 arg0, s32 arg1) {
    return 18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E24E8.s")


extern f32 D_801E69D0;
extern f32 D_801E69D4;
extern f32 D_801E69D8;
extern f32 D_801E69DC;

s32 func_801E253C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E69D0);
    func_8038BD50(D_801E69D4, 8.5f, -19.6f);
    D_8038BD88(D_801E69D8, D_801E69DC, 23.3f);
    return 0x14;
}


struct func_801E25A4_Struct {
    u8 pad[0xC];
    s32 unkC;
};

struct func_801E25A4_Struct *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

s32 func_801E25A4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x19) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


extern void func_8038BEAC(void);
extern f32 D_801E69E0;
extern f32 D_801E69E4;

s32 func_801E25F8(s32 arg0, s32 arg1) {
    func_8038BEAC();
    func_8038BD50(0.0f, 0.0f, -14.4f);
    D_8038BD88(D_801E69E0, D_801E69E4, 3.2f);
    return 0x16;
}


s32 func_801E2650(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1E) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}


extern f32 D_801E69E8;
extern f32 D_801E69EC;
extern f32 D_801E69F0;
extern f32 D_801E69F4;
extern f32 D_801E69F8;

s32 func_801E26A4(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E69E8);
    func_8038BD50(D_801E69EC, D_801E69F0, -19.0f);
    D_8038BD88(D_801E69F4, D_801E69F8, 3.7f);
    return 0x18;
}

/* starting point: func_801F57A0 (file028), whose assembly is 95% the same as this function's */

s32 func_801E2708(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E275C(s32 arg0, s32 arg1) {
    return 26;
}


extern void D_8038C158();

s32 func_801E276C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x1B;
    }
    return 0x1A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E27B4.s")



s32 func_801E2890(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5572FF) != 0) {
        func_8038BED4();
        return 0x1D;
    }
    return 0x1C;
}


extern f32 D_801E6A20;
extern f32 D_801E6A24;
extern f32 D_801E6A28;
extern f32 D_801E6A2C;
extern f32 D_801E6A30;
extern f32 D_801E6A34;
extern f32 D_801E6A38;
extern f32 D_801E6A3C;

s32 func_801E28DC(s32 arg0, s32 arg1) {
    f32 sp20;

    sp20 = D_801E6A20;
    if (func_8038BEF8(0.0f, D_801E6A24, 5.7f, 3.6f, D_801E6A28, D_801E6A2C, 3.5f, D_801E6A30, sp20, D_801E6A34, D_801E6A38, sp20, D_801E6A3C, 0.0f) != 0) {
        func_8038BED4();
        return 0x1E;
    }
    return 0x1D;
}


extern f32 D_801E6A40;
extern f32 D_801E6A44;
extern f32 D_801E6A48;
extern f32 D_801E6A4C;
extern f32 D_801E6A50;
extern f32 D_801E6A54;
extern f32 D_801E6A58;

s32 func_801E29A0(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_ft4;

    temp_fv0 = D_801E6A40;
    temp_fv1 = D_801E6A44;
    temp_ft4 = D_801E6A48;
    if (func_8038BEF8(0.0f, D_801E6A4C, temp_fv0, 8.8f, D_801E6A50, D_801E6A54, D_801E6A58, -17.0f, temp_fv1, temp_ft4, temp_fv0, temp_fv1, temp_ft4, temp_fv0) != 0) {
        func_8038BED4();
        return 0x1F;
    }
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E2A58.s")


extern f32 D_801E6A84;
extern f32 D_801E6A88;
extern f32 D_801E6A8C;
extern f32 D_801E6A90;
extern f32 D_801E6A94;
extern f32 D_801E6A98;

s32 func_801E2B1C(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;

    a = D_801E6A84;
    b = D_801E6A88;
    c = D_801E6A8C;
    if (func_8038BEF8(0.0f, D_801E6A90, 0.6f, 15.2f, D_801E6A94, 0.5f, 13.0f, D_801E6A98, a, b, c, a, b, c) != 0) {
        func_8038BED4();
        return 0x21;
    }
    return 0x20;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E2BD8.s")


extern f32 D_801E6AB4;
extern f32 D_801E6AB8;
extern f32 D_801E6ABC;
extern f32 D_801E6AC0;
extern f32 D_801E6AC4;
extern f32 D_801E6AC8;

s32 func_801E2CA4(s32 arg0, s32 arg1) {
    f32 temp_ab4;
    f32 temp_ab8;
    f32 temp_abc;

    temp_ab4 = D_801E6AB4;
    temp_ab8 = D_801E6AB8;
    temp_abc = D_801E6ABC;
    if (func_8038BEF8(0.0f, D_801E6AC0, 0.6f, 14.9f, D_801E6AC4, 0.5f, 15.0f, D_801E6AC8, temp_ab4, temp_ab8, temp_abc, temp_ab4, temp_ab8, temp_abc) != 0) {
        func_8038BED4();
        return 0x23;
    }
    return 0x22;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E2D60.s")


s32 func_801E2E18(s32 arg0, s32 arg1) {
    return 36;
}


s32 func_801E2E28(s32 arg0, s32 arg1) {
    return 37;
}


s32 func_801E2E38(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E2E48(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E2E58(s32 arg0, s32 arg1) {
    return 40;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E2E68(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32 a);
extern void func_801CCE50(s32 a, s32 b, s32 c);
extern void func_801CCE88(s32 a, s32 b, s32 c, s32 d);
extern void func_801CCEC8(s32 a, s32 b, s32 c, s32 d);

s32 func_801E2EA4(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0x4B, 0x7F, 0xFF);
    func_801CCEC8(0, 0, -0x1E, 0x50);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}


s32 func_801E2F08(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2F18(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2F28(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2F38(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E2F48(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E2F58(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E2F68(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E2F78(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E2F88(s32 arg0, s32 arg1) {
    return 10;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E2F98(s32 arg0, s32 arg1) {
    func_801C2420(0x2DB, func_8038DD54 + 0x14);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E2FCC.s")


s32 func_801E3198(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E31A8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E31B8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E31C8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E31D8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E31E8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E31F8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3208(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3218(s32 arg0, s32 arg1) {
    return 10;
}


extern s32 func_801C2570(s32 arg0, void *arg1);
extern void func_8038BA8C(void);
extern s32 D_8038DF70[];

s32 func_801E3228(s32 arg0, s32 arg1) {
    D_8038DF70[1] = 0x800;
    if (func_801C2570(0x462, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}


extern s32 func_801C4DD4(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8);
extern void func_801D5288(void);
extern void func_801D5294(void);
extern void func_801D52A0(void);
extern u8 D_801D52AC[];

s32 func_801E3274(s32 arg0, s32 arg1) {
    func_801C4DD4(0, func_801D5288, func_801D5294, func_801D52A0, D_801D52AC, 0.0f, 1.0f, 0.0f, 0.0f);
    return 2;
}


s32 func_801E32E0(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E32F0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3300(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3310(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E3348(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3358(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3368(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3378(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3388(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3398(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E33A8(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E33B8(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E33C8(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E33D8(s32 arg0, s32 arg1) {
    return 15;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E33E8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E342C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E343C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E344C(s32 arg0, s32 arg1) {
    return 4;
}


extern u8 func_801CE330[];

s32 func_801E345C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB40DC1) != 0) {
        func_801C4DD4(1, func_801CE330 + 0x64, func_801CE330 + 0x70, func_801CE330 + 0x7C, func_801CE330 + 0x88, 0.0f, 1.0f, 0.0f, 0.0f);
        return 5;
    }
    return 4;
}


s32 func_801E34E4(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E34F4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3504(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3514(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3524(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3534(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3544(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3554(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E3564(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E3574(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E3584(s32 arg0, s32 arg1) {
    return 15;
}



s32 func_801E3594(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E35D8(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E35E8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E35F8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3608(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3618(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3628(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3638(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3648(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3658(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3668(s32 arg0, s32 arg1) {
    return 10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E3678.s")


extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern void func_801D517C(s32 a0);
extern void func_801D5188(s32 a0);
extern u8 D_801DB300[];
extern u8 D_801DB64C[];
extern u8 func_801DAAF0[];
extern u8 func_801DAC30[];

s32 func_801E3744(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DB64C);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB300);
    func_801CC530();
    return 2;
}

extern void *D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

struct func_801E37C8_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E37C8_Struct {
    u8 pad0[8];
    struct func_801E37C8_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E37C8_Struct *unk24;
    u8 pad2[4];
    struct func_801E37C8_Struct2 *unk2C;
};

extern f32 D_801E6AE8;

s32 func_801E37C8(s32 arg0, s32 arg1) {
    struct func_801E37C8_Struct *temp_v0;

    temp_v0 = ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E6AE8;
        ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 54.0f;
        ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(0, 0x0348007A, 0, 0, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801E3890(s32 arg0, s32 arg1) {
    return 4;
}


extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

s32 func_801E38A0(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x01680003, 0, 0, 15.0f);
    return 5;
}


extern s32 func_801CE274();
extern void func_801C0D04(s32 a0, s32 a1);

s32 func_801E38E8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01680003, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E394C.s")



s32 func_801E3A8C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480019, 0, 0, 1.0f);
        return 8;
    }
    return 7;
}


s32 func_801CE284(void);

s32 func_801E3AE4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x9;
    }
    return 0x8;
}



s32 func_801E3B14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA7D8C0) != 0) {
        func_801CC470(0, 0x0348001A, 0, 0, 3.0f);
        return 0xA;
    }
    return 9;
}



s32 func_801E3B78(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0xB;
    }
    return 0xA;
}


s32 func_801E3BA8(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E3BB8(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E3BC8(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E3BD8(s32 arg0, s32 arg1) {
    return 15;
}


extern f32 D_801E6B00;

struct func_801E3BE8_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E3BE8_StructC {
    u8 pad[0x2C];
    struct func_801E3BE8_Struct2C *unk2C;
};

struct func_801E3BE8_Struct24 {
    u8 pad[0x24];
    struct func_801E3BE8_StructC *unk24;
};

struct func_801E3BE8_Struct8 {
    u8 pad[0x8];
    struct func_801E3BE8_Struct24 *unk8;
};

s32 func_801E3BE8(s32 arg0, s32 arg1)
{
  struct func_801E3BE8_Struct8 **pp;
  u8 *base;
  if (func_801C0B8C(0x39FBBF))
  {
    func_801CC470(0, 0x0168001F, 0, 1, 1.0f);
    base = func_801DAAF0;
 do { pp = (struct func_801E3BE8_Struct8 **) (base + 0x24); } while (0);
    (*pp)->unk8->unk24->unk2C->unk4 = D_801E6B00;
    (*pp)->unk8->unk24->unk2C->unk8 = 23.0f;
    (*pp)->unk8->unk24->unk2C->unkC = -41.0f;
    (*pp)->unk8->unk24->unk2C->unk12 = 0x1800;
    return 0x10;
  }
  return 0xF;
}


s32 func_801E3CC0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7704C0) != 0) {
        func_801CC470(0, 0x0168001F, 0, 0x102, 2.0f);
        func_801C0D04(4, 0);
        return 0x11;
    }
    return 0x10;
}


struct func_801E3D30_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E3D30_Struct {
    u8 pad0[8];
    struct func_801E3D30_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E3D30_Struct *unk24;
    u8 pad2[4];
    struct func_801E3D30_Vec *unk2C;
};

extern f32 D_801E6B04;

s32 func_801C0DE4(s32, s32, s32);
void func_801C0EB0(s32, s32);
s32 func_801CE2D0(s32, s32);
void func_8038D33C(f32, f32, s32, s32, f32, f32);

s32 func_801E3D30(s32 arg0, s32 arg1) {
    struct func_801E3D30_Vec *v0;

    if (func_801C0DE4(4, 0, 0x40800002) != 0) {
        func_801C0EB0(4, 0);
        return 0x12;
    }
    if ((func_801CE2D0(0x0168001F, 0) != 0) || (func_801CE2D0(0x0168001F, 0x10) != 0)) {
        v0 = (*(struct func_801E3D30_Struct **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(v0->unk4, v0->unk8, v0->unkC, 0x6A7, D_801E6B04, 1.0f);
    }
    return 0x11;
}

extern s32 func_801C0B8C(u64);

struct func_801E3DE8_Struct4 {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_801E3DE8_Struct3 {
    u8 pad[0x2C];
    struct func_801E3DE8_Struct4 *unk2C;
};

struct func_801E3DE8_Struct2 {
    u8 pad[0x24];
    struct func_801E3DE8_Struct3 *unk24;
};

struct func_801E3DE8_Struct1 {
    u8 pad[8];
    struct func_801E3DE8_Struct2 *unk8;
};

extern f32 D_801E6B08;

s32 func_801E3DE8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB40DC1) != 0) {
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk4 = -3.0f;
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801E6B08;
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348001E, 0, 0x100, 5.0f);
        return 0x13;
    }
    return 0x12;
}



s32 func_801E3EB8(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
    return 0x14;
}



s32 func_801E3EE4(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
    return 0x15;
}



s32 func_801E3F10(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
    return 0x16;
}


extern s32 D_801E625C;

s32 func_801E3F3C(s32 arg0, s32 arg1) {
    f32 zero = 0.0f;
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x0 + 0x8) + 0x24) + 0x2C) + 0x8) = zero;
    if (func_801C0B8C(0x4C4B40) != 0) {
        D_801E625C = 0;
        return 0x17;
    }
    return 0x16;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E3FA0.s")


s32 func_801E41A4(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E41B4(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801E41C4(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801E41D4(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801E41E4(s32 arg0, s32 arg1) {
    return 28;
}


s32 func_801E41F4(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E4204(s32 arg0, s32 arg1) {
    return 30;
}



s32 func_801E4214(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801E6B28;

struct func_801E4258_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E4258_Struct {
    u8 pad0[8];
    struct func_801E4258_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E4258_Struct *unk24;
    u8 pad2[4];
    struct func_801E4258_Vec *unk2C;
};

s32 func_801E4258(s32 arg0, s32 arg1) {
    struct func_801E4258_Struct *temp_v0;

    temp_v0 = ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -4.0f;
        ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E6B28;
        ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0348001C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}



s32 func_801E432C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_801CC470(1, 0x0348001C, 0, 0, 3.0f);
        return 3;
    }
    return 2;
}


s32 func_801D51A4(void);

s32 func_801E4390(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        return 0x4;
    }
    return 0x3;
}


s32 func_801E43C0(s32 arg0, s32 arg1) {
    return 5;
}


extern void func_801D51F0(s32 a0);

s32 func_801E43D0(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x0348001D, 0, 0, 4.0f);
    func_801D51F0(1);
    return 6;
}



s32 func_801E4420(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 7;
    }
    return 6;
}


s32 func_801E4460(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 4) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 8;
}


s32 func_801E44B4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 7) || (func_801C1B1C() == 0)) {
        return 8;
    }
    return 0x9;
}


s32 func_801E4508(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E4518(s32 arg0, s32 arg1) {
    return 11;
}


typedef struct func_801E4528_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4528_Struct;


s32 func_801E4528(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}


s32 func_801E457C(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480052, 0, 1, 1.0f);
    return 0xD;
}


s32 func_801E45C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC470(1, 0x03480052, 0, 0x100, 2.0f);
        func_801C0D04(4, 1);
        return 0xE;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E4630.s")


s32 func_801E4754(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E4764(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E4774(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E4784(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E4794(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E47A4(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801E47B4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801E6B34;

struct func_801E47F8_Node {
    u8 pad0[8];
    struct func_801E47F8_Node *unk8;
    u8 pad1[0x18];
    struct func_801E47F8_Mid *unk24;
};

struct func_801E47F8_Mid {
    u8 pad0[0x2C];
    struct func_801E47F8_Target *unk2C;
};

struct func_801E47F8_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E47F8(s32 arg0, s32 arg1) {
    struct func_801E47F8_Mid *temp_v0;

    temp_v0 = ((struct func_801E47F8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 4.0f;
        ((struct func_801E47F8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E47F8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E6B34;
        ((struct func_801E47F8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(2, 0x0320002D, 0, 0x100, 6.0f);
        return 2;
    }
    return 1;
}


s32 func_801E48DC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E48EC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E48FC(s32 arg0, s32 arg1) {
    return 5;
}


extern f32 D_801E6B38;

s32 func_801E490C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB40DC1) != 0) {
        *((f32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) D_801DAB14)[2]))[2]))[2]))[9]))[11]) + 1) = 3.0f;
        *((f32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) D_801DAB14)[2]))[2]))[2]))[9]))[11]) + 2) = 0.0f;
        *((f32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) D_801DAB14)[2]))[2]))[2]))[9]))[11]) + 3) = D_801E6B38;

        func_801CC470(2, 0x0320002E, 0, 0x100, 6.0f);
        return 6;
    }
    return 5;
}


s32 func_801E49E0(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E49F0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4A00(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E4A10(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E4A20(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x0320002F, 0, 0, 5.0f);
    return 0xB;
}


extern s32 func_801D2C10();

s32 func_801E4A68(s32 arg0, s32 arg1) {
    func_801D2C10();
    if (func_801D2C10() != 0) {
        return 0xC;
    }
    return 0xB;
}


extern f32 D_801E6B3C;

s32 func_801E4AA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        *(f32 *)((u8 *)((void **)((void **)((void **)((void **)((void **)D_801DAB14)[2])[2])[2])[9])[11] + 0x4) = 4.0f;
        *(f32 *)((u8 *)((void **)((void **)((void **)((void **)((void **)D_801DAB14)[2])[2])[2])[9])[11] + 0x8) = 0.0f;
        *(f32 *)((u8 *)((void **)((void **)((void **)((void **)((void **)D_801DAB14)[2])[2])[2])[9])[11] + 0xC) = D_801E6B3C;
        func_801CC470(2, 0x03200030, 0, 0, 1.0f);
        return 0xD;
    }
    return 0xC;
}



s32 func_801E4B74(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0xE;
    }
    return 0xD;
}


s32 func_801E4BA4(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E4BB4(s32 arg0, s32 arg1) {
    return 15;
}


extern s32 D_8038C97C();
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E4BC4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
    return 1;
}



s32 func_801E4C30(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E4C60(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4C70(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4C80(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E4C90(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xAAE600) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E4CCC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0x6;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x12, 0, 1);
    func_8038D28C(8);
    return 0x7;
}



s32 func_801E4D40(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E4D68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35001) != 0) {
        func_8038D28C(0x73);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E4DB4.s")



s32 func_801E4E20(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 10;
    }
    D_80089354 = 0;
    return 11;
}


s32 func_801E4E50(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E4E60(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E4E70(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E4E80(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x3D0900) != 0) {
        return 0xF;
    }
    return 0xE;
}


s32 func_801E4EBC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xF;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
    func_8038D28C(8);
    return 0x10;
}



s32 func_801E4F30(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 16;
    }
    return 17;
}



s32 func_801E4F58(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5572FF) != 0) {
        func_8038D28C(0x5D);
        return 0x12;
    }
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E4FA4.s")



s32 func_801E5010(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 19;
    }
    D_80089354 = 0;
    return 20;
}


s32 func_801E5040(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x01312D00) != 0) {
        return 21;
    }
    return 20;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E507C.s")



s32 func_801E50E8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 22;
    }
    return 23;
}


s32 func_801E5110(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E5120(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E5130(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801E5140(s32 arg0, s32 arg1) {
    return 1;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E59D0[];

s32 func_801E5150(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E59D0);
    return 2;
}


s32 func_8038CBF0(void);

s32 func_801E5184(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E51B4.s")



s32 func_801E5204(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E5234(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E525C.s")



s32 func_801E52C4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}


extern u8 D_801E5A84[];

s32 func_801E52F4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5A84);
    return 9;
}



s32 func_801E5328(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA;
    }
    return 0x9;
}


s32 func_801E5358(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E5380.s")



s32 func_801E53E8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E5418(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xE;
}


s32 func_801E5440(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E5450(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E5460(s32 arg0, s32 arg1) {
    return 17;
}


extern u8 D_801E5B04[];

s32 func_801E5470(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5B04);
    return 18;
}



s32 func_801E54A4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x13;
    }
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E54D4.s")



s32 func_801E5524(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}


extern u8 D_801E5B80[];

s32 func_801E5554(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5B80);
    return 22;
}



s32 func_801E5588(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x17;
    }
    return 0x16;
}


s32 func_801E55B8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E55E0.s")



s32 func_801E5630(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x19;
    }
    return 0x1A;
}


extern u8 D_801E5DAC[];

s32 func_801E5660(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5DAC);
    return 27;
}



s32 func_801E5694(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801E56C4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1D;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E56EC.s")



s32 func_801E573C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1E;
    }
    return 0x1F;
}


extern u8 D_801E5FA4[];

s32 func_801E576C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5FA4);
    return 32;
}



s32 func_801E57A0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x21;
    }
    return 0x20;
}


s32 func_801E57D0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x22;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/func_801E57F8.s")



s32 func_801E5848(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801E5878(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x25;
}


s32 func_801E58A0(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E58B0(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E58C0(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E58D0(s32 arg0, s32 arg1) {
    return 40;
}


s32 func_801E58E0(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E58F0(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E5900(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5910(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5920(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E5930(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5940(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5950(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5960(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5970(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0158D940ULL) != 0) {
        func_8038D28C(0x214);
        return 0xA;
    }
    return 9;
}


s32 func_801E59BC(s32 arg0, s32 arg1) {
    return 10;
}

