#include "common.h"

void D_8038BD88(f32, f32, f32);
void func_8038BD50(f32, f32, f32);

extern f32 D_801FBCB0;
extern f32 D_801FBCB4;
extern f32 D_801FBCB8;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BD50(D_801FBCB0, D_801FBCB4, 540.0f);
    D_8038BD88(D_801FBCB8, 90.5f, -49.8f);
    return 1;
}

s32 func_801C0B8C(u64 time);
extern struct func_801E7ECC_Struct1 D_801BBBF0;
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

extern f32 D_801FBCBC;
extern f32 D_801FBCC0;
extern f32 D_801FBCC4;
extern f32 D_801FBCC8;
extern f32 D_801FBCCC;
extern f32 D_801FBCD0;

struct func_801E1C38_Struct {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

s32 func_801E1C38(s32 arg0, s32 arg1) {
    struct func_801E1C38_Struct *temp_v1;

    if (func_801C0B8C(0x01312D00) != 0) {
        return 2;
    }
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk30 = temp_v1->unk30 + D_801FBCBC;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk34 = temp_v1->unk34 + D_801FBCC0;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk38 = temp_v1->unk38 + D_801FBCC4;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk3C = temp_v1->unk3C + D_801FBCC8;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk40 = temp_v1->unk40 + D_801FBCCC;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk44 = temp_v1->unk44 + D_801FBCD0;
    return 1;
}


s32 func_801E1D28(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E1D38(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E1D48(s32 arg0, s32 arg1) {
    return 4;
}


extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E1D58(s32 arg0, s32 arg1) {
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


s32 func_801E1D90(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E1DA0(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E1DB0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E1DC0(s32 arg0, s32 arg1) {
    return 4;
}

extern void D_8038BA70(void);
extern u8 D_8038DD90[];
void func_801C2420(s32 arg0, void *arg1);


s32 func_801E1DD0(s32 arg0, s32 arg1) {
    func_801C2420(0xA1, D_8038DD90);
    D_8038BA70();
    return 1;
}


/* context.h declarations used below, placed early so the function sees them */
extern s32 func_8038D8B8[];
void func_80006214(s32);
extern struct func_801F6914_Struct1 *D_8038D8D0;

struct func_801E1E0C_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E1E0C_Struct1 {
    u8 pad0[0x30];
    struct func_801E1E0C_Struct2 *unk30;
};

struct func_801E1E0C_Struct0 {
    struct func_801E1E0C_Struct1 *unk0;
};

extern void func_80005E44(s32 a, void *b);
extern void func_8012C89C(s32 a, s32 b, s32 c, s32 d);
extern u8 func_8038D830[];

s32 func_801E1E0C(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D8B8[5], func_8038D830 + 0x5C);
    func_80006214(func_8038D8B8[5]);
    func_8012C89C(func_8038D8B8[5], 0, 0xA1, 0);
    ((struct func_801E1E0C_Struct0 *)D_8038D8D0)->unk0->unk30->unk4 = 0.0f;
    ((struct func_801E1E0C_Struct0 *)D_8038D8D0)->unk0->unk30->unk8 = 0.0f;
    ((struct func_801E1E0C_Struct0 *)D_8038D8D0)->unk0->unk30->unkC = 0.0f;
    ((struct func_801E1E0C_Struct0 *)D_8038D8D0)->unk0->unk30->unk12 = 0;
    return 2;
}


s32 func_801E1EB4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E1EC4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E1ED4(s32 arg0, s32 arg1) {
    return 4;
}


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


s32 func_801E2014(s32 arg0, s32 arg1) {
    return 4;
}


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


s32 func_801E2288(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E2298(s32 arg0, s32 arg1) {
    return 2;
}


extern s32 func_8038D28C(s32 arg0);

s32 func_801E22A8(s32 arg0, s32 arg1) {
    func_8038D28C(0x7D);
    return 3;
}


s32 func_801E22D4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E22E4(s32 arg0, s32 arg1) {
    return 4;
}

extern void D_8038C158(void);
void func_8038BEC8(f32);

extern s32 D_801FAFD8;

s32 func_801E22F4(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BD50(4096.0f, 0.0f, 18.0f);
    D_8038BD88(4096.0f, 0.0f, 0.0f);
    if (func_801C0B8C(0x3567E0) != 0) {
        D_801FAFD8 = 0;
        D_8038C158();
        return 1;
    }
    return 0;
}


extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8038BE98(f32);

extern f32 D_801FBCD4, D_801FBCD8, D_801FBCDC, D_801FBCE0, D_801FBCE4, D_801FBCE8, D_801FBCEC, D_801FBCF0, D_801FBCF4, D_801FBCF8, D_801FBCFC, D_801FBD00, D_801FBD04, D_801FBD08, D_801FBD0C, D_801FBD10, D_801FBD14, D_801FBD18, D_801FBD1C, D_801FBD20;

s32 func_801E2378(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;

    if (D_801FAFD8 == 0) goto c0;
    if (D_801FAFD8 == 1) goto c1;
    return 1;
c0:
    a = D_801FBCD4;
    b = D_801FBCD8;
    if (D_8038C17C(0.0f, D_801FBCDC, -15.0f, a, D_801FBCE0, D_801FBCE4, a, D_801FBCE8, D_801FBCEC, 12.5f, D_801FBCF0, -19.5f, D_801FBCF4, D_801FBCF8, b, b) != 0) {
        D_8038C158();
        D_801FAFD8 = 1;
    }
    goto end;
c1:
    do { a = D_801FBCFC; } while (0);
    if (D_8038C17C(0.0f, 7.25f, -18.3f, 20.4f, D_801FBD00, D_801FBD04, D_801FBD08, D_801FBD0C, a, 17.0f, 14.0f, a, 17.0f, 14.0f, 30.0f, 30.0f) != 0) {
        func_8038BE98(D_801FBD10);
        func_8038D28C(0x695);
        func_8038BD50(D_801FBD14, D_801FBD18, 96.618f);
        D_8038BD88(D_801FBD1C, D_801FBD20, 77.525f);
        return 2;
    }
end:
    return 1;
}

extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);
extern f32 D_801FBD24, D_801FBD28, D_801FBD2C, D_801FBD30, D_801FBD34, D_801FBD38;

s32 func_801E2560(s32 arg0, s32 arg1) {
    func_801CCE50(0xFF, 0xFF, 0xFF);
    func_801CCE88(0, 0xFF, 0xFF, 0xFF);
    func_801CCEC8(0, 0, 0, 0x7F);
    if (func_801C0B8C(0x01769A70) != 0) {
        struct func_801E1C38_Struct *p;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk30 += D_801FBD24;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk34 += D_801FBD28;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk38 += D_801FBD2C;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk3C += D_801FBD30;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk40 += D_801FBD34;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk44 += D_801FBD38;
        if (func_801C0B8C(0x01D9C910) != 0) {
            return 3;
        }
    }
    return 2;
}


extern f32 D_801FBD3C;
extern f32 D_801FBD40;
extern f32 D_801FBD44;
extern u8 *D_8008DA88[];


s32 func_801E26A0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0294B4A0) != 0) {
        func_8038BD50(D_801FBD3C, 21.5, 27.0);
        D_8038BD88(D_801FBD40, D_801FBD44, 0.16);
        func_8038D28C(0x694);
        func_80006214(func_8038D8B8[5]);
        D_8008DA88[6][0x22] = 0;
        D_8038C158();
        return 4;
    }
    return 3;
}


extern f32 D_801FBD48;
extern f32 D_801FBD4C;
extern f32 D_801FBD50;
extern f32 D_801FBD54;
extern f32 D_801FBD58;
extern f32 D_801FBD5C;
extern f32 D_801FBD60;
extern f32 D_801FBD64;
extern f32 D_801FBD68;

s32 func_801E2738(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02C27B60) != 0) {
        if (func_801C0B8C(0x02CA1C80) != 0) {
            return 5;
        }
    } else {
        D_8038C17C(0.0f, 3.0f, -18.1f, 20.5f, D_801FBD48, -19.0f, D_801FBD4C, D_801FBD50, D_801FBD54, D_801FBD58, D_801FBD5C, D_801FBD60, D_801FBD64, D_801FBD68, 25.5f, 21.0f);
    }
    return 4;
}


extern f32 D_801FBD6C;
extern f32 D_801FBD70;
extern f32 D_801FBD74;
extern f32 D_801FBD78;
extern f32 D_801FBD7C;

s32 func_801E283C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801FBD6C);
    func_8038BD50(D_801FBD70, D_801FBD74, 27.1f);
    D_8038BD88(D_801FBD78, D_801FBD7C, -3.6f);
    return 6;
}


extern f32 D_801FBD80;
extern f32 D_801FBD84;
extern f32 D_801FBD88;
extern f32 D_801FBD8C;

s32 func_801E28A4(s32 arg0, s32 arg1) {
    struct func_801E1C38_Struct *p;
    f32 delta;

    if (func_801C0B8C(0x36A5420) != 0) {
        if (func_801C0B8C(0x3F3A860) != 0) {
            return 7;
        }
        delta = D_801FBD80;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk34 = p->unk34 + delta;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk40 = p->unk40 + delta;
        return 6;
    }
    if (func_801C0B8C(0x30A32C0) != 0) {
        func_8038BD50(D_801FBD84, D_801FBD88, 90.0f);
        D_8038BD88(71.5f, D_801FBD8C, 75.4f);
    }
    return 6;
}


extern f32 D_801FBD90;
extern f32 D_801FBD94;
extern f32 D_801FBD98;
extern f32 D_801FBD9C;

s32 func_801E2980(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x045E7820) != 0) {
        D_8038C158();
        D_801FAFD8 = 0;
        return 8;
    }
    func_8038BD50(D_801FBD90, D_801FBD94, -2.7f);
    D_8038BD88(D_801FBD98, D_801FBD9C, 6.3f);
    return 7;
}


extern f32 D_801FBDA0, D_801FBDA4, D_801FBDA8, D_801FBDAC, D_801FBDB0, D_801FBDB4, D_801FBDB8, D_801FBDBC, D_801FBDC0, D_801FBDC4, D_801FBDC8, D_801FBDCC;
extern f32 D_801FBDD0, D_801FBDD4, D_801FBDD8, D_801FBDDC, D_801FBDE0, D_801FBDE4, D_801FBDE8, D_801FBDEC;

s32 func_801E2A08(s32 arg0, s32 arg1) {
    f32 a, b, c;
    if (D_801FAFD8 == 0) {
        goto c0;
    }
    if (D_801FAFD8 == 1) {
        goto c1;
    }
    return 8;
c0:
    b = D_801FBDA0;
    c = D_801FBDA4;
    if (D_8038C17C(0.0f, D_801FBDA8, 77.8f, 26.5f, D_801FBDAC, D_801FBDB0, D_801FBDB4, D_801FBDB8, D_801FBDBC, c, D_801FBDC0, D_801FBDC4, D_801FBDC8, D_801FBDCC, b, b) != 0) {
        D_8038C158();
        D_801FAFD8 = 1;
    }
    goto end;
c1:
    a = D_801FBDD0;
    b = D_801FBDD4;
    c = D_801FBDD8;
    if (D_8038C17C(0.0f, D_801FBDDC, 73.6f, 16.3f, D_801FBDE0, 73.5f, D_801FBDE4, -0.5f, a, 16.5f, D_801FBDE8, a, b, D_801FBDEC, c, c) != 0) {
        D_8038C158();
        return 9;
    }
end:
    return 8;
}


extern f32 D_801FBDF0;
extern f32 D_801FBDF4;
extern f32 D_801FBDF8;
extern f32 D_801FBDFC;
extern f32 D_801FBE00;
extern f32 D_801FBE04;
extern f32 D_801FBE08;
extern f32 D_801FBE0C;

s32 func_801E2BC4(s32 arg0, s32 arg1) {
    f32 k;

    if (func_801C0B8C(0x069D4490) != 0) {
        return 0xA;
    }
    k = D_801FBDF0;
    D_8038C17C(0.0f, 19.5f, 70.2f, 10.1f, D_801FBDF4, D_801FBDF8, D_801FBDFC, D_801FBE00, 50.0f, 15.5f, D_801FBE04, 50.5f, D_801FBE08, D_801FBE0C, k, k);
    return 9;
}


/* Exact declaration from context.h (line 237); needed so the in-file build can see the name. */
extern struct func_801EC5B4_Struct0 *D_801DAB14;

extern f32 D_801FBE10;
extern f32 D_801FBE14;
extern f32 D_801FBE18;
extern f32 D_801FBE1C;
extern f32 D_801FBE20;

#define FUNC_801E2CAC_NODE ((u8 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 8) + 0x24) + 0x2C)))

s32 func_801E2CAC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06E80930) != 0) {
        func_8038BE98(D_801FBE10);
        func_8038BD50(D_801FBE14, D_801FBE18, 22.8f);
        D_8038BD88(D_801FBE1C, D_801FBE20, -3.5f);
        *(f32 *)(FUNC_801E2CAC_NODE + 4) = 24.0f;
        *(f32 *)(FUNC_801E2CAC_NODE + 8) = 0.0f;
        *(f32 *)(FUNC_801E2CAC_NODE + 0xC) = 0.0f;
        *(s16 *)(FUNC_801E2CAC_NODE + 0x12) = 0x1800;
        return 0xB;
    }
    return 0xA;
}


void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern f64 func_80034C24();
u64 func_801C0B2C();
struct func_801E7ECC_Struct1;

extern f64 D_801FBE28;
extern f64 D_801FBE30;
extern f64 D_801FBE38;
extern f64 D_801FBE40;
extern f64 D_801FBE48;
extern f64 D_801FBE50;
extern f64 D_801FBE58;
extern f64 D_801FBE60;
extern f64 D_801FBE68;
extern f64 D_801FBE70;
extern f64 D_801FBE78;
extern f64 D_801FBE80;
extern f64 D_801FBE88;
extern f64 D_801FBE90;
extern f64 D_801FBE98;
extern f64 D_801FBEA0;
extern f64 D_801FBEA8;
extern f64 D_801FBEB0;
extern f64 D_801FBEB8;
extern f64 D_801FBEC0;
extern f64 D_801FBEC8;
extern f64 D_801FBED0;
extern f64 D_801FBED8;
extern f64 D_801FBEE0;
extern f64 D_801FBEE8;
extern f64 D_801FBEF0;
extern f64 D_801FBEF8;
extern f64 D_801FBF00;
extern f64 D_801FBF08;
extern f64 D_801FBF10;
extern f64 D_801FBF18;
extern f64 D_801FBF20;
extern f64 D_801FBF28;
extern f64 D_801FBF30;
extern f64 D_801FBF38;
extern f64 D_801FBF40;
extern f64 D_801FBF48;
extern f64 D_801FBF50;
extern f32 D_801FBF58;
extern f32 D_801FBF5C;
extern f32 D_801FBF60;

typedef struct {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801E2D94_Struct3;

typedef struct {
    u8 pad[0x2C];
    func_801E2D94_Struct3 *unk2C;
} func_801E2D94_Struct2;

typedef struct {
    u8 pad[0xE8];
    func_801E2D94_Struct2 *unkE8;
} func_801E2D94_Struct1;

#define S (*(func_801E2D94_Struct1 *)&D_801BBBF0)
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801E2D94_Struct7;

typedef struct {
    u8 pad0[0x2C];
    func_801E2D94_Struct7 *unk2C;
} func_801E2D94_Struct6;

typedef struct {
    u8 pad0[0x24];
    func_801E2D94_Struct6 *unk24;
} func_801E2D94_Struct5;

typedef struct {
    u8 pad0[8];
    func_801E2D94_Struct5 *unk8;
} func_801E2D94_Struct4;

#define N (*(func_801E2D94_Struct4 **)&D_801DAB14)

s32 func_801E2D94(s32 arg0, s32 arg1) {
    f64 z;
    f64 w;
    f64 k;

    if (func_801C0B8C(0x08DAFF90) != 0) {
        return 0xC;
    }
    if (func_801C0B8C(0x08695200) != 0) {
        w = (f32)((f32)(func_80034C24(func_801C0B2C()) / D_801FBE28 - D_801FBE30) / D_801FBE38);
        k = w * D_801FBE40;
        S.unkE8->unk2C->unk30 = k + D_801FBE48;
        S.unkE8->unk2C->unk34 = k + D_801FBE50;
        S.unkE8->unk2C->unk38 = w * D_801FBE58 + D_801FBE60;
        S.unkE8->unk2C->unk3C = w * D_801FBE68 + D_801FBE70;
        S.unkE8->unk2C->unk40 = w * D_801FBE78 + D_801FBE80;
        S.unkE8->unk2C->unk44 = w * D_801FBE88 + D_801FBE90;
        return 0xB;
    }
    if (func_801C0B8C(0x079D9D90) != 0) {
        w = (f32)((f32)(func_80034C24(func_801C0B2C()) / D_801FBE98 - D_801FBEA0) / D_801FBEA8);
        S.unkE8->unk2C->unk30 = w * D_801FBEB0 + D_801FBEB8;
        S.unkE8->unk2C->unk34 = w * D_801FBEC0 + D_801FBEC8;
        S.unkE8->unk2C->unk38 = w * D_801FBED0 + D_801FBED8;
        S.unkE8->unk2C->unk3C = w * D_801FBEE0 + 20.0;
        z = 1.0 - 1.0;
        S.unkE8->unk2C->unk40 = w * z + D_801FBEE8;
        S.unkE8->unk2C->unk44 = w * z + D_801FBEF0;
        return 0xB;
    }
    if (func_801C0B8C(0x072B2CB0) != 0) {
        w = (f32)((f32)(func_80034C24(func_801C0B2C()) / D_801FBEF8 - D_801FBF00) / 7.5);
        k = w * D_801FBF08;
        S.unkE8->unk2C->unk30 = k + D_801FBF10;
        S.unkE8->unk2C->unk34 = k + D_801FBF18;
        S.unkE8->unk2C->unk38 = w * D_801FBF20 + D_801FBF28;
        S.unkE8->unk2C->unk3C = w * D_801FBF30 + D_801FBF38;
        z = w * D_801FBF40;
        S.unkE8->unk2C->unk40 = z + D_801FBF48;
        S.unkE8->unk2C->unk44 = z + D_801FBF50;
        return 0xB;
    }
    if (func_801C0B8C(0x071BEA70) != 0) {
        func_8038BD50(24.5f, D_801FBF58, 6.7f);
        D_8038BD88(16.5f, D_801FBF5C, 11.7f);
        N->unk8->unk24->unk2C->unk4 = D_801FBF60;
        N->unk8->unk24->unk2C->unk8 = 0.0f;
        N->unk8->unk24->unk2C->unkC = 4.5f;
        N->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x01B80015, 0, 0x1001, 1.0f);
    }
    return 0xB;
}

extern f32 D_801FBF64, D_801FBF68, D_801FBF6C, D_801FBF70, D_801FBF74;
extern s32 D_801CC470(s32, s32, s32, s32, f32);

s32 func_801E32A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x090E1D7F) != 0) {
        func_8038BE98(40.0f);
        func_8038BD50(D_801FBF64, D_801FBF68, 19.9f);
        D_8038BD88(D_801FBF6C, D_801FBF70, -1.6f);
        D_801CC470(0, 0x01B80014, 0, 0x1100, 1.0f);
        N->unk8->unk24->unk2C->unk4 = D_801FBF74;
        N->unk8->unk24->unk2C->unk8 = 0.0f;
        N->unk8->unk24->unk2C->unkC = 8.0f;
        N->unk8->unk24->unk2C->unk12 = 0;
        D_8038C158();
        return 0xD;
    }
    return 0xC;
}


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


