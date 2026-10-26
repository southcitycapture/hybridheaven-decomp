#include "common.h"

void D_8038BD88(f32, f32, f32);
void func_8038BD50(f32, f32, f32);

extern const f32 D_801FBCB0__load_func_801E1BE0;
extern const f32 D_801FBCB4__load_func_801E1BE0;
extern const f32 D_801FBCB8__load_func_801E1BE0;
s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BD50(D_801FBCB0__load_func_801E1BE0, (D_801FBCB4__load_func_801E1BE0), 540.0f);
    D_8038BD88((D_801FBCB8__load_func_801E1BE0), 90.5f, -49.8f);
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

struct func_801E1C38_Struct {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

extern const f32 D_801FBCBC__load_func_801E1C38;
extern const f32 D_801FBCC0__load_func_801E1C38;
extern const f32 D_801FBCC4__load_func_801E1C38;
extern const f32 D_801FBCC8__load_func_801E1C38;
extern const f32 D_801FBCCC__load_func_801E1C38;
extern const f32 D_801FBCD0__load_func_801E1C38;
s32 func_801E1C38(s32 arg0, s32 arg1) {
    struct func_801E1C38_Struct *temp_v1;

    if (func_801C0B8C(0x01312D00) != 0) {
        return 2;
    }
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk30 = temp_v1->unk30 + (D_801FBCBC__load_func_801E1C38);
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk34 = temp_v1->unk34 + D_801FBCC0__load_func_801E1C38;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk38 = temp_v1->unk38 + D_801FBCC4__load_func_801E1C38;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk3C = temp_v1->unk3C + D_801FBCC8__load_func_801E1C38;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk40 = temp_v1->unk40 + D_801FBCCC__load_func_801E1C38;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk44 = temp_v1->unk44 + D_801FBCD0__load_func_801E1C38;
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

extern const f32 D_801FBCD4__load_func_801E2378;
extern const f32 D_801FBCD8__load_func_801E2378;
extern const f32 D_801FBCDC__load_func_801E2378;
extern const f32 D_801FBCE0__load_func_801E2378;
extern const f32 D_801FBCE4__load_func_801E2378;
extern const f32 D_801FBCE8__load_func_801E2378;
extern const f32 D_801FBCEC__load_func_801E2378;
extern const f32 D_801FBCF0__load_func_801E2378;
extern const f32 D_801FBCF4__load_func_801E2378;
extern const f32 D_801FBCF8__load_func_801E2378;
extern const f32 D_801FBCFC__load_func_801E2378;
extern const f32 D_801FBD00__load_func_801E2378;
extern const f32 D_801FBD04__load_func_801E2378;
extern const f32 D_801FBD08__load_func_801E2378;
extern const f32 D_801FBD0C__load_func_801E2378;
extern const f32 D_801FBD10__load_func_801E2378;
extern const f32 D_801FBD14__load_func_801E2378;
extern const f32 D_801FBD18__load_func_801E2378;
extern const f32 D_801FBD1C__load_func_801E2378;
extern const f32 D_801FBD20__load_func_801E2378;
s32 func_801E2378(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;

    if (D_801FAFD8 == 0) goto c0;
    if (D_801FAFD8 == 1) goto c1;
    return 1;
c0:
    a = D_801FBCD4__load_func_801E2378;
    b = D_801FBCD8__load_func_801E2378;
    if (D_8038C17C(0.0f, D_801FBCDC__load_func_801E2378, -15.0f, a, D_801FBCE0__load_func_801E2378, (D_801FBCE4__load_func_801E2378), a, D_801FBCE8__load_func_801E2378, (D_801FBCEC__load_func_801E2378), 12.5f, D_801FBCF0__load_func_801E2378, -19.5f, D_801FBCF4__load_func_801E2378, D_801FBCF8__load_func_801E2378, b, b) != 0) {
        D_8038C158();
        D_801FAFD8 = 1;
    }
    goto end;
c1:
    do { a = (D_801FBCFC__load_func_801E2378); } while (0);
    if (D_8038C17C(0.0f, 7.25f, -18.3f, 20.4f, D_801FBD00__load_func_801E2378, (D_801FBD04__load_func_801E2378), D_801FBD08__load_func_801E2378, D_801FBD0C__load_func_801E2378, a, 17.0f, 14.0f, a, 17.0f, 14.0f, 30.0f, 30.0f) != 0) {
        func_8038BE98(D_801FBD10__load_func_801E2378);
        func_8038D28C(0x695);
        func_8038BD50(D_801FBD14__load_func_801E2378, D_801FBD18__load_func_801E2378, 96.618f);
        D_8038BD88(D_801FBD1C__load_func_801E2378, D_801FBD20__load_func_801E2378, 77.525f);
        return 2;
    }
end:
    return 1;
}

extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

extern const f32 D_801FBD24__load_func_801E2560;
extern const f32 D_801FBD28__load_func_801E2560;
extern const f32 D_801FBD2C__load_func_801E2560;
extern const f32 D_801FBD30__load_func_801E2560;
extern const f32 D_801FBD34__load_func_801E2560;
extern const f32 D_801FBD38__load_func_801E2560;
s32 func_801E2560(s32 arg0, s32 arg1) {
    func_801CCE50(0xFF, 0xFF, 0xFF);
    func_801CCE88(0, 0xFF, 0xFF, 0xFF);
    func_801CCEC8(0, 0, 0, 0x7F);
    if (func_801C0B8C(0x01769A70) != 0) {
        struct func_801E1C38_Struct *p;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk30 += (D_801FBD24__load_func_801E2560);
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk34 += D_801FBD28__load_func_801E2560;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk38 += (D_801FBD2C__load_func_801E2560);
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk3C += (D_801FBD30__load_func_801E2560);
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk40 += D_801FBD34__load_func_801E2560;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk44 += D_801FBD38__load_func_801E2560;
        if (func_801C0B8C(0x01D9C910) != 0) {
            return 3;
        }
    }
    return 2;
}


extern u8 *D_8008DA88[];


extern const f32 D_801FBD3C__load_func_801E26A0;
extern const f32 D_801FBD40__load_func_801E26A0;
extern const f32 D_801FBD44__load_func_801E26A0;
s32 func_801E26A0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0294B4A0) != 0) {
        func_8038BD50((D_801FBD3C__load_func_801E26A0), 21.5, 27.0);
        D_8038BD88((D_801FBD40__load_func_801E26A0), D_801FBD44__load_func_801E26A0, 0.16);
        func_8038D28C(0x694);
        func_80006214(func_8038D8B8[5]);
        D_8008DA88[6][0x22] = 0;
        D_8038C158();
        return 4;
    }
    return 3;
}


extern const f32 D_801FBD48__load_func_801E2738;
extern const f32 D_801FBD4C__load_func_801E2738;
extern const f32 D_801FBD50__load_func_801E2738;
extern const f32 D_801FBD54__load_func_801E2738;
extern const f32 D_801FBD58__load_func_801E2738;
extern const f32 D_801FBD5C__load_func_801E2738;
extern const f32 D_801FBD60__load_func_801E2738;
extern const f32 D_801FBD64__load_func_801E2738;
extern const f32 D_801FBD68__load_func_801E2738;
s32 func_801E2738(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02C27B60) != 0) {
        if (func_801C0B8C(0x02CA1C80) != 0) {
            return 5;
        }
    } else {
        D_8038C17C(0.0f, 3.0f, -18.1f, 20.5f, D_801FBD48__load_func_801E2738, -19.0f, D_801FBD4C__load_func_801E2738, D_801FBD50__load_func_801E2738, (D_801FBD54__load_func_801E2738), D_801FBD58__load_func_801E2738, D_801FBD5C__load_func_801E2738, (D_801FBD60__load_func_801E2738), D_801FBD64__load_func_801E2738, D_801FBD68__load_func_801E2738, 25.5f, 21.0f);
    }
    return 4;
}


extern const f32 D_801FBD6C__load_func_801E283C;
extern const f32 D_801FBD70__load_func_801E283C;
extern const f32 D_801FBD74__load_func_801E283C;
extern const f32 D_801FBD78__load_func_801E283C;
extern const f32 D_801FBD7C__load_func_801E283C;
s32 func_801E283C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801FBD6C__load_func_801E283C);
    func_8038BD50(D_801FBD70__load_func_801E283C, D_801FBD74__load_func_801E283C, 27.1f);
    D_8038BD88(D_801FBD78__load_func_801E283C, D_801FBD7C__load_func_801E283C, -3.6f);
    return 6;
}


extern const f32 D_801FBD80__load_func_801E28A4;
extern const f32 D_801FBD84__load_func_801E28A4;
extern const f32 D_801FBD88__load_func_801E28A4;
extern const f32 D_801FBD8C__load_func_801E28A4;
s32 func_801E28A4(s32 arg0, s32 arg1) {
    struct func_801E1C38_Struct *p;
    f32 delta;

    if (func_801C0B8C(0x36A5420) != 0) {
        if (func_801C0B8C(0x3F3A860) != 0) {
            return 7;
        }
        delta = (D_801FBD80__load_func_801E28A4);
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk34 = p->unk34 + delta;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk40 = p->unk40 + delta;
        return 6;
    }
    if (func_801C0B8C(0x30A32C0) != 0) {
        func_8038BD50(D_801FBD84__load_func_801E28A4, D_801FBD88__load_func_801E28A4, 90.0f);
        D_8038BD88(71.5f, D_801FBD8C__load_func_801E28A4, 75.4f);
    }
    return 6;
}



extern const f32 D_801FBD90__load_func_801E2980;
extern const f32 D_801FBD94__load_func_801E2980;
extern const f32 D_801FBD98__load_func_801E2980;
extern const f32 D_801FBD9C__load_func_801E2980;
s32 func_801E2980(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x045E7820) != 0) {
        D_8038C158();
        D_801FAFD8 = 0;
        return 8;
    }
    func_8038BD50(D_801FBD90__load_func_801E2980, D_801FBD94__load_func_801E2980, -2.7f);
    D_8038BD88(D_801FBD98__load_func_801E2980, D_801FBD9C__load_func_801E2980, 6.3f);
    return 7;
}



extern f32 D_801FBDA0__load_func_801E2A08;
extern f32 D_801FBDA4__load_func_801E2A08;
extern f32 D_801FBDA8__load_func_801E2A08;
extern f32 D_801FBDAC__load_func_801E2A08;
extern f32 D_801FBDB0__load_func_801E2A08;
extern f32 D_801FBDB4__load_func_801E2A08;
extern f32 D_801FBDB8__load_func_801E2A08;
extern f32 D_801FBDBC__load_func_801E2A08;
extern f32 D_801FBDC0__load_func_801E2A08;
extern f32 D_801FBDC4__load_func_801E2A08;
extern f32 D_801FBDC8__load_func_801E2A08;
extern f32 D_801FBDCC__load_func_801E2A08;
extern f32 D_801FBDD0__load_func_801E2A08;
extern f32 D_801FBDD4__load_func_801E2A08;
extern f32 D_801FBDD8__load_func_801E2A08;
extern f32 D_801FBDDC__load_func_801E2A08;
extern f32 D_801FBDE0__load_func_801E2A08;
extern f32 D_801FBDE4__load_func_801E2A08;
extern f32 D_801FBDE8__load_func_801E2A08;
extern f32 D_801FBDEC__load_func_801E2A08;

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
    b = D_801FBDA0__load_func_801E2A08;
    c = D_801FBDA4__load_func_801E2A08;
    if (D_8038C17C(0.0f, D_801FBDA8__load_func_801E2A08, 77.8f, 26.5f, D_801FBDAC__load_func_801E2A08, D_801FBDB0__load_func_801E2A08, D_801FBDB4__load_func_801E2A08, D_801FBDB8__load_func_801E2A08, D_801FBDBC__load_func_801E2A08, c, D_801FBDC0__load_func_801E2A08, D_801FBDC4__load_func_801E2A08, D_801FBDC8__load_func_801E2A08, D_801FBDCC__load_func_801E2A08, b, b) != 0) {
        D_8038C158();
        D_801FAFD8 = 1;
    }
    goto end;
c1:
    a = D_801FBDD0__load_func_801E2A08;
    b = D_801FBDD4__load_func_801E2A08;
    c = D_801FBDD8__load_func_801E2A08;
    if (D_8038C17C(0.0f, D_801FBDDC__load_func_801E2A08, 73.6f, 16.3f, D_801FBDE0__load_func_801E2A08, 73.5f, D_801FBDE4__load_func_801E2A08, -0.5f, a, 16.5f, D_801FBDE8__load_func_801E2A08, a, b, D_801FBDEC__load_func_801E2A08, c, c) != 0) {
        D_8038C158();
        return 9;
    }
end:
    return 8;
}


extern const f32 D_801FBDF0__load_func_801E2BC4;
extern const f32 D_801FBDF4__load_func_801E2BC4;
extern const f32 D_801FBDF8__load_func_801E2BC4;
extern const f32 D_801FBDFC__load_func_801E2BC4;
extern const f32 D_801FBE00__load_func_801E2BC4;
extern const f32 D_801FBE04__load_func_801E2BC4;
extern const f32 D_801FBE08__load_func_801E2BC4;
extern const f32 D_801FBE0C__load_func_801E2BC4;
s32 func_801E2BC4(s32 arg0, s32 arg1) {
    f32 k;

    if (func_801C0B8C(0x069D4490) != 0) {
        return 0xA;
    }
    k = D_801FBDF0__load_func_801E2BC4;
    D_8038C17C(0.0f, 19.5f, 70.2f, 10.1f, (D_801FBDF4__load_func_801E2BC4), D_801FBDF8__load_func_801E2BC4, D_801FBDFC__load_func_801E2BC4, (D_801FBE00__load_func_801E2BC4), 50.0f, 15.5f, D_801FBE04__load_func_801E2BC4, 50.5f, D_801FBE08__load_func_801E2BC4, D_801FBE0C__load_func_801E2BC4, k, k);
    return 9;
}


/* Exact declaration from context.h (line 237); needed so the in-file build can see the name. */
extern struct func_801EC5B4_Struct0 *D_801DAB14;

#define FUNC_801E2CAC_NODE ((u8 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 8) + 0x24) + 0x2C)))

extern const f32 D_801FBE10__load_func_801E2CAC;
extern const f32 D_801FBE14__load_func_801E2CAC;
extern const f32 D_801FBE18__load_func_801E2CAC;
extern const f32 D_801FBE1C__load_func_801E2CAC;
extern const f32 D_801FBE20__load_func_801E2CAC;
s32 func_801E2CAC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06E80930) != 0) {
        func_8038BE98(D_801FBE10__load_func_801E2CAC);
        func_8038BD50(D_801FBE14__load_func_801E2CAC, D_801FBE18__load_func_801E2CAC, 22.8f);
        D_8038BD88(D_801FBE1C__load_func_801E2CAC, D_801FBE20__load_func_801E2CAC, -3.5f);
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

extern const f64 D_801FBE28__load_func_801E2D94;
extern const f64 D_801FBE30__load_func_801E2D94;
extern const f64 D_801FBE38__load_func_801E2D94;
extern const f64 D_801FBE40__load_func_801E2D94;
extern const f64 D_801FBE48__load_func_801E2D94;
extern const f64 D_801FBE50__load_func_801E2D94;
extern const f64 D_801FBE58__load_func_801E2D94;
extern const f64 D_801FBE60__load_func_801E2D94;
extern const f64 D_801FBE68__load_func_801E2D94;
extern const f64 D_801FBE70__load_func_801E2D94;
extern const f64 D_801FBE78__load_func_801E2D94;
extern const f64 D_801FBE80__load_func_801E2D94;
extern const f64 D_801FBE88__load_func_801E2D94;
extern const f64 D_801FBE90__load_func_801E2D94;
extern const f64 D_801FBE98__load_func_801E2D94;
extern const f64 D_801FBEA0__load_func_801E2D94;
extern const f64 D_801FBEA8__load_func_801E2D94;
extern const f64 D_801FBEB0__load_func_801E2D94;
extern const f64 D_801FBEB8__load_func_801E2D94;
extern const f64 D_801FBEC0__load_func_801E2D94;
extern const f64 D_801FBEC8__load_func_801E2D94;
extern const f64 D_801FBED0__load_func_801E2D94;
extern const f64 D_801FBED8__load_func_801E2D94;
extern const f64 D_801FBEE0__load_func_801E2D94;
extern const f64 D_801FBEE8__load_func_801E2D94;
extern const f64 D_801FBEF0__load_func_801E2D94;
extern const f64 D_801FBEF8__load_func_801E2D94;
extern const f64 D_801FBF00__load_func_801E2D94;
extern const f64 D_801FBF08__load_func_801E2D94;
extern const f64 D_801FBF10__load_func_801E2D94;
extern const f64 D_801FBF18__load_func_801E2D94;
extern const f64 D_801FBF20__load_func_801E2D94;
extern const f64 D_801FBF28__load_func_801E2D94;
extern const f64 D_801FBF30__load_func_801E2D94;
extern const f64 D_801FBF38__load_func_801E2D94;
extern const f64 D_801FBF40__load_func_801E2D94;
extern const f64 D_801FBF48__load_func_801E2D94;
extern const f64 D_801FBF50__load_func_801E2D94;
extern const f32 D_801FBF58__load_func_801E2D94;
extern const f32 D_801FBF5C__load_func_801E2D94;
extern const f32 D_801FBF60__load_func_801E2D94;
s32 func_801E2D94(s32 arg0, s32 arg1) {
    f64 z;
    f64 w;
    f64 k;

    if (func_801C0B8C(0x08DAFF90) != 0) {
        return 0xC;
    }
    if (func_801C0B8C(0x08695200) != 0) {
        w = (f32)((f32)(func_80034C24(func_801C0B2C()) / D_801FBE28__load_func_801E2D94 - D_801FBE30__load_func_801E2D94) / D_801FBE38__load_func_801E2D94);
        k = w * D_801FBE40__load_func_801E2D94;
        S.unkE8->unk2C->unk30 = k + D_801FBE48__load_func_801E2D94;
        S.unkE8->unk2C->unk34 = k + D_801FBE50__load_func_801E2D94;
        S.unkE8->unk2C->unk38 = w * D_801FBE58__load_func_801E2D94 + D_801FBE60__load_func_801E2D94;
        S.unkE8->unk2C->unk3C = w * (D_801FBE68__load_func_801E2D94) + D_801FBE70__load_func_801E2D94;
        S.unkE8->unk2C->unk40 = w * D_801FBE78__load_func_801E2D94 + D_801FBE80__load_func_801E2D94;
        S.unkE8->unk2C->unk44 = w * D_801FBE88__load_func_801E2D94 + D_801FBE90__load_func_801E2D94;
        return 0xB;
    }
    if (func_801C0B8C(0x079D9D90) != 0) {
        w = (f32)((f32)(func_80034C24(func_801C0B2C()) / D_801FBE98__load_func_801E2D94 - D_801FBEA0__load_func_801E2D94) / D_801FBEA8__load_func_801E2D94);
        S.unkE8->unk2C->unk30 = w * (D_801FBEB0__load_func_801E2D94) + D_801FBEB8__load_func_801E2D94;
        S.unkE8->unk2C->unk34 = w * D_801FBEC0__load_func_801E2D94 + D_801FBEC8__load_func_801E2D94;
        S.unkE8->unk2C->unk38 = w * D_801FBED0__load_func_801E2D94 + D_801FBED8__load_func_801E2D94;
        S.unkE8->unk2C->unk3C = w * (D_801FBEE0__load_func_801E2D94) + 20.0;
        z = 1.0 - 1.0;
        S.unkE8->unk2C->unk40 = w * z + D_801FBEE8__load_func_801E2D94;
        S.unkE8->unk2C->unk44 = w * z + D_801FBEF0__load_func_801E2D94;
        return 0xB;
    }
    if (func_801C0B8C(0x072B2CB0) != 0) {
        w = (f32)((f32)(func_80034C24(func_801C0B2C()) / D_801FBEF8__load_func_801E2D94 - D_801FBF00__load_func_801E2D94) / 7.5);
        k = w * D_801FBF08__load_func_801E2D94;
        S.unkE8->unk2C->unk30 = k + D_801FBF10__load_func_801E2D94;
        S.unkE8->unk2C->unk34 = k + D_801FBF18__load_func_801E2D94;
        S.unkE8->unk2C->unk38 = w * D_801FBF20__load_func_801E2D94 + D_801FBF28__load_func_801E2D94;
        S.unkE8->unk2C->unk3C = w * (D_801FBF30__load_func_801E2D94) + D_801FBF38__load_func_801E2D94;
        z = w * D_801FBF40__load_func_801E2D94;
        S.unkE8->unk2C->unk40 = z + D_801FBF48__load_func_801E2D94;
        S.unkE8->unk2C->unk44 = z + D_801FBF50__load_func_801E2D94;
        return 0xB;
    }
    if (func_801C0B8C(0x071BEA70) != 0) {
        func_8038BD50(24.5f, D_801FBF58__load_func_801E2D94, 6.7f);
        D_8038BD88(16.5f, D_801FBF5C__load_func_801E2D94, 11.7f);
        N->unk8->unk24->unk2C->unk4 = D_801FBF60__load_func_801E2D94;
        N->unk8->unk24->unk2C->unk8 = 0.0f;
        N->unk8->unk24->unk2C->unkC = 4.5f;
        N->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x01B80015, 0, 0x1001, 1.0f);
    }
    return 0xB;
}


