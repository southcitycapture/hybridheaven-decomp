#include "common.h"

extern f32 D_8024ED7C;
extern f32 D_8024ED80;
extern f32 D_8024ED84;
extern f32 D_8024ED88;
extern f32 D_8024ED8C;
extern f32 D_8024ED94;
extern f32 D_8024ED98;
extern f32 D_8024ED9C;
extern f32 D_8024EDA0;
extern f32 D_8024EDA4;
extern f32 D_8024EDA8;
extern f32 D_8024EDAC;
extern f32 D_8024EDBC;
extern f32 D_8024EDC0;
extern f32 D_8024EDC4;
extern f32 D_8024EDC8;
extern f32 D_8024F054;
extern f32 D_8024F090;
extern f32 D_8024F094;
extern f32 D_8024F098;
extern f32 D_8024F09C;
extern f32 D_8024F0B8;
extern f32 D_8024F0C8;
extern f32 D_8024F100;
extern f32 D_8024F4F0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);
extern f32 func_8012FFDC(f32, f32, f32, f32, f32, f32);
extern f32 func_801FD780(u8);
extern f64 D_8024F058;
extern f64 D_8024F060;
extern f64 D_8024F068;
extern f64 D_8024F070;
extern f64 D_8024F078;
extern f64 D_8024F080;
extern f64 D_8024F088;
extern s32 func_8001EF38(f32, f32);
extern s32 func_80126CC0(void *, void *);
extern s32 func_8012C97C(s32, s32);
extern s32 func_80133A24();
extern s32 func_80150584();
extern s32 func_8015105C(s32);
extern s32 func_801C3D20(f32, f32, s32);
extern s32 func_801C3D90();
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern s32 func_801FD68C(void *);
extern u8 D_8017AF90[];
extern u8 D_8017B608[];
extern u8 D_801BBBF0[];
extern u8 D_80249A58[];
extern u8 D_80249AB8[];
extern u8 func_80126EAC[];
extern u8 func_8024216C[];
extern u8 func_80242D64[];
extern void func_800058DC();
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C();
extern void func_800207A0(u16, s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern void func_8015180C(s32, void *);
extern void func_801BF1B0(s32);
extern void func_801FDB3C(s32);
extern void func_802423F0(void *arg0, void *arg1);
extern void func_80242440();
extern void func_802424D4(s32 arg0, s32 arg1);
extern void func_80242544();
extern void func_802425EC(s32 arg0, s32 arg1);
extern void func_802426E4();
extern void func_802427D0();
extern void func_802428B0(s32 arg0, s32 arg1);
extern void func_80242934();
extern void func_802429F8();
extern void func_80242CF4(s32 arg0, s32 arg1);
extern void func_80242F80();
extern void func_80243124();
extern void func_802467B0(f32, f32, s32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);




typedef struct func_80242080_Struct2 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 pad2[0x17];
    u8 unk4B;
} func_80242080_Struct2;

typedef struct func_80242080_Struct1 {
    u8 pad0[0x30];
    func_80242080_Struct2 *unk30;
} func_80242080_Struct1;

typedef struct func_80242080_Struct3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80242080_Struct3;

extern func_80242080_Struct3 D_80164F40;

void func_80242080(void *arg0, func_80242080_Struct1 **arg1) {
    func_80242080_Struct3 sp20;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp20 = D_80164F40;
        sp20.unk4 = 0x80000C00;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39E, 4);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) D_80249AB8 | 0x40000000;
        (*arg1)->unk30->unk4B = 0xFF;
        *(s16 *) ((u8 *) arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_8024216C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_8024216C.s")


typedef struct func_80242280_Struct2 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80242280_Struct2;
typedef struct func_80242280_Struct1 {
    u8 pad0[0x30];
    func_80242280_Struct2 *unk30;
} func_80242280_Struct1;
typedef struct func_80242280_Obj {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x36];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
} func_80242280_Obj;