s32 func_801E3494(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E34A4(s32 arg0, s32 arg1) {
    return 15;
}


extern s32 func_801CD044();

s32 func_801E34B4(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

void func_801CCE0C(s32);
extern void *func_801BF6B0(s32 arg0);

struct func_801E34F0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E34F0(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE50(0x64, 0x64, 0x64);
    if (((struct func_801E34F0_Struct *)func_801BF6B0(0))->unkC >= 2) {
        return 2;
    }
    if (func_801C0B8C(0xB2871F) != 0) {
        func_801CCE88(0, 0, 0, 0x50);
        func_801CCEC8(0, 0, 0, 0x64);
    } else if (func_801C0B8C(0x757E1F) != 0) {
        func_801CCE88(0, 0, 0x50, 0);
        func_801CCEC8(0, 0, 0, 0x64);
    } else if (func_801C0B8C(0x3567E0) != 0) {
        func_801CCE88(0, 0x50, 0, 0);
        func_801CCEC8(0, 0, 0, 0x64);
    }
    return 1;
}


extern u64 func_801C0AE4();

s32 func_801E3610(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    if (func_801C0B8C(0x02C27B60) != 0) {
        func_801CCE50(0x32, 0x32, 0x32);
        func_801CCE88(0, 0xFF, 0xFF, 0xFF);
        func_801CCEC8(0, 0, 0, -0x7F);
        return 3;
    }
    if (func_801C0B8C(0x0294B4A0) != 0) {
        func_801CCE50(0x64, 0x64, 0x64);
        if (func_801C0AE4() & 0x01000000) {
            func_801CCE88(0, 0, 0x64, 0);
        } else {
            func_801CCE88(0, 0, 0, 0x64);
        }
        func_801CCEC8(0, 0, 0, 0x7F);
    }
    return 2;
}



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


s32 func_801E388C(s32 arg0, s32 arg1) {
    return 6;
}


extern u8 func_8038DD54[];

s32 func_801E389C(s32 arg0, s32 arg1) {
    func_801C2420(0x259, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E38D0_StructR {
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

struct func_801E38D0_StructQ {
    u8 pad0[0x2C];
    struct func_801E38D0_StructR *unk2C;
};

struct func_801E38D0_StructP {
    struct func_801E38D0_StructQ *unk0;
};

extern s32 func_8038D850;
extern struct func_801E38D0_StructP *func_8038D854;
extern u8 D_8017AE98[];

s32 func_801E38D0(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x259, 0);
    func_8038D854->unk0->unk2C->unk4 = 0.0f;
    func_8038D854->unk0->unk2C->unk8 = 0.0f;
    func_8038D854->unk0->unk2C->unkC = 0.0f;
    func_8038D854->unk0->unk2C->unk18 = 1.0f;
    func_8038D854->unk0->unk2C->unk1C = 1.0f;
    func_8038D854->unk0->unk2C->unk20 = 1.0f;
    func_8038D854->unk0->unk2C->unk12 = 0;
    func_8038D854->unk0->unk2C->unk30 = D_8017AE98;
    return 2;
}


s32 func_801E39C8(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E39D8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E39E8(s32 arg0, s32 arg1) {
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E39F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E3B30.s")


s32 func_801E4014(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4024(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4034(s32 arg0, s32 arg1) {
    return 4;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E4044(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern void func_8012CF8C(s32, s32, s32, s32);

s32 func_801E4088(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x08EC8BBF) != 0) {
        return 2;
    }
    func_8012CF8C(func_8038D8B8[5], ((s32 *)((s32 *)D_8038D8D0)[1])[12] + 0x40, 0x25B, 1);
    return 1;
}



s32 func_801E40F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x094B267FULL) != 0) {
        return 3;
    }
    func_8012CF8C(*(s32 *)((u8 *)&func_8038D8B8 + 0x14),
                  *(s32 *)((u8 *)(((s32 *)D_8038D8D0)[1]) + 0x30) + 0x40, 0x25B, 0);
    return 2;
}


s32 func_801E4158(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4168(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E4178(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E41BC(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E41CC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E41DC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E41EC(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E41FC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4240(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E4250(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4260(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4270(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E4280(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E42C4(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E42D4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E42E4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E42F4(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E4304(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801FBFC4;
struct func_801E4348_S2 { u8 pad[0x12]; s16 unk12; };
struct func_801E4348_S1 { u8 pad[0x30]; struct func_801E4348_S2 *unk30; };
struct func_801E4348_S0 { u8 pad[0x14]; struct func_801E4348_S1 *unk14; };

s32 func_801E4348(s32 arg0, s32 arg1) {
    struct func_801E4348_S2 *p;

    if (func_801C0B8C(0x3F3A860) != 0) {
        p = ((struct func_801E4348_S0 *)D_8038D8D0)->unk14->unk30;
        p->unk12 = (s16)(p->unk12 - (s16)(s32)D_801FBFC4);
        if (func_801C0B8C(0x46DBA60) != 0) {
            return 2;
        }
    }
    return 1;
}


extern f32 D_801FBFC8;

struct func_801E43CC_StructLeaf {
    u8 pad[0x12];
    s16 unk12;
};
struct func_801E43CC_StructMid {
    u8 pad[0x30];
    struct func_801E43CC_StructLeaf *unk30;
};
struct func_801E43CC_StructRoot {
    u8 pad[0x14];
    struct func_801E43CC_StructMid *unk14;
};

s32 func_801E43CC(s32 arg0, s32 arg1) {
    struct func_801E43CC_StructLeaf *temp_v0;

    if (func_801C0B8C(0x069D4490) != 0) {
        temp_v0 = ((struct func_801E43CC_StructRoot *)D_8038D8D0)->unk14->unk30;
        temp_v0->unk12 = (s16)(temp_v0->unk12 + (s16)D_801FBFC8);
        if (func_801C0B8C(0x06CB0B50) != 0) {
            return 3;
        }
    }
    return 2;
}


s32 func_801E4450(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4460(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E4470(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



typedef struct func_801E44B4_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_801E44B4_Struct2;

typedef struct func_801E44B4_Struct1 {
    u8 pad0[0x30];
    func_801E44B4_Struct2 *unk30;
} func_801E44B4_Struct1;

typedef struct func_801E44B4_Struct0 {
    u8 pad0[0x18];
    func_801E44B4_Struct1 *unk18;
} func_801E44B4_Struct0;

s32 func_801E44B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02C27B60) != 0) {
        return 2;
    }
    ((func_801E44B4_Struct0 *)D_8038D8D0)->unk18->unk30->unk4 = 0.0f;
    ((func_801E44B4_Struct0 *)D_8038D8D0)->unk18->unk30->unk8 = 0.0f;
    ((func_801E44B4_Struct0 *)D_8038D8D0)->unk18->unk30->unkC = 85.0f;
    ((func_801E44B4_Struct0 *)D_8038D8D0)->unk18->unk30->unk12 = 0x118;
    return 1;
}


s32 func_801E454C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E455C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E456C(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E457C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


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


s32 func_801E4878(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4888(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4898(s32 arg0, s32 arg1) {
    return 4;
}

extern u8 D_801E0A48[];
void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 func_801DAEE8[];

extern u8 D_801DAD28[];
extern u8 D_801DADFC[];
extern u8 D_801DAE00[];
extern u8 D_801DB144[];

s32 func_801E48A8(s32 arg0, s32 arg1) {
    func_801C2420(0x2A, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB144);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801C2420(0x30, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DADFC);
    func_801CC4C0(2, D_801DAE00);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(3, func_801DAEE8 + 0x30);
    return 1;
}


extern struct func_801EC668_StructA func_801DAAF0;
extern void func_80005670(void *a, void *b);
extern void func_801CC530(void);
extern void func_801D03E0(s32 a);
extern void func_801D03EC(s32 a);
extern void func_801D048C(s32 a);

struct func_801E497C_Struct {
    u8 pad0[0x8];
    struct func_801E497C_Struct *unk8;
};

struct func_801E497C_Root {
    u8 pad0[0x24];
    struct func_801E497C_Struct *unk24;
};

extern void func_801CEDBC(s32 a);
extern void func_801CEDC8(s32 a);
extern u8 D_801DAD14[];
extern u8 D_801DADE8[];
extern u8 D_801DB130[];

s32 func_801E497C(s32 arg0, s32 arg1) {
    func_80005670(((struct func_801E497C_Root *)&func_801DAAF0)->unk24, D_801DB130);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(((struct func_801E497C_Root *)&func_801DAAF0)->unk24->unk8, D_801DAD14);
    func_80005670(((struct func_801E497C_Root *)&func_801DAAF0)->unk24->unk8->unk8, D_801DADE8);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(((struct func_801E497C_Root *)&func_801DAAF0)->unk24->unk8->unk8->unk8, func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}


s32 func_801E4A38(s32 arg0, s32 arg1) {
    if ((*(u8 **)((u8 *)*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) != NULL) && (func_801C0B8C(0x3567E0) != 0)) {
        func_801CC470(0, 0x01B80001, 0, 0x100, 1.0f);
        return 3;
    }
    return 2;
}

extern s32 D_801FB1DC;

struct func_801E4AB4_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

extern f32 D_801FBFCC;
extern f32 D_801FBFD0;

#define FUNC_801E4AB4_PTR(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801E4AB4_E ((struct func_801E4AB4_StructE *)FUNC_801E4AB4_PTR(FUNC_801E4AB4_PTR(FUNC_801E4AB4_PTR(*(u8 **)&D_801DAB14, 8), 0x24), 0x2C))

s32 func_801E4AB4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02CD29C0) != 0) {
        FUNC_801E4AB4_E->unk4 = -5.0f;
        FUNC_801E4AB4_E->unk8 = -1.0f;
        FUNC_801E4AB4_E->unkC = 0.0f;
        FUNC_801E4AB4_E->unk12 = 0x800;
        func_801CC470(0, 0x01B8000F, 0, 0x100, 2.0f);
        D_801FB1DC = 0;
        return 4;
    }
    FUNC_801E4AB4_E->unk4 = D_801FBFCC;
    FUNC_801E4AB4_E->unk8 = 0.0f;
    FUNC_801E4AB4_E->unkC = D_801FBFD0;
    FUNC_801E4AB4_E->unk12 = 0;
    return 3;
}


s32 func_801E4BFC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4C0C(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x02E8A100) != 0) && (func_801C0B8C(0x03072580) != 0)) {
        *(f32 *)((u8 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 8) + 0x24) + 0x2C)) + 4) = 71.5f;
        *(f32 *)((u8 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 8) + 0x24) + 0x2C)) + 8) = 0.0f;
        *(f32 *)((u8 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 8) + 0x24) + 0x2C)) + 0xC) = 75.5f;
        *(s16 *)((u8 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 8) + 0x24) + 0x2C)) + 0x12) = 0x1100;
        func_801CC470(0, 0x01B80000, 0, 0x1000, 1.0f);
        return 6;
    }
    if ((func_801D1720(0x01B8000F, 0x14) != 0) || (func_801D1720(0x01B8000F, 0x38) != 0)) {
        func_8038D28C(0x68F);
    }
    return 5;
}



extern f32 D_801FBFD4;
extern f32 D_801FBFD8;

#define FUNC_801E4D24_Z ((u8 *) *(u8 **) ((u8 *) *(u8 **) ((u8 *) *(u8 **) ((u8 *) D_801DAB14 + 0x8) + 0x24) + 0x2C))

s32 func_801E4D24(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03F3A860) != 0) {
        *(f32 *) (FUNC_801E4D24_Z + 0x4) = D_801FBFD4;
        *(f32 *) (FUNC_801E4D24_Z + 0x8) = 0.0f;
        *(f32 *) (FUNC_801E4D24_Z + 0xC) = D_801FBFD8;
        *(s16 *) (FUNC_801E4D24_Z + 0x12) = 0x1800;
        func_801CC470(0, 0x01B80014, 0, 0x1100, 1.0f);
        return 7;
    }
    return 6;
}



struct func_801E4DF8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E4DF8(s32 arg0, s32 arg1) {
    if (((struct func_801E4DF8_Struct *)func_801BF6B0(0))->unkC >= 0xB) {
        func_801CC470(0, 0x01B8000F, 0, 0x100, 5.0f);
        D_801FB1DC = 0;
        return 8;
    }
    return 7;
}


s32 func_801E4E64(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x071BEA70) != 0) {
        if (func_801C0B8C(0x08DAFF90) != 0) {
            func_801CC470(0, 0x01B80015, 0, 0x1000, 1.5f);
            return 9;
        }
    }
    return 8;
}


s32 func_801E4EDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x090B103F) != 0) {
        return 0xA;
    }
    return 9;
}


s32 func_801E4F18(s32 arg0, s32 arg1) {
    return 11;
}

extern void func_801CC528(void);


s32 func_801E4F28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0943855F) != 0) {
        func_801CC528();
    }
    return 0xB;
}



s32 func_801E4F6C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern void func_801CED5C(s32 arg0);
extern f32 D_801FBFDC;

struct func_801E4FB0_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E4FB0_Node {
    u8 pad0[8];
    struct func_801E4FB0_Node *unk8;
    u8 pad1[0x18];
    struct func_801E4FB0_Node *unk24;
    u8 pad2[4];
    struct func_801E4FB0_Struct3 *unk2C;
};

s32 func_801E4FB0(s32 arg0, s32 arg1) {
    if (((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk24 != 0) {
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = 0.0f;
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FBFDC;
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        if (func_801C0B8C(0x01399170) != 0) {
            func_801CED5C(1);
            func_801CC470(1, 0x01B80016, 0, 0, 1.0f);
            return 2;
        }
    }
    return 1;
}


s32 func_801CEDE4();

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


s32 func_801E5150(s32 arg0, s32 arg1) {
    return 0;
}



s32 func_801E5160(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

extern void func_801CF450(s32 arg0);

extern f32 D_801FBFE0;

struct func_801E51A4_StructLeaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E51A4_StructNode {
    u8 pad0[8];
    struct func_801E51A4_StructNode *unk8;
    u8 padC[0x18];
    struct func_801E51A4_StructNode *unk24;
    u8 pad28[4];
    struct func_801E51A4_StructLeaf *unk2C;
};
#define ROOT51 (*(struct func_801E51A4_StructNode **)&D_801DAB14)
#define NODE51 (ROOT51->unk8->unk8->unk8->unk24)

s32 func_801E51A4(s32 arg0, s32 arg1) {
    if (NODE51 != NULL) {
        func_801CF450(0);
        if (func_801C0B8C(0x0294B4A0) != 0) {
            NODE51->unk2C->unk4 = 45.0f;
            NODE51->unk2C->unk8 = 0.0f;
            NODE51->unk2C->unkC = 4.0f;
            NODE51->unk2C->unk12 = 0x800;
            func_801CC470(2, 0x01B80003, 0, 0x1001, 1.0f);
            return 2;
        }
        NODE51->unk2C->unk4 = D_801FBFE0;
        NODE51->unk2C->unk8 = 0.0f;
        NODE51->unk2C->unkC = 77.0f;
        NODE51->unk2C->unk12 = 0;
        func_801CC470(2, 0x01B80013, 0, 0x1001, 1.0f);
    }
    return 1;
}


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


s32 func_801E55A8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E55B8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E55C8(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801E55D8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E561C_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E561C_Leaf;

typedef struct func_801E561C_Node {
    u8 pad0[0x8];
    struct func_801E561C_Node *unk8;
    u8 pad1[0x18];
    struct func_801E561C_Node *unk24;
    u8 pad2[0x4];
    func_801E561C_Leaf *unk2C;
} func_801E561C_Node;

s32 func_801E561C(s32 arg0, s32 arg1) {
    func_801E561C_Node *temp_v0;

    temp_v0 = ((func_801E561C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -10.0f;
        ((func_801E561C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E561C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 77.0f;
        ((func_801E561C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(3, 0x01B80013, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5710(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E5720(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5730(s32 arg0, s32 arg1) {
    return 4;
}


extern void func_801C2570(s32 arg0, void *arg1);
extern void func_801CDD20(void);
extern u8 D_801E1110[];

s32 func_801E5740(s32 arg0, s32 arg1) {
    *(s32 *)(D_801E1110 + 4) = 0x1180;
    func_801C2570(0xA5, D_801E1110);
    func_801CDD20();
    return 1;
}

struct func_801E5784_W { u32 w0; u32 w1; };
extern u8 func_801DABDC[];
extern u8 D_801DABE8[];
extern s32 D_801DAC4C;
extern s32 D_801FB26C;
extern u8 D_801E0D10[];
extern u8 D_801E0F10[];
struct func_801E5784_S3 { u8 pad[0x28]; s32 u28; s32 u2C; s32 u30; };
struct func_801E5784_S2 { u8 pad[0x30]; struct func_801E5784_S3 *u30; };
struct func_801E5784_S1 { u8 pad[4]; struct func_801E5784_S2 *u4; };
struct func_801E5784_D { u8 pad[0x18]; s32 u18; };
extern struct func_801E5784_D func_801DAC30;
#define GP5784 (*(struct func_801E5784_W **)D_801DABE8)
#define OBJ (*(struct func_801E5784_S1 **)&D_801DAC4C)

s32 func_801E5784(s32 arg0, s32 arg1) {
    func_80005E44(func_801DAC30.u18, func_801DABDC + 0x14);
    func_80005E44(func_801DAC30.u18, func_801DABDC + 0x24);
    func_80006214(func_801DAC30.u18);
    GP5784 = (struct func_801E5784_W *)D_801E0D10;
    {
        struct func_801E5784_W *_g = GP5784;
        _g->w0 = 0xDF000000;
        _g->w1 = 0;
    }
    GP5784 = (struct func_801E5784_W *)D_801E0F10;
    {
        struct func_801E5784_W *_g = GP5784++;
        _g->w1 = 0;
        _g->w0 = 0xDF000000;
    }
    OBJ->u4->u30->u30 = 0;
    OBJ->u4->u30->u28 = 0;
    D_801FB26C = 0;
    return 2;
}


typedef struct {
    u32 w0;
    u32 w1;
} func_801E5848_Gfx;

typedef struct {
    u8 pad[0x28];
    s32 unk28;
    u8 pad2C[4];
    s32 unk30;
} func_801E5848_Struct3;

typedef struct {
    u8 pad[0x30];
    func_801E5848_Struct3 *unk30;
} func_801E5848_Struct2;

typedef struct {
    u8 pad[4];
    func_801E5848_Struct2 *unk4;
} func_801E5848_Struct1;

typedef struct {
    s32 unk0;
    s32 unk4;
} func_801E5848_Struct6;

typedef struct {
    u16 *unk0;
    func_801E5848_Struct6 *unk4;
} func_801E5848_Struct5;

typedef struct {
    u8 pad[0x290];
    func_801E5848_Struct5 *unk290;
} func_801E5848_Struct4;

extern s16 D_8008934C;
extern f64 D_801FC000;
extern u8 D_801DAC10[];
extern func_801E5848_Struct4 D_80171CF0;
extern s32 func_80001060(void);
extern s32 func_801302CC(void);
extern u32 func_8000522C(s32, s32);

#define GP (*(func_801E5848_Gfx **)D_801DABE8)
#define OBJ5848 (*(func_801E5848_Struct1 **)&D_801DAC4C)

s32 func_801E5848(s32 arg0, s32 arg1) {
    func_801E5848_Gfx *a;
    func_801E5848_Gfx *b;
    s32 id;
    s32 flag;
    s32 t;
    f32 sc;
    s32 y;
    s32 x;
    s32 w;
    s32 ox;
    s32 tex[2];
    s32 ox2;
    s32 oy;
    s32 oy2;
    s32 oy3;
    f32 fx;
    f32 fy;
    s32 ix;
    s32 i;
    f64 d;
    f64 k;

    if (D_8008934C == 0) {
        b = (func_801E5848_Gfx *)D_801E0D10;
        a = (func_801E5848_Gfx *)D_801E0D10;
    } else {
        b = (func_801E5848_Gfx *)D_801E0F10;
        a = (func_801E5848_Gfx *)D_801E0F10;
    }
    OBJ5848->unk4->unk30->unk30 = (s32)b | 0x40000000;
    OBJ5848->unk4->unk30->unk28 = 0;
    GP = a;
    if (func_801C0B8C(0x33E140) != 0) {
        { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xDF000000; _g->w1 = 0; }
        return 3;
    }
    flag = func_801302CC();
    id = *D_80171CF0.unk290->unk0;
    t = func_80001060();
    ox = -105;
    ox2 = -105;
    oy = 75;
    oy2 = 75;
    oy3 = 75;
    if (t) {
        x = 0x140;
        y = 0xF0;
        sc = 2.0f;
    } else {
        x = 0xA0;
        sc = 1.0f;
        y = 0x78;
    }
    tex[0] = D_80171CF0.unk290->unk4->unk0;
    tex[1] = D_80171CF0.unk290->unk4->unk4;
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xDE000000; _g->w1 = (u32)D_801DAC10; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE200001C; _g->w1 = 0x0F0A7008; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xFCFFFFFF; _g->w1 = 0xFFFCF279; }
    { { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xFD100000; _g->w1 = func_8000522C(id, tex[0]); } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF5100000; _g->w1 = 0x07080200; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE6000000; _g->w1 = 0; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF3000000; _g->w1 = 0x0707F200; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE7000000; _g->w1 = 0; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF5100800; _g->w1 = 0x00080200; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF2000000; _g->w1 = 0x0003C01C; } }
    if (flag == 0) {
        t = func_80001060();
        if (t) {
            w = 0x100;
        } else {
            w = 0x200;
        }
        fx = (f32)x;
        fy = (f32)y;
        { func_801E5848_Gfx *_g = GP++;
          _g->w0 = (((((s32)(32.0f * sc) + (s32)(fx + (f32)ox * sc)) - 1) << 2 & 0xFFF) << 12) | 0xE4000000 |
                   ((((s32)(16.0f * sc) + (s32)(fy + (f32)oy * sc)) - 1) << 2 & 0xFFF);
          _g->w1 = ((((s32)(fx * 1.0f + (f32)ox2 * sc)) * 4 & 0xFFF) << 12) | (((s32)(fy + (f32)oy2 * sc)) * 4 & 0xFFF); }
        { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE1000000; _g->w1 = 0; }
        { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF1000000; _g->w1 = ((w & 0xFFFF) << 16) | (w & 0xFFFF); }
    }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xFD100000; _g->w1 = func_8000522C(id, tex[1]); }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF5100000; _g->w1 = 0x07080200; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE6000000; _g->w1 = 0; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF3000000; _g->w1 = 0x0703F800; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE7000000; _g->w1 = 0; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF5100200; _g->w1 = 0x00080200; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF2000000; _g->w1 = 0x0000C03C; }
    if (flag == 0) {
        i = 0;
        d = func_80034C24(func_801C0B2C());
        do {
            k = D_801FC000;
        } while (0);
        if ((s32)(d / k + 5.0) > 0) {
            fx = (f32)x;
            fy = (f32)y + (f32)oy3 * sc;
            do {
                { func_801E5848_Gfx *_g = GP++;
                  ix = (s32)(fx * 1.0f + (f32)(i * 7 - 68) * sc);
                  _g->w0 = (((((s32)(4.0f * sc) + ix) - 1) << 2 & 0xFFF) << 12) | 0xE4000000 | ((((s32)(16.0f * sc) + (s32)fy) - 1) << 2 & 0xFFF); _g->w1 = ((ix * 4 & 0xFFF) << 12) | ((s32)fy * 4 & 0xFFF); }
                { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE1000000; _g->w1 = 0; }
                { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF1000000; _g->w1 = 0x04000400; }
                goto lbl;
            lbl:
                i++;
            } while (i < (s32)(func_80034C24(func_801C0B2C()) / k + 5.0));
        }
    }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xDF000000; _g->w1 = 0; }
    return 2;
}



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


s32 func_801E5F74(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E5F84(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x2, 0, 2);
    return 1;
}



s32 func_801E5FF0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E6020(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02F7E340) != 0 && D_801BBD54 == 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 3;
    }
    return 2;
}



s32 func_801E60A0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    return 4;
}


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



s32 func_801E6148(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 5;
    }
    D_80089354 = 0;
    return 6;
}


s32 func_801E6178(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x03B69F60) != 0) && (D_801BBD54 == 0)) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 7;
    }
    return 6;
}



s32 func_801E61F8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E6220(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x0430B160) != 0) && (D_801BBD54 == 0)) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 9;
    }
    return 8;
}