extern s32 D_801CC470(s32, s32, s32, s32, f32);

extern const f32 D_801FBF64__load_func_801E32A8;
extern const f32 D_801FBF68__load_func_801E32A8;
extern const f32 D_801FBF6C__load_func_801E32A8;
extern const f32 D_801FBF70__load_func_801E32A8;
extern const f32 D_801FBF74__load_func_801E32A8;
s32 func_801E32A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x090E1D7F) != 0) {
        func_8038BE98(40.0f);
        func_8038BD50(D_801FBF64__load_func_801E32A8, D_801FBF68__load_func_801E32A8, 19.9f);
        D_8038BD88(D_801FBF6C__load_func_801E32A8, D_801FBF70__load_func_801E32A8, -1.6f);
        D_801CC470(0, 0x01B80014, 0, 0x1100, 1.0f);
        N->unk8->unk24->unk2C->unk4 = D_801FBF74__load_func_801E32A8;
        N->unk8->unk24->unk2C->unk8 = 0.0f;
        N->unk8->unk24->unk2C->unkC = 8.0f;
        N->unk8->unk24->unk2C->unk12 = 0;
        D_8038C158();
        return 0xD;
    }
    return 0xC;
}



extern const f32 D_801FBF78__load_func_801E33C4;
extern const f32 D_801FBF7C__load_func_801E33C4;
extern const f32 D_801FBF80__load_func_801E33C4;
extern const f32 D_801FBF84__load_func_801E33C4;
extern const f32 D_801FBF88__load_func_801E33C4;
extern const f32 D_801FBF8C__load_func_801E33C4;
extern const f32 D_801FBF90__load_func_801E33C4;
extern const f32 D_801FBF94__load_func_801E33C4;
extern const f32 D_801FBF98__load_func_801E33C4;
extern const f32 D_801FBF9C__load_func_801E33C4;
s32 func_801E33C4(s32 arg0, s32 arg1) {
    f32 a = D_801FBF78__load_func_801E33C4;
    f32 b = (D_801FBF7C__load_func_801E33C4);
    if (D_8038C17C(0.0f, 4.0f, a, 17.8f, D_801FBF80__load_func_801E33C4, D_801FBF84__load_func_801E33C4, D_801FBF88__load_func_801E33C4, D_801FBF8C__load_func_801E33C4, D_801FBF90__load_func_801E33C4, D_801FBF94__load_func_801E33C4, b, D_801FBF98__load_func_801E33C4, a, b, 40.0f, D_801FBF9C__load_func_801E33C4) != 0) {
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

#define func_80005E44 func_80005E44__func_801E38D0
#define func_8012C89C func_8012C89C__func_801E38D0

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

extern void func_80005E44(s32, void *);
extern void func_8012C89C(s32, s32, s32, s32);
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
#undef func_80005E44
#undef func_8012C89C


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







/* hh-block asm/nonmatchings/file026/801E1BE0/_mrg_keep_302a8dc78fdea897.s {"functions":["func_801E3B30"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/_mrg_keep_302a8dc78fdea897.s")


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

#define func_8012CF8C func_8012CF8C__func_801E40F0
#define func_8038D8B8 func_8038D8B8__func_801E40F0

extern s32 func_8012CF8C(s32, s32, s32, s32);
extern s32 func_8038D8B8;

s32 func_801E40F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x094B267FULL) != 0) {
        return 3;
    }
    func_8012CF8C(*(s32 *)((u8 *)&func_8038D8B8 + 0x14),
                  *(s32 *)((u8 *)(((s32 *)D_8038D8D0)[1]) + 0x30) + 0x40, 0x25B, 0);
    return 2;
}
#undef func_8012CF8C
#undef func_8038D8B8


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



#define D_801FBFC4 D_801FBFC4__func_801E4348
#define D_8038D8D0 D_8038D8D0__func_801E4348
#define func_801F6914_Struct1 func_801F6914_Struct1__func_801E4348
#define func_801F6914_Struct2 func_801F6914_Struct2__func_801E4348
#define func_801F6914_Struct3 func_801F6914_Struct3__func_801E4348
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
extern struct func_801F6914_Struct1 *D_8038D8D0;


extern f32 D_801FBFC4;
struct func_801E4348_S2 { u8 pad[0x12]; s16 unk12; };
struct func_801E4348_S1 { u8 pad[0x30]; struct func_801E4348_S2 *unk30; };
struct func_801E4348_S0 { u8 pad[0x14]; struct func_801E4348_S1 *unk14; };

s32 func_801E4348(s32 arg0, s32 arg1) {
    struct func_801E4348_S2 *p;

    if (func_801C0B8C(0x3F3A860) != 0) {
        p = ((struct func_801E4348_S0 *)(void *)D_8038D8D0)->unk14->unk30;
        p->unk12 = (s16)(p->unk12 - (s16)(s32)D_801FBFC4);
        if (func_801C0B8C(0x46DBA60) != 0) {
            return 2;
        }
    }
    return 1;
}
#undef D_801FBFC4
#undef D_8038D8D0
#undef func_801F6914_Struct1
#undef func_801F6914_Struct2
#undef func_801F6914_Struct3






#define D_801FBFC8 D_801FBFC8__func_801E43CC
#define D_8038D8D0 D_8038D8D0__func_801E43CC
#define func_801E4348_S0 func_801E4348_S0__func_801E43CC
#define func_801E4348_S1 func_801E4348_S1__func_801E43CC
#define func_801E4348_S2 func_801E4348_S2__func_801E43CC
#define func_801F6914_Struct1 func_801F6914_Struct1__func_801E43CC
#define func_801F6914_Struct2 func_801F6914_Struct2__func_801E43CC
#define func_801F6914_Struct3 func_801F6914_Struct3__func_801E43CC
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
extern struct func_801F6914_Struct1 *D_8038D8D0;
struct func_801E4348_S2 { u8 pad[0x12]; s16 unk12; };
struct func_801E4348_S1 { u8 pad[0x30]; struct func_801E4348_S2 *unk30; };
struct func_801E4348_S0 { u8 pad[0x14]; struct func_801E4348_S1 *unk14; };


extern f32 D_801FBFC8;

s32 func_801E43CC(s32 arg0, s32 arg1) {
    struct func_801E4348_S2 *temp_v0;

    if (func_801C0B8C(0x069D4490) != 0) {
        temp_v0 = ((struct func_801E4348_S0 *)D_8038D8D0)->unk14->unk30;
        temp_v0->unk12 = (s16)(temp_v0->unk12 + (s16)D_801FBFC8);
        if (func_801C0B8C(0x06CB0B50) != 0) {
            return 3;
        }
    }
    return 2;
}
#undef D_801FBFC8
#undef D_8038D8D0
#undef func_801E4348_S0
#undef func_801E4348_S1
#undef func_801E4348_S2
#undef func_801F6914_Struct1
#undef func_801F6914_Struct2
#undef func_801F6914_Struct3


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

#define FUNC_801E4AB4_PTR(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801E4AB4_E ((struct func_801E4AB4_StructE *)FUNC_801E4AB4_PTR(FUNC_801E4AB4_PTR(FUNC_801E4AB4_PTR(*(u8 **)&D_801DAB14, 8), 0x24), 0x2C))

extern const f32 D_801FBFCC__load_func_801E4AB4;
extern const f32 D_801FBFD0__load_func_801E4AB4;
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
    FUNC_801E4AB4_E->unk4 = (D_801FBFCC__load_func_801E4AB4);
    FUNC_801E4AB4_E->unk8 = 0.0f;
    FUNC_801E4AB4_E->unkC = D_801FBFD0__load_func_801E4AB4;
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



#define FUNC_801E4D24_Z ((u8 *) *(u8 **) ((u8 *) *(u8 **) ((u8 *) *(u8 **) ((u8 *) D_801DAB14 + 0x8) + 0x24) + 0x2C))

extern const f32 D_801FBFD4__load_func_801E4D24;
extern const f32 D_801FBFD8__load_func_801E4D24;
s32 func_801E4D24(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03F3A860) != 0) {
        *(f32 *) (FUNC_801E4D24_Z + 0x4) = D_801FBFD4__load_func_801E4D24;
        *(f32 *) (FUNC_801E4D24_Z + 0x8) = 0.0f;
        *(f32 *) (FUNC_801E4D24_Z + 0xC) = D_801FBFD8__load_func_801E4D24;
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

extern const f32 D_801FBFDC__load_func_801E4FB0;
s32 func_801E4FB0(s32 arg0, s32 arg1) {
    if (((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk24 != 0) {
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = 0.0f;
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FBFDC__load_func_801E4FB0;
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

extern const f32 D_801FBFE0__load_func_801E51A4;
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
        NODE51->unk2C->unk4 = D_801FBFE0__load_func_801E51A4;
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



/* hh-block asm/nonmatchings/file026/801E1BE0/_mrg_keep_36c8fa87eba0f875.s {"functions":["func_801E53C0"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/_mrg_keep_36c8fa87eba0f875.s")


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

extern u8 D_801DAC10[];
extern func_801E5848_Struct4 D_80171CF0;
extern s32 func_80001060(void);
extern s32 func_801302CC(void);
extern u32 func_8000522C(s32, s32);

#define GP (*(func_801E5848_Gfx **)D_801DABE8)
#define OBJ5848 (*(func_801E5848_Struct1 **)&D_801DAC4C)

extern const f64 D_801FC000__load_func_801E5848;
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
            k = D_801FC000__load_func_801E5848;
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

#define D_801DAC4C D_801DAC4C__func_801E5F10

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
#undef D_801DAC4C


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

#define func_8038D28C func_8038D28C__func_801E6638

extern void func_8038D28C(s32 arg0);

s32 func_801E6638(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3567E0) != 0) {
        func_8038D28C(0x1CB);
        return 4;
    }
    return 3;
}
#undef func_8038D28C


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

#define func_8038D28C func_8038D28C__func_801E67A8

extern s32 func_8038D28C(s32);

s32 func_801E67A8(s32 arg0, s32 arg1) {
    if (func_8038D2D4(0x1CC) == 0) {
        func_8038D28C(0x1CD);
        return 0xA;
    }
    return 9;
}
#undef func_8038D28C


s32 func_801E67EC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03B69F60) != 0) {
        func_8038D28C(0x3E0);
        return 0xB;
    }
    return 0xA;
}

#define func_8038D28C func_8038D28C__func_801E6838

extern s32 func_8038D28C(s32);

s32 func_801E6838(s32 arg0, s32 arg1) {
    if (func_8038D2D4(0x3E0) == 0) {
        func_8038D28C(0x1CE);
        return 0xC;
    }
    return 11;
}
#undef func_8038D28C


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

#define func_8038D2B0 func_8038D2B0__func_801E68FC

extern void func_8038D2B0(s32 arg0);
extern s32 D_801FB308;

s32 func_801E68FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x046DBA60) != 0) {
        func_8038D2B0(1548);
        D_801FB308 = 0;
        return 15;
    }
    return 14;
}
#undef func_8038D2B0



/* hh-block asm/nonmatchings/file026/801E1BE0/_mrg_keep_fb0c7e4d1d52a9af.s {"functions":["func_801E6950"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/_mrg_keep_fb0c7e4d1d52a9af.s")


s32 func_801E6B94(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06CB0B50) != 0) {
        func_8038D28C(0x3E3);
        return 0x11;
    }
    return 0x10;
}

#define func_8038D2B0 func_8038D2B0__func_801E6BE0

extern s32 func_8038D2B0(s32 arg0);

s32 func_801E6BE0(s32 arg0, s32 arg1) {
    if (func_8038D2D4(0x3E3) == 0) {
        func_8038D28C(0x1D0);
        func_8038D2B0(0x619);
        return 0x12;
    }
    return 0x11;
}
#undef func_8038D2B0


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



/* hh-block asm/nonmatchings/file026/801E1BE0/_mrg_keep_db9dc1cb7540abf0.s {"functions":["func_801E6C80"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/_mrg_keep_db9dc1cb7540abf0.s")



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



extern const f32 D_801FC070__load_func_801E6F20;
extern const f32 D_801FC074__load_func_801E6F20;
extern const f32 D_801FC078__load_func_801E6F20;
extern const f32 D_801FC07C__load_func_801E6F20;
extern const f32 D_801FC080__load_func_801E6F20;
extern const f32 D_801FC084__load_func_801E6F20;
s32 func_801E6F20(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BE98(D_801FC070__load_func_801E6F20);
    func_8038BD50(-195.0f, 2.0f, -102.0f);
    D_8038BD88((D_801FC074__load_func_801E6F20), 10.0f, 63.0f);
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038BD50(D_801FC078__load_func_801E6F20, D_801FC07C__load_func_801E6F20, -36.6f);
        D_8038BD88((D_801FC080__load_func_801E6F20), D_801FC084__load_func_801E6F20, -32.5f);
        return 1;
    }
    return 0;
}


extern const f32 D_801FC088__load_func_801E6FDC;
extern const f32 D_801FC08C__load_func_801E6FDC;
extern const f32 D_801FC090__load_func_801E6FDC;
extern const f32 D_801FC094__load_func_801E6FDC;
extern const f32 D_801FC098__load_func_801E6FDC;
s32 func_801E6FDC(s32 arg0, s32 arg1)
{
  struct func_801E7ECC_Struct3 *temp_v0;
  struct func_801E7ECC_Struct3 *temp_v0_2;
  struct func_801E7ECC_Struct3 *temp_v0_3;
  if (func_801C0B8C(0xAF79E0) != 0)
  {
    func_8038BD50(87.0f, D_801FC088__load_func_801E6FDC, -8.2f);
    D_8038BD88(73.5f, D_801FC08C__load_func_801E6FDC, -12.4f);
    return 2;
  }
  if (func_801C0B8C(0x81B320) != 0)
  {
    temp_v0 = D_801BBBF0.unkE8->unk2C;
    temp_v0->unk30 = temp_v0->unk30 + (D_801FC090__load_func_801E6FDC);
 do { temp_v0_2 = D_801BBBF0.unkE8->unk2C; temp_v0_2->unk34 = temp_v0_2->unk34 + (D_801FC094__load_func_801E6FDC); } while (0);
    temp_v0_3 = D_801BBBF0.unkE8->unk2C;
    temp_v0_3->unk38 = temp_v0_3->unk38 + D_801FC098__load_func_801E6FDC;
  }
  return 1;
}


struct func_801E70C4_StructLeaf {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};

extern const f32 D_801FC09C__load_func_801E70C4;
extern const f32 D_801FC0A0__load_func_801E70C4;
extern const f32 D_801FC0A4__load_func_801E70C4;
extern const f32 D_801FC0A8__load_func_801E70C4;
extern const f32 D_801FC0AC__load_func_801E70C4;
extern const f32 D_801FC0B0__load_func_801E70C4;
extern const f32 D_801FC0B4__load_func_801E70C4;
extern const f32 D_801FC0B8__load_func_801E70C4;
s32 func_801E70C4(s32 arg0, s32 arg1) {
    struct func_801E70C4_StructLeaf *p;
    f32 delta;

    if (func_801C0B8C(0x01406F40) != 0) {
        func_8038BD50((D_801FC09C__load_func_801E70C4), D_801FC0A0__load_func_801E70C4, -9.2f);
        D_8038BD88(-196.0f, D_801FC0A4__load_func_801E70C4, -1.3f);
        return 3;
    }
    if (func_801C0B8C(0x01298BE0) != 0) {
        return 2;
    }
    delta = D_801FC0A8__load_func_801E70C4;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk30 += (D_801FC0AC__load_func_801E70C4);
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk34 += delta;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk38 += (D_801FC0B0__load_func_801E70C4);
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk3C += D_801FC0B4__load_func_801E70C4;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk40 += delta;
    p = (struct func_801E70C4_StructLeaf *)D_801BBBF0.unkE8->unk2C;
    p->unk44 += D_801FC0B8__load_func_801E70C4;
    return 2;
}


extern const f32 D_801FC0BC__load_func_801E7200;
extern const f32 D_801FC0C0__load_func_801E7200;
extern const f32 D_801FC0C4__load_func_801E7200;
extern const f32 D_801FC0C8__load_func_801E7200;
extern const f32 D_801FC0CC__load_func_801E7200;
extern const f32 D_801FC0D0__load_func_801E7200;
extern const f32 D_801FC0D4__load_func_801E7200;
s32 func_801E7200(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016694E0) != 0) {
        func_8038BD50(D_801FC0BC__load_func_801E7200, 17.0f, -16.0f);
        D_8038BD88(74.0f, 15.5f, -11.4f);
        return 4;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += (D_801FC0C0__load_func_801E7200);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FC0C4__load_func_801E7200;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += (D_801FC0C8__load_func_801E7200);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += (D_801FC0CC__load_func_801E7200);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 += D_801FC0D0__load_func_801E7200;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 += (D_801FC0D4__load_func_801E7200);
    return 3;
}



/* hh-block asm/nonmatchings/file026/801E1BE0/_mrg_keep_78756ee36a8b661d.s {"functions":["func_801E7324"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/_mrg_keep_78756ee36a8b661d.s")


/* Forward declaration only: the struct is defined later in the file by func_801E7ECC.
   Members are reached through byte-offset casts so no struct definition is needed here. */
struct func_801E7ECC_Struct1;

extern const f32 D_801FC14C__load_func_801E755C;
extern const f32 D_801FC150__load_func_801E755C;
extern const f32 D_801FC154__load_func_801E755C;
extern const f32 D_801FC158__load_func_801E755C;
extern const f32 D_801FC15C__load_func_801E755C;
extern const f32 D_801FC160__load_func_801E755C;
s32 func_801E755C(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    if (func_801C0B8C(0x020545E0) != 0) {
        func_8038BD50(-193.0f, D_801FC14C__load_func_801E755C, -24.2f);
        D_8038BD88((D_801FC150__load_func_801E755C), D_801FC154__load_func_801E755C, -5.6f);
        return 6;
    }
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x30) = *(f32 *)(temp_v1 + 0x30) + (D_801FC158__load_func_801E755C);
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x34) = *(f32 *)(temp_v1 + 0x34) + (D_801FC15C__load_func_801E755C);
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x38) = *(f32 *)(temp_v1 + 0x38) + (D_801FC160__load_func_801E755C);
    return 5;
}


