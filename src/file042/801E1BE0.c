#include "common.h"


extern void func_8038BEC8(f32);
extern void D_8038C158(void);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 1;
    }
    return 0;
}


extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E4F70;
extern f32 D_801E4F74;
extern f32 D_801E4F78;
extern f32 D_801E4F7C;
extern f32 D_801E4F80;
extern f32 D_801E4F84;
extern f32 D_801E4F88;
extern f32 D_801E4F8C;

s32 func_801E1C34(s32 arg0, s32 arg1) {
    f32 a = D_801E4F70, b = D_801E4F74, c = D_801E4F78;
    if (D_8038C17C(0.0f, 2.0f, 0x4174CCCD, 0xC20B3333, D_801E4F7C, 18.0f, D_801E4F80, D_801E4F84, a, D_801E4F88, b, a, D_801E4F8C, b, c, c) != 0) {
        return 2;
    }
    return 1;
}


extern s32 func_801C0B8C(u64);

s32 func_801E1CF8(s32 arg0, s32 arg1) {
    s32 temp;

    temp = func_801C0B8C(0x1E8480);
    if (temp != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}


extern f32 D_801E4F90;
extern f32 D_801E4F94;
extern f32 D_801E4F98;
extern f32 D_801E4F9C;
extern f32 D_801E4FA0;
extern f32 D_801E4FA4;
extern f32 D_801E4FA8;
extern f32 D_801E4FAC;
extern f32 D_801E4FB0;

s32 func_801E1D44(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, 0x411CCCCD, 0x422ACCCD, D_801E4F90, 3.0f, D_801E4F94, D_801E4F98, D_801E4F9C, D_801E4FA0, D_801E4FA4, D_801E4FA8, D_801E4FAC, D_801E4FB0, 53.0f, 53.0f) != 0) {
        return 4;
    }
    return 3;
}


s32 func_801E1E18(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        D_8038C158();
        return 0x5;
    }
    return 4;
}


extern f32 D_801E4FB4;
extern f32 D_801E4FB8;
extern f32 D_801E4FBC;
extern f32 D_801E4FC0;
extern f32 D_801E4FC4;
extern f32 D_801E4FC8;
extern f32 D_801E4FCC;
extern f32 D_801E4FD0;
extern f32 D_801E4FD4;
extern f32 D_801E4FD8;
extern f32 D_801E4FDC;

s32 func_801E1E64(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 0x42BB6666, 0x40A9999A, D_801E4FB4, D_801E4FB8, D_801E4FBC, D_801E4FC0, D_801E4FC4, D_801E4FC8, D_801E4FCC, D_801E4FD0, D_801E4FD4, D_801E4FD8, 50.5f, D_801E4FDC) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E1F40(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        D_8038C158();
        return 7;
    }
    return 6;
}



extern f32 D_801E4FE0;
extern f32 D_801E4FE4;
extern f32 D_801E4FE8;
extern f32 D_801E4FEC;
extern f32 D_801E4FF0;
extern f32 D_801E4FF4;
extern f32 D_801E4FF8;
extern f32 D_801E4FFC;
extern f32 D_801E5000;
extern f32 D_801E5004;
extern f32 D_801E5008;
extern f32 D_801E500C;

s32 func_801E1F8C(s32 arg0, s32 arg1) {
    f32 x = D_801E4FE0;
    if (D_8038C17C(0.0f, D_801E4FE4, (s32)0xC36B6666, (s32)0x417B3333,
                   D_801E4FE8, D_801E4FEC, D_801E4FF0, D_801E4FF4,
                   D_801E4FF8, D_801E4FFC, D_801E5000, D_801E5004,
                   D_801E5008, D_801E500C, x, x) != 0) {
        return 8;
    }
    return 7;
}