s32 func_801E62A0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 9;
    }
    D_80089354 = 0;
    return 10;
}



s32 func_801E62D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6CB0B50) != 0) {
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 0xB;
    }
    return 0xA;
}


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



s32 func_801E63C4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 12;
    }
    D_80089354 = 0;
    return 13;
}


s32 func_801E63F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x093BE43FULL) != 0) {
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 0xE;
    }
    return 0xD;
}



s32 func_801E6460(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 14;
    }
    return 15;
}


s32 func_801E6488(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E6498(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E64A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01399170) != 0) {
        return 2;
    }
    return 1;
}


s32 func_801E64E4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E64F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x46DBA60) != 0) {
        return 4;
    }
    return 3;
}


s32 func_801E6530(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E6540(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x07515250) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E657C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E658C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E659C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E65AC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E65BC(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E65CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A120) != 0) {
        func_8038D28C(0x1CA);
        return 1;
    }
    return 0;
}


s32 func_801E6618(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E6628(s32 arg0, s32 arg1) {
    return 3;
}



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


s32 func_801E66F0(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E6700(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02CA1C80) != 0) {
        func_8038D28C(0x696);
        return 7;
    }
    return 6;
}


s32 func_801E674C(s32 arg0, s32 arg1) {
    return 8;
}


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



s32 func_801E6838(s32 arg0, s32 arg1) {
    if (func_8038D2D4(0x3E0) == 0) {
        func_8038D28C(0x1CE);
        return 0xC;
    }
    return 11;
}


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


extern s32 D_801FB308;

s32 func_801E68FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x046DBA60) != 0) {
        func_8038D2B0(1548);
        D_801FB308 = 0;
        return 15;
    }
    return 14;
}

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


s32 func_801E6F10(s32 arg0, s32 arg1) {
    return 22;
}


extern f32 D_801FC070;
extern f32 D_801FC074;
extern f32 D_801FC078;
extern f32 D_801FC07C;
extern f32 D_801FC080;
extern f32 D_801FC084;


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


extern f32 D_801FC088;
extern f32 D_801FC08C;
extern f32 D_801FC090;
extern f32 D_801FC094;
extern f32 D_801FC098;

s32 func_801E6FDC(s32 arg0, s32 arg1)
{
  struct func_801E7ECC_Struct3 *temp_v0;
  struct func_801E7ECC_Struct3 *temp_v0_2;
  struct func_801E7ECC_Struct3 *temp_v0_3;
  if (func_801C0B8C(0xAF79E0) != 0)
  {
    func_8038BD50(87.0f, D_801FC088, -8.2f);
    D_8038BD88(73.5f, D_801FC08C, -12.4f);
    return 2;
  }
  if (func_801C0B8C(0x81B320) != 0)
  {
    temp_v0 = D_801BBBF0.unkE8->unk2C;
    temp_v0->unk30 = temp_v0->unk30 + D_801FC090;
 do { temp_v0_2 = D_801BBBF0.unkE8->unk2C; temp_v0_2->unk34 = temp_v0_2->unk34 + D_801FC094; } while (0);
    temp_v0_3 = D_801BBBF0.unkE8->unk2C;
    temp_v0_3->unk38 = temp_v0_3->unk38 + D_801FC098;
  }
  return 1;
}


extern f32 D_801FC09C;
extern f32 D_801FC0A0;
extern f32 D_801FC0A4;
extern f32 D_801FC0A8;
extern f32 D_801FC0AC;
extern f32 D_801FC0B0;
extern f32 D_801FC0B4;
extern f32 D_801FC0B8;

struct func_801E70C4_StructLeaf {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};

s32 func_801E70C4(s32 arg0, s32 arg1) {
    struct func_801E70C4_StructLeaf *p;
    f32 delta;

    if (func_801C0B8C(0x01406F40) != 0) {
        func_8038BD50(D_801FC09C, D_801FC0A0, -9.2f);
        D_8038BD88(-196.0f, D_801FC0A4, -1.3f);
        return 3;
    }
    if (func_801C0B8C(0x01298BE0) != 0) {
        return 2;
    }
    delta = D_801FC0A8;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk30 += D_801FC0AC;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk34 += delta;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk38 += D_801FC0B0;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk3C += D_801FC0B4;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk40 += delta;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk44 += D_801FC0B8;
    return 2;
}

extern f32 D_801FC0BC;
extern f32 D_801FC0C0;
extern f32 D_801FC0C4;
extern f32 D_801FC0C8;
extern f32 D_801FC0CC;
extern f32 D_801FC0D0;
extern f32 D_801FC0D4;

s32 func_801E7200(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016694E0) != 0) {
        func_8038BD50(D_801FC0BC, 17.0f, -16.0f);
        D_8038BD88(74.0f, 15.5f, -11.4f);
        return 4;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += D_801FC0C0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FC0C4;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += D_801FC0C8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += D_801FC0CC;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 += D_801FC0D0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 += D_801FC0D4;
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E7324.s")


/* Forward declaration only: the struct is defined later in the file by func_801E7ECC.
   Members are reached through byte-offset casts so no struct definition is needed here. */
struct func_801E7ECC_Struct1;
extern f32 D_801FC14C;
extern f32 D_801FC150;
extern f32 D_801FC154;
extern f32 D_801FC158;
extern f32 D_801FC15C;
extern f32 D_801FC160;

s32 func_801E755C(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    if (func_801C0B8C(0x020545E0) != 0) {
        func_8038BD50(-193.0f, D_801FC14C, -24.2f);
        D_8038BD88(D_801FC150, D_801FC154, -5.6f);
        return 6;
    }
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x30) = *(f32 *)(temp_v1 + 0x30) + D_801FC158;
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x34) = *(f32 *)(temp_v1 + 0x34) + D_801FC15C;
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x38) = *(f32 *)(temp_v1 + 0x38) + D_801FC160;
    return 5;
}


extern f64 D_801FC168, D_801FC170, D_801FC178, D_801FC180, D_801FC188, D_801FC190, D_801FC198;
extern f32 D_801FC1A0, D_801FC1A4;
extern f64 D_801FC1A8, D_801FC1B0, D_801FC1B8, D_801FC1C0, D_801FC1C8, D_801FC1D0, D_801FC1D8;
extern f64 D_801FC1E0, D_801FC1E8, D_801FC1F0, D_801FC1F8, D_801FC200;
extern f32 D_801FC208, D_801FC20C, D_801FC210, D_801FC214;

#define P ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801E7630(s32 arg0, s32 arg1) {
    f64 t;
    f64 k;
    u64 r;
    if (func_801C0B8C(0x02A57D80) != 0) {
        return 7;
    }
    if (func_801C0B8C(0x028E9A20) != 0) {
        r = func_801C0B2C();
        t = (f64)(f32)(func_80034C24(r) / D_801FC168 - D_801FC170) / 1.5;
        P->unk30 = t * D_801FC178 + D_801FC180;
        P->unk34 = t * D_801FC188 + D_801FC190;
        P->unk38 = t * -1.0 + D_801FC198;
        P->unk3C = -197.0f;
        P->unk40 = D_801FC1A0;
        P->unk44 = D_801FC1A4;
        return 6;
    }
    if (func_801C0B8C(0x02424EE0) != 0) {
        r = func_801C0B2C();
        t = func_80034C24(r);
        k = D_801FC1A8;
        t = (f64)(f32)(t / D_801FC1B0 - D_801FC1B8) / 5.0;
        P->unk30 = t * D_801FC1C0 + D_801FC1C8;
        P->unk34 = t * D_801FC1D0 + D_801FC1D8;
        P->unk38 = t * (1.0 - 1.0) +D_801FC1E0;
        P->unk3C = t * D_801FC1E8 + D_801FC1F0;
        P->unk40 = t * D_801FC1F8 + D_801FC200;
        P->unk44 = t * k + k;
        return 6;
    }
    P->unk30 = P->unk30 + D_801FC208;
    P->unk34 = P->unk34 + D_801FC20C;
    P->unk38 = P->unk38 + D_801FC210;
    P->unk3C = P->unk3C;
    P->unk40 = P->unk40;
    P->unk44 = P->unk44 + D_801FC214;
    return 6;
}


struct func_801E7980_Struct3 {
    u8 pad[0x30];
    f32 f[6];
};
struct func_801E7980_Struct2 {
    u8 pad[0x2C];
    struct func_801E7980_Struct3 *p;
};
struct func_801E7980_Struct1 {
    u8 pad[0xE8];
    struct func_801E7980_Struct2 *q;
};
extern f32 D_801FC218, D_801FC21C, D_801FC280, D_801FC284;
extern f64 D_801FC220, D_801FC228, D_801FC230, D_801FC238, D_801FC240, D_801FC248, D_801FC250, D_801FC258, D_801FC260, D_801FC268, D_801FC270, D_801FC278;
#define GG ((struct func_801E7980_Struct1 *)&D_801BBBF0)

s32 func_801E7980(s32 arg0, s32 arg1) {
    f64 t;
    f64 one;
    u64 r;

    if (func_801C0B8C(0x02F1C8C0)) {
        D_8038C158();
        return 8;
    }
    if (func_801C0B8C(0x02D34440)) {
        func_8038BD50(77.0f, D_801FC218, -42.3f);
        D_8038BD88(D_801FC21C, 14.5f, -11.7f);
        return 7;
    }
    if (func_801C0B8C(0x02C40200)) {
        r = func_801C0B2C();
        one = 1.0;
        t = (f64)(f32)(func_80034C24(r) / D_801FC220 - D_801FC228) / one;
        GG->q->p->f[0] = t * D_801FC230 + D_801FC238;
        GG->q->p->f[1] = t * D_801FC240 + 15.0;
        GG->q->p->f[2] = t * D_801FC248 + D_801FC250;
        GG->q->p->f[3] = t * D_801FC258 + D_801FC260;
        GG->q->p->f[4] = t * -0.5 + D_801FC268;
        GG->q->p->f[5] = t * D_801FC270 + D_801FC278;
        return 7;
    }
    func_8038BD50(77.0f, D_801FC280, -42.3f);
    D_8038BD88(D_801FC284, 14.5f, -11.7f);
    return 7;
}

extern f32 D_801FC288;
extern f32 D_801FC28C;
extern f32 D_801FC290;
extern f32 D_801FC294;
extern f32 D_801FC298;
extern f32 D_801FC29C;
extern f32 D_801FC2A0;
extern f32 D_801FC2A4;
extern f32 D_801FC2A8;
extern f32 D_801FC2AC;
extern f32 D_801FC2B0;
extern f32 D_801FC2B4;

s32 func_801E7BB8(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, D_801FC288, 64.2f, 7.9f, D_801FC28C, D_801FC290, D_801FC294, D_801FC298, 74.0f, D_801FC29C, D_801FC2A0, 73.5f, D_801FC2A4, -11.0f, 24.0f, 24.0f) != 0) {
        func_8038BD50(100.5f, D_801FC2A8, -16.6f);
        D_8038BD88(D_801FC2AC, D_801FC2B0, -11.5f);
        func_8038BE98(D_801FC2B4);
        return 9;
    }
    return 8;
}

extern f32 D_801FC2B8;
extern f32 D_801FC2BC;
extern f32 D_801FC2C0;
extern f32 D_801FC2C4;
extern f32 D_801FC2C8;
extern f32 D_801FC2CC;
extern f32 D_801FC2D0;
extern f32 D_801FC2D4;
extern f32 D_801FC2D8;

s32 func_801E7CD0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03D09000) != 0) {
        func_8038BD50(D_801FC2B8, D_801FC2BC, -14.7f);
        D_8038BD88(-197.0f, D_801FC2C0, -5.8f);
        return 0xA;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += D_801FC2C4;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FC2C8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += D_801FC2CC;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += D_801FC2D0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 += D_801FC2D4;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 += D_801FC2D8;
    return 9;
}


extern f32 D_801FC2DC;
extern f32 D_801FC2E0;
extern f32 D_801FC2E4;
extern f32 D_801FC2E8;
extern f32 D_801FC2EC;
extern f32 D_801FC2F0;
extern f32 D_801FC2F4;

s32 func_801E7DF8(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    if (func_801C0B8C(0x040D9900) != 0) {
        func_8038BD50(D_801FC2DC, D_801FC2E0, -40.1f);
        D_8038BD88(D_801FC2E4, D_801FC2E8, -5.7f);
        return 0xB;
    }
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x30) = *(f32 *)(temp_v1 + 0x30) + D_801FC2EC;
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x34) = *(f32 *)(temp_v1 + 0x34) + D_801FC2F0;
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x38) = *(f32 *)(temp_v1 + 0x38) + D_801FC2F4;
    return 0xA;
}






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

extern f32 D_801FC444;
extern f32 D_801FC448;
extern f32 D_801FC44C;
extern f32 D_801FC450;
extern f32 D_801FC454;
extern f32 D_801FC458;
extern f32 D_801FC45C;
extern f32 D_801FC460;
extern f32 D_801FC464;

s32 func_801E87E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x053D807A) != 0) {
        func_8038BD50(D_801FC444, D_801FC448, -9.6f);
        D_8038BD88(D_801FC44C, 11.5f, -8.1f);
        D_801FB394 = 0;
        return 0x11;
    }
#define P ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)
    P->unk30 += D_801FC450;
    P->unk34 += D_801FC454;
    P->unk38 += D_801FC458;
    P->unk3C += D_801FC45C;
    P->unk40 += D_801FC460;
    P->unk44 += D_801FC464;
    return 0x10;
}


extern void func_8038C4D8(s32 a0, s32 a1);
extern f32 D_801FC468;
extern f32 D_801FC46C;
extern f32 D_801FC470;

s32 func_801E8910(s32 arg0, s32 arg1) {
    struct func_801E7ECC_Struct3 *temp;

    if (D_801FB394 == 0) {
        goto case0;
    }
    if (D_801FB394 == 1) {
        goto case1;
    }
    return 0x11;
case0:
    if (func_801C0B8C(0x5482EDA) != 0) {
        func_8038C4D8(2, 0);
        D_801FB394 = 1;
        return 0x11;
    }
    temp = D_801BBBF0.unkE8->unk2C;
    temp->unk30 = temp->unk30 + D_801FC468;
    temp = D_801BBBF0.unkE8->unk2C;
    temp->unk34 = temp->unk34 + D_801FC46C;
    temp = D_801BBBF0.unkE8->unk2C;
    temp->unk38 = temp->unk38 + D_801FC470;
    goto ret11;
case1:
    if (func_801C0B8C(0x54CC2BA) != 0) {
        return 0x12;
    }
ret11:
    return 0x11;
}


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


extern f64 D_801FC488;
extern f64 D_801FC490;
extern f64 D_801FC498;
extern f64 D_801FC4A0;
extern f64 D_801FC4A8;
extern f64 D_801FC4B0;
extern f64 D_801FC4B8;
extern f64 D_801FC4C0;
extern f64 D_801FC4C8;
extern f64 D_801FC4D0;
extern f64 D_801FC4D8;

s32 func_801E8A7C(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    u64 r;
    f64 h = 2.0;

    if (func_801C0B8C(0x05990DFA) != 0) {
        return 0x14;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC488) - D_801FC490) / h;
    D_801BBBF0.unkE8->unk2C->unk30 = (f32)((t * D_801FC498) + D_801FC4A0);
    D_801BBBF0.unkE8->unk2C->unk34 = (f32)((t * D_801FC4A8) + D_801FC4B0);
    z = 1.0 - 1.0;
    z = t * z;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32)((t * D_801FC4B8) + D_801FC4C0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32)(z + D_801FC4C8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32)(z + D_801FC4D0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32)(z + D_801FC4D8);
    return 0x13;
}


extern f64 D_801FC4E0;
extern f64 D_801FC4E8;
extern f64 D_801FC4F0;
extern f64 D_801FC4F8;
extern f64 D_801FC500;
extern f64 D_801FC508;
extern f64 D_801FC510;
extern f64 D_801FC518;
extern f64 D_801FC520;
extern f64 D_801FC528;
extern f64 D_801FC530;
extern f64 D_801FC538;

s32 func_801E8BE4(s32 arg0, s32 arg1) {
    f64 t;
    f64 two = 2.0;
    u64 r;

    if (func_801C0B8C(0x05B7927A) != 0) {
        return 0x15;
    }
    r = func_801C0B2C();
    t = (f64) (f32) ((func_80034C24(r) / D_801FC4E0) - D_801FC4E8) / two;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (f32) ((t * D_801FC4F0) + D_801FC4F8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (f32) ((t * D_801FC500) + D_801FC508);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32) ((t * D_801FC510) + 14.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32) ((t * -0.5) + D_801FC518);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32) ((t * D_801FC520) + D_801FC528);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32) ((t * D_801FC530) + D_801FC538);
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801E8D6C.s")


extern s32 func_801C1424(s32);
extern f64 D_801FC580, D_801FC588, D_801FC590, D_801FC598, D_801FC5A0, D_801FC5A8;
extern f64 D_801FC5B0, D_801FC5B8, D_801FC5C0, D_801FC5C8, D_801FC5D0, D_801FC5D8;

s32 func_801E8EE0(s32 arg0, s32 arg1) {
    f64 t;
    u64 r;

    if (func_801C0B8C(0x05F49B7A) != 0 && func_801C1424(4) != 0) {
        return 0x17;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC580) - D_801FC588) / 2;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (t * D_801FC590) + D_801FC598;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (t * D_801FC5A0) + D_801FC5A8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (t * D_801FC5B0) + D_801FC5B8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (t * D_801FC5C0) + D_801FC5C8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (t * -0.5) + 0.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (t * D_801FC5D0) + D_801FC5D8;
    return 0x16;
}


extern f64 D_801FC5E0;
extern f64 D_801FC5E8;
extern f64 D_801FC5F0;
extern f64 D_801FC5F8;
extern f64 D_801FC600;
extern f64 D_801FC608;
extern f64 D_801FC610;
extern f64 D_801FC618;
extern f64 D_801FC620;

struct func_801E9078_Struct2 {
    u8 pad[0x2C];
    struct func_801E1C38_Struct *unk2C;
};

s32 func_801E9078(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    u64 r;

    if (func_801C0B8C(0x06131FFA) != 0) {
        return 0x18;
    }
    r = func_801C0B2C();
    a = (f64)(f32)(func_80034C24(r) / D_801FC5E0 - D_801FC5E8) / 2;
    b = a * (1.0 - 1.0);
#define P ((struct func_801E9078_Struct2 *)D_801BBBF0.unkE8)->unk2C
    P->unk30 = b + D_801FC5F0;
    P->unk34 = a * D_801FC5F8 + D_801FC600;
    P->unk38 = b + D_801FC608;
    P->unk3C = b + D_801FC610;
    P->unk40 = b + D_801FC618;
    P->unk44 = b + D_801FC620;
    return 0x17;
}


extern f64 D_801FC628;
extern f64 D_801FC630;
extern f64 D_801FC638;
extern f64 D_801FC640;
extern f64 D_801FC648;
extern f64 D_801FC650;
extern f64 D_801FC658;
extern f64 D_801FC660;

#define DEST ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801E91C8(s32 arg0, s32 arg1) {
    f64 temp_fa0;
    f64 temp_fv1;
    f64 z;

    if (func_801C0B8C(0x0631A47A) != 0) {
        return 0x19;
    }
    temp_fa0 = (f64)(f32)((func_80034C24(func_801C0B2C()) / D_801FC628) - D_801FC630) / (f64)(f32)2.0;
    z = 1.0 - 1.0;
    temp_fv1 = temp_fa0 * z;
    DEST->unk30 = (f32)(temp_fv1 + D_801FC638);
    DEST->unk34 = (f32)(temp_fv1 + D_801FC640);
    DEST->unk38 = (f32)(temp_fv1 + -6.0);
    DEST->unk3C = (f32)(temp_fv1 + D_801FC648);
    DEST->unk40 = (f32)((temp_fa0 * D_801FC650) + D_801FC658);
    DEST->unk44 = (f32)(temp_fv1 + D_801FC660);
    return 0x18;
}


struct func_801E931C_S3 {
    u8 pad[0x30];
    f32 f[6];
};
struct func_801E931C_S2 {
    u8 pad[0x2C];
    struct func_801E931C_S3 *p;
};
struct func_801E931C_S1 {
    u8 pad[0xE8];
    struct func_801E931C_S2 *p;
};
extern f64 D_801FC668;
extern f64 D_801FC670;
extern f64 D_801FC678;
extern f64 D_801FC680;
extern f64 D_801FC688;
extern f64 D_801FC690;
extern f64 D_801FC698;
extern f64 D_801FC6A0;
#define G ((struct func_801E931C_S1 *)&D_801BBBF0)

