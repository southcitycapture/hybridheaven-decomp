#include "common.h"

extern f32 D_8025250C;
extern f32 D_80252568;
extern f32 D_8025256C;
extern f32 D_80252570;
extern f32 D_80252574;
extern f32 D_80252578;
extern f64 D_80252510;
extern f64 D_80252518;
extern f64 D_80252530;
extern f64 D_80252538;
extern s16 D_80089354;
extern s32 D_801BCC90;
extern s32 D_801BCCF0;
extern s32 func_8001E978();
extern s32 func_80126B14(void *, void *, u16, s32);
extern s32 func_80126CC0(void *arg0, void *arg1);
extern s32 func_801270C0(void *arg0);
extern s32 func_80133A24(s32);
extern s32 func_8020394C(u64 arg0);                          /* extern */
extern s32 func_802039B0();
extern u16 D_80089474[];
extern u16 func_8012C6B4(s32 arg0, void *arg1, void *arg2);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern u8 D_8024E67C[];
extern u8 D_8024F414[];
extern u8 D_8024FDC0[];
extern u8 D_80250054[];
extern u8 func_80126EAC[];
extern u8 func_80240FC8[];
extern void *D_801BBCCC;
extern void *func_801505AC(s32);
extern void func_800058DC();
extern void func_80005F6C(s32, void *);
extern void func_80006214(s32);
extern void func_800062F8(void *, s32);
extern void func_8001F74C();
extern void func_80020744(s32 arg0);
extern void func_801268F4(s32);
extern void func_801269C0(void *arg0);
extern void func_80127014();
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80133980(s32);
extern void func_8013B570();
extern void func_80203830(s32, void *);
extern void func_80240B0C();
extern void func_80240BB8();
extern void func_80240C0C();
extern void func_80240C68(void *arg0, s32 arg1);
extern void func_80240E54();
extern void func_80240ED0();
extern void func_80240F14();
extern void func_8024140C();
extern void func_80241484();
extern void func_80241518();
extern void func_80241708();
extern void func_8024179C();
extern void func_802417D0(void *arg0, s32 arg1);
extern void func_8024187C();
extern void func_802418B4();
extern void func_80241AB8();
extern void func_80241AF0();
extern void func_80241B24();
extern void func_80241C7C(u64 arg0);
extern void func_80241CB4();
extern void func_80241EF4();
extern void func_80241F2C();
extern void func_80242140();
extern void func_8024217C();
extern void func_80242220(s32 arg0, s32 arg1);
extern void func_8024225C(void *arg0, void *arg1);
extern void func_802422C8();
extern void func_80242414();
extern void func_8024247C();
extern void func_802424EC();
extern void func_802426D8();
extern void func_802428B8();
extern void func_8024294C(void *arg0, void *arg1);


typedef struct func_802408F0_Inner {
    u8 pad0[0x92];
    u16 unk92;
} func_802408F0_Inner;

typedef struct func_802408F0_Struct {
    u8 pad0[0xCC];
    func_802408F0_Inner *unkCC;
} func_802408F0_Struct;

extern func_802408F0_Struct D_801BCC24;

void func_802408F0(void) {
    D_801BCC24.unkCC->unk92 = 1;
}


void func_80240904(void) {
}


typedef struct func_8024090C_Struct {
    u8 pad0[0x15D];
    u8 unk15D;
    u8 pad1[6];
    u8 unk164;
    u8 pad2[0x1104 - 0x165];
    s32 unk1104;
} func_8024090C_Struct;

extern func_8024090C_Struct D_801BBBF0;

void func_8024090C(void) {
    D_80089354 = 2;
    D_801BBBF0.unk164 = 0;
    D_801BBBF0.unk15D = 0;
    func_8001E978(D_801BBBF0.unk1104, 0, 0, 0, 0xF, 0, 2, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_8024096C.s")



void func_80240AD4(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80240B0C);
    }
}