#define P ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

extern const f64 D_801FC168__load_func_801E7630;
extern const f64 D_801FC170__load_func_801E7630;
extern const f64 D_801FC178__load_func_801E7630;
extern const f64 D_801FC180__load_func_801E7630;
extern const f64 D_801FC188__load_func_801E7630;
extern const f64 D_801FC190__load_func_801E7630;
extern const f64 D_801FC198__load_func_801E7630;
extern const f32 D_801FC1A0__load_func_801E7630;
extern const f32 D_801FC1A4__load_func_801E7630;
extern const f64 D_801FC1A8__load_func_801E7630;
extern const f64 D_801FC1B0__load_func_801E7630;
extern const f64 D_801FC1B8__load_func_801E7630;
extern const f64 D_801FC1C0__load_func_801E7630;
extern const f64 D_801FC1C8__load_func_801E7630;
extern const f64 D_801FC1D0__load_func_801E7630;
extern const f64 D_801FC1D8__load_func_801E7630;
extern const f64 D_801FC1E0__load_func_801E7630;
extern const f64 D_801FC1E8__load_func_801E7630;
extern const f64 D_801FC1F0__load_func_801E7630;
extern const f64 D_801FC1F8__load_func_801E7630;
extern const f64 D_801FC200__load_func_801E7630;
extern const f32 D_801FC208__load_func_801E7630;
extern const f32 D_801FC20C__load_func_801E7630;
extern const f32 D_801FC210__load_func_801E7630;
extern const f32 D_801FC214__load_func_801E7630;
s32 func_801E7630(s32 arg0, s32 arg1) {
    f64 t;
    f64 k;
    u64 r;
    if (func_801C0B8C(0x02A57D80) != 0) {
        return 7;
    }
    if (func_801C0B8C(0x028E9A20) != 0) {
        r = func_801C0B2C();
        t = (f64)(f32)(func_80034C24(r) / D_801FC168__load_func_801E7630 - D_801FC170__load_func_801E7630) / 1.5;
        P->unk30 = t * (D_801FC178__load_func_801E7630) + (D_801FC180__load_func_801E7630);
        P->unk34 = t * D_801FC188__load_func_801E7630 + D_801FC190__load_func_801E7630;
        P->unk38 = t * -1.0 + (D_801FC198__load_func_801E7630);
        P->unk3C = -197.0f;
        P->unk40 = D_801FC1A0__load_func_801E7630;
        P->unk44 = (D_801FC1A4__load_func_801E7630);
        return 6;
    }
    if (func_801C0B8C(0x02424EE0) != 0) {
        r = func_801C0B2C();
        t = func_80034C24(r);
        k = (D_801FC1A8__load_func_801E7630);
        t = (f64)(f32)(t / D_801FC1B0__load_func_801E7630 - D_801FC1B8__load_func_801E7630) / 5.0;
        P->unk30 = t * D_801FC1C0__load_func_801E7630 + D_801FC1C8__load_func_801E7630;
        P->unk34 = t * (D_801FC1D0__load_func_801E7630) + D_801FC1D8__load_func_801E7630;
        P->unk38 = t * (1.0 - 1.0) +(D_801FC1E0__load_func_801E7630);
        P->unk3C = t * D_801FC1E8__load_func_801E7630 + D_801FC1F0__load_func_801E7630;
        P->unk40 = t * D_801FC1F8__load_func_801E7630 + D_801FC200__load_func_801E7630;
        P->unk44 = t * k + k;
        return 6;
    }
    P->unk30 = P->unk30 + D_801FC208__load_func_801E7630;
    P->unk34 = P->unk34 + D_801FC20C__load_func_801E7630;
    P->unk38 = P->unk38 + D_801FC210__load_func_801E7630;
    P->unk3C = P->unk3C;
    P->unk40 = P->unk40;
    P->unk44 = P->unk44 + D_801FC214__load_func_801E7630;
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

#define GG ((struct func_801E7980_Struct1 *)&D_801BBBF0)

extern const f32 D_801FC218__load_func_801E7980;
extern const f32 D_801FC21C__load_func_801E7980;
extern const f64 D_801FC220__load_func_801E7980;
extern const f64 D_801FC228__load_func_801E7980;
extern const f64 D_801FC230__load_func_801E7980;
extern const f64 D_801FC238__load_func_801E7980;
extern const f64 D_801FC240__load_func_801E7980;
extern const f64 D_801FC248__load_func_801E7980;
extern const f64 D_801FC250__load_func_801E7980;
extern const f64 D_801FC258__load_func_801E7980;
extern const f64 D_801FC260__load_func_801E7980;
extern const f64 D_801FC268__load_func_801E7980;
extern const f64 D_801FC270__load_func_801E7980;
extern const f64 D_801FC278__load_func_801E7980;
extern const f32 D_801FC280__load_func_801E7980;
extern const f32 D_801FC284__load_func_801E7980;
s32 func_801E7980(s32 arg0, s32 arg1) {
    f64 t;
    f64 one;
    u64 r;

    if (func_801C0B8C(0x02F1C8C0)) {
        D_8038C158();
        return 8;
    }
    if (func_801C0B8C(0x02D34440)) {
        func_8038BD50(77.0f, D_801FC218__load_func_801E7980, -42.3f);
        D_8038BD88(D_801FC21C__load_func_801E7980, 14.5f, -11.7f);
        return 7;
    }
    if (func_801C0B8C(0x02C40200)) {
        r = func_801C0B2C();
        one = 1.0;
        t = (f64)(f32)(func_80034C24(r) / D_801FC220__load_func_801E7980 - D_801FC228__load_func_801E7980) / one;
        GG->q->p->f[0] = t * D_801FC230__load_func_801E7980 + D_801FC238__load_func_801E7980;
        GG->q->p->f[1] = t * (D_801FC240__load_func_801E7980) + 15.0;
        GG->q->p->f[2] = t * D_801FC248__load_func_801E7980 + (D_801FC250__load_func_801E7980);
        GG->q->p->f[3] = t * D_801FC258__load_func_801E7980 + D_801FC260__load_func_801E7980;
        GG->q->p->f[4] = t * -0.5 + D_801FC268__load_func_801E7980;
        GG->q->p->f[5] = t * (D_801FC270__load_func_801E7980) + (D_801FC278__load_func_801E7980);
        return 7;
    }
    func_8038BD50(77.0f, D_801FC280__load_func_801E7980, -42.3f);
    D_8038BD88(D_801FC284__load_func_801E7980, 14.5f, -11.7f);
    return 7;
}


extern const f32 D_801FC288__load_func_801E7BB8;
extern const f32 D_801FC28C__load_func_801E7BB8;
extern const f32 D_801FC290__load_func_801E7BB8;
extern const f32 D_801FC294__load_func_801E7BB8;
extern const f32 D_801FC298__load_func_801E7BB8;
extern const f32 D_801FC29C__load_func_801E7BB8;
extern const f32 D_801FC2A0__load_func_801E7BB8;
extern const f32 D_801FC2A4__load_func_801E7BB8;
extern const f32 D_801FC2A8__load_func_801E7BB8;
extern const f32 D_801FC2AC__load_func_801E7BB8;
extern const f32 D_801FC2B0__load_func_801E7BB8;
extern const f32 D_801FC2B4__load_func_801E7BB8;
s32 func_801E7BB8(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, D_801FC288__load_func_801E7BB8, 64.2f, 7.9f, (D_801FC28C__load_func_801E7BB8), D_801FC290__load_func_801E7BB8, D_801FC294__load_func_801E7BB8, (D_801FC298__load_func_801E7BB8), 74.0f, D_801FC29C__load_func_801E7BB8, (D_801FC2A0__load_func_801E7BB8), 73.5f, D_801FC2A4__load_func_801E7BB8, -11.0f, 24.0f, 24.0f) != 0) {
        func_8038BD50(100.5f, D_801FC2A8__load_func_801E7BB8, -16.6f);
        D_8038BD88(D_801FC2AC__load_func_801E7BB8, D_801FC2B0__load_func_801E7BB8, -11.5f);
        func_8038BE98(D_801FC2B4__load_func_801E7BB8);
        return 9;
    }
    return 8;
}


extern const f32 D_801FC2B8__load_func_801E7CD0;
extern const f32 D_801FC2BC__load_func_801E7CD0;
extern const f32 D_801FC2C0__load_func_801E7CD0;
extern const f32 D_801FC2C4__load_func_801E7CD0;
extern const f32 D_801FC2C8__load_func_801E7CD0;
extern const f32 D_801FC2CC__load_func_801E7CD0;
extern const f32 D_801FC2D0__load_func_801E7CD0;
extern const f32 D_801FC2D4__load_func_801E7CD0;
extern const f32 D_801FC2D8__load_func_801E7CD0;
s32 func_801E7CD0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03D09000) != 0) {
        func_8038BD50((D_801FC2B8__load_func_801E7CD0), D_801FC2BC__load_func_801E7CD0, -14.7f);
        D_8038BD88(-197.0f, D_801FC2C0__load_func_801E7CD0, -5.8f);
        return 0xA;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += (D_801FC2C4__load_func_801E7CD0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FC2C8__load_func_801E7CD0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += D_801FC2CC__load_func_801E7CD0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += (D_801FC2D0__load_func_801E7CD0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 += D_801FC2D4__load_func_801E7CD0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 += D_801FC2D8__load_func_801E7CD0;
    return 9;
}



extern const f32 D_801FC2DC__load_func_801E7DF8;
extern const f32 D_801FC2E0__load_func_801E7DF8;
extern const f32 D_801FC2E4__load_func_801E7DF8;
extern const f32 D_801FC2E8__load_func_801E7DF8;
extern const f32 D_801FC2EC__load_func_801E7DF8;
extern const f32 D_801FC2F0__load_func_801E7DF8;
extern const f32 D_801FC2F4__load_func_801E7DF8;
s32 func_801E7DF8(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    if (func_801C0B8C(0x040D9900) != 0) {
        func_8038BD50((D_801FC2DC__load_func_801E7DF8), D_801FC2E0__load_func_801E7DF8, -40.1f);
        D_8038BD88((D_801FC2E4__load_func_801E7DF8), D_801FC2E8__load_func_801E7DF8, -5.7f);
        return 0xB;
    }
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x30) = *(f32 *)(temp_v1 + 0x30) + (D_801FC2EC__load_func_801E7DF8);
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x34) = *(f32 *)(temp_v1 + 0x34) + D_801FC2F0__load_func_801E7DF8;
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x38) = *(f32 *)(temp_v1 + 0x38) + (D_801FC2F4__load_func_801E7DF8);
    return 0xA;
}

#define D_8038BD88 D_8038BD88__func_801E7ECC
#define func_8038BD50 func_8038BD50__func_801E7ECC




void func_8038BD50(f32 arg0, f32 arg1, f32 arg2);
void D_8038BD88(f32 arg0, f32 arg1, f32 arg2);


extern const f32 D_801FC2F8__load_func_801E7ECC;
extern const f32 D_801FC2FC__load_func_801E7ECC;
extern const f32 D_801FC300__load_func_801E7ECC;
extern const f32 D_801FC304__load_func_801E7ECC;
extern const f32 D_801FC308__load_func_801E7ECC;
extern const f32 D_801FC30C__load_func_801E7ECC;
extern const f32 D_801FC310__load_func_801E7ECC;
s32 func_801E7ECC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        func_8038BD50((D_801FC2F8__load_func_801E7ECC), D_801FC2FC__load_func_801E7ECC, -20.1f);
        D_8038BD88((D_801FC300__load_func_801E7ECC), D_801FC304__load_func_801E7ECC, -5.0f);
        return 0xC;
    }
    D_801BBBF0.unkE8->unk2C->unk30 = D_801BBBF0.unkE8->unk2C->unk30 + D_801FC308__load_func_801E7ECC;
    D_801BBBF0.unkE8->unk2C->unk34 = D_801BBBF0.unkE8->unk2C->unk34 + (D_801FC30C__load_func_801E7ECC);
    D_801BBBF0.unkE8->unk2C->unk38 = D_801BBBF0.unkE8->unk2C->unk38 + D_801FC310__load_func_801E7ECC;
    return 0xB;
}
#undef D_8038BD88
#undef func_8038BD50


extern s32 D_801FB394;

extern const f32 D_801FC314__load_func_801E7F9C;
extern const f32 D_801FC318__load_func_801E7F9C;
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
    s->unk34 = s->unk34 + D_801FC314__load_func_801E7F9C;
    s = D_801BBBF0.unkE8->unk2C;
    s->unk38 = s->unk38 + D_801FC318__load_func_801E7F9C;
    return 0xC;
}