s32 func_801E931C(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    f64 c;
    f64 z;
    f64 two;
    u64 t;

    if (func_801C0B8C(0x065028FA) != 0) {
        return 0x1A;
    }
    t = func_801C0B2C();
    two = (f32)2.0;
    a = (f32)(func_80034C24(t) / D_801FC668 - D_801FC670) / two;
    z = 1.0 - 1.0;
    b = a * z;
    G->p->p->f[0] = b + -136.0;
    c = a * D_801FC678;
    G->p->p->f[1] = c + D_801FC680;
    G->p->p->f[2] = b + D_801FC688;
    G->p->p->f[3] = b + D_801FC690;
    G->p->p->f[4] = c + D_801FC698;
    G->p->p->f[5] = b + D_801FC6A0;
    return 0x19;
}


extern f64 D_801FC6A8;
extern f64 D_801FC6B0;
extern f64 D_801FC6B8;
extern f64 D_801FC6C0;
extern f64 D_801FC6C8;
extern f64 D_801FC6D0;
extern f64 D_801FC6D8;
extern f64 D_801FC6E0;
extern f64 D_801FC6E8;
extern f64 D_801FC6F0;
extern f64 D_801FC6F8;

s32 func_801E9470(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    u64 r;

    if (func_801C0B8C(0x067DEFBA) != 0) {
        return 0x1B;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC6A8) - D_801FC6B0) / 3.0;
    z = 1.0 - 1.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * D_801FC6B8 + D_801FC6C0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * D_801FC6C8 + D_801FC6D0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * z + D_801FC6D8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = t * D_801FC6E0 + D_801FC6E8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = t * D_801FC6F0 + 12.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = t * D_801FC6F8 + -6.0;
    return 0x1A;
}


struct func_801E95F8_StructB { u8 pad[0x30]; f32 f[6]; };
struct func_801E95F8_StructA { u8 pad[0x2C]; struct func_801E95F8_StructB *p; };
struct func_801E95F8_StructG { u8 pad[0xE8]; struct func_801E95F8_StructA *a; };
extern f64 D_801FC700;
extern f64 D_801FC708;
extern f64 D_801FC710;
extern f64 D_801FC718;
extern f64 D_801FC720;
extern f64 D_801FC728;
extern f64 D_801FC730;
extern f64 D_801FC738;
#define G ((struct func_801E95F8_StructG *)&D_801BBBF0)

s32 func_801E95F8(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    f64 zz;
    u64 r;

    if (func_801C0B8C(0x06D97D3A) != 0) {
        return 0x1C;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC700) - D_801FC708) / 7.0;
    zz = 1.0 - 1.0;
    z = t * zz;
    G->a->p->f[0] = z + -144.0;
    G->a->p->f[1] = t * D_801FC710 + 10.0;
    G->a->p->f[2] = z + D_801FC718;
    G->a->p->f[3] = z + D_801FC720;
    G->a->p->f[4] = t * D_801FC728 + D_801FC730;
    G->a->p->f[5] = z + D_801FC738;
    return 0x1B;
}


extern f32 D_801FC740;
extern f32 D_801FC744;
extern f32 D_801FC748;
extern f32 D_801FC74C;

s32 func_801E975C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06FFA2DA) != 0) {
        return 0x1D;
    }
    func_80034C24(func_801C0B2C());
    func_8038BD50(D_801FC740, D_801FC744, -57.7f);
    D_8038BD88(D_801FC748, D_801FC74C, -50.4f);
    return 0x1C;
}


extern f64 D_801FC750;
extern f64 D_801FC758;
extern f64 D_801FC760;
extern f64 D_801FC768;
extern f64 D_801FC770;
extern f64 D_801FC778;
extern f64 D_801FC780;
extern f64 D_801FC788;
extern f64 D_801FC790;
extern f64 D_801FC798;

#define P (*(struct func_801E1C38_Struct **)((u8 *)D_801BBBF0.unkE8 + 0x2C))

s32 func_801E97EC(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    f64 zero;
    f64 two;
    u64 r;

    if (func_801C0B8C(0x071E275A) != 0) {
        return 0x1E;
    }
    r = func_801C0B2C();
    t = (f64)(f32)(func_80034C24(r) / D_801FC750 - D_801FC758) / 2;
    P->unk30 = t * D_801FC760 + D_801FC768;
    P->unk34 = t * D_801FC770 + D_801FC778;
    z = t * (1.0 - 1.0);
    P->unk38 = t * D_801FC780 + D_801FC788;
    P->unk3C = z + D_801FC790;
    P->unk40 = z + 7.0;
    P->unk44 = z + D_801FC798;
    return 0x1D;
}


extern f32 D_801FC7A0;

s32 func_801E9958(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0736915AULL) != 0) {
        return 0x1F;
    }
    func_8038BD50(-81.5f, 11.5f, -52.8f);
    D_8038BD88(-168.0f, D_801FC7A0, -32.0f);
    return 0x1E;
}


extern f64 D_801FC7A8;
extern f64 D_801FC7B0;
extern f64 D_801FC7B8;
extern f64 D_801FC7C0;
extern f64 D_801FC7C8;
extern f64 D_801FC7D0;
extern f64 D_801FC7D8;
extern f64 D_801FC7E0;

s32 func_801E99CC(s32 arg0, s32 arg1) {
    f32 fa0;
    f64 k;
    u64 t;

    if (func_801C0B8C(0x0767655A) != 0) {
        return 0x20;
    }
    t = func_801C0B2C();
    k = (f64)(f32)(func_80034C24(t) / D_801FC7A8 - D_801FC7B0) / 3.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = k * -11.0 + D_801FC7B8;
    fa0 = k * D_801FC7C0 + 14.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = fa0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = k * D_801FC7C8 + -11.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = k * D_801FC7D0 + D_801FC7D8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = fa0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = k * D_801FC7E0 + -4.0;
    return 0x1F;
}