typedef struct func_80240B0C_StructVec {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80240B0C_StructVec;

typedef struct func_80240B0C_StructMid {
    u8 pad0[0x2C];
    func_80240B0C_StructVec *unk2C;
} func_80240B0C_StructMid;

typedef struct func_80240B0C_StructOuter {
    u8 pad0[0x24];
    func_80240B0C_StructMid *unk24;
} func_80240B0C_StructOuter;


void func_80240B0C(func_80240B0C_StructOuter *arg0) {
    s32 *g;

    g = (s32 *) ((u8 *) &D_801BBBF0 + 0x1058);
    g[0] = arg0->unk24->unk2C->unk4 * 1000.0f;
    g[1] = arg0->unk24->unk2C->unk8 * 1000.0f;
    g[2] = arg0->unk24->unk2C->unkC * 1000.0f;
    if (func_802039B0() != 0) {
        func_801269C0(arg0);
        func_800058DC(arg0, func_80240BB8);
    }
}


void func_80240BB8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80240BC4_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80240BC4_Struct;


void func_80240BC4(func_80240BC4_Struct *arg0, s32 arg1) {
    if (func_80126B14(arg0, func_80127014, arg0->unk90, 0x31) != 0) {
        func_800058DC((s32)arg0, func_80240C0C);
    }
}


typedef struct func_80240C0C_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
} func_80240C0C_Struct;


void func_80240C0C(func_80240C0C_Struct *arg0, s32 arg1) {
    func_8001F74C();
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, 0x31, 0, 4, func_80240C68);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240C68.s")


typedef struct func_80240DEC_Struct2 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80240DEC_Struct2;

typedef struct func_80240DEC_Struct1 {
    u8 pad0[0x2C];
    func_80240DEC_Struct2 *unk2C;
} func_80240DEC_Struct1;

typedef struct func_80240DEC_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80240DEC_Struct0;


void func_80240DEC(func_80240DEC_Struct0 *arg0, func_80240DEC_Struct1 **arg1) {
    if (arg0->unk92 != 0) {
        (*arg1)->unk2C->unk18 = 0.0f;
        (*arg1)->unk2C->unk1C = 0.0f;
        (*arg1)->unk2C->unk20 = D_8025250C;
        arg0->unk92 = 0xC8;
        func_800058DC((s32) arg0, (void *) func_80240E54);
    }
}



typedef struct func_80240E54_Struct {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
} func_80240E54_Struct;

typedef struct func_80240E54_Outer {
    u8 pad0[0x2C];
    func_80240E54_Struct *unk2C;
} func_80240E54_Outer;

void func_80240E54(u8 *arg0, func_80240E54_Outer **arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80240E54_Struct *temp_v0_2;

    temp_v0 = *(u16 *)(arg0 + 0x92);
    *(u16 *)(arg0 + 0x92) = (u16) (temp_v0 - 1);
    if (temp_v0 != 0) {
        temp_v0_2 = (*arg1)->unk2C;
        temp_f0 = D_80252510;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + temp_f0);
        return;
    }
    *(u16 *)(arg0 + 0x92) = 0;
    func_800058DC(arg0, func_80240ED0);
}


typedef struct func_80240ED0_Struct {
    u8 pad[0x92];
    u16 unk92;
    u8 unk94;
} func_80240ED0_Struct;


void func_80240ED0(func_80240ED0_Struct *arg0, s32 arg1) {
    arg0->unk94 = arg0->unk94 + 1;
    if (arg0->unk92 != 0) {
        arg0->unk92 = 0xA;
        func_800058DC((s32) arg0, (void *) func_80240F14);
    }
}



struct func_80240F14_Inner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_80240F14_Arg0 {
    u8 pad[0x24];
    struct func_80240F14_Inner *unk24;
    u8 pad2[0x92 - 0x28];
    u16 unk92;
};

struct func_80240F14_Vec {
    u8 pad[0x18];
    f32 unk18;
    u8 pad2[0x20 - 0x1C];
    f32 unk20;
};

struct func_80240F14_Obj {
    u8 pad[0x2C];
    struct func_80240F14_Vec *unk2C;
};

void func_80240F14(struct func_80240F14_Arg0 *arg0, struct func_80240F14_Obj **arg1) {
    f64 temp_f0;
    struct func_80240F14_Vec *temp_v1;

    if (arg0->unk92 != 0) {
        temp_f0 = D_80252518;
        arg0->unk92 = arg0->unk92 - 1;
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk18 = (f32) ((f64) temp_v1->unk18 - temp_f0);
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk20 = (f32) ((f64) temp_v1->unk20 - temp_f0);
        return;
    }
    arg0->unk24->unk22 = 0;
}


typedef struct func_80240F78_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
} func_80240F78_Struct;


