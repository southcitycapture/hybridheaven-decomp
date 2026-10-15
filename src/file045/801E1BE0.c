#include "common.h"

extern void *func_801BF6B0(s32);
extern void func_8038BEC8(f32);
extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, f32);
extern void D_8038BD88(f32, f32, f32);

struct func_801E1BE0_Obj {
    u8 pad0[0xC];
    s32 unkC;
};

extern void func_801C1000(s32, s32);
extern f32 D_801E8050;
extern s32 D_801E8054;
extern f32 D_801E8C30;
extern f32 D_801E8C34;
extern f32 D_801E8C38;
extern f32 D_801E8C3C;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (((struct func_801E1BE0_Obj *) func_801BF6B0(4))->unkC >= 9) {
        D_801E8050 = 18.0f;
        D_801E8054 = 0;
        func_801C1000(0, 0);
        return 1;
    }
    func_8038BE98(D_801E8C30);
    func_8038BD50(D_801E8C34, D_801E8C38, 12.6f);
    D_8038BD88(D_801E8C3C, 13.5f, -8.8f);
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file045/801E1BE0/func_801E1C94.s")


s32 func_801E20E0(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E20F0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2100(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2110(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E2120(s32 arg0, s32 arg1) {
    return 7;
}

struct func_801E337C_Node {
    u8 pad0[0x8];
    struct func_801E337C_Mid *unk8;
};
struct func_801E337C_Mid {
    u8 pad0[0x24];
    struct func_801E337C_Obj *unk24;
};
struct func_801E337C_Obj {
    u8 pad0[0x2C];
    struct func_801E337C_Data *unk2C;
};
struct func_801E337C_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
};
extern struct func_801E337C_Node *D_801DAB14;
extern void func_801CC470(s32, s32, s32, s32, f32);
s32 func_801C0B8C(u64 time);
s32 func_801C0B8C(u64 time);

struct func_801E2130_Struct1 {
    u8 pad0[0x8];
    struct func_801E2130_Struct2 *unk8;
};
struct func_801E2130_Struct2 {
    u8 pad0[0x24];
    struct func_801E2130_Struct3 *unk24;
};
struct func_801E2130_Struct3 {
    u8 pad0[0x2C];
    struct func_801E2130_Struct4 *unk2C;
};
struct func_801E2130_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    u16 unk12;
};

extern f32 D_801E8C88;
extern f32 D_801E8C8C;
extern f32 D_801E8C90;
extern f32 D_801E8C94;

s32 func_801E2130(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        ((struct func_801E2130_Struct1 *)D_801DAB14)->unk8->unk24->unk2C->unk4 = -113.0f;
        ((struct func_801E2130_Struct1 *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 10.5f;
        ((struct func_801E2130_Struct1 *)D_801DAB14)->unk8->unk24->unk2C->unkC = 30.0f;
        ((struct func_801E2130_Struct1 *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_8038BE98(D_801E8C88);
        func_8038BD50(D_801E8C8C, -2.5f, 42.0f);
        D_8038BD88(D_801E8C90, D_801E8C94, 31.6f);
        func_801CC470(0, 0x02A80037, 0, 1, 1.0f);
        return 8;
    }
    return 7;
}


s32 func_801E2244(s32 arg0, s32 arg1) {
    return 8;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E2254(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file045/801E1BE0/func_801E2290.s")


extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);
extern s32 D_801E8084;
extern s32 D_801E8088;

s32 func_801E247C(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(0, -0x40, -0x40, 0x1A);
    func_801CCE88(1, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(1, 0x40, 0x40, -0x1A);
    func_801CCE88(2, 0, 0, 0);
    func_801CCEC8(2, 0x20, 0x40, -0x20);
    func_801CCE50(0x28, 0x28, 0x28);
    D_801E8084 = 1;
    D_801E8088 = 0;
    return 2;
}

extern s32 func_801E2290();

s32 func_801E2540(s32 arg0, s32 arg1) {
    func_801E2290();
    return 0x3;
}


s32 func_801E2568(s32 arg0, s32 arg1) {
    func_801E2290();
    return 0x4;
}


s32 func_801E2590(s32 arg0, s32 arg1) {
    func_801E2290();
    return 0x5;
}


s32 func_801E25B8(s32 arg0, s32 arg1) {
    func_801E2290();
    return 0x5;
}


typedef struct func_801E25E0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E25E0_Struct;

s32 func_801E25E0(s32 arg0, s32 arg1) {
    if (((func_801E25E0_Struct *)func_801BF6B0(1))->unkC >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E2620(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E2630(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2640(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2650(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2660(s32 arg0, s32 arg1) {
    return 5;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E2670(s32 arg0, s32 arg1) {
    func_801C2420(0x463, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E26A4_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad3[0xC];
    void *unk30;
};

struct func_801E26A4_Obj {
    u8 pad0[0x2C];
    struct func_801E26A4_Data *unk2C;
};

struct func_801E26A4_Node {
    struct func_801E26A4_Obj *unk0;
};

extern u8 D_8038D840[];
extern s32 D_8038D850;
extern struct func_801E26A4_Node *D_8038D854;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern s32 D_8017AE98;

s32 func_801E26A4(s32 arg0, s32 arg1) {
    struct func_801E26A4_Node **v;

    func_80005E44(D_8038D850, D_8038D840);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x463, 0);
    v = &D_8038D854;
    (*v)->unk0->unk2C->unk4 = 0.0f;
    (*v)->unk0->unk2C->unk8 = 0.0f;
    (*v)->unk0->unk2C->unkC = 0.0f;
    (*v)->unk0->unk2C->unk18 = 1.0f;
    (*v)->unk0->unk2C->unk1C = 1.0f;
    (*v)->unk0->unk2C->unk20 = 1.0f;
    (*v)->unk0->unk2C->unk12 = 0;
    (*v)->unk0->unk2C->unk30 = &D_8017AE98;
    return 2;
}


s32 func_801E279C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E27AC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E27BC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E27CC(s32 arg0, s32 arg1) {
    return 5;
}

extern void D_8038BA70(void);
extern u8 D_8038DD90[];


s32 func_801E27DC(s32 arg0, s32 arg1) {
    func_801C2420(0x464, D_8038DD90);
    D_8038BA70();
    return 1;
}


extern s32 D_8038D8CC;
extern u8 D_8038D88C[];
extern u8 D_801E80E8[];
extern u8 D_801E80F8[];
extern u8 D_801E8108[];
extern u8 D_801D9768[];
extern u8 D_801D9FE8[];
extern u8 D_801DA088[];
extern struct func_801E4FC4_Struct1 *D_8038D8D0;

typedef struct func_801E2818_Struct2 {
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
} func_801E2818_Struct2;

typedef struct func_801E2818_Struct1 {
    u8 pad0[0x30];
    func_801E2818_Struct2 *unk30;
} func_801E2818_Struct1;

#define OBJ ((func_801E2818_Struct1 **)D_8038D8D0)

s32 func_801E2818(s32 arg0, s32 arg1) {
    s32 i;

    if (*(s32 *)((u8 *)func_801BF6B0(2) + 0xC) < 2) {
        return 1;
    }
    func_80005E44(D_8038D8CC, D_8038D88C);
    func_80005E44(D_8038D8CC, D_801E80F8);
    func_80005E44(D_8038D8CC, D_801E80F8);
    func_80005E44(D_8038D8CC, D_801E8108);
    for (i = 0; i != 2; i++) {
        func_80005E44(D_8038D8CC, D_801E80E8);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x463, 2);
    func_8012C89C(D_8038D8CC, 1, 0x463, 3);
    func_8012C89C(D_8038D8CC, 2, 0x463, 4);
    func_8012C89C(D_8038D8CC, 3, 0x463, 5);
    func_8012C89C(D_8038D8CC, 4, 0x464, 0);
    func_8012C89C(D_8038D8CC, 5, 0x464, 2);
    OBJ[0]->unk30->unk4 = 0.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = 0.0f;
    OBJ[0]->unk30->unk30 = (s32)D_801D9768 | 0x40000000;
    OBJ[0]->unk30->unk24 = 0x100;
    OBJ[0]->unk30->unk48 = 0xFF;
    OBJ[0]->unk30->unk49 = 0xFF;
    OBJ[0]->unk30->unk4A = 0xFF;
    OBJ[0]->unk30->unk4B = 0xFF;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[0]->unk30->unk18 = 1.0f;
    OBJ[0]->unk30->unk1C = 1.0f;
    OBJ[0]->unk30->unk20 = 1.0f;
    OBJ[1]->unk30->unk4 = 0.0f;
    OBJ[1]->unk30->unk8 = 0.0f;
    OBJ[1]->unk30->unkC = 0.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    OBJ[1]->unk30->unk24 = 0x300;
    OBJ[1]->unk30->unk48 = 0;
    OBJ[1]->unk30->unk49 = 0xFF;
    OBJ[1]->unk30->unk4A = 0xFF;
    OBJ[1]->unk30->unk4B = 0xFF;
    OBJ[1]->unk30->unk4C = 0xFF;
    OBJ[1]->unk30->unk4D = 0xFF;
    OBJ[1]->unk30->unk4E = 0xFF;
    OBJ[1]->unk30->unk4F = 0xFF;
    OBJ[2]->unk30->unk4 = 0.0f;
    OBJ[2]->unk30->unk8 = 0.0f;
    OBJ[2]->unk30->unkC = 0.0f;
    OBJ[2]->unk30->unk12 = 0;
    OBJ[2]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    OBJ[2]->unk30->unk24 = 0x300;
    OBJ[2]->unk30->unk48 = 0;
    OBJ[2]->unk30->unk49 = 0xFF;
    OBJ[2]->unk30->unk4A = 0xFF;
    OBJ[2]->unk30->unk4B = 0;
    OBJ[2]->unk30->unk4C = 0xFF;
    OBJ[2]->unk30->unk4D = 0xFF;
    OBJ[2]->unk30->unk4E = 0xFF;
    OBJ[2]->unk30->unk4F = 0xFF;
    OBJ[3]->unk30->unk4 = 0.0f;
    OBJ[3]->unk30->unk8 = 0.0f;
    OBJ[3]->unk30->unkC = 0.0f;
    OBJ[3]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk30 = (s32)D_801DA088 | 0x40000000;
    OBJ[3]->unk30->unk24 = 0x100;
    OBJ[3]->unk30->unk48 = 0xFF;
    OBJ[3]->unk30->unk49 = 0xFF;
    OBJ[3]->unk30->unk4A = 0xFF;
    OBJ[3]->unk30->unk4B = 0x7F;
    OBJ[4]->unk30->unk4 = -145.0f;
    OBJ[4]->unk30->unk8 = 0.0f;
    OBJ[4]->unk30->unkC = 0.0f;
    OBJ[4]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk18 = 1.0f;
    OBJ[4]->unk30->unk1C = 1.0f;
    OBJ[4]->unk30->unk20 = 1.0f;
    OBJ[5]->unk30->unk4 = 0.0f;
    OBJ[5]->unk30->unk8 = 0.0f;
    OBJ[5]->unk30->unkC = 0.0f;
    OBJ[5]->unk30->unk12 = 0;
    OBJ[5]->unk30->unk18 = 1.0f;
    OBJ[5]->unk30->unk1C = 1.0f;
    OBJ[5]->unk30->unk20 = 1.0f;
    return 2;
}


s32 func_801E2DC8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2DD8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2DE8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2DF8(s32 arg0, s32 arg1) {
    return 5;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E2E08(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


void func_801E2E4C(void) {
}


extern s32 D_801E8130;
extern s32 D_801E8134;

s32 func_801E2E54(s32 arg0, s32 arg1) {
    D_801E8130 = 1;
    D_801E8134 = 0;
    return 2;
}


s32 func_801E2E78(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2E88(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2E98(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2EA8(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E2EB8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file045/801E1BE0/func_801E2EFC.s")


extern s32 D_801E8150;
extern s32 D_801E8154;

s32 func_801E3030(s32 arg0, s32 arg1) {
    D_801E8150 = 1;
    D_801E8154 = 0;
    return 2;
}

extern s32 func_801E2EFC();

s32 func_801E3054(s32 arg0, s32 arg1) {
    func_801E2EFC();
    return 0x3;
}


s32 func_801E307C(s32 arg0, s32 arg1) {
    func_801E2EFC();
    return 0x4;
}


s32 func_801E30A4(s32 arg0, s32 arg1) {
    func_801E2EFC();
    return 0x5;
}


s32 func_801E30CC(s32 arg0, s32 arg1) {
    func_801E2EFC();
    return 0x5;
}



s32 func_801E30F4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3138(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3148(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3158(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3168(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E3178(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E31BC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E31CC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E31DC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E31EC(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E31FC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3240(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3250(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3260(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3270(s32 arg0, s32 arg1) {
    return 4;
}


extern void func_801CC318(void);
extern void func_801CC458(s32 arg0, void *arg1);
extern void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];

s32 func_801E3280(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    return 1;
}

extern struct func_801E527C_Root func_801DAAF0;
struct func_801E527C_Node {
    u8 pad0[0x8];
    struct func_801E527C_Node *unk8;
};
struct func_801E527C_Root {
    u8 pad0[0x24];
    struct func_801E527C_Node *unk24;
};
extern void func_80005670();
extern void func_801CC530();
extern void func_801CEDBC();
extern void func_801CEDC8();
extern u8 D_801DAD14[];

s32 func_801E3314(s32 arg0, s32 arg1) {
    func_80005670(func_801DAAF0.unk24, func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(func_801DAAF0.unk24->unk8, D_801DAD14);
    func_801CC530();
    return 2;
}







s32 func_801E337C(s32 arg0, s32 arg1) {
    struct func_801E337C_Obj *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -4.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = -9.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
        return 3;
    }
    return 2;
}


s32 func_801E3440(s32 arg0, s32 arg1) {
    return 4;
}

extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E3450(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        func_801CC4D8(0, 0x01B8003A, 0, 0, 10.0f);
        return 5;
    }
    return 4;
}


extern s32 func_801CE274();

s32 func_801E34B4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8003A, 0, 0, 3.0f);
        return 6;
    }
    return 5;
}



struct func_801E350C_Vec {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E350C_Holder {
    u8 pad0[0x2C];
    struct func_801E350C_Vec *unk2C;
};

struct func_801E350C_Mid {
    u8 pad0[0x24];
    struct func_801E350C_Holder *unk24;
};

struct func_801E350C_Head {
    u8 pad0[0x8];
    struct func_801E350C_Mid *unk8;
};

extern s32 func_801CE2D0(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern f32 D_801E8C98;

s32 func_801E350C(s32 arg0, s32 arg1) {
    struct func_801E350C_Vec *temp_v0;

    if (func_801CE284() != 0) {
        return 7;
    }
    if ((func_801CE2D0(0x01B8003A, 0x2D) != 0) || (func_801CE2D0(0x01B8003A, 0x42) != 0)) {
        temp_v0 = (*(struct func_801E350C_Head **) ((u8 *) &func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x677, D_801E8C98, 1.0f);
    }
    return 6;
}


s32 func_801E35A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x50DF20) != 0) {
        return 8;
    }
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file045/801E1BE0/func_801E35E4.s")


s32 func_801E3698(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E36A8(s32 arg0, s32 arg1) {
    D_801DAB14->unk8->unk24->unk2C->unk4 = 5120.0f;
    func_801CC470(0, 0x0168003F, 0, 0x1100, 1.0f);
    return 0xB;
}


s32 func_801E3710(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E3720(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E3730(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E3740(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E3750(s32 arg0, s32 arg1) {
    return 16;
}



s32 func_801E3760(s32 arg0, s32 arg1) {
    s32 *ptr;

    ptr = func_801BF6B0(0);
    if (ptr[3] >= 8) {
        return 0x11;
    }
    return 0x10;
}


s32 func_801E37A0(s32 arg0, s32 arg1) {
    func_801CC470(0, 0x02A80037, 0, 0, 4.0f);
    return 0x12;
}


s32 func_801CE284();

s32 func_801E37E8(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x02A80038, 0, 0, 3.0f);
        return 0x13;
    }
    return 0x12;
}


s32 func_801E3840(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x02A80038, 0, 0x100, 10.0f);
        return 0x14;
    }
    return 0x13;
}


s32 func_801E3898(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801E38A8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E38EC_Inner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    u16 unk12;
};

struct func_801E38EC_Sub {
    u8 pad0[0x2C];
    struct func_801E38EC_Inner *unk2C;
};

struct func_801E38EC_Node {
    u8 pad0[0x8];
    struct func_801E38EC_Node *unk8;
    u8 pad1[0x18];
    struct func_801E38EC_Sub *unk24;
};

s32 func_801E38EC(s32 arg0, s32 arg1) {
    struct func_801E38EC_Sub *temp_v0;

    temp_v0 = ((struct func_801E38EC_Node *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -120.5f;
        ((struct func_801E38EC_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = -22.0f;
        ((struct func_801E38EC_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = 32.5f;
        ((struct func_801E38EC_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(1, 0x02A80034, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E39C8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E39D8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E39E8(s32 arg0, s32 arg1) {
    return 5;
}


extern s32 func_801C1B1C(void);

s32 func_801E39F8(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}

extern void func_801CED5C(s32);


s32 func_801E3A4C(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8004C, 0, 0, 3.0f);
    func_801CED5C(1);
    return 7;
}


extern s32 D_801E821C;

s32 func_801E3A9C(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004C, 0, 0, 4.0f);
        D_801E821C = 0;
        return 8;
    }
    return 7;
}

extern s32 func_801CEDD4(void);
extern s32 func_801CEDE4(void);


s32 func_801E3AFC(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E821C;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 8;
case0:
    if (func_801CEDE4() == 0) {
        goto ret8;
    }
    func_801CC4D8(1, 0x02A80034, 0, 0, 3.0f);
    D_801E821C = 1;
    goto ret8;
case1:
    if (func_801CEDD4() != 0) {
        goto ret8;
    }
    func_801CC470(1, 0x02A80034, 0, 0x100, 10.0f);
    func_801CED5C(0);
    return 9;
ret8:
    return 8;
}


s32 func_801E3BC0(s32 arg0, s32 arg1) {
    if ((((struct func_801E1BE0_Obj *) func_801BF6B0(7))->unkC < 8) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 0xA;
}


s32 func_801E3C14(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3C24(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3C34(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x493E0) != 0) {
        return 1;
    }
    return 0;
}


s32 func_801E3C70(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3C80(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3C90(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3CA0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3CB0(s32 arg0, s32 arg1) {
    return 6;
}

extern s16 D_80089354;
extern s32 D_801D8D60;
extern s32 D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

s32 func_801E3CC0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF4240) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        return 7;
    }
    return 6;
}


extern u8 D_801BBD54;

s32 func_801E3D34(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E3D5C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3D6C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3D7C(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E3D8C(s32 arg0, s32 arg1) {
    return 2;
}


typedef struct func_801E3D9C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E3D9C_Struct;

extern func_801E3D9C_Struct D_801E828C;

s32 func_801E3D9C(s32 arg0, s32 arg1) {
    func_801E3D9C_Struct sp1C;

    sp1C = D_801E828C;
    func_801C18CC(1, &sp1C);
    return 3;
}



s32 func_801E3DEC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3;
    }
    return 0x4;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E7790[];

s32 func_801E3E1C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7790);
    return 5;
}


s32 func_8038CBF0(void);

s32 func_801E3E50(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E3E80(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7;
}


typedef struct func_801E3EA8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E3EA8_Struct;

extern func_801E3EA8_Struct D_801E8298;

s32 func_801E3EA8(s32 arg0, s32 arg1) {
    func_801E3EA8_Struct sp1C;

    sp1C = D_801E8298;
    func_801C18CC(1, (void *) &sp1C);
    return 0x8;
}



s32 func_801E3EF8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8;
    }
    return 0x9;
}


s32 func_801E3F28(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA;
}


s32 func_801E3F50(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3F60(s32 arg0, s32 arg1) {
    return 11;
}


extern void func_8038D28C(s32);
extern f32 D_801E8CA0;
extern f32 D_801E8CA4;
extern f32 D_801E8CA8;

s32 func_801E3F70(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BE98(D_801E8CA0);
    func_8038BD50(D_801E8CA4, 12.5f, -10.8f);
    D_8038BD88(D_801E8CA8, 14.5f, -40.2f);
    func_8038D28C(0x72);
    return 1;
}


s32 func_801E3FEC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3FFC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E400C(s32 arg0, s32 arg1) {
    if ((((struct func_801E1BE0_Obj *)func_801BF6B0(7))->unkC < 0x21) || (func_801C1B1C() == 0)) {
        return 3;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file045/801E1BE0/func_801E4060.s")


typedef struct func_801E4270_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4270_Struct;

s32 func_801E4270(s32 arg0, s32 arg1) {
    if ((((func_801E4270_Struct *)func_801BF6B0(7))->unkC < 0x26) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}



struct func_801E42C4_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E42C4(s32 arg0, s32 arg1) {
    if ((((struct func_801E42C4_Struct *)func_801BF6B0(7))->unkC < 0x31) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file045/801E1BE0/func_801E4318.s")


typedef struct func_801E4504_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4504_Struct;

s32 func_801E4504(s32 arg0, s32 arg1) {
    if ((((func_801E4504_Struct *)func_801BF6B0(7))->unkC < 0x36) || (func_801C1B1C() == 0)) {
        return 8;
    }
    return 9;
}


s32 func_801E4558(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E4568(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E4578(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E4588(s32 arg0, s32 arg1) {
    return 12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file045/801E1BE0/func_801E4598.s")


extern s32 D_801E833C;
extern s32 D_801E8340;

s32 func_801E45DC(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(0, -0x40, -0x40, 0x1A);
    func_801CCE88(1, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(1, 0x40, 0x40, -0x1A);
    func_801CCE88(2, 0, 0, 0);
    func_801CCEC8(2, 0x20, 0x40, -0x20);
    func_801CCE50(0x28, 0x28, 0x28);
    D_801E833C = 1;
    D_801E8340 = 0;
    return 2;
}


s32 func_801E46A0(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E46B0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E46C0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E46D0(s32 arg0, s32 arg1) {
    return 5;
}


typedef struct func_801E46E0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E46E0_Struct;

s32 func_801E46E0(s32 arg0, s32 arg1) {
    if (((func_801E46E0_Struct *)func_801BF6B0(1))->unkC >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4720(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4730(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4740(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4750(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4760(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E4770(s32 arg0, s32 arg1) {
    func_801C2420(0x463, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E47A4_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad3[0xC];
    void *unk30;
};

struct func_801E47A4_Obj {
    u8 pad0[0x2C];
    struct func_801E47A4_Data *unk2C;
};

struct func_801E47A4_Node {
    struct func_801E47A4_Obj *unk0;
};


s32 func_801E47A4(s32 arg0, s32 arg1) {
    struct func_801E47A4_Node **v;

    func_80005E44(D_8038D850, D_8038D840);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x463, 0);
    v = &D_8038D854;
    (*v)->unk0->unk2C->unk4 = 0.0f;
    (*v)->unk0->unk2C->unk8 = 0.0f;
    (*v)->unk0->unk2C->unkC = 0.0f;
    (*v)->unk0->unk2C->unk18 = 1.0f;
    (*v)->unk0->unk2C->unk1C = 1.0f;
    (*v)->unk0->unk2C->unk20 = 1.0f;
    (*v)->unk0->unk2C->unk12 = 0;
    (*v)->unk0->unk2C->unk30 = &D_8017AE98;
    return 2;
}


s32 func_801E489C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E48AC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E48BC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E48CC(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E48DC(s32 arg0, s32 arg1) {
    func_801C2420(0x464, D_8038DD90);
    D_8038BA70();
    return 1;
}


extern u8 D_801E83A0[];
extern u8 D_801E83B0[];
extern u8 D_801E83C0[];
extern u8 D_801D9F00[];

typedef struct func_801E4918_Struct2 {
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
} func_801E4918_Struct2;

typedef struct func_801E4918_Struct1 {
    u8 pad0[0x30];
    func_801E4918_Struct2 *unk30;
} func_801E4918_Struct1;

#define OBJ4918 ((func_801E4918_Struct1 **)D_8038D8D0)

s32 func_801E4918(s32 arg0, s32 arg1) {
    s32 i;

    if (*(s32 *)((u8 *)func_801BF6B0(2) + 0xC) < 2) {
        return 1;
    }
    func_80005E44(D_8038D8CC, D_801E83A0);
    func_80005E44(D_8038D8CC, D_801E83A0);
    func_80005E44(D_8038D8CC, D_801E83B0);
    func_80005E44(D_8038D8CC, D_801E83C0);
    for (i = 0; i != 2; i++) {
        func_80005E44(D_8038D8CC, D_801E83A0);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x463, 2);
    func_8012C89C(D_8038D8CC, 1, 0x463, 3);
    func_8012C89C(D_8038D8CC, 2, 0x463, 4);
    func_8012C89C(D_8038D8CC, 3, 0x463, 5);
    func_8012C89C(D_8038D8CC, 4, 0x464, 0);
    func_8012C89C(D_8038D8CC, 5, 0x464, 2);
    OBJ4918[0]->unk30->unk4 = 0.0f;
    OBJ4918[0]->unk30->unk8 = 0.0f;
    OBJ4918[0]->unk30->unkC = 0.0f;
    OBJ4918[0]->unk30->unk12 = 0;
    OBJ4918[0]->unk30->unk18 = 1.0f;
    OBJ4918[0]->unk30->unk1C = 1.0f;
    OBJ4918[0]->unk30->unk20 = 1.0f;
    OBJ4918[1]->unk30->unk4 = 0.0f;
    OBJ4918[1]->unk30->unk8 = 0.0f;
    OBJ4918[1]->unk30->unkC = 0.0f;
    OBJ4918[1]->unk30->unk12 = 0;
    OBJ4918[1]->unk30->unk30 = (s32)D_801D9F00 | 0x40000000;
    OBJ4918[1]->unk30->unk24 = 0x300;
    OBJ4918[1]->unk30->unk48 = 0;
    OBJ4918[1]->unk30->unk49 = 0xFF;
    OBJ4918[1]->unk30->unk4A = 0xFF;
    OBJ4918[1]->unk30->unk4B = 0xFF;
    OBJ4918[1]->unk30->unk4C = 0xFF;
    OBJ4918[1]->unk30->unk4D = 0xFF;
    OBJ4918[1]->unk30->unk4E = 0xFF;
    OBJ4918[1]->unk30->unk4F = 0xFF;
    OBJ4918[2]->unk30->unk4 = 0.0f;
    OBJ4918[2]->unk30->unk8 = 0.0f;
    OBJ4918[2]->unk30->unkC = 0.0f;
    OBJ4918[2]->unk30->unk12 = 0;
    OBJ4918[2]->unk30->unk30 = (s32)D_801D9F00 | 0x40000000;
    OBJ4918[2]->unk30->unk24 = 0x300;
    OBJ4918[2]->unk30->unk48 = 0;
    OBJ4918[2]->unk30->unk49 = 0xFF;
    OBJ4918[2]->unk30->unk4A = 0xFF;
    OBJ4918[2]->unk30->unk4B = 0;
    OBJ4918[2]->unk30->unk4C = 0xFF;
    OBJ4918[2]->unk30->unk4D = 0xFF;
    OBJ4918[2]->unk30->unk4E = 0xFF;
    OBJ4918[2]->unk30->unk4F = 0xFF;
    OBJ4918[3]->unk30->unk4 = 0.0f;
    OBJ4918[3]->unk30->unk8 = 0.0f;
    OBJ4918[3]->unk30->unkC = 0.0f;
    OBJ4918[3]->unk30->unk12 = 0;
    OBJ4918[3]->unk30->unk30 = (s32)D_801DA088 | 0x40000000;
    OBJ4918[3]->unk30->unk24 = 0x100;
    OBJ4918[3]->unk30->unk48 = 0xFF;
    OBJ4918[3]->unk30->unk49 = 0xFF;
    OBJ4918[3]->unk30->unk4A = 0xFF;
    OBJ4918[3]->unk30->unk4B = 0x7F;
    OBJ4918[4]->unk30->unk4 = -145.0f;
    OBJ4918[4]->unk30->unk8 = 0.0f;
    OBJ4918[4]->unk30->unkC = 0.0f;
    OBJ4918[4]->unk30->unk12 = 0;
    OBJ4918[4]->unk30->unk18 = 1.0f;
    OBJ4918[4]->unk30->unk1C = 1.0f;
    OBJ4918[4]->unk30->unk20 = 1.0f;
    OBJ4918[5]->unk30->unk4 = 0.0f;
    OBJ4918[5]->unk30->unk8 = 0.0f;
    OBJ4918[5]->unk30->unkC = 0.0f;
    OBJ4918[5]->unk30->unk12 = 0;
    OBJ4918[5]->unk30->unk18 = 1.0f;
    OBJ4918[5]->unk30->unk1C = 1.0f;
    OBJ4918[5]->unk30->unk20 = 1.0f;
    return 2;
}


s32 func_801E4E54(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4E64(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4E74(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4E84(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E4E94(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


void func_801E4ED8(void) {
}


extern s32 D_801E83E8;
extern s32 D_801E83EC;

s32 func_801E4EE0(s32 arg0, s32 arg1) {
    D_801E83E8 = 1;
    D_801E83EC = 0;
    return 2;
}


s32 func_801E4F04(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4F14(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4F24(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4F34(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E4F44(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


void func_801E4F88(void) {
}


extern s32 D_801E8408;
extern s32 D_801E840C;

s32 func_801E4F90(s32 arg0, s32 arg1) {
    D_801E8408 = 1;
    D_801E840C = 0;
    return 2;
}


s32 func_801E4FB4(s32 arg0, s32 arg1) {
    return 3;
}


struct func_801E4FC4_Struct1 {
    u8 pad0[0x8];
    struct func_801E4FC4_Struct2 *unk8;
};
struct func_801E4FC4_Struct2 {
    u8 pad0[0x22];
    u8 unk22;
};

s32 func_801E4FC4(s32 arg0, s32 arg1) {
    D_8038D8D0->unk8->unk22 = 0;
    return 4;
}


s32 func_801E4FE4(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4FF4(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E5004(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E5048(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E5058(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5068(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5078(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E5088(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E50CC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E50DC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E50EC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E50FC(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E510C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E5150(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E5160(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5170(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5180(s32 arg0, s32 arg1) {
    return 4;
}


extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern u8 D_801DB334[];
extern u8 D_801DB338[];

s32 func_801E5190(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    func_801C2420(0x2F, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB314);
    func_801CC4C0(2, D_801DB318);
    func_801CC458(3, D_801DB334);
    func_801CC4C0(3, D_801DB338);
    return 1;
}




extern u8 D_801DB300[];
extern u8 D_801DB320[];

s32 func_801E527C(s32 arg0, s32 arg1) {
    func_80005670(func_801DAAF0.unk24, func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(func_801DAAF0.unk24->unk8, D_801DAD14);
    func_80005670(func_801DAAF0.unk24->unk8->unk8, D_801DB300);
    func_80005670(func_801DAAF0.unk24->unk8->unk8->unk8, D_801DB320);
    func_801CC530();
    return 2;
}


struct func_801E5320_Struct1 {
    u8 pad0[0x8];
    struct func_801E5320_Struct2 *unk8;
};

struct func_801E5320_Struct2 {
    u8 pad0[0x24];
    struct func_801E5320_Struct3 *unk24;
};

struct func_801E5320_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5320_Struct4 *unk2C;
};

struct func_801E5320_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

extern f32 D_801E8CE8;
extern f32 D_801E8CEC;

s32 func_801E5320(s32 arg0, s32 arg1) {
    struct func_801E5320_Struct3 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E8CE8;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801E8CEC;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01B80025, 0, 0x100, 9.0f);
        return 3;
    }
    return 2;
}


s32 func_801E53E8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E53F8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E5408(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5418(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5428(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5438(s32 arg0, s32 arg1) {
    return 9;
}




s32 func_801E5448(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(0, 0x0348007A, 0, 0, 3.0f);
        return 0xA;
    }
    return 9;
}


extern s32 D_801E8480;

s32 func_801E54A8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        D_801E8480 = 0;
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file045/801E1BE0/func_801E5508.s")


s32 func_801E5648(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E5658(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E569C_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E569C_StructE;

typedef struct func_801E569C_StructD {
    u8 pad0[0x2C];
    func_801E569C_StructE *unk2C;
} func_801E569C_StructD;

typedef struct func_801E569C_StructC {
    u8 pad0[0x24];
    func_801E569C_StructD *unk24;
} func_801E569C_StructC;

typedef struct func_801E569C_StructB {
    u8 pad0[0x8];
    func_801E569C_StructC *unk8;
} func_801E569C_StructB;

typedef struct func_801E569C_StructA {
    u8 pad0[0x8];
    func_801E569C_StructB *unk8;
} func_801E569C_StructA;

extern f32 D_801E8CF0;
extern f32 D_801E8CF4;

s32 func_801E569C(s32 arg0, s32 arg1) {
    func_801E569C_StructD *temp_v0;

    temp_v0 = ((func_801E569C_StructA *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E8CF0;
        ((func_801E569C_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E569C_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E8CF4;
        ((func_801E569C_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xBBB;
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5774(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5784(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5794(s32 arg0, s32 arg1) {
    return 5;
}


struct func_801E57A4_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E57A4(s32 arg0, s32 arg1) {
    if ((((struct func_801E57A4_Struct *) func_801BF6B0(7))->unkC < 0x21) || (func_801C1B1C() == 0)) {
        return 0x5;
    }
    return 0x6;
}



s32 func_801E57F8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8004D, 0, 0, 3.0f);
    func_801CED5C(1);
    return 7;
}


extern s32 D_801E84B8;

s32 func_801E5848(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004D, 0, 0, 5.0f);
        D_801E84B8 = 0;
        return 8;
    }
    return 7;
}



s32 func_801E58A8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E84B8;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 8;

case0:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 3.0f);
        D_801E84B8 = 1;
    }
    goto ret8;

case1:
    if (func_801CEDD4() != 0) {
        goto ret8;
    }
    func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
    return 9;

ret8:
    return 8;
}


s32 func_801E5970(s32 arg0, s32 arg1) {
    if ((((struct func_801E1BE0_Obj *) func_801BF6B0(7))->unkC < 0x26) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 0xA;
}


s32 func_801E59C4(s32 arg0, s32 arg1) {
    if ((*(s32 *) ((u8 *) func_801BF6B0(7) + 0xC) < 0x29) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}


s32 func_801E5A18(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E5A28(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E5A38(s32 arg0, s32 arg1) {
    return 14;
}


typedef struct func_801E5A48_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5A48_Struct;

s32 func_801E5A48(s32 arg0, s32 arg1) {
    if ((((func_801E5A48_Struct *)func_801BF6B0(7))->unkC < 0x2E) || (func_801C1B1C() == 0)) {
        return 0xE;
    }
    return 0xF;
}


s32 func_801E5A9C(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E5AAC(s32 arg0, s32 arg1) {
    return 16;
}



s32 func_801E5ABC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801E8CF8;
extern f32 D_801E8CFC;

struct func_801E5B00_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

struct func_801E5B00_Obj {
    u8 pad0[0x2C];
    struct func_801E5B00_Data *unk2C;
};

struct func_801E5B00_Node {
    u8 pad0[0x8];
    struct func_801E5B00_Node *unk8;
    u8 pad1[0x18];
    struct func_801E5B00_Obj *unk24;
};

s32 func_801E5B00(s32 arg0, s32 arg1) {
    struct func_801E5B00_Obj *temp_v0;

    temp_v0 = ((struct func_801E5B00_Node *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E8CF8;
        ((struct func_801E5B00_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5B00_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E8CFC;
        ((struct func_801E5B00_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(2, 0x0320003A, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5BE8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5BF8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5C08(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E5C18(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}



s32 func_801E5C6C(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x0320003B, 0, 0, 30.0f);
    return 7;
}

extern s32 D_801E8500;
extern s32 func_801D2C00();

s32 func_801E5CB4(s32 arg0, s32 arg1) {
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320003B, 0, 0, 10.0f);
        D_801E8500 = 0;
        return 8;
    }
    return 7;
}


extern s32 func_801D2C10();

s32 func_801E5D14(s32 arg0, s32 arg1) {
    if (D_801E8500 == 0) {
        goto case0;
    }
    if (D_801E8500 == 1) {
        goto case1;
    }
    return 8;
case0:
    if (func_801D2C10() != 0) {
        func_801CC4D8(2, 0x0320003A, 0, 0, 30.0f);
        D_801E8500 = 1;
    }
    goto ret8;
case1:
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320003A, 0, 0x100, 10.0f);
        return 9;
    }
ret8:
    return 8;
}


s32 func_801E5DD0(s32 arg0, s32 arg1) {
    if ((((struct func_801E1BE0_Obj *) func_801BF6B0(7))->unkC < 8) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


s32 func_801E5E24(s32 arg0, s32 arg1) {
    if ((*(s32 *) ((u8 *) func_801BF6B0(7) + 0xC) < 0x19) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}



s32 func_801E5E78(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200039, 0, 0, 30.0f);
    return 0xC;
}


s32 func_801E5EC0(s32 arg0, s32 arg1) {
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x03200039, 0, 0, 3.0f);
        D_801E8500 = 0;
        return 0xD;
    }
    return 0xC;
}


s32 func_801E5F20(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E8500;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0xD;

case0:
    if (func_801D2C10() == 0) {
        goto fail;
    }
    func_801CC4D8(2, 0x0320003A, 0, 0, 30.0f);
    D_801E8500 = 1;
    goto fail;

case1:
    if (func_801D2C00() != 0) {
        goto fail;
    }
    func_801CC470(2, 0x0320003A, 0, 0x100, 7.0f);
    return 0xE;

fail:
    return 0xD;
}


typedef struct func_801E5FDC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5FDC_Struct;


s32 func_801E5FDC(s32 arg0, s32 arg1) {
    func_801E5FDC_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x1E || func_801C1B1C() == 0) {
        return 0xE;
    }
    return 0xF;
}



typedef struct func_801E6030_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6030_Struct;

s32 func_801E6030(s32 arg0, s32 arg1) {
    if ((((func_801E6030_Struct *)func_801BF6B0(7))->unkC < 0x29) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}



s32 func_801E6084(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200039, 0, 0, 30.0f);
    return 0x11;
}


s32 func_801E60CC(s32 arg0, s32 arg1) {
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x03200039, 0, 0, 3.0f);
        D_801E8500 = 0;
        return 0x12;
    }
    return 0x11;
}


s32 func_801E612C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E8500;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x12;

case0:
    if (func_801D2C10() == 0) {
        goto fail;
    }
    func_801CC4D8(2, 0x0320001A, 0, 0, 30.0f);
    D_801E8500 = 1;
    goto fail;

case1:
    if (func_801D2C00() != 0) {
        goto fail;
    }
    func_801CC470(2, 0x0320001A, 0, 0x100, 7.0f);
    return 0x13;

fail:
    return 0x12;
}


typedef struct func_801E61E8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E61E8_Struct;

s32 func_801E61E8(s32 arg0, s32 arg1) {
    if ((((func_801E61E8_Struct *)func_801BF6B0(7))->unkC < 0x2E) || (func_801C1B1C() == 0)) {
        return 0x13;
    }
    return 0x14;
}



struct func_801E623C_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E623C(s32 arg0, s32 arg1) {
    if ((((struct func_801E623C_Struct *)func_801BF6B0(7))->unkC < 0x31) || (func_801C1B1C() == 0)) {
        return 20;
    }
    return 21;
}


s32 func_801E6290(s32 arg0, s32 arg1) {
    return 22;
}



s32 func_801E62A0(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x03200039, 0, 0, 3.0f);
    D_801E8500 = 0;
    return 0x17;
}


s32 func_801E62EC(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E8500;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x17;

case0:
    if (func_801D2C10() == 0) {
        goto fail;
    }
    func_801CC4D8(2, 0x0320001A, 0, 0, 30.0f);
    D_801E8500 = 1;
    goto fail;

case1:
    if (func_801D2C00() != 0) {
        goto fail;
    }
    func_801CC470(2, 0x0320001A, 0, 0x100, 7.0f);
    return 0x18;

fail:
    return 0x17;
}


typedef struct func_801E63A8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E63A8_Struct;


s32 func_801E63A8(s32 arg0, s32 arg1) {
    if ((((func_801E63A8_Struct *)func_801BF6B0(7))->unkC < 0x36) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E63FC(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801E640C(s32 arg0, s32 arg1) {
    return 26;
}



s32 func_801E641C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E6460_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E6460_Struct2 {
    u8 pad0[0x2C];
    struct func_801E6460_Struct3 *unk2C;
};

struct func_801E6460_Struct1 {
    u8 pad0[8];
    struct func_801E6460_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801E6460_Struct2 *unk24;
};

extern f32 D_801E8D00;
extern f32 D_801E8D04;

s32 func_801E6460(s32 arg0, s32 arg1) {
    struct func_801E6460_Struct2 *temp_v0;

    temp_v0 = ((struct func_801E6460_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E8D00;
        ((struct func_801E6460_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E6460_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E8D04;
        ((struct func_801E6460_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x120;
        func_801CC470(3, 0x0320001A, 0, 0x100, 7.0f);
        return 2;
    }
    return 1;
}


s32 func_801E6558(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E6568(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E6578(s32 arg0, s32 arg1) {
    return 5;
}


typedef struct func_801E6588_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6588_Struct;

s32 func_801E6588(s32 arg0, s32 arg1) {
    if (((func_801E6588_Struct *)func_801BF6B0(7))->unkC < 0xB || func_801C1B1C() == 0) {
        return 5;
    }
    return 6;
}


s32 func_801E65DC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E65EC(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E65FC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E660C(s32 arg0, s32 arg1) {
    if ((((struct func_801E1BE0_Obj *)func_801BF6B0(7))->unkC < 0xE) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


typedef struct func_801E6660_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E6660_Struct;

s32 func_801E6660(s32 arg0, s32 arg1) {
    if ((((func_801E6660_Struct *)func_801BF6B0(7))->unkC < 0x11) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}



s32 func_801E66B4(s32 arg0, s32 arg1) {
    func_801CC4D8(3, 0x03200039, 0, 0, 30.0f);
    return 0xC;
}

extern s32 D_801E8570;

s32 func_801E66FC(s32 arg0, s32 arg1) {
    if (func_801D2F30() == 0) {
        func_801CC470(3, 0x03200039, 0, 0, 3.0f);
        D_801E8570 = 0;
        return 0xD;
    }
    return 0xC;
}


extern s32 func_801D2F30();
extern s32 func_801D2F40();

s32 func_801E675C(s32 arg0, s32 arg1) {
    if (D_801E8570 == 0) {
        goto case0;
    }
    if (D_801E8570 == 1) {
        goto case1;
    }
    return 0xD;

case0:
    if (func_801D2F40() != 0) {
        func_801CC4D8(3, 0x0320001A, 0, 0, 30.0f);
        D_801E8570 = 1;
    }
    goto done;

case1:
    if (func_801D2F30() == 0) {
        func_801CC470(3, 0x0320001A, 0, 0x100, 7.0f);
        return 0xE;
    }

done:
    return 0xD;
}


s32 func_801E6818(s32 arg0, s32 arg1) {
    if ((((struct func_801E1BE0_Obj *) func_801BF6B0(7))->unkC < 0x16) || (func_801C1B1C() == 0)) {
        return 14;
    }
    return 15;
}



struct func_801E686C_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E686C(s32 arg0, s32 arg1) {
    if ((((struct func_801E686C_Struct *)func_801BF6B0(7))->unkC < 0x31) || (func_801C1B1C() == 0)) {
        return 15;
    }
    return 16;
}


s32 func_801E68C0(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E68D0(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E68E0(s32 arg0, s32 arg1) {
    return 19;
}


typedef struct func_801E68F0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E68F0_Struct;

s32 func_801E68F0(s32 arg0, s32 arg1) {
    if ((((struct func_801E68F0_Struct *)func_801BF6B0(7))->unkC < 0x36) || (func_801C1B1C() == 0)) {
        return 0x13;
    }
    return 0x14;
}


s32 func_801E6944(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801E6954(s32 arg0, s32 arg1) {
    return 21;
}



s32 func_801E6964(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x124F80) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 8, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E69EC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E6A1C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E6A2C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E6A3C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E6A4C(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801E6A5C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    if (func_801C0B8C(0x1E8480) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}



s32 func_801E6AEC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E6B14(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E6B24(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E6B34(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E6B44(s32 arg0, s32 arg1) {
    return 2;
}


typedef struct func_801E6B54_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6B54_Struct;

extern func_801E6B54_Struct D_801E8610;

s32 func_801E6B54(s32 arg0, s32 arg1) {
    func_801E6B54_Struct sp1C;

    sp1C = D_801E8610;
    func_801C18CC(1, (void *) &sp1C);
    return 3;
}



s32 func_801E6BA4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3;
    }
    return 0x4;
}


extern u8 D_801E7818[];

s32 func_801E6BD4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7818);
    return 5;
}



s32 func_801E6C08(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801E6C38(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7;
}


typedef struct func_801E6C60_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6C60_Struct;

extern func_801E6C60_Struct D_801E861C;

s32 func_801E6C60(s32 arg0, s32 arg1) {
    func_801E6C60_Struct sp1C;

    sp1C = D_801E861C;
    func_801C18CC(1, (void *) &sp1C);
    return 8;
}



s32 func_801E6CB0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8;
    }
    return 0x9;
}


s32 func_801E6CE0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA;
}


typedef struct func_801E6D08_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6D08_Struct;

extern func_801E6D08_Struct D_801E8628;

s32 func_801E6D08(s32 arg0, s32 arg1) {
    func_801E6D08_Struct sp1C;

    sp1C = D_801E8628;
    func_801C18CC(1, (void *) &sp1C);
    return 0xB;
}



s32 func_801E6D58(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}


s32 func_801E6D88(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xD;
}


typedef struct func_801E6DB0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6DB0_Struct;

extern func_801E6DB0_Struct D_801E8634;

s32 func_801E6DB0(s32 arg0, s32 arg1) {
    func_801E6DB0_Struct sp1C;

    sp1C = D_801E8634;
    func_801C18CC(1, (void *) &sp1C);
    return 0xE;
}



s32 func_801E6E00(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xE;
    }
    return 0xF;
}


s32 func_801E6E30(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x10;
}


typedef struct func_801E6E58_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6E58_Struct;

extern func_801E6E58_Struct D_801E8640;

s32 func_801E6E58(s32 arg0, s32 arg1) {
    func_801E6E58_Struct sp1C;

    sp1C = D_801E8640;
    func_801C18CC(1, &sp1C);
    return 0x11;
}



s32 func_801E6EA8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x11;
    }
    return 0x12;
}


extern u8 D_801E7868[];

s32 func_801E6ED8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7868);
    return 19;
}



s32 func_801E6F0C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x14;
    }
    return 0x13;
}


s32 func_801E6F3C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x15;
}


typedef struct func_801E6F64_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6F64_Struct;

extern func_801E6F64_Struct D_801E864C;

s32 func_801E6F64(s32 arg0, s32 arg1) {
    func_801E6F64_Struct sp1C;

    sp1C = D_801E864C;
    func_801C18CC(1, &sp1C);
    return 0x16;
}



s32 func_801E6FB4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x16;
    }
    return 0x17;
}


s32 func_801E6FE4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x18;
}


typedef struct func_801E700C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E700C_Struct;

extern func_801E700C_Struct D_801E8658;

s32 func_801E700C(s32 arg0, s32 arg1) {
    func_801E700C_Struct sp1C;

    sp1C = D_801E8658;
    func_801C18CC(1, (void *) &sp1C);
    return 0x19;
}



s32 func_801E705C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x19;
    }
    return 0x1A;
}


extern u8 D_801E79B8[];

s32 func_801E708C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E79B8);
    return 27;
}



s32 func_801E70C0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801E70F0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1D;
}


typedef struct func_801E7118_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7118_Struct;

extern func_801E7118_Struct D_801E8664;

s32 func_801E7118(s32 arg0, s32 arg1) {
    func_801E7118_Struct sp1C;

    sp1C = D_801E8664;
    func_801C18CC(1, &sp1C);
    return 0x1E;
}



s32 func_801E7168(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1E;
    }
    return 0x1F;
}


s32 func_801E7198(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x20;
}


typedef struct func_801E71C0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E71C0_Struct;

extern func_801E71C0_Struct D_801E8670;

s32 func_801E71C0(s32 arg0, s32 arg1) {
    func_801E71C0_Struct sp18;

    sp18 = D_801E8670;
    func_801C18CC(2, (void *) &sp18);
    return 0x21;
}



s32 func_801E7228(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x21;
    }
    return 0x22;
}


extern u8 D_801E7B14[];

s32 func_801E7258(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7B14);
    return 35;
}



s32 func_801E728C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x24;
    }
    return 0x23;
}


s32 func_801E72BC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x25;
}


typedef struct func_801E72E4_Struct {
    s32 w[6];
} func_801E72E4_Struct;

extern func_801E72E4_Struct D_801E8688;

s32 func_801E72E4(s32 arg0, s32 arg1) {
    func_801E72E4_Struct sp18;

    sp18 = D_801E8688;
    func_801C18CC(2, &sp18);
    return 0x26;
}



s32 func_801E734C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x26;
    }
    return 0x27;
}


s32 func_801E737C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x28;
}


typedef struct func_801E73A4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E73A4_Struct;

extern func_801E73A4_Struct D_801E86A0;

s32 func_801E73A4(s32 arg0, s32 arg1) {
    func_801E73A4_Struct sp18;

    sp18 = D_801E86A0;
    func_801C18CC(2, &sp18);
    return 0x29;
}



s32 func_801E740C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x29;
    }
    return 0x2A;
}


extern u8 D_801E7CF0[];

s32 func_801E743C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7CF0);
    return 43;
}



s32 func_801E7470(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2C;
    }
    return 0x2B;
}


s32 func_801E74A0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2D;
}


typedef struct func_801E74C8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E74C8_Struct;

extern func_801E74C8_Struct D_801E86B8;

s32 func_801E74C8(s32 arg0, s32 arg1) {
    func_801E74C8_Struct sp18;

    sp18 = D_801E86B8;
    func_801C18CC(2, &sp18);
    return 0x2E;
}



s32 func_801E7530(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2E;
    }
    return 0x2F;
}


s32 func_801E7560(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x30;
}


typedef struct func_801E7588_Struct {
    s32 w[9];
} func_801E7588_Struct;

s32 func_801C18CC(s32 arg0, func_801E7588_Struct *arg1);
extern func_801E7588_Struct D_801E86D0;

s32 func_801E7588(s32 arg0, s32 arg1) {
    func_801E7588_Struct sp1C;

    sp1C = D_801E86D0;
    func_801C18CC(3, &sp1C);
    return 49;
}



s32 func_801E75EC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x31;
    }
    return 0x32;
}


extern u8 D_801E7F74[];

s32 func_801E761C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7F74);
    return 51;
}



s32 func_801E7650(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x34;
    }
    return 0x33;
}


s32 func_801E7680(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x35;
}


typedef struct func_801E76A8_Struct {
    s32 w[9];
} func_801E76A8_Struct;

extern func_801E76A8_Struct D_801E86F4;

s32 func_801E76A8(s32 arg0, s32 arg1) {
    func_801E76A8_Struct sp1C;

    sp1C = D_801E86F4;
    func_801C18CC(3, &sp1C);
    return 54;
}



s32 func_801E770C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x36;
    }
    return 0x37;
}


s32 func_801E773C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x38;
}


s32 func_801E7764(s32 arg0, s32 arg1) {
    return 57;
}


s32 func_801E7774(s32 arg0, s32 arg1) {
    return 57;
}