s32 func_801E9B40(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E9B50(s32 arg0, s32 arg1) {
    return 33;
}



s32 func_801E9B60(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

extern f32 D_801FD498;
extern f32 D_801FD49C;
extern f32 D_801FD4A0;
extern f32 D_801FD4A4;
extern f32 D_801FD4A8;
extern f32 D_801FD4AC;

s32 func_801E9B9C(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE50(0x64, 0x64, 0x64);
    D_801FD498 = 0.0f;
    D_801FD49C = 0.0f;
    D_801FD4A0 = 0.0f;
    func_801CCE88(0, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCE88(1, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    D_801FD4A4 = 0.0f;
    D_801FD4A8 = 0.0f;
    D_801FD4AC = 0.0f;
    func_801CCEC8(0, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
    func_801CCEC8(1, (s8)-D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
    return 2;
}


extern f32 D_801FC7E8;
extern f32 D_801FC7EC;
extern f32 D_801FC7F0;

s32 func_801EA004(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x81B320) != 0) {
        return 3;
    }
    D_801FD498 += D_801FC7E8;
    D_801FD49C += D_801FC7E8;
    D_801FD4A0 += D_801FC7E8;
    D_801FD4A4 += 0;
    D_801FD4A8 += D_801FC7EC;
    D_801FD4AC += D_801FC7F0;
    func_801CCE88(0, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(0, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
    func_801CCE88(1, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(1, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)-D_801FD4AC);
    return 2;
}


extern f32 D_801FC7F4;
extern f32 D_801FD4B0;

s32 func_801EA4BC(s32 arg0, s32 arg1) {
    D_801FD4B0 = D_801FC7F4;
    return 4;
}


f32 func_80029280(f32);
f32 func_80032720(f32);

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


s32 func_801EA988(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6FFA2DA) != 0) {
        func_801CCE0C(2);
        func_801CCE50(0x64, 0x64, 0x64);
        D_801FD498 = 0.0f;
        D_801FD49C = 0.0f;
        D_801FD4A0 = 0.0f;
        func_801CCE88(0, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
        func_801CCE88(1, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
        D_801FD4A4 = 0.0f;
        D_801FD4A8 = 0.0f;
        D_801FD4AC = 0.0f;
        func_801CCEC8(0, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
        func_801CCEC8(1, (s8)-D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
        return 7;
    }
    return 6;
}


extern f32 D_801FC810;
extern f32 D_801FC814;
extern f32 D_801FC818;

s32 func_801EAE10(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7399E9A) != 0) {
        return 8;
    }
    D_801FD498 += D_801FC810;
    D_801FD49C += D_801FC810;
    D_801FD4A0 += D_801FC810;
    D_801FD4A4 += 0;
    D_801FD4A8 += D_801FC814;
    D_801FD4AC += D_801FC818;
    func_801CCE88(0, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(0, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
    func_801CCE88(1, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(1, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)-D_801FD4AC);
    return 7;
}


extern f32 D_801FC81C;

s32 func_801EB2C8(s32 arg0, s32 arg1) {
    D_801FD4B0 = D_801FC81C;
    return 9;
}


extern f32 D_801FC820;
extern f32 D_801FC824;
extern f32 D_801FC828;
extern f32 D_801FC82C;

s32 func_801EB2E8(s32 arg0, s32 arg1) {
    s8 sp27;
    s8 sp26;
    s8 sp25;

    D_801FD4B0 += D_801FC820;
    if (D_801FC824 < D_801FD4B0) {
        D_801FD4B0 = 0.0f;
    }
    func_801CCE0C(2);
    func_801CCE50(0x64, 0x64, 0x64);
    sp27 = (s32) (func_80032720(D_801FD4B0) * 80.0f);
    sp25 = (s32) (func_80029280(D_801FD4B0) * 80.0f);
    func_801CCE88(0, 0xBC, 0xBC, 0xBC);
    func_801CCEC8(0, sp27, 0x14, sp25);
    func_801CCE88(1, 0xBC, 0xBC, 0xBC);
    sp27 = (s32) (func_80032720(D_801FD4B0 + D_801FC828) * 80.0f);
    func_801CCEC8(1, sp27, 0x14, (s8) (s32) (func_80029280(D_801FD4B0 + D_801FC82C) * 80.0f));
    return 9;
}


s32 func_801EB458(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801EB468(s32 arg0, s32 arg1) {
    func_801C2420(0x260, func_8038DD54 + 0x14);
    return 1;
}


struct func_801EB49C_StructR {
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

struct func_801EB49C_StructQ {
    u8 pad0[0x2C];
    struct func_801EB49C_StructR *unk2C;
};

struct func_801EB49C_StructP {
    struct func_801EB49C_StructQ *unk0;
};


s32 func_801EB49C(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x260, 0);
    func_8038D854->unk0->unk2C->unk4 = 0.0f;
    func_8038D854->unk0->unk2C->unk8 = 0.0f;
    func_8038D854->unk0->unk2C->unkC = 0.0f;
    func_8038D854->unk0->unk2C->unk18 = 1.0f;
    func_8038D854->unk0->unk2C->unk1C = 1.0f;
    func_8038D854->unk0->unk2C->unk20 = 1.0f;
    func_8038D854->unk0->unk2C->unk12 = 0;
    func_8038D854->unk0->unk2C->unk30 = D_8017AE98;
    return 2;
}


s32 func_801EB594(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EB5A4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EB5B4(s32 arg0, s32 arg1) {
    return 4;
}

extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DDD8[];
extern u8 D_8038DDF0[];
extern void func_8038BA8C(void);
extern s32 D_8038DF70[];
extern s32 D_801C2570(s32, void *);
s32 func_801EB5C4(s32 arg0, s32 arg1) {
    func_801C2420(0xA6, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x261, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x262, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0xA9, D_8038DDD8);
    D_8038BA70();
    func_801C2420(3, D_8038DDF0);
    D_8038BA70();
    D_8038DF70[1] = 0x4000;
    if (D_801C2570(0xAA, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}

extern u8 D_8038D88C[];
extern s32 D_8038D8CC;

struct func_801EB688_S2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EB688_S1 {
    u8 pad0[0x30];
    struct func_801EB688_S2 *unk30;
};

s32 func_801EB688(s32 arg0, s32 arg1) {
    s32 i;
    f32 x;

    for (i = 0; i != 5; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80006214(D_8038D8CC);
    for (i = 0; i != 5; i++) {
        func_8012C89C(D_8038D8CC, i, 0xA6, 0);
    }
    x = 374.0f;
    for (arg1 = 0; arg1 < 5; arg1++) {
        ((struct func_801EB688_S1 **)D_8038D8D0)[arg1]->unk30->unk4 = x;
        x -= 187.0f;
        ((struct func_801EB688_S1 **)D_8038D8D0)[arg1]->unk30->unk8 = 5.0f;
        ((struct func_801EB688_S1 **)D_8038D8D0)[arg1]->unk30->unkC = -51.0f;
        ((struct func_801EB688_S1 **)D_8038D8D0)[arg1]->unk30->unk12 = 0x1000;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EB8E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EBAD8.s")


extern s32 D_801FD428[];

typedef struct func_801EBD7C_StructLeaf {
    u8 pad[4];
    f32 unk4;
    u8 pad8[0xA];
    s16 unk12;
} func_801EBD7C_StructLeaf;

typedef struct func_801EBD7C_StructNode {
    u8 pad[0x30];
    func_801EBD7C_StructLeaf *unk30;
} func_801EBD7C_StructNode;

s32 func_801EBD7C(s32 arg0, s32 arg1)
{
    s32 i;

    if (func_801C0B8C(0x071E275A) != 0) {
        for (i = 0; i < 5; i++) {
            ((func_801EBD7C_StructNode **)D_8038D8D0)[i]->unk30->unk4 = -374.0f;
            D_801FD428[i] = 0;
        }
        ((func_801EBD7C_StructNode **)D_8038D8D0)[0]->unk30->unk12 = 0;
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801EBE68.s")


s32 func_801EC128(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801EC138(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


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


s32 func_801EC204(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801EC214(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EC224(s32 arg0, s32 arg1) {
    return 4;
}


extern u8 D_801DAFD8[];
extern u8 D_801DB084[];
extern u8 D_801DB088[];
extern u8 D_801DB164[];
extern u8 func_801DAE70[];

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

struct func_801EC668_StructA;
extern void func_801CFD28(s32 a);
extern void func_801CFD34(s32 arg0);
extern void func_801D0A68(s32 a);
extern u8 D_801DAFC4[];

struct func_801EC318_Node {
    u8 pad0[8];
    struct func_801EC318_Node *unk8;
};

extern void func_801D11AC(s32 a);
extern void func_801D11B8(s32 a);
extern u8 D_801DB150[];
extern u8 D_801DB070[];
extern s32 D_801FB4C0;

#define FUNC_801EC318_P (*(struct func_801EC318_Node **)((u8 *)&func_801DAAF0 + 0x24))

s32 func_801EC318(s32 arg0, s32 arg1) {
    func_80005670(FUNC_801EC318_P, D_801DB150);
    func_801D11AC(1);
    func_801D11B8(1);
    func_80005670(FUNC_801EC318_P->unk8, D_801DB070);
    func_801CFD28(1);
    func_801CFD34(0);
    func_80005670(FUNC_801EC318_P->unk8->unk8, func_801DAE70 + 0x48);
    func_801D048C(1);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(FUNC_801EC318_P->unk8->unk8->unk8, func_801DAEE8 + 0x1C);
    func_801D0A68(0);
    func_80005670(FUNC_801EC318_P->unk8->unk8->unk8->unk8, D_801DAFC4);
    func_801CC530();
    D_801FB4C0 = 0;
    return 2;
}


struct func_801EC414_S3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EC414_S2 {
    u8 pad0[0x2C];
    struct func_801EC414_S3 *unk2C;
};
struct func_801EC414_S1 {
    u8 pad0[0x24];
    struct func_801EC414_S2 *unk24;
};
struct func_801EC414_S0 {
    u8 pad0[8];
    struct func_801EC414_S1 *unk8;
};
#define P414 ((struct func_801EC414_S0 *)D_801DAB14)
extern f32 D_801FC860;
extern f32 D_801FC864;

s32 func_801EC414(s32 arg0, s32 arg1) {
    if (P414->unk8->unk24 != NULL) {
    if (D_801FB4C0 != 0) {
    if (D_801FB4C0 == 1) goto c1;
    if (D_801FB4C0 == 2) goto c2;
    return 2;
    }
c0:
    P414->unk8->unk24->unk2C->unk4 = 5120.0f;
    P414->unk8->unk24->unk2C->unk8 = 0.0f;
    P414->unk8->unk24->unk2C->unkC = 0.0f;
    P414->unk8->unk24->unk2C->unk12 = 0;
    D_801FB4C0 = 1;
    goto end;
c1:
    if (func_801C0B8C(0x0169A220)) {
        func_801CC470(0, 0x0168001C, 0, 0x100, 1.0f);
        D_801FB4C0 = 2;
    }
    goto end;
c2:
    if (func_801C0B8C(0x01A9B860)) {
        P414->unk8->unk24->unk2C->unk4 = D_801FC860;
        P414->unk8->unk24->unk2C->unk8 = 25.0f;
        P414->unk8->unk24->unk2C->unkC = D_801FC864;
        P414->unk8->unk24->unk2C->unk12 = 0x1800;
        return 3;
    }
    }
end:
    return 2;
}


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


s32 func_801EC7B8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EC7C8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EC7D8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EC7E8(s32 arg0, s32 arg1) {
    return 10;
}


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


s32 func_801ECA04(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x050384BA) != 0) {
        func_801CC470(0, 0x01B8000C, 0, 0, 1.0f);
        return 0xE;
    }
    return 0xD;
}



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



s32 func_801ECCC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x75FC43A) != 0) {
        func_801CC528();
    }
    return 0x12;
}


s32 func_801ECD08(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801ECD18(s32 arg0, s32 arg1) {
    return 20;
}


s32 func_801ECD28(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801ECD38(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801ECD48(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801ECD58(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801ECD68(s32 arg0, s32 arg1) {
    return 25;
}



s32 func_801ECD78(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


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


s32 func_801ECFC8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801ECFD8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016CAF60) != 0) {
        func_801CC470(1, 0x02A80000, 0, 0x1000, 3.0f);
        return 6;
    }
    return 5;
}


s32 func_801ED038(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801ED048(s32 arg0, s32 arg1) {
    return 8;
}


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


s32 func_801ED108(s32 arg0, s32 arg1) {
    return 11;
}

extern f32 D_801FD478;
extern void func_801CC4D8(s32, s32, s32, s32, f32);

struct func_801ED118_Struct0 {
    u8 pad0[8];
    struct func_801ED118_Struct0 *unk8;
    u8 pad1[0x18];
    struct func_801ED118_Struct0 *unk24;
    u8 pad2[4];
    struct func_801ED118_Struct1 *unk2C;
};
struct func_801ED118_Struct1 {
    u8 pad0[0x12];
    s16 unk12;
};

s32 func_801ED118(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x034BCFA0) != 0) {
        func_801CC470(1, 0x02A80000, 0, 0x1000, 6.0f);
        func_801CC4D8(1, 0x01B8000E, 0, 0, 24.0f);
        D_801FD478 = (f32) ((struct func_801ED118_Struct0 *) &func_801DAAF0)->unk24->unk8->unk8->unk24->unk2C->unk12 * 90.0f * 0.00048828125f;
        return 0xC;
    }
    return 0xB;
}


extern f32 D_801FC898;

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


struct func_801ED2B4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801ED2B4_Struct2 {
    u8 pad0[0x2C];
    struct func_801ED2B4_Struct3 *unk2C;
};
struct func_801ED2B4_Struct1 {
    u8 pad0[8];
    struct func_801ED2B4_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801ED2B4_Struct2 *unk24;
};

extern f32 D_801FC89C;

s32 func_801ED2B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03920060) != 0) {
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = 50.0f;
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -11.0f;
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x01B8000E, 0, 0x100, 2.0f);
        return 0xE;
    }
    ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 - D_801FC89C;
    return 0xD;
}


s32 func_801ED3C8(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801ED3D8(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801ED3E8(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801ED3F8(s32 arg0, s32 arg1) {
    return 18;
}


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


struct func_801ED4EC_Struct5 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801ED4EC_Struct4 {
    u8 pad0[0x2C];
    struct func_801ED4EC_Struct5 *unk2C;
};
struct func_801ED4EC_Struct3 {
    u8 pad0[0x24];
    struct func_801ED4EC_Struct4 *unk24;
};
struct func_801ED4EC_Struct2 {
    u8 pad0[0x8];
    struct func_801ED4EC_Struct3 *unk8;
};
struct func_801ED4EC_Struct1 {
    u8 pad0[0x8];
    struct func_801ED4EC_Struct2 *unk8;
};

extern f32 D_801FC8A8;
extern f32 D_801FC8AC;

s32 func_801ED4EC(s32 arg0, s32 arg1)
{
  struct func_801ED4EC_Struct1 **new_var;
  struct func_801ED4EC_Struct1 * volatile *pp;
  new_var = ((struct func_801ED4EC_Struct1 **) (&func_801DAAF0)) + 9;
  if (func_801C0B8C(0x044AA200) != 0)
  {
    pp = new_var;
    (*pp)->unk8->unk8->unk24->unk2C->unk4 = D_801FC8A8;
    (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unkC = D_801FC8AC;
    (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
    func_801CC470(1, 0x01B80010, 0, 0x1100, 3.0f);
    return 0x14;
  }
  return 0x13;
}


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


s32 func_801ED9A4(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801ED9B4(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801ED9C4(s32 arg0, s32 arg1) {
    return 28;
}


s32 func_801ED9D4(s32 arg0, s32 arg1) {
    return 29;
}



s32 func_801ED9E4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


#define P8(p, o) (*(u8 **)((u8 *)(p) + (o)))
#define ND ((u8 *)P8(P8(P8(P8(*(u8 **)&D_801DAB14, 8), 8), 8), 0x24))
#define FL ((f32 *)P8(ND, 0x2C))
extern f32 D_801FC8C8;

s32 func_801EDA28(s32 arg0, s32 arg1) {
    if (P8(P8(P8(P8(*(u8 **)&D_801DAB14, 8), 8), 8), 0x24) != 0) {
        if (func_801C0B8C(0x01406F40) != 0) {
            FL[1] = -197.0f;
            FL[2] = 0.0f;
            FL[3] = D_801FC8C8;
            *(s16 *)((u8 *)FL + 0x12) = 0x1000;
            func_801CC470(2, 0x01B80011, 0, 0x1001, 1.0f);
            return 2;
        }
        FL[1] = 5120.0f;
        FL[2] = 0.0f;
        FL[3] = 0.0f;
        *(s16 *)((u8 *)FL + 0x12) = 0;
    }
    return 1;
}



s32 func_801EDBBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x020545E0) != 0) {
        func_801CC470(2, 0x01B80012, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}


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


extern f32 D_801FC8CC;

struct func_801EDD84_StructVec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801EDD84_StructSub {
    u8 pad0[0x2C];
    struct func_801EDD84_StructVec *unk2C;
};

struct func_801EDD84_StructObj {
    u8 pad0[0x8];
    struct func_801EDD84_StructObj *unk8;
    u8 pad1[0x18];
    struct func_801EDD84_StructSub *unk24;
};

s32 func_801EDD84(s32 arg0, s32 arg1)
{
  int new_var;
  if (func_801C0B8C(0x05175ADA) != 0)
  {
    struct func_801EDD84_StructObj **g;
    g = (struct func_801EDD84_StructObj **) (((u8 *) (&func_801DAAF0)) - (new_var = -0x24));
    (*g)->unk8->unk8->unk8->unk24->unk2C->unk4 = -197.0f;
    (*g)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0;
    (*g)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8CC;
    (*g)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
    func_801CFD34(0);
    return 6;
  }
  return 5;
}


s32 func_801EDE5C(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x01B80021, 0, 0x1100, 6.0f);
    return 7;
}


s32 func_801EDEA4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EDEB4(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801EDEC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05F49B7A) != 0) {
        return 0xA;
    }
    return 9;
}


extern f32 D_801FC8D0;

typedef struct func_801EDF00_StructA {
    u8 pad0[8];
    struct func_801EDF00_StructA *unk8;
    u8 pad1[0x18];
    struct func_801EDF00_StructB *unk24;
} func_801EDF00_StructA;

typedef struct func_801EDF00_StructB {
    u8 pad0[0x2C];
    struct func_801EDF00_StructC *unk2C;
} func_801EDF00_StructB;

typedef struct func_801EDF00_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_801EDF00_StructC;

s32 func_801EDF00(s32 arg0, s32 arg1)
{
  char new_var;
  if (func_801C0B8C(0x05F49B7A) != 0)
  {
    ((func_801EDF00_StructA *) (*((func_801EDF00_StructA **) ((u8 *) &func_801DAAF0 + (new_var = 0x24)))))->unk8->unk8->unk8->unk24->unk2C->unk4 = -197.0f;
    ((func_801EDF00_StructA *) (*((func_801EDF00_StructA **) ((u8 *) &func_801DAAF0 + new_var))))->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ((func_801EDF00_StructA *) (*((func_801EDF00_StructA **) ((u8 *) &func_801DAAF0 + new_var))))->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8D0;
    ((func_801EDF00_StructA *) (*((func_801EDF00_StructA **) ((u8 *) &func_801DAAF0 + new_var))))->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
    func_801CC470(2, 0x02A8001D, 0x2D, 0x1000, 9.0f);
    return 0xB;
  }
  return 0xA;
}


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


s32 func_801EE078(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801EE088(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801EE098(s32 arg0, s32 arg1) {
    return 16;
}


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


s32 func_801EE338(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801EE348(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

extern f32 D_801FC8E0;
extern f32 D_801FC8E4;
#define H(p, o) (*(u8 **)((p) + (o)))
#define N24 H(H(H(H(*(u8 **)&D_801DAB14, 8), 8), 8), 8), 0x24)
#define NODE H(H(H(H(H(*(u8 **)&D_801DAB14, 8), 8), 8), 8), 0x24)
#define F(o) (*(f32 *)(H(NODE, 0x2C) + (o)))

s32 func_801EE38C(s32 arg0, s32 arg1) {
    if (NODE != 0) {
        if (func_801C0B8C(0x01406F40) != 0) {
            F(4) = -190.0f;
            F(8) = 0.0f;
            F(0xC) = D_801FC8E0;
            *(s16 *)(H(NODE, 0x2C) + 0x12) = 0x1182;
            func_801CC470(3, 0x01B80013, 0, 0x1001, 1.0f);
            return 2;
        }
        F(4) = 5120.0f;
        F(8) = 0.0f;
        F(0xC) = D_801FC8E4;
        *(s16 *)(H(NODE, 0x2C) + 0x12) = 0x800;
    }
    return 1;
}


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



s32 func_801EE6B8(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(0))[3] >= 0xE) {
        return 5;
    }
    return 4;
}


extern s32 D_801FB5FC;

s32 func_801EE6F8(s32 arg0, s32 arg1) {
    D_801FB5FC = 0;
    return 0x6;
}


extern s32 func_801D0408();
extern f32 D_801FC8EC;
struct func_801EE710_S2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EE710_N {
    u8 pad0[8];
    struct func_801EE710_N *unk8;
    u8 pad1[0x18];
    struct func_801EE710_N *unk24;
    u8 pad2[4];
    struct func_801EE710_S2 *unk2C;
};
#define P ((*(struct func_801EE710_N **)&D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C)

s32 func_801EE710(s32 arg0, s32 arg1) {
    s32 v = D_801FB5FC;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    return 6;
c0:
    if (func_801C0B8C(0x04FFB42A) != 0) {
        P->unk4 = -197.0f;
        P->unk8 = 0.0f;
        P->unkC = D_801FC8EC;
        P->unk12 = 0x1000;
        func_801CC470(3, 0x01B8001F, 9, 0, 1.0f);
        D_801FB5FC = 1;
    }
    goto end;
c1:
    if (func_801D0408() != 0) {
        func_801CC470(3, 0x01B8001D, 0, 0, 4.0f);
        return 7;
    }
end:
    return 6;
}


extern f32 D_801FC8F0;

struct func_801EE874_S {
    u8 pad0[8];
    struct func_801EE874_S *unk8;
};
struct func_801EE874_S4 {
    u8 pad0[0x24];
    struct func_801EE874_S5 *unk24;
};
struct func_801EE874_S5 {
    u8 pad0[0x2C];
    struct func_801EE874_T *unk2C;
};
struct func_801EE874_T {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

#define FUNC_801EE874_X(pp) ((struct func_801EE874_S4 *)((struct func_801EE874_S *)*(pp))->unk8->unk8->unk8->unk8)

s32 func_801EE874(s32 arg0, s32 arg1)
{
  char new_var;
  if (func_801C0B8C(0x05175ADA) != 0)
  {
    u8 **pp;
    new_var = 0x24;
    pp = (u8 **) (((u8 *) (&func_801DAAF0)) + new_var);
    ((struct func_801EE874_S4 *) ((struct func_801EE874_S *) (*pp))->unk8->unk8->unk8->unk8)->unk24->unk2C->unk4 = -197.0f;
    ((struct func_801EE874_S4 *) ((struct func_801EE874_S *) (*pp))->unk8->unk8->unk8->unk8)->unk24->unk2C->unk8 = 0.0f;
    ((struct func_801EE874_S4 *) ((struct func_801EE874_S *) (*pp))->unk8->unk8->unk8->unk8)->unk24->unk2C->unkC = D_801FC8F0;
    ((struct func_801EE874_S4 *) ((struct func_801EE874_S *) (*pp))->unk8->unk8->unk8->unk8)->unk24->unk2C->unk12 = 0x800;
    return 8;
  }
  return 7;
}



s32 func_801EE954(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x01B80020, 0, 0x1100, 6.0f);
    return 9;
}


s32 func_801EE99C(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801EE9AC(s32 arg0, s32 arg1) {
    return 11;
}



s32 func_801EE9BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05F49B7A) != 0) {
        return 0xC;
    }
    return 11;
}


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


s32 func_801EEB90(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801EEBA0(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801EEBB0(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801EEBC0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06670C5A) != 0) {
        return 0x13;
    }
    return 0x12;
}


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


struct func_801EEE08_Node {
    u8 pad0[0x8];
    struct func_801EEE08_Node *unk8;
};
struct func_801EEE08_Root {
    u8 pad0[0x24];
    struct func_801EEE08_Node *unk24;
};
struct func_801EEE08_Tail {
    u8 pad0[0x24];
    struct func_801EEE08_Mid *unk24;
};
struct func_801EEE08_Mid {
    u8 pad0[0x2C];
    struct func_801EEE08_Leaf *unk2C;
};
struct func_801EEE08_Leaf {
    u8 pad0[4];
    f32 unk4;
};

s32 func_801EEE08(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x070EE51A) != 0) {
        ((struct func_801EEE08_Tail *)((struct func_801EEE08_Root *)&func_801DAAF0)->unk24->unk8->unk8->unk8->unk8)->unk24->unk2C->unk4 = 5120.0f;
        return 0x16;
    }
    return 0x15;
}


s32 func_801EEE74(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801EEE84(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801EEE94(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801EEEA4(s32 arg0, s32 arg1) {
    return 25;
}



s32 func_801EEEB4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#define P(x, o) (*(u8 **)((u8 *)(x) + (o)))
#define N5 P(P(P(P(P(*(u8 **)&D_801DAB14, 8), 8), 8), 8), 8)
#define FL ((f32 *)P(P(N5, 0x24), 0x2C))

s32 func_801EEEF8(s32 arg0, s32 arg1) {
    if (P(N5, 0x24) != 0) {
        if (func_801C0B8C(0x01406F40) != 0) {
            FL[1] = -204.0f;
            FL[2] = 0.0f;
            FL[3] = 3.0f;
            *(s16 *)((u8 *)FL + 0x12) = 0x1000;
            func_801CC470(4, 0x01B80013, 0, 0x1001, 1.0f);
            return 2;
        }
        FL[1] = 5120.0f;
        FL[2] = 0.0f;
        FL[3] = 3.0f;
        *(s16 *)((u8 *)FL + 0x12) = 0x800;
    }
    return 1;
}



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


s32 func_801EF258(s32 arg0, s32 arg1) {
    return 5;
}



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


s32 func_801EF698(s32 arg0, s32 arg1) {
    return 11;
}



s32 func_801EF6A8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1, 0, 2);
    return 1;
}



s32 func_801EF714(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


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



s32 func_801EF7CC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    return 4;
}


s32 func_801EF7F4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EF804(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801EF814(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801EF824(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EF834(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EF844(s32 arg0, s32 arg1) {
    return 9;
}


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


extern u8 D_801FD460[];
extern s32 D_801FB6E0;
extern s32 D_8001B204(s32, s32, s32, void *);
extern void func_8038CAF4(u8 *, s32, s32);

s32 func_801EF8A4(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 sp20;

    if (D_801FD45C >= 5) {
        sp20 = 0;
        sp24 = D_801FD458 % 23;
        if (func_801302CC() != 0) {
            sp20 = -0x14;
        }
        func_8038CAF4(D_801FD460, D_801FB6E0, sp24 + 1);
        D_801FD460[sp24 + 1] = 0;
        D_8001B204(0, 0x50, (s16)(sp20 + 0xBA), D_801FD460);
        if (++D_801FD458 >= 0x18) {
            return 2;
        }
        if (D_801FD460[sp24] != 0x20 && D_801FD460[sp24] != 0) {
            func_8038D28C(0x1C9);
        }
        D_801FD45C = 0;
    }
    D_801FD45C++;
    return 1;
}


extern u8 D_801FBC40[];
extern u8 D_801FBC44[];

s32 func_801EF9B8(s32 arg0, s32 arg1) {
    func_8001B204(0, 0, 0, D_801FBC40);
    func_8001B204(1, 0, 0, D_801FBC44);
    return 3;
}


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


s32 func_801EFAE8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EFAF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03D09000) != 0) {
        return 8;
    }
    return 7;
}


s32 func_801EFB34(s32 arg0, s32 arg1) {
    return 9;
}


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



s32 func_801EFBA4(s32 arg0, s32 arg1) {
    u32 state;

    state = D_801FB6E8;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    if (state != 3) {
        goto done;
    }
    goto done;
case0:
    if (func_801C0B8C(0x058537DA) != 0) {
        func_801D0498(0);
        func_801D0B04(1);
        D_801FB6E8 = 1;
    }
    goto done;
case1:
    if (func_801C0B8C(0x05BA9FBA) != 0) {
        func_801D0498(1);
        func_801D0B04(0);
        D_801FB6E8 = 2;
    }
    goto done;
case2:
    if (func_801C0B8C(0x05C9E1FA) != 0) {
        func_801D0498(0);
        func_801D0B04(1);
        D_801FB6E8 = 3;
    }
done:
    state = (u32) D_801FB6E4++ >= 0xCD;
    if (state) {
        func_801D0498(0);
        func_801D0B04(0);
        return 0xB;
    }
    return 0xA;
}


s32 func_801EFCD4(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801EFCE4(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801EFCF4(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801EFD04(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801EFD14(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801EFD24(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801EFD34(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801EFD44(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801EFD54(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801EFD64(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801EFD74(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A120) != 0) {
        func_8038D28C(0x1D3);
        return 1;
    }
    return 0;
}


s32 func_801EFDC0(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801EFDD0(s32 arg0, s32 arg1) {
    return 3;
}



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


s32 func_801EFECC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02A57D80) != 0) {
        return 7;
    }
    if (func_801C0B8C(0x028E9A20) != 0) {
        if ((func_801D1AC0(0x01680003, 0x14) != 0) || (func_801D1AC0(0x01680003, 0x28) != 0)) {
            func_8038D28C(0x6A4);
        }
        return 6;
    }
    if (func_801C0B8C(0x02424EE0) != 0) {
        if ((func_801D1AC0(0x0168001C, 1) != 0) || (func_801D1AC0(0x0168001C, 0x18) != 0)) {
            func_8038D28C(0x6A2);
        }
        return 6;
    }
    if (func_801C0B8C(0x01C83CE0) != 0) {
        if ((func_801D1AC0(0x0168001C, 1) != 0) || (func_801D1AC0(0x0168001C, 0x18) != 0)) {
            func_8038D28C(0x6A3);
        }
        return 6;
    }
    if ((func_801C0B8C(0x01A9B860) != 0) && ((func_801D1AC0(0x0168001C, 1) != 0) || (func_801D1AC0(0x0168001C, 0x18) != 0))) {
        func_8038D28C(0x6A2);
    }
    if ((func_801C0B8C(0x0169A220) != 0) && ((func_801D1AC0(0x0168001C, 1) != 0) || (func_801D1AC0(0x0168001C, 0x18) != 0))) {
        func_8038D28C(0x6A3);
    }
    return 6;
}


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


s32 func_801F0340(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801F0350(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801F0360(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801F0370(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        func_8038D28C(0x101);
        return 0x10;
    }
    return 0xF;
}


s32 func_801F03BC(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801F03CC(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801F03DC(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801F03EC(s32 arg0, s32 arg1) {
    return 20;
}


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


s32 func_801F04D0(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801F04E0(s32 arg0, s32 arg1) {
    return 25;
}



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


s32 func_801F070C(s32 arg0, s32 arg1) {
    return 31;
}


extern f32 D_801FC920;
extern f64 D_801FC928;
extern f64 D_801FC930;
extern f64 D_801FC938;
extern f64 D_801FC940;
extern f64 D_801FC948;
extern f64 D_801FC950;
extern f64 D_801FC958;
extern f64 D_801FC960;
extern f64 D_801FC968;
extern f64 D_801FC970;
extern f64 D_801FC978;
extern f64 D_801FC980;
extern f32 D_801FC988;
extern f32 D_801FC98C;
extern f32 D_801FC990;
extern f32 D_801FC994;
extern f32 D_801FC998;
extern f32 D_801FC99C;
extern f32 D_801FC9A0;
extern f32 D_801FC9A4;

s32 func_801F071C(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    f64 w;

    func_8038BEC8(5.0f);
    func_8038BE98(D_801FC920);
    if (func_801C0B8C(0x5D1420) != 0) {
        return 1;
    }
    if (func_801C0B8C(0x2F4D60) != 0) {
        t = (f64)(f32)(func_80034C24(func_801C0B2C()) / D_801FC928 - D_801FC930) / D_801FC938;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * D_801FC940 + D_801FC948;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * D_801FC950 + D_801FC958;
        z = 1.0 - 1.0;
        w = t * z;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * D_801FC960 + D_801FC968;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = w + D_801FC970;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = w + D_801FC978;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = w + D_801FC980;
        return 0;
    }
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_8038BD50(D_801FC988, D_801FC98C, 8.2f);
        D_8038BD88(D_801FC990, D_801FC994, 1.9f);
    } else {
        func_8038BD50(D_801FC998, D_801FC99C, 10.3f);
        D_8038BD88(D_801FC9A0, D_801FC9A4, -2.4f);
    }
    return 0;
}


extern f64 D_801FC9A8;
extern f64 D_801FC9B0;
extern f64 D_801FC9B8;
extern f64 D_801FC9C0;
extern f64 D_801FC9C8;
extern f64 D_801FC9D0;
extern f64 D_801FC9D8;
extern f64 D_801FC9E0;
extern f64 D_801FC9E8;
extern f64 D_801FC9F0;
extern f64 D_801FC9F8;
extern f64 D_801FCA00;

s32 func_801F0940(s32 arg0, s32 arg1) {
    f64 t;
    u64 r;

    if (func_801C0B8C(0x8ADAE0) != 0) {
        return 2;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC9A8) - D_801FC9B0) / 3.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (f32)(t * D_801FC9B8 + 7.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (f32)(t * D_801FC9C0 + D_801FC9C8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32)(t * D_801FC9D0 + D_801FC9D8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32)(t * D_801FC9E0 + D_801FC9E8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32)(t * D_801FC9F0 + D_801FC9F8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32)(t * D_801FCA00 + 2.0);
    return 1;
}


extern f32 D_801FCA08;
extern f32 D_801FCA0C;
extern f32 D_801FCA10;
extern f64 D_801FCA18;
extern f64 D_801FCA20;
extern f64 D_801FCA28;
extern f64 D_801FCA30;
extern f64 D_801FCA38;
extern f64 D_801FCA40;
extern f64 D_801FCA48;
extern f64 D_801FCA50;
extern f32 D_801FCA58;
extern f64 D_801FCA60;
extern f64 D_801FCA68;
extern f64 D_801FCA70;
extern f64 D_801FCA78;
extern f64 D_801FCA80;
extern f64 D_801FCA88;
extern f32 D_801FCA90;
extern f64 D_801FCA98;
extern f64 D_801FCAA0;
extern f64 D_801FCAA8;
extern f64 D_801FCAB0;
extern f64 D_801FCAB8;
extern f64 D_801FCAC0;
extern f64 D_801FCAC8;
extern f64 D_801FCAD0;
extern f64 D_801FCAD8;
extern f64 D_801FCAE0;
extern f64 D_801FCAE8;
extern f64 D_801FCAF0;
extern f64 D_801FCAF8;
extern f64 D_801FCB00;
extern f64 D_801FCB08;
extern f64 D_801FCB10;
extern f64 D_801FCB18;
extern f64 D_801FCB20;
extern f64 D_801FCB28;
extern f64 D_801FCB30;
extern f64 D_801FCB38;
extern f64 D_801FCB40;
extern f64 D_801FCB48;
extern f64 D_801FCB50;
extern f64 D_801FCB58;
extern f64 D_801FCB60;
extern f64 D_801FCB68;
extern f64 D_801FCB70;
extern f64 D_801FCB78;
extern f64 D_801FCB80;
extern f64 D_801FCB88;
extern f64 D_801FCB90;
extern f64 D_801FCB98;
extern f64 D_801FCBA0;
extern f64 D_801FCBA8;
extern f64 D_801FCBB0;
extern f64 D_801FCBB8;
extern f64 D_801FCBC0;
extern f64 D_801FCBC8;
extern f64 D_801FCBD0;
extern f64 D_801FCBD8;
extern f64 D_801FCBE0;
extern f64 D_801FCBE8;
extern f64 D_801FCBF0;
extern f64 D_801FCBF8;

struct func_801F0AC8_S3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_801F0AC8_S2 {
    u8 pad[0x2C];
    struct func_801F0AC8_S3 *unk2C;
};
struct func_801F0AC8_S1 {
    u8 pad[0xE8];
    struct func_801F0AC8_S2 *unkE8;
};
#define G ((struct func_801F0AC8_S1 *)&D_801BBBF0)

s32 func_801F0AC8(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    u64 t;
    f32 f;

    if (func_801C0B8C(0xC7E3DF) != 0) {
        func_8038BD50(D_801FCA08, 47.0f, -11.2f);
        D_8038BD88(D_801FCA0C, D_801FCA10, 4.4f);
        return 3;
    }
    if (func_801C0B8C(0xC4D69F) != 0) {
        t = func_801C0B2C();
        a = ((f64) (f32) ((func_80034C24(t) / D_801FCA18) - D_801FCA20) / D_801FCA28) * 0.0f;
        f = (f32) (a + D_801FCA30);
        G->unkE8->unk2C->unk30 = f;
        G->unkE8->unk2C->unk34 = f;
        G->unkE8->unk2C->unk38 = (f32) (a + D_801FCA38);
        G->unkE8->unk2C->unk3C = (f32) (a + D_801FCA40);
        G->unkE8->unk2C->unk40 = (f32) (a + D_801FCA48);
        G->unkE8->unk2C->unk44 = (f32) (a + D_801FCA50);
        func_8038BE98(D_801FCA58);
        return 2;
    }
    if (func_801C0B8C(0xC1C960) != 0) {
        t = func_801C0B2C();
        a = ((f64) (f32) ((func_80034C24(t) / D_801FCA60) - D_801FCA68) / D_801FCA70) * 0.0f;
        G->unkE8->unk2C->unk30 = (f32) (a + D_801FCA78);
        G->unkE8->unk2C->unk34 = (f32) (a + 10.0);
        G->unkE8->unk2C->unk38 = (f32) (a + D_801FCA80);
        G->unkE8->unk2C->unk3C = (f32) (a + -4.5);
        G->unkE8->unk2C->unk40 = (f32) (a + D_801FCA88);
        G->unkE8->unk2C->unk44 = (f32) (a + 2.5);
        func_8038BE98(D_801FCA90);
        return 2;
    }
    if (func_801C0B8C(0xBEBC20) != 0) {
        t = func_801C0B2C();
        a = ((f64) (f32) ((func_80034C24(t) / D_801FCA98) - 12.5) / D_801FCAA0) * 0.0f;
        G->unkE8->unk2C->unk30 = (f32) (a + D_801FCAA8);
        G->unkE8->unk2C->unk34 = (f32) (a + D_801FCAB0);
        G->unkE8->unk2C->unk38 = (f32) (a + D_801FCAB8);
        G->unkE8->unk2C->unk3C = (f32) (a + D_801FCAC0);
        G->unkE8->unk2C->unk40 = (f32) (a + 16.0);
        G->unkE8->unk2C->unk44 = (f32) (a + D_801FCAC8);
        return 2;
    }
    if (func_801C0B8C(0xBA2840) != 0) {
        t = func_801C0B2C();
        a = (f64) (f32) ((func_80034C24(t) / D_801FCAD0) - D_801FCAD8) / D_801FCAE0;
        G->unkE8->unk2C->unk30 = (f32) ((a * D_801FCAE8) + D_801FCAF0);
        G->unkE8->unk2C->unk34 = (f32) ((a * D_801FCAF8) + D_801FCB00);
        b = a * 0.0f;
        G->unkE8->unk2C->unk38 = (f32) ((a * D_801FCB08) + -6.0);
        G->unkE8->unk2C->unk3C = (f32) (b + D_801FCB10);
        G->unkE8->unk2C->unk40 = (f32) (b + 15.5);
        G->unkE8->unk2C->unk44 = (f32) (b + D_801FCB18);
        return 2;
    }
    if (func_801C0B8C(0xB10080) != 0) {
        t = func_801C0B2C();
        b = (f64) (f32) ((func_80034C24(t) / D_801FCB20) - D_801FCB28) / D_801FCB30;
        a = b * 0.0f;
        G->unkE8->unk2C->unk30 = (f32) ((b * D_801FCB38) + D_801FCB40);
        G->unkE8->unk2C->unk34 = (f32) (a + 2.0);
        G->unkE8->unk2C->unk38 = (f32) ((b * D_801FCB48) + D_801FCB50);
        G->unkE8->unk2C->unk3C = (f32) (a + D_801FCB58);
        G->unkE8->unk2C->unk40 = (f32) (a + 15.5);
        G->unkE8->unk2C->unk44 = (f32) (a + D_801FCB60);
        return 2;
    }
    if (func_801C0B8C(0xA1BE40) != 0) {
        t = func_801C0B2C();
        a = (f64) (f32) ((func_80034C24(t) / D_801FCB68) - D_801FCB70) / 1.0f;
        G->unkE8->unk2C->unk30 = (f32) ((a * D_801FCB78) + D_801FCB80);
        G->unkE8->unk2C->unk34 = (f32) ((a * D_801FCB88) + D_801FCB90);
        b = a * 0.0f;
        G->unkE8->unk2C->unk38 = (f32) ((a * D_801FCB98) + D_801FCBA0);
        G->unkE8->unk2C->unk3C = (f32) (b + D_801FCBA8);
        G->unkE8->unk2C->unk40 = (f32) (b + 15.5);
        G->unkE8->unk2C->unk44 = (f32) (b + D_801FCBB0);
        return 2;
    }
    t = func_801C0B2C();
    a = (f64) (f32) ((func_80034C24(t) / D_801FCBB8) - D_801FCBC0) / 1.5;
    G->unkE8->unk2C->unk30 = (f32) ((a * D_801FCBC8) + D_801FCBD0);
    G->unkE8->unk2C->unk34 = (f32) ((a * D_801FCBD8) + D_801FCBE0);
    b = a * 0.0f;
    G->unkE8->unk2C->unk38 = (f32) ((a * D_801FCBE8) + -6.0);
    G->unkE8->unk2C->unk3C = (f32) (b + D_801FCBF0);
    G->unkE8->unk2C->unk40 = (f32) (b + 15.5);
    G->unkE8->unk2C->unk44 = (f32) (b + D_801FCBF8);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F13A0.s")

extern f64 D_801FCD10, D_801FCD18, D_801FCD20, D_801FCD28, D_801FCD30, D_801FCD38, D_801FCD40, D_801FCD48, D_801FCD50, D_801FCD58;

s32 func_801F1804(s32 arg0, s32 arg1) {
    f64 t, one;
    u64 r;
    if (func_801C0B8C(0x0104ECDF) != 0) {
        return 5;
    }
    r = func_801C0B2C();
    one = 1.0;
    t = (f64)(f32)(func_80034C24(r) / D_801FCD10 - D_801FCD18) / one;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * D_801FCD20 + D_801FCD28;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * D_801FCD30 + 7.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * -2.0 + -5.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = t * D_801FCD38 + -20.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = t * D_801FCD40 + D_801FCD48;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = t * D_801FCD50 + D_801FCD58;
    return 4;
}


extern f64 D_801FCD60;
extern f64 D_801FCD68;
extern f64 D_801FCD70;
extern f64 D_801FCD78;
extern f64 D_801FCD80;
extern f64 D_801FCD88;
extern f64 D_801FCD90;
extern f64 D_801FCD98;
extern f64 D_801FCDA0;

#define DEST1994 ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801F1994(s32 arg0, s32 arg1) {
    f64 temp_fa0;
    f64 temp_fv1;

    if (func_801C0B8C(0x0132B39F) != 0) {
        return 6;
    }
    temp_fv1 = (f64)(f32)((func_80034C24(func_801C0B2C()) / D_801FCD60) - D_801FCD68) / 3.0;
    DEST1994->unk30 = (f32)((temp_fv1 * D_801FCD70) + -17.0);
    DEST1994->unk34 = (f32)((temp_fv1 * D_801FCD78) + D_801FCD80);
    temp_fa0 = temp_fv1 * 0.0f;
    DEST1994->unk38 = (f32)((temp_fv1 * D_801FCD88) + D_801FCD90);
    DEST1994->unk3C = (f32)(temp_fa0 + -2.0);
    DEST1994->unk40 = (f32)(temp_fa0 + D_801FCD98);
    DEST1994->unk44 = (f32)(temp_fa0 + D_801FCDA0);
    return 5;
}


extern f64 D_801FCDA8;
extern f64 D_801FCDB0;
extern f64 D_801FCDB8;
extern f64 D_801FCDC0;
extern f64 D_801FCDC8;
extern f64 D_801FCDD0;
extern f64 D_801FCDD8;
extern f64 D_801FCDE0;
extern f64 D_801FCDE8;
extern f64 D_801FCDF0;
extern f64 D_801FCDF8;

s32 func_801F1B04(s32 arg0, s32 arg1) {
    f64 t;
    f32 q;
    u64 r;

    if (func_801C0B8C(0x01607A5F) != 0) {
        return 7;
    }
    r = func_801C0B2C();
    t = (f64) (f32) ((func_80034C24(r) / D_801FCDA8) - D_801FCDB0) / 3.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (t * D_801FCDB8) + D_801FCDC0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (t * D_801FCDC8) + 3.0f;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (t * D_801FCDD0) + D_801FCDD8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (t * D_801FCDE0) + D_801FCDE8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (t * (2.0 - 1.0)) + D_801FCDF0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (t * D_801FCDF8) + 1.5;
    return 6;
}


extern f32 D_801FCE00;
extern f32 D_801FCE04;
extern f64 D_801FCE08;
extern f64 D_801FCE10;
extern f64 D_801FCE18;
extern f64 D_801FCE20;
extern f64 D_801FCE28;
extern f64 D_801FCE30;
extern f64 D_801FCE38;
extern f64 D_801FCE40;
extern f64 D_801FCE48;
extern f64 D_801FCE50;
extern f64 D_801FCE58;
extern f32 D_801FCE60;
extern f32 D_801FCE64;

s32 func_801F1C90(s32 arg0, s32 arg1) {
    f64 t;
    u64 r;

    if (func_801C0B8C(0x017EFEDF) != 0) {
        func_8038BD50(13.0f, 72.0f, 7.5f);
        D_8038BD88(D_801FCE00, D_801FCE04, 0);
        return 8;
    }
    if (func_801C0B8C(0x01681B7F) != 0) {
        r = func_801C0B2C();
        t = (f32)(func_80034C24(r) / D_801FCE08 - D_801FCE10) / 1.5;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * D_801FCE18 + D_801FCE20;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * D_801FCE28 + D_801FCE30;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * D_801FCE38 + 7.0;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = t * D_801FCE40 + D_801FCE48;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = t * -0.5 + D_801FCE50;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = t * D_801FCE58 + -1.5;
        return 7;
    }
    func_8038BD50(D_801FCE60, 5.0f, -6.2f);
    D_8038BD88(-2.0f, D_801FCE64, -0.7f);
    return 7;
}


struct func_801F1EA0_Struct3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_801F1EA0_Struct2 {
    u8 pad[0x2C];
    struct func_801F1EA0_Struct3 *unk2C;
};
struct func_801F1EA0_Struct1 {
    u8 pad[0xE8];
    struct func_801F1EA0_Struct2 *unkE8;
};
extern f32 D_801FCE68;
extern f32 D_801FCE6C;
extern f32 D_801FCE70;
extern f32 D_801FCE74;
extern f32 D_801FCE78;
extern f32 D_801FCE7C;
extern f32 D_801FCE80;

s32 func_801F1EA0(s32 arg0, s32 arg1) {
    u32 base = (u32)&D_801BBBF0;
    struct func_801F1EA0_Struct1 *p;

    if (func_801C0B8C(0x01BC07DF) != 0) {
        func_8038BD50(5.0f, D_801FCE68, -20.7f);
        D_8038BD88(-2.0f, D_801FCE6C, -1.2f);
        return 9;
    }
    p = (struct func_801F1EA0_Struct1 *)base;
    p->unkE8->unk2C->unk30 = p->unkE8->unk2C->unk30;
    p->unkE8->unk2C->unk34 = p->unkE8->unk2C->unk34 + D_801FCE70;
    p->unkE8->unk2C->unk38 = p->unkE8->unk2C->unk38 + D_801FCE74;
    p->unkE8->unk2C->unk3C = p->unkE8->unk2C->unk3C + D_801FCE78;
    p->unkE8->unk2C->unk40 = p->unkE8->unk2C->unk40 + D_801FCE7C;
    p->unkE8->unk2C->unk44 = p->unkE8->unk2C->unk44 + D_801FCE80;
    return 8;
}

extern f32 D_801FCE84, D_801FCE88, D_801FCE8C, D_801FCE90, D_801FCE94, D_801FCE98, D_801FCE9C, D_801FCEA0, D_801FCEA4, D_801FCEA8;

s32 func_801F1FBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01DA8C5F) != 0) {
        func_8038BD50(D_801FCE84, D_801FCE88, 4.0f);
        D_8038BD88(D_801FCE8C, D_801FCE90, 1.0f);
        return 0xA;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += D_801FCE94;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FCE98;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += D_801FCE9C;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += D_801FCEA0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 += D_801FCEA4;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 += D_801FCEA8;
    return 9;
}

extern f32 D_801FCEAC;
extern f32 D_801FCEB0;
extern f32 D_801FCEB4;
extern f32 D_801FCEB8;
extern f32 D_801FCEBC;
extern f32 D_801FCEC0;
extern f32 D_801FCEC4;
extern f32 D_801FCEC8;

s32 func_801F20DC(s32 arg0, s32 arg1) {
    struct func_801E1C38_Struct *p;
    if (func_801C0B8C(0x0208531F) != 0) {
        func_8038BD50(D_801FCEAC, D_801FCEB0, 29.6f);
        D_8038BD88(42.5f, D_801FCEB4, -24.3f);
        return 0xB;
    }
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk30 = p->unk30;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk34 = p->unk34 + D_801FCEB8;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk38 = p->unk38 + D_801FCEBC;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk3C = p->unk3C + D_801FCEC0;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk40 = p->unk40 + D_801FCEC4;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk44 = p->unk44 + D_801FCEC8;
    return 0xA;
}


extern s32 D_801FB7F8;
extern f32 D_801FCECC, D_801FCED0, D_801FCED4, D_801FCED8, D_801FCEDC;
extern f32 D_801FCEE0, D_801FCEE4, D_801FCEE8, D_801FCEEC, D_801FCEF0, D_801FCEF4;

struct func_801F21F8_Leaf {
    u8 pad4[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801F21F8_Node {
    u8 pad0[8];
    struct func_801F21F8_Node *unk8;
    u8 pad0C[0x24 - 0xC];
    struct func_801F21F8_Node *unk24;
    u8 pad28[4];
    struct func_801F21F8_Leaf *unk2C;
};
struct func_801F21F8_Root {
    u8 pad0[8];
    struct func_801F21F8_Node *unk8;
};
struct func_801F21F8_Cam {
    u8 pad[0x30];
    f32 f[6];
};
#define R ((struct func_801F21F8_Root *)D_801DAB14)

s32 func_801F21F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0282651F) != 0) {
        func_8038BD50(D_801FCECC, D_801FCED0, -20.5f);
        D_8038BD88(D_801FCED4, D_801FCED8, -2.0f);
        R->unk8->unk24->unk2C->unk4 = -7.0f;
        R->unk8->unk24->unk2C->unk8 = 0.0f;
        R->unk8->unk24->unk2C->unkC = 5.0f;
        R->unk8->unk24->unk2C->unk12 = 0x1000;
        D_801CC470(0, 0x02A8000F, 0, 0, 3.0f);
        R->unk8->unk8->unk24->unk2C->unk4 = D_801FCEDC;
        R->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        R->unk8->unk8->unk24->unk2C->unkC = -10.0f;
        R->unk8->unk8->unk24->unk2C->unk12 = 0;
        D_801CC470(1, 0x02A80010, 0, 0, 3.0f);
        D_801FB7F8 = 0;
        D_8038C158();
        return 0xC;
    }
    {
        struct func_801F21F8_Cam *c;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[0] += D_801FCEE0;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[1] += D_801FCEE4;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[2] += D_801FCEE8;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[3] += D_801FCEEC;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[4] += D_801FCEF0;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[5] += D_801FCEF4;
    }
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F2458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F26C0.s")


extern f32 D_801FD03C;
extern f32 D_801FD040;
extern f32 D_801FD044;
extern f32 D_801FD048;
extern f32 D_801FD04C;
extern f32 D_801FD050;
extern f32 D_801FD054;

s32 func_801F2C5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03CA757F) != 0) {
        func_8038BD50(D_801FD03C, D_801FD040, -10.0f);
        D_8038BD88(-3.0f, D_801FD044, 2.1f);
        return 0xF;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += D_801FD048;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FD04C;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += D_801FD050;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += D_801FD054;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44;
    return 0xE;
}


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

extern f32 D_801FD070, D_801FD074, D_801FD078, D_801FD07C, D_801FD080, D_801FD084, D_801FD088, D_801FD08C, D_801FD090, D_801FD094;
struct func_801F2E3C_Struct2 { u8 pad[0x2C]; struct func_801F2E3C_Struct3 *unk2C; };
struct func_801F2E3C_Struct3 { u8 pad[0x30]; f32 f[6]; };
struct func_801F2E3C_Struct1 { u8 pad[0xE8]; struct func_801F2E3C_Struct2 *unkE8; };
#define Q ((struct func_801F2E3C_Struct1 *)&D_801BBBF0)

s32 func_801F2E3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0422738A) != 0) {
        func_8038BD50(D_801FD070, D_801FD074, -13.4f);
        D_8038BD88(D_801FD078, D_801FD07C, 7.8f);
        return 0x11;
    }
    Q->unkE8->unk2C->f[0] += D_801FD080;
    Q->unkE8->unk2C->f[1] += D_801FD084;
    Q->unkE8->unk2C->f[2] += D_801FD088;
    Q->unkE8->unk2C->f[3] += D_801FD08C;
    Q->unkE8->unk2C->f[4] += D_801FD090;
    Q->unkE8->unk2C->f[5] += D_801FD094;
    return 0x10;
}


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

extern f32 D_801FD0B0, D_801FD0B4, D_801FD0B8, D_801FD0BC, D_801FD0C0, D_801FD0C4, D_801FD0C8;
extern f32 D_801FD0CC, D_801FD0D0, D_801FD0D4, D_801FD0D8, D_801FD0DC, D_801FD0E0;
#define PP(o) (*(struct func_801E1C38_Struct **)((u8 *)D_801BBBF0.unkE8 + 0x2C))

s32 func_801F3034(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x452C555)) {
        if (func_801C0B8C(0x47149D5)) {
            func_8038BD50(D_801FD0B0, 948.0f, 23.5f);
            D_8038BD88(-15.5f, 0.0f, 15.5f);
            return 0x13;
        }
        PP()->unk30 += D_801FD0B4;
        PP()->unk34 += D_801FD0B8;
        PP()->unk38 += D_801FD0BC;
        PP()->unk3C += D_801FD0C0;
        PP()->unk40 += D_801FD0C4;
        PP()->unk44 += D_801FD0C8;
        return 0x12;
    }
    PP()->unk30 += D_801FD0CC;
    PP()->unk34 += D_801FD0D0;
    PP()->unk38 += D_801FD0D4;
    PP()->unk3C += D_801FD0D8;
    PP()->unk40 += D_801FD0DC;
    PP()->unk44 += D_801FD0E0;
    return 0x12;
}


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


extern f64 D_801FD0F0;
extern f64 D_801FD0F8;
extern f64 D_801FD100;
extern f64 D_801FD108;
extern f64 D_801FD110;
extern f64 D_801FD118;
extern f64 D_801FD120;
extern f64 D_801FD128;
extern f64 D_801FD130;
extern f64 D_801FD138;

s32 func_801F32B8(s32 arg0, s32 arg1) {
    f32 temp_fa0;
    f64 temp_fv1;
    f64 z;
    u64 temp_ret;

    if (func_801C0B8C(0x04E54155) != 0) {
        return 0x15;
    }
    temp_ret = func_801C0B2C();
    temp_fv1 = (f64) (f32) ((func_80034C24(temp_ret) / D_801FD0F0) - D_801FD0F8) / D_801FD100;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (f32) ((temp_fv1 * D_801FD108) + -31.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (f32) ((temp_fv1 * D_801FD110) + D_801FD118);
    z = 1.0 - 1.0;
    temp_fa0 = (f32) ((temp_fv1 * D_801FD120) + D_801FD128);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = temp_fa0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32) ((temp_fv1 * z) + D_801FD130);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32) ((temp_fv1 * D_801FD138) + 19.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = temp_fa0;
    return 0x14;
}


extern f64 D_801FD140, D_801FD148, D_801FD150, D_801FD158, D_801FD160, D_801FD168;
extern f64 D_801FD170, D_801FD178, D_801FD180, D_801FD188, D_801FD190, D_801FD198;

#define FP ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801F3420(s32 arg0, s32 arg1) {
    f64 t;
    f32 f;
    u64 r;

    if (func_801C0B8C(0x05392DB5) != 0) {
        return 0x16;
    }
    r = func_801C0B2C();
    t = (f32)(func_80034C24(r) / D_801FD140 - D_801FD148) / 5.5;
    FP->unk30 = t * D_801FD150 + D_801FD158;
    FP->unk34 = t * D_801FD160 + D_801FD168;
    FP->unk38 = t * D_801FD170 + D_801FD178;
    FP->unk3C = t * -1.0 + -14.5;
    FP->unk40 = t * D_801FD180 + D_801FD188;
    FP->unk44 = t * D_801FD190 + D_801FD198;
    return 0x15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F35A8.s")

extern f64 D_801FD268;
extern f64 D_801FD270;
extern f64 D_801FD278;
extern f64 D_801FD280;
extern f64 D_801FD288;
extern f64 D_801FD290;
extern f64 D_801FD298;

s32 func_801F38C4(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    f64 z;
    struct func_801E1C38_Struct *p;

    if (func_801C0B8C(0x061E0F75) != 0) {
        return 0x18;
    }
    a = (f32)(func_80034C24(func_801C0B2C()) / D_801FD268 - D_801FD270) / 3.0;
    z = 1.0 - 1.0;
    b = a * z;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = b + -15.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = b + 8.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = b + D_801FD278;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = b + D_801FD280;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = a * D_801FD288 + D_801FD290;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = b + D_801FD298;
    return 0x17;
}


s32 func_801F3A1C(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801F3A2C(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801F3A3C(s32 arg0, s32 arg1) {
    return 26;
}



s32 func_801F3A4C(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


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

extern u32 D_801FB874;
extern f32 D_801FD448;
extern f32 D_801FD44C;
extern f32 D_801FD450;

extern void func_801C0D04(s32, s32);
extern f32 D_801FD2A4;

s32 func_801F3EF0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF5AA9F) != 0) {
        D_801FB874 = 0;
        func_801C0D04(1, 0);
        return 4;
    }
    D_801FD448 = D_801FD448;
    D_801FD44C = D_801FD44C;
    D_801FD450 += D_801FD2A4;
    func_801CCE88(1, (u32) D_801FD448 & 0xFF, (u32) D_801FD44C & 0xFF, (u32) D_801FD450 & 0xFF);
    func_801CCEC8(1, 0, -0x50, 0);
    return 3;
}


typedef struct {
    f32 v[10];
} func_801F4134_Struct;

extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f32 D_801FB878;
extern func_801F4134_Struct D_801FBC60;
extern func_801F4134_Struct D_801FBC88;
extern f32 D_801FD2A8;
extern f64 D_801FD2B0;

s32 func_801F4134(s32 arg0, s32 arg1) {

    if (func_801C0B8C(0x01607A5F) != 0) {
        func_801C0EB0(1, 0);
        func_801CCE88(1, 0, 0, 0);
        func_801CCEC8(1, 0, -0x50, 0);
        func_801CCE88(2, 0, 0, 0);
        return 5;
    }
    if (func_801C0B8C(0x0132B39F) != 0) {
        D_801FD448 += 0;
        D_801FD44C += 0;
        D_801FD450 += D_801FD2A8;
        if (D_801FD450 < 0.0f) {
            D_801FD450 = 0.0f;
        }
        func_801CCE88(1, (u32)D_801FD448 & 0xFF, (u32)D_801FD44C & 0xFF, (u32)D_801FD450 & 0xFF);
        func_801CCEC8(1, 0, -0x50, 0);
    }
    if (func_801C0B8C(0x0104ECDF) != 0) {
        f64 d;
        f32 f;
        func_801F4134_Struct a;
        func_801F4134_Struct b;
        s32 c;
        f32 t;

        a = D_801FBC60;
        b = D_801FBC88;
        d = func_80034C24(func_801C0F18(1, 0));
        f = D_801FB878;
        if ((f32)((d / D_801FD2B0) - 1.0) > f) {
            D_801FB874++;
            D_801FB874 %= 10;
            f += a.v[D_801FB874];
            (&D_801FB870)[2] = f;
        }
        t = b.v[D_801FB874] * 100.0f;
        func_801CCE88(2, c = (u32)t & 0xFF, c & 0xFF, (u8)c);
        func_801CCEC8(2, -0x50, -0x14, 0);
    }
    return 4;
}

extern f32 D_801FD43C;

extern s32 D_801CCE0C(s32);
extern f32 D_801FD2B8;
extern f32 D_801FD2BC;
extern f32 D_801FD440;
extern f32 D_801FD444;

s32 func_801F45C8(s32 arg0, s32 arg1) {
    f32 h = 0.5f;
    D_801CCE0C(1);
    D_801FD43C += -2.125f * h;
    D_801FD440 += D_801FD2B8 * h;
    D_801FD444 += D_801FD2BC * h;
    func_801CCE88(0, (u32) D_801FD43C & 0xFF, (u32) D_801FD440 & 0xFF, (u32) D_801FD444 & 0xFF);
    if (func_801C0B8C(0x01BC07DF) != 0) {
        D_801FD43C = 255.0f;
        D_801FD440 = 100.0f;
        D_801FD444 = 100.0f;
        return 6;
    }
    return 5;
}


extern f32 D_801FD2C0;
extern f32 D_801FD2C4;
extern f32 D_801FD2C8;

s32 func_801F484C(s32 arg0, s32 arg1) {
    f32 h = 0.5f;
    D_801CCE0C(1);
    D_801FD43C += -4.25f * h;
    D_801FD440 += D_801FD2C0 * h;
    D_801FD444 += D_801FD2C4 * h;
    func_801CCE88(0, (u32) D_801FD43C & 0xFF, (u32) D_801FD440 & 0xFF, (u32) D_801FD444 & 0xFF);
    if (func_801C0B8C(0x01DA8C5F) != 0) {
        D_801FD43C = 76.5f;
        D_801FD440 = D_801FD2C8;
        D_801FD444 = 156.0f;
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F4AD8.s")

extern f32 D_801FB87C;
extern f32 D_801FD2DC;
extern f32 D_801FD2E0;
extern f32 D_801FD2E4;

s32 func_801F4F00(s32 arg0, s32 arg1) {
    s8 p1;
    s8 p2;
    s8 p3;
    s8 sp1C;
    s8 sp1B;
    f32 t;
    f32 *p = &D_801FB87C;

    if (func_801C0B8C(0x049F1095) != 0) {
        return 9;
    }
    if (func_801C0B8C(0x047149D5) != 0) {
        func_801CCE0C(1);
        func_801CCE88(0, 0x64, 0x64, 0x64);
        func_801CCEC8(0, 0, 0x50, 0);
        func_801CCE50(0x32, 0x32, 0x32);
    } else {
        if (func_801C0B8C(0x043440D5) != 0) {
            D_801FB870 *= 2.5f;
        }
        if (func_801C0B8C(0x0208531F) != 0) {
            t = D_801FB87C;
            t += D_801FB870;
            *p = t;
            if (D_801FD2DC < t) {
                *p = 0.0f;
            }
            func_801CCE0C(2);
            func_801CCE50(0x32, 0x32, 0x32);
            sp1C = (s8)(s32)(func_80032720(D_801FB87C) * 80.0f);
            sp1B = (s8)(s32)(func_80029280(D_801FB87C) * 80.0f);
            func_801CCE88(0, 0, 0, 0xFE);
            func_801CCEC8(0, 0x14, sp1C, sp1B);
            func_801CCE88(1, 0, 0, 0xFE);
            sp1C = (s8)(s32)(func_80032720(D_801FB87C + D_801FD2E0) * 80.0f);
            func_801CCEC8(1, 0x14, sp1C, (s8)(s32)(func_80029280(D_801FB87C + D_801FD2E4) * 80.0f));
        }
    }
    return 8;
}



s32 func_801F5134(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE50(0x4B, 0x4B, 0x4B);
    D_801FD43C = 100.0f;
    D_801FD440 = 100.0f;
    D_801FD444 = 255.0f;
    func_801CCE88(0, (u32)D_801FD43C & 0xFF, (u32)D_801FD440 & 0xFF, (u32)D_801FD444 & 0xFF);
    func_801CCEC8(0, 0, 0x50, 0);
    D_801FD448 = 255.0f;
    D_801FD44C = 255.0f;
    D_801FD450 = 255.0f;
    func_801CCE88(1, (u32)D_801FD448 & 0xFF, (u32)D_801FD44C & 0xFF, (u32)D_801FD450 & 0xFF);
    func_801CCEC8(1, 0, -0x50, 0);
    return 10;
}


extern f64 D_801FD2E8;
extern f64 D_801FD2F0;
extern f64 D_801FD2F8;
extern f64 D_801FD300;

s32 func_801F5528(s32 arg0, s32 arg1) {
    f32 t;
    u64 r;

    if (func_801C0B8C(0x05392DB5) != 0) {
        return 0xB;
    }
    if (func_801C0B8C(0x04ECE275) != 0) {
        r = func_801C0B2C();
        t = (f32) ((((f64) (f32) ((func_80034C24(r) / D_801FD2E8) - D_801FD2F0) / 5.0) * D_801FD2F8) + D_801FD300);
        D_801FD448 = t;
        D_801FD44C = t;
        D_801FD450 = t;
        func_801CCE88(1, (u32) D_801FD448 & 0xFF, (u32) D_801FD44C & 0xFF, (u32) D_801FD450 & 0xFF);
        func_801CCEC8(1, 0, -0x50, 0);
    }
    return 0xA;
}


s32 func_801F57B8(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801F57C8(s32 arg0, s32 arg1) {
    return 12;
}


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


extern u8 D_8038D8AC[];
extern u8 D_801D9040[];
extern u8 D_801D9080[];
extern u8 D_801D90B8[];

typedef struct func_801F58D4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[0x10];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801F58D4_Struct3;

typedef struct func_801F58D4_Struct2 {
    u8 pad0[0x30];
    func_801F58D4_Struct3 *unk30;
} func_801F58D4_Struct2;

#define OBJ ((func_801F58D4_Struct2 **)D_8038D8D0)

s32 func_801F58D4(s32 arg0, s32 arg1) {
    s32 i;
    s32 j;

    for (i = 0; i < 5; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80005E44(D_8038D8CC, D_8038D8AC);
    func_80005E44(D_8038D8CC, D_8038D88C);
    func_80005E44(D_8038D8CC, D_8038D88C);
    for (i = 0; i != 12; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x263, 0);
    func_8012C89C(D_8038D8CC, 1, 0x264, 0);
    func_8012C89C(D_8038D8CC, 2, 0x266, 0);
    func_8012C89C(D_8038D8CC, 3, 0x267, 0);
    func_8012C89C(D_8038D8CC, 4, 0x268, 0);
    func_8012C89C(D_8038D8CC, 5, 0x269, 0);
    func_8012C89C(D_8038D8CC, 6, 0x84, 0);
    func_8012C89C(D_8038D8CC, 7, 0x84, 2);
    for (i = 0; i != 12; i++) {
        func_8012C89C(D_8038D8CC, i + 8, 0x265, 0);
    }
    OBJ[0]->unk30->unk4 = 0.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = 0.0f;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk4 = 0.0f;
    OBJ[1]->unk30->unk8 = 0.0f;
    OBJ[1]->unk30->unkC = 0.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[2]->unk30->unk4 = 5120.0f;
    OBJ[2]->unk30->unk8 = 0.0f;
    OBJ[2]->unk30->unkC = 0.0f;
    OBJ[2]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk4 = 0.0f;
    OBJ[3]->unk30->unk8 = 0.0f;
    OBJ[3]->unk30->unkC = 0.0f;
    OBJ[3]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    OBJ[3]->unk30->unk24 = 0x100;
    OBJ[3]->unk30->unk48 = 0;
    OBJ[3]->unk30->unk49 = 0;
    OBJ[3]->unk30->unk4A = 0;
    OBJ[3]->unk30->unk4B = 0xFF;
    OBJ[4]->unk30->unk4 = 5120.0f;
    OBJ[4]->unk30->unk8 = 0.0f;
    OBJ[4]->unk30->unkC = 0.0f;
    OBJ[4]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk30 = (s32)D_801D9080 | 0x40000000;
    OBJ[4]->unk30->unk24 = 0x100;
    OBJ[4]->unk30->unk48 = 0;
    OBJ[4]->unk30->unk49 = 0;
    OBJ[4]->unk30->unk4A = 0;
    OBJ[4]->unk30->unk4B = 0xFF;
    OBJ[5]->unk30->unk4 = 5120.0f;
    OBJ[5]->unk30->unk8 = 10.0f;
    OBJ[5]->unk30->unkC = 0.0f;
    OBJ[5]->unk30->unk12 = 0;
    OBJ[5]->unk30->unk30 = (s32)D_801D90B8 | 0x40000000;
    OBJ[5]->unk30->unk24 = 0x100;
    OBJ[5]->unk30->unk48 = 0x42;
    OBJ[5]->unk30->unk49 = 0xDE;
    OBJ[5]->unk30->unk4A = 0xF8;
    OBJ[5]->unk30->unk4B = 0x3C;
    OBJ[6]->unk30->unk4 = 5120.0f;
    OBJ[6]->unk30->unk8 = 10.0f;
    OBJ[6]->unk30->unkC = 0.0f;
    OBJ[6]->unk30->unk12 = 0;
    OBJ[7]->unk30->unk4 = 5120.0f;
    OBJ[7]->unk30->unk8 = 10.0f;
    OBJ[7]->unk30->unkC = 0.0f;
    OBJ[7]->unk30->unk12 = 0;
    for (j = 0; j != 12; j++) {
        OBJ[j + 8]->unk30->unk4 = 5120.0f;
        OBJ[j + 8]->unk30->unk8 = 0.0f;
        OBJ[j + 8]->unk30->unkC = 0.0f;
        OBJ[j + 8]->unk30->unk12 = 0;
    }
    return 2;
}


struct func_801F6074_Struct3 {
    u8 pad0[4];
    f32 unk4;
};
struct func_801F6074_Struct2 {
    u8 pad0[0x30];
    struct func_801F6074_Struct3 *unk30;
};
struct func_801F6074_Struct1 {
    struct func_801F6074_Struct2 *unk0;
};

s32 func_801F6074(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x043440D5) != 0) {
        ((struct func_801F6074_Struct1 *)D_8038D8D0)->unk0->unk30->unk4 = 5120.0f;
        return 3;
    }
    return 2;
}


s32 func_801F60D0(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F60E0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F60F0(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F6100(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801F6144_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F6144_Struct2 {
    u8 pad0[0x30];
    struct func_801F6144_Struct3 *unk30;
};

struct func_801F6144_Struct1 {
    u8 pad0[4];
    struct func_801F6144_Struct2 *unk4;
};

s32 func_801F6144(s32 arg0, s32 arg1) {
    ((struct func_801F6144_Struct1 *)D_8038D8D0)->unk4->unk30->unk4 = 0.0f;
    ((struct func_801F6144_Struct1 *)D_8038D8D0)->unk4->unk30->unk8 = 0.0f;
    ((struct func_801F6144_Struct1 *)D_8038D8D0)->unk4->unk30->unkC = 0.0f;
    ((struct func_801F6144_Struct1 *)D_8038D8D0)->unk4->unk30->unk12 = 0;
    return 2;
}



extern f32 D_801FD308;

struct func_801F61A0_StructC {
    u8 pad0[8];
    f32 unk8;
};

struct func_801F61A0_StructB {
    u8 pad0[0x30];
    struct func_801F61A0_StructC *unk30;
};

struct func_801F61A0_StructA {
    u8 pad0[4];
    struct func_801F61A0_StructB *unk4;
};

s32 func_801F61A0(s32 arg0, s32 arg1) {
    struct func_801F61A0_StructC *c;

    if (func_801C0B8C(0x017EFEDF) != 0) {
        c = ((struct func_801F61A0_StructA *)D_8038D8D0)->unk4->unk30;
        c->unk8 = c->unk8 + D_801FD308;
        if (func_801C0B8C(0x01BC07DF) != 0) {
            ((struct func_801F61A0_StructA *)D_8038D8D0)->unk4->unk30->unk8 = 0.0f;
            return 3;
        }
    }
    return 2;
}


extern f32 D_801FD30C;

struct func_801F6230_Struct1 {
    u8 pad0[0x4];
    void *unk4;
};

struct func_801F6230_Struct2 {
    u8 pad0[0x30];
    f32 *unk30;
};

s32 func_801F6230(s32 arg0, s32 arg1) {
    f32 *temp_v0;

    temp_v0 = ((struct func_801F6230_Struct2 *) ((struct func_801F6230_Struct1 *) D_8038D8D0)->unk4)->unk30;
    temp_v0[2] = temp_v0[2] + D_801FD30C;
    if (func_801C0B8C(0x01DA8C5F) != 0) {
        ((struct func_801F6230_Struct2 *) ((struct func_801F6230_Struct1 *) D_8038D8D0)->unk4)->unk30[2] = 80.0f;
        return 4;
    }
    return 3;
}



struct func_801F62B0_Node {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
};

struct func_801F62B0_Mid {
    u8 pad0[0x30];
    struct func_801F62B0_Node *unk30;
};

struct func_801F62B0_Top {
    u8 pad0[4];
    struct func_801F62B0_Mid *unk4;
};

extern f32 D_801FD310;

s32 func_801F62B0(s32 arg0, s32 arg1) {
    struct func_801F62B0_Node *temp_v0;

    temp_v0 = ((struct func_801F62B0_Top *)D_8038D8D0)->unk4->unk30;
    temp_v0->unk8 = temp_v0->unk8 + D_801FD310;
    if (func_801C0B8C(0x0208531F) != 0) {
        ((struct func_801F62B0_Top *)D_8038D8D0)->unk4->unk30->unk4 = 5120.0f;
        ((struct func_801F62B0_Top *)D_8038D8D0)->unk4->unk30->unk8 = 0.0f;
        return 5;
    }
    return 4;
}


s32 func_801F6348(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F6358(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F6368(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F6378(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801F6388(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



struct func_801F63CC_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F63CC_Struct2 {
    u8 pad0[0x30];
    struct func_801F63CC_Struct3 *unk30;
};

struct func_801F63CC_Struct1 {
    u8 pad0[0x8];
    struct func_801F63CC_Struct2 *unk8;
};

s32 func_801F63CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x47149D5) != 0) {
        ((struct func_801F63CC_Struct1 *) D_8038D8D0)->unk8->unk30->unk4 = 0.0f;
        ((struct func_801F63CC_Struct1 *) D_8038D8D0)->unk8->unk30->unk8 = 0.0f;
        ((struct func_801F63CC_Struct1 *) D_8038D8D0)->unk8->unk30->unkC = 0.0f;
        ((struct func_801F63CC_Struct1 *) D_8038D8D0)->unk8->unk30->unk12 = 0;
        return 2;
    }
    return 1;
}


s32 func_801F6458(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F6468(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F6478(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F6488(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F6498(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f64 D_801FD318;
extern f64 D_801FD320;
extern f64 D_801FD328;
extern f64 D_801FD330;

#define PX (*(u8 **)(*(u8 **)(*(u8 **)&D_8038D8D0 + 0xC) + 0x30))

s32 func_801F64DC(s32 arg0, s32 arg1) {
    f64 z;
    f64 v;
    u32 t;
    u64 r;

    if (func_801C0B8C(0xF5AA9F) != 0) {
        return 2;
    }
    if (func_801C0B8C(0x5D1420) != 0) {
        r =func_801C0B2C();
        v = (f64)(f32)(func_80034C24(r) / D_801FD318 - D_801FD320) / D_801FD328;
        z = 1.0 - 1.0;
        t = (u32)(f32)(v * z);
        PX[0x48] = t;
        PX[0x49] = t;
        PX[0x4A] = (u32)(f32)(v * D_801FD330);
        PX[0x4B] = 0xFF;
    }
    return 1;
}


extern f64 D_801FD338;
extern f64 D_801FD340;
extern f64 D_801FD348;
extern f64 D_801FD350;

struct func_801F66E8_S3 { u8 pad[0x48]; u8 b48; u8 b49; u8 b4A; u8 b4B; };
struct func_801F66E8_S2 { u8 pad[0x30]; struct func_801F66E8_S3 *u30; };
struct func_801F66E8_S1 { u8 pad[0xC]; struct func_801F66E8_S2 *uC; };

s32 func_801F66E8(s32 arg0, s32 arg1) {
    f64 d;
    f64 z;
    u64 t;

    if (func_801C0B8C(0x01607A5F) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x0132B39F) != 0) {
        t = func_801C0B2C();
        d = (f64)(f32)(func_80034C24(t) / D_801FD338 - D_801FD340) / 3.0;
        z = 1.0 - 1.0;
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b48 = (u32)(f32)(d * z);
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b49 = (u32)(f32)(d * z);
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b4A = (u32)(f32)(d * D_801FD348 + D_801FD350);
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b4B = 0xFF;
    }
    return 2;
}


s32 func_801F6904(s32 arg0, s32 arg1) {
    return 4;
}


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


s32 func_801F69C0(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F69D0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


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


extern f64 D_801FD358;
extern f64 D_801FD360;

typedef struct func_801F6AE4_Struct3 { u8 pad[0x48]; u8 r, g, b, a; } func_801F6AE4_Struct3;
typedef struct func_801F6AE4_Struct2 { u8 pad[0x30]; func_801F6AE4_Struct3 *unk30; } func_801F6AE4_Struct2;
typedef struct func_801F6AE4_Struct1 { u8 pad[0x10]; func_801F6AE4_Struct2 *unk10; } func_801F6AE4_Struct1;

#define P ((func_801F6AE4_Struct1 *)D_8038D8D0)

s32 func_801F6AE4(s32 arg0, s32 arg1) {
    f32 f;
    u8 c;
    u64 t;
    f32 z;

    if (func_801C0B8C(0x049F1095)) {
        return 3;
    }
    if (func_801C0B8C(0x04976F75)) {
        t = func_801C0B2C();
        f = (f32)(func_80034C24(t) / D_801FD358 - D_801FD360) / 0.5f;
        z = 1.0f - 1.0f;
        c = (u32)(f * 153.0f);
        P->unk10->unk30->r = c;
        P->unk10->unk30->g = c;
        P->unk10->unk30->b = c;
        P->unk10->unk30->a = (u32)(f * z + 255.0f);
    }
    return 2;
}


struct func_801F6CDC_S3 {
    u8 pad[0x48];
    u8 b48;
    u8 b49;
    u8 b4A;
    u8 b4B;
};
struct func_801F6CDC_S2 {
    u8 pad[0x30];
    struct func_801F6CDC_S3 *unk30;
};
struct func_801F6CDC_S1 {
    u8 pad[0x10];
    struct func_801F6CDC_S2 *unk10;
};
extern f64 D_801FD368;
extern f64 D_801FD370;
extern f64 D_801FD378;
extern f64 D_801FD380;
extern f64 D_801FD388;

s32 func_801F6CDC(s32 arg0, s32 arg1) {
    f64 fv;
    f64 z;
    u32 w;
    u32 v;
    u64 r;

    if (func_801C0B8C(0x05392DB5) != 0) {
        return 4;
    }
    if (func_801C0B8C(0x04ECE275) != 0) {
    r = func_801C0B2C();
    fv = (f64)(f32)((func_80034C24(r) / D_801FD368) - D_801FD370) / 5.0;
    v = (u32)(f32)((fv * D_801FD378) + D_801FD380);
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b48 = v;
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b49 = v;
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b4A = v;
    z = 1.0 - 1.0;
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b4B = (u32)(f32)((fv * z) + D_801FD388);
    }
    return 3;
}


s32 func_801F6F00(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F6F10(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F6F20(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


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


s32 func_801F70BC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F70CC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F70DC(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F70EC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


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


s32 func_801F71CC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F71DC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F71EC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F71FC(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F720C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801F7250_Struct1 {
    u8 pad0[0x1C];
    func_801F6914_Struct2 *unk1C;
} func_801F7250_Struct1;

s32 func_801F7250(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x047149D5) != 0) {
        ((func_801F7250_Struct1 *)D_8038D8D0)->unk1C->unk30->unk4 = -16.0f;
        ((func_801F7250_Struct1 *)D_8038D8D0)->unk1C->unk30->unk8 = 0.0f;
        ((func_801F7250_Struct1 *)D_8038D8D0)->unk1C->unk30->unkC = -28.0f;
        ((func_801F7250_Struct1 *)D_8038D8D0)->unk1C->unk30->unk12 = 0;
        return 2;
    }
    return 1;
}


s32 func_801F72EC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F72FC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F730C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F731C(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F732C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801F7370_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801F7370_StructB {
    u8 pad[0x30];
    struct func_801F7370_StructC *unk30;
};
struct func_801F7370_StructA {
    u8 pad[0x20];
    struct func_801F7370_StructB *unk20[12];
};

s32 func_801F7370(s32 arg0, s32 arg1) {
    f32 y;
    s32 i;

    if (func_801C0B8C(0x0208531F) != 0) {
        y = -420.0f;
        for (i = 0; i < 12; i++) {
            ((struct func_801F7370_StructA *)D_8038D8D0)->unk20[i]->unk30->unk4 = 0.0f;
            ((struct func_801F7370_StructA *)D_8038D8D0)->unk20[i]->unk30->unk8 = y;
            y += 70.0f;
            ((struct func_801F7370_StructA *)D_8038D8D0)->unk20[i]->unk30->unkC = 0.0f;
            ((struct func_801F7370_StructA *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        }
        return 2;
    }
    return 1;
}


struct func_801F752C_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801F752C_StructB {
    u8 pad[0x30];
    struct func_801F752C_StructC *unk30;
};
struct func_801F752C_StructA {
    u8 pad[0x20];
    struct func_801F752C_StructB *unk20[12];
};

#define A ((struct func_801F752C_StructA *)D_8038D8D0)

s32 func_801F752C(s32 arg0, s32 arg1) {
    s32 i;
    s32 j;
    f32 y;

    for (i = 0; i != 12; i++) {
        if ((s32)A->unk20[i]->unk30->unk8 >= 420) {
            A->unk20[i]->unk30->unk8 = -420.0f;
        }
        A->unk20[i]->unk30->unk8 += 2.0f;
    }
    if (func_801C0B8C(0x043440D5)) {
        y = -420.0f;
        for (j = 0; j < 12; j++) {
            A->unk20[j]->unk30->unk4 = 0.0f;
            A->unk20[j]->unk30->unk8 = y;
            y += 70.0f;
            A->unk20[j]->unk30->unkC = 0.0f;
            A->unk20[j]->unk30->unk12 = 0;
        }
        return 3;
    }
    return 2;
}


s32 func_801F7768(s32 arg0, s32 arg1) {
    s32 i;
    s32 j;
    f32 a;

    if (func_801C0B8C(0x047149D5) != 0) {
        a = 130.0f;
        for (i = 0; i < 12; i++) {
            A->unk20[i]->unk30->unk4 = 0.0f;
            A->unk20[i]->unk30->unk8 = a;
            a += 70.0f;
            A->unk20[i]->unk30->unkC = 0.0f;
            A->unk20[i]->unk30->unk12 = 0;
        }
        return 4;
    } else {
        for (j = 0; j < 12; j++) {
            if ((s32)A->unk20[j]->unk30->unk8 >= 420) {
                A->unk20[j]->unk30->unk8 = -420.0f;
            }
            A->unk20[j]->unk30->unk8 += 5.0f;
        }
        return 3;
    }
}


s32 func_801F79EC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F79FC(s32 arg0, s32 arg1) {
    return 5;
}


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


s32 func_801F7D58(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F7D68(s32 arg0, s32 arg1) {
    return 7;
}


struct func_801F7D78_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F7D78_Struct2 {
    u8 pad0[0x2C];
    struct func_801F7D78_Struct3 *unk2C;
};

struct func_801F7D78_Struct1 {
    u8 pad0[0x24];
    struct func_801F7D78_Struct2 *unk24;
};

struct func_801F7D78_Struct0 {
    u8 pad0[0x8];
    struct func_801F7D78_Struct1 *unk8;
};

extern f32 D_801FD3B0;

s32 func_801F7D78(s32 arg0, s32 arg1)
{
  u8 *base;
  if (func_801C0B8C(0x0104ECDF) != 0)
  {
    base = (u8 *) (&func_801DAAF0);
    base += 0x24;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unk4 = 6.5f;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unk8 = 0.0f;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unkC = D_801FD3B0;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unk12 = 0x1800;
    func_801CC470(0, 0x01B8000B, 0, 0x1000, 2.0f);
    return 8;
  }
  return 7;
}


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


extern f32 D_801FD3BC;

s32 func_801F7F5C(s32 arg0, s32 arg1)
{
  u8 **p;
  if (func_801C0B8C(0x017EFEDF) != 0)
  {
    p = (u8 **) &func_801DAAF0;
 if (0) { }
    p = (u8 **) (((u8 *) p) + 0x24);
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 0x8))) + 0x24))) + 0x2C))) + 0x4)) = -2.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 0x8))) + 0x24))) + 0x2C))) + 0x8)) = 0.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 0x8))) + 0x24))) + 0x2C))) + 0xC)) = D_801FD3BC;
    *((s16 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 0x8))) + 0x24))) + 0x2C))) + 0x12)) = 0x1800;
    func_801CC470(0, 0x01B80022, 0, 0x1100, 3.0f);
    return 0xB;
  }
  return 0xA;
}


