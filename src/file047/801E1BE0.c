#include "common.h"


extern void func_8038BEC8(f32 arg0);
extern void func_8038BE98(f32 arg0);
extern void func_8038BD50(f32 arg0, f32 arg1, s32 arg2);
extern void D_8038BD88(f32 arg0, f32 arg1, s32 arg2);
extern void D_8038C158(void);
extern f32 D_801E3E00;
extern f32 D_801E3E04;
extern f32 D_801E3E08;
extern f32 D_801E3E0C;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0x419CE0) != 0) {
        D_8038C158();
        return 1;
    }
    func_8038BE98(D_801E3E00);
    func_8038BD50(D_801E3E04, D_801E3E08, 0xC2C1CCCD);
    D_8038BD88(-212.0f, D_801E3E0C, 0x42893333);
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E1C78.s")


s32 func_801E1D28(s32 arg0, s32 arg1) {
    return 2;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E1D38(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E1D74.s")


extern void func_801CCE0C(s32 arg0);
extern void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
extern void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801E3C2C;
extern s32 D_801E3C30;

s32 func_801E2280(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0x50, 0x46, 0x5A);
    func_801CCEC8(0, -0x40, -0x40, 0xF);
    func_801CCE88(1, 0x50, 0x46, 0x5A);
    func_801CCEC8(1, 0x40, 0x40, 0xF);
    func_801CCE88(2, 0, 0, 0);
    func_801CCEC8(2, 0, 0x40, -0x20);
    func_801CCE50(0x28, 0x28, 0x28);
    D_801E3C2C = 0;
    D_801E3C30 = 0;
    return 2;
}

extern s32 func_801E1D74();

s32 func_801E2340(s32 arg0, s32 arg1) {
    func_801E1D74();
    return 0x2;
}


struct func_801E2368_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E2368_Struct *func_801BF6B0(s32);
extern s32 D_801E3C4C;
extern s32 D_801E3C50;

s32 func_801E2368(s32 arg0, s32 arg1) {
    if (func_801BF6B0(1)->unkC >= 2) {
        D_801E3C4C = 0;
        D_801E3C50 = 0;
        return 1;
    }
    return 0;
}


extern s32 func_801C1000(s32 arg0, s32 arg1);

s32 func_801E23B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x602160) != 0) {
        func_801C1000(1, 1);
        return 2;
    }
    return 1;
}


s32 func_801E2404(s32 arg0, s32 arg1) {
    f32 t;
    s32 c;

    if (func_801C1088(1, 1, 0x3C) != 0) {
        func_801C10D8(1, 1);
        return 3;
    }
    t = (f32)(u32)func_801C1134(1, 1) / 60.0f;
    c = (u32)(255.0f * t) & 0xFF;
    func_801CCE88(2, (u32)(127.0f * t) & 0xFF, c, c & 0xFF);
    return 2;
}