/* hh-block asm/nonmatchings/file026/801E1BE0/_mrg_keep_8df1c9b9e7bf48ce.s {"functions":["func_801E8044"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/_mrg_keep_8df1c9b9e7bf48ce.s")



/* hh-block asm/nonmatchings/file026/801E1BE0/_mrg_keep_b54a51dd871dc3e5.s {"functions":["func_801E8324"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/_mrg_keep_b54a51dd871dc3e5.s")


extern const f32 D_801FC424__load_func_801E8718;
extern const f32 D_801FC428__load_func_801E8718;
extern const f32 D_801FC42C__load_func_801E8718;
extern const f32 D_801FC430__load_func_801E8718;
extern const f32 D_801FC434__load_func_801E8718;
extern const f32 D_801FC438__load_func_801E8718;
extern const f32 D_801FC43C__load_func_801E8718;
extern const f32 D_801FC440__load_func_801E8718;
s32 func_801E8718(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0508189A) != 0) {
        func_8038BD50((D_801FC424__load_func_801E8718), D_801FC428__load_func_801E8718, -10.0f);
        D_8038BD88((D_801FC42C__load_func_801E8718), D_801FC430__load_func_801E8718, -9.2f);
        if (func_801C0B8C(0x05175ADA) != 0) {
            func_8038BD50((D_801FC434__load_func_801E8718), D_801FC438__load_func_801E8718, -15.7f);
            D_8038BD88((D_801FC43C__load_func_801E8718), D_801FC440__load_func_801E8718, -9.2f);
            return 0x10;
        }
        return 0xF;
    }
    return 0xF;
}


extern const f32 D_801FC444__load_func_801E87E0;
extern const f32 D_801FC448__load_func_801E87E0;
extern const f32 D_801FC44C__load_func_801E87E0;
extern const f32 D_801FC450__load_func_801E87E0;
extern const f32 D_801FC454__load_func_801E87E0;
extern const f32 D_801FC458__load_func_801E87E0;
extern const f32 D_801FC45C__load_func_801E87E0;
extern const f32 D_801FC460__load_func_801E87E0;
extern const f32 D_801FC464__load_func_801E87E0;
s32 func_801E87E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x053D807A) != 0) {
        func_8038BD50((D_801FC444__load_func_801E87E0), D_801FC448__load_func_801E87E0, -9.6f);
        D_8038BD88((D_801FC44C__load_func_801E87E0), 11.5f, -8.1f);
        D_801FB394 = 0;
        return 0x11;
    }
#define P ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)
    P->unk30 += (D_801FC450__load_func_801E87E0);
    P->unk34 += (D_801FC454__load_func_801E87E0);
    P->unk38 += D_801FC458__load_func_801E87E0;
    P->unk3C += (D_801FC45C__load_func_801E87E0);
    P->unk40 += (D_801FC460__load_func_801E87E0);
    P->unk44 += (D_801FC464__load_func_801E87E0);
    return 0x10;
}


extern void func_8038C4D8(s32 a0, s32 a1);

extern const f32 D_801FC468__load_func_801E8910;
extern const f32 D_801FC46C__load_func_801E8910;
extern const f32 D_801FC470__load_func_801E8910;
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
    temp->unk30 = temp->unk30 + (D_801FC468__load_func_801E8910);
    temp = D_801BBBF0.unkE8->unk2C;
    temp->unk34 = temp->unk34 + (D_801FC46C__load_func_801E8910);
    temp = D_801BBBF0.unkE8->unk2C;
    temp->unk38 = temp->unk38 + (D_801FC470__load_func_801E8910);
    goto ret11;
case1:
    if (func_801C0B8C(0x54CC2BA) != 0) {
        return 0x12;
    }
ret11:
    return 0x11;
}


extern const f32 D_801FC474__load_func_801E8A08;
extern const f32 D_801FC478__load_func_801E8A08;
extern const f32 D_801FC47C__load_func_801E8A08;
extern const f32 D_801FC480__load_func_801E8A08;
s32 func_801E8A08(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x057A897A) != 0) {
        return 0x13;
    }
    func_8038BD50((D_801FC474__load_func_801E8A08), D_801FC478__load_func_801E8A08, 2.8f);
    D_8038BD88((D_801FC47C__load_func_801E8A08), D_801FC480__load_func_801E8A08, -11.0f);
    return 0x12;
}

#define D_801BBBF0 D_801BBBF0__func_801E8A7C
#define func_801E1C38_Struct func_801E1C38_Struct__func_801E8A7C
#define func_801E7ECC_Struct1 func_801E7ECC_Struct1__func_801E8A7C
#define func_801E7ECC_Struct2 func_801E7ECC_Struct2__func_801E8A7C
#define func_801E7ECC_Struct3 func_801E7ECC_Struct3__func_801E8A7C
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
extern struct func_801E7ECC_Struct1 D_801BBBF0;
struct func_801E1C38_Struct {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};


extern f64 D_801FC488__load_func_801E8A7C;
extern f64 D_801FC490__load_func_801E8A7C;
extern f64 D_801FC498__load_func_801E8A7C;
extern f64 D_801FC4A0__load_func_801E8A7C;
extern f64 D_801FC4A8__load_func_801E8A7C;
extern f64 D_801FC4B0__load_func_801E8A7C;
extern f64 D_801FC4B8__load_func_801E8A7C;
extern f64 D_801FC4C0__load_func_801E8A7C;
extern f64 D_801FC4C8__load_func_801E8A7C;
extern f64 D_801FC4D0__load_func_801E8A7C;
extern f64 D_801FC4D8__load_func_801E8A7C;

s32 func_801E8A7C(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    u64 r;
    f64 h = 2.0;

    if (func_801C0B8C(0x05990DFA) != 0) {
        return 0x14;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC488__load_func_801E8A7C) - D_801FC490__load_func_801E8A7C) / h;
    D_801BBBF0.unkE8->unk2C->unk30 = (f32)((t * D_801FC498__load_func_801E8A7C) + D_801FC4A0__load_func_801E8A7C);
    D_801BBBF0.unkE8->unk2C->unk34 = (f32)((t * D_801FC4A8__load_func_801E8A7C) + D_801FC4B0__load_func_801E8A7C);
    z = 1.0 - 1.0;
    z = t * z;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32)((t * D_801FC4B8__load_func_801E8A7C) + D_801FC4C0__load_func_801E8A7C);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32)(z + D_801FC4C8__load_func_801E8A7C);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32)(z + D_801FC4D0__load_func_801E8A7C);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32)(z + D_801FC4D8__load_func_801E8A7C);
    return 0x13;
}
#undef D_801BBBF0
#undef func_801E1C38_Struct
#undef func_801E7ECC_Struct1
#undef func_801E7ECC_Struct2
#undef func_801E7ECC_Struct3


extern const f64 D_801FC4E0__load_func_801E8BE4;
extern const f64 D_801FC4E8__load_func_801E8BE4;
extern const f64 D_801FC4F0__load_func_801E8BE4;
extern const f64 D_801FC4F8__load_func_801E8BE4;
extern const f64 D_801FC500__load_func_801E8BE4;
extern const f64 D_801FC508__load_func_801E8BE4;
extern const f64 D_801FC510__load_func_801E8BE4;
extern const f64 D_801FC518__load_func_801E8BE4;
extern const f64 D_801FC520__load_func_801E8BE4;
extern const f64 D_801FC528__load_func_801E8BE4;
extern const f64 D_801FC530__load_func_801E8BE4;
extern const f64 D_801FC538__load_func_801E8BE4;
s32 func_801E8BE4(s32 arg0, s32 arg1) {
    f64 t;
    f64 two = 2.0;
    u64 r;

    if (func_801C0B8C(0x05B7927A) != 0) {
        return 0x15;
    }
    r = func_801C0B2C();
    t = (f64) (f32) ((func_80034C24(r) / D_801FC4E0__load_func_801E8BE4) - D_801FC4E8__load_func_801E8BE4) / two;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (f32) ((t * D_801FC4F0__load_func_801E8BE4) + (D_801FC4F8__load_func_801E8BE4));
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (f32) ((t * (D_801FC500__load_func_801E8BE4)) + D_801FC508__load_func_801E8BE4);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32) ((t * (D_801FC510__load_func_801E8BE4)) + 14.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32) ((t * -0.5) + (D_801FC518__load_func_801E8BE4));
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32) ((t * (D_801FC520__load_func_801E8BE4)) + D_801FC528__load_func_801E8BE4);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32) ((t * (D_801FC530__load_func_801E8BE4)) + (D_801FC538__load_func_801E8BE4));
    return 0x14;
}


/* hh-block asm/nonmatchings/file026/801E1BE0/_mrg_keep_f268ed1aa5b7d54d.s {"functions":["func_801E8D6C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/_mrg_keep_f268ed1aa5b7d54d.s")


extern s32 func_801C1424(s32);

extern const f64 D_801FC580__load_func_801E8EE0;
extern const f64 D_801FC588__load_func_801E8EE0;
extern const f64 D_801FC590__load_func_801E8EE0;
extern const f64 D_801FC598__load_func_801E8EE0;
extern const f64 D_801FC5A0__load_func_801E8EE0;
extern const f64 D_801FC5A8__load_func_801E8EE0;
extern const f64 D_801FC5B0__load_func_801E8EE0;
extern const f64 D_801FC5B8__load_func_801E8EE0;
extern const f64 D_801FC5C0__load_func_801E8EE0;
extern const f64 D_801FC5C8__load_func_801E8EE0;
extern const f64 D_801FC5D0__load_func_801E8EE0;
extern const f64 D_801FC5D8__load_func_801E8EE0;
s32 func_801E8EE0(s32 arg0, s32 arg1) {
    f64 t;
    u64 r;

    if (func_801C0B8C(0x05F49B7A) != 0 && func_801C1424(4) != 0) {
        return 0x17;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC580__load_func_801E8EE0) - D_801FC588__load_func_801E8EE0) / 2;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (t * D_801FC590__load_func_801E8EE0) + (D_801FC598__load_func_801E8EE0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (t * (D_801FC5A0__load_func_801E8EE0)) + D_801FC5A8__load_func_801E8EE0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (t * (D_801FC5B0__load_func_801E8EE0)) + (D_801FC5B8__load_func_801E8EE0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (t * (D_801FC5C0__load_func_801E8EE0)) + (D_801FC5C8__load_func_801E8EE0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (t * -0.5) + 0.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (t * (D_801FC5D0__load_func_801E8EE0)) + (D_801FC5D8__load_func_801E8EE0);
    return 0x16;
}


struct func_801E9078_Struct2 {
    u8 pad[0x2C];
    struct func_801E1C38_Struct *unk2C;
};

extern const f64 D_801FC5E0__load_func_801E9078;
extern const f64 D_801FC5E8__load_func_801E9078;
extern const f64 D_801FC5F0__load_func_801E9078;
extern const f64 D_801FC5F8__load_func_801E9078;
extern const f64 D_801FC600__load_func_801E9078;
extern const f64 D_801FC608__load_func_801E9078;
extern const f64 D_801FC610__load_func_801E9078;
extern const f64 D_801FC618__load_func_801E9078;
extern const f64 D_801FC620__load_func_801E9078;
s32 func_801E9078(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    u64 r;

    if (func_801C0B8C(0x06131FFA) != 0) {
        return 0x18;
    }
    r = func_801C0B2C();
    a = (f64)(f32)(func_80034C24(r) / D_801FC5E0__load_func_801E9078 - D_801FC5E8__load_func_801E9078) / 2;
    b = a * (1.0 - 1.0);
#define P ((struct func_801E9078_Struct2 *)D_801BBBF0.unkE8)->unk2C
    P->unk30 = b + (D_801FC5F0__load_func_801E9078);
    P->unk34 = a * (D_801FC5F8__load_func_801E9078) + D_801FC600__load_func_801E9078;
    P->unk38 = b + (D_801FC608__load_func_801E9078);
    P->unk3C = b + (D_801FC610__load_func_801E9078);
    P->unk40 = b + D_801FC618__load_func_801E9078;
    P->unk44 = b + (D_801FC620__load_func_801E9078);
    return 0x17;
}

#define func_801C0B2C func_801C0B2C__func_801E91C8

extern u64 func_801C0B2C(void);

#define DEST ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

extern const f64 D_801FC628__load_func_801E91C8;
extern const f64 D_801FC630__load_func_801E91C8;
extern const f64 D_801FC638__load_func_801E91C8;
extern const f64 D_801FC640__load_func_801E91C8;
extern const f64 D_801FC648__load_func_801E91C8;
extern const f64 D_801FC650__load_func_801E91C8;
extern const f64 D_801FC658__load_func_801E91C8;
extern const f64 D_801FC660__load_func_801E91C8;
s32 func_801E91C8(s32 arg0, s32 arg1) {
    f64 temp_fa0;
    f64 temp_fv1;
    f64 z;

    if (func_801C0B8C(0x0631A47A) != 0) {
        return 0x19;
    }
    temp_fa0 = (f64)(f32)((func_80034C24(func_801C0B2C()) / D_801FC628__load_func_801E91C8) - D_801FC630__load_func_801E91C8) / (f64)(f32)2.0;
    z = 1.0 - 1.0;
    temp_fv1 = temp_fa0 * z;
    DEST->unk30 = (f32)(temp_fv1 + (D_801FC638__load_func_801E91C8));
    DEST->unk34 = (f32)(temp_fv1 + D_801FC640__load_func_801E91C8);
    DEST->unk38 = (f32)(temp_fv1 + -6.0);
    DEST->unk3C = (f32)(temp_fv1 + (D_801FC648__load_func_801E91C8));
    DEST->unk40 = (f32)((temp_fa0 * D_801FC650__load_func_801E91C8) + D_801FC658__load_func_801E91C8);
    DEST->unk44 = (f32)(temp_fv1 + (D_801FC660__load_func_801E91C8));
    return 0x18;
}
#undef func_801C0B2C

#define D_801BBBF0 D_801BBBF0__func_801E931C
#define func_801E7ECC_Struct1 func_801E7ECC_Struct1__func_801E931C
#define func_801E7ECC_Struct2 func_801E7ECC_Struct2__func_801E931C
#define func_801E7ECC_Struct3 func_801E7ECC_Struct3__func_801E931C
#define func_801F0AC8_S1 func_801F0AC8_S1__func_801E931C
#define func_801F0AC8_S2 func_801F0AC8_S2__func_801E931C
#define func_801F0AC8_S3 func_801F0AC8_S3__func_801E931C
#define G ((struct func_801F0AC8_S1 *)&D_801BBBF0)
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
extern struct func_801E7ECC_Struct1 D_801BBBF0;
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
extern f64 D_801FC668__load_func_801E931C;
extern f64 D_801FC670__load_func_801E931C;
extern f64 D_801FC678__load_func_801E931C;
extern f64 D_801FC680__load_func_801E931C;
extern f64 D_801FC688__load_func_801E931C;
extern f64 D_801FC690__load_func_801E931C;
extern f64 D_801FC698__load_func_801E931C;
extern f64 D_801FC6A0__load_func_801E931C;
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
    a = (f32)(func_80034C24(t) / D_801FC668__load_func_801E931C - D_801FC670__load_func_801E931C) / two;
    z = 1.0 - 1.0;
    b = a * z;
    G->p->p->f[0] = b + -136.0;
    c = a * D_801FC678__load_func_801E931C;
    G->p->p->f[1] = c + D_801FC680__load_func_801E931C;
    G->p->p->f[2] = b + D_801FC688__load_func_801E931C;
    G->p->p->f[3] = b + D_801FC690__load_func_801E931C;
    G->p->p->f[4] = c + D_801FC698__load_func_801E931C;
    G->p->p->f[5] = b + D_801FC6A0__load_func_801E931C;
    return 0x19;
}
#undef G
#undef D_801BBBF0
#undef func_801E7ECC_Struct1
#undef func_801E7ECC_Struct2
#undef func_801E7ECC_Struct3
#undef func_801F0AC8_S1
#undef func_801F0AC8_S2
#undef func_801F0AC8_S3


s32 func_801E9470(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    u64 r;

    if (func_801C0B8C(0x067DEFBA) != 0) {
        return 0x1B;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / 1000000.0) - 105.91666674613951) / 3.0;
    z = 1.0 - 1.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * 0.4000000000000057 + (-175.3);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * 1.4000000000000021 + 16.2;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * z + (-6.6);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = t * 0.6999999999999886 + (-160.5);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = t * 2.9000000000000004 + 12.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = t * (-0.09999999999999964) + -6.0;
    return 0x1A;
}


struct func_801E95F8_StructB { u8 pad[0x30]; f32 f[6]; };
struct func_801E95F8_StructA { u8 pad[0x2C]; struct func_801E95F8_StructB *p; };
struct func_801E95F8_StructG { u8 pad[0xE8]; struct func_801E95F8_StructA *a; };

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
    t = (f64)(f32)((func_80034C24(r) / 1000000.0) - 107.91666674613951) / 7.0;
    zz = 1.0 - 1.0;
    z = t * zz;
    G->a->p->f[0] = z + -144.0;
    G->a->p->f[1] = t * 10.399999999999999 + 10.0;
    G->a->p->f[2] = z + (-17.6);
    G->a->p->f[3] = z + (-162.7);
    G->a->p->f[4] = t * 0.8000000000000007 + 14.6;
    G->a->p->f[5] = z + (-9.1);
    return 0x1B;
}


s32 func_801E975C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06FFA2DA) != 0) {
        return 0x1D;
    }
    func_80034C24(func_801C0B2C());
    func_8038BD50((-185.699997f), (-15.3999996f), -57.7f);
    D_8038BD88((-222.399994f), (-1.29999995f), -50.4f);
    return 0x1C;
}


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
    t = (f64)(f32)(func_80034C24(r) / 1000000.0 - 117.41666674613951) / 2;
    P->unk30 = t * (-27.19999999999999) + (-231.2);
    P->unk34 = t * 1.6999999999999993 + 11.9;
    z = t * (1.0 - 1.0);
    P->unk38 = t * (-3.799999999999997) + (-31.1);
    P->unk3C = z + (-152.5);
    P->unk40 = z + 7.0;
    P->unk44 = z + (-20.2);
    return 0x1D;
}


s32 func_801E9958(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0736915AULL) != 0) {
        return 0x1F;
    }
    func_8038BD50(-81.5f, 11.5f, -52.8f);
    D_8038BD88(-168.0f, 11.3000002f, -32.0f);
    return 0x1E;
}


s32 func_801E99CC(s32 arg0, s32 arg1) {
    f32 fa0;
    f64 k;
    u64 t;

    if (func_801C0B8C(0x0767655A) != 0) {
        return 0x20;
    }
    t = func_801C0B2C();
    k = (f64)(f32)(func_80034C24(t) / 1000000.0 - 121.21666674613951) / 3.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = k * -11.0 + (-182.3);
    fa0 = k * (-0.5999999999999996) + 14.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = fa0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = k * (-3.6999999999999993) + -11.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = k * 0.30000000000001137 + (-154.3);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = fa0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = k * (-0.7999999999999998) + -4.0;
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



s32 func_801EA004(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x81B320) != 0) {
        return 3;
    }
    D_801FD498 += 2.08888888f;
    D_801FD49C += 2.08888888f;
    D_801FD4A0 += 2.08888888f;
    D_801FD4A4 += 0;
    D_801FD4A8 += 0.222222224f;
    D_801FD4AC += 0.888888896f;
    func_801CCE88(0, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(0, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
    func_801CCE88(1, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(1, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)-D_801FD4AC);
    return 2;
}


extern f32 D_801FD4B0;

s32 func_801EA4BC(s32 arg0, s32 arg1) {
    D_801FD4B0 = 1.57079637f;
    return 4;
}

#define func_801BF628 func_801BF628__func_801EA4DC

f32 func_80029280(f32);
f32 func_80032720(f32);
void func_801BF628(s32, s32 *);


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
        D_801FD4B0 += 0.130454034f;
        if (6.28318548f < D_801FD4B0) {
            D_801FD4B0 = 0.0f;
        }
        func_801CCE0C(2);
        func_801CCE50(0x64, 0x64, 0x64);
        sp27 = (s8) (s32) (func_80032720(D_801FD4B0) * 80.0f);
        sp25[1] = (s8) (s32) (func_80029280(D_801FD4B0) * 80.0f);
        func_801CCE88(0, 0xBC, 0xBC, 0xBC);
        func_801CCEC8(0, sp27, 0x14, sp25[1]);
        func_801CCE88(1, 0xBC, 0xBC, 0xBC);
        sp27 = (s8) (s32) (func_80032720(D_801FD4B0 + 3.14159274f) * 80.0f);
        func_801CCEC8(1, sp27, 0x14, (s8) (s32) (func_80029280(D_801FD4B0 + 3.14159274f) * 80.0f));
    }
    return 4;
}
#undef func_801BF628

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



s32 func_801EAE10(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7399E9A) != 0) {
        return 8;
    }
    D_801FD498 += 1.64912283f;
    D_801FD49C += 1.64912283f;
    D_801FD4A0 += 1.64912283f;
    D_801FD4A4 += 0;
    D_801FD4A8 += 0.175438598f;
    D_801FD4AC += 0.701754391f;
    func_801CCE88(0, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(0, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
    func_801CCE88(1, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(1, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)-D_801FD4AC);
    return 7;
}



s32 func_801EB2C8(s32 arg0, s32 arg1) {
    D_801FD4B0 = 1.57079637f;
    return 9;
}


s32 func_801EB2E8(s32 arg0, s32 arg1) {
    s8 sp27;
    s8 sp26;
    s8 sp25;

    D_801FD4B0 += 0.130454034f;
    if (6.28318548f < D_801FD4B0) {
        D_801FD4B0 = 0.0f;
    }
    func_801CCE0C(2);
    func_801CCE50(0x64, 0x64, 0x64);
    sp27 = (s32) (func_80032720(D_801FD4B0) * 80.0f);
    sp25 = (s32) (func_80029280(D_801FD4B0) * 80.0f);
    func_801CCE88(0, 0xBC, 0xBC, 0xBC);
    func_801CCEC8(0, sp27, 0x14, sp25);
    func_801CCE88(1, 0xBC, 0xBC, 0xBC);
    sp27 = (s32) (func_80032720(D_801FD4B0 + 3.14159274f) * 80.0f);
    func_801CCEC8(1, sp27, 0x14, (s8) (s32) (func_80029280(D_801FD4B0 + 3.14159274f) * 80.0f));
    return 9;
}


s32 func_801EB458(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801EB468(s32 arg0, s32 arg1) {
    func_801C2420(0x260, func_8038DD54 + 0x14);
    return 1;
}

#define func_80005E44 func_80005E44__func_801EB49C
#define func_8012C89C func_8012C89C__func_801EB49C
#define func_8038D854 func_8038D854__func_801EB49C

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

extern void func_80005E44(s32, void *);
extern void func_8012C89C(s32, s32, s32, s32);
extern struct func_801EB49C_StructP *func_8038D854;

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
#undef func_80005E44
#undef func_8012C89C
#undef func_8038D854


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

s32 func_801EC17C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x050384BA) != 0) {
        func_801C2C90((-185.5f), 15.0f, 0xC0C00000, 0xB0, 0xB0, 0xB0, 0x80, D_801D8F00, 9);
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
        P414->unk8->unk24->unk2C->unk4 = 193.899994f;
        P414->unk8->unk24->unk2C->unk8 = 25.0f;
        P414->unk8->unk24->unk2C->unkC = (-1.39999998f);
        P414->unk8->unk24->unk2C->unk12 = 0x1800;
        return 3;
    }
    }
end:
    return 2;
}


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
        D_801DAB14->unk8->unk24->unk2C->unk4 = 183.100006f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 15.5f;
        D_801DAB14->unk8->unk24->unk2C->unkC = (-0.300000012f);
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        return 4;
    }
    return 3;
}

#define func_801CC470 func_801CC470__func_801EC668

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

s32 func_801EC668(s32 arg0, s32 arg1) {
    if (func_801DAAF0.unk24->unk8->unk24->unk2C->unk8 <= 0.0f) {
        func_801CC470(0, 0x01B80014, 0, 0x100, 1.0f);
        return 5;
    }
    return 4;
}
#undef func_801CC470


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

s32 func_801EC6E4(s32 arg0, s32 arg1) {
    struct func_801EC6E4_Struct0 **pp;

    if (func_801C0B8C(0x02A57D80) != 0) {
        pp = (struct func_801EC6E4_Struct0 **)&func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk24->unk2C->unk4 = 87.0f;
        (*pp)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk24->unk2C->unkC = (-14.2700005f);
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


s32 func_801EC7F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x040D9900) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -76.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = (-13.6000004f);
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01B8001B, 0, 0x100, 3.0f);
        return 0xB;
    }
    return 0xA;
}


s32 func_801EC8CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = (-166.899994f);
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = (-9.19999981f);
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

#define func_801CC470 func_801CC470__func_801ECA68

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 scale);

s32 func_801ECA68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0508189AULL) != 0) {
        func_801CC470(0, 0x01B8000D, 0, 0, 2.5f);
        return 0xF;
    }
    return 0xE;
}
#undef func_801CC470


s32 func_801ECACC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0545219A) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = (-158.800003f);
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = (-15.8999996f);
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1BED;
        func_801CC470(0, 0x02A80011, 0, 0x1000, 1.0f);
        return 0x10;
    }
    return 0xF;
}

#define func_801CC470 func_801CC470__func_801ECBA0

extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801D1AF8(s32 a);

s32 func_801ECBA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05822A9A) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = (-167.600006f);
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = (-6.30000019f);
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1A6D;
        func_801CC470(0, 0x02A80011, 0, 0x1000, 1.0f);
        return 0x11;
    }
    if (func_801C0B8C(0x0563A61A) != 0) {
        func_801D1AF8(1);
    }
    return 0x10;
}
#undef func_801CC470


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
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = 73.3000031f;
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = (-11.1999998f);
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

#define func_801D1258 func_801D1258__func_801ED1E8

extern void func_801D1258(s32 a0);


s32 func_801ED1E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x035B11E0) != 0) {
        func_801D1258(0);
        func_801CC470(1, 0x01B8000E, 2, 0x1100, 2.0f);
        return 0xD;
    }
    D_801FD478 += 2.33333325f;
    *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)&func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = (s16) (s32) ((D_801FD478 * 2048.0f) / 90.0f);
    return 0xC;
}
#undef func_801D1258


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

s32 func_801ED2B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03920060) != 0) {
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = 50.0f;
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -11.0f;
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x01B8000E, 0, 0x100, 2.0f);
        return 0xE;
    }
    ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 - 0.100000001f;
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


s32 func_801ED408(s32 arg0, s32 arg1) {
    struct func_801ECF08_Node **p;

    if (func_801C0B8C(0x040D9900) != 0) {
        p = (struct func_801ECF08_Node **)((u32)&func_801DAAF0.unk24);
        (*p)->unk8->unk8->unk24->unk2C->unk4 = (-36.5999985f);
        (*p)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*p)->unk8->unk8->unk24->unk2C->unkC = (-11.1999998f);
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

s32 func_801ED4EC(s32 arg0, s32 arg1)
{
  struct func_801ED4EC_Struct1 **new_var;
  struct func_801ED4EC_Struct1 * volatile *pp;
  new_var = ((struct func_801ED4EC_Struct1 **) (&func_801DAAF0)) + 9;
  if (func_801C0B8C(0x044AA200) != 0)
  {
    pp = new_var;
    (*pp)->unk8->unk8->unk24->unk2C->unk4 = (-147.699997f);
    (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unkC = (-6.0999999f);
    (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
    func_801CC470(1, 0x01B80010, 0, 0x1100, 3.0f);
    return 0x14;
  }
  return 0x13;
}


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
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = (-147.699997f);
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = (-8.60000038f);
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A80017, 0, 0, 1.0f);
        return 0x15;
    }
    return 0x14;
}


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
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = (-147.699997f);
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = (-6.0999999f);
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
        (*slot)->unk8->unk8->unk24->unk2C->unk4 = (-160.300003f);
        (*slot)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*slot)->unk8->unk8->unk24->unk2C->unkC = (-6.0999999f);
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

s32 func_801EDA28(s32 arg0, s32 arg1) {
    if (P8(P8(P8(P8(*(u8 **)&D_801DAB14, 8), 8), 8), 0x24) != 0) {
        if (func_801C0B8C(0x01406F40) != 0) {
            FL[1] = -197.0f;
            FL[2] = 0.0f;
            FL[3] = (-5.5999999f);
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

#define func_801CC470 func_801CC470__func_801EDBBC

extern s32 func_801CC470(s32, s32, s32, s32, f32);

s32 func_801EDBBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x020545E0) != 0) {
        func_801CC470(2, 0x01B80012, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}
#undef func_801CC470


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
    (*g)->unk8->unk8->unk8->unk24->unk2C->unkC = (-5.5999999f);
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
    ((func_801EDF00_StructA *) (*((func_801EDF00_StructA **) ((u8 *) &func_801DAAF0 + new_var))))->unk8->unk8->unk8->unk24->unk2C->unkC = (-5.5999999f);
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


s32 func_801EE0E4(s32 arg0, s32 arg1) {
    u8 **pp;

    if (func_801C0B8C(0x06670C5A) != 0) {
        pp = (u8 **)&D_801DAB14;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*pp + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4) = -197.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*pp + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*pp + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = (-5.5999999f);
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*pp + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x800;
        func_801CC470(2, 0x02A80007, 0, 0x100, 3.0f);
        return 0x12;
    }
    return 0x11;
}


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
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk4 = (-222.699997f);
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = -15.5f;
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = (-47.4000015f);
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


#define H(p, o) (*(u8 **)((p) + (o)))
#define N24 H(H(H(H(*(u8 **)&D_801DAB14, 8), 8), 8), 8), 0x24)
#define NODE H(H(H(H(H(*(u8 **)&D_801DAB14, 8), 8), 8), 8), 0x24)
#define F(o) (*(f32 *)(H(NODE, 0x2C) + (o)))

s32 func_801EE38C(s32 arg0, s32 arg1) {
    if (NODE != 0) {
        if (func_801C0B8C(0x01406F40) != 0) {
            F(4) = -190.0f;
            F(8) = 0.0f;
            F(0xC) = 3.4000001f;
            *(s16 *)(H(NODE, 0x2C) + 0x12) = 0x1182;
            func_801CC470(3, 0x01B80013, 0, 0x1001, 1.0f);
            return 2;
        }
        F(4) = 5120.0f;
        F(8) = 0.0f;
        F(0xC) = 3.4000001f;
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
        ((struct func_801EE5B4_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 4.4000001f;
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
        P->unkC = 4.4000001f;
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
    ((struct func_801EE874_S4 *) ((struct func_801EE874_S *) (*pp))->unk8->unk8->unk8->unk8)->unk24->unk2C->unkC = (-5.5999999f);
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
        slot->unk0->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = (-5.5999999f);
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

#define func_801CC470 func_801CC470__func_801EEB48

extern s32 func_801CC470(s32, s32, s32, s32, f32);

s32 func_801EEB48(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x02A8001E, 0, 0x1000, 9.0f);
    return 0xF;
}
#undef func_801CC470


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


#define LW(p, off) (*(s32 *)((u8 *)(p) + (off)))
#define FUNC_801EEBFC_NODE LW(LW(LW(LW(LW(LW(ptr, 0), 8), 8), 8), 8), 0x24)

s32 func_801EEBFC(s32 arg0, s32 arg1) {
    s32 **ptr;

    if (func_801C0B8C(0x06670C5A) != 0) {
        ptr = (s32 **)&D_801DAB14;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 4) = -202.0f;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 8) = 0.0f;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 12) = (-5.5999999f);
        *(s16 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 18) = 0x800;
        func_801CC470(3, 0x02A80006, 0, 0x100, 3.0f);
        return 0x14;
    }
    return 0x13;
}

#define D_801DAB14 D_801DAB14__func_801EED00
#define func_801CC470 func_801CC470__func_801EED00

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 a4);

extern s32 *D_801DAB14;

#define FUNC_801EED00_NODE ((s32 *)(((s32 *)(((s32 *)(((s32 *)(((s32 *)(((s32 *)D_801DAB14)[2]))[2]))[2]))[2]))[9]))[11]

s32 func_801EED00(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06D97D3A) != 0) {
        ((f32 *)FUNC_801EED00_NODE)[1] = (-227.699997f);
        ((f32 *)FUNC_801EED00_NODE)[2] = -15.5f;
        ((f32 *)FUNC_801EED00_NODE)[3] = (-47.4000015f);
        ((s16 *)FUNC_801EED00_NODE)[9] = 0x800;
        func_801CC470(3, 0x02A80020, 0, 0x100, 3.0f);
        return 0x15;
    }
    return 0x14;
}
#undef D_801DAB14
#undef func_801CC470


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

#define func_801CC470 func_801CC470__func_801EF0E0

extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801EF0E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x021C2940) != 0) {
        func_801CC470(4, 0x01B80002, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}
#undef func_801CC470


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
        func_801CC470(4, 0x01B8000B, 0, 0x1000, 9.60000038f);
        return 4;
    }
    return 3;
}


s32 func_801EF258(s32 arg0, s32 arg1) {
    return 5;
}

#define func_801CC470 func_801CC470__func_801EF268

extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801EF268(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04B05BAA) != 0) {
        func_801CC470(4, 0x01B8000B, 0, 0x1000, 6.0f);
        return 6;
    }
    return 5;
}
#undef func_801CC470


s32 func_801EF2CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04FFB42A) != 0) {
        func_801CC470(4, 0x01B8000B, 0, 0x1000, 2.0f);
        return 7;
    }
    return 6;
}


#define FUNC_801EF330_DEREF8(x) (*(u8 **)((u8 *)(x) + 8))
#define FUNC_801EF330_X5 FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8((u8 *)D_801DAB14)))))
#define FUNC_801EF330_Q (*(u8 **)((u8 *)FUNC_801EF330_X5 + 0x24))
#define FUNC_801EF330_R (*(u8 **)((u8 *)FUNC_801EF330_Q + 0x2C))

s32 func_801EF330(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05E5593A) != 0) {
        *(f32 *)((u8 *)FUNC_801EF330_R + 4) = (-218.5f);
        *(f32 *)((u8 *)FUNC_801EF330_R + 8) = 0.0f;
        *(f32 *)((u8 *)FUNC_801EF330_R + 0xC) = (-8.89999962f);
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

s32 func_801EF420(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x066EAD7A) != 0) {
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = (-218.5f);
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = (-8.89999962f);
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(4, 0x01680003, 0, 0x100, 1.0f);
        return 9;
    }
    return 8;
}


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
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = (-243.100006f);
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = -15.5f;
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = (-59.7000008f);
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

#define func_8038D28C func_8038D28C__func_801EFDE0

extern void func_8038D28C(s32 arg0);

s32 func_801EFDE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038D28C(0x1D5);
        return 4;
    }
    return 3;
}
#undef func_8038D28C


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

#define func_8038D28C func_8038D28C__func_801F04F0

extern void func_8038D28C(s32 arg0);

s32 func_801F04F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05B7927A) != 0) {
        func_8038D28C(0x5C6);
        return 0x1A;
    }
    return 0x19;
}
#undef func_8038D28C

#define func_8038D28C func_8038D28C__func_801F053C

extern void func_8038D28C(s32 arg0);
extern s32 D_801FB748;

s32 func_801F053C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05F49B7A) != 0) {
        func_8038D28C(0x5C7);
        D_801FB748 = 0;
        return 0x1B;
    }
    return 0x1A;
}
#undef func_8038D28C



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



s32 func_801F071C(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    f64 w;

    func_8038BEC8(5.0f);
    func_8038BE98(33.2999992f);
    if (func_801C0B8C(0x5D1420) != 0) {
        return 1;
    }
    if (func_801C0B8C(0x2F4D60) != 0) {
        t = (f64)(f32)(func_80034C24(func_801C0B2C()) / 1000000.0 - 3.1) / 2.9999999999999996;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * (-3.599999999999998) + 19.7;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * 0.7999999999999998 + 4.2;
        z = 1.0 - 1.0;
        w = t * z;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * (-14.7) + 8.2;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = w + (-3.4);
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = w + 14.4;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = w + 1.9;
        return 0;
    }
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_8038BD50(19.7000008f, 4.19999981f, 8.2f);
        D_8038BD88((-3.4000001f), 14.3999996f, 1.9f);
    } else {
        func_8038BD50((-6.80000019f), 69.9000015f, 10.3f);
        D_8038BD88(0.200000003f, 23.2999992f, -2.4f);
    }
    return 0;
}


s32 func_801F0940(s32 arg0, s32 arg1) {
    f64 t;
    u64 r;

    if (func_801C0B8C(0x8ADAE0) != 0) {
        return 2;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / 1000000.0) - 6.1) / 3.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (f32)(t * 3.5999999999999996 + 7.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (f32)(t * 11.599999999999994 + 37.7);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32)(t * (-0.7000000000000001) + (-0.9));
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32)(t * (-1.7000000000000002) + (-4.3));
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32)(t * 0.9000000000000004 + 14.9);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32)(t * 0.6000000000000001 + 2.0);
    return 1;
}


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
        func_8038BD50(8.89999962f, 47.0f, -11.2f);
        D_8038BD88((-2.9000001f), 12.3000002f, 4.4f);
        return 3;
    }
    if (func_801C0B8C(0xC4D69F) != 0) {
        t = func_801C0B2C();
        a = ((f64) (f32) ((func_80034C24(t) / 1000000.0) - 12.899999999999999) / 0.1999999999999993) * 0.0f;
        f = (f32) (a + 10.3);
        G->unkE8->unk2C->unk30 = f;
        G->unkE8->unk2C->unk34 = f;
        G->unkE8->unk2C->unk38 = (f32) (a + (-0.8));
        G->unkE8->unk2C->unk3C = (f32) (a + (-4.3));
        G->unkE8->unk2C->unk40 = (f32) (a + 16.7);
        G->unkE8->unk2C->unk44 = (f32) (a + 2.4);
        func_8038BE98(15.6999998f);
        return 2;
    }
    if (func_801C0B8C(0xC1C960) != 0) {
        t = func_801C0B2C();
        a = ((f64) (f32) ((func_80034C24(t) / 1000000.0) - 12.7) / 0.1999999999999993) * 0.0f;
        G->unkE8->unk2C->unk30 = (f32) (a + 10.2);
        G->unkE8->unk2C->unk34 = (f32) (a + 10.0);
        G->unkE8->unk2C->unk38 = (f32) (a + (-0.7));
        G->unkE8->unk2C->unk3C = (f32) (a + -4.5);
        G->unkE8->unk2C->unk40 = (f32) (a + 16.3);
        G->unkE8->unk2C->unk44 = (f32) (a + 2.5);
        func_8038BE98(26.7999992f);
        return 2;
    }
    if (func_801C0B8C(0xBEBC20) != 0) {
        t = func_801C0B2C();
        a = ((f64) (f32) ((func_80034C24(t) / 1000000.0) - 12.5) / 0.1999999999999993) * 0.0f;
        G->unkE8->unk2C->unk30 = (f32) (a + 11.8);
        G->unkE8->unk2C->unk34 = (f32) (a + 8.9);
        G->unkE8->unk2C->unk38 = (f32) (a + (-0.9));
        G->unkE8->unk2C->unk3C = (f32) (a + (-4.6));
        G->unkE8->unk2C->unk40 = (f32) (a + 16.0);
        G->unkE8->unk2C->unk44 = (f32) (a + 2.6);
        return 2;
    }
    if (func_801C0B8C(0xBA2840) != 0) {
        t = func_801C0B2C();
        a = (f64) (f32) ((func_80034C24(t) / 1000000.0) - 12.2) / 0.3000000000000007;
        G->unkE8->unk2C->unk30 = (f32) ((a * (-4.299999999999999)) + 17.7);
        G->unkE8->unk2C->unk34 = (f32) ((a * 3.2) + 4.3);
        b = a * 0.0f;
        G->unkE8->unk2C->unk38 = (f32) ((a * 3.8) + -6.0);
        G->unkE8->unk2C->unk3C = (f32) (b + (-4.9));
        G->unkE8->unk2C->unk40 = (f32) (b + 15.5);
        G->unkE8->unk2C->unk44 = (f32) (b + 2.3);
        return 2;
    }
    if (func_801C0B8C(0xB10080) != 0) {
        t = func_801C0B2C();
        b = (f64) (f32) ((func_80034C24(t) / 1000000.0) - 11.6) / 0.5999999999999996;
        a = b * 0.0f;
        G->unkE8->unk2C->unk30 = (f32) ((b * 6.6) + 7.6);
        G->unkE8->unk2C->unk34 = (f32) (a + 2.0);
        G->unkE8->unk2C->unk38 = (f32) ((b * 10.1) + (-13.1));
        G->unkE8->unk2C->unk3C = (f32) (a + (-4.9));
        G->unkE8->unk2C->unk40 = (f32) (a + 15.5);
        G->unkE8->unk2C->unk44 = (f32) (a + 2.3);
        return 2;
    }
    if (func_801C0B8C(0xA1BE40) != 0) {
        t = func_801C0B2C();
        a = (f64) (f32) ((func_80034C24(t) / 1000000.0) - 10.6) / 1.0f;
        G->unkE8->unk2C->unk30 = (f32) ((a * 4.4) + 9.6);
        G->unkE8->unk2C->unk34 = (f32) ((a * 0.10000000000000009) + 1.9);
        b = a * 0.0f;
        G->unkE8->unk2C->unk38 = (f32) ((a * (-7.6)) + 15.7);
        G->unkE8->unk2C->unk3C = (f32) (b + (-4.9));
        G->unkE8->unk2C->unk40 = (f32) (b + 15.5);
        G->unkE8->unk2C->unk44 = (f32) (b + 2.3);
        return 2;
    }
    t = func_801C0B2C();
    a = (f64) (f32) ((func_80034C24(t) / 1000000.0) - 9.1) / 1.5;
    G->unkE8->unk2C->unk30 = (f32) ((a * (-4.399999999999999)) + 17.7);
    G->unkE8->unk2C->unk34 = (f32) ((a * 3.1000000000000005) + 4.3);
    b = a * 0.0f;
    G->unkE8->unk2C->unk38 = (f32) ((a * 3.4) + -6.0);
    G->unkE8->unk2C->unk3C = (f32) (b + (-4.9));
    G->unkE8->unk2C->unk40 = (f32) (b + 15.5);
    G->unkE8->unk2C->unk44 = (f32) (b + 2.3);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F13A0.s")


s32 func_801F1804(s32 arg0, s32 arg1) {
    f64 t, one;
    u64 r;
    if (func_801C0B8C(0x0104ECDF) != 0) {
        return 5;
    }
    r = func_801C0B2C();
    one = 1.0;
    t = (f64)(f32)(func_80034C24(r) / 1000000.0 - 16.099999999999998) / one;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * (-18.900000000000002) + 25.6;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * (-3.2) + 7.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * -2.0 + -5.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = t * (-0.3999999999999986) + -20.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = t * (-1.8999999999999995) + 8.6;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = t * (-1.7000000000000002) + 2.1;
    return 4;
}


#define DEST1994 ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801F1994(s32 arg0, s32 arg1) {
    f64 temp_fa0;
    f64 temp_fv1;

    if (func_801C0B8C(0x0132B39F) != 0) {
        return 6;
    }
    temp_fv1 = (f64)(f32)((func_80034C24(func_801C0B2C()) / 1000000.0) - 17.099999999999998) / 3.0;
    DEST1994->unk30 = (f32)((temp_fv1 * (-0.8000000000000007)) + -17.0);
    DEST1994->unk34 = (f32)((temp_fv1 * 0.6999999999999993) + 8.8);
    temp_fa0 = temp_fv1 * 0.0f;
    DEST1994->unk38 = (f32)((temp_fv1 * 3.5999999999999996) + (-7.8));
    DEST1994->unk3C = (f32)(temp_fa0 + -2.0);
    DEST1994->unk40 = (f32)(temp_fa0 + 13.8);
    DEST1994->unk44 = (f32)(temp_fa0 + (-0.4));
    return 5;
}


s32 func_801F1B04(s32 arg0, s32 arg1) {
    f64 t;
    f32 q;
    u64 r;

    if (func_801C0B8C(0x01607A5F) != 0) {
        return 7;
    }
    r = func_801C0B2C();
    t = (f64) (f32) ((func_80034C24(r) / 1000000.0) - 20.099999999999998) / 3.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (t * (-10.7)) + 14.9;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (t * 8.7) + 3.0f;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (t * (-6.199999999999999)) + (-4.9);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (t * (-0.09999999999999964)) + (-12.9);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (t * (2.0 - 1.0)) + 4.7;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (t * (-0.6)) + 1.5;
    return 6;
}


s32 func_801F1C90(s32 arg0, s32 arg1) {
    f64 t;
    u64 r;

    if (func_801C0B8C(0x017EFEDF) != 0) {
        func_8038BD50(13.0f, 72.0f, 7.5f);
        D_8038BD88(0.699999988f, 23.3999996f, 0);
        return 8;
    }
    if (func_801C0B8C(0x01681B7F) != 0) {
        r = func_801C0B2C();
        t = (f32)(func_80034C24(r) / 1000000.0 - 23.599999999999998) / 1.5;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * (-3.200000000000001) + 11.4;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * 2.200000000000003 + 32.3;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * (-13.4) + 7.0;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = t * 0.7999999999999998 + 1.6;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = t * -0.5 + 13.2;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = t * 0.10000000000000009 + -1.5;
        return 7;
    }
    func_8038BD50((-26.7999992f), 5.0f, -6.2f);
    D_8038BD88(-2.0f, 12.6999998f, -0.7f);
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

s32 func_801F1EA0(s32 arg0, s32 arg1) {
    u32 base = (u32)&D_801BBBF0;
    struct func_801F1EA0_Struct1 *p;

    if (func_801C0B8C(0x01BC07DF) != 0) {
        func_8038BD50(5.0f, 13.8999996f, -20.7f);
        D_8038BD88(-2.0f, 14.3999996f, -1.2f);
        return 9;
    }
    p = (struct func_801F1EA0_Struct1 *)base;
    p->unkE8->unk2C->unk30 = p->unkE8->unk2C->unk30;
    p->unkE8->unk2C->unk34 = p->unkE8->unk2C->unk34 + 0.166666672f;
    p->unkE8->unk2C->unk38 = p->unkE8->unk2C->unk38 + (-0.0250000004f);
    p->unkE8->unk2C->unk3C = p->unkE8->unk2C->unk3C + (-0.0508333333f);
    p->unkE8->unk2C->unk40 = p->unkE8->unk2C->unk40 + 0.0149999997f;
    p->unkE8->unk2C->unk44 = p->unkE8->unk2C->unk44 + 0.00166666671f;
    return 8;
}


s32 func_801F1FBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01DA8C5F) != 0) {
        func_8038BD50(13.1999998f, 99.8000031f, 4.0f);
        D_8038BD88((-7.19999981f), 25.7999992f, 1.0f);
        return 0xA;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += 0.216666669f;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += 0.288333327f;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += 0.333333343f;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += (-0.0149999997f);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 += 0.24666667f;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 += 0.00499999989f;
    return 9;
}


s32 func_801F20DC(s32 arg0, s32 arg1) {
    struct func_801E1C38_Struct *p;
    if (func_801C0B8C(0x0208531F) != 0) {
        func_8038BD50((-50.0999985f), (-199.699997f), 29.6f);
        D_8038BD88(42.5f, (-4.19999981f), -24.3f);
        return 0xB;
    }
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk30 = p->unk30;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk34 = p->unk34 + 1.11333334f;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk38 = p->unk38 + (-0.0766666681f);
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk3C = p->unk3C + (-0.26222223f);
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk40 = p->unk40 + 0.0855555534f;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk44 = p->unk44 + 0.115555555f;
    return 0xA;
}


extern s32 D_801FB7F8;

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
        func_8038BD50((-20.2000008f), 1.20000005f, -20.5f);
        D_8038BD88(1.29999995f, 12.6000004f, -2.0f);
        R->unk8->unk24->unk2C->unk4 = -7.0f;
        R->unk8->unk24->unk2C->unk8 = 0.0f;
        R->unk8->unk24->unk2C->unkC = 5.0f;
        R->unk8->unk24->unk2C->unk12 = 0x1000;
        D_801CC470(0, 0x02A8000F, 0, 0, 3.0f);
        R->unk8->unk8->unk24->unk2C->unk4 = (-10.1661997f);
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
        c->f[0] += 0.0512499996f;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[1] += 1.68208337f;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[2] += 0.0212500002f;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[3] += 0.00208333344f;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[4] += (-0.00249999994f);
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[5] += (-0.000833333354f);
    }
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F2458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F26C0.s")


s32 func_801F2C5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03CA757F) != 0) {
        func_8038BD50(15.3000002f, 54.4000015f, -10.0f);
        D_8038BD88(-3.0f, 8.60000038f, 2.1f);
        return 0xF;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += 0.00307692308f;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += (-0.00256410264f);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += 0.0220512822f;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += (-0.000512820494f);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44;
    return 0xE;
}


s32 func_801F2D68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x040F1FA0) != 0) {
        func_8038BD50(-36.0f, (-19.6000004f), 48.3f);
        D_8038BD88((-9.10000038f), 9.60000038f, 7.6f);
        return 0x10;
    }
    D_801BBBF0.unkE8->unk2C->unk30 = D_801BBBF0.unkE8->unk2C->unk30 + (-0.0740740746f);
    D_801BBBF0.unkE8->unk2C->unk34 = D_801BBBF0.unkE8->unk2C->unk34 + 0.0296296291f;
    D_801BBBF0.unkE8->unk2C->unk38 = D_801BBBF0.unkE8->unk2C->unk38 + 0.0496296287f;
    return 0xF;
}


struct func_801F2E3C_Struct2 { u8 pad[0x2C]; struct func_801F2E3C_Struct3 *unk2C; };
struct func_801F2E3C_Struct3 { u8 pad[0x30]; f32 f[6]; };
struct func_801F2E3C_Struct1 { u8 pad[0xE8]; struct func_801F2E3C_Struct2 *unkE8; };
#define Q ((struct func_801F2E3C_Struct1 *)&D_801BBBF0)

s32 func_801F2E3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0422738A) != 0) {
        func_8038BD50(27.6000004f, 45.7999992f, -13.4f);
        D_8038BD88((-9.19999981f), 8.19999981f, 7.8f);
        return 0x11;
    }
    Q->unkE8->unk2C->f[0] += (-0.386842102f);
    Q->unkE8->unk2C->f[1] += 0.997368455f;
    Q->unkE8->unk2C->f[2] += (-0.0763157904f);
    Q->unkE8->unk2C->f[3] += (-0.00263157906f);
    Q->unkE8->unk2C->f[4] += (-0.036842104f);
    Q->unkE8->unk2C->f[5] += 0.00526315812f;
    return 0x10;
}


s32 func_801F2F64(s32 arg0, s32 arg1) {
    struct func_801E7ECC_Struct1 *p;

    if (func_801C0B8C((u64) 0x043440D5) != 0) {
        func_8038BD50((-16.7999992f), (-178.899994f), 54.0f);
        D_8038BD88(21.5f, (-16.8999996f), -16.8f);
        return 0x12;
    }
    p = &D_801BBBF0;
    p->unkE8->unk2C->unk30 = p->unkE8->unk2C->unk30 + (-0.0457142889f);
    p->unkE8->unk2C->unk34 = p->unkE8->unk2C->unk34 + (-0.337142855f);
    p->unkE8->unk2C->unk38 = p->unkE8->unk2C->unk38 + 0.0257142857f;
    return 0x11;
}


#define PP(o) (*(struct func_801E1C38_Struct **)((u8 *)D_801BBBF0.unkE8 + 0x2C))

s32 func_801F3034(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x452C555)) {
        if (func_801C0B8C(0x47149D5)) {
            func_8038BD50((-20.6000004f), 948.0f, 23.5f);
            D_8038BD88(-15.5f, 0.0f, 15.5f);
            return 0x13;
        }
        PP()->unk30 += 0.268333346f;
        PP()->unk34 += 4.07666683f;
        PP()->unk38 += (-0.316666663f);
        PP()->unk3C += (-0.0416666679f);
        PP()->unk40 += 0.435000002f;
        PP()->unk44 += (-0.349999994f);
        return 0x12;
    }
    PP()->unk30 += (-0.49000001f);
    PP()->unk34 += 3.35500002f;
    PP()->unk38 += 0.311666667f;
    PP()->unk3C += 0.0199999996f;
    PP()->unk40 += 0.24666667f;
    PP()->unk44 += (-0.338333338f);
    return 0x12;
}


s32 func_801F321C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x049F1095) != 0) {
        return 0x14;
    }
    D_801BBBF0.unkE8->unk2C->unk30 += 0.148888886f;
    D_801BBBF0.unkE8->unk2C->unk34 += (-8.66111088f);
    D_801BBBF0.unkE8->unk2C->unk38 += (-0.134444445f);
    return 0x13;
}


s32 func_801F32B8(s32 arg0, s32 arg1) {
    f32 temp_fa0;
    f64 temp_fv1;
    f64 z;
    u64 temp_ret;

    if (func_801C0B8C(0x04E54155) != 0) {
        return 0x15;
    }
    temp_ret = func_801C0B2C();
    temp_fv1 = (f64) (f32) ((func_80034C24(temp_ret) / 1000000.0) - 77.53333327770233) / 4.599999904632568;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (f32) ((temp_fv1 * (-20.200000000000003)) + -31.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (f32) ((temp_fv1 * (-1.2000000000000028)) + 19.1);
    z = 1.0 - 1.0;
    temp_fa0 = (f32) ((temp_fv1 * (-1.3000000000000007)) + 15.3);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = temp_fa0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32) ((temp_fv1 * z) + (-14.9));
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32) ((temp_fv1 * (-1.3999999999999986)) + 19.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = temp_fa0;
    return 0x14;
}


#define FP ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801F3420(s32 arg0, s32 arg1) {
    f64 t;
    f32 f;
    u64 r;

    if (func_801C0B8C(0x05392DB5) != 0) {
        return 0x16;
    }
    r = func_801C0B2C();
    t = (f32)(func_80034C24(r) / 1000000.0 - 82.1333331823349) / 5.5;
    FP->unk30 = t * 28.400000000000002 + (-49.7);
    FP->unk34 = t * (-11.3) + 24.5;
    FP->unk38 = t * (-13.299999999999999) + (-7.9);
    FP->unk3C = t * -1.0 + -14.5;
    FP->unk40 = t * (-6.8999999999999995) + 10.7;
    FP->unk44 = t * (-3.700000000000001) + 11.3;
    return 0x15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F35A8.s")


s32 func_801F38C4(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    f64 z;
    struct func_801E1C38_Struct *p;

    if (func_801C0B8C(0x061E0F75) != 0) {
        return 0x18;
    }
    a = (f32)(func_80034C24(func_801C0B2C()) / 1000000.0 - 99.6333331823349) / 3.0;
    z = 1.0 - 1.0;
    b = a * z;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = b + -15.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = b + 8.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = b + 76.8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = b + (-14.8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = a * 10.1 + 14.9;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = b + 13.7;
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

s32 func_801F3A88(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE50(0x64, 0x64, 0x64);
    func_801CCE88(0, 0x64, 0x64, 0x64);
    func_801CCEC8(0, -0x7F, 0x19, 0);
    D_801FB870 = 0.130454034f;
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F3AF8.s")

extern u32 D_801FB874;
extern f32 D_801FD448;
extern f32 D_801FD44C;
extern f32 D_801FD450;

extern void func_801C0D04(s32, s32);

s32 func_801F3EF0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF5AA9F) != 0) {
        D_801FB874 = 0;
        func_801C0D04(1, 0);
        return 4;
    }
    D_801FD448 = D_801FD448;
    D_801FD44C = D_801FD44C;
    D_801FD450 += 0.850000024f;
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
        D_801FD450 += (-2.83333325f);
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
        if ((f32)((d / 1000000.0) - 1.0) > f) {
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

extern f32 D_801FD440;
extern f32 D_801FD444;

s32 func_801F45C8(s32 arg0, s32 arg1) {
    f32 h = 0.5f;
    D_801CCE0C(1);
    D_801FD43C += -2.125f * h;
    D_801FD440 += (-0.833333313f) * h;
    D_801FD444 += 0.666666687f * h;
    func_801CCE88(0, (u32) D_801FD43C & 0xFF, (u32) D_801FD440 & 0xFF, (u32) D_801FD444 & 0xFF);
    if (func_801C0B8C(0x01BC07DF) != 0) {
        D_801FD43C = 255.0f;
        D_801FD440 = 100.0f;
        D_801FD444 = 100.0f;
        return 6;
    }
    return 5;
}



s32 func_801F484C(s32 arg0, s32 arg1) {
    f32 h = 0.5f;
    D_801CCE0C(1);
    D_801FD43C += -4.25f * h;
    D_801FD440 += (-1.66666663f) * h;
    D_801FD444 += 1.33333337f * h;
    func_801CCE88(0, (u32) D_801FD43C & 0xFF, (u32) D_801FD440 & 0xFF, (u32) D_801FD444 & 0xFF);
    if (func_801C0B8C(0x01DA8C5F) != 0) {
        D_801FD43C = 76.5f;
        D_801FD440 = 30.0000019f;
        D_801FD444 = 156.0f;
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file026/801E1BE0/func_801F4AD8.s")

extern f32 D_801FB87C;

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
            if (6.28318548f < t) {
                *p = 0.0f;
            }
            func_801CCE0C(2);
            func_801CCE50(0x32, 0x32, 0x32);
            sp1C = (s8)(s32)(func_80032720(D_801FB87C) * 80.0f);
            sp1B = (s8)(s32)(func_80029280(D_801FB87C) * 80.0f);
            func_801CCE88(0, 0, 0, 0xFE);
            func_801CCEC8(0, 0x14, sp1C, sp1B);
            func_801CCE88(1, 0, 0, 0xFE);
            sp1C = (s8)(s32)(func_80032720(D_801FB87C + 3.14159274f) * 80.0f);
            func_801CCEC8(1, 0x14, sp1C, (s8)(s32)(func_80029280(D_801FB87C + 3.14159274f) * 80.0f));
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


s32 func_801F5528(s32 arg0, s32 arg1) {
    f32 t;
    u64 r;

    if (func_801C0B8C(0x05392DB5) != 0) {
        return 0xB;
    }
    if (func_801C0B8C(0x04ECE275) != 0) {
        r = func_801C0B2C();
        t = (f32) ((((f64) (f32) ((func_80034C24(r) / 1000000.0) - 82.6333331823349) / 5.0) * (-155.0)) + 255.0);
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
        c->unk8 = c->unk8 + 0.181666672f;
        if (func_801C0B8C(0x01BC07DF) != 0) {
            ((struct func_801F61A0_StructA *)D_8038D8D0)->unk4->unk30->unk8 = 0.0f;
            return 3;
        }
    }
    return 2;
}



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
    temp_v0[2] = temp_v0[2] + 0.183333337f;
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

s32 func_801F62B0(s32 arg0, s32 arg1) {
    struct func_801F62B0_Node *temp_v0;

    temp_v0 = ((struct func_801F62B0_Top *)D_8038D8D0)->unk4->unk30;
    temp_v0->unk8 = temp_v0->unk8 + 1.22000003f;
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
        v = (f64)(f32)(func_80034C24(r) / 1000000.0 - 6.1) / 9.999999999999998;
        z = 1.0 - 1.0;
        t = (u32)(f32)(v * z);
        PX[0x48] = t;
        PX[0x49] = t;
        PX[0x4A] = (u32)(f32)(v * 153.0);
        PX[0x4B] = 0xFF;
    }
    return 1;
}


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
        d = (f64)(f32)(func_80034C24(t) / 1000000.0 - 20.099999999999998) / 3.0;
        z = 1.0 - 1.0;
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b48 = (u32)(f32)(d * z);
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b49 = (u32)(f32)(d * z);
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b4A = (u32)(f32)(d * (-151.0) + 153.0);
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b4B = 0xFF;
    }
    return 2;
}


s32 func_801F6904(s32 arg0, s32 arg1) {
    return 4;
}

#define D_8038D8D0 D_8038D8D0__func_801F6914

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
#undef D_8038D8D0


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
        f = (f32)(func_80034C24(t) / 1000000.0 - 77.03333327770233) / 0.5f;
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
    fv = (f64)(f32)((func_80034C24(r) / 1000000.0) - 82.6333331823349) / 5.0;
    v = (u32)(f32)((fv * (-133.0)) + 153.0);
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b48 = v;
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b49 = v;
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b4A = v;
    z = 1.0 - 1.0;
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b4B = (u32)(f32)((fv * z) + 255.0);
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


s32 func_801F6FE8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0B8C(0xC7E3DF) != 0) {
        ((struct func_801F6FE8_Struct1 *) D_8038D8D0)->unk14->unk30->unk4 = 5120.0f;
        return 3;
    }
    temp_ret = func_801C0B2C();
    ((struct func_801F6FE8_Struct1 *) D_8038D8D0)->unk14->unk30->unk8 = (f32) ((((f64) (f32) ((func_80034C24(temp_ret) / 1000000.0) - 9.1) / 3.9999999999999982) * 13.0) + 5.0);
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

#define func_801CFD34 func_801CFD34__func_801F7AB0

extern void func_801CFD34(s32 a);

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
#undef func_801CFD34


s32 func_801F7B54(s32 arg0, s32 arg1) {
    struct func_801EC5B4_Struct2 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -3.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 1.79999995f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(0, 0x01B80017, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}

#define func_801CC470 func_801CC470__func_801F7C1C

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801F7C1C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2F4D60) != 0) {
        func_801CC470(0, 0x01B80017, 0, 0x100, 6.0f);
        return 4;
    }
    return 3;
}
#undef func_801CC470


s32 func_801F7C80(s32 arg0, s32 arg1) {
    if (((s32 *) func_801BF6B0(0))[3] >= 3) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -3.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 1.79999995f;
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

s32 func_801F7D78(s32 arg0, s32 arg1)
{
  u8 *base;
  if (func_801C0B8C(0x0104ECDF) != 0)
  {
    base = (u8 *) (&func_801DAAF0);
    base += 0x24;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unk4 = 6.5f;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unk8 = 0.0f;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unkC = 1.79999995f;
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
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unk4 = 2.9000001f;
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unk8 = 0.0f;
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unkC = 1.79999995f;
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unk12 = 0x1800;
        func_801CC470(0, 0x02A8000D, 0, 0, 3.0f);
        return 0xA;
    }
    return 9;
}


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
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 0x8))) + 0x24))) + 0x2C))) + 0xC)) = (-1.29999995f);
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

#define func_801CC470 func_801CC470__func_801F8078

extern s32 D_801CFD40();
extern void func_801CC470(s32, s32, s32, s32, f32);

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
#undef func_801CC470

struct func_801F8144_S3 { u8 pad[4]; f32 u4; f32 u8; f32 uC; u8 pad2[2]; s16 u12; };
struct func_801F8144_S2 { u8 pad[0x2C]; struct func_801F8144_S3 *u2C; };
struct func_801F8144_S1 { u8 pad[0x24]; struct func_801F8144_S2 *u24; };
struct func_801F8144_S0 { u8 pad[8]; struct func_801F8144_S1 *u8; };

#define P (*(struct func_801F8144_S0 **)&D_801DAB14)

s32 func_801F8144(s32 arg0, s32 arg1) {
    if (D_801FB9C8 == 0) goto c0;
    if (D_801FB9C8 == 1) goto c1;
    if (D_801FB9C8 == 2) goto c2;
    return 0xD;
c0:
    if (func_801C0B8C(0x0226D79F) != 0) {
        P->u8->u24->u2C->u4 = 3.4525001f;
        P->u8->u24->u2C->u8 = 0.0f;
        P->u8->u24->u2C->uC = 5.62270021f;
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

#define P (*(struct func_801F838C_S0 **)&D_801DAB14)
#define Q P->u8_->u24->u2C

s32 func_801F838C(s32 arg0, s32 arg1) {
    struct func_801F838C_V *v;
    f32 a, b;

    if (func_801C0B8C(0x040F1FA0) != 0) {
        Q->u4 = (-11.3999996f);
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


struct func_801F8744_Hdr {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801F8744(s32 arg0, s32 arg1) {
    struct func_801F8744_Hdr *hdr;

    hdr = (struct func_801F8744_Hdr *)func_801BF6B0(0);
    if (hdr->unkC >= 0x14) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = (-14.3000002f);
        D_801DAB14->unk8->unk24->unk2C->unk8 = 19.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 17.7999992f;
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
  (*((struct func_801F88C8_S1 **) (((u8 *) (&func_801DAAF0)) + 0x24)))->unk8->unk24->unk2C->unk8 = ((0.0 - ((f64) D_801FB9CC)) * (((f64) ((f32) ((func_80034C24(t) / 1000000.0) - 82.6333331823349))) / 5.0)) + ((0, (f64) D_801FB9CC));
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

s32 func_801F8B50(s32 arg0, s32 arg1) {
    func_801F8B50_StructD *temp_v0;

    temp_v0 = ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 11.8999996f;
        ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = (-13.1999998f);
        ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(1, 0x02A80004, 0, 0x1100, 1.0f);
        return 2;
    }
    return 1;
}


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
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unkC = 1.79999995f;
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A8000C, 0, 0, 3.0f);
        return 3;
    }
    return 2;
}


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
        (*pp)->unk8->unk8->unk24->unk2C->unkC = (-1.29999995f);
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

#define func_801CC470 func_801CC470__func_801F8E30
#define func_801CC4D8 func_801CC4D8__func_801F8E30

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 t);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 t);
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
#undef func_801CC470
#undef func_801CC4D8


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
        *(f32 *)(CH(p) + 4) = 11.7385998f;
        *(f32 *)(CH(p) + 8) = 0.0f;
        *(f32 *)(CH(p) + 0xC) = (-2.56469989f);
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
    (*root)->unk8->unk8->unk24->unk2C->unk4 = 9.10000038f;
    (*root)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*root)->unk8->unk8->unk24->unk2C->unkC = -8.0f;
    (*root)->unk8->unk8->unk24->unk2C->unk12 = 0x1A22;
    func_801CC470(1, 0x01900001, 0, 0x1100, 1.0f);
    return 0xB;
  }
  return 0xA;
}


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
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = 9.89999962f;
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = (-6.69999981f);
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1B60;
        func_801CC470(1, 0x01B8000B, 0, 0x1000, 1.0f);
        return 0xC;
    }
    return 0xB;
}

#define func_801CC470 func_801CC470__func_801F9354

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

#define FUNC_801F9354_NODE (*(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)D_801DAB14 + 0x8) + 0x8) + 0x24))

s32 func_801F9354(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0422738A) != 0) {
        *(f32 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0x4) = 9.89999962f;
        *(f32 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0x8) = 0.0f;
        *(f32 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0xC) = (-6.69999981f);
        *(s16 *)((u8 *)*(void **)((u8 *)FUNC_801F9354_NODE + 0x2C) + 0x12) = 0x1B60;
        func_801CC470(1, 0x0348008B, 0, 0, 2.0f);
        return 0xD;
    }
    return 0xC;
}
#undef func_801CC470


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

s32 func_801F9510(s32 arg0, s32 arg1) {
    struct func_801F9510_Node *temp_v0;

    temp_v0 = ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -5.5f;
        ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = 1.79999995f;
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
        (*(struct func_801F965C_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unkC = 1.79999995f;
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

#define D_8038C97C D_8038C97C__func_801F9838

extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

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
#undef D_8038C97C



s32 func_801F98C0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}

#define D_8038C97C D_8038C97C__func_801F98F0

extern void D_8038C97C();

s32 func_801F98F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04976F75) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 1);
        return 3;
    }
    return 2;
}
#undef D_8038C97C



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

#define func_8038D28C func_8038D28C__func_801F9B04

extern void func_8038D28C(s32 arg0);
extern s32 D_801FBB08;

s32 func_801F9B04(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x1E1);
        D_801FBB08 = 0;
        return 1;
    }
    return 0;
}
#undef func_8038D28C


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

#define func_8038D28C func_8038D28C__func_801F9BEC

extern void func_8038D28C(s32 arg0);

s32 func_801F9BEC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        func_8038D28C(0x1E4);
        return 3;
    }
    return 2;
}
#undef func_8038D28C


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

#define func_8038D28C func_8038D28C__func_801F9E00

extern void func_8038D28C(s32 arg0);
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
#undef func_8038D28C


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


/* C-owned readonly prefix; private load aliases retain IDO scheduling. */