extern s32 D_801FB9C8;

s32 func_801F8030(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01BC07DF) != 0) {
        D_801FB9C8 = 0;
        return 0xC;
    }
    return 0xB;
}


extern s32 D_801CFD40();

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

struct func_801F8144_S3 { u8 pad[4]; f32 u4; f32 u8; f32 uC; u8 pad2[2]; s16 u12; };
struct func_801F8144_S2 { u8 pad[0x2C]; struct func_801F8144_S3 *u2C; };
struct func_801F8144_S1 { u8 pad[0x24]; struct func_801F8144_S2 *u24; };
struct func_801F8144_S0 { u8 pad[8]; struct func_801F8144_S1 *u8; };
extern f32 D_801FD3C0;
extern f32 D_801FD3C4;
#define P (*(struct func_801F8144_S0 **)&D_801DAB14)

s32 func_801F8144(s32 arg0, s32 arg1) {
    if (D_801FB9C8 == 0) goto c0;
    if (D_801FB9C8 == 1) goto c1;
    if (D_801FB9C8 == 2) goto c2;
    return 0xD;
c0:
    if (func_801C0B8C(0x0226D79F) != 0) {
        P->u8->u24->u2C->u4 = D_801FD3C0;
        P->u8->u24->u2C->u8 = 0.0f;
        P->u8->u24->u2C->uC = D_801FD3C4;
        P->u8->u24->u2C->u12 = 0xC71;
        func_801CC470(0, 0x0190002F, 0, 0, 3.0f);
        D_801FB9C8 = 1;
    }
    goto end;
c1:
    if (func_801CFD50() != 0) {
        func_801CC470(0, 0x01900026, 0, 0, 3.0f);
        D_801FB9C8 = 2;
    }
    goto end;
c2:
    if (func_801CFD50() != 0) {
        func_801CC470(0, 0x01900026, 0, 1, 1.0f);
        return 0xE;
    }
end:
    return 0xD;
}


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



