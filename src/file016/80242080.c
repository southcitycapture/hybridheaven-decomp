#include "common.h"

extern f32 D_8024ED7C;
extern f32 D_8024ED80;
extern f32 D_8024ED84;
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
extern f32 D_8024F4F0;
extern f32 func_801FD780(u8);
extern f64 D_8024F068;
extern f64 D_8024F070;
extern f64 D_8024F078;
extern f64 D_8024F080;
extern f64 D_8024F088;
extern s32 func_8001EF38(f32, f32);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24();
extern s32 func_80150584();
extern s32 func_8015105C(s32);
extern s32 func_801C3D20(f32, f32, s32);
extern s32 func_801C3D90();
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern s32 func_801FD68C(void *);
extern u8 D_80249AB8[];
extern u8 func_80126EAC[];
extern u8 func_8024216C[];
extern u8 func_80242D64[];
extern void func_800058DC();
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C();
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8015180C(s32, void *);
extern void func_801BF1B0(s32);
extern void func_801FDB3C(s32);
extern void func_80242440();
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

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80242280.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802426E4.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80244CA8.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802452F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802454C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802456A8.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80245B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80245CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_80245F8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802460E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80242080/func_802467B0.s")