/* C-owned readonly prefix; private load aliases retain IDO scheduling. */

/* C-owned readonly prefix; private load aliases retain IDO scheduling. */
static const f32 D_801FBCB0__rodata[] = {105.4000015258789f};
static const f32 D_801FBCB4__rodata[] = {-6.099999904632568f};
static const f32 D_801FBCB8__rodata[] = {-14.199999809265137f};
static const f32 D_801FBCBC__rodata[] = {-0.004000000189989805f};
static const f32 D_801FBCC0__rodata[] = {0.08966666460037231f};
static const f32 D_801FBCC4__rodata[] = {0.8180000185966492f};
static const f32 D_801FBCC8__rodata[] = {0.029666665941476822f};
static const f32 D_801FBCCC__rodata[] = {0.004999999888241291f};
static const f32 D_801FBCD0__rodata[] = {0.33899998664855957f};
static const f32 D_801FBCD4__rodata[] = {21.299999237060547f};
static const f32 D_801FBCD8__rodata[] = {33.29999923706055f};
static const f32 D_801FBCDC__rodata[] = {9.800000190734863f};
static const f32 D_801FBCE0__rodata[] = {26.700000762939453f};
static const f32 D_801FBCE4__rodata[] = {-15.800000190734863f};
static const f32 D_801FBCE8__rodata[] = {26.600000381469727f};
static const f32 D_801FBCEC__rodata[] = {-19.799999237060547f};
static const f32 D_801FBCF0__rodata[] = {0.5799999833106995f};
static const f32 D_801FBCF4__rodata[] = {12.300000190734863f};
static const f32 D_801FBCF8__rodata[] = {0.699999988079071f};
static const f32 D_801FBCFC__rodata[] = {-18.100000381469727f};
static const f32 D_801FBD00__rodata[] = {20.899999618530273f};
static const f32 D_801FBD04__rodata[] = {-19.399999618530273f};
static const f32 D_801FBD08__rodata[] = {19.299999237060547f};
static const f32 D_801FBD0C__rodata[] = {21.200000762939453f};
static const f32 D_801FBD10__rodata[] = {33.29999923706055f};
static const f32 D_801FBD14__rodata[] = {6.659999847412109f};
static const f32 D_801FBD18__rodata[] = {12.972999572753906f};
static const f32 D_801FBD1C__rodata[] = {0.6790000200271606f};
static const f32 D_801FBD20__rodata[] = {15.494000434875488f};
static const f32 D_801FBD24__rodata[] = {-0.03844444453716278f};
static const f32 D_801FBD28__rodata[] = {0.012522222474217415f};
static const f32 D_801FBD2C__rodata[] = {-0.02019999921321869f};
static const f32 D_801FBD30__rodata[] = {-0.0019888889510184526f};
static const f32 D_801FBD34__rodata[] = {0.008955555967986584f};
static const f32 D_801FBD38__rodata[] = {0.0008333333535119891f};
static const f32 D_801FBD3C__rodata[] = {-16.399999618530273f};
static const f32 D_801FBD40__rodata[] = {-18.600000381469727f};
static const f32 D_801FBD44__rodata[] = {12.800000190734863f};
static const f32 D_801FBD48__rodata[] = {25.700000762939453f};
static const f32 D_801FBD4C__rodata[] = {20.700000762939453f};
static const f32 D_801FBD50__rodata[] = {25.299999237060547f};
static const f32 D_801FBD54__rodata[] = {-18.600000381469727f};
static const f32 D_801FBD58__rodata[] = {12.300000190734863f};
static const f32 D_801FBD5C__rodata[] = {0.30000001192092896f};
static const f32 D_801FBD60__rodata[] = {-17.299999237060547f};
static const f32 D_801FBD64__rodata[] = {12.699999809265137f};
static const f32 D_801FBD68__rodata[] = {0.20000000298023224f};
static const f32 D_801FBD6C__rodata[] = {33.29999923706055f};
static const f32 D_801FBD70__rodata[] = {24.100000381469727f};
static const f32 D_801FBD74__rodata[] = {13.399999618530273f};
static const f32 D_801FBD78__rodata[] = {11.399999618530273f};
static const f32 D_801FBD7C__rodata[] = {16.899999618530273f};
static const f32 D_801FBD80__rodata[] = {-0.009259259328246117f};
static const f32 D_801FBD84__rodata[] = {71.19999694824219f};
static const f32 D_801FBD88__rodata[] = {14.800000190734863f};
static const f32 D_801FBD8C__rodata[] = {14.399999618530273f};
static const f32 D_801FBD90__rodata[] = {70.5999984741211f};
static const f32 D_801FBD94__rodata[] = {11.300000190734863f};
static const f32 D_801FBD98__rodata[] = {50.29999923706055f};
static const f32 D_801FBD9C__rodata[] = {16.799999237060547f};
static const f32 D_801FBDA0__rodata[] = {17.299999237060547f};
static const f32 D_801FBDA4__rodata[] = {10.600000381469727f};
static const f32 D_801FBDA8__rodata[] = {9.085000038146973f};
static const f32 D_801FBDAC__rodata[] = {-2.299999952316284f};
static const f32 D_801FBDB0__rodata[] = {74.80000305175781f};
static const f32 D_801FBDB4__rodata[] = {26.700000762939453f};
static const f32 D_801FBDB8__rodata[] = {-1.399999976158142f};
static const f32 D_801FBDBC__rodata[] = {41.29999923706055f};
static const f32 D_801FBDC0__rodata[] = {8.399999618530273f};
static const f32 D_801FBDC4__rodata[] = {40.79999923706055f};
static const f32 D_801FBDC8__rodata[] = {11.899999618530273f};
static const f32 D_801FBDCC__rodata[] = {8.699999809265137f};
static const f32 D_801FBDD0__rodata[] = {40.599998474121094f};
static const f32 D_801FBDD4__rodata[] = {17.299999237060547f};
static const f32 D_801FBDD8__rodata[] = {10.600000381469727f};
static const f32 D_801FBDDC__rodata[] = {9.085000038146973f};
static const f32 D_801FBDE0__rodata[] = {-0.20000000298023224f};
static const f32 D_801FBDE4__rodata[] = {17.100000381469727f};
static const f32 D_801FBDE8__rodata[] = {7.699999809265137f};
static const f32 D_801FBDEC__rodata[] = {7.800000190734863f};
static const f32 D_801FBDF0__rodata[] = {22.299999237060547f};
static const f32 D_801FBDF4__rodata[] = {-2.700000047683716f};
static const f32 D_801FBDF8__rodata[] = {70.69999694824219f};
static const f32 D_801FBDFC__rodata[] = {12.100000381469727f};
static const f32 D_801FBE00__rodata[] = {-2.799999952316284f};
static const f32 D_801FBE04__rodata[] = {6.300000190734863f};
static const f32 D_801FBE08__rodata[] = {17.200000762939453f};
static const f32 D_801FBE0C__rodata[] = {6.199999809265137f};
static const f32 D_801FBE10__rodata[] = {33.29999923706055f};
static const f32 D_801FBE14__rodata[] = {31.600000381469727f};
static const f32 D_801FBE18__rodata[] = {13.800000190734863f};
static const f32 D_801FBE1C__rodata[] = {11.300000190734863f};
static const f32 D_801FBE20__rodata[] = {16.799999237060547f};
static const f64 D_801FBE28__rodata[] = {1000000.0};
static const f64 D_801FBE30__rodata[] = {141.12};
static const f64 D_801FBE38__rodata[] = {7.449999999999989};
static const f64 D_801FBE40__rodata[] = {0.3000000000000007};
static const f64 D_801FBE48__rodata[] = {24.7};
static const f64 D_801FBE50__rodata[] = {23.4};
static const f64 D_801FBE58__rodata[] = {1.5999999999999996};
static const f64 D_801FBE60__rodata[] = {7.9};
static const f64 D_801FBE68__rodata[] = {-0.1999999999999993};
static const f64 D_801FBE70__rodata[] = {16.3};
static const f64 D_801FBE78__rodata[] = {0.1999999999999993};
static const f64 D_801FBE80__rodata[] = {10.3};
static const f64 D_801FBE88__rodata[] = {0.10000000000000142};
static const f64 D_801FBE90__rodata[] = {11.7};
static const f64 D_801FBE98__rodata[] = {1000000.0};
static const f64 D_801FBEA0__rodata[] = {127.77000000000001};
static const f64 D_801FBEA8__rodata[] = {13.349999999999994};
static const f64 D_801FBEB0__rodata[] = {-2.299999999999997};
static const f64 D_801FBEB8__rodata[] = {25.4};
static const f64 D_801FBEC0__rodata[] = {0.39999999999999947};
static const f64 D_801FBEC8__rodata[] = {7.8};
static const f64 D_801FBED0__rodata[] = {0.8999999999999986};
static const f64 D_801FBED8__rodata[] = {24.1};
static const f64 D_801FBEE0__rodata[] = {-0.3000000000000007};
static const f64 D_801FBEE8__rodata[] = {15.4};
static const f64 D_801FBEF0__rodata[] = {11.2};
static const f64 D_801FBEF8__rodata[] = {1000000.0};
static const f64 D_801FBF00__rodata[] = {120.27000000000001};
static const f64 D_801FBF08__rodata[] = {0.1999999999999993};
static const f64 D_801FBF10__rodata[] = {24.5};
static const f64 D_801FBF18__rodata[] = {23.2};
static const f64 D_801FBF20__rodata[] = {1.2999999999999998};
static const f64 D_801FBF28__rodata[] = {6.7};
static const f64 D_801FBF30__rodata[] = {-0.1999999999999993};
static const f64 D_801FBF38__rodata[] = {16.5};
static const f64 D_801FBF40__rodata[] = {0.10000000000000142};
static const f64 D_801FBF48__rodata[] = {10.2};
static const f64 D_801FBF50__rodata[] = {11.7};
static const f32 D_801FBF58__rodata[] = {23.200000762939453f};
static const f32 D_801FBF5C__rodata[] = {10.199999809265137f};
static const f32 D_801FBF60__rodata[] = {19.299999237060547f};
static const f32 D_801FBF64__rodata[] = {17.899999618530273f};
static const f32 D_801FBF68__rodata[] = {17.799999237060547f};
static const f32 D_801FBF6C__rodata[] = {16.600000381469727f};
static const f32 D_801FBF70__rodata[] = {15.199999809265137f};
static const f32 D_801FBF74__rodata[] = {19.299999237060547f};
static const f32 D_801FBF78__rodata[] = {17.899999618530273f};
static const f32 D_801FBF7C__rodata[] = {-1.600000023841858f};
static const f32 D_801FBF80__rodata[] = {19.899999618530273f};
static const f32 D_801FBF84__rodata[] = {21.100000381469727f};
static const f32 D_801FBF88__rodata[] = {17.399999618530273f};
static const f32 D_801FBF8C__rodata[] = {26.299999237060547f};
static const f32 D_801FBF90__rodata[] = {16.600000381469727f};
static const f32 D_801FBF94__rodata[] = {15.199999809265137f};
static const f32 D_801FBF98__rodata[] = {16.100000381469727f};
static const f32 D_801FBF9C__rodata[] = {11.899999618530273f};
static const f32 D_801FBFA0__rodata[] = {0.10000000149011612f};
static const f32 D_801FBFA4__rodata[] = {0.20000000298023224f};
static const f32 D_801FBFA8__rodata[] = {0.05000000074505806f};
static const f32 D_801FBFAC__rodata[] = {10.800000190734863f};
static const f32 D_801FBFB0__rodata[] = {11.850000381469727f};
static const f32 D_801FBFB4__rodata[] = {83.66999816894531f};
static const f32 D_801FBFB8__rodata[] = {50.4900016784668f};
static const f32 D_801FBFBC__rodata[] = {14.550000190734863f};
static const f32 D_801FBFC0__rodata[] = {12.880000114440918f};
static const f32 D_801FBFC4__rodata[] = {3.316666603088379f};
static const f32 D_801FBFC8__rodata[] = {8.844444274902344f};
static const f32 D_801FBFCC__rodata[] = {-17.464000701904297f};
static const f32 D_801FBFD0__rodata[] = {14.694000244140625f};
static const f32 D_801FBFD4__rodata[] = {57.99599838256836f};
static const f32 D_801FBFD8__rodata[] = {4.081999778747559f};
static const f32 D_801FBFDC__rodata[] = {79.94000244140625f};
static const f32 D_801FBFE0__rodata[] = {4.869999885559082f};
static const u32 jtbl_801FBFE4__rodata[] = {0x801E53F8, 0x801E542C, 0x801E546C, 0x801E54AC, 0x801E54EC, 0x801E553C, 0x801E557C};
static const f64 D_801FC000__rodata[] = {1000000.0};
static const u32 jtbl_801FC008__rodata[] = {0x801E6988, 0x801E69B0, 0x801E69D8, 0x801E6A00, 0x801E6A28, 0x801E6A50, 0x801E6A78, 0x801E6AA0, 0x801E6AC8, 0x801E6AF0, 0x801E6B18, 0x801E6B40, 0x801E6B68};
static const u32 jtbl_801FC03C__rodata[] = {0x801E6CB8, 0x801E6CE0, 0x801E6D08, 0x801E6D30, 0x801E6D58, 0x801E6D80, 0x801E6DA8, 0x801E6DD0, 0x801E6DF8, 0x801E6E20, 0x801E6E48, 0x801E6E70, 0x801E6E98};
static const f32 D_801FC070__rodata[] = {33.29999923706055f};
static const f32 D_801FC074__rodata[] = {-313.0f};
static const f32 D_801FC078__rodata[] = {175.6999969482422f};
static const f32 D_801FC07C__rodata[] = {18.700000762939453f};
static const f32 D_801FC080__rodata[] = {-29.399999618530273f};
static const f32 D_801FC084__rodata[] = {11.100000381469727f};
static const f32 D_801FC088__rodata[] = {10.899999618530273f};
static const f32 D_801FC08C__rodata[] = {10.699999809265137f};
static const f32 D_801FC090__rodata[] = {-0.013888888992369175f};
static const f32 D_801FC094__rodata[] = {-0.0055555556900799274f};
static const f32 D_801FC098__rodata[] = {0.20444443821907043f};
static const f32 D_801FC09C__rodata[] = {-130.60000610351562f};
static const f32 D_801FC0A0__rodata[] = {8.699999809265137f};
static const f32 D_801FC0A4__rodata[] = {6.599999904632568f};
static const f32 D_801FC0A8__rodata[] = {0.019999999552965164f};
static const f32 D_801FC0AC__rodata[] = {-0.015833333134651184f};
static const f32 D_801FC0B0__rodata[] = {-0.042916666716337204f};
static const f32 D_801FC0B4__rodata[] = {0.0020833334419876337f};
static const f32 D_801FC0B8__rodata[] = {0.004166666883975267f};
static const f32 D_801FC0BC__rodata[] = {89.69999694824219f};
static const f32 D_801FC0C0__rodata[] = {-0.528333306312561f};
static const f32 D_801FC0C4__rodata[] = {0.011666666716337204f};
static const f32 D_801FC0C8__rodata[] = {-0.11999999731779099f};
static const f32 D_801FC0CC__rodata[] = {-0.0024999999441206455f};
static const f32 D_801FC0D0__rodata[] = {0.061666667461395264f};
static const f32 D_801FC0D4__rodata[] = {-0.019999999552965164f};
static const f32 D_801FC0D8__rodata[] = {122.9000015258789f};
static const f32 D_801FC0DC__rodata[] = {12.399999618530273f};
static const f64 D_801FC0E0__rodata[] = {-0.2};
static const f64 D_801FC0E8__rodata[] = {1000000.0};
static const f64 D_801FC0F0__rodata[] = {27.9};
static const f64 D_801FC0F8__rodata[] = {3.4000000000000057};
static const f64 D_801FC100__rodata[] = {139.0};
static const f64 D_801FC108__rodata[] = {27.8};
static const f64 D_801FC110__rodata[] = {0.8999999999999999};
static const f64 D_801FC118__rodata[] = {-1.9};
static const f64 D_801FC120__rodata[] = {0.8000000000000114};
static const f64 D_801FC128__rodata[] = {196.2};
static const f64 D_801FC130__rodata[] = {2.3000000000000007};
static const f64 D_801FC138__rodata[] = {8.7};
static const f32 D_801FC140__rodata[] = {0.06083333492279053f};
static const f32 D_801FC144__rodata[] = {-0.0016666667070239782f};
static const f32 D_801FC148__rodata[] = {-0.0024999999441206455f};
static const f32 D_801FC14C__rodata[] = {12.800000190734863f};
static const f32 D_801FC150__rodata[] = {-196.39999389648438f};
static const f32 D_801FC154__rodata[] = {14.399999618530273f};
static const f32 D_801FC158__rodata[] = {-0.22083333134651184f};
static const f32 D_801FC15C__rodata[] = {-0.034166667610406876f};
static const f32 D_801FC160__rodata[] = {-0.007499999832361937f};
static const f64 D_801FC168__rodata[] = {1000000.0};
static const f64 D_801FC170__rodata[] = {42.9};
static const f64 D_801FC178__rodata[] = {-14.600000000000023};
static const f64 D_801FC180__rodata[] = {-171.7};
static const f64 D_801FC188__rodata[] = {2.4000000000000004};
static const f64 D_801FC190__rodata[] = {11.6};
static const f64 D_801FC198__rodata[] = {-14.7};
static const f32 D_801FC1A0__rodata[] = {16.799999237060547f};
static const f32 D_801FC1A4__rodata[] = {-5.800000190734863f};
static const f64 D_801FC1A8__rodata[] = {-0.2};
static const f64 D_801FC1B0__rodata[] = {1000000.0};
static const f64 D_801FC1B8__rodata[] = {37.9};
static const f64 D_801FC1C0__rodata[] = {12.599999999999994};
static const f64 D_801FC1C8__rodata[] = {138.4};
static const f64 D_801FC1D0__rodata[] = {-4.400000000000002};
static const f64 D_801FC1D8__rodata[] = {25.8};
static const f64 D_801FC1E0__rodata[] = {-0.9};
static const f64 D_801FC1E8__rodata[] = {0.8000000000000114};
static const f64 D_801FC1F0__rodata[] = {196.2};
static const f64 D_801FC1F8__rodata[] = {2.3000000000000007};
static const f64 D_801FC200__rodata[] = {8.7};
static const f32 D_801FC208__rodata[] = {0.06833333522081375f};
static const f32 D_801FC20C__rodata[] = {0.0033333334140479565f};
static const f32 D_801FC210__rodata[] = {0.06583333015441895f};
static const f32 D_801FC214__rodata[] = {0.007499999832361937f};
static const f32 D_801FC218__rodata[] = {15.800000190734863f};
static const f32 D_801FC21C__rodata[] = {73.4000015258789f};
static const f64 D_801FC220__rodata[] = {1000000.0};
static const f64 D_801FC228__rodata[] = {46.4};
static const f64 D_801FC230__rodata[] = {12.900000000000006};
static const f64 D_801FC238__rodata[] = {65.6};
static const f64 D_801FC240__rodata[] = {-1.5999999999999996};
static const f64 D_801FC248__rodata[] = {0.5999999999999979};
static const f64 D_801FC250__rodata[] = {-31.4};
static const f64 D_801FC258__rodata[] = {1.2000000000000028};
static const f64 D_801FC260__rodata[] = {72.3};
static const f64 D_801FC268__rodata[] = {15.9};
static const f64 D_801FC270__rodata[] = {-0.10000000000000142};
static const f64 D_801FC278__rodata[] = {-10.7};
static const f32 D_801FC280__rodata[] = {15.800000190734863f};
static const f32 D_801FC284__rodata[] = {73.4000015258789f};
static const f32 D_801FC288__rodata[] = {10.600000381469727f};
static const f32 D_801FC28C__rodata[] = {-21.200000762939453f};
static const f32 D_801FC290__rodata[] = {63.29999923706055f};
static const f32 D_801FC294__rodata[] = {11.699999809265137f};
static const f32 D_801FC298__rodata[] = {-22.700000762939453f};
static const f32 D_801FC29C__rodata[] = {15.800000190734863f};
static const f32 D_801FC2A0__rodata[] = {-10.800000190734863f};
static const f32 D_801FC2A4__rodata[] = {16.700000762939453f};
static const f32 D_801FC2A8__rodata[] = {12.600000381469727f};
static const f32 D_801FC2AC__rodata[] = {74.30000305175781f};
static const f32 D_801FC2B0__rodata[] = {9.800000190734863f};
static const f32 D_801FC2B4__rodata[] = {33.29999923706055f};
static const f32 D_801FC2B8__rodata[] = {-171.6999969482422f};
static const f32 D_801FC2BC__rodata[] = {11.600000381469727f};
static const f32 D_801FC2C0__rodata[] = {16.799999237060547f};
static const f32 D_801FC2C4__rodata[] = {-0.011666666716337204f};
static const f32 D_801FC2C8__rodata[] = {0.10999999940395355f};
static const f32 D_801FC2CC__rodata[] = {0.004166666883975267f};
static const f32 D_801FC2D0__rodata[] = {-0.010833333246409893f};
static const f32 D_801FC2D4__rodata[] = {0.10916666686534882f};
static const f32 D_801FC2D8__rodata[] = {0.0033333334140479565f};
static const f32 D_801FC2DC__rodata[] = {-33.400001525878906f};
static const f32 D_801FC2E0__rodata[] = {22.299999237060547f};
static const f32 D_801FC2E4__rodata[] = {-196.89999389648438f};
static const f32 D_801FC2E8__rodata[] = {12.399999618530273f};
static const f32 D_801FC2EC__rodata[] = {-0.12166666984558105f};
static const f32 D_801FC2F0__rodata[] = {0.019999999552965164f};
static const f32 D_801FC2F4__rodata[] = {-0.008333333767950535f};
static const f32 D_801FC2F8__rodata[] = {-187.6999969482422f};
static const f32 D_801FC2FC__rodata[] = {14.300000190734863f};
static const f32 D_801FC300__rodata[] = {-195.8000030517578f};
static const f32 D_801FC304__rodata[] = {14.300000190734863f};
static const f32 D_801FC308__rodata[] = {0.0016666667070239782f};
static const f32 D_801FC30C__rodata[] = {-0.024166665971279144f};
static const f32 D_801FC310__rodata[] = {0.0833333358168602f};
static const f32 D_801FC314__rodata[] = {0.0024999999441206455f};
static const f32 D_801FC318__rodata[] = {0.09999999403953552f};
static const f32 D_801FC31C__rodata[] = {-9.300000190734863f};
static const f32 D_801FC320__rodata[] = {-212.3000030517578f};
static const f32 D_801FC324__rodata[] = {16.200000762939453f};
static const f32 D_801FC328__rodata[] = {14.399999618530273f};
static const f32 D_801FC32C__rodata[] = {-165.10000610351562f};
static const f32 D_801FC330__rodata[] = {-194.10000610351562f};
static const f32 D_801FC334__rodata[] = {8.800000190734863f};
static const f32 D_801FC338__rodata[] = {-213.1999969482422f};
static const f32 D_801FC33C__rodata[] = {17.600000381469727f};
static const f32 D_801FC340__rodata[] = {16.100000381469727f};
static const f32 D_801FC344__rodata[] = {17.100000381469727f};
static const f32 D_801FC348__rodata[] = {-10.100000381469727f};
static const f32 D_801FC34C__rodata[] = {4.400000095367432f};
static const f32 D_801FC350__rodata[] = {39.599998474121094f};
static const f32 D_801FC354__rodata[] = {-191.60000610351562f};
static const f32 D_801FC358__rodata[] = {6.900000095367432f};
static const f32 D_801FC35C__rodata[] = {-194.3000030517578f};
static const f32 D_801FC360__rodata[] = {13.899999618530273f};
static const u32 jtbl_801FC364__rodata[] = {0x801E8360, 0x801E8428, 0x801E84E8, 0x801E859C, 0x801E85CC, 0x801E861C, 0x801E8648, 0x801E8698, 0x801E86C4};
static const f32 D_801FC388__rodata[] = {39.599998474121094f};
static const f32 D_801FC38C__rodata[] = {2.222222328186035f};
static const f32 D_801FC390__rodata[] = {-18.200000762939453f};
static const f32 D_801FC394__rodata[] = {7.800000190734863f};
static const f32 D_801FC398__rodata[] = {-16.299999237060547f};
static const f32 D_801FC39C__rodata[] = {-194.3000030517578f};
static const f32 D_801FC3A0__rodata[] = {13.899999618530273f};
static const f32 D_801FC3A4__rodata[] = {-5.300000190734863f};
static const f32 D_801FC3A8__rodata[] = {-192.6999969482422f};
static const f32 D_801FC3AC__rodata[] = {14.100000381469727f};
static const f32 D_801FC3B0__rodata[] = {-194.10000610351562f};
static const f32 D_801FC3B4__rodata[] = {8.800000190734863f};
static const f32 D_801FC3B8__rodata[] = {1.6666667461395264f};
static const f32 D_801FC3BC__rodata[] = {-204.60000610351562f};
static const f32 D_801FC3C0__rodata[] = {17.899999618530273f};
static const f32 D_801FC3C4__rodata[] = {-10.800000190734863f};
static const f32 D_801FC3C8__rodata[] = {16.700000762939453f};
static const f32 D_801FC3CC__rodata[] = {-10.699999809265137f};
static const f32 D_801FC3D0__rodata[] = {17.700000762939453f};
static const f32 D_801FC3D4__rodata[] = {-10.600000381469727f};
static const f32 D_801FC3D8__rodata[] = {1.1111111640930176f};
static const f32 D_801FC3DC__rodata[] = {-8.699999809265137f};
static const f32 D_801FC3E0__rodata[] = {-181.1999969482422f};
static const f32 D_801FC3E4__rodata[] = {17.100000381469727f};
static const f32 D_801FC3E8__rodata[] = {-7.300000190734863f};
static const f32 D_801FC3EC__rodata[] = {-188.10000610351562f};
static const f32 D_801FC3F0__rodata[] = {15.699999809265137f};
static const f32 D_801FC3F4__rodata[] = {15.800000190734863f};
static const f32 D_801FC3F8__rodata[] = {33.29999923706055f};
static const f32 D_801FC3FC__rodata[] = {-193.39999389648438f};
static const f32 D_801FC400__rodata[] = {13.199999809265137f};
static const f32 D_801FC404__rodata[] = {-196.10000610351562f};
static const f32 D_801FC408__rodata[] = {15.300000190734863f};
static const f32 D_801FC40C__rodata[] = {-181.8000030517578f};
static const f32 D_801FC410__rodata[] = {16.600000381469727f};
static const f32 D_801FC414__rodata[] = {-164.8000030517578f};
static const f32 D_801FC418__rodata[] = {-172.8000030517578f};
static const f32 D_801FC41C__rodata[] = {14.699999809265137f};
static const f32 D_801FC420__rodata[] = {-174.60000610351562f};
static const f32 D_801FC424__rodata[] = {-187.3000030517578f};
static const f32 D_801FC428__rodata[] = {16.399999618530273f};
static const f32 D_801FC42C__rodata[] = {-164.89999389648438f};
static const f32 D_801FC430__rodata[] = {14.300000190734863f};
static const f32 D_801FC434__rodata[] = {-180.6999969482422f};
static const f32 D_801FC438__rodata[] = {15.899999618530273f};
static const f32 D_801FC43C__rodata[] = {-164.89999389648438f};
static const f32 D_801FC440__rodata[] = {14.300000190734863f};
static const f32 D_801FC444__rodata[] = {-171.60000610351562f};
static const f32 D_801FC448__rodata[] = {12.199999809265137f};
static const f32 D_801FC44C__rodata[] = {-196.1999969482422f};
static const f32 D_801FC450__rodata[] = {-0.02266666665673256f};
static const f32 D_801FC454__rodata[] = {-0.0026666666381061077f};
static const f32 D_801FC458__rodata[] = {0.14800000190734863f};
static const f32 D_801FC45C__rodata[] = {-0.009333333000540733f};
static const f32 D_801FC460__rodata[] = {-0.0013333333190530539f};
static const f32 D_801FC464__rodata[] = {-0.030666666105389595f};
static const f32 D_801FC468__rodata[] = {-0.46666666865348816f};
static const f32 D_801FC46C__rodata[] = {-0.5285714268684387f};
static const f32 D_801FC470__rodata[] = {-0.6857143044471741f};
static const f32 D_801FC474__rodata[] = {-176.3000030517578f};
static const f32 D_801FC478__rodata[] = {44.599998474121094f};
static const f32 D_801FC47C__rodata[] = {-156.3000030517578f};
static const f32 D_801FC480__rodata[] = {9.399999618530273f};
static const f64 D_801FC488__rodata[] = {1000000.0};
static const f64 D_801FC490__rodata[] = {91.91666674613951};
static const f64 D_801FC498__rodata[] = {0.8000000000000114};
static const f64 D_801FC4A0__rodata[] = {-164.8};
static const f64 D_801FC4A8__rodata[] = {0.1999999999999993};
static const f64 D_801FC4B0__rodata[] = {11.8};
static const f64 D_801FC4B8__rodata[] = {-1.0999999999999996};
static const f64 D_801FC4C0__rodata[] = {-3.7};
static const f64 D_801FC4C8__rodata[] = {-148.3};
static const f64 D_801FC4D0__rodata[] = {15.6};
static const f64 D_801FC4D8__rodata[] = {-7.1};
static const f64 D_801FC4E0__rodata[] = {1000000.0};
static const f64 D_801FC4E8__rodata[] = {93.91666674613951};
static const f64 D_801FC4F0__rodata[] = {7.300000000000011};
static const f64 D_801FC4F8__rodata[] = {-206.4};
static const f64 D_801FC500__rodata[] = {-7.200000000000003};
static const f64 D_801FC508__rodata[] = {41.0};
static const f64 D_801FC510__rodata[] = {-15.6};
static const f64 D_801FC518__rodata[] = {-168.8};
static const f64 D_801FC520__rodata[] = {-0.4};
static const f64 D_801FC528__rodata[] = {0.9};
static const f64 D_801FC530__rodata[] = {-0.2999999999999998};
static const f64 D_801FC538__rodata[] = {-4.3};
static const f64 D_801FC540__rodata[] = {1000000.0};
static const f64 D_801FC548__rodata[] = {95.91666674613951};
static const f64 D_801FC550__rodata[] = {-4.099999999999994};
static const f64 D_801FC558__rodata[] = {-172.0};
static const f64 D_801FC560__rodata[] = {0.40000000000000036};
static const f64 D_801FC568__rodata[] = {-8.4};
static const f64 D_801FC570__rodata[] = {-196.8};
static const f64 D_801FC578__rodata[] = {-5.6};
static const f64 D_801FC580__rodata[] = {1000000.0};
static const f64 D_801FC588__rodata[] = {97.91666674613951};
static const f64 D_801FC590__rodata[] = {15.299999999999983};
static const f64 D_801FC598__rodata[] = {-199.1};
static const f64 D_801FC5A0__rodata[] = {-10.499999999999996};
static const f64 D_801FC5A8__rodata[] = {33.8};
static const f64 D_801FC5B0__rodata[] = {-15.500000000000002};
static const f64 D_801FC5B8__rodata[] = {-1.6};
static const f64 D_801FC5C0__rodata[] = {-0.6999999999999886};
static const f64 D_801FC5C8__rodata[] = {-169.3};
static const f64 D_801FC5D0__rodata[] = {-0.3000000000000007};
static const f64 D_801FC5D8__rodata[] = {-4.6};
static const f64 D_801FC5E0__rodata[] = {1000000.0};
static const f64 D_801FC5E8__rodata[] = {99.91666674613951};
static const f64 D_801FC5F0__rodata[] = {-180.6};
static const f64 D_801FC5F8__rodata[] = {-2.700000000000003};
static const f64 D_801FC600__rodata[] = {19.1};
static const f64 D_801FC608__rodata[] = {-12.8};
static const f64 D_801FC610__rodata[] = {-196.7};
static const f64 D_801FC618__rodata[] = {16.8};
static const f64 D_801FC620__rodata[] = {-5.6};
static const f64 D_801FC628__rodata[] = {1000000.0};
static const f64 D_801FC630__rodata[] = {101.91666674613951};
static const f64 D_801FC638__rodata[] = {-185.7};
static const f64 D_801FC640__rodata[] = {15.8};
static const f64 D_801FC648__rodata[] = {-159.2};
static const f64 D_801FC650__rodata[] = {6.1};
static const f64 D_801FC658__rodata[] = {0.7};
static const f64 D_801FC660__rodata[] = {-6.6};
static const f64 D_801FC668__rodata[] = {1000000.0};
static const f64 D_801FC670__rodata[] = {103.91666674613951};
static const f64 D_801FC678__rodata[] = {3.4000000000000004};
static const f64 D_801FC680__rodata[] = {6.9};
static const f64 D_801FC688__rodata[] = {-13.7};
static const f64 D_801FC690__rodata[] = {-152.5};
static const f64 D_801FC698__rodata[] = {7.4};
static const f64 D_801FC6A0__rodata[] = {-9.6};