s32 func_801F833C(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(0))[3] >= 0xE) {
        return 17;
    }
    return 16;
}


s32 func_801F837C(s32 arg0, s32 arg1) {
    return 18;
}


struct func_801F838C_S3 { u8 pad[4]; f32 u4; f32 u8_; f32 uC; u8 pad2[2]; s16 u12; };
struct func_801F838C_S2 { u8 pad[0x2C]; struct func_801F838C_S3 *u2C; };
struct func_801F838C_S1 { u8 pad[0x24]; struct func_801F838C_S2 *u24; };
struct func_801F838C_S0 { u8 pad[8]; struct func_801F838C_S1 *u8_; };
struct func_801F838C_V { f32 x; f32 y; f32 z; };
extern struct func_801F838C_V *D_801CFD90();
extern f32 D_801FD3C8;
#define P (*(struct func_801F838C_S0 **)&D_801DAB14)
#define Q P->u8_->u24->u2C

s32 func_801F838C(s32 arg0, s32 arg1) {
    struct func_801F838C_V *v;
    f32 a, b;

    if (func_801C0B8C(0x040F1FA0) != 0) {
        Q->u4 = D_801FD3C8;
        Q->u8_ = 0.0f;
        Q->uC = 8.0f;
        Q->u12 = 0x844;
        func_801CC470(0, 0x01B8000D, 0, 0, 1.0f);
        return 0x13;
    }
    v = D_801CFD90();
    a = v->x;
    if ((a < 0.0f ? -a : a) < 3.0) {
        Q->u4 += a;
    }
    Q->u8_ += v->y;
    b = v->z;
    if ((b < 0.0f ? -b : b) < 3.0) {
        Q->uC += b;
    }
    return 0x12;
}