s32 func_801E25B8(s32 arg0, s32 arg1) {
    return 3;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E25C8(s32 arg0, s32 arg1) {
    func_801C2420(0x466, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E25FC_StructR {
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

struct func_801E25FC_StructQ {
    u8 pad0[0x2C];
    struct func_801E25FC_StructR *unk2C;
};

struct func_801E25FC_StructP {
    struct func_801E25FC_StructQ *unk0;
};

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 func_8038D830[];
extern s32 func_8038D850;
extern struct func_801E25FC_StructP *func_8038D854;
extern u8 D_8017AE98[];

s32 func_801E25FC(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x466, 0);
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


s32 func_801E26F4(s32 arg0, s32 arg1) {
    return 2;
}

extern void D_8038BA70(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];

s32 func_801E2704(s32 arg0, s32 arg1) {
    func_801C2420(0x468, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x465, D_8038DDA8);
    D_8038BA70();
    return 1;
}


extern s32 D_8038D8CC;
extern u8 *D_8038D8D0;
extern u8 D_8038D89C[];
extern u8 D_801E3CB4[];
extern u8 D_801E3CC4[];
extern u8 D_801D9FE8[];
extern u8 D_801DA088[];
extern u8 D_801D9F00[];

typedef struct func_801E2758_Struct2 {
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
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E2758_Struct2;

typedef struct func_801E2758_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_801E2758_Struct2 *unk30;
} func_801E2758_Struct1;

#define OBJ ((func_801E2758_Struct1 **)D_8038D8D0)

s32 func_801E2758(s32 arg0, s32 arg1) {
    if (func_801BF6B0(2)->unkC < 2) {
        return 1;
    }
    func_80005E44(D_8038D8CC, D_801E3CB4);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, D_801E3CC4);
    func_80005E44(D_8038D8CC, D_801E3CC4);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x466, 2);
    func_8012C89C(D_8038D8CC, 1, 0x466, 3);
    func_8012C89C(D_8038D8CC, 2, 0x466, 4);
    func_8012C89C(D_8038D8CC, 3, 0x466, 5);
    func_8012C89C(D_8038D8CC, 4, 0x465, 0);
    OBJ[0]->unk30->unk4 = 0.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = 0.0f;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[0]->unk30->unk30 = (s32)D_801DA088 | 0x40000000;
    OBJ[0]->unk30->unk24 = 0x100;
    OBJ[0]->unk30->unk48 = 0xFF;
    OBJ[0]->unk30->unk49 = 0xFF;
    OBJ[0]->unk30->unk4A = 0xFF;
    OBJ[0]->unk30->unk4B = 0;
    OBJ[0]->unk22 = 1;
    OBJ[1]->unk30->unk4 = 0.0f;
    OBJ[1]->unk30->unk8 = 0.0f;
    OBJ[1]->unk30->unkC = 0.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    OBJ[1]->unk30->unk24 = 0x300;
    OBJ[1]->unk30->unk48 = 0;
    OBJ[1]->unk30->unk49 = 0xFF;
    OBJ[1]->unk30->unk4A = 0xFF;
    OBJ[1]->unk30->unk4B = 0x7F;
    OBJ[1]->unk30->unk4C = 0xFF;
    OBJ[1]->unk30->unk4D = 0xFF;
    OBJ[1]->unk30->unk4E = 0xFF;
    OBJ[1]->unk30->unk4F = 0x7F;
    OBJ[1]->unk22 = 1;
    OBJ[2]->unk30->unk4 = 0.0f;
    OBJ[2]->unk30->unk8 = 190.0f;
    OBJ[2]->unk30->unkC = 0.0f;
    OBJ[2]->unk30->unk12 = 0;
    OBJ[2]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    OBJ[2]->unk30->unk24 = 0x300;
    OBJ[2]->unk30->unk48 = 0;
    OBJ[2]->unk30->unk49 = 0xFF;
    OBJ[2]->unk30->unk4A = 0xFF;
    OBJ[2]->unk30->unk4B = 0x7F;
    OBJ[2]->unk30->unk4C = 0xFF;
    OBJ[2]->unk30->unk4D = 0xFF;
    OBJ[2]->unk30->unk4E = 0xFF;
    OBJ[2]->unk30->unk4F = 0x7F;
    OBJ[2]->unk22 = 1;
    OBJ[3]->unk30->unk4 = 0.0f;
    OBJ[3]->unk30->unk8 = 181.0f;
    OBJ[3]->unk30->unkC = 0.0f;
    OBJ[3]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    OBJ[3]->unk30->unk24 = 0x300;
    OBJ[3]->unk30->unk48 = 0;
    OBJ[3]->unk30->unk49 = 0xFF;
    OBJ[3]->unk30->unk4A = 0xFF;
    OBJ[3]->unk30->unk4B = 0x7F;
    OBJ[3]->unk30->unk4C = 0xFF;
    OBJ[3]->unk30->unk4D = 0xFF;
    OBJ[3]->unk30->unk4E = 0xFF;
    OBJ[3]->unk30->unk4F = 0x7F;
    OBJ[3]->unk22 = 1;
    OBJ[4]->unk30->unk4 = 0.0f;
    OBJ[4]->unk30->unk8 = 0.0f;
    OBJ[4]->unk30->unkC = 100.0f;
    OBJ[4]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk18 = 1.0f;
    OBJ[4]->unk30->unk1C = 1.0f;
    OBJ[4]->unk30->unk20 = 1.0f;
    OBJ[4]->unk30->unk30 = (s32)D_801D9F00 | 0x40000000;
    OBJ[4]->unk30->unk24 = 0x300;
    OBJ[4]->unk30->unk48 = 0;
    OBJ[4]->unk30->unk49 = 0xFF;
    OBJ[4]->unk30->unk4A = 0xFF;
    OBJ[4]->unk30->unk4B = 0;
    OBJ[4]->unk30->unk4C = 0xFF;
    OBJ[4]->unk30->unk4D = 0xFF;
    OBJ[4]->unk30->unk4E = 0xFF;
    OBJ[4]->unk30->unk4F = 0xFF;
    OBJ[4]->unk22 = 0;
    return 2;
}

extern s32 D_801E3CE4;
extern s32 D_801E3CE8;
struct func_801E2D58_StructLeaf {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_801E2D58_StructMid {
    u8 pad[0x30];
    struct func_801E2D58_StructLeaf *unk30;
};
struct func_801E2D58_StructRoot {
    struct func_801E2D58_StructMid *unk0;
};

s32 func_801E2D58() {
    s32 temp_v1;
    s32 var_v0;
    f32 scale;

    if (D_801E3CE4 != 0) {
        var_v0 = D_801E3CE8;
    } else {
        var_v0 = 29 - D_801E3CE8;
    }
    scale = 255.0f;
    scale *= (f32)var_v0 / 30.0f;
    ((struct func_801E2D58_StructRoot *)D_8038D8D0)->unk0->unk30->unk4B = (u32)scale;
    temp_v1 = ++D_801E3CE8;
    if (temp_v1 >= 30) {
        if (D_801E3CE4 != 0) {
            D_801E3CE4 = 0;
        } else {
            D_801E3CE4 = 1;
        }
    }
    D_801E3CE8 = temp_v1 % 30;
}



s32 func_801E2E8C(s32 arg0, s32 arg1) {
    D_801E3CE4 = 1;
    D_801E3CE8 = 0;
    return 3;
}


s32 func_801E2EB0(s32 arg0, s32 arg1) {
    func_801E2D58();
    return 0x3;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E2ED8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

extern s32 D_801E3CFC;
extern s32 D_801E3D00;

struct func_801E2F1C_StructLeaf {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_801E2F1C_StructMid {
    u8 pad[0x30];
    struct func_801E2F1C_StructLeaf *unk30;
};
struct func_801E2F1C_StructRoot {
    u8 pad[4];
    struct func_801E2F1C_StructMid *unk4;
};

s32 func_801E2F1C() {
    s32 temp_v1;
    s32 var_v0;
    f32 scale;

    if (D_801E3CFC != 0) {
        var_v0 = D_801E3D00;
    } else {
        var_v0 = 29 - D_801E3D00;
    }
    scale = 255.0f;
    scale *= (f32)var_v0 / 30.0f;
    ((struct func_801E2F1C_StructRoot *)D_8038D8D0)->unk4->unk30->unk4B = (u32)scale;
    temp_v1 = ++D_801E3D00;
    if (temp_v1 >= 30) {
        if (D_801E3CFC != 0) {
            D_801E3CFC = 0;
        } else {
            D_801E3CFC = 1;
        }
    }
    D_801E3D00 = temp_v1 % 30;
}



s32 func_801E3050(s32 arg0, s32 arg1) {
    D_801E3CFC = 1;
    D_801E3D00 = 0;
    return 2;
}


s32 func_801E3074(s32 arg0, s32 arg1) {
    func_801E2F1C();
    return 0x2;
}



s32 func_801E309C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

extern s32 D_801E3D10;
extern s32 D_801E3D14;

struct func_801E30E0_S3 { u8 pad[8]; f32 unk8; };
struct func_801E30E0_S2 { u8 pad[0x30]; struct func_801E30E0_S3 *unk30; };
struct func_801E30E0_S1 { u8 pad[8]; struct func_801E30E0_S2 *unk8; };

s32 func_801E30E0() {
    s32 v;
    u32 t;
    s32 n;
    f32 q;

    if (D_801E3D10 != 0) {
        v = D_801E3D14;
    } else {
        v = 0x3B - D_801E3D14;
    }
    q = (f32)v / 60.0f;
    t = (u32)(-190.0f * q + 190.0f) & 0xFF;
    ((struct func_801E30E0_S1 *)D_8038D8D0)->unk8->unk30->unk8 = (f32)t;
    D_801E3D14++;
    n = D_801E3D14;
    if (n >= 0x3C) {
        if (D_801E3D10 != 0) {
            D_801E3D10 = 0;
        } else {
            D_801E3D10 = 1;
        }
    }
    D_801E3D14 = n % 60;
}



s32 func_801E3240(s32 arg0, s32 arg1) {
    D_801E3D10 = 1;
    D_801E3D14 = 0;
    return 2;
}


s32 func_801E3264(s32 arg0, s32 arg1) {
    func_801E30E0();
    return 0x2;
}



s32 func_801E328C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

extern s32 D_801E3D24;
extern s32 D_801E3D28;

struct func_801E32D0_StructB {
    u8 pad[0x18];
    f32 a;
    f32 b;
    f32 c;
};
struct func_801E32D0_StructA {
    u8 pad[0x30];
    struct func_801E32D0_StructB *unk30;
};

struct func_801E32D0_StructRoot {
    u8 pad[0xC];
    struct func_801E32D0_StructA *unkC;
};

s32 func_801E32D0(void) {
    f32 t;
    f32 d;
    s32 v1;
    s32 v;

    if (D_801E3D24 != 0) {
        v = D_801E3D28;
    } else {
        v = 0x3B - D_801E3D28;
    }
    d = (f32) v / 60.0f;
    t = 4.0f * d + 1.0f;
    ((struct func_801E32D0_StructRoot *)D_8038D8D0)->unkC->unk30->a = t;
    ((struct func_801E32D0_StructRoot *)D_8038D8D0)->unkC->unk30->b = t;
    ((struct func_801E32D0_StructRoot *)D_8038D8D0)->unkC->unk30->c = t;
    D_801E3D28 += 1;
    v1 = D_801E3D28;
    if (v1 >= 0x3C) {
        if (D_801E3D24 != 0) {
            D_801E3D24 = 0;
        } else {
            D_801E3D24 = 1;
        }
    }
    D_801E3D28 = v1 % 60;
}



s32 func_801E33B4(s32 arg0, s32 arg1) {
    D_801E3D24 = 1;
    D_801E3D28 = 0;
    return 2;
}


s32 func_801E33D8(s32 arg0, s32 arg1) {
    func_801E32D0();
    return 0x2;
}



s32 func_801E3400(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern void func_8038D28C(s32 arg0);
extern s32 D_801E3D38;
extern s32 D_801E3D3C;
extern s32 D_801E3D40;

s32 func_801E3444(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x602160) != 0) {
        D_801E3D38 = 0;
        D_801E3D3C = 0;
        D_801E3D40 = 0;
        *(*(u8 **)(*(u8 **)(D_8038D8D0 + 0x10) + 0x30) + 0x4B) = 0;
        *(*(u8 **)(D_8038D8D0 + 0x10) + 0x22) = 1;
        func_801C1000(3, 9);
        func_8038D28C(0x261);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E34D8.s")


s32 func_801E37D4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E37E4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E37F4(s32 arg0, s32 arg1) {
    return 5;
}


extern void func_801CC318(void);
extern void func_801CC458(s32 arg0, void *arg1);
extern void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];

s32 func_801E3804(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    return 1;
}


extern s32 func_80005670(s32, void *);
extern s32 func_801CC530();
extern s32 func_801DAAF0[];

s32 func_801E3860(s32 arg0, s32 arg1) {
    func_80005670(((s32 *)func_801DAAF0)[9], func_801DAC30 + 0x2C);
    func_801CC530();
    return 2;
}


extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

typedef struct func_801E38A0_StructS {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E38A0_StructS;

typedef struct func_801E38A0_StructR {
    u8 pad0[0x2C];
    func_801E38A0_StructS *unk2C;
} func_801E38A0_StructR;

typedef struct func_801E38A0_StructQ {
    u8 pad0[0x24];
    func_801E38A0_StructR *unk24;
} func_801E38A0_StructQ;

typedef struct func_801E38A0_StructP {
    u8 pad0[0x8];
    func_801E38A0_StructQ *unk8;
} func_801E38A0_StructP;

extern func_801E38A0_StructP *D_801DAB14;

s32 func_801E38A0(s32 arg0, s32 arg1) {
    func_801E38A0_StructR *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 100.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x03480062, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}



s32 func_801E395C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        func_801CC470(0, 0x03480062, 0, 0x100, 6.0f);
        return 4;
    }
    return 3;
}


extern void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E39C0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6F63A0) != 0) {
        func_801CC4D8(0, 0x03480051, 0, 0, 10.0f);
        return 5;
    }
    return 4;
}


extern s32 func_801CE274(void);

s32 func_801E3A24(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480051, 0, 0, 8.0f);
        return 6;
    }
    return 5;
}


s32 func_801E3A7C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3A8C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3A9C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3AAC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3ABC(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3ACC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x493E0) != 0) {
        return 1;
    }
    return 0;
}


s32 func_801E3B08(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3B18(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 func_801C0B8C(u64 time);
extern void func_8038C97C();
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E3B28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8DE820) != 0) {
        D_80089354 = 0;
        func_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x3C, 0, 1);
        return 4;
    }
    return 3;
}


extern u8 D_801BBD54;

s32 func_801E3B9C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    return 5;
}


s32 func_801E3BC4(s32 arg0, s32 arg1) {
    return 5;
}

