#include "common.h"

extern f32 D_8025C5CC;
extern f32 D_8025C5DC;
extern f32 D_8025C5E8;
extern f32 D_8025C644;
extern f32 D_8025C694;
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern s32 D_8025C6E8;
extern s32 func_80005F6C(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_800062F8(void *, s32);
extern s32 func_80010550();
extern s32 func_8001EF38(f32, f32);
extern s32 func_80126B14(s32, void *, u16, s32);
extern s32 func_8012A564(void *, s32);
extern s32 func_8012C6B4();
extern s32 func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012CE9C();
extern s32 func_8012CF8C(void *, s32, s32, s32);
extern s32 func_80133A24(s32);
extern s32 func_80244AB0();
extern s8 D_8025C704;
extern u32 D_8025C708;
extern u8 *D_8025C6F0;
extern u8 D_80164F40[];
extern u8 D_8017B6C0[];
extern u8 D_80258FE0[];
extern u8 D_80259098[];
extern u8 D_8025C338[];
extern u8 D_8025C705;
extern u8 D_8025C7E8;
extern u8 func_80248AD0[];
extern void func_800058DC();
extern void func_8001F74C();
extern void func_80020744(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80126EAC();
extern void func_8012A94C(void *, s32);
extern void func_8012D8C8(void *, s32, s32, s32, s32, s32);
extern void func_8013A334(f32 *, s32, s32, s32);
extern void func_802453E0();
extern void func_8024564C();
extern void func_80245C58();
extern void func_80245F84();
extern void func_80246488();
extern void func_80246B68();
extern void func_80246E60(void *arg0, s32 arg1);
extern void func_802474E4();
extern void func_80247B20();
extern void func_802487AC();
extern void func_80248860();
extern void func_8024A168();
extern void func_8024BCE4();
extern void func_8024CA4C();

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80244AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80244CEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80244F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802450F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802451EC.s")



void func_80245360(void *arg0, s32 arg1) {
    s32 temp_a2;
    f32 sp18[3];

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x5C);
    func_8013A334(sp18, arg1, temp_a2, 6);
    D_8025C71C = sp18[0];
    D_8025C720 = sp18[1];
    D_8025C724 = sp18[2];
    func_80010550(arg1, temp_a2);
    if (func_80133A24(0x13F) != 0) {
        func_800058DC(arg0, func_802453E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802453E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802454C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024557C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024564C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245A4C.s")

typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern func_80246E60_StructGlobal D_80258F18;


typedef struct func_80245B90_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245B90_StructInner;

typedef struct func_80245B90_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x28];
    func_80245B90_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
    u8 pad96[0x6];
    s32 unk9C;
} func_80245B90_Struct;

void func_80245B90(func_80245B90_Struct *arg0, s32 arg1) {
    func_80245B90_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80244AB0(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258F18, 0xA) == 0) && (func_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x40) + 0x40);
        arg0->unk9C = arg0->unk30;
        func_800058DC(arg0, func_80245C58);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245D78.s")



typedef struct func_80245EBC_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245EBC_StructInner;

typedef struct func_80245EBC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x28];
    func_80245EBC_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
    u8 pad96[0x6];
    s32 unk9C;
} func_80245EBC_Struct;

void func_80245EBC(func_80245EBC_Struct *arg0, s32 arg1) {
    func_80245EBC_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80244AB0(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258F18, 0xA) == 0) && (func_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x40) + 0x40);
        arg0->unk9C = arg0->unk30;
        func_800058DC(arg0, func_80245F84);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802462CC.s")



typedef struct func_80246410_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x28];
    u8 *unk5C;
    u8 pad60[0x34];
    s16 unk94;
    u8 pad96[0x6];
    s32 unk9C;
} func_80246410_Struct;

void func_80246410(func_80246410_Struct *arg0, s32 arg1)
{
  u8 *temp_v1;
  func_80246410_Struct *new_var;
  temp_v1 = arg0->unk5C;
  new_var = arg0;
  if (!new_var)
  {
  }
  if (func_80244AB0() == 0)
  {
    arg0->unk2C = arg0->unk2C | 0x80;
    *((s16 *) (temp_v1 + 0x78)) = 1;
    new_var->unk94 = func_8012C6B4(0x40) + 0x40;
    new_var->unk9C = new_var->unk30;
    func_800058DC(arg0, (void *) func_80246488);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246964.s")


typedef struct func_80246AA8_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80246AA8_StructInner;

typedef struct func_80246AA8_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80246AA8_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80246AA8_Struct;


void func_80246AA8(func_80246AA8_Struct *arg0, s32 arg1) {
    func_80246AA8_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80244AB0(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258F18, 0xA) == 0) && (func_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x40) + 0x40);
        func_800058DC(arg0, func_80246B68);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246B68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246C5C.s")


typedef struct func_80246DA0_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80246DA0_StructInner;

typedef struct func_80246DA0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80246DA0_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80246DA0_Struct;


void func_80246DA0(func_80246DA0_Struct *arg0, s32 arg1) {
    func_80246DA0_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80244AB0(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258F18, 0xA) == 0) && (func_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x40) + 0x40);
        func_800058DC(arg0, func_80246E60);
    }
}