s32 func_801E2060(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E2070(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E2080(s32 arg0, s32 arg1) {
    return 10;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E2090(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801E4E14;

void func_801E20CC(void)
{
  s32 temp_t7;
  func_801CCEC8(0, *(((s8 *) (&D_801E4E14)) + 3), 0, 0);
  ;
  if ((D_801E4E14 += 4) >= 0x70)
  {
    D_801E4E14 = 0x10;
  }
}


extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E2124(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE88(1, 0xFF, 0, 0);
    func_801CCEC8(1, 0x3C, -0x3F, 1);
    func_801CCE50(0x5C, 0x2B, 6);
    D_801E4E14 = 0x10;
    return 2;
}


s32 func_801E21B8(s32 arg0, s32 arg1) {
    func_801E20CC();
    return 0x2;
}


extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern void func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DDD8[];
extern u8 D_8038DDF0[];
extern u8 D_8038DF70[];

s32 func_801E21E0(s32 arg0, s32 arg1) {
    func_801C2420(0x263, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x264, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0x449, D_8038DDD8);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDF0);
    D_8038BA70();
    *(s32 *)(D_8038DF70 + 4) = 0xE000;
    if (func_801C2570(0x2DD, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}

extern void func_8038D28C(s32 a0);
typedef struct func_801E2644_Struct3 {
    u8 pad0[0x8];
    f32 unk8;
} func_801E2644_Struct3;
typedef struct func_801E2644_Struct2 {
    u8 pad0[0x30];
    func_801E2644_Struct3 *unk30;
} func_801E2644_Struct2;
typedef struct func_801E2644_Struct1 {
    func_801E2644_Struct2 *unk0;
} func_801E2644_Struct1;
extern func_801E2644_Struct1 *D_8038D8D0;

typedef struct func_801E22A4_Struct1 {
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
} func_801E22A4_Struct1;
typedef struct func_801E22A4_Struct2 {
    u8 pad0[0x30];
    func_801E22A4_Struct1 *unk30;
} func_801E22A4_Struct2;
typedef struct func_801E22A4_Struct3 {
    func_801E22A4_Struct2 *a[4];
} func_801E22A4_Struct3;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 D_8038D89C[];
extern s32 D_8038D8CC;
extern u8 D_801D9040[];
extern u8 D_801E4E2C[];

s32 func_801E22A4(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 2; i++) {
        func_80005E44(D_8038D8CC, D_8038D89C);
    }
    for (i = 0; i != 2; i++) {
        func_80005E44(D_8038D8CC, D_801E4E2C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x263, 0);
    func_8012C89C(D_8038D8CC, 1, 0x267, 0);
    func_8012C89C(D_8038D8CC, 2, 0x264, 0);
    func_8012C89C(D_8038D8CC, 3, 0x449, 0);
#define S(n) ((func_801E22A4_Struct3 *)D_8038D8D0)->a[n]->unk30
    S(0)->unk4 = 0.0f;
    S(0)->unk8 = -32.0f;
    S(0)->unkC = -200.0f;
    S(0)->unk12 = 0;
    S(0)->unk18 = 1.0f;
    S(0)->unk1C = 1.0f;
    S(0)->unk20 = 1.0f;
    S(1)->unk4 = 0.0f;
    S(1)->unk8 = -32.0f;
    S(1)->unkC = -200.0f;
    S(1)->unk12 = 0;
    S(1)->unk18 = 1.0f;
    S(1)->unk1C = 1.0f;
    S(1)->unk20 = 1.0f;
    S(1)->unk30 = (s32)D_801D9040 | 0x40000000;
    S(1)->unk24 = 0x100;
    S(1)->unk48 = 0;
    S(1)->unk49 = 0;
    S(1)->unk4A = 0;
    S(1)->unk4B = 0xFF;
    S(2)->unk4 = 0.0f;
    S(2)->unk8 = 0.0f;
    S(2)->unkC = -200.0f;
    S(2)->unk12 = 0;
    S(2)->unk18 = 1.0f;
    S(2)->unk1C = 1.0f;
    S(2)->unk20 = 1.0f;
    S(3)->unk4 = 0.0f;
    S(3)->unk8 = 0.0f;
    S(3)->unkC = 0.0f;
    S(3)->unk12 = 0;
    S(3)->unk18 = 1.0f;
    S(3)->unk1C = 1.0f;
    S(3)->unk20 = 1.0f;
    func_8038D28C(0x588);
    return 2;
}

extern void func_801C0D04(s32 arg0, s32 arg1);

s32 func_801E25F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A120) != 0) {
        func_801C0D04(3, 0);
        return 3;
    }
    return 2;
}


extern s32 func_801C0DE4(s32 a0, s32 a1, s32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);
extern f64 func_80034C24();
extern f64 D_801E5010;





s32 func_801E2644(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 0, 0x40200000) != 0) {
        func_801C0EB0(3, 0);
        func_8038D28C(0x253);
        return 4;
    }
    temp_ret = func_801C0F18(3, 0);
    D_8038D8D0->unk0->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E5010)) / 2.5f) * 13.0f + -32.0f);
    return 3;
}