void func_80240F78(func_80240F78_Struct *arg0, s32 arg1) {
    if (arg0->unk92 != 0) {
        if (func_80126B14(arg0, func_80126EAC, arg0->unk90, 9) != 0) {
            func_800058DC((s32)arg0, func_80240FC8);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240FC8.s")


typedef struct func_802413B8_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_802413B8_Struct0;

typedef struct func_802413B8_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
} func_802413B8_Struct2;

typedef struct func_802413B8_Struct1 {
    u8 pad0[0x30];
    func_802413B8_Struct2 *unk30;
} func_802413B8_Struct1;

typedef struct func_802413B8_Struct3 {
    u8 pad0[0x18];
    func_802413B8_Struct1 *unk18;
} func_802413B8_Struct3;


void func_802413B8(func_802413B8_Struct0 *arg0, func_802413B8_Struct3 *arg1) {
    s32 temp_v0;
    u16 temp_t0;
    func_802413B8_Struct2 *temp_v0_2;

    temp_t0 = 0x14;
    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk18->unk30;
        temp_v0_2->unk4B += 0xC;
        return;
    }
    arg0->unk92 = temp_t0;
    func_800058DC((s32) arg0, func_8024140C);
}



typedef struct func_8024140C_Struct4 {
    u8 pad0[0x1C];
    f32 unk1C;
} func_8024140C_Struct4;

typedef struct func_8024140C_Struct3 {
    u8 pad0[0x30];
    func_8024140C_Struct4 *unk30;
} func_8024140C_Struct3;

typedef struct func_8024140C_Struct2 {
    u8 pad0[0x14];
    func_8024140C_Struct3 *unk14;
} func_8024140C_Struct2;

typedef struct func_8024140C_Struct {
    u8 pad0[0x92];
    u16 unk92;
} func_8024140C_Struct;

void func_8024140C(func_8024140C_Struct *arg0, func_8024140C_Struct2 *arg1) {
    s32 temp_v0;
    func_8024140C_Struct4 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + D_80252530);
        return;
    }
    arg0->unk92 = 0x14;
    func_80020744(0x234);
    func_800058DC(arg0, &func_80241484);
}


typedef struct func_80241484_Struct_Inner {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[4];
    f32 unk20;
} func_80241484_Struct_Inner;

typedef struct func_80241484_Struct_Obj {
    u8 pad0[0x30];
    func_80241484_Struct_Inner *unk30;
} func_80241484_Struct_Obj;

typedef struct func_80241484_Struct_Arg1 {
    u8 pad0[0x14];
    func_80241484_Struct_Obj *unk14;
} func_80241484_Struct_Arg1;

typedef struct func_80241484_Struct_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241484_Struct_Arg0;

extern func_80241484_Struct_Arg0 *D_801BCCA8;

void func_80241484(func_80241484_Struct_Arg0 *arg0, func_80241484_Struct_Arg1 *arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80241484_Struct_Inner *temp_v0_2;
    func_80241484_Struct_Inner *temp_v0_3;
    func_80241484_Struct_Arg0 *temp_v0_4;

    temp_v0 = arg0->unk92;
    arg0->unk92 = (u16) (temp_v0 - 1);
    if (temp_v0 != 0) {
        temp_f0 = D_80252538;
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk20 = (f32) ((f64) temp_v0_2->unk20 + temp_f0);
        return;
    }
    D_801BCCA8->unk92 = 1;
    func_800058DC(arg0, (void *) func_80241518);
    arg0->unk92 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241518.s")


typedef struct func_8024162C_Inner {
    u8 pad0[0x4B];
    u8 unk4B;
} func_8024162C_Inner;

typedef struct func_8024162C_Mid {
    u8 pad0[0x30];
    func_8024162C_Inner *unk30;
} func_8024162C_Mid;

typedef struct func_8024162C_Arg1 {
    u8 pad0[0x14];
    func_8024162C_Mid *unk14;
    func_8024162C_Mid *unk18;
} func_8024162C_Arg1;

typedef struct func_8024162C_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
} func_8024162C_Arg0;