typedef struct func_80246E60_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80246E60_StructInner;

extern func_80246E60_StructGlobal D_80258F48;

void func_80246E60(void *arg0, s32 arg1) {
    func_80246E60_StructInner *sp2C;

    sp2C = *(func_80246E60_StructInner **)((u8 *)arg0 + 0x5C);
    if (func_80244AB0(arg0) == 0) {
        if (func_8012CE9C(arg1, sp2C, D_80258F48, 0xA) == 0) {
            func_80010550(arg1, (s32)sp2C);
            func_8012A94C(arg0, 0x80);
            if (func_8012A564(arg0, 0x43220000) != 0) {
                sp2C->unk78 = 1;
                D_8025C708 = 1;
                func_800058DC(arg0, (void *)func_8024564C);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246F24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024700C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802472C8.s")


typedef struct func_80247420_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80247420_StructInner;

typedef struct func_80247420_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80247420_StructInner *unk5C;
} func_80247420_Struct;


void func_80247420(func_80247420_Struct *arg0, s32 arg1) {
    func_80247420_StructInner *sp2C;

    sp2C = arg0->unk5C;
    arg0->unk2C = arg0->unk2C | 0x80;
    if (func_80244AB0() == 0 && func_8012CE9C(arg1, sp2C, D_80258F18, 0xA) == 0 && func_80010550(arg1, sp2C) != 0) {
        sp2C->unk78 = 1;
        arg0->unk2C = arg0->unk2C & ~0x80;
        D_8025C704 = 1;
        func_800058DC(arg0, &func_802474E4);
    }
}


typedef struct func_802474E4_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802474E4_StructNode;
typedef struct func_802474E4_StructMid {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
} func_802474E4_StructMid;
typedef struct func_802474E4_Struct {
    u8 pad0[0x24];
    func_802474E4_StructMid *unk24;
    u8 pad28[0x34];
    func_80246E60_StructInner *unk5C;
} func_802474E4_Struct;

extern func_80246E60_StructGlobal D_80258F3C;
extern func_802474E4_StructMid *D_801BBCD0;

void func_802474E4(func_802474E4_Struct *arg0, s32 arg1) {
    s32 temp_v1_2;
    func_80246E60_StructInner *sp28;

    sp28 = arg0->unk5C;
    if ((func_80244AB0() == 0) && (func_8012CE9C(arg1, sp28, D_80258F3C, 0xA) == 0)) {
        func_80010550(arg1, sp28);
        temp_v1_2 = (arg0->unk24->unk2C->unk12 - func_8001EF38(D_801BBCD0->unk2C->unk4 - arg0->unk24->unk2C->unk4, D_801BBCD0->unk2C->unkC - arg0->unk24->unk2C->unkC)) & 0x1FFF & 0xFFFF;
        if ((temp_v1_2 < 0x200) || ((temp_v1_2 >= 0x1E01) && (temp_v1_2 < 0x1FFF))) {
            sp28->unk78 = 1;
            func_800058DC(arg0, (void *)func_8024564C);
        }
        func_8012A94C(arg0, 0x40);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802475F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024786C.s")


typedef struct func_80247A1C_StructObj {
    u8 pad0[0x78];
    s16 unk78;
} func_80247A1C_StructObj;

typedef struct func_80247A1C_StructArg0 {
    u8 pad0[0x5C];
    func_80247A1C_StructObj *unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_80247A1C_StructArg0;


void func_80247A1C(func_80247A1C_StructArg0 *arg0, s32 arg1) {
    u8 pad[8];
    func_80247A1C_StructObj *sp54;

    sp54 = arg0->unk5C;
    func_8011AAF4(D_8025C338, 0x505, arg0, 0, 2, 1.0f, -5.0f, 254.0f, 292.0f, 1.5f, -2.0f, 228.0f, D_8025C5CC, 0.0f, 35.0f, -1, -1);
    if (func_80010550(arg1, sp54) != 0) {
        sp54->unk78 = 1;
        arg0->unk90 = 0x80;
        func_800058DC(arg0, &func_80247B20);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247EB0.s")


typedef struct func_80247FA8_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80247FA8_StructInner;

typedef struct func_80247FA8_Struct {
    u8 pad0[0x5C];
    func_80247FA8_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80247FA8_Struct;


void func_80247FA8(func_80247FA8_Struct *arg0, s32 arg1)
{
  s16 temp_v0 = arg0->unk94;
  func_80247FA8_StructInner *new_var;
  s32 temp_a2 = (s32) arg0->unk5C;
  arg0->unk94 = temp_v0 - 1;
  if (temp_v0 == 0)
  {
    new_var = (func_80247FA8_StructInner *) temp_a2;
    if ((arg0->unk5C && arg0->unk5C) && arg0->unk5C)
    {
    }
    new_var->unk78 = 1;
    func_800058DC(arg0, func_8024564C);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248484.s")


typedef struct func_80248738_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80248738_StructInner;

typedef struct func_80248738_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80248738_StructInner *unk5C;
} func_80248738_Struct;


void func_80248738(func_80248738_Struct *arg0, s32 arg1) {
    func_80248738_StructInner *temp_a3;

    temp_a3 = arg0->unk5C;
    if (func_80010550(arg1, temp_a3) != 0) {
        temp_a3->unk78 = 1;
        arg0->unk2C = arg0->unk2C & ~0x80;
        D_8025C704 = 1;
        func_800058DC(arg0, func_802487AC);
    }
}


struct func_802487AC_StructB {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_802487AC_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    struct func_802487AC_StructB *unk5C;
    u8 pad2[0x94 - 0x60];
    s16 unk94;
};

struct func_802487AC_StructC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern struct func_802487AC_StructC D_80258F0C;

void func_802487AC(struct func_802487AC_StructA *arg0, s32 arg1) {
    struct func_802487AC_StructB *sp2C;

    sp2C = arg0->unk5C;
    arg0->unk2C = (s32) (arg0->unk2C | 0x80);
    if (func_80244AB0() == 0) {
        if (func_8012CE9C(arg1, (void *) sp2C, D_80258F0C, 0xA) == 0) {
            func_80010550(arg1, sp2C);
            arg0->unk94 = func_8012C6B4(0x40);
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80248860);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802488D0.s")

typedef struct func_80248998_StructInner {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[0x6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80248998_StructInner;
typedef struct func_80248998_StructOuter {
    u8 pad0[0x30];
    func_80248998_StructInner *unk30;
} func_80248998_StructOuter;
void func_80248998(void *arg0, func_80248998_StructOuter **arg1);


void func_80248938(s32 arg0, s32 arg1)
{
  if (!arg0)
  {
  }
  D_8025C6E8 = arg0;
  func_8001F74C();
  if (func_80126B14(arg0, func_80126EAC, *((u16 *) (D_8025C6F0 + 0x72)), 0x3D0 & 0xFFFFFFFF) != 0)
  {
    func_800058DC(arg0, func_80248998);
  }
}





void func_80248998(void *arg0, func_80248998_StructOuter **arg1) {
    f32 fv;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x3D0, 0);
    (*arg1)->unk30->unk24 = 0x100;
    (*arg1)->unk30->unk30 = (s32)D_8017B6C0 | 0x40000000;
    func_800062F8(*arg1, 0x80000A00);
    fv = D_8025C5DC;
    (*arg1)->unk30->unk18 = fv;
    (*arg1)->unk30->unk1C = fv;
    (*arg1)->unk30->unk20 = fv;
    (*arg1)->unk30->unk10 = 0x1800;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    ((u32 *)arg0)[0x2C / 4] |= 0x20;
    func_800058DC(arg0, func_80248AD0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248B4C.s")



struct func_80248D10_Struct {
    u8 pad[0x98];
    s16 unk98;
};

void func_80248D10(struct func_80248D10_Struct *arg0) {
    arg0->unk98 = D_8025C705 & 3;
    D_8025C705 += 1;
}



typedef struct func_80248D34_Struct {
    u8 pad[0x98];
    u16 unk98;
} func_80248D34_Struct;

void func_80248D34(func_80248D34_Struct *arg0) {
    if (D_8025C7E8 != 0) {
        if (arg0->unk98 == 0) goto case0a;
        if (arg0->unk98 == 1) goto case1a;
        if (arg0->unk98 == 2) goto case2a;
        if (arg0->unk98 != 3) return;
        goto case3a;
case0a:
        func_80020744(0x5C8);
        return;
case1a:
        func_80020744(0x5C9);
        return;
case2a:
        func_80020744(0x5CA);
        return;
case3a:
        func_80020744(0x5CB);
        return;
    } else {
        if (arg0->unk98 == 0) goto case0b;
        if (arg0->unk98 == 1) goto case1b;
        if (arg0->unk98 == 2) goto case2b;
        if (arg0->unk98 != 3) return;
        goto case3b;
case0b:
        func_80020744(0x6CA);
        return;
case1b:
        func_80020744(0x6CB);
        return;
case2b:
        func_80020744(0x6CC);
        return;
case3b:
        func_80020744(0x6CD);
        return;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248E34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248FA0.s")



typedef struct func_802490C4_Struct {
    u8 pad[0x98];
    u16 unk98;
} func_802490C4_Struct;

void func_802490C4(func_802490C4_Struct *arg0) {
    if (D_8025C7E8 != 0) {
        if (arg0->unk98 == 0) goto case0a;
        if (arg0->unk98 == 1) goto case1a;
        if (arg0->unk98 == 2) goto case2a;
        if (arg0->unk98 != 3) return;
        goto case3a;
case0a:
        func_80020744(0x5CC);
        return;
case1a:
        func_80020744(0x5CD);
        return;
case2a:
        func_80020744(0x5CE);
        return;
case3a:
        func_80020744(0x5CF);
        return;
    } else {
        if (arg0->unk98 == 0) goto case0b;
        if (arg0->unk98 == 1) goto case1b;
        if (arg0->unk98 == 2) goto case2b;
        if (arg0->unk98 != 3) return;
        goto case3b;
case0b:
        func_80020744(0x577);
        return;
case1b:
        func_80020744(0x578);
        return;
case2b:
        func_80020744(0x579);
        return;
case3b:
        func_80020744(0x57A);
        return;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802491C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802492E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024951C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80249704.s")


typedef struct func_80249A58_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x6];
    u8 unk3A;
    u8 pad3B[0xD];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80249A58_StructInner;

typedef struct func_80249A58_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80249A58_StructInner *unk30;
} func_80249A58_StructObj;

typedef struct func_80249A58_StructArg0 {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    u8 pad94[0x2];
    s16 unk96;
} func_80249A58_StructArg0;

typedef struct func_80249A58_StructTbl {
    u8 unk0;
    u8 pad1[0x13];
} func_80249A58_StructTbl;

extern func_80249A58_StructTbl D_8025C728[];

void func_80249A58(func_80249A58_StructArg0 *arg0, func_80249A58_StructObj **arg1) {
#define sp3C ((s32)D_80259098 | 0x40000000)
#define sp38 ((s32)D_80258FE0 | 0x40000000)
    f32 f;
    s32 pad;

    func_8012C89C(arg0, 1, 3, 4);
    func_8012CF8C(arg0, (s32)arg1[1]->unk30 + 0x40, 0x3D0, 5);
    arg1[1]->unk30->unk3A = 0;
    arg1[1]->unk30->unk24 = 0x300;
    arg1[1]->unk30->unk30 = sp3C;
    func_800062F8(arg1[1], 0x80000A00);
    arg1[1]->unk30->unk18 = 0.0f;
    arg1[1]->unk30->unk1C = 0.0f;
    arg1[1]->unk30->unk20 = 0.0f;
    arg1[1]->unk30->unk48 = 0xFF;
    arg1[1]->unk30->unk49 = 0xFF;
    arg1[1]->unk30->unk4A = 0xFF;
    arg1[1]->unk30->unk4B = 0xFF;
    arg1[1]->unk30->unk4C = 0xFF;
    arg1[1]->unk30->unk4D = 0;
    arg1[1]->unk30->unk4E = 0;

    func_8012C89C(arg0, 0, 0x3D0, 1);
    func_8012CF8C(arg0, (s32)arg1[0]->unk30 + 0x40, 0x3D0, 2);
    arg1[0]->unk30->unk3A = 0;
    arg1[0]->unk30->unk24 = 0x300;
    arg1[0]->unk30->unk30 = sp38;
    func_800062F8(arg1[0], 0x800005EF);
    arg1[0]->unk30->unk18 = 0.0f;
    arg1[0]->unk30->unk1C = 0.0f;
    arg1[0]->unk30->unk20 = 0.0f;
    arg1[0]->unk30->unk48 = 0xFF;
    arg1[0]->unk30->unk49 = 0xFF;
    arg1[0]->unk30->unk4A = 0xFF;
    arg1[0]->unk30->unk4B = 0xFF;
    arg1[0]->unk30->unk4C = 0xFF;
    arg1[0]->unk30->unk4D = 0;
    arg1[0]->unk30->unk4E = 0;
    arg1[0]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[0]->unk30->unk8 = arg1[1]->unk30->unk8;
    arg1[0]->unk30->unkC = arg1[1]->unk30->unkC;
    arg1[0]->unk30->unk10 = 0;
    arg1[0]->unk30->unk12 = arg1[1]->unk30->unk12;
    arg1[0]->unk30->unk14 = 0;
    arg1[2]->unk22 = 1;

    func_8012C89C(arg0, 2, 0x3D0, 1);
    func_8012CF8C(arg0, (s32)arg1[2]->unk30 + 0x40, 0x3D0, 3);
    arg1[2]->unk30->unk3A = 0;
    arg1[2]->unk30->unk24 = 0x300;
    arg1[2]->unk30->unk30 = sp38;
    func_800062F8(arg1[2], 0x800005F0);
    arg1[2]->unk30->unk18 = 0.0f;
    arg1[2]->unk30->unk1C = 0.0f;
    arg1[2]->unk30->unk20 = 0.0f;
    arg1[2]->unk30->unk48 = 0xFF;
    arg1[2]->unk30->unk49 = 0xFF;
    arg1[2]->unk30->unk4A = 0xFF;
    arg1[2]->unk30->unk4B = 0xFF;
    arg1[2]->unk30->unk4C = 0xFF;
    arg1[2]->unk30->unk4D = 0;
    arg1[2]->unk30->unk4E = 0;
    arg1[2]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[2]->unk30->unk8 = arg1[1]->unk30->unk8;
    arg1[2]->unk30->unkC = arg1[1]->unk30->unkC;
    arg1[2]->unk30->unk14 = 0;
    arg1[2]->unk30->unk12 = arg1[1]->unk30->unk12;
    arg1[2]->unk30->unk14 = 0;
    arg1[3]->unk22 = 1;

    func_8012C89C(arg0, 3, 3, 2);
    func_8012CF8C(arg0, (s32)arg1[3]->unk30 + 0x40, 0x3D0, 4);
    arg1[3]->unk30->unk3A = 0;
    arg1[3]->unk30->unk24 = 0x300;
    arg1[3]->unk30->unk30 = sp3C;
    func_800062F8(arg1[3], 0x80000A00);
    arg1[3]->unk30->unk18 = 0.0f;
    arg1[3]->unk30->unk1C = 0.0f;
    arg1[3]->unk30->unk20 = 0.0f;
    arg1[3]->unk30->unk48 = 0xFF;
    arg1[3]->unk30->unk49 = 0xFF;
    arg1[3]->unk30->unk4A = 0xFF;
    arg1[3]->unk30->unk4B = 0xFF;
    arg1[3]->unk30->unk4C = 0xFF;
    arg1[3]->unk30->unk4D = 0;
    arg1[3]->unk30->unk4E = 0;
    arg1[3]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[3]->unk30->unk8 = arg1[1]->unk30->unk8;
    arg1[3]->unk30->unkC = arg1[1]->unk30->unkC;
    arg1[3]->unk30->unk10 = arg1[1]->unk30->unk10;
    arg1[3]->unk30->unk12 = arg1[1]->unk30->unk12;
    arg1[3]->unk30->unk14 = arg1[1]->unk30->unk14;

    func_8012C89C(arg0, 4, 3, 2);
    func_8012D8C8(arg0, 0x3D0, 9, 0x3F000000, 2, 4);
    arg1[4]->unk30->unk24 = 0x80300;
    arg1[4]->unk30->unk30 = sp38;
    func_800062F8(arg1[4], 0x80000600);
    f = D_8025C5E8;
    arg1[4]->unk30->unk18 = f;
    arg1[4]->unk30->unk1C = f;
    arg1[4]->unk30->unk20 = f;
    arg1[4]->unk30->unk48 = 0xFF;
    arg1[4]->unk30->unk49 = 0xFF;
    arg1[4]->unk30->unk4A = 0xFF;
    arg1[4]->unk30->unk4B = 0xFF;
    arg1[4]->unk30->unk4C = 0xFF;
    arg1[4]->unk30->unk4D = 0;
    arg1[4]->unk30->unk4E = 0;
    arg1[4]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[4]->unk30->unk8 = arg1[1]->unk30->unk8 + 13.0f;
    arg1[4]->unk30->unkC = arg1[1]->unk30->unkC;
    arg0->unk92 = 0x40;
    D_8025C728[arg0->unk90].unk0 = 2;
    arg0->unk96 = 6;
    func_802490C4((func_802490C4_Struct *)arg0);
    func_800058DC(arg0, func_8024A168);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024A168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024AAEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024AF84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024B2FC.s")


typedef struct func_8024B5B0_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x6];
    u8 unk3A;
    u8 pad3B[0xD];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_8024B5B0_StructInner;

typedef struct func_8024B5B0_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024B5B0_StructInner *unk30;
} func_8024B5B0_StructObj;

typedef struct func_8024B5B0_StructArg0 {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    u8 pad94[0x2];
    s16 unk96;
} func_8024B5B0_StructArg0;


void func_8024B5B0(func_8024B5B0_StructArg0 *arg0, func_8024B5B0_StructObj **arg1) {
#define sp3C ((s32)D_80259098 | 0x40000000)
#define sp38 ((s32)D_80258FE0 | 0x40000000)
    f32 f;
    s32 pad;

    func_8012C89C(arg0, 1, 3, 4);
    func_8012CF8C(arg0, (s32)arg1[1]->unk30 + 0x40, 0x3D0, 5);
    arg1[1]->unk30->unk3A = 0;
    arg1[1]->unk30->unk24 = 0x300;
    arg1[1]->unk30->unk30 = (s32)D_8017B6C0 | 0x40000000;
    arg1[1]->unk30->unk30 = sp3C;
    func_800062F8(arg1[1], 0x80000A00);
    arg1[1]->unk30->unk18 = 0.0f;
    arg1[1]->unk30->unk1C = 0.0f;
    arg1[1]->unk30->unk20 = 0.0f;
    arg1[1]->unk30->unk48 = 0xFF;
    arg1[1]->unk30->unk49 = 0xFF;
    arg1[1]->unk30->unk4A = 0xFF;
    arg1[1]->unk30->unk4B = 0xFF;
    arg1[1]->unk30->unk4C = 0xFF;
    arg1[1]->unk30->unk4D = 0;
    arg1[1]->unk30->unk4E = 0;

    func_8012C89C(arg0, 0, 0x3D0, 1);
    func_8012CF8C(arg0, (s32)arg1[0]->unk30 + 0x40, 0x3D0, 2);
    arg1[0]->unk30->unk3A = 0;
    arg1[0]->unk30->unk24 = 0x300;
    arg1[0]->unk30->unk30 = sp38;
    func_800062F8(arg1[0], 0x800005EF);
    arg1[0]->unk30->unk18 = 0.0f;
    arg1[0]->unk30->unk1C = 0.0f;
    arg1[0]->unk30->unk20 = 0.0f;
    arg1[0]->unk30->unk48 = 0xFF;
    arg1[0]->unk30->unk49 = 0xFF;
    arg1[0]->unk30->unk4A = 0xFF;
    arg1[0]->unk30->unk4B = 0xFF;
    arg1[0]->unk30->unk4C = 0xFF;
    arg1[0]->unk30->unk4D = 0;
    arg1[0]->unk30->unk4E = 0;
    arg1[0]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[0]->unk30->unk8 = arg1[1]->unk30->unk8;
    arg1[0]->unk30->unkC = arg1[1]->unk30->unkC;
    arg1[0]->unk30->unk10 = 0;
    arg1[0]->unk30->unk12 = arg1[1]->unk30->unk12;
    arg1[0]->unk30->unk14 = 0;
    arg1[2]->unk22 = 1;
    arg1[2]->unk30->unk3A = 0;

    func_8012C89C(arg0, 2, 0x3D0, 1);
    func_8012CF8C(arg0, (s32)arg1[2]->unk30 + 0x40, 0x3D0, 3);
    arg1[2]->unk30->unk24 = 0x300;
    arg1[2]->unk30->unk30 = sp38;
    func_800062F8(arg1[2], 0x800005F0);
    arg1[2]->unk30->unk3A = 0;
    arg1[2]->unk30->unk18 = 0.0f;
    arg1[2]->unk30->unk1C = 0.0f;
    arg1[2]->unk30->unk20 = 0.0f;
    arg1[2]->unk30->unk48 = 0xFF;
    arg1[2]->unk30->unk49 = 0xFF;
    arg1[2]->unk30->unk4A = 0xFF;
    arg1[2]->unk30->unk4B = 0xFF;
    arg1[2]->unk30->unk4C = 0xFF;
    arg1[2]->unk30->unk4D = 0;
    arg1[2]->unk30->unk4E = 0;
    arg1[2]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[2]->unk30->unk8 = arg1[1]->unk30->unk8;
    arg1[2]->unk30->unkC = arg1[1]->unk30->unkC;
    arg1[2]->unk30->unk14 = 0;
    arg1[2]->unk30->unk12 = arg1[1]->unk30->unk12;
    arg1[2]->unk30->unk14 = 0;
    arg1[3]->unk22 = 1;

    func_8012C89C(arg0, 3, 3, 2);
    func_8012CF8C(arg0, (s32)arg1[3]->unk30 + 0x40, 0x3D0, 4);
    arg1[3]->unk30->unk3A = 0;
    arg1[3]->unk30->unk24 = 0x300;
    arg1[3]->unk30->unk30 = sp3C;
    func_800062F8(arg1[3], 0x80000A00);
    arg1[3]->unk30->unk18 = 0.0f;
    arg1[3]->unk30->unk1C = 0.0f;
    arg1[3]->unk30->unk20 = 0.0f;
    arg1[3]->unk30->unk48 = 0xFF;
    arg1[3]->unk30->unk49 = 0xFF;
    arg1[3]->unk30->unk4A = 0xFF;
    arg1[3]->unk30->unk4B = 0xFF;
    arg1[3]->unk30->unk4C = 0xFF;
    arg1[3]->unk30->unk4D = 0;
    arg1[3]->unk30->unk4E = 0;
    arg1[3]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[3]->unk30->unk8 = arg1[1]->unk30->unk8;
    arg1[3]->unk30->unkC = arg1[1]->unk30->unkC;
    arg1[3]->unk30->unk10 = arg1[1]->unk30->unk10;
    arg1[3]->unk30->unk12 = arg1[1]->unk30->unk12;
    arg1[3]->unk30->unk14 = arg1[1]->unk30->unk14;

    func_8012C89C(arg0, 4, 3, 2);
    func_8012D8C8(arg0, 0x3D0, 9, 0x3F000000, 2, 4);
    arg1[4]->unk30->unk24 = 0x80300;
    arg1[4]->unk30->unk30 = sp38;
    func_800062F8(arg1[4], 0x80000600);
    f = D_8025C644;
    arg1[4]->unk30->unk18 = f;
    arg1[4]->unk30->unk1C = f;
    arg1[4]->unk30->unk20 = f;
    arg1[4]->unk30->unk48 = 0xFF;
    arg1[4]->unk30->unk49 = 0xFF;
    arg1[4]->unk30->unk4A = 0xFF;
    arg1[4]->unk30->unk4B = 0xFF;
    arg1[4]->unk30->unk4C = 0xFF;
    arg1[4]->unk30->unk4D = 0;
    arg1[4]->unk30->unk4E = 0;
    arg1[4]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[4]->unk30->unk8 = arg1[1]->unk30->unk8 + 13.0f;
    arg1[4]->unk30->unkC = arg1[1]->unk30->unkC;
    arg0->unk92 = 0x40;
    D_8025C728[arg0->unk90].unk0 = 2;
    arg0->unk96 = 6;
    func_802490C4((func_802490C4_Struct *)arg0);
    func_800058DC(arg0, func_8024BCE4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024BCE4.s")


typedef struct func_8024C58C_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x6];
    u8 unk3A;
    u8 pad3B[0xD];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_8024C58C_StructInner;

typedef struct func_8024C58C_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024C58C_StructInner *unk30;
} func_8024C58C_StructObj;

typedef struct func_8024C58C_StructArg0 {
    u8 pad0[0x35];
    u8 unk35;
    u8 pad36[0x5C];
    s16 unk92;
    u8 pad94[0x2];
    s16 unk96;
} func_8024C58C_StructArg0;

typedef struct func_8024C58C_StructGlobal {
    u8 pad0[0x104];
    u16 unk104;
    u8 pad106[0xBA2 - 0x106];
    u8 unkBA2;
} func_8024C58C_StructGlobal;

extern func_8024C58C_StructGlobal D_801BBBF0;

void func_8024C58C(func_8024C58C_StructArg0 *arg0, func_8024C58C_StructObj **arg1) {
#define sp38 ((s32)D_80258FE0 | 0x40000000)
    s32 i;
    f32 f;

    func_8001F74C();
    arg0->unk35 = D_801BBBF0.unk104;
    D_801BBBF0.unkBA2 = 0;
    D_801BBBF0.unk104++;
    for (i = 0; i != 11; i++) {
        if (func_80005F6C(arg0, D_80164F40) == 0) {
            return;
        }
    }
    func_80006214(arg0);

    func_8012C89C(arg0, 0, 0x3D0, 1);
    func_8012CF8C(arg0, (s32)arg1[0]->unk30 + 0x40, 0x3D0, 2);
    arg1[0]->unk30->unk3A = 0;
    arg1[0]->unk30->unk24 = 0x300;
    arg1[0]->unk30->unk30 = sp38;
    func_800062F8(arg1[0], 0x800005EF);
    arg1[0]->unk30->unk18 = 0.0f;
    arg1[0]->unk30->unk1C = 0.0f;
    arg1[0]->unk30->unk20 = 0.0f;
    arg1[0]->unk30->unk48 = 0xFF;
    arg1[0]->unk30->unk49 = 0xFF;
    arg1[0]->unk30->unk4A = 0xFF;
    arg1[0]->unk30->unk4B = 0xFF;
    arg1[0]->unk30->unk4C = 0xFF;
    arg1[0]->unk30->unk4D = 0;
    arg1[0]->unk30->unk4E = 0xFF;
    arg1[0]->unk30->unk4 = 0.0f;
    arg1[0]->unk30->unk8 = 150.0f;
    arg1[0]->unk30->unkC = 442.0f;
    arg1[0]->unk30->unk10 = 0;
    arg1[0]->unk30->unk12 = 0;
    arg1[0]->unk30->unk14 = 0;
    arg1[1]->unk30->unk4 = 0.0f;
    arg1[1]->unk30->unk8 = 150.0f;
    arg1[1]->unk30->unkC = 442.0f;
    arg1[1]->unk30->unk10 = 0;
    arg1[1]->unk30->unk12 = 0;
    arg1[1]->unk30->unk14 = 0;
    arg1[2]->unk22 = 1;

    func_8012C89C(arg0, 2, 0x3D0, 1);
    func_8012CF8C(arg0, (s32)arg1[2]->unk30 + 0x40, 0x3D0, 3);
    arg1[2]->unk30->unk3A = 0;
    arg1[2]->unk30->unk24 = 0x300;
    arg1[2]->unk30->unk30 = sp38;
    func_800062F8(arg1[2], 0x800005F0);
    arg1[2]->unk30->unk18 = 0.0f;
    arg1[2]->unk30->unk1C = 0.0f;
    arg1[2]->unk30->unk20 = 0.0f;
    arg1[2]->unk30->unk48 = 0xFF;
    arg1[2]->unk30->unk49 = 0xFF;
    arg1[2]->unk30->unk4A = 0xFF;
    arg1[2]->unk30->unk4B = 0xFF;
    arg1[2]->unk30->unk4C = 0xFF;
    arg1[2]->unk30->unk4D = 0;
    arg1[2]->unk30->unk4E = 0xFF;
    arg1[2]->unk30->unk4 = 0.0f;
    arg1[2]->unk30->unk8 = 150.0f;
    arg1[2]->unk30->unkC = 442.0f;
    arg1[2]->unk30->unk14 = 0;
    arg1[2]->unk30->unk12 = 0;
    arg1[2]->unk30->unk14 = 0;

    func_8012C89C(arg0, 4, 3, 2);
    func_8012D8C8(arg0, 0x3D0, 9, 0x3F000000, 2, 4);
    arg1[4]->unk30->unk24 = 0x80300;
    arg1[4]->unk30->unk30 = sp38;
    func_800062F8(arg1[4], 0x80000600);
    f = D_8025C694;
    arg1[4]->unk30->unk18 = f;
    arg1[4]->unk30->unk1C = f;
    arg1[4]->unk30->unk20 = f;
    arg1[4]->unk30->unk48 = 0xFF;
    arg1[4]->unk30->unk49 = 0xFF;
    arg1[4]->unk30->unk4A = 0xFF;
    arg1[4]->unk30->unk4B = 0xFF;
    arg1[4]->unk30->unk4C = 0xFF;
    arg1[4]->unk30->unk4D = 0;
    arg1[4]->unk30->unk4E = 0xFF;
    arg1[4]->unk30->unk4 = 0.0f;
    arg1[4]->unk30->unk8 = 150.0f;
    arg1[4]->unk30->unkC = 442.0f;
    arg0->unk92 = 0x40;
    arg0->unk96 = 6;
    func_80020744(0x238);
    func_800058DC(arg0, func_8024CA4C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024CA4C.s")

