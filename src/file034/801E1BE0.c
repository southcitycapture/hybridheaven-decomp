#include "common.h"

void func_8038BD50(f32, f32, f32);
void D_8038BD88(f32, f32, f32);
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);

extern f32 D_801E93C0;
extern f32 D_801E93C4;
extern f32 D_801E93C8;
extern f32 D_801E93CC;
extern void func_8038C53C(s32);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BD50(D_801E93C0, D_801E93C4, 256.1f);
        D_8038BD88(D_801E93C8, D_801E93CC, 281.9f);
        func_8038C53C(1);
        return 1;
    }
    return 0;
}


extern f32 D_801E93D0;
extern f32 D_801E93D4;
extern f32 D_801E93D8;
extern f32 D_801E93DC;


s32 func_801E1C5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        func_8038BD50(D_801E93D0, D_801E93D4, 275.0f);
        D_8038BD88(D_801E93D8, D_801E93DC, 287.3f);
        return 2;
    }
    return 1;
}


extern f32 D_801E93E0;
extern f32 D_801E93E4;
extern f32 D_801E93E8;
extern f32 D_801E93EC;

s32 func_801E1CD4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_8038BD50(D_801E93E0, D_801E93E4, 271.1f);
        D_8038BD88(D_801E93E8, D_801E93EC, 287.3f);
        return 3;
    }
    return 2;
}


extern f32 D_801E93F0;
extern f32 D_801E93F4;
extern f32 D_801E93F8;
extern f32 D_801E93FC;

s32 func_801E1D4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        func_8038BD50(D_801E93F0, D_801E93F4, 256.1f);
        D_8038BD88(D_801E93F8, D_801E93FC, 281.9f);
        return 4;
    }
    return 3;
}