void func_8024162C(func_8024162C_Arg0 *arg0, func_8024162C_Arg1 *arg1) {
    s32 temp_v0;
    func_8024162C_Inner *temp_v1;
    func_8024162C_Inner *temp_a2;

    temp_v0 = arg0->unk92;
    if (temp_v0 != 0) {
        arg0->unk92 = temp_v0 - 1;
        temp_v1 = arg1->unk18->unk30;
        temp_v1->unk4B = temp_v1->unk4B - 0xC;
        temp_a2 = arg1->unk14->unk30;
        temp_a2->unk4B = temp_a2->unk4B - 6;
        return;
    }
    arg1->unk14->unk30->unk4B = 0;
}


typedef struct func_8024167C_Sub {
    u8 pad0[0x63];
    u8 unk63;
} func_8024167C_Sub;

typedef struct func_8024167C_Glob {
    u8 pad0[0xDC];
    func_8024167C_Sub *unkDC;
    u8 pad1[0xBA2 - 0xE0];
    u8 unkBA2;
} func_8024167C_Glob;

typedef struct func_8024167C_Obj {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x38 - 0x24];
    u16 *unk38;
} func_8024167C_Obj;


void func_8024167C(void *arg0, s32 arg1) {
    func_8024167C_Glob *g = (func_8024167C_Glob *)&D_801BBBF0;
    func_8024167C_Obj *obj = arg0;

    g->unkBA2 = 1;
    if (g->unkDC->unk63 != 0 && func_80126CC0(arg0, func_80127014) != 0) {
        obj->unk18 = func_8012E5B0;
        obj->unk20 = func_8012E6BC;
        func_8013B570(obj, obj->unk38[1], 2, 3, func_80241708);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241708.s")



void func_80241764(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_8024179C);
    }
}



void func_8024179C(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_802417D0);
    }
}



typedef struct func_802417D0_Struct {
    u8 pad[4];
    s16 unk4;
} func_802417D0_Struct;

extern func_802417D0_Struct D_801BBF90;

void func_802417D0(void *arg0, s32 arg1) {
    if (func_801270C0(arg0) != 0) {
        func_80020744(7);
        D_801BBF90.unk4 = 0x1F3;
    }
}


typedef struct func_8024180C_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x10A0 - 0x44];
    s32 unk10A0;
} func_8024180C_Struct;


void func_8024180C(s32 arg0, s32 arg1)
{
  func_8024180C_Struct *p;
  s32 temp;
  func_80133A24(0x1F3);
  if (func_80133A24(0x1F3 & 0xFFFFFFFFu) != 0)
  {
    func_8001F74C(arg0);
    func_80203830(arg0, D_8024E67C);
    p = (func_8024180C_Struct *) (&D_801BBBF0);
    temp = p->unk40 & 0xFFFFFFFFFFFFFFFF;
    p->unk10A0 = temp;
    func_800058DC((void *) arg0, func_8024187C);
  }
}



void func_8024187C(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_802418B4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802418B4.s")



void func_802419B4(s32 arg0, s32 arg1) {
    func_8012FE50(0x10, 0xF0, 0, 1, 0);
}



void func_802419EC(void) {
    func_8001E978(D_801BCC90, 0, 0, 0, 0xF, 0, 2, 0);
}



void func_80241A34(s32 arg0, s32 arg1)
{
  s32 t8;
  s32 *v3;
  if ((((u8 *) D_801BBCCC)[0x63] != 0) && (func_80133A24(0x242) == 0))
  {
    func_80133980(0x242);
    func_8001F74C(arg0);
    func_80203830(arg0, D_8024F414);
    v3 = (s32 *) (&D_801BBBF0);
    t8 = (v3[0x40 / 4] & 0xFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu;
    v3[0x10A0 / 4] = t8;
    func_800058DC((void *) arg0, func_80241AB8);
  }
}



void func_80241AB8(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80241AF0);
    }
}



void func_80241AF0(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80241B24);
    }
}


void func_80241B24(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_80241B30(void) {
    *(s16 *)((u8 *)&D_801BBBF0 + 2) = 2;
    func_80020744(7);
    func_8001E978(D_801BCCF0, 0, 0, 0, 0xF, 0, 1, 0);
}


typedef struct func_80241B8C_StructInner {
    u8 pad0[0x22];
    u8 unk22;
} func_80241B8C_StructInner;

typedef struct func_80241B8C_StructRet {
    u8 pad0[0x24];
    func_80241B8C_StructInner *unk24;
    u8 pad1[0x74 - 0x28];
    s32 unk74;
} func_80241B8C_StructRet;

typedef struct func_80241B8C_StructGlob {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0xDC - 0x44];
    func_8024167C_Sub *unkDC;
    func_80240B0C_StructMid *unkE0;
    u8 pad2[0x10A0 - 0xE4];
    s32 unk10A0;
    u8 pad3[0x1100 - 0x10A4];
    s32 unk1100;
} func_80241B8C_StructGlob;