s32 func_801E26F8(s32 arg0, s32 arg1) {
    return 4;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E2708(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



s32 func_801E274C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A120) != 0) {
        func_801C0D04(3, 1);
        return 2;
    }
    return 1;
}


typedef struct func_801E2798_Struct30 {
    u8 pad0[0x8];
    f32 unk8;
} func_801E2798_Struct30;

typedef struct func_801E2798_Struct4 {
    u8 pad0[0x30];
    func_801E2798_Struct30 *unk30;
} func_801E2798_Struct4;

typedef struct func_801E2798_Struct0 {
    u8 pad0[0x4];
    func_801E2798_Struct4 *unk4;
} func_801E2798_Struct0;

extern f64 D_801E5018;

s32 func_801E2798(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x40200000) != 0) {
        func_801C0EB0(3, 1);
        return 3;
    }
    temp_ret = func_801C0F18(3, 1);
    ((func_801E2798_Struct0 *) D_8038D8D0)->unk4->unk30->unk8 = (f32) ((f32) (func_80034C24(temp_ret) / D_801E5018) / 2.5f * 13.0f + -32.0f);
    return 2;
}


s32 func_801E2844(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E2854(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E2898(s32 arg0, s32 arg1) {
    return 1;
}



s32 func_801E28A8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E28EC(s32 arg0, s32 arg1) {
    return 1;
}



s32 func_801E28FC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern s32 D_801E4E70;

s32 func_801E2940(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        D_801E4E70 = 0;
        func_8038D28C(0x254);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2990.s")


s32 func_801E3064(s32 arg0, s32 arg1) {
    return 3;
}


void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];

s32 func_801E3074(s32 arg0, s32 arg1) {
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

extern struct func_801E3474_Global func_801DAAF0;
typedef struct func_801E3474_Struct2C {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3474_Struct2C;
typedef struct func_801E3474_Struct24 {
    u8 pad0[0x2C];
    func_801E3474_Struct2C *unk2C;
} func_801E3474_Struct24;
typedef struct func_801E3474_Struct8 {
    u8 pad0[0x24];
    func_801E3474_Struct24 *unk24;
} func_801E3474_Struct8;
typedef struct func_801E3474_Struct0 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E3474_Struct0;
typedef struct func_801E3474_Global {
    u8 pad0[0x24];
    func_801E3474_Struct0 *unk24;
} func_801E3474_Global;

extern void func_80005670(void *a0, void *a1);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern void func_801CC530(void);
extern u8 D_801DAD14[];

s32 func_801E3108(s32 arg0, s32 arg1) {
    func_80005670(func_801DAAF0.unk24, func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(func_801DAAF0.unk24->unk8, D_801DAD14);
    func_801CC530();
    return 2;
}


extern struct func_801E3474_Struct0 *D_801DAB14;
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E3170(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)(temp_v0 + 0x2C) + 0x4) = -6.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x8) = -32.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0xC) = -194.0f;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1800;
        func_801CC470(0, 0x0348004B, 0, 0, 3.5f);
        return 3;
    }
    return 2;
}


s32 func_801E323C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A120) != 0) {
        func_801C0D04(4, 0);
        return 4;
    }
    return 3;
}


extern f64 D_801E5050;

typedef struct func_801E3288_Struct2C {
    u8 pad0[0x8];
    f32 unk8;
} func_801E3288_Struct2C;

typedef struct func_801E3288_Struct24 {
    u8 pad0[0x2C];
    func_801E3288_Struct2C *unk2C;
} func_801E3288_Struct24;

typedef struct func_801E3288_Struct8 {
    u8 pad0[0x24];
    func_801E3288_Struct24 *unk24;
} func_801E3288_Struct8;

typedef struct func_801E3288_Struct0 {
    u8 pad0[0x8];
    func_801E3288_Struct8 *unk8;
} func_801E3288_Struct0;

typedef struct func_801E3288_Global {
    u8 pad0[0x24];
    func_801E3288_Struct0 *unk24;
} func_801E3288_Global;

s32 func_801E3288(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 0, 0x40200000) != 0) {
        func_801C0EB0(4, 0);
        return 5;
    }
    ((func_801E3288_Global *) &func_801DAAF0)->unk24->unk8->unk24->unk2C->unk8 = (f32) ((((f32) (func_80034C24(func_801C0F18(4, 0)) / D_801E5050)) / 2.5f) * 13.0f) + -32.0f;
    return 4;
}

extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