s32 func_801E1DC4(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E1DD4(s32 arg0, s32 arg1) {
    return 6;
}


extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C(void);

s32 func_801E1DE4(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}


extern f32 D_801E9400;
extern f32 D_801E9404;
extern f32 D_801E9408;

s32 func_801E1E38(s32 arg0, s32 arg1) {
    func_8038BD50(-72.5f, D_801E9400, 294.3f);
    D_8038BD88(D_801E9404, D_801E9408, 318.7f);
    return 8;
}


typedef struct func_801E1E94_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E1E94_Struct;

s32 func_801E1E94(s32 arg0, s32 arg1) {
    if (((func_801E1E94_Struct *)func_801BF6B0(7))->unkC < 8 || func_801C1B1C() == 0) {
        return 8;
    }
    return 9;
}



s32 func_801E1EE8(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


s32 func_801E1F3C(s32 arg0, s32 arg1) {
    return 11;
}


typedef struct func_801E1F4C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E1F4C_Struct;

s32 func_801E1F4C(s32 arg0, s32 arg1) {
    if ((((func_801E1F4C_Struct *) func_801BF6B0(7))->unkC < 0x18) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}


typedef struct func_801E1FA0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E1FA0_Struct;

s32 func_801E1FA0(s32 arg0, s32 arg1) {
    func_801E1FA0_Struct *temp;

    temp = func_801BF6B0(7);
    if (temp->unkC < 0x23 || func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}

/* hh-block asm/nonmatchings/file034/801E1BE0/_mrg_keep_text_func_801E1FF4.s {"functions":["func_801E1FF4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/_mrg_keep_text_func_801E1FF4.s")

extern u8 func_801DAAF0[];

extern void *func_801CF40C(void);
extern void func_8038BDC0(f32, f32, s32);
extern void D_8038BE10(f32, f32, s32);

struct func_801E20A0_StructC {
    u8 pad0[4];
    f32 unk4;
};

struct func_801E20A0_StructB {
    u8 pad0[0x2C];
    struct func_801E20A0_StructC *unk2C;
};

struct func_801E20A0_StructA {
    u8 pad0[8];
    struct func_801E20A0_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E20A0_StructB *unk24;
};

struct func_801E20A0_Struct {
    f32 unk0;
    f32 unk4;
    s32 unk8;
};

s32 func_801E20A0(s32 arg0, s32 arg1) {
    struct func_801E20A0_Struct sp1C;
    struct func_801E20A0_Struct *temp_v0;

    if (((struct func_801E20A0_StructA *) *(struct func_801E20A0_StructA **)(func_801DAAF0 + 0x24))->unk8->unk8->unk24->unk2C->unk4 < -230.0f) {
        return 0xF;
    }
    temp_v0 = func_801CF40C();
    sp1C = *temp_v0;
    func_8038BDC0(sp1C.unk0, sp1C.unk4, sp1C.unk8);
    D_8038BE10(sp1C.unk0, sp1C.unk4, sp1C.unk8);
    return 0xE;
}


typedef struct func_801E2144_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2144_Struct;

s32 func_801E2144(s32 arg0, s32 arg1) {
    if ((((func_801E2144_Struct *)func_801BF6B0(7))->unkC < 0x28) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}


s32 func_801E2198(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 0x2B) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}


extern f32 D_801E942C;
extern f32 D_801E9430;
extern f32 D_801E9434;
extern f32 D_801E9438;

s32 func_801E21EC(s32 arg0, s32 arg1) {
    func_8038BD50(D_801E942C, D_801E9430, 473.6f);
    D_8038BD88(D_801E9434, D_801E9438, 499.6f);
    return 0x12;
}



typedef struct func_801E2248_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2248_Struct;

s32 func_801E2248(s32 arg0, s32 arg1) {
    if (((func_801E2248_Struct *)func_801BF6B0(7))->unkC < 0x30 || func_801C1B1C() == 0) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801E229C(s32 arg0, s32 arg1) {
    return 20;
}


s32 func_801E22AC(s32 arg0, s32 arg1) {
    return 21;
}


extern void func_8038BED4(void);
extern f32 D_801E943C;
extern f32 D_801E9440;
extern f32 D_801E9444;
extern f32 D_801E9448;

s32 func_801E22BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x16E360) != 0) {
        func_8038BD50(D_801E943C, D_801E9440, 281.4f);
        D_8038BD88(D_801E9444, D_801E9448, 295.2f);
        func_8038BED4();
        return 0x16;
    }
    return 0x15;
}


extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E944C;
extern f32 D_801E9450;
extern f32 D_801E9454;
extern f32 D_801E9458;
extern f32 D_801E945C;
extern f32 D_801E9460;
extern f32 D_801E9464;
extern f32 D_801E9468;
extern f32 D_801E946C;

s32 func_801E233C(s32 arg0, s32 arg1) {
    f32 fa;
    f32 fb;

    fa = D_801E944C;
    fb = D_801E9450;
    if (func_8038BEF8(0.0f, 1.5f, -65.8f, fa, D_801E9454, D_801E9458, fa, D_801E945C, D_801E9460, fb, D_801E9464, D_801E9468, fb, D_801E946C) != 0) {
        return 0x17;
    }
    return 0x16;
}



s32 func_801E23F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_8038BED4();
        return 0x18;
    }
    return 0x17;
}


extern f32 D_801E9470;
extern f32 D_801E9474;
extern f32 D_801E9478;
extern f32 D_801E947C;
extern f32 D_801E9480;
extern f32 D_801E9484;
extern f32 D_801E9488;
extern f32 D_801E948C;

s32 func_801E2440(s32 arg0, s32 arg1) {
    f32 temp;
    f32 temp2;

    temp = D_801E9470;
    temp2 = D_801E9474;
    if (func_8038BEF8(0.0f, 1.5f, -71.2f, temp, D_801E9478, -73.0f, temp, D_801E947C, D_801E9480, temp2, D_801E9484, D_801E9488, temp2, D_801E948C) != 0) {
        return 0x19;
    }
    return 0x18;
}



s32 func_801E24F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7270E0) != 0) {
        func_8038BED4();
        return 0x1A;
    }
    return 0x19;
}


extern f32 D_801E9490;
extern f32 D_801E9494;
extern f32 D_801E9498;
extern f32 D_801E949C;
extern f32 D_801E94A0;
extern f32 D_801E94A4;
extern f32 D_801E94A8;
extern f32 D_801E94AC;
extern f32 D_801E94B0;
extern f32 D_801E94B4;
extern f32 D_801E94B8;
extern f32 D_801E94BC;
extern f32 D_801E94C0;

s32 func_801E2544(s32 arg0, s32 arg1) {
    f32 v0;
    f32 v1;

    v0 = D_801E9490;
    v1 = D_801E9494;
    if (func_8038BEF8(0.0f, 0.5f, -73.0f, v0, D_801E9498, D_801E949C, v0, D_801E94A0, D_801E94A4, v1, D_801E94A8, D_801E94AC, v1, D_801E94B0) != 0) {
        func_8038BD50(D_801E94B4, D_801E94B8, 345.8f);
        D_8038BD88(D_801E94BC, D_801E94C0, 298.6f);
        return 0x1B;
    }
    return 0x1A;
}


extern f32 D_801E94C4;
extern f32 D_801E94C8;
extern f32 D_801E94CC;
extern f32 D_801E94D0;

s32 func_801E2634(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xCF8500) != 0) {
        func_8038BD50(D_801E94C4, D_801E94C8, 294.1f);
        D_8038BD88(D_801E94CC, D_801E94D0, 303.2f);
        return 0x1C;
    }
    return 0x1B;
}


extern f32 D_801E94D4;
extern f32 D_801E94D8;
extern f32 D_801E94DC;

s32 func_801E26AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x11BD040) != 0) {
        func_8038BD50(D_801E94D4, -466.0f, 364.0f);
        D_8038BD88(D_801E94D8, D_801E94DC, 295.8f);
        return 0x1D;
    }
    return 0x1C;
}


s32 func_801E2720(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x13A54C0) != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E275C(s32 arg0, s32 arg1) {
    return 31;
}


s32 func_801E276C(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E277C(s32 arg0, s32 arg1) {
    return 32;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E278C(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E27C8(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0x82, 0x64, 0x56);
    func_801CCEC8(0, 0x20, 0x40, 0x20);
    func_801CCE88(1, 0xC8, 0x8B, 0x64);
    func_801CCEC8(1, -0x20, -0x40, -0x20);
    func_801CCE50(0x64, 0x5A, 0x28);
    return 2;
}


s32 func_801E2854(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2864(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2874(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2884(s32 arg0, s32 arg1) {
    return 5;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E2894(s32 arg0, s32 arg1) {
    func_801C2420(0x288, func_8038DD54 + 0x14);
    return 1;
}


typedef struct func_801E28C8_Q {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    void *unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E28C8_Q;

typedef struct func_801E28C8_P {
    u8 pad0[0x2C];
    func_801E28C8_Q *unk2C;
} func_801E28C8_P;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 D_8017AF38[];
extern u8 D_8038D840[];
extern s32 D_8038D850;
extern func_801E28C8_P **D_8038D854;

s32 func_801E28C8(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D850, D_8038D840);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x288, 0);
    (*D_8038D854)->unk2C->unk4 = 0.0f;
    (*D_8038D854)->unk2C->unk8 = 0.0f;
    (*D_8038D854)->unk2C->unkC = 0.0f;
    (*D_8038D854)->unk2C->unk18 = 1.0f;
    (*D_8038D854)->unk2C->unk1C = 1.0f;
    (*D_8038D854)->unk2C->unk20 = 1.0f;
    (*D_8038D854)->unk2C->unk12 = 0;
    (*D_8038D854)->unk2C->unk24 = 0x13;
    (*D_8038D854)->unk2C->unk30 = D_8017AF38;
    (*D_8038D854)->unk2C->unk4C = 0;
    (*D_8038D854)->unk2C->unk4D = 0;
    (*D_8038D854)->unk2C->unk4E = 0;
    (*D_8038D854)->unk2C->unk4F = 0xAD;
    return 2;
}


s32 func_801E2A18(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2A28(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2A38(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2A48(s32 arg0, s32 arg1) {
    return 5;
}


extern void D_8038BA70(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];

s32 func_801E2A58(s32 arg0, s32 arg1) {
    func_801C2420(0x294, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x298, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x295, D_8038DDC0);
    D_8038BA70();
    return 1;
}


typedef struct func_801E2AC4_Q {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E2AC4_Q;
typedef struct func_801E2AC4_O {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E2AC4_Q *unk30;
} func_801E2AC4_O;
typedef struct func_801E2AC4_Ret {
    u8 pad0[0xC];
    s32 unkC;
} func_801E2AC4_Ret;

struct func_801E397C_Struct_A;
extern struct func_801E397C_Struct_A *D_8038D8D0;
extern s32 D_8038D8CC;
extern u8 D_8038D8BC[];
extern u8 D_8038D88C[];
extern u8 D_8038D89C[];
extern u8 D_8017B710[];
extern u8 D_8017B148[];
extern u8 D_801E8BC8[];
extern f32 D_801E94E0;
extern f32 D_801E94E4;
extern f32 D_801E94E8;
extern f32 D_801E94EC;
extern f32 D_801E94F0;
extern f32 D_801E94F4;
extern f32 D_801E94F8;

#define OBJ(i) ((*lst)[i])
#define Q(i) (OBJ(i)->unk30)
#define COMMON(i)               \
    Q(i)->unk18 = 1.0f;         \
    Q(i)->unk1C = 1.0f;         \
    Q(i)->unk20 = 1.0f;         \
    Q(i)->unk24 = 0x13;         \
    Q(i)->unk30 = (s32)D_8017AF38; \
    Q(i)->unk4C = 0;            \
    Q(i)->unk4D = 0;            \
    Q(i)->unk4E = 0;            \
    Q(i)->unk4F = 0xAD;
#define TAIL(i, sym)                 \
    Q(i)->unk30 = (s32)sym | 0x40000000; \
    Q(i)->unk18 = 1.0f;              \
    Q(i)->unk1C = 1.0f;              \
    Q(i)->unk20 = 1.0f;              \
    Q(i)->unk4 = 0.0f;               \
    Q(i)->unk8 = 0.0f;               \
    Q(i)->unkC = 0.0f;               \
    OBJ(i)->unk22 = 0;

s32 func_801E2AC4(s32 arg0, s32 arg1) {
    s32 i;
    func_801E2AC4_O ***lst;
    f32 e0;
    f32 e4;
    f32 e8;

    if (((func_801E2AC4_Ret *)func_801BF6B0(2))->unkC <= 0) {
        return 1;
    }
    func_80005E44(D_8038D8CC, D_8038D8BC);
    for (i = 0; i < 5; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    *(s32 *)(D_8038D8BC + 4) = 0x80000B00;
    for (i = 0; i != 2; i++) {
        func_80005E44(D_8038D8CC, D_8038D8BC);
    }
    *(s32 *)(D_8038D89C + 4) = 0x80000A00;
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, D_8038D8BC);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x294, 0);
    func_8012C89C(D_8038D8CC, 1, 0x298, 2);
    func_8012C89C(D_8038D8CC, 2, 0x298, 3);
    func_8012C89C(D_8038D8CC, 3, 0x298, 0);
    func_8012C89C(D_8038D8CC, 4, 0x298, 1);
    func_8012C89C(D_8038D8CC, 5, 0x295, 0);
    func_8012C89C(D_8038D8CC, 6, 0x288, 8);
    func_8012C89C(D_8038D8CC, 7, 0x288, 3);
    func_8012C89C(D_8038D8CC, 8, 0x288, 6);
    func_8012C89C(D_8038D8CC, 9, 0x288, 7);
    lst = (func_801E2AC4_O ***)&D_8038D8D0;
    e0 = D_801E94E0;
    e4 = D_801E94E4;
    e8 = D_801E94E8;

    Q(0)->unk4 = -42.0f;
    Q(0)->unk8 = -470.0f;
    Q(0)->unkC = 272.0f;
    Q(0)->unk12 = 0;
    COMMON(0)

    Q(1)->unk4 = e0;
    Q(1)->unk8 = -470.0f;
    Q(1)->unkC = e4;
    Q(1)->unk12 = 0xC00;
    COMMON(1)

    Q(2)->unk4 = e0;
    Q(2)->unk8 = -470.0f;
    Q(2)->unkC = e4;
    Q(2)->unk12 = 0xC00;
    COMMON(2)

    Q(3)->unk4 = e8;
    Q(3)->unk8 = -470.0f;
    Q(3)->unkC = D_801E94EC;
    Q(3)->unk12 = 0xC00;
    COMMON(3)

    Q(4)->unk4 = e8;
    Q(4)->unk8 = -470.0f;
    Q(4)->unkC = D_801E94F0;
    Q(4)->unk12 = 0xC00;
    COMMON(4)

    Q(5)->unk4 = D_801E94F4;
    Q(5)->unk8 = -470.0f;
    Q(5)->unkC = D_801E94F8;
    Q(5)->unk12 = 0xC00;
    COMMON(5)

    TAIL(6, D_801E8BC8)
    TAIL(7, D_801E8BC8)
    TAIL(8, D_8017B710)
    TAIL(9, D_8017B148)
    return 2;
}


s32 func_801E33F4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3404(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3414(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3424(s32 arg0, s32 arg1) {
    return 5;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E3434(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

void func_801C0D04(s32 arg0, s32 arg1);


s32 func_801E3478(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801C0D04(3, 1);
        return 2;
    }
    return 1;
}

typedef struct func_801E397C_Struct_C {
    s32 pad0;
    f32 unk4;
    s32 pad8;
    f32 unkC;
} func_801E397C_Struct_C;
typedef struct func_801E397C_Struct_B {
    u8 pad0[0x30];
    func_801E397C_Struct_C *unk30;
} func_801E397C_Struct_B;
typedef struct func_801E397C_Struct_A {
    u8 pad0[0x8];
    func_801E397C_Struct_B *unk8;
} func_801E397C_Struct_A;
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();
extern void func_801C0EB0(s32, s32);

typedef struct func_801E34C4_Struct_C {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_801E34C4_Struct_C;

typedef struct func_801E34C4_Struct_B {
    u8 pad0[0x30];
    func_801E34C4_Struct_C *unk30;
} func_801E34C4_Struct_B;

typedef struct func_801E34C4_Struct_A {
    u8 pad0[0x4];
    func_801E34C4_Struct_B *unk4;
} func_801E34C4_Struct_A;

extern f64 D_801E9500;
extern f32 D_801E9508;
extern f64 D_801E9510;

s32 func_801E34C4(s32 arg0, s32 arg1) {
    f32 temp_fv1;

    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0EB0(3, 1);
        return 3;
    }
    temp_fv1 = (f32) ((func_80034C24(func_801C0F18(3, 1)) / D_801E9500) / 0.5);
    ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unk4 = (f32) ((10.5f * temp_fv1) + D_801E9508);
    ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unkC = (f32) (((f64) temp_fv1 * 10.5) + D_801E9510);
    return 2;
}


s32 func_801E35AC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E35BC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E35CC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E35DC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E35EC(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E35FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_801C0D04(3, 1);
        return 9;
    }
    return 8;
}

#define D_801E9518 D_801E9518__func_801E3648
#define D_801E9520 D_801E9520__func_801E3648
#define D_801E9524 D_801E9524__func_801E3648
#define D_801E9528 D_801E9528__func_801E3648
#define D_801E952C D_801E952C__func_801E3648
#define func_801E34C4_Struct_A func_801E34C4_Struct_A__func_801E3648
#define func_801E34C4_Struct_B func_801E34C4_Struct_B__func_801E3648
#define func_801E34C4_Struct_C func_801E34C4_Struct_C__func_801E3648
typedef struct func_801E34C4_Struct_C {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_801E34C4_Struct_C;
typedef struct func_801E34C4_Struct_B {
    u8 pad0[0x30];
    func_801E34C4_Struct_C *unk30;
} func_801E34C4_Struct_B;
typedef struct func_801E34C4_Struct_A {
    u8 pad0[0x4];
    func_801E34C4_Struct_B *unk4;
} func_801E34C4_Struct_A;

extern f64 D_801E9518;
extern f32 D_801E9520;
extern f32 D_801E9524;
extern f32 D_801E9528;
extern f32 D_801E952C;

s32 func_801E3648(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    u64 temp_ret;

    temp_ret = func_801C0F18(3, 1);
    temp_fv1 = -10.5f;
    temp_fv1 *= (f32) ((func_80034C24(temp_ret) / D_801E9518) / 0.5);
    ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unk4 = temp_fv1 + D_801E9520;
    ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unkC = temp_fv1 + D_801E9524;
    if (func_801C0B8C(0xBEBC20) != 0) {
        ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unk4 = D_801E9528;
        ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unkC = D_801E952C;
        func_801C0EB0(3, 1);
        return 0xA;
    }
    return 9;
}
#undef D_801E9518
#undef D_801E9520
#undef D_801E9524
#undef D_801E9528
#undef D_801E952C
#undef func_801E34C4_Struct_A
#undef func_801E34C4_Struct_B
#undef func_801E34C4_Struct_C


s32 func_801E3750(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E3760(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



s32 func_801E37A4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801C0D04(3, 2);
        return 2;
    }
    return 1;
}


typedef struct func_801E37F0_Struct_C {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
} func_801E37F0_Struct_C;
typedef struct func_801E37F0_Struct_B {
    u8 pad0[0x30];
    func_801E37F0_Struct_C *unk30;
} func_801E37F0_Struct_B;
typedef struct func_801E37F0_Struct_A {
    u8 pad0[0x8];
    func_801E37F0_Struct_B *unk8;
} func_801E37F0_Struct_A;

extern f64 D_801E9530;
extern f32 D_801E9538;
extern f64 D_801E9540;

s32 func_801E37F0(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    u64 temp_ret;

    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0EB0(3, 2);
        return 3;
    }
    temp_ret = func_801C0F18(3, 2);
    temp_fv1 = (f32) ((func_80034C24(temp_ret) / D_801E9530) / 0.5);
    (*(func_801E37F0_Struct_A **)&D_8038D8D0)->unk8->unk30->unk4 = (f32) ((-10.5f * temp_fv1) + D_801E9538);
    (*(func_801E37F0_Struct_A **)&D_8038D8D0)->unk8->unk30->unkC = (f32) (((f64) temp_fv1 * -10.5) + D_801E9540);
    return 2;
}


s32 func_801E38D8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E38E8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E38F8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3908(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3918(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3928(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_801C0D04(3, 2);
        func_8038D28C(0x1B0);
        return 9;
    }
    return 8;
}





extern f64 D_801E9548;
extern f32 D_801E9550;
extern f32 D_801E9554;
extern f32 D_801E9558;

s32 func_801E397C(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    u64 temp_ret;

    temp_ret = func_801C0F18(3, 2);
    temp_fv1 = (f32) ((func_80034C24(temp_ret) / D_801E9548) / 0.5);
    D_8038D8D0->unk8->unk30->unk4 = (f32) ((10.5f * temp_fv1) + D_801E9550);
    D_8038D8D0->unk8->unk30->unkC = (f32) ((10.0f * temp_fv1) + 280.0f);
    if (func_801C0B8C(0xBEBC20) != 0) {
        D_8038D8D0->unk8->unk30->unk4 = D_801E9554;
        D_8038D8D0->unk8->unk30->unkC = D_801E9558;
        func_801C0EB0(3, 2);
        return 0xA;
    }
    return 9;
}


s32 func_801E3A90(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E3AA0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3AE4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801C0D04(3, 3);
        func_8038D28C(0x1AC);
        return 2;
    }
    return 1;
}


typedef struct func_801E3B38_Struct {
    u8 pad[0xC];
    func_801E397C_Struct_B *unkC;
} func_801E3B38_Struct;

extern f64 D_801E9560;
extern f32 D_801E9568;
extern f32 D_801E956C;
extern f64 D_801E9570;
extern f64 D_801E9578;

s32 func_801E3B38(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    u64 temp_ret;

    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0EB0(3, 3);
        return 3;
    }
    temp_ret = func_801C0F18(3, 3);
    temp_fv1 = (f32)((func_80034C24(temp_ret) / D_801E9560) / 1.0f);
    ((func_801E3B38_Struct *)D_8038D8D0)->unkC->unk30->unk4 = D_801E9568 * temp_fv1 + D_801E956C;
    ((func_801E3B38_Struct *)D_8038D8D0)->unkC->unk30->unkC = (f64)temp_fv1 * D_801E9570 + D_801E9578;
    return 2;
}


s32 func_801E3C1C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3C2C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3C3C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3C4C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3C5C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3C6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xBEBC20) != 0) {
        func_801C0D04(3, 3);
        return 9;
    }
    return 8;
}


typedef struct func_801E3CB8_Struct {
    u8 pad0[0xC];
    func_801E397C_Struct_B *unkC;
} func_801E3CB8_Struct;

extern f64 D_801E9580;
extern f32 D_801E9588;
extern f32 D_801E958C;
extern f64 D_801E9590;
extern f64 D_801E9598;
extern f32 D_801E95A0;
extern f32 D_801E95A4;

s32 func_801E3CB8(s32 arg0, s32 arg1) {
    f64 one;
    f32 temp_fv1;
    u64 temp_ret;

    one = 1.0;
    temp_ret = func_801C0F18(3, 3);
    temp_fv1 = (f32) ((func_80034C24(temp_ret) / D_801E9580) / one);
    ((func_801E3CB8_Struct *) D_8038D8D0)->unkC->unk30->unk4 = (f32) ((D_801E9588 * temp_fv1) + D_801E958C);
    ((func_801E3CB8_Struct *) D_8038D8D0)->unkC->unk30->unkC = (f32) (((f64) temp_fv1 * D_801E9590) + D_801E9598);
    if (func_801C0B8C(0xCDFE60) != 0) {
        extern void func_801C0EB0();
        ((func_801E3CB8_Struct *) D_8038D8D0)->unkC->unk30->unk4 = D_801E95A0;
        ((func_801E3CB8_Struct *) D_8038D8D0)->unkC->unk30->unkC = D_801E95A4;
        func_801C0EB0(3, 3, &D_8038D8D0);
        return 0xA;
    }
    return 9;
}


s32 func_801E3DD4(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E3DE4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



s32 func_801E3E28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801C0D04(3, 4);
        return 0x2;
    }
    return 0x1;
}


typedef struct func_801E3E74_Struct {
    u8 pad[0x10];
    func_801E397C_Struct_B *unk10;
} func_801E3E74_Struct;

extern f64 D_801E95A8;
extern f32 D_801E95B0;
extern f32 D_801E95B4;
extern f64 D_801E95B8;
extern f64 D_801E95C0;

s32 func_801E3E74(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    f64 one;
    u64 temp_ret;

    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0EB0(3, 4);
        return 3;
    }
    temp_ret = func_801C0F18(3, 4);
    one = 2.0 - 1.0;
    temp_fv1 = (f32)((func_80034C24(temp_ret) / D_801E95A8) / one);
    ((func_801E3E74_Struct *)D_8038D8D0)->unk10->unk30->unk4 = D_801E95B0 * temp_fv1 + D_801E95B4;
    ((func_801E3E74_Struct *)D_8038D8D0)->unk10->unk30->unkC = (f64)temp_fv1 * D_801E95B8 + D_801E95C0;
    return 2;
}


s32 func_801E3F58(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3F68(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3F78(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3F88(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3F98(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3FA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xBEBC20) != 0) {
        func_801C0D04(3, 4);
        return 9;
    }
    return 8;
}


typedef struct func_801E3FF4_Struct_R {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_801E3FF4_Struct_R;

typedef struct func_801E3FF4_Struct_Q {
    u8 pad0[0x30];
    func_801E3FF4_Struct_R *unk30;
} func_801E3FF4_Struct_Q;

typedef struct func_801E3FF4_Struct_P {
    u8 pad0[0x10];
    func_801E3FF4_Struct_Q *unk10;
} func_801E3FF4_Struct_P;

extern f64 D_801E95C8;
extern f32 D_801E95D0;
extern f32 D_801E95D4;
extern f64 D_801E95D8;
extern f64 D_801E95E0;
extern f32 D_801E95E8;
extern f32 D_801E95EC;

s32 func_801E3FF4(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    f64 temp_one;
    u64 temp_ret;

    temp_one = 1.0;
    temp_ret = func_801C0F18(3, 4);
    temp_fv1 = (f32) ((func_80034C24(temp_ret) / D_801E95C8) / temp_one);
    ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unk4 = (f32) ((D_801E95D0 * temp_fv1) + D_801E95D4);
    ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unkC = (f32) (((f64) temp_fv1 * D_801E95D8) + D_801E95E0);
    if (func_801C0B8C(0xCDFE60) != 0) {
        ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unk4 = D_801E95E8;
        ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unkC = D_801E95EC;
        func_801C0EB0(3, 4);
        return 0xA;
    }
    return 9;
}


s32 func_801E4110(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E4120(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4164(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4174(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4184(s32 arg0, s32 arg1) {
    return 4;
}


extern s32 func_8038D28C(s32 arg0);

s32 func_801E4194(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801C0D04(3, 5);
        func_8038D28C(0x221);
        return 5;
    }
    return 4;
}

#define D_801E95F0 D_801E95F0__func_801E41E4
#define D_801E95F8 D_801E95F8__func_801E41E4
#define D_801E95FC D_801E95FC__func_801E41E4
#define D_801E9600 D_801E9600__func_801E41E4
#define D_8038D8D0 D_8038D8D0__func_801E41E4
#define func_801C0DE4 func_801C0DE4__func_801E41E4
#define func_801E397C_Struct_A func_801E397C_Struct_A__func_801E41E4
#define func_801E397C_Struct_B func_801E397C_Struct_B__func_801E41E4
#define func_801E397C_Struct_C func_801E397C_Struct_C__func_801E41E4
typedef struct func_801E397C_Struct_C {
    s32 pad0;
    f32 unk4;
    s32 pad8;
    f32 unkC;
} func_801E397C_Struct_C;
typedef struct func_801E397C_Struct_B {
    u8 pad0[0x30];
    func_801E397C_Struct_C *unk30;
} func_801E397C_Struct_B;
typedef struct func_801E397C_Struct_A {
    u8 pad0[0x8];
    func_801E397C_Struct_B *unk8;
} func_801E397C_Struct_A;
extern struct func_801E397C_Struct_A *D_8038D8D0;
extern s32 func_801C0DE4(s32, s32, s32);


extern f64 D_801E95F0;
extern f32 D_801E95F8[];
extern f32 D_801E95FC;
extern f32 D_801E9600;

typedef struct func_801E41E4_Struct {
    u8 pad[0x14];
    func_801E397C_Struct_B *unk14;
} func_801E41E4_Struct;

s32 func_801E41E4(s32 arg0, s32 arg1) {
    f32 temp;
    f64 divisor = 1.0;
    f64 current;

    if (func_801C0DE4(3, 5, 0x3F800000) != 0) {
        func_801C0EB0(3, 5);
        return 6;
    }
    current = func_80034C24(func_801C0F18(3, 5));
    temp = D_801E95F8[arg0 & 0] * (f32)((current / D_801E95F0) / divisor);
    ((func_801E41E4_Struct *)D_8038D8D0)->unk14->unk30->unk4 = temp + D_801E95FC;
    ((func_801E41E4_Struct *)D_8038D8D0)->unk14->unk30->unkC = temp + D_801E9600;
    return 5;
}
#undef D_801E95F0
#undef D_801E95F8
#undef D_801E95FC
#undef D_801E9600
#undef D_8038D8D0
#undef func_801C0DE4
#undef func_801E397C_Struct_A
#undef func_801E397C_Struct_B
#undef func_801E397C_Struct_C


s32 func_801E42B4(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E42C4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E42D4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E42E4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E42F4(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E4304(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4348(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4358(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4368(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4378(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4388(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4398(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E43A8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E43B8(s32 arg0, s32 arg1) {
    return 8;
}


extern u8 D_801E0A48[];
extern u8 D_801DADFC[];
extern u8 D_801DAE00[];
extern u8 func_801DAC30[];
extern u8 func_801DAEE8[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801E43C8(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x30, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DADFC);
    func_801CC4C0(1, D_801DAE00);
    func_801C2420(0x57, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, func_801DAEE8 + 0x30);
    func_801CC4C0(2, func_801DAEE8 + 0x34);
    return 1;
}


extern void func_80005670(void *arg0, void *arg1);
extern void func_801D048C(s32 arg0);
extern void func_801D03E0(s32 arg0);
extern void func_801D03EC(s32 arg0);
extern void func_801CC530(void);
extern u8 D_801DADE8[];

s32 func_801E4494(s32 arg0, s32 arg1) {
    func_80005670(*(u8 **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_80005670(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DADE8);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}

extern struct func_801E58F0_StructA *D_801DAB14;
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

struct func_801E4520_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E4520_StructB {
    u8 pad0[0x2C];
    struct func_801E4520_StructC *unk2C;
};

struct func_801E4520_StructA {
    u8 pad0[8];
    struct func_801E4520_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E4520_StructB *unk24;
};

extern f32 D_801E9604;

s32 func_801E4520(s32 arg0, s32 arg1) {
    struct func_801E4520_StructB *temp_v0;

    temp_v0 = ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -40.5f;
        ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk8 = -470.0f;
        ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801E9604;
        ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x160F;
        func_801CC470(0, 0x02A80028, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801E45EC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E45FC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E460C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E4648(s32 arg0, s32 arg1) {
    return 7;
}


extern s32 D_801E8D50;

s32 func_801E4658(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        D_801E8D50 = 0;
        return 8;
    }
    return 7;
}


extern s32 func_801CE284();

s32 func_801E46A0(s32 arg0, s32 arg1) {
    if (D_801E8D50 == 0) {
        goto case0;
    }
    if (D_801E8D50 == 1) {
        goto case1;
    }
    return 8;
case0:
    func_801CC470(0, 0x02A80028, 9, 0, 3.0f);
    func_8038D28C(0x1AF);
    D_801E8D50 = 1;
    goto ret8;
case1:
    if (func_801CE284() != 0) {
        return 9;
    }
    goto ret8;
ret8:
    return 8;
}



s32 func_801E4738(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_801CC470(0, 0x01B80022, 0, 0x100, 3.0f);
        return 0xA;
    }
    return 9;
}


s32 func_801E479C(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E47AC(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E47BC(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E47CC(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E47DC(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E47EC(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E47FC(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E480C(s32 arg0, s32 arg1) {
    return 18;
}


extern f32 D_801E9608;

struct func_801E481C_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E481C_StructB {
    u8 pad0[0x2C];
    struct func_801E481C_StructC *unk2C;
};

struct func_801E481C_StructA {
    u8 pad0[8];
    struct func_801E481C_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E481C_StructB *unk24;
};

s32 func_801E481C(s32 arg0, s32 arg1) {
    struct func_801E481C_StructA **pp;
    s32 addr;

    if (func_801C0B8C(0x16E360) != 0) {
        addr = (s32) (func_801DAAF0 + 0x24);
        pp = (struct func_801E481C_StructA **) addr;
        ((*pp)->unk8->unk24->unk2C)->unk4 = -51.5f;
        ((*pp)->unk8->unk24->unk2C)->unk8 = -470.0f;
        ((*pp)->unk8->unk24->unk2C)->unkC = D_801E9608;
        ((*pp)->unk8->unk24->unk2C)->unk12 = 0x1C61;
        func_801CC470(0, 0x02A80023, 0, 0x1000, 5.0f);
        func_801C1000(4, 0);
        return 0x13;
    }
    return 0x12;
}


typedef struct func_801E4900_StructC { u8 pad[4]; f32 u4; f32 u8; f32 uC; } func_801E4900_StructC;
typedef struct func_801E4900_StructB { u8 pad[0x2C]; func_801E4900_StructC *u2C; } func_801E4900_StructB;
typedef struct func_801E4900_StructA { u8 pad[0x24]; func_801E4900_StructB *u24; } func_801E4900_StructA;
typedef struct func_801E4900_Struct { u8 pad[8]; func_801E4900_StructA *u8; } func_801E4900_Struct;

extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern u32 func_801C1134(s32, s32);
extern void func_8038D33C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5);
extern f32 D_801E960C;
extern f32 D_801E9610;
extern f32 D_801E9614;
extern f32 D_801E9618;

#define G ((func_801E4900_Struct *)D_801DAB14)

s32 func_801E4900(s32 arg0, s32 arg1) {
    f32 t;
    func_801E4900_StructC *p;

    if ((func_801C1088(4, 0, 0x37) != 0) && (func_801CE284() != 0)) {
        func_801C10D8(4, 0);
        return 0x14;
    }
    t = (f32) func_801C1134(4, 0) / 55.0f;
    G->u8->u24->u2C->u4 = D_801E960C * t + -51.5f;
    G->u8->u24->u2C->uC = D_801E9610 * t + D_801E9614;
    if ((func_801CE2D0(0x02A80023, 0x1E) != 0) || (func_801CE2D0(0x02A80023, 0x32) != 0)) {
        p = G->u8->u24->u2C;
        func_8038D33C(p->u4, p->u8, *(s32 *)&p->uC, 0x665, D_801E9618, 1.0f);
    }
    return 0x13;
}


s32 func_801E4A58(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(0, 0x02A80023, 0, 0x1000, 5.0f);
        func_801C1000(4, 0);
        return 0x15;
    }
    return 0x14;
}


struct func_801E4AC8_C { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801E4AC8_B { u8 pad0[0x2C]; struct func_801E4AC8_C *unk2C; };
struct func_801E4AC8_A {
    u8 pad0[8];
    struct func_801E4AC8_A *unk8;
    u8 pad1[0x18];
    struct func_801E4AC8_B *unk24;
};
struct func_801E4AC8_R { u8 pad0[8]; struct func_801E4AC8_A *unk8; };

extern f32 D_801E961C;
extern f32 D_801E9620;
extern f32 D_801E9624;
extern f32 D_801E9628;

#define ROOT ((struct func_801E4AC8_R *)D_801DAB14)

s32 func_801E4AC8(s32 arg0, s32 arg1) {
    f32 t;
    struct func_801E4AC8_C *c;

    if ((func_801C1088(4, 0, 0x37) != 0) && (func_801CE284() != 0)) {
        func_801C10D8(4, 0);
        return 0x16;
    }
    t = (f32)func_801C1134(4, 0) / 55.0f;
    ROOT->unk8->unk24->unk2C->unk4 = -2.25f * t + D_801E961C;
    ROOT->unk8->unk24->unk2C->unkC = D_801E9620 * t + D_801E9624;
    if ((func_801CE2D0(0x02A80023, 0x1E) != 0) || (func_801CE2D0(0x02A80023, 0x32) != 0)) {
        c = ROOT->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x665, D_801E9628, 1.0f);
    }
    return 0x15;
}


s32 func_801E4C20(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_801CC470(0, 0x02A80023, 0, 0x1000, 5.0f);
        func_801C1000(4, 0);
        return 0x17;
    }
    return 0x16;
}


struct func_801E4C90_C { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801E4C90_B { u8 pad0[0x2C]; struct func_801E4C90_C *unk2C; };
struct func_801E4C90_A {
    u8 pad0[8];
    struct func_801E4C90_A *unk8;
    u8 pad1[0x18];
    struct func_801E4C90_B *unk24;
};
struct func_801E4C90_R { u8 pad0[8]; struct func_801E4C90_A *unk8; };

extern f32 D_801E962C;
extern f32 D_801E9630;
extern f32 D_801E9634;
extern f32 D_801E9638;

#define ROOT ((struct func_801E4C90_R *)D_801DAB14)

s32 func_801E4C90(s32 arg0, s32 arg1) {
    f32 t;
    struct func_801E4C90_C *c;

    if ((func_801C1088(4, 0, 0x37) != 0) && (func_801CE284() != 0)) {
        func_801C10D8(4, 0);
        return 0x18;
    }
    t = (f32)func_801C1134(4, 0) / 55.0f;
    ROOT->unk8->unk24->unk2C->unk4 = -2.25f * t + D_801E962C;
    ROOT->unk8->unk24->unk2C->unkC = D_801E9630 * t + D_801E9634;
    if ((func_801CE2D0(0x02A80023, 0x1E) != 0) || (func_801CE2D0(0x02A80023, 0x32) != 0)) {
        c = ROOT->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x665, D_801E9638, 1.0f);
    }
    return 0x17;
}


s32 func_801E4DE8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_801CC470(0, 0x02A80023, 0, 0x1100, 5.0f);
        func_801C1000(4, 0);
        return 0x19;
    }
    return 0x18;
}


extern f64 D_801E9640;
extern f64 D_801E9648;
extern f32 D_801E9650;
extern f32 D_801E9654;
extern f32 D_801E9658;

typedef struct func_801E4E58_StructC {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E4E58_StructC;
typedef struct func_801E4E58_StructB {
    u8 pad[0x2C];
    func_801E4E58_StructC *unk2C;
} func_801E4E58_StructB;
typedef struct func_801E4E58_StructA {
    u8 pad[8];
    struct func_801E4E58_StructA *unk8;
    u8 pad1[0x18];
    func_801E4E58_StructB *unk24;
} func_801E4E58_StructA;

#define OBJECT ((func_801E4E58_StructA *)D_801DAB14)

s32 func_801E4E58(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    func_801E4E58_StructC *temp_v0;

    if (func_801C0B8C(0xC042C0) != 0) {
        func_801C10D8(4, 0);
        D_801E8D50 = 0;
        return 0x1A;
    }
    temp_fv0 = (f32) func_801C1134(4, 0) / 138.0f;
    OBJECT->unk8->unk24->unk2C->unk4 = (f32) (((f64) temp_fv0 * D_801E9640) + D_801E9648);
    OBJECT->unk8->unk24->unk2C->unkC = D_801E9650 * temp_fv0 + D_801E9654;
    if (func_801CE2D0(0x02A80023, 0x1E) != 0 || func_801CE2D0(0x02A80023, 0x32) != 0) {
        temp_v0 = OBJECT->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, *(s32 *)&temp_v0->unkC, 0x665, D_801E9658, 1.0f);
    }
    return 0x19;
}

s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

extern s32 func_801CE274();

s32 func_801E4FB0(s32 arg0, s32 arg1) {
    if (D_801E8D50 == 0) {
        goto block_a;
    }
    if (D_801E8D50 == 1) {
        goto block_b;
    }
    return 0x1A;
block_a:
    func_801CC4D8(0, 0x02A80025, 0, 0x1000, 12.0f);
    D_801E8D50 = 1;
    goto done;
block_b:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x02A80025, 0, 0x1000, 1.5f);
        return 0x1B;
    }
done:
    return 0x1A;
}



s32 func_801E5060(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E5090(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDEC740) != 0) {
        func_801CC470(0, 0x02A80025, 0, 0x1000, 1.5f);
        return 0x1D;
    }
    return 0x1C;
}



s32 func_801E50F4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E5124(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x00EE0980) != 0) {
        func_801CC470(0, 0x02A80025, 0, 0x1000, 1.5f);
        D_801E8D50 = 0;
        return 0x1F;
    }
    return 0x1E;
}


s32 func_801E5190(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E8D50;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x1F;

case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x01B80019, 0, 0, 6.0f);
        D_801E8D50 = 1;
    }
    goto ret1F;

case1:
    if (func_801CE274() != 0) {
        goto ret1F;
    }
    return 0x20;

ret1F:
    return 0x1F;
}


s32 func_801E522C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFD4BC0) != 0) {
        func_801CC470(0, 0x01B80019, 0, 0, 1.5f);
        func_8038D28C(0x1B4);
        return 0x21;
    }
    return 0x20;
}



s32 func_801E5298(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x12) = 0xC61;
        func_801CC470(0, 0x01900035, 0, 0x1000, 1.0f);
        return 0x22;
    }
    return 0x21;
}


typedef struct func_801E530C_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E530C_StructC;
typedef struct func_801E530C_StructB {
    u8 pad0[0x2C];
    func_801E530C_StructC *unk2C;
} func_801E530C_StructB;
typedef struct func_801E530C_StructA {
    u8 pad0[8];
    struct func_801E530C_StructA *unk8;
    u8 pad1[0x18];
    func_801E530C_StructB *unk24;
} func_801E530C_StructA;
typedef struct func_801E530C_StructG {
    u8 pad0[0x24];
    func_801E530C_StructA *unk24;
} func_801E530C_StructG;

extern f32 *func_801CE2C4();
extern f32 D_801E965C;

s32 func_801E530C(s32 arg0, s32 arg1) {
    f32 *v;
    f32 f;
    func_801E530C_StructC *c;

    if (func_801CE284() != 0) {
        return 0x23;
    }
    v = func_801CE2C4();
    f = v[0];
    if ((f < 0.0f ? -f : f) < 1.0f) {
        c = ((func_801E530C_StructG *)func_801DAAF0)->unk24->unk8->unk24->unk2C;
        c->unk4 = c->unk4 + f;
    }
    f = v[2];
    if ((f < 0.0f ? -f : f) < 1.0f) {
        c = ((func_801E530C_StructG *)func_801DAAF0)->unk24->unk8->unk24->unk2C;
        c->unkC = c->unkC + f;
    }
    if (func_801CE2D0(0x1900035, 9) != 0) {
        c = ((func_801E530C_StructG *)func_801DAAF0)->unk24->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x680, D_801E965C, 1.0f);
    }
    return 0x22;
}


s32 func_801E5444(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x011BD040) != 0) {
        func_801CC470(0, 0x0190002B, 0, 0, 1.0f);
        return 0x24;
    }
    return 0x23;
}


extern s32 func_801CE2D0(s32 arg0, s32 arg1);
extern f32 D_801E9660;

s32 func_801E54A8(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    if (func_801CE284() != 0) {
        func_801CC470(0, 0x01900027, 0, 0, 1.0f);
        return 0x25;
    }
    if ((func_801CE2D0(0x0190002B, 5) != 0) || (func_801CE2D0(0x0190002B, 9) != 0)) {
        temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(temp_v0 + 0x4), *(f32 *)(temp_v0 + 0x8), *(s32 *)(temp_v0 + 0xC), 0x680, D_801E9660, 1.0f);
    }
    return 0x24;
}


extern f32 D_801E9664;

struct func_801E5568_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801E5568_StructB {
    u8 pad0[0x2C];
    struct func_801E5568_StructC *unk2C;
};
struct func_801E5568_StructA {
    u8 pad0[8];
    struct func_801E5568_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E5568_StructB *unk24;
};

s32 func_801E5568(s32 arg0, s32 arg1) {
    struct func_801E5568_StructC *temp_v0;

    if (func_801CE284() != 0) {
        return 0x26;
    }
    if ((func_801CE2D0(0x01900027, 4) != 0) || (func_801CE2D0(0x01900027, 9) != 0)) {
        temp_v0 = (*(struct func_801E5568_StructA **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x680, D_801E9664, 1.0f);
    }
    return 0x25;
}


s32 func_801E5604(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E5614(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E5624(s32 arg0, s32 arg1) {
    return 40;
}



s32 func_801E5634(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



struct func_801E5678_Struct_A;
struct func_801E5678_Struct_B;

struct func_801E5678_Struct_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E5678_Struct_B {
    u8 pad0[0x2C];
    struct func_801E5678_Struct_Leaf *unk2C;
};

struct func_801E5678_Struct_A {
    u8 pad0[8];
    struct func_801E5678_Struct_A *unk8;
    u8 pad1[0x18];
    struct func_801E5678_Struct_B *unk24;
};

extern f32 D_801E9668;
extern f32 D_801E966C;

s32 func_801E5678(s32 arg0, s32 arg1) {
    struct func_801E5678_Struct_B *temp_v0;

    temp_v0 = ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E9668;
        ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = -470.0f;
        ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E966C;
        ((struct func_801E5678_Struct_A *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x412;
        func_801CC470(1, 0x01B80013, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5754(s32 arg0, s32 arg1) {
    return 3;
}


struct func_801E5764_StructC {
    u8 pad0[0x12];
    u16 unk12;
};

struct func_801E5764_StructB {
    u8 pad0[0x2C];
    struct func_801E5764_StructC *unk2C;
};

struct func_801E5764_StructA {
    u8 pad0[8];
    struct func_801E5764_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E5764_StructB *unk24;
};

s32 func_801E5764(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        ((struct func_801E5764_StructA *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1CF8;
        func_801CC470(1, 0x01B8001B, 0, 0x100, 1.0f);
        return 4;
    }
    return 3;
}


extern f32 D_801E9670;
extern f32 D_801E9674;
extern f32 D_801E9678;
s32 func_801CF418(s32 a0, s32 a1);

typedef struct func_801E57E8_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E57E8_Struct;

s32 func_801E57E8(s32 arg0, s32 arg1) {
    func_801E57E8_Struct *temp_v0;
    func_801E57E8_Struct *temp_v0_2;

    temp_v0 = (func_801E57E8_Struct *) *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 0x24) + 0x2C);
    if ((temp_v0->unk4 < D_801E9670) || (D_801E9674 < temp_v0->unkC)) {
        func_801CC4D8(1, 0x0410000F, 0, 0x1000, 6.0f);
        return 5;
    }
    if ((func_801CF418(0x01B8001B, 0xC) != 0) || (func_801CF418(0x01B8001B, 0x1E) != 0)) {
        temp_v0_2 = (func_801E57E8_Struct *) *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 0x24) + 0x2C);
        func_8038D33C(temp_v0_2->unk4, temp_v0_2->unk8, *(s32 *)&temp_v0_2->unkC, 0x676, D_801E9678, 1.0f);
    }
    return 4;
}


struct func_801E58F0_StructA;
struct func_801E58F0_StructB;

struct func_801E58F0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E58F0_StructB {
    u8 pad0[0x2C];
    struct func_801E58F0_StructC *unk2C;
};

struct func_801E58F0_StructA {
    u8 pad0[8];
    struct func_801E58F0_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E58F0_StructB *unk24;
};

extern s32 func_801CF3BC(void);
extern f32 D_801E967C;

s32 func_801E58F0(s32 arg0, s32 arg1) {
    struct func_801E58F0_StructC *temp_v0;

    if (func_801CF3BC() != 0) {
        return 5;
    }
    temp_v0 = D_801DAB14->unk8->unk8->unk24->unk2C;
    func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x676, D_801E967C, 1.0f);
    return 6;
}


s32 func_801E5968(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5978(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5988(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E5998(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


extern void func_801CF450(s32 arg0);
extern s32 D_801E8DF8;

s32 func_801E59EC(s32 arg0, s32 arg1) {
    func_801CF450(1);
    func_801CC470(1, 0x0410000F, 0, 0x1000, 5.0f);
    *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1CF8;
    func_801C0D04(4, 1);
    D_801E8DF8 = 0;
    return 0xB;
}


extern s32 func_801C0DE4(s32, s32, s32);
extern f64 D_801E9680;
extern f32 D_801E9688;
extern f32 D_801E968C;

s32 func_801E5A6C(s32 arg0, s32 arg1) {
    u64 t;
    f64 r;

    if (D_801E8DF8 == 0) goto c0;
    if (D_801E8DF8 == 1) goto c1;
    if (D_801E8DF8 == 2) goto c2;
    return 0xB;
c0:
    if (func_801C0DE4(4, 1, 0x40000000) != 0) {
        func_801C0EB0(4, 1);
        D_801E8DF8 = 1;
        return 0xB;
    } else {
        t = func_801C0F18(4, 1);
        r = func_80034C24(t);
        *(s16 *)((u8 *)*(s32 *)((u8 *)*(s32 *)((u8 *)*(s32 *)((u8 *)*(s32 *)((u8 *)D_801DAB14 + 8) + 8) + 0x24) + 0x2C) + 0x12) =
            (s16)(s32)((((D_801E9688 * 1.0f * (f32)((r / D_801E9680) / 2)) + D_801E968C) * 2048.0f) / 90.0f);
    }
    goto done;
c1:
    if (D_801CF3CC() != 0) {
        func_801CC470(1, 0x04100003, 0, 0x1000, 5.0f);
        D_801E8DF8 = 2;
    }
    goto done;
c2:
    if (D_801CF3CC() != 0) {
        func_801CF450(0);
        return 0xC;
    }
done:
    return 0xB;
}


typedef struct func_801E5BDC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5BDC_Struct;

s32 func_801E5BDC(s32 arg0, s32 arg1) {
    if ((((func_801E5BDC_Struct *)func_801BF6B0(7))->unkC < 8) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}


typedef struct func_801E5C30_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E5C30_Struct;

s32 func_801E5C30(s32 arg0, s32 arg1) {
    if (((func_801E5C30_Struct *) func_801BF6B0(7))->unkC < 0xB || func_801C1B1C() == 0) {
        return 13;
    }
    return 14;
}



s32 func_801E5C84(s32 arg0, s32 arg1) {
    D_801E8DF8 = 0;
    return 0xF;
}

#define D_801CF3CC D_801CF3CC__func_801E5C9C
#define D_801DAB14 D_801DAB14__func_801E5C9C
#define D_801E9690 D_801E9690__func_801E5C9C
#define D_801E9698 D_801E9698__func_801E5C9C
#define D_801E969C D_801E969C__func_801E5C9C
#define func_801C0DE4 func_801C0DE4__func_801E5C9C
#define func_801E58F0_StructA func_801E58F0_StructA__func_801E5C9C
#define func_801E58F0_StructB func_801E58F0_StructB__func_801E5C9C
#define func_801E58F0_StructC func_801E58F0_StructC__func_801E5C9C
#define func_801E65C4_S4 func_801E65C4_S4__func_801E5C9C
s32 D_801CF3CC(void);
struct func_801E58F0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801E58F0_StructB {
    u8 pad0[0x2C];
    struct func_801E58F0_StructC *unk2C;
};
struct func_801E58F0_StructA {
    u8 pad0[8];
    struct func_801E58F0_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E58F0_StructB *unk24;
};
extern struct func_801E58F0_StructA *D_801DAB14;
typedef struct func_801E65C4_S4 { u8 pad[0x12]; s16 unk12; } func_801E65C4_S4;
extern s32 func_801C0DE4();
extern f64 D_801E9690;
extern f32 D_801E9698;
extern f32 D_801E969C;

s32 func_801E5C9C(s32 arg0, s32 arg1) {
    f64 time;
    if (D_801E8DF8 == 0) goto c0;
    if (D_801E8DF8 == 1) goto c1;
    if (D_801E8DF8 == 2) goto c2;
    if (D_801E8DF8 != 3) goto end;
    goto c3;
c0:
    func_801CF450(1);
    func_801CC4D8(1, 0x0410000F, 0, 0x1000, 6.0f);
    D_801E8DF8 = 1;
    goto end;
c1:
    if (func_801CF3BC() == 0) {
        func_801CC470(1, 0x0410000F, 0, 0x1000, 5.0f);
        func_801C0D04(4, 1);
        D_801E8DF8 = 2;
    }
    goto end;
c2:
    if (func_801C0DE4(4, 1, 0x40000000) != 0) {
        func_801C0EB0(4, 1);
        D_801E8DF8 = 3;
        return 0xF;
    }
    time = (func_80034C24(func_801C0F18(4, 1)) / 1000000.0) / 2;
    ((func_801E65C4_S4 *)D_801DAB14->unk8->unk8->unk24->unk2C)->unk12 =
        (s16)((2048.0f * ((*(f32 *)((u8 *)&D_801E9690 + 8) * (f32)time) + D_801E969C)) / 90.0f);
    goto end;
c3:
    if (D_801CF3CC() != 0) {
        func_801CF450(0);
        return 0x10;
    }
end:
    return 0xF;
}
#undef D_801CF3CC
#undef D_801DAB14
#undef D_801E9690
#undef D_801E9698
#undef D_801E969C
#undef func_801C0DE4
#undef func_801E58F0_StructA
#undef func_801E58F0_StructB
#undef func_801E58F0_StructC
#undef func_801E65C4_S4


typedef struct func_801E5E5C_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E5E5C_Struct;

s32 func_801E5E5C(s32 arg0, s32 arg1) {
    if ((((func_801E5E5C_Struct *)func_801BF6B0(7))->unkC < 0x10) || (func_801C1B1C() == 0)) {
        return 16;
    }
    return 0x11;
}



s32 func_801E5EB0(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 17;
    }
    return 18;
}


s32 func_801E5F04(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x04100010, 0, 0x1000, 4.0f);
    return 0x13;
}


s32 D_801CF3CC(void);

s32 func_801E5F4C(s32 arg0, s32 arg1) {
    if (D_801CF3CC() != 0) {
        return 0x14;
    }
    return 0x13;
}


typedef struct func_801E5F7C_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E5F7C_Struct;

s32 func_801E5F7C(s32 arg0, s32 arg1) {
    if ((((func_801E5F7C_Struct *)func_801BF6B0(7))->unkC < 0x18) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


struct func_801E5FD0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E5FD0(s32 arg0, s32 arg1) {
    if ((((struct func_801E5FD0_Struct *)func_801BF6B0(7))->unkC < 0x1B) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}


s32 func_801E6024(s32 arg0, s32 arg1) {
    func_801CF450(1);
    func_801CC470(1, 0x0410000F, 0, 0x1000, 5.0f);
    D_801E8DF8 = 0;
    return 0x17;
}

/* hh-block asm/nonmatchings/file034/801E1BE0/_mrg_keep_tail_16576289c50da1bf.s {"functions":["func_801E6078"],"rodata":[],"rodata_bytes":[2149488280,7719368,100]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/_mrg_keep_tail_16576289c50da1bf.s")


typedef struct func_801E61C8_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E61C8_Struct;

s32 func_801E61C8(s32 arg0, s32 arg1) {
    if ((((func_801E61C8_Struct *) func_801BF6B0(7))->unkC < 0x20) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}


struct func_801E621C_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E621C(s32 arg0, s32 arg1) {
    if ((((struct func_801E621C_Struct *)func_801BF6B0(7))->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}


extern f32 D_801E96AC;
extern f32 D_801E96B0;
extern f32 D_801E96B4;
extern f32 D_801E96B8;
extern f32 D_801E96BC;

s32 func_801E6270(s32 arg0, s32 arg1)
{
  unsigned char new_var;
  f32 scale;
  scale = D_801E96AC;
  new_var = 0x24;
  (*((struct func_801E58F0_StructA **) (func_801DAAF0 + new_var)))->unk8->unk8->unk24->unk2C->unk4 = (D_801E96B0 * scale) + D_801E96B4;
  *((f32 *) (&(*((struct func_801E58F0_StructA **) (func_801DAAF0 + new_var)))->unk8->unk8->unk24->unk2C->unkC)) = (D_801E96B8 * scale) + D_801E96BC;
  func_801CF450(1);
  func_801CC470(1, 0x04100016, 0, 0x100, 1.0f);
 if (0) { }
 D_801E8DF8 = 0; return 0x1B;
}


typedef struct func_801E6334_C { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_801E6334_C;
typedef struct func_801E6334_B { u8 pad0[0x2C]; func_801E6334_C *unk2C; } func_801E6334_B;
typedef struct func_801E6334_A { u8 pad0[8]; struct func_801E6334_A *unk8; u8 pad1[0x18]; func_801E6334_B *unk24; } func_801E6334_A;
typedef struct func_801E6334_R { u8 pad0[8]; func_801E6334_A *unk8; } func_801E6334_R;

extern f32 D_801E96C0;
extern f32 D_801E96C4;
extern f32 D_801E96C8;
#define P ((func_801E6334_R *)D_801DAB14)

s32 func_801E6334(s32 arg0, s32 arg1) {
    func_801E6334_C *c;
    func_801E6334_R **pp;
    if (P->unk8->unk8->unk24->unk2C->unk4 < -240.0f) {
        func_801CF450(0);
        pp = (func_801E6334_R **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = D_801E96C0;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = D_801E96C4;
        func_801CC470(1, 0x0410000F, 0, 0x1001, 1.0f);
        return 0x1C;
    }
    if (func_801CF418(0x04100016, 0xB) || func_801CF418(0x04100016, 0x1E)) {
        c = P->unk8->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x676, D_801E96C8, 1.0f);
    }
    return 0x1B;
}


typedef struct func_801E6474_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6474_Struct;

s32 func_801E6474(s32 arg0, s32 arg1) {
    if ((((func_801E6474_Struct *) func_801BF6B0(7))->unkC < 0x28) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


struct func_801E64C8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E64C8(s32 arg0, s32 arg1) {
    if ((((struct func_801E64C8_Struct *) func_801BF6B0(7))->unkC < 0x2B) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}


extern f32 D_801E96CC;
extern f32 D_801E96D0;

typedef struct func_801E651C_Float {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
} func_801E651C_Float;

typedef struct func_801E651C_Struct {
    u8 pad0[0x8];
    struct func_801E651C_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E651C_Struct *unk24;
    u8 pad2[0x4];
    func_801E651C_Float *unk2C;
} func_801E651C_Struct;

s32 func_801E651C(s32 arg0, s32 arg1) {
    func_801CF450(1);
    ((func_801E651C_Struct *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801E96CC;
    ((func_801E651C_Struct *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E96D0;
    func_801CC470(1, 0x0410000F, 0, 0x1000, 5.0f);
    func_801C0D04(4, 1);
    D_801E8DF8 = 0;
    return 0x1F;
}


extern void func_801CF4B0(s32);
extern f64 D_801E96D8;
extern f32 D_801E96E0;

typedef struct func_801E65C4_S4 { u8 pad[0x12]; s16 unk12; } func_801E65C4_S4;
typedef struct func_801E65C4_S3 { u8 pad[0x2C]; func_801E65C4_S4 *unk2C; } func_801E65C4_S3;
typedef struct func_801E65C4_S2 { u8 pad[0x24]; func_801E65C4_S3 *unk24; } func_801E65C4_S2;
typedef struct func_801E65C4_S1 { u8 pad[8]; func_801E65C4_S2 *unk8; } func_801E65C4_S1;
typedef struct func_801E65C4_S0 { u8 pad[8]; func_801E65C4_S1 *unk8; } func_801E65C4_S0;

s32 func_801E65C4(s32 arg0, s32 arg1)
{
  u64 t;
  if (D_801E8DF8 == 0)
  {
    if (func_801C0DE4(4, 1, 0x40000000) != 0)
    {
      func_801CF450(0);
      func_801C0EB0(4, 1);
      func_801CC470(1, 0x04100004, 0, 0x1100, 5.0f);
      func_801CF4B0(1);
      return 0x20;
    }
    t = func_801C0F18(4, 1);
    (*((func_801E65C4_S0 **) (func_801DAAF0 + 0x24)))->unk8->unk8->unk24->unk2C->unk12 = (s16) ((s32) ((((180.0f * ((f32) ((func_80034C24(t) / D_801E96D8) / 2))) + D_801E96E0) * 2048.0f) / ((0, 90.0f))));
  }
  return 0x1F;
}


typedef struct func_801E66E0_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E66E0_Struct;

s32 func_801E66E0(s32 arg0, s32 arg1) {
    if ((((func_801E66E0_Struct *) func_801BF6B0(7))->unkC < 0x30) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E6734(s32 arg0, s32 arg1) {
    return 34;
}


s32 func_801E6744(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E6754(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        return 36;
    }
    return 35;
}


s32 func_801E678C(s32 arg0, s32 arg1) {
    return 37;
}


s32 func_801E679C(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E67AC(s32 arg0, s32 arg1) {
    return 38;
}



s32 func_801E67BC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801E96E4;
extern f32 D_801E96E8;

struct func_801E6800_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E6800_StructB {
    u8 pad0[0x2C];
    struct func_801E6800_StructC *unk2C;
};

struct func_801E6800_StructA {
    u8 pad0[8];
    struct func_801E6800_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E6800_StructB *unk24;
};

s32 func_801E6800(s32 arg0, s32 arg1) {
    struct func_801E6800_StructB *temp_v0;

    temp_v0 = ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E96E4;
        ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = -470.0f;
        ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E96E8;
        ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x160F;
        func_801CC470(2, 0x02A8000C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E68EC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E68FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        func_801CC470(2, 0x02A8000C, 0, 0, 3.0f);
        return 4;
    }
    return 3;
}


s32 func_801D0408(void);

s32 func_801E6960(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x5;
    }
    return 0x4;
}



s32 func_801E6990(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_801CC470(2, 0x01B80023, 0, 0x100, 3.0f);
        return 6;
    }
    return 5;
}


s32 func_801E69F4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E6A04(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E6A14(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E6A24(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E6A34(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E6A44(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E6A54(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E6A64(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E6A74(s32 arg0, s32 arg1) {
    return 15;
}


extern f32 D_801E96EC;
extern f32 D_801E96F0;

struct func_801E6A84_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E6A84(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x16E360) != 0) {
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unk4 = D_801E96EC;
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unk8 = -470.0f;
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unkC = D_801E96F0;
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unk12 = 0x1C61;
        func_801CC470(2, 0x02A80024, 0, 0x1000, 5.0f);
        func_801C1000(4, 2);
        return 0x10;
    }
    return 0xF;
}

/* hh-block asm/nonmatchings/file034/801E1BE0/_mrg_keep_tail_144aff4ff9f535d1.s {"functions":["func_801E6B88"],"rodata":[],"rodata_bytes":[2149488380,7719468,52]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/_mrg_keep_tail_144aff4ff9f535d1.s")


s32 func_801E6C88(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(2, 0x02A80024, 0, 0x1000, 5.0f);
        func_801C1000(4, 2);
        return 0x12;
    }
    return 0x11;
}

/* hh-block asm/nonmatchings/file034/801E1BE0/_mrg_keep_text_func_801E6CF8.s {"functions":["func_801E6CF8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/_mrg_keep_text_func_801E6CF8.s")


extern s32 func_801C1000(s32, s32);

s32 func_801E6DF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_801CC470(2, 0x02A80024, 0, 0x1000, 5.0f);
        func_801C1000(4, 2);
        return 0x14;
    }
    return 0x13;
}

/* hh-block asm/nonmatchings/file034/801E1BE0/_mrg_keep_text_func_801E6E68.s {"functions":["func_801E6E68"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file034/801E1BE0/_mrg_keep_text_func_801E6E68.s")


s32 func_801E6F68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_801CC470(2, 0x02A80024, 0, 0x1100, 5.0f);
        func_801C1000(4, 2);
        return 0x16;
    }
    return 0x15;
}


extern s32 D_801E8E98;
extern f32 D_801E9718;
extern f32 D_801E971C;
extern f32 D_801E9720;

typedef struct func_801E6FD8_StructLeaf {
    u8 pad[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801E6FD8_StructLeaf;

typedef struct func_801E6FD8_StructB {
    u8 pad[0x2C];
    func_801E6FD8_StructLeaf *unk2C;
} func_801E6FD8_StructB;

typedef struct func_801E6FD8_StructA {
    u8 pad[8];
    struct func_801E6FD8_StructA *unk8;
    u8 padC[0x18];
    func_801E6FD8_StructB *unk24;
} func_801E6FD8_StructA;

s32 func_801E6FD8(s32 arg0, s32 arg1) {
    f32 temp_fv0;

    if (func_801C0B8C(0xC042C0) != 0) {
        func_801C10D8(4, 2);
        D_801E8E98 = 0;
        return 0x17;
    }
    temp_fv0 = (f32) func_801C1134(4, 2) / 138.0f;
    ((func_801E6FD8_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E9718 * temp_fv0 + -56.0f;
    ((func_801E6FD8_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E971C * temp_fv0 + D_801E9720;
    return 0x16;
}


s32 func_801D03F8(void);

s32 func_801E70D0(s32 arg0, s32 arg1) {
    if (D_801E8E98 == 0) {
        goto case0;
    }
    if (D_801E8E98 == 1) {
        goto case1;
    }
    return 0x17;
case0:
    func_801CC4D8(2, 0x02A80026, 0, 0x1000, 12.0f);
    D_801E8E98 = 1;
    goto end;
case1:
    if (func_801D03F8() != 0) {
        goto end;
    }
    func_801CC470(2, 0x02A80026, 0, 0x1000, 1.5f);
    return 0x18;
end:
    return 0x17;
}



s32 func_801E7180(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x19;
    }
    return 0x18;
}



s32 func_801E71B0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDEC740) != 0) {
        func_801CC470(2, 0x02A80026, 0, 0x1000, 1.5f);
        return 0x1A;
    }
    return 0x19;
}



s32 func_801E7214(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x1B;
    }
    return 0x1A;
}


s32 func_801E7244(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEE0980) != 0) {
        func_801CC470(2, 0x02A80026, 0, 0x1000, 1.5f);
        D_801E8E98 = 0;
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E72B0(s32 arg0, s32 arg1) {
    if (D_801E8E98 == 0) {
        goto case0;
    }
    if (D_801E8E98 == 1) {
        goto case1;
    }
    return 0x1C;

case0:
    if (func_801D0408() != 0) {
        func_801CC4D8(2, 0x01B8001A, 0, 0x1000, 6.0f);
        D_801E8E98 = 1;
    }
    goto ret1c;

case1:
    if (func_801D03F8() == 0) {
        return 0x1D;
    }
    goto ret1c;

ret1c:
    return 0x1C;
}



s32 func_801E734C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFD4BC0) != 0) {
        func_801CC470(2, 0x01B8001A, 0, 0x1000, 1.5f);
        return 0x1E;
    }
    return 0x1D;
}



s32 func_801E73B0(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x1F;
    }
    return 0x1E;
}



s32 func_801E73E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x011BD040) != 0) {
        func_801CC4D8(2, 0x02A80027, 0, 0x1000, 15.0f);
        D_801E8E98 = 0;
        return 0x20;
    }
    return 0x1F;
}


s32 func_801E744C(s32 arg0, s32 arg1) {
    if (D_801E8E98 == 0) {
        goto case0;
    }
    if (D_801E8E98 == 1) {
        goto case1;
    }
    return 0x20;
case0:
    if (func_801D03F8() != 0) {
        goto tail;
    }
    func_801CC470(2, 0x02A80027, 0, 0x1000, 2.0f);
    D_801E8E98 = 1;
    goto tail;
case1:
    if (func_801D0408() == 0) {
        goto tail;
    }
    return 0x21;
tail:
    return 0x20;
}



s32 func_801E74E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x012B1280) != 0) {
        func_801CC4D8(2, 0x01900016, 0, 0x1000, 15.0f);
        return 0x22;
    }
    return 0x21;
}


s32 func_801E754C(s32 arg0, s32 arg1) {
    if (func_801D03F8() == 0) {
        func_801CC470(2, 0x01900016, 0, 0x100, 1.0f);
        return 0x23;
    }
    return 0x22;
}


s32 func_801E75A4(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E75B4(s32 arg0, s32 arg1) {
    return 36;
}


s32 func_801E75C4(s32 arg0, s32 arg1) {
    return 37;
}


s32 func_801E75D4(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E75E4(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E75F4(s32 arg0, s32 arg1) {
    return 40;
}


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E7604(s32 arg0, s32 arg1) {
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



s32 func_801E768C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E76BC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E76CC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E76DC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E76EC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0158D940) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E7728(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
    return 7;
}



s32 func_801E7794(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E77BC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E77CC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E77DC(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E77EC(s32 arg0, s32 arg1) {
    return 2;
}

extern s32 func_801C18CC(s32 arg0, void *arg1);
extern s32 D_801E8F80[];

typedef struct func_801E77FC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E77FC_Struct;

s32 func_801E77FC(s32 arg0, s32 arg1) {
    func_801E77FC_Struct sp18;

    sp18 = *(func_801E77FC_Struct *) D_801E8F80;
    func_801C18CC(2, &sp18);
    return 3;
}



s32 func_801E7864(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3;
    }
    return 0x4;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E8460[];

s32 func_801E7894(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E8460);
    return 5;
}


s32 func_8038CBF0(void);

s32 func_801E78C8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E78F8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7;
}



typedef struct func_801E7920_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7920_Struct;

extern func_801E7920_Struct D_801E8F98;

s32 func_801E7920(s32 arg0, s32 arg1) {
    func_801E7920_Struct sp18;

    sp18 = D_801E8F98;
    func_801C18CC(2, &sp18);
    return 8;
}



s32 func_801E7988(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8;
    }
    return 0x9;
}


s32 func_801E79B8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA;
}


typedef struct func_801E79E0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E79E0_Struct;

extern func_801E79E0_Struct D_801E8FB0;

s32 func_801E79E0(s32 arg0, s32 arg1) {
    func_801E79E0_Struct sp1C;

    sp1C = D_801E8FB0;
    func_801C18CC(1, &sp1C);
    return 0xB;
}



s32 func_801E7A30(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}


extern u8 D_801E85D4[];

s32 func_801E7A60(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E85D4);
    return 13;
}



s32 func_801E7A94(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xE;
    }
    return 0xD;
}


s32 func_801E7AC4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xF;
}


typedef struct func_801E7AEC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7AEC_Struct;

extern func_801E7AEC_Struct D_801E8FBC;

s32 func_801E7AEC(s32 arg0, s32 arg1) {
    func_801E7AEC_Struct sp1C;

    sp1C = D_801E8FBC;
    func_801C18CC(1, &sp1C);
    return 0x10;
}



s32 func_801E7B3C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x10;
    }
    return 0x11;
}


s32 func_801E7B6C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x12;
}


typedef struct func_801E7B94_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7B94_Struct;

extern func_801E7B94_Struct D_801E8FC8;

s32 func_801E7B94(s32 arg0, s32 arg1) {
    func_801E7B94_Struct sp18;

    sp18 = D_801E8FC8;
    func_801C18CC(2, (void *) &sp18);
    return 0x13;
}



s32 func_801E7BFC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x13;
    }
    return 0x14;
}


extern u8 D_801E865C[];

s32 func_801E7C2C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E865C);
    return 21;
}



s32 func_801E7C60(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x16;
    }
    return 0x15;
}


s32 func_801E7C90(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x17;
}



typedef struct func_801E7CB8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7CB8_Struct;

extern func_801E7CB8_Struct D_801E8FE0;

s32 func_801E7CB8(s32 arg0, s32 arg1) {
    func_801E7CB8_Struct sp18;

    sp18 = D_801E8FE0;
    func_801C18CC(2, &sp18);
    return 0x18;
}



s32 func_801E7D20(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E7D50(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1A;
}


typedef struct func_801E7D78_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7D78_Struct;

extern func_801E7D78_Struct D_801E8FF8;

s32 func_801E7D78(s32 arg0, s32 arg1) {
    func_801E7D78_Struct sp1C;

    sp1C = D_801E8FF8;
    func_801C18CC(1, &sp1C);
    return 0x1B;
}



s32 func_801E7DC8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1B;
    }
    return 0x1C;
}


extern u8 D_801E86EC[];

s32 func_801E7DF8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E86EC);
    return 29;
}



s32 func_801E7E2C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E7E5C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1F;
}


typedef struct func_801E7E84_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7E84_Struct;

extern func_801E7E84_Struct D_801E9004;

s32 func_801E7E84(s32 arg0, s32 arg1) {
    func_801E7E84_Struct sp1C;

    sp1C = D_801E9004;
    func_801C18CC(1, &sp1C);
    return 0x20;
}



s32 func_801E7ED4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E7F04(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x22;
}



typedef struct func_801E7F2C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7F2C_Struct;

extern func_801E7F2C_Struct D_801E9010;

s32 func_801E7F2C(s32 arg0, s32 arg1) {
    func_801E7F2C_Struct sp18;

    sp18 = D_801E9010;
    func_801C18CC(2, &sp18);
    return 0x23;
}



s32 func_801E7F94(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x23;
    }
    return 0x24;
}


extern u8 D_801E8778[];

s32 func_801E7FC4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E8778);
    return 37;
}



s32 func_801E7FF8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x26;
    }
    return 0x25;
}


s32 func_801E8028(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x27;
}


struct func_801E8050_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

extern struct func_801E8050_Struct D_801E9028;

s32 func_801E8050(s32 arg0, s32 arg1) {
    struct func_801E8050_Struct sp18;

    sp18 = D_801E9028;
    func_801C18CC(2, &sp18);
    return 0x28;
}



s32 func_801E80B8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x28;
    }
    return 0x29;
}


s32 func_801E80E8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2A;
}


typedef struct func_801E8110_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8110_Struct;

extern func_801E8110_Struct D_801E9040;

s32 func_801E8110(s32 arg0, s32 arg1) {
    func_801E8110_Struct sp18;

    sp18 = D_801E9040;
    func_801C18CC(2, &sp18);
    return 0x2B;
}



s32 func_801E8178(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2B;
    }
    return 0x2C;
}


extern u8 D_801E89B8[];

s32 func_801E81A8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E89B8);
    return 45;
}



s32 func_801E81DC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2E;
    }
    return 0x2D;
}


s32 func_801E820C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2F;
}


typedef struct func_801E8234_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8234_Struct;

extern func_801E8234_Struct D_801E9058;

s32 func_801E8234(s32 arg0, s32 arg1) {
    func_801E8234_Struct sp18;

    sp18 = D_801E9058;
    func_801C18CC(2, &sp18);
    return 0x30;
}



s32 func_801E829C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x30;
    }
    return 0x31;
}


s32 func_801E82CC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x32;
}


s32 func_801E82F4(s32 arg0, s32 arg1) {
    return 51;
}


s32 func_801E8304(s32 arg0, s32 arg1) {
    return 51;
}


s32 func_801E8314(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E8324(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E8334(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E8344(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E8354(s32 arg0, s32 arg1) {
    return 5;
}


extern s32 D_801E9148;

s32 func_801E8364(s32 arg0, s32 arg1) {
    D_801E9148 = 0;
    return 0x6;
}



s32 func_801E837C(s32 arg0, s32 arg1) {
    if (D_801E9148 == 0) {
        goto case0;
    }
    if (D_801E9148 == 1) {
        goto case1;
    }
    if (D_801E9148 == 2) {
        goto case2;
    }
    return 6;
case0:
    if (func_801C0B8C(0xCF8500) == 0) {
        goto ret6;
    }
    func_8038D28C(0x1B1);
    D_801E9148 = 1;
    goto ret6;
case1:
    if (func_801C0B8C(0xE66860) == 0) {
        goto ret6;
    }
    func_8038D28C(0x1B2);
    D_801E9148 = 2;
    goto ret6;
case2:
    if (func_801C0B8C(0xF5AAA0) == 0) {
        goto ret6;
    }
    func_8038D28C(0x1B3);
    return 7;
ret6:
    return 6;
}


s32 func_801E844C(s32 arg0, s32 arg1) {
    return 7;
}


/* Original readonly objects; named loads retain their original addresses. */

static const unsigned char rodata_801E1BE0[] = {
    0xC1, 0xD7, 0x33, 0x33, 0xC3, 0xE6, 0x19, 0x9A, 0xC2, 0x48, 0x66, 0x66, 0xC3, 0xE6, 0x73, 0x33,
    0xC2, 0x54, 0x66, 0x66, 0xC3, 0xE4, 0x80, 0x00, 0xC2, 0x0D, 0x33, 0x33, 0xC3, 0xE4, 0x8C, 0xCD,
    0xC2, 0x6E, 0xCC, 0xCD, 0xC3, 0xE4, 0x80, 0x00, 0xC2, 0x0D, 0x33, 0x33, 0xC3, 0xE4, 0x8C, 0xCD,
    0xC1, 0xD7, 0x33, 0x33, 0xC3, 0xE6, 0x19, 0x9A, 0xC2, 0x48, 0x66, 0x66, 0xC3, 0xE6, 0x73, 0x33,
    0xC3, 0xE4, 0x99, 0x9A, 0xC2, 0xAB, 0x33, 0x33, 0xC3, 0xE3, 0x26, 0x66, 0x3F, 0x19, 0x99, 0x9A,
    0xC3, 0x37, 0x80, 0x01, 0xC2, 0x90, 0x66, 0x66, 0xC3, 0xE4, 0x40, 0x00, 0x43, 0x3D, 0xB3, 0x32,
    0x43, 0xA1, 0x26, 0x66, 0xC2, 0xAA, 0x33, 0x33, 0xC3, 0xE3, 0x0C, 0xCD, 0xC3, 0x75, 0x33, 0x33,
    0xC3, 0xE4, 0x73, 0x33, 0xC3, 0x86, 0x99, 0x9A, 0xC3, 0xE3, 0x99, 0x9A, 0xC2, 0x83, 0x99, 0x9A,
    0xC3, 0xE4, 0xC0, 0x00, 0xC2, 0x4B, 0x33, 0x33, 0xC3, 0xE5, 0x99, 0x9A, 0xC3, 0xE4, 0xC0, 0x00,
    0xC3, 0xE5, 0x99, 0x9A, 0x43, 0x8C, 0xB3, 0x33, 0xC2, 0x8E, 0x66, 0x66, 0x43, 0x8D, 0xC0, 0x00,
    0xC2, 0x4B, 0x33, 0x33, 0x43, 0x93, 0x99, 0x9A, 0xC2, 0x59, 0x33, 0x33, 0x43, 0x95, 0x40, 0x00,
    0xC3, 0xE4, 0xC0, 0x00, 0xC3, 0xE5, 0x99, 0x9A, 0x43, 0x8D, 0xC0, 0x00, 0x43, 0x8E, 0x99, 0x9A,
    0xC2, 0x59, 0x33, 0x33, 0x43, 0x95, 0x40, 0x00, 0xC2, 0x60, 0x33, 0x33, 0x43, 0x96, 0x19, 0x9A,
    0xC3, 0xE4, 0xC0, 0x00, 0xC3, 0xE5, 0x99, 0x9A, 0x43, 0x8E, 0x99, 0x9A, 0xC2, 0x95, 0x99, 0x9A,
    0x43, 0x8F, 0x73, 0x33, 0xC2, 0x60, 0x33, 0x33, 0x43, 0x96, 0x19, 0x9A, 0xC2, 0x67, 0x33, 0x33,
    0x43, 0x96, 0xF3, 0x33, 0xC2, 0x82, 0x99, 0x9A, 0xC3, 0xDA, 0xE6, 0x66, 0xC2, 0x67, 0x33, 0x33,
    0xC3, 0xE5, 0x99, 0x9A, 0xC2, 0x98, 0xCC, 0xCD, 0xC3, 0xE2, 0x33, 0x33, 0xC2, 0x6C, 0xCC, 0xCD,
    0xC3, 0xE3, 0xF3, 0x33, 0xC2, 0xAC, 0x99, 0x9A, 0xC2, 0x93, 0x99, 0x9A, 0xC3, 0xE3, 0xE6, 0x66,
    0xC2, 0x72, 0x66, 0x66, 0x43, 0x91, 0x40, 0x00, 0xC2, 0x7E, 0x66, 0x66, 0x43, 0x92, 0xCC, 0xCD,
    0x43, 0x92, 0xCC, 0xCD, 0xC3, 0x8C, 0x99, 0x9A, 0x43, 0xF1, 0xE6, 0x66, 0x00, 0x00, 0x00, 0x00,
    0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x72, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x72, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00,
    0xC2, 0x48, 0x66, 0x66, 0x43, 0x96, 0x80, 0x00, 0xC2, 0x72, 0x66, 0x66, 0x43, 0x91, 0x40, 0x00,
    0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x72, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x72, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00,
    0xC2, 0x8E, 0x33, 0x33, 0xC2, 0x72, 0x66, 0x66, 0x43, 0x91, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00, 0x41, 0x26, 0x66, 0x64, 0xC2, 0x7E, 0x66, 0x66,
    0x40, 0x24, 0x66, 0x64, 0xCC, 0xCC, 0xCC, 0xC0, 0x40, 0x72, 0x59, 0x99, 0xA0, 0x00, 0x00, 0x00,
    0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00, 0xC1, 0x26, 0x66, 0x64, 0xC2, 0x54, 0xCC, 0xCD,
    0xC0, 0x24, 0x66, 0x65, 0x99, 0x99, 0x99, 0xA0, 0x40, 0x72, 0xFC, 0xCC, 0xC0, 0x00, 0x00, 0x00,
    0xC2, 0x7E, 0x66, 0x66, 0x43, 0x92, 0xCC, 0xCD, 0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00,
    0xC1, 0x24, 0xCC, 0xD0, 0xC2, 0x7E, 0x66, 0x66, 0xC0, 0x24, 0xCC, 0xCB, 0x33, 0x33, 0x33, 0x40,
    0x40, 0x72, 0x59, 0x99, 0xA0, 0x00, 0x00, 0x00, 0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x41, 0x24, 0xCC, 0xD0, 0xC2, 0x93, 0xCC, 0xCD, 0x40, 0x24, 0xCC, 0xCD, 0x99, 0x99, 0x99, 0xA0,
    0x40, 0x71, 0xB3, 0x33, 0x40, 0x00, 0x00, 0x00, 0xC2, 0x7E, 0x66, 0x66, 0x43, 0x92, 0xCC, 0xCD,
    0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00, 0x41, 0x5B, 0x33, 0x40, 0xC3, 0x8C, 0x99, 0x9A,
    0x43, 0xF1, 0xE6, 0x66, 0x43, 0x8D, 0x8C, 0xCD, 0x43, 0x93, 0x80, 0x00, 0xC0, 0x2C, 0xCC, 0xD0,
    0x40, 0x4C, 0xCD, 0x00, 0x43, 0x93, 0x80, 0x00, 0x3F, 0x99, 0x99, 0x9A, 0xC2, 0x58, 0xCC, 0xCD,
    0x3F, 0xD3, 0x33, 0x00, 0x43, 0x95, 0x19, 0x9A, 0x3F, 0x99, 0x99, 0x9A, 0xC2, 0x61, 0xCC, 0xCD,
    0x3F, 0xD3, 0x33, 0x00, 0x43, 0x95, 0xEC, 0xCD, 0x3F, 0x99, 0x99, 0x9A, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x16, 0x66, 0x66, 0x33, 0x33, 0x33, 0x30, 0xC0, 0x4D, 0x59, 0x99, 0xA0, 0x00, 0x00, 0x00,
    0x40, 0x96, 0x66, 0x80, 0x43, 0x96, 0xC0, 0x00, 0x3F, 0x99, 0x99, 0x9A, 0x3F, 0x99, 0x99, 0x9A,
    0x3F, 0x99, 0x99, 0x9A, 0x3F, 0x99, 0x99, 0x9A, 0xC2, 0x63, 0x33, 0x33, 0x43, 0x89, 0x0C, 0xCD,
    0xC2, 0xAA, 0x66, 0x66, 0x43, 0x9A, 0xD9, 0x9A, 0x3F, 0x99, 0x99, 0x9A, 0x3F, 0x99, 0x99, 0x9A,
    0x41, 0x2E, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00, 0x43, 0x2A, 0xB3, 0x34, 0x43, 0xA2, 0xF3, 0x33,
};
/* hh-owned-pool func_801E5C9C 801E9690 801E9698 */