void func_80242280(func_80242280_Obj *arg0, func_80242280_Struct1 **arg1) {
    func_80242080_Struct3 sp20;
    extern s32 func_80133A24();

    if (func_80126CC0(arg0, func_80126EAC) != 0 && func_801C3D90() != 0) {
        if (func_80133A24(0xBE) != 0) {
            func_800058DC(arg0, func_802424D4);
        }
        sp20 = D_80164F40;
        sp20.unk4 = 0x80000400;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39E, 5);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32)D_8017B608 | 0x40000000;
        (*arg1)->unk30->unk48 = 0;
        (*arg1)->unk30->unk49 = 0xFE;
        (*arg1)->unk30->unk4A = 0xFF;
        (*arg1)->unk30->unk4B = 0;
        arg0->unk74 = func_8012C97C(0x39E, 6);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk3C = 0;
        arg0->unk78 = 0.0f;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        func_800058DC(arg0, func_802423F0);
    }
}


struct func_802423F0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
};


void func_802423F0(void *arg0, void *arg1)
{
  struct func_802423F0_Struct *obj;
  void *tmp;
  obj = arg0;
  tmp = arg1;
  if (func_80133A24(0xBD, tmp) != 0)
  {
    if (!arg1)
    {
    }
    obj->unk2C = obj->unk2C | 0x800;
    func_800058DC(obj, func_80242440);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80242440.s")


void func_802424D4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_802424E0(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_801C3D90() != 0) {
            func_8001F74C(arg0);
            func_801BF1B0(0);
            func_800058DC(arg0, func_80242544);
        }
    }
}



void func_80242544(s32 arg0, s32 arg1) {
    if ((func_801C3D20(230.0f, -235.0f, 0x41F00000) != 0) && (func_80150584() == 0)) {
        D_8024F4F0 = -300.0f;
        func_800058DC((void *)arg0, (void *)func_802425EC);
    }
    if ((func_801C3D20(D_8024ED7C, -235.0f, 0x41F00000) != 0) && (func_80150584() == 0)) {
        func_800058DC((void *)arg0, (void *)func_802428B0);
    }
}



void func_802425EC(s32 arg0, s32 arg1) {
    if (func_801C3D20(196.0f, 68.0f, 0x41880000) != 0) {
        if (func_80133A24(0xBE) != 0) {
            func_800058DC((void *) arg0, func_802427D0);
            return;
        }
        func_800058DC((void *) arg0, func_802429F8);
    }
}

extern s32 func_801C3DC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4);


void func_80242660(s32 arg0, s32 arg1) {
    if (func_801C3DC8(arg0, 0x43D98000, 0x431A0000, 0x430A0000, D_8024ED80, 120.0f, 105.0f, D_8024ED84, 35.0f) == 0) {
        func_800058DC((void *) arg0, (void *) func_802426E4);
    }
}