typedef struct func_801E3338_StructFl {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3338_StructFl;

typedef struct func_801E3338_StructLow {
    u8 pad0[0x2C];
    func_801E3338_StructFl *unk2C;
} func_801E3338_StructLow;

typedef struct func_801E3338_StructMid {
    u8 pad0[0x24];
    func_801E3338_StructLow *unk24;
} func_801E3338_StructMid;

typedef struct func_801E3338_StructTop {
    u8 pad0[0x8];
    func_801E3338_StructMid *unk8;
} func_801E3338_StructTop;

s32 func_801E3338(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x30D400) != 0) {
        ((func_801E3338_StructTop *)D_801DAB14)->unk8->unk24->unk2C->unk4 = -2.0f;
        ((func_801E3338_StructTop *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3338_StructTop *)D_801DAB14)->unk8->unk24->unk2C->unkC = 205.0f;
        ((func_801E3338_StructTop *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1AD8;
        func_801CC4D8(0, 0x03480066, 0, 0, 5.0f);
        return 6;
    }
    return 5;
}

s32 func_801CE274();


s32 func_801E340C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480066, 0, 0, 3.0f);
        return 7;
    }
    return 6;
}


s32 func_801E3464(s32 arg0, s32 arg1) {
    return 8;
}







extern f32 D_801E5058;

s32 func_801E3474(s32 arg0, s32 arg1) {
    func_801E3474_Struct0 **pp;

    if (func_801C0B8C(0x4F587F) != 0) {
        pp = (func_801E3474_Struct0 **) &func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk24->unk2C->unk4 = D_801E5058;
        (*pp)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk24->unk2C->unkC = -7.0f;
        (*pp)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC4D8(0, 0x01680040, 0, 0, 5.0f);
        return 9;
    }
    return 8;
}


extern s32 D_801E4E9C;

s32 func_801E3548(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        D_801E4E9C = 0;
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3584.s")


s32 func_801E3820(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3830(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E3840(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E3850(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E3860(s32 arg0, s32 arg1) {
    return 15;
}



s32 func_801E3870(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



typedef struct func_801E38B4_Struct8 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E38B4_Struct8;

s32 func_801E38B4(s32 arg0, s32 arg1) {
    func_801E3474_Struct24 *temp_v0;

    temp_v0 = ((func_801E38B4_Struct8 *) D_801DAB14->unk8)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -2.0f;
        ((func_801E38B4_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk8 = -32.0f;
        ((func_801E38B4_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unkC = -201.0f;
        ((func_801E38B4_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A80036, 0, 0, 3.5f);
        return 2;
    }
    return 1;
}



s32 func_801E3990(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A120) != 0) {
        func_801C0D04(4, 1);
        return 3;
    }
    return 2;
}


extern f64 D_801E5080;

s32 func_801E39DC(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 1, 0x40200000) != 0) {
        func_801C0EB0(4, 1);
        return 4;
    }
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *) func_801DAAF0.unk24 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = (f32) ((((f32) (func_80034C24(func_801C0F18(4, 1)) / D_801E5080) / 2.5f) * 13.0f) + -32.0f);
    return 3;
}



s32 func_801E3A90(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x30D400) != 0) {
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk4 = -7.0f;
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unkC = 212.0f;
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk12 = 0x1638;
        func_801CC4D8(1, 0x02A80035, 0, 0, 5.0f);
        return 5;
    }
    return 4;
}


s32 func_801CEDD4(void);

s32 func_801E3B74(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80035, 0, 0, 3.0f);
        return 6;
    }
    return 5;
}


s32 func_801E3BCC(s32 arg0, s32 arg1) {
    return 7;
}


extern f32 D_801E5088;

typedef struct func_801E3BDC_Struct8 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E3BDC_Struct8;

s32 func_801E3BDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk4 = D_801E5088;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unkC = 10.0f;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC4D8(1, 0x01680040, 0, 0, 5.0f);
        return 8;
    }
    return 7;
}


extern s32 D_801E4EE0;

s32 func_801E3CC0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        D_801E4EE0 = 0;
        return 0x9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3CFC.s")


s32 func_801E3FA4(s32 arg0, s32 arg1) {
    return 10;
}


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E3FB4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x7A120) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E403C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E406C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        return 3;
    }
    return 2;
}



s32 func_801E40A8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 1);
    return 4;
}



s32 func_801E4114(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    return 5;
}


s32 func_801E413C(s32 arg0, s32 arg1) {
    return 5;
}