void func_80241B8C(s32 arg0, s32 arg1) {
    func_80240B0C_StructVec *v;
    func_80241B8C_StructRet *r;
    f32 dx;
    f32 dy;
    f32 dz;

    if (((func_80241B8C_StructGlob *)&D_801BBBF0)->unkDC->unk63 != 0) {
        v = ((func_80241B8C_StructGlob *)&D_801BBBF0)->unkE0->unk2C;
        dy = 193.0f - v->unk4;
        dx = D_80252568 - v->unk8;
        dz = -25.0f - v->unkC;
        if (!((dy * dy + dx * dx + dz * dz) > 900.0f)) {
            func_801268F4(0);
            func_80203830(arg0, D_8024FDC0);
            ((func_80241B8C_StructGlob *)&D_801BBBF0)->unk1100 = arg0;
            ((func_80241B8C_StructGlob *)&D_801BBBF0)->unk10A0 = (s32) ((func_80241B8C_StructGlob *)&D_801BBBF0)->unk40;
            r = func_801505AC(0);
            r->unk24->unk22 = 0;
            r->unk74 = 0;
            func_800058DC(arg0, &func_80241C7C);
        }
    }
}



void func_80241C7C(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80241CB4);
    }
}


typedef struct func_80241CB4_Vec {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80241CB4_Vec;

typedef struct func_80241CB4_Mid {
    u8 pad0[0x2C];
    func_80241CB4_Vec *unk2C;
} func_80241CB4_Mid;

typedef struct func_80241CB4_Glob {
    u8 pad0[2];
    s16 unk2;
    u8 padx[0xE8 - 4];
    func_80241CB4_Mid * volatile unkE8;
    u8 pad1[0x104C - 0xEC];
    s32 unk104C;
    s32 unk1050;
    s32 unk1054;
    s32 unk1058;
    s32 unk105C;
    s32 unk1060;
} func_80241CB4_Glob;

void func_80241CB4(void) {
#define g ((func_80241CB4_Glob *) &D_801BBBF0)

    g->unk104C = (s32) (g->unkE8->unk2C->unk30 * 1000.0f);
    g->unk1050 = (s32) (g->unkE8->unk2C->unk34 * 1000.0f);
    g->unk1054 = (s32) (g->unkE8->unk2C->unk38 * 1000.0f);
    g->unk1058 = (s32) (g->unkE8->unk2C->unk3C * 1000.0f);
    g->unk105C = (s32) (g->unkE8->unk2C->unk40 * 1000.0f);
    g->unk1060 = (s32) (g->unkE8->unk2C->unk44 * 1000.0f);
    if (func_802039B0() != 0) {
        g->unk2 = 2;
        func_8012FE50(0x10, 0x60, 1, 6, 2);
    }
}
#undef g



void func_80241DCC(void) {
    func_80020744(7);
    func_8001E978(D_801BCCF0, 0, 0, 0, 0xF, 0, 1, 0);
}


typedef struct func_80241E1C_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0xDC - 0x44];
    void *unkDC;
    void *unkE0;
    u8 pad2[0x10A0 - 0xE4];
    s32 unk10A0;
    u8 pad3[0x1100 - 0x10A4];
    s32 unk1100;
} func_80241E1C_Struct;


void func_80241E1C(s32 arg0, s32 arg1) {
    void *temp_v0;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;

    if (*(u8 *)((u8 *) ((func_80241E1C_Struct *) &D_801BBBF0)->unkDC + 0x63) != 0) {
        temp_v0 = *(void **)((u8 *) ((func_80241E1C_Struct *) &D_801BBBF0)->unkE0 + 0x2C);
        temp_fv0 = -52.0f - *(f32 *)((u8 *)temp_v0 + 0x4);
        temp_fv1 = D_8025256C - *(f32 *)((u8 *)temp_v0 + 0x8);
        temp_fa0 = D_80252570 - *(f32 *)((u8 *)temp_v0 + 0xC);
        if (!(((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0)) > 900.0f)) {
            func_801268F4(0);
            func_80203830(arg0, D_80250054);
            ((func_80241E1C_Struct *) &D_801BBBF0)->unk1100 = arg0;
            ((func_80241E1C_Struct *) &D_801BBBF0)->unk10A0 = ((func_80241E1C_Struct *) &D_801BBBF0)->unk40;
            func_800058DC((void *) arg0, (void *) func_80241EF4);
        }
    }
}