void func_802426E4(void *arg0, s32 arg1) {
    extern s32 func_80133A24();

    func_801C3DC8((s32)arg0, 0x43D98000, 0x431A0000, 0x430A0000, D_8024ED88, 120.0f, 105.0f, D_8024ED8C, 35.0f);
    if (func_801C3D20(196.0f, 68.0f, 0x41880000) != 0) {
        if (func_80133A24(0xBE) != 0) {
            func_800058DC(arg0, &func_802427D0);
        } else {
            func_800058DC(arg0, &func_802429F8);
        }
    }
    if (func_80150584() != 0) {
        func_801BF1B0(1);
        func_800058DC(arg0, &func_80242CF4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802427D0.s")



void func_802428B0(s32 arg0, s32 arg1) {
    if (func_801C3DC8(arg0, 0xC3908000, 0x42CB0000, 0x43330000, -300.0f, D_8024ED94, D_8024ED98, D_8024ED9C, 35.0f) == 0) {
        func_800058DC((void *) arg0, (void *) func_80242934);
    }
}



void func_80242934(s32 arg0, s32 arg1) {
    func_801C3DC8(arg0, 0xC3908000, 0x42CB0000, 0x43330000, -300.0f, D_8024EDA0, D_8024EDA4, D_8024EDA8, 35.0f);
    if (func_801C3D20(D_8024EDAC, 75.0f, 0x41A00000) != 0) {
        func_800058DC((void *) arg0, func_802427D0);
    }
    if (func_80150584() != 0) {
        func_801BF1B0(1);
        func_800058DC((void *) arg0, (void *) func_80242CF4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802429F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80242B50.s")


typedef struct func_80242C5C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
} func_80242C5C_Struct;


void func_80242C5C(func_80242C5C_Struct *arg0, void *arg1) {
    s32 temp_v1;

    func_801C3DC8((s32) arg0, 0xC32D0000, 0xC1933333, 0x42BC0000, D_8024EDBC, D_8024EDC0, D_8024EDC4, D_8024EDC8, 35.0f);
    temp_v1 = (arg0->unk3C < 0x4B) ^ 1;
    arg0->unk3C = arg0->unk3C + 1;
    if (temp_v1) {
        func_800058DC(arg0, func_802429F8);
    }
}


void func_80242CF4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



typedef struct func_80242D00_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
} func_80242D00_Struct;

void func_80242D00(void *arg0, s32 arg1) {
    if ((func_80126CC0(arg0, func_80126EAC) != 0) && (func_801C3D90() != 0)) {
        ((func_80242D00_Struct *)arg0)->unk3C = 0;
        func_8001F74C(arg0);
        func_801BF1B0(0);
        func_800058DC(arg0, func_80242D64);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80242D64.s")


struct func_80242F10_Inner {
    u8 pad[4];
    f32 unk4;
};

struct func_80242F10_Outer {
    u8 pad[0x2C];
    struct func_80242F10_Inner *unk2C;
};

extern struct func_80242F10_Outer *D_801BBCD0;

void func_80242F10(void *arg0, void *arg1) {
    if (func_80150584() == 0) {
        if (D_801BBCD0->unk2C->unk4 < 0.0f) {
            func_800058DC(arg0, func_80242F80);
            return;
        }
        func_800058DC(arg0, func_80243124);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80242F80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80243054.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80243124.s")


void func_802431F8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80243204_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0xC];
    u16 unk3C;
    u8 pad2[0x2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad3[0x28];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad4[0x6];
    u8 unk90;
    u8 pad5;
    u16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 pad6[0x2];
    s32 unkA8;
} func_80243204_Struct;


void func_80243204(func_80243204_Struct *arg0, void *arg1) {
    s32 temp_v0;

    func_80005E44(arg0, &D_80164F40);
    func_80006214(arg0);
    temp_v0 = func_8015105C(0xF7);
    arg0->unkA8 = temp_v0;
    func_8015180C(temp_v0, arg0);
    arg0->unk90 = 1;
    arg0->unk3C = 0;
    arg0->unk92 = 0;
    arg0->unkA0 = 0;
    arg0->unkA2 = 0x800;
    arg0->unkA4 = 0;
    arg0->unk2C = arg0->unk2C | 0x800;
    arg0->unk40 = 0.0f;
    arg0->unk44 = 0.0f;
    arg0->unk48 = 0.0f;
    arg0->unk74 = func_8012C97C(0xF7, 2);
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802432CC.s")


typedef struct func_80244CA8_B {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80244CA8_B;
typedef struct func_80244CA8_Struct {
    u8 pad0[0x30];
    func_80244CA8_B *unk30;
} func_80244CA8_Struct;
typedef struct func_80244CA8_Obj {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x46];
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    s16 unkA2;
} func_80244CA8_Obj;
typedef struct func_80244CA8_G {
    u8 pad0[0xE0];
    u8 **unkE0;
} func_80244CA8_G;

#define T ((func_80244CA8_B *)((func_80244CA8_G *)D_801BBBF0)->unkE0[0xB])
void func_80244CA8(func_80244CA8_Obj *arg0, func_80244CA8_Struct **arg1) {
    func_80242080_Struct3 sp30;
    u8 pad[8];
    f32 sp24;
    f32 k;
    sp30 = D_80164F40;
    sp30.unk4 = 0x80000900;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD1, 0);
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk20 = D_8024F054;
    k = (*arg1)->unk30->unk20;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    arg0->unkA2 = func_8001EF38(T->unk4 - arg0->unk94, T->unkC - arg0->unk9C);
    sp24 = func_8002FC20((T->unkC - arg0->unk9C) * (T->unkC - arg0->unk9C) + (T->unk4 - arg0->unk94) * (T->unk4 - arg0->unk94)) * D_8024F058 * D_8024F060;
    arg0->unk40 = func_8001EAD0(arg0->unkA2) * sp24;
    arg0->unk48 = func_8001EB64(arg0->unkA2) * sp24;
    arg0->unk92 = 0;
    arg0->unk44 = 4.0f;
    func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x316);
}


typedef struct func_80244ED8_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_80244ED8_Struct2;

typedef struct func_80244ED8_Struct1 {
    u8 pad0[0x30];
    func_80244ED8_Struct2 *unk30;
} func_80244ED8_Struct1;


s32 func_80244ED8(func_80243204_Struct *arg0, func_80244ED8_Struct1 **arg1) {
    s32 sp34;
    f32 y;

    arg0->unk44 = arg0->unk44 + D_8024F068;
    y = ((f32 *)D_801BBCD0->unk2C)[3];
    if (arg0->unk9C < y && arg0->unk48 < D_8024F070) {
        arg0->unk48 = arg0->unk48 + D_8024F078;
    } else if (y < arg0->unk9C && D_8024F080 < arg0->unk48) {
        arg0->unk48 = arg0->unk48 - D_8024F088;
    }
    if (arg0->unk98 < -20.0f) {
        func_80380F94(arg0->unk94, -20.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x17);
        func_801FD644(arg0->unk94, -20.0f, arg0->unk9C, 12.0f, 0x800, 1.0f, 1.0f, func_801FD780(arg0->pad5) * 80.0f);
        func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x317);
        return 0;
    }
    func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x16);
    sp34 = func_801FD68C(arg0);
    if (sp34 != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x1E);
        func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x3C8);
        func_801FDB3C(sp34);
        return 0;
    }
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 2.0f, 0x800, 1.0f, 1.0f, func_801FD780(arg0->pad5) * 80.0f) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x17);
        func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x317);
        return 0;
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = (s16)-func_8001EF38(arg0->unk44, arg0->unk40) & 0x1FFF;
    (*arg1)->unk30->unk12 = 0x800;
    (*arg1)->unk30->unk14 = 0;
    return 1;
}