s32 func_801F8544(s32 arg0, s32 arg1) {
    return 20;
}

#define NDX (*(u8 **)(*(u8 **)(*(u8 **)((u8 *)*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C))
#define NFX(o) (*(f32 *)(NDX + (o)))

s32 func_801F8554(s32 arg0, s32 arg1) {
    f32 *v;
    f32 f;
    f32 a;
    if (func_801C0B8C(0x043440D5) != 0) {
        NFX(4) = 0.0f;
        NFX(8) = 0.0f;
        NFX(0xC) = 0.0f;
        *(s16 *)(NDX + 0x12) = 0;
        func_801CC470(0, 0x02A8000E, 0, 0x1100, 2.0f);
        return 0x15;
    }
    v = (f32 *)D_801CFD90();
    f = v[0];
    if (f < 0.0f) {
        a = -f;
    } else {
        a = f;
    }
    if ((f64)a < 10.0) {
        NFX(4) = NFX(4) + f;
    }
    NFX(8) = v[1] + NFX(8);
    f = v[2];
    if ((f64)f > 0.0) {
        NFX(0xC) = NFX(0xC) + f;
    }
    return 0x14;
}


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


struct func_801F88C8_S3 { u8 pad[0x2C]; struct func_801F88C8_S4 *unk2C; };
struct func_801F88C8_S4 { u8 pad[8]; f32 unk8; };
struct func_801F88C8_S2 { u8 pad[0x24]; struct func_801F88C8_S3 *unk24; };
struct func_801F88C8_S1 { u8 pad[8]; struct func_801F88C8_S2 *unk8; };
#define P88C8 (*(struct func_801F88C8_S1 **)((u8 *)&func_801DAAF0 + 0x24))
extern f64 D_801FD3D8;
extern f64 D_801FD3E0;

s32 func_801F88C8(s32 arg0, s32 arg1)
{
  u64 t;
  if (func_801C0B8C(0x05392DB5) != 0)
  {
    (*((struct func_801F88C8_S1 **) (((u8 *) (&func_801DAAF0)) + 0x24)))->unk8->unk24->unk2C->unk8 = 0.0f;
    if (D_801CFD40() == 1)
    {
      return 0x18;
    }
    func_801CC470(0, 0x02A80015, 0, 0, 3.0f);
    return 0x19;
  }
  t = func_801C0B2C();
  (*((struct func_801F88C8_S1 **) (((u8 *) (&func_801DAAF0)) + 0x24)))->unk8->unk24->unk2C->unk8 = ((0.0 - ((f64) D_801FB9CC)) * (((f64) ((f32) ((func_80034C24(t) / D_801FD3D8) - D_801FD3E0))) / 5.0)) + ((0, (f64) D_801FB9CC));
  return 0x18;
}


extern s32 D_801FB9D0;

s32 func_801F89DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05A3FD75) != 0) {
        func_801CC470(0, 0x02A80016, 0, 0, 3.0f);
        D_801FB9D0 = 0;
        return 0x1A;
    }
    return 0x19;
}


s32 func_801F8A48(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801F8A58(s32 arg0, s32 arg1) {
    return 28;
}



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


s32 func_801F8AFC(s32 arg0, s32 arg1) {
    return 30;
}



s32 func_801F8B0C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801F8B50_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801F8B50_StructE;

typedef struct func_801F8B50_StructD {
    u8 pad0[0x2C];
    func_801F8B50_StructE *unk2C;
} func_801F8B50_StructD;

typedef struct func_801F8B50_StructC {
    u8 pad0[0x24];
    func_801F8B50_StructD *unk24;
} func_801F8B50_StructC;

typedef struct func_801F8B50_StructB {
    u8 pad0[0x8];
    func_801F8B50_StructC *unk8;
} func_801F8B50_StructB;

typedef struct func_801F8B50_StructA {
    u8 pad0[0x8];
    func_801F8B50_StructB *unk8;
} func_801F8B50_StructA;

extern f32 D_801FD3E8;
extern f32 D_801FD3EC;

s32 func_801F8B50(s32 arg0, s32 arg1) {
    func_801F8B50_StructD *temp_v0;

    temp_v0 = ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801FD3E8;
        ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FD3EC;
        ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(1, 0x02A80004, 0, 0x1100, 1.0f);
        return 2;
    }
    return 1;
}


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


extern s32 D_801FBA50;

s32 func_801F8DE8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01BC07DF) != 0) {
        D_801FBA50 = 0;
        return 0x5;
    }
    return 0x4;
}


extern s32 func_801D03F8();

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

extern f32 D_801FD3F8;
extern f32 D_801FD3FC;

#define CH(p) (*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(p) + 8) + 8) + 0x24) + 0x2C))

s32 func_801F8EFC(s32 arg0, s32 arg1) {
    u8 **p;
    s32 s = D_801FBA50;
    if (s == 0) goto c0;
    if (s == 1) goto c1;
    if (s == 2) goto c2;
    if (s == 3) goto c3;
    return 6;
c0:
    if (func_801C0B8C(0x0226D79F) != 0) {
        p = (u8 **)&D_801DAB14;
        *(f32 *)(CH(p) + 4) = D_801FD3F8;
        *(f32 *)(CH(p) + 8) = 0.0f;
        *(f32 *)(CH(p) + 0xC) = D_801FD3FC;
        *(s16 *)(CH(p) + 0x12) = 0x1B8E;
        func_801CC470(1, 0x01900028, 0, 0, 3.0f);
        D_801FBA50 = 1;
    }
    goto end;
c1:
    if (func_801D0408() != 0) {
        func_801CC470(1, 0x01900026, 0, 0, 3.0f);
        D_801FBA50 = 2;
    }
    goto end;
c2:
    if (func_801D0408() != 0) {
        func_801CC470(1, 0x01900026, 0, 0, 3.0f);
        D_801FBA50 = 3;
    }
    goto end;
c3:
    if (func_801D0408() != 0) {
        func_801CC470(1, 0x01900026, 0, 1, 1.0f);
        return 7;
    }
end:
    return 6;
}


s32 func_801F90D0(s32 arg0, s32 arg1) {
    s32 *temp;

    temp = func_801BF6B0(0);
    if (temp[3] >= 0xC) {
        return 0x8;
    }
    return 0x7;
}


s32 func_801F9110(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x031AFB9F) != 0) {
        return 0x9;
    }
    return 0x8;
}



s32 func_801F914C(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(0))[3] >= 0xE) {
        return 10;
    }
    return 9;
}


extern f32 D_801FD400;

struct func_801F918C_Final {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F918C_Mid {
    u8 pad0[0x2C];
    struct func_801F918C_Final *unk2C;
};

struct func_801F918C_Top {
    u8 pad0[0x24];
    struct func_801F918C_Mid *unk24;
};

struct func_801F918C_L2 {
    u8 pad0[8];
    struct func_801F918C_Top *unk8;
};

struct func_801F918C_L1 {
    u8 pad0[8];
    struct func_801F918C_L2 *unk8;
};

struct func_801F918C_Root {
    u8 pad0[0x24];
    struct func_801F918C_L1 *unk24;
};

s32 func_801F918C(s32 arg0, s32 arg1)
{
  struct func_801F918C_L1 **root;
  if (func_801C0B8C(0x03CA757F) != 0)
  {
    root = (struct func_801F918C_L1 **) ((void *) (&func_801DAAF0.unk24));
    root += 0;
    (*root)->unk8->unk8->unk24->unk2C->unk4 = D_801FD400;
    (*root)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*root)->unk8->unk8->unk24->unk2C->unkC = -8.0f;
    (*root)->unk8->unk8->unk24->unk2C->unk12 = 0x1A22;
    func_801CC470(1, 0x01900001, 0, 0x1100, 1.0f);
    return 0xB;
  }
  return 0xA;
}


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


struct func_801F9438_Struct_S5 {
    u8 pad0[0x4];
    f32 unk4;
};

struct func_801F9438_Struct_S4 {
    u8 pad0[0x2C];
    struct func_801F9438_Struct_S5 *unk2C;
};

struct func_801F9438_Struct_S3 {
    u8 pad0[0x24];
    struct func_801F9438_Struct_S4 *unk24;
};

struct func_801F9438_Struct_S2 {
    u8 pad0[0x8];
    struct func_801F9438_Struct_S3 *unk8;
};

s32 func_801F9438(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x043440D5) != 0) {
        ((struct func_801F9438_Struct_S2 *)func_801DAAF0.unk24->unk8)->unk8->unk24->unk2C->unk4 = 5120.0f;
        return 0xE;
    }
    return 0xD;
}


s32 func_801F949C(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801F94AC(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801F94BC(s32 arg0, s32 arg1) {
    return 16;
}



s32 func_801F94CC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


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


s32 func_801D0AF8();

s32 func_801F9798(s32 arg0, s32 arg1) {
    if (func_801D0AF8() == 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801F97C8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F97D8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F97E8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801F97F8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801F9808(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801F9818(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801F9828(s32 arg0, s32 arg1) {
    return 12;
}



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



s32 func_801F98C0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}



s32 func_801F98F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04976F75) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 1);
        return 3;
    }
    return 2;
}



s32 func_801F9964(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    return 4;
}


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



s32 func_801F9A14(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 5;
    }
    D_80089354 = 0;
    return 6;
}


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



s32 func_801F9ACC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801F9AF4(s32 arg0, s32 arg1) {
    return 8;
}


extern s32 D_801FBB08;

s32 func_801F9B04(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x1E1);
        D_801FBB08 = 0;
        return 1;
    }
    return 0;
}


s32 func_801F9B54(s32 arg0, s32 arg1) {
    if (D_801FBB08 != 0) {
        if (D_801FBB08 == 1) {
            goto l1;
        }
        return 1;
    }
    if (func_801C0B8C(0xF4240) != 0) {
        func_8038D28C(0x1E2);
        D_801FBB08 = 1;
    }
    goto done;
l1:
    if (func_801C0B8C(0x2F4D60) != 0) {
        func_8038D28C(0x80);
        return 2;
    }
done:
    return 1;
}



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


s32 func_801F9E5C(s32 arg0, s32 arg1) {
    s32 temp_v1;

    if (D_801FBB08 != 0) {
        if (D_801FBB08 != 1) {
            if (D_801FBB08 != 2) {
                goto block_10;
            }
            goto case2;
        }
        goto case1;
    }
    goto case0;

case0:
    if (func_801C0B8C(0x031AFB9F) == 0) {
        goto block_10;
    }
    func_8038D28C(0x1F0);
    D_801FBB08 = 1;
    goto block_10;

case1:
    if (func_801C0B8C(0x0339801F) == 0) {
        goto block_10;
    }
    func_8038D28C(0x1E7);
    D_801FBB08 = 2;
    goto block_10;

case2:
    if (func_801C0B8C(0x036746DF) == 0) {
        goto block_10;
    }
    func_8038D28C(0x1F2);
    D_801FBB08 = 0;
    return 0xB;

block_10:
    temp_v1 = D_801FBB0C++;
    if (temp_v1 == 0x0) {
        goto sub0;
    }
    if (temp_v1 == 0x1E) {
        goto sub1;
    }
    if (temp_v1 == 0x36) {
        goto sub2;
    }
    if (temp_v1 == 0x54) {
        goto sub3;
    }
    if (temp_v1 == 0x72) {
        goto sub4;
    }
    if (temp_v1 == 0xAE) {
        goto sub5;
    }
    if (temp_v1 == 0xD5) {
        goto sub6;
    }
    if (temp_v1 == 0x192) {
        goto sub7;
    }
    return 0xA;

sub0:
    func_8038D28C(0x1E9);
    return 0xA;

sub1:
    func_8038D28C(0x1EA);
    return 0xA;

sub2:
    func_8038D28C(0x1EB);
    return 0xA;

sub3:
    func_8038D28C(0x1EC);
    return 0xA;

sub4:
    func_8038D28C(0x1ED);
    return 0xA;

sub5:
    func_8038D28C(0x1EE);
    return 0xA;

sub6:
    func_8038D28C(0x1EF);
    return 0xA;

sub7:
    func_8038D28C(0x1F1);
    return 0xA;
}


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


s32 func_801FA184(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801FA194(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801FA1A4(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801FA1B4(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801FA1C4(s32 arg0, s32 arg1) {
    return 20;
}


s32 func_801FA1D4(s32 arg0, s32 arg1) {
    return 20;
}