void func_80241EF4(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80241F2C);
    }
}


typedef struct func_80241F2C_Vec {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80241F2C_Vec;

typedef struct func_80241F2C_Mid {
    u8 pad0[0x2C];
    func_80241F2C_Vec *unk2C;
} func_80241F2C_Mid;

typedef struct func_80241F2C_Glob {
    u8 pad0[0xE8];
    func_80241F2C_Mid * volatile unkE8;
    u8 pad1[0x104C - 0xEC];
    s32 unk104C;
    s32 unk1050;
    s32 unk1054;
    s32 unk1058;
    s32 unk105C;
    s32 unk1060;
} func_80241F2C_Glob;

void func_80241F2C(void) {
    func_80241F2C_Glob *g = (func_80241F2C_Glob *) &D_801BBBF0;

    g->unk104C = (s32) (g->unkE8->unk2C->unk30 * 1000.0f);
    g->unk1050 = (s32) (g->unkE8->unk2C->unk34 * 1000.0f);
    g->unk1054 = (s32) (g->unkE8->unk2C->unk38 * 1000.0f);
    g->unk1058 = (s32) (g->unkE8->unk2C->unk3C * 1000.0f);
    g->unk105C = (s32) (g->unkE8->unk2C->unk40 * 1000.0f);
    g->unk1060 = (s32) (g->unkE8->unk2C->unk44 * 1000.0f);
    if (func_802039B0() != 0) {
        func_8012FE50(0x10, 0x61, 1, 6, 2);
    }
}


typedef struct func_80242034_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80242034_Inner;

typedef struct func_80242034_Outer {
    u8 pad0[0x30];
    func_80242034_Inner *unk30;
} func_80242034_Outer;


void func_80242034(s32 arg0, void **arg1) {
    f32 temp_fv0;
    func_80242034_Inner *temp_v0;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_800062F8(*arg1, 0x80000C00);
    ((func_80242034_Outer *) *arg1)->unk30->unk30 = D_8017AF38;
    ((func_80242034_Outer *) *arg1)->unk30->unk24 = 0x400;
    ((func_80242034_Outer *) *arg1)->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
    ((func_80242034_Outer *) *arg1)->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
    ((func_80242034_Outer *) *arg1)->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
    ((func_80242034_Outer *) *arg1)->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
    func_8012C89C(arg0, 0, 0x52D, 1);
    ((func_80242034_Outer *) *arg1)->unk30->unk20 = 1.0f;
    temp_v0 = ((func_80242034_Outer *) *arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    ((func_80242034_Outer *) *arg1)->unk30->unk18 = temp_fv0;
    func_800058DC((void *) arg0, func_80242140);
}



void func_80242140(s32 arg0, s32 arg1) {
    if (func_80133A24(493) != 0) {
        func_800058DC(arg0, func_8024217C);
    }
}


typedef struct func_8024217C_Leaf {
    u8 pad0[0x8];
    f32 unk8;
} func_8024217C_Leaf;

typedef struct func_8024217C_Mid {
    u8 pad0[0x30];
    func_8024217C_Leaf *unk30;
} func_8024217C_Mid;

typedef struct func_8024217C_Struct {
    u8 pad0[0x24];
    func_8024217C_Mid *unk24;
} func_8024217C_Struct;


void func_8024217C(func_8024217C_Struct *arg0, void *arg1) {
    f32 var_fv0;
    func_8024217C_Leaf *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 + 1.0f;
    var_fv0 = arg0->unk24->unk30->unk8;
    if (var_fv0 > 210.0f) {
        func_80133980(0x1EE);
        var_fv0 = arg0->unk24->unk30->unk8;
    }
    if (!(var_fv0 < D_80252574)) {
        func_800058DC((s32) arg0, (void *) func_80242220);
    }
}



void func_80242220(s32 arg0, s32 arg1) {
    if (func_80133A24(0x1ED) == 0) {
        func_800058DC(arg0, func_8024225C);
    }
}


typedef struct func_8024225C_Leaf {
    u8 pad0[8];
    f32 unk8;
} func_8024225C_Leaf;

typedef struct func_8024225C_Inner {
    u8 pad0[0x30];
    func_8024225C_Leaf *unk30;
} func_8024225C_Inner;

typedef struct func_8024225C_Struct {
    u8 pad0[0x24];
    func_8024225C_Inner *unk24;
} func_8024225C_Struct;


void func_8024225C(void *arg0, void *arg1) {
    func_8024225C_Leaf *temp_v0;

    temp_v0 = ((func_8024225C_Struct *) arg0)->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - 1.0f;
    temp_v0 = ((func_8024225C_Struct *) arg0)->unk24->unk30;
    if (temp_v0->unk8 < 210.0f) {
        temp_v0->unk8 = 210.0f;
        func_800058DC(arg0, (void *) func_802422C8);
    }
}


void func_802422C8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



typedef struct func_802422D4_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802422D4_Inner;

typedef struct func_802422D4_Outer {
    u8 pad0[0x30];
    func_802422D4_Inner *unk30;
} func_802422D4_Outer;

typedef struct func_802422D4_Arg0Inner {
    u8 pad0[0x10];
    u32 unk10;
} func_802422D4_Arg0Inner;

typedef struct func_802422D4_Arg0 {
    u8 pad0[0x38];
    func_802422D4_Arg0Inner *unk38;
} func_802422D4_Arg0;

void func_802422D4(void *arg0, void **arg1) {
    f32 temp_fv0;
    func_802422D4_Inner *temp_v0;

    func_80005F6C((s32) arg0, D_80164F40);
    func_80006214((s32) arg0);
    func_800062F8(*arg1, 0x80000C00);
    ((func_802422D4_Outer *) *arg1)->unk30->unk30 = D_8017AF38;
    ((func_802422D4_Outer *) *arg1)->unk30->unk24 = 0x400;
    ((func_802422D4_Outer *) *arg1)->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
    ((func_802422D4_Outer *) *arg1)->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
    ((func_802422D4_Outer *) *arg1)->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
    ((func_802422D4_Outer *) *arg1)->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
    if (((((func_802422D4_Arg0 *) arg0)->unk38->unk10) >> 0x18) != 0) {
        func_8012C89C((s32) arg0, 0, 0x52E, 3);
    } else {
        func_8012C89C((s32) arg0, 0, 0x52E, 4);
    }
    ((func_802422D4_Outer *) *arg1)->unk30->unk20 = 1.0f;
    temp_v0 = ((func_802422D4_Outer *) *arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    ((func_802422D4_Outer *) *arg1)->unk30->unk18 = temp_fv0;
    func_800058DC(arg0, (void *) func_80242414);
}


typedef struct func_80242414_Inner {
    u8 pad0[0x10];
    u32 unk10;
} func_80242414_Inner;

typedef struct func_80242414_Outer {
    u8 pad0[0x38];
    func_80242414_Inner *unk38;
} func_80242414_Outer;


void func_80242414(func_80242414_Outer *arg0, void *arg1) {
    if ((arg0->unk38->unk10 >> 0x18) != 0) {
        if (func_80133A24(0x1EF) == 0) {
            return;
        }
        goto block_4;
    }
    if (func_80133A24(0x1F0) != 0) {
block_4:
        func_800058DC(arg0, func_8024247C);
    }
}


typedef struct func_8024247C_Struct_Inner {
    u8 pad0[0x8];
    f32 unk8;
} func_8024247C_Struct_Inner;

typedef struct func_8024247C_Struct_Mid {
    u8 pad0[0x30];
    func_8024247C_Struct_Inner *unk30;
} func_8024247C_Struct_Mid;

typedef struct func_8024247C_Struct {
    u8 pad0[0x24];
    func_8024247C_Struct_Mid *unk24;
    u8 pad1[0x90 - 0x28];
    f32 unk90;
} func_8024247C_Struct;


void func_8024247C(func_8024247C_Struct *arg0, void *arg1) {
    func_8024247C_Struct_Inner *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - arg0->unk90;
    arg0->unk90 = D_80252578;
    if (!(arg0->unk24->unk30->unk8 > -500.0f)) {
        func_800058DC(arg0, func_802424EC);
    }
}


void func_802424EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802424F8.s")



void func_80242690(u8 *arg0, void **arg1) {
    u8 *temp_v0;
    s32 temp_v1;

    temp_v0 = *(u8 **)((u8 *)*arg1 + 0x30);
    temp_v0[0x4B] = temp_v0[0x4B] + 1;
    temp_v1 = *(u16 *)(arg0 + 0x92);
    *(u16 *)(arg0 + 0x92) = temp_v1 - 1;
    if (temp_v1 == 0) {
        func_800058DC(arg0, func_802426D8);
    }
}


typedef struct func_802426D8_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_802426D8_StructB;
typedef struct func_802426D8_StructA {
    u8 pad0[0x30];
    func_802426D8_StructB *unk30;
} func_802426D8_StructA;


void func_802426D8(s32 arg0, func_802426D8_StructA **arg1) {
    if (D_80089474[1] & 2) {
        (*arg1)->unk30->unk18 = (f32)((f64)(*arg1)->unk30->unk18 + 1.0);
        (*arg1)->unk30->unk1C = (f32)((f64)(*arg1)->unk30->unk1C + 1.0);
        (*arg1)->unk30->unk20 = (f32)((f64)(*arg1)->unk30->unk20 + 1.0);
    }
    if (D_80089474[1] & 1) {
        (*arg1)->unk30->unk18 = (f32)((f64)(*arg1)->unk30->unk18 - 1.0);
        (*arg1)->unk30->unk1C = (f32)((f64)(*arg1)->unk30->unk1C - 1.0);
        (*arg1)->unk30->unk20 = (f32)((f64)(*arg1)->unk30->unk20 - 1.0);
    }
}


typedef struct func_802427CC_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x2A0 - 6];
    f32 unk2A0;
    u8 pad2[0xF20 - 0x2A4];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 unkF26;
    u8 unkF27;
    u8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    s8 unkF2C;
    s8 unkF2D;
    u8 unkF2E;
    u8 pad3[6];
    u8 unkF35;
} func_802427CC_StructGlobal;

typedef struct func_802427CC_StructArg {
    u8 pad[0x90];
    u16 unk90;
} func_802427CC_StructArg;

void func_802427CC(func_802427CC_StructArg *arg0, s32 arg1) {
    extern u16 func_8012C6B4();
    if ((((func_802427CC_StructGlobal *)&D_801BBBF0)->unk4 == 0x5A) || (func_80133A24(0x1F4) != 0)) {
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF22 = 0xA;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF23 = 0xFF;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF24 = 0xC8;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF25 = 0xB4;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF20 = 0;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF21 = 0;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF26 = 0x1F;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF27 = 0x3C;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF28 = 0x48;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF29 = 0x96;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2A = 0x5A;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2B = 0x32;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2C = -0x1F;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2D = -0x7D;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2E = 0x7D;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF35 = 0xC4;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unk2A0 = 1800.0f;
        arg0->unk90 = func_8012C6B4(0x32);
        func_800058DC((s32)arg0, func_802428B8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802428B8.s")


typedef struct func_802428F8_Struct {
    u8 pad0[0x90];
    u16 unk90;
} func_802428F8_Struct;

void func_802428F8(func_802428F8_Struct *arg0, void *arg1)
{
  u16 temp_v0;
  D_801BBBF0.pad2[0xF20 - 0x165] += 0x4B;
  temp_v0 = arg0->unk90;
  arg0->unk90 = temp_v0 - 1;
  if ((!arg0) && (!arg0))
  {
  }
  if (temp_v0 == 0)
  {
    arg0->unk90 = 3;
    func_800058DC(arg0, func_8024294C);
  }
}



void func_8024294C(void *arg0, void *arg1) {
    s32 temp_v0;

    ((u8 *) &D_801BBBF0)[0xF20] = (u8) (((u8 *) &D_801BBBF0)[0xF20] - 0x4B);
    temp_v0 = *(u16 *) ((u8 *) arg0 + 0x90);
    *(u16 *) ((u8 *) arg0 + 0x90) = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        ((u8 *) &D_801BBBF0)[0xF20] = 0;
        *(u16 *) ((u8 *) arg0 + 0x90) = func_8012C6B4(0x32, &D_801BBBF0, arg0);
        func_800058DC(arg0, func_802428B8);
    }
}