typedef struct func_802452F4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
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
} func_802452F4_StructB;

typedef struct func_802452F4_StructA {
    func_802452F4_StructB *unk0;
} func_802452F4_StructA;

typedef struct func_802452F4_StructC {
    u8 pad0[0x30];
    func_802452F4_StructB *unk30;
} func_802452F4_StructC;

typedef struct func_802452F4_StructD {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x48];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
} func_802452F4_StructD;

void func_802452F4(func_802452F4_StructD *arg0, func_802452F4_StructC **arg1) {
    func_80242080_Struct3 sp30;
    u8 pad[16];

    sp30 = D_80164F40;
    sp30.unk4 = 0x80000300;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 7);
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80249A58 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8024F090;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8024F094;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xC8;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    arg0->unk40 = func_8001EAD0((s16)arg0->unkA2) * 14.0f;
    arg0->unk48 = func_8001EB64((s16)arg0->unkA2) * 14.0f;
    arg0->unk44 = 0.0f;
    func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x314);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802454C8.s")


typedef struct {
    u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; u16 u12;
    u8 pad14[4]; f32 f18; f32 f1C; f32 f20; s32 u24; u8 pad28[8]; s32 u30;
    u8 pad34[0x14]; u8 b48; u8 b49; u8 b4A; u8 b4B; u8 b4C; u8 b4D; u8 b4E;
} func_802456A8_Inner;
typedef struct { u8 pad[0x30]; func_802456A8_Inner *p; } func_802456A8_Outer;
typedef struct { u8 pad[0x94]; f32 f94; f32 f98; f32 f9C; u8 padA0[2]; u16 uA2; } func_802456A8_Arg;


