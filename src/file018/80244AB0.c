#include "common.h"

extern f32 D_8025C5DC;
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern s32 D_8025C6E8;
extern s32 func_80005F6C(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_800062F8(void *, s32);
extern s32 func_80010550();
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
extern u8 D_8025C705;
extern u8 D_8025C7E8;
extern u8 func_80248AD0[];
extern void func_800058DC();
extern void func_8001F74C();
extern void func_80020744(s32);
extern void func_80126EAC();
extern void func_8012A94C(void *, s32);
extern void func_8013A334(f32 *, s32, s32, s32);
extern void func_802453E0();
extern void func_8024564C();
extern void func_80245C58();
extern void func_80245F84();
extern void func_80246488();
extern void func_80246B68();
extern void func_80246E60(void *arg0, s32 arg1);
extern void func_802487AC();
extern void func_80248860();

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

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802474E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802475F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024786C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247A1C.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80249A58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024A168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024AAEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024AF84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024B2FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024B5B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024BCE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024C58C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024CA4C.s")