void func_802456A8(func_802456A8_Arg *arg0, func_802456A8_Outer **arg1) {
    func_80242080_Struct3 sp;
    u8 pad[16];
    sp = D_80164F40;
    sp.unk4 =0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 7);
    (*arg1)->p->u24 |= 0x300;
    (*arg1)->p->u30 = (s32)D_80249A58 | 0x40000000;
    (*arg1)->p->f1C = D_8024F098;
    (*arg1)->p->f18 = (*arg1)->p->f1C;
    (*arg1)->p->f20 = D_8024F09C;
    (*arg1)->p->b48 = 0x40;
    (*arg1)->p->b49 = 0x40;
    (*arg1)->p->b4A = 0xFF;
    (*arg1)->p->b4B = 0xA0;
    (*arg1)->p->b4C = 0;
    (*arg1)->p->b4D = 0;
    (*arg1)->p->b4E = 0x64;
    (*arg1)->p->f4 = arg0->f94;
    (*arg1)->p->f8 = arg0->f98;
    (*arg1)->p->fC = arg0->f9C;
    (*arg1)->p->u12 = arg0->uA2;
}


s32 func_80245838(s32 arg0, func_80242080_Struct1 **arg1) {
    func_80242080_Struct2 *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = temp_v0->unk4B - 0x18;
    if ((*arg1)->unk30->unk4B < 0x18) {
        return 0;
    }
    return 1;
}



void func_8024587C(void *arg0, s32 arg1) {
    func_802467B0(((f32 *)arg0)[0x94 / 4], ((f32 *)arg0)[0x98 / 4], ((s32 *)arg0)[0x9C / 4], 0x311);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802458AC.s")

typedef struct func_80245B20_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
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
} func_80245B20_StructB;
typedef struct func_80245B20_StructA {
    u8 pad0[0x30];
    func_80245B20_StructB *unk30;
} func_80245B20_StructA;
typedef struct func_80245B20_StructP {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80245B20_StructP;

void func_80245B20(func_80245B20_StructP *arg0, func_80245B20_StructA **arg1) {
    func_80242080_Struct3 sp;
    u8 pad[8];
    f32 k;
    sp = D_80164F40;
    sp.unk4 = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012D918(arg0, 0x4B7, 0, 0, 0);
    k = D_8024F0B8;
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (s32)D_80249A58 | 0x40000000;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xC8;
    (*arg1)->unk30->unk4A = 0xC8;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x315);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80245CC0.s")


typedef struct func_80245F8C_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x17];
    u8 unk4B;
} func_80245F8C_StructInner;

typedef struct func_80245F8C_StructOuter {
    u8 pad0[0x30];
    func_80245F8C_StructInner *unk30;
} func_80245F8C_StructOuter;


void func_80245F8C(func_80243204_Struct *arg0, func_80245F8C_StructOuter **arg1) {
    func_80242080_Struct3 sp38 = D_80164F40;
    u8 pad[8];
    func_80245F8C_StructInner *temp_v0;
    f32 scale;

    sp38.unk4 = 0x80000600;
    func_80005E44(arg0, &sp38);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012D918(arg0, 0x4B7, 0, 0, 0);
    scale = D_8024F0C8;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (s32)D_80249A58 | 0x40000000;
    (*arg1)->unk30->unk18 = scale;
    (*arg1)->unk30->unk1C = scale;
    (*arg1)->unk30->unk20 = scale;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    arg0->unk92 = 0;
    func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x313);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802460E0.s")


typedef struct func_802467B0_StructInner {
    u8 pad[0x30];
    f32 x;
    f32 y;
    f32 z;
} func_802467B0_StructInner;

typedef struct func_802467B0_StructOuter {
    u8 pad[0x2C];
    func_802467B0_StructInner *inner;
} func_802467B0_StructOuter;

extern func_802467B0_StructOuter *D_801BBCD8;

void func_802467B0(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {
    func_802467B0_StructInner *p;
    s32 value;

    p = D_801BBCD8->inner;
    value = (s32)(255.0f - func_8012FFDC(arg0, arg1, *(f32 *)&arg2, p->x, p->y, p->z) * D_8024F100);
    if (value > 0) {
        func_800207A0((u16)arg3, value & 0xFF);
    }
}

