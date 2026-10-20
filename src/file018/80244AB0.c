#include "common.h"

extern f32 D_8025C584;
extern f32 D_8025C588;
extern f32 D_8025C58C;
extern f32 D_8025C590;
extern f32 D_8025C59C;
extern f32 D_8025C5A0;
extern f32 D_8025C5A8;
extern f32 D_8025C5B0;
extern f32 D_8025C5B4;
extern f32 D_8025C5C0;
extern f32 D_8025C5C8;
extern f32 D_8025C5CC;
extern f32 D_8025C5D8;
extern f32 D_8025C5DC;
extern f32 D_8025C5E4;
extern f32 D_8025C5E8;
extern f32 D_8025C644;
extern f32 D_8025C694;
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern s32 D_801BBC30[];
extern s32 D_8025C6E8;
extern s32 D_8025C7E0;
extern s32 D_8025C7E4;
extern s32 func_80005F6C(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_800062F8(void *, s32);
extern s32 func_80010550();
extern s32 func_8001EF38(f32, f32);
extern s32 func_80126B14(s32, void *, u16, s32);
extern s32 func_80126CC0(void *, void (*)());
extern s32 func_8012A564(void *, s32);
extern s32 func_8012C6B4();
extern s32 func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012CE9C();
extern s32 func_8012CF8C(void *, s32, s32, s32);
extern s32 func_80133A24(s32);
extern s32 func_8013B570(void *, s32, s32, s32, void (*)());
extern s32 func_80244AB0();
extern s32 func_80244F28(s32 arg0);
extern s8 D_8025C704;
extern u32 D_8025C708;
extern u8 *D_8025C6F0;
extern u8 D_80164F40[];
extern u8 D_8017B6C0[];
extern u8 D_801BBC0D;
extern u8 D_801BBF7C[];
extern u8 D_801BC3D8[];
extern u8 D_80258E90[];
extern u8 D_80258F88[];
extern u8 D_80258FE0[];
extern u8 D_80259098[];
extern u8 D_8025C000[];
extern u8 D_8025C038[];
extern u8 D_8025C22C[];
extern u8 D_8025C290[];
extern u8 D_8025C300[];
extern u8 D_8025C338[];
extern u8 D_8025C468[];
extern u8 D_8025C705;
extern u8 D_8025C7E8;
extern u8 func_80247754[];
extern u8 func_80248484[];
extern u8 func_80248AD0[];
extern u8 func_80249704[];
extern void func_80005670();
extern void func_800058DC();
extern void func_8001F74C();
extern void func_80020744(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80126EAC();
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern void func_8012A7F4(void *, f32, f32, s32);
extern void func_8012A94C(void *, s32);
extern void func_8012D8C8(void *, s32, s32, s32, s32, s32);
extern void func_8013A334(f32 *, s32, s32, s32);
extern void func_8013E570(s32, s32, void *, void *, void *);
extern void func_801FBB20(void);
extern void func_802451EC();
extern void func_80245360(void *arg0, s32 arg1);
extern void func_802453E0();
extern void func_802454C4();
extern void func_8024564C();
extern void func_80245C58();
extern void func_80245F84();
extern void func_80246488();
extern void func_80246B68();
extern void func_80246E60(void *arg0, s32 arg1);
extern void func_802474E4();
extern void func_80247B20();
extern void func_80247FEC();
extern void func_802487AC();
extern void func_80248860();
extern void func_802488D0();
extern void func_8024A168();
extern void func_8024BCE4();
extern void func_8024CA4C();

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80244AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80244CEC.s")


typedef struct func_80244F28_StructMid {
    u8 pad0[0x2C];
    u8 *unk2C;
} func_80244F28_StructMid;


s32 func_80244F28(s32 arg0) {
    if (*(f32 *)((*(func_80244F28_StructMid **)(D_8025C000 - 0xA0330))->unk2C + 8) < 199.0f) {
        func_8011AAF4(D_8025C000, 0x182, arg0, 0, 1, 4.0f, 37.0f, 352.0f, D_8025C584, 4294967296.0f, 28.0f, 324.0f, 346.0f, 0.0f, 35.0f, -1, -1);
        return 1;
    }
    return 0;
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
extern func_802474E4_StructMid *D_801BBCD0;


s32 func_80245010(s32 arg0) {
    if (*(f32 *)(*(u8 **)((u8 *)D_801BBCD0 + 0x2C) + 8) < 199.0f) {
        func_8011AAF4(D_8025C038, 0x18D, (void *)arg0, 0, 1, 4.0f, -10.0f, D_8025C588, 250.0f, 4294967296.0f, -8.0f, 278.0f, D_8025C58C, 0.0f, 35.0f, -1, -1);
        return 1;
    }
    return 0;
}


typedef struct func_802450F8_StructInner {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x68];
    s16 unk78;
} func_802450F8_StructInner;

typedef struct func_802450F8_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_802450F8_StructInner *unk5C;
} func_802450F8_Struct;


void func_802450F8(func_802450F8_Struct *arg0, s32 arg1) {
    func_802450F8_StructInner *temp_v1;

    if (func_80126CC0(arg0, func_802488D0) != 0) {
        D_8025C708 = 0;
        func_8001F74C(arg0);
        arg0->unk2C |= 0x80;
        func_8013B570(arg0, 0xF8, 2, 4, func_802451EC);
        temp_v1 = arg0->unk5C;
        temp_v1->unkE |= 0x8000;
        temp_v1->unk78 = 1;
        if (D_801BBC0D == 0) {
            D_8025C7E0 = 100;
            D_8025C7E4 = 150;
        } else if (D_801BBC0D == 1U) {
            D_8025C7E0 = 200;
            D_8025C7E4 = 300;
        } else {
            D_8025C7E0 = 400;
            D_8025C7E4 = 600;
        }
    }
}

typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
struct func_802487AC_StructC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_802487AC_StructC D_80258F0C;

typedef struct func_802451EC_Sub {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u8 *unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_802451EC_Sub;
typedef struct func_802451EC_Obj {
    u8 pad0[0x2C];
    func_802451EC_Sub *unk2C;
} func_802451EC_Obj;
typedef struct func_802451EC_Ctl {
    u8 pad0[0xC];
    u16 unkC;
    u8 pad0E[0x6A];
    s16 unk78;
    u8 pad7A[0x1A];
    s16 unk94;
} func_802451EC_Ctl;

void func_802451EC(u8 *arg0, func_802451EC_Obj **arg1) {
    func_802451EC_Ctl *s0;
    s32 i;
    func_802451EC_Obj **p;
    u8 *a3;
    f32 k;

    s0 = *(func_802451EC_Ctl **)(arg0 + 0x5C);
    D_8025C6F0 = arg0;
    if (func_8012CE9C((s32)arg1, s0, *(func_80246E60_StructGlobal *)&D_80258F0C, 10) == 0) {
        func_80010550(arg1, s0);
        k = D_8025C590;
        (*arg1)->unk2C->unk18 = k;
        (*arg1)->unk2C->unk1C = k;
        (*arg1)->unk2C->unk20 = k;
        func_80005670(D_801BBC30[1], D_80258E90);
        i = 1;
        p = arg1 + 1;
        a3 = D_80258F88;
        if (s0->unkC >= 2) {
            a3 = (u8 *)((u32)D_80258F88 | 0x40000000);
            do {
                i++;
                p++;
                p[-1]->unk2C->unk24 = p[-1]->unk2C->unk24 | 0x100;
                p[-1]->unk2C->unk30 = a3;
                p[-1]->unk2C->unk48 = 0xFF;
                p[-1]->unk2C->unk49 = 0x96;
                p[-1]->unk2C->unk4A = 0x96;
                p[-1]->unk2C->unk4B = 0xFF;
            } while (i < s0->unkC);
        }
        s0->unk78 = 1;
        *(s16 *)(arg0 + 0x94) = 0x90;
        func_800058DC(arg0, (void *)func_80245360);
    }
}



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

extern func_80246E60_StructGlobal D_80258F3C;

typedef struct func_8024557C_StructInner {
    u8 pad0[0x1C];
    func_80246E60_StructGlobal unk1C;
    u8 pad28[0x50];
    s16 unk78;
} func_8024557C_StructInner;

typedef struct func_8024557C_Struct {
    u8 pad0[0x24];
    func_80244F28_StructMid *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[0x1C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 unk50;
    u8 pad51[3];
    s32 unk54;
    u8 pad58[4];
    func_8024557C_StructInner *unk5C;
} func_8024557C_Struct;


void func_8024557C(func_8024557C_Struct *arg0, s32 *arg1) {
    func_8024557C_StructInner *temp_v0;
    u8 *temp_v0_2;
    s32 value;

    temp_v0 = arg0->unk5C;
    temp_v0->unk1C = D_80258F3C;
    temp_v0->unk78 = 1;
    func_801FBB20();
    D_801BC3D8[0x3BA] = 1;
    arg0->unk2C |= 0x23E0;
    arg0->unk4C = 0x1B;
    arg0->unk4D = 0x1B;
    arg0->unk4E = 0x1B;
    arg0->unk4F = 0;
    arg0->unk50 = 0xA;
    arg0->unk54 |= 0xE1;
    value = *arg1;
    temp_v0_2 = arg0->unk24->unk2C;
    func_8013E570(value, 0, temp_v0_2 + 4, temp_v0_2 + 8, temp_v0_2 + 0xC);
    func_800058DC(arg0, func_8024564C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024564C.s")

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
void func_80245B90(func_80245B90_Struct *arg0, s32 arg1);


typedef struct func_80245A4C_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80245A4C_Node;
typedef struct func_80245A4C_Mid {
    u8 pad0[0x2C];
    func_80245A4C_Node *unk2C;
} func_80245A4C_Mid;
typedef struct func_80245A4C_Struct {
    u8 pad0[0x24];
    func_80245A4C_Mid *unk24;
    u8 pad28[0x34];
    func_80245B90_StructInner *unk5C;
} func_80245A4C_Struct;

void func_80245A4C(func_80245A4C_Struct *arg0, s32 arg1) {
    u8 pad[16];
    func_80245B90_StructInner *sp2C;
    s32 v;
    func_80245A4C_Node *n;

    sp2C = arg0->unk5C;
    if (func_80244AB0() == 0) {
        D_8025C708 = 0;
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 0xA) == 0) {
            func_80010550(arg1, sp2C);
            n = arg0->unk24->unk2C;
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(0.0f - n->unk4, 350.0f - *(f32 *)&n->unkC)) & 0x1FFF & 0xFFFF;
            if ((v < 0x200) || ((v >= 0x1E01) && (v < 0x1FFF))) {
                sp2C->unk78 = 1;
                n = arg0->unk24->unk2C;
                func_80127430(n->unk4, n->unk8, n->unkC, 0x66A, D_8025C59C, 1.0f);
                func_800058DC(arg0, func_80245B90);
            }
            func_8012A7F4(arg0, 0.0f, 350.0f, 0x40);
        }
    }
}

extern func_80246E60_StructGlobal D_80258F18;




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
void func_80245EBC(func_80245EBC_Struct *arg0, s32 arg1);

typedef struct func_80245D78_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80245D78_Node;
typedef struct func_80245D78_Mid {
    u8 pad0[0x2C];
    func_80245D78_Node *unk2C;
} func_80245D78_Mid;
typedef struct func_80245D78_Struct {
    u8 pad0[0x24];
    func_80245D78_Mid *unk24;
    u8 pad28[0x34];
    func_80245B90_StructInner *unk5C;
} func_80245D78_Struct;

void func_80245D78(func_80245D78_Struct *arg0, s32 arg1) {
    u8 pad[16];
    func_80245B90_StructInner *sp2C;
    s32 v;
    func_80245D78_Node *n;

    sp2C = arg0->unk5C;
    if (func_80244AB0() == 0) {
        D_8025C708 = 0;
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 0xA) == 0) {
            func_80010550(arg1, sp2C);
            n = arg0->unk24->unk2C;
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(0.0f - n->unk4, 420.0f - *(f32 *)&n->unkC)) & 0x1FFF & 0xFFFF;
            if ((v < 0x200) || ((v >= 0x1E01) && (v < 0x1FFF))) {
                sp2C->unk78 = 1;
                n = arg0->unk24->unk2C;
                func_80127430(n->unk4, n->unk8, n->unkC, 0x66A, D_8025C5A0, 1.0f);
                func_800058DC(arg0, func_80245EBC);
            }
            func_8012A7F4(arg0, 0.0f, 420.0f, 0x40);
        }
    }
}





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
void func_80246410(func_80246410_Struct *arg0, s32 arg1);

typedef struct func_802462CC_StructN {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802462CC_StructN;
typedef struct func_802462CC_StructM {
    u8 pad0[0x2C];
    func_802462CC_StructN *unk2C;
} func_802462CC_StructM;
typedef struct func_802462CC_StructI {
    u8 pad0[0x78];
    s16 unk78;
} func_802462CC_StructI;
typedef struct func_802462CC_Struct {
    u8 pad0[0x24];
    func_802462CC_StructM *unk24;
    u8 pad28[0x34];
    func_802462CC_StructI *unk5C;
} func_802462CC_Struct;

void func_802462CC(func_802462CC_Struct *arg0, s32 arg1) {
    u8 pad[16];
    func_802462CC_StructI *sp2C;
    s32 v;

    sp2C = arg0->unk5C;
    if (func_80244AB0() == 0) {
        D_8025C708 = 0;
        v = func_8001EF38(D_801BBCD0->unk2C->unk4 - arg0->unk24->unk2C->unk4,
                          D_801BBCD0->unk2C->unkC - *(f32 *)&arg0->unk24->unk2C->unkC);
        v = (arg0->unk24->unk2C->unk12 - v) & 0x1FFF & 0xFFFF;
        if (v < 0x200 || (v >= 0x1E01 && v < 0x1FFF)) {
            sp2C->unk78 = 1;
            func_80127430(arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC, 0x66A, D_8025C5A8, 1.0f);
            func_800058DC(arg0, func_80246410);
        }
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 0xA) == 0) {
            func_80010550(arg1, sp2C);
            func_8012A94C(arg0, 0x40);
        }
    }
}




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
void func_80246AA8(func_80246AA8_Struct *arg0, s32 arg1);


typedef struct func_80246964_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80246964_StructNode;
typedef struct func_80246964_StructMid {
    u8 pad0[0x2C];
    func_80246964_StructNode *unk2C;
} func_80246964_StructMid;
typedef struct func_80246964_Struct {
    u8 pad0[0x24];
    func_80246964_StructMid *unk24;
    u8 pad28[0x34];
    u8 *unk5C;
} func_80246964_Struct;

void func_80246964(func_80246964_Struct *arg0, s32 arg1) {
    u8 pad[16];
    u8 *sp2C;

    sp2C = arg0->unk5C;
    D_8025C708 = 0;
    if (func_80244AB0() == 0) {
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 10) == 0) {
            u32 v;
            func_80010550(arg1, sp2C);
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(((func_80246964_StructMid *)D_801BBCD0)->unk2C->unk4 - arg0->unk24->unk2C->unk4, ((func_80246964_StructMid *)D_801BBCD0)->unk2C->unkC - arg0->unk24->unk2C->unkC)) & 0x1FFF;
            v &= 0xFFFF;
            if ((s32)v < 0x200 || ((s32)v >= 0x1E01 && (s32)v < 0x1FFF)) {
                *(s16 *)(sp2C + 0x78) = 1;
                func_80127430(arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, *(s32 *)((u8 *)arg0->unk24->unk2C + 0xC), 0x66A, D_8025C5B0, 1.0f);
                func_800058DC(arg0, func_80246AA8);
            }
            func_8012A94C(arg0, 0x40);
        }
    }
}





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

extern func_80246E60_StructGlobal D_80258F48;

typedef struct func_80246B68_StructInner {
    u8 pad[0x78];
    s16 unk78;
} func_80246B68_StructInner;

typedef struct func_80246B68_Struct {
    u8 pad[0x5C];
    func_80246B68_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80246B68_Struct;


void func_80246B68(func_80246B68_Struct *arg0, s32 arg1) {
    func_80246B68_StructInner *sp2C;
    s16 temp_v1;

    sp2C = arg0->unk5C;
    if ((func_80244AB0() == 0) &&
        (func_8012CE9C(arg1, sp2C, D_80258F48, 10) == 0)) {
        func_80010550(arg1, sp2C);
        if (arg0->unk94-- == 0) {
            func_800058DC(arg0, func_80247FEC);
            return;
        }
        func_8012A94C(arg0, 0x80);
        if (func_8012A564(arg0, 0x42D80000) != 0) {
            sp2C->unk78 = 1;
            arg0->unk94 = func_8012C6B4(0x80) + 0x80;
            func_800058DC(arg0, func_80246488);
        }
    }
}

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
void func_80246DA0(func_80246DA0_Struct *arg0, s32 arg1);


typedef struct func_80246C5C_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80246C5C_StructNode;
typedef struct func_80246C5C_StructMid {
    u8 pad0[0x2C];
    func_80246C5C_StructNode *unk2C;
} func_80246C5C_StructMid;
typedef struct func_80246C5C_Struct {
    u8 pad0[0x24];
    func_80246C5C_StructMid *unk24;
    u8 pad28[0x34];
    u8 *unk5C;
} func_80246C5C_Struct;

void func_80246C5C(func_80246C5C_Struct *arg0, s32 arg1) {
    u8 pad[16];
    u8 *sp2C;

    sp2C = arg0->unk5C;
    D_8025C708 = 0;
    if (func_80244AB0() == 0) {
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 10) == 0) {
            u32 v;
            func_80010550(arg1, sp2C);
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(((func_80246C5C_StructMid *)D_801BBCD0)->unk2C->unk4 - arg0->unk24->unk2C->unk4, ((func_80246C5C_StructMid *)D_801BBCD0)->unk2C->unkC - arg0->unk24->unk2C->unkC)) & 0x1FFF;
            v &= 0xFFFF;
            if ((s32)v < 0x200 || ((s32)v >= 0x1E01 && (s32)v < 0x1FFF)) {
                *(s16 *)(sp2C + 0x78) = 1;
                func_80127430(arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, *(s32 *)((u8 *)arg0->unk24->unk2C + 0xC), 0x66A, D_8025C5B4, 1.0f);
                func_800058DC(arg0, func_80246DA0);
            }
            func_8012A94C(arg0, 0x40);
        }
    }
}





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
void func_80247420(func_80247420_Struct *arg0, s32 arg1);
typedef struct func_802472C8_StructB {
    u8 pad0[0x30];
    f32 f[6];
} func_802472C8_StructB;
typedef struct func_802472C8_StructA {
    u8 pad0[0x2C];
    func_802472C8_StructB *unk2C;
} func_802472C8_StructA;
typedef struct func_802472C8_StructO {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    void *unk5C;
} func_802472C8_StructO;
typedef struct func_802472C8_StructT {
    u8 pad0[0x78];
    s16 unk78;
} func_802472C8_StructT;
extern func_802472C8_StructA *D_801BBCD8;
extern func_80246E60_StructGlobal D_80258F6C;

void func_802472C8(func_802472C8_StructO *arg0, s32 arg1) {
    func_802472C8_StructT *sp5C;
    func_802472C8_StructB *v;

    sp5C = arg0->unk5C;
    if (func_80244AB0() == 0) {
        D_8025C708 = 0;
        func_8011AAF4(D_8025C22C, 0x47F, arg0, 0, 1, 4.0f, D_801BBCD8->unk2C->f[0], D_801BBCD8->unk2C->f[1], D_801BBCD8->unk2C->f[2], 4294967296.0f, D_801BBCD8->unk2C->f[3], D_801BBCD8->unk2C->f[4], D_801BBCD8->unk2C->f[5], 0.0f, 35.0f, -1, -1);
        D_8025C704 = 0;
        if ((func_8012CE9C(arg1, sp5C, D_80258F6C, 0xA) == 0) && (func_80010550(arg1, sp5C) != 0)) {
            sp5C->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80247420);
        }
    }
}





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


typedef struct func_802474E4_Struct {
    u8 pad0[0x24];
    func_802474E4_StructMid *unk24;
    u8 pad28[0x34];
    func_80246E60_StructInner *unk5C;
} func_802474E4_Struct;


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


extern func_80246E60_StructGlobal D_80258F78;

typedef struct func_802475F0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    void *unk54;
    void *unk58;
    void *unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_802475F0_Struct;

void func_802475F0(func_802475F0_Struct *arg0, void *arg1) {
    void *sp64;
    f32 sp58[3];

    sp64 = arg0->unk5C;
    if (func_80244F28((s32)arg0) == 0) {
        func_8013A334(sp58, (s32)arg1, (s32)sp64, 6);
        func_8011AAF4(D_8025C290, 0x4C0, arg0, 0, 1, 4.0f, 80.0f, 213.0f, D_8025C5C0, 4294967296.0f, sp58[0], sp58[1], sp58[2], 0.0f, 35.0f, -1, -1);
        D_8025C704 = 0;
        D_801BBF7C[0x10] = 0;
        if (func_8012CE9C((s32)arg1, sp64, D_80258F78, 0xA) == 0) {
            D_8025C708 = 0;
            arg0->unk90 = 0x33;
            arg0->unk54 = 0;
            arg0->unk2C = arg0->unk2C & ~0x340;
            func_800058DC(arg0, func_80247754);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247754.s")

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
void func_80247A1C(func_80247A1C_StructArg0 *arg0, s32 arg1);
typedef struct func_8024C58C_StructGlobal {
    u8 pad0[0x104];
    u16 unk104;
    u8 pad106[0xBA2 - 0x106];
    u8 unkBA2;
} func_8024C58C_StructGlobal;
extern func_8024C58C_StructGlobal D_801BBBF0;

typedef struct func_8024786C_StructN {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_8024786C_StructN;
typedef struct func_8024786C_StructM {
    u8 pad0[0x2C];
    func_8024786C_StructN *unk2C;
} func_8024786C_StructM;
typedef struct func_8024786C_Struct {
    u8 pad0[0x24];
    func_8024786C_StructM *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[0x24];
    s32 unk54;
    u8 pad58[4];
    s32 unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_8024786C_Struct;
typedef struct func_8024786C_StructG {
    u8 padx[0xE0];
    func_8024786C_StructM *unkE0;
} func_8024786C_StructG;

#define G ((func_8024786C_StructG *)&D_801BBBF0)

void func_8024786C(func_8024786C_Struct *arg0, s32 arg1) {
    s32 sp6C;
    f32 sp60[3];
    s16 v;

    sp6C = arg0->unk5C;
    if (func_80244F28((s32)arg0) == 0) {
        if (arg0->unk90 == 0x3F) {
            arg0->unk24->unk2C->unk4 = 0.0f;
            arg0->unk24->unk2C->unk8 = 200.0f;
            arg0->unk24->unk2C->unkC = 360.0f;
            arg0->unk24->unk2C->unk12 = 0;
            G->unkE0->unk2C->unk4 = 0.0f;
            G->unkE0->unk2C->unk8 = 200.0f;
            G->unkE0->unk2C->unkC = 300.0f;
            arg0->unk54 = 0;
            arg0->unk2C = arg0->unk2C & ~0x60;
        }
        func_8013A334(sp60, arg1, sp6C, 6);
        func_8011AAF4(D_8025C300, 0x4F5, arg0, 0, 1, 4.0f, -112.0f, 217.0f, D_8025C5C8, 4294967296.0f, sp60[0], sp60[1], sp60[2], 0.0f, 35.0f, -1, -1);
        func_80010550(arg1, sp6C);
        v = arg0->unk90;
        arg0->unk90 = v - 1;
        if (v == 0) {
            func_800058DC(arg0, (void *)func_80247A1C);
        }
    }
}





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


typedef struct func_80248280_StructB {
    u8 pad0[0x78];
    s16 unk78;
} func_80248280_StructB;
typedef struct func_80248280_StructV {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
} func_80248280_StructV;
typedef struct func_80248280_StructG {
    u8 pad0[0x2C];
    func_80248280_StructV *unk2C;
} func_80248280_StructG;
typedef struct func_80248280_StructP {
    u8 pad0[0x24];
    struct func_80248280_StructP2 *unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad30[0x2C];
    func_80248280_StructB *unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_80248280_StructP;
typedef struct func_80248280_StructQ {
    u8 pad0[0x2C];
    struct { u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; } *unk2C;
} func_80248280_StructQ;
extern func_80246E60_StructGlobal D_80258F30;

void func_80248280(func_80248280_StructP *arg0, s32 arg1) {
    func_80248280_StructB *sp5C;
    func_80248280_StructV *v;
    f32 a, b;
    s16 t;

    sp5C = arg0->unk5C;
    arg0->unk2C |= 0x80;
    v = D_801BBCD8->unk2C;
    if (v->unk30 < D_8025C71C) {
        a = -(v->unk30 - D_8025C71C);
    } else {
        a = v->unk30 - D_8025C71C;
    }
    if (v->unk38 < D_8025C724) {
        b = -(v->unk38 - D_8025C724);
    } else {
        b = v->unk38 - D_8025C724;
    }
    if (b + a > 50.0f) {
        func_8011AAF4(&D_8025C468, 0x5AE, arg0, 0, 1, 4.0f, v->unk30, v->unk34, v->unk38, 4294967296.0f, D_8025C71C, D_8025C720, D_8025C724, 0.0f, 35.0f, -1, -1);
    }
    if (func_80244AB0(arg0) == 0 && func_8012CE9C(arg1, sp5C, D_80258F30, 0xA) == 0) {
        func_80010550(arg1, sp5C);
        t = arg0->unk90;
        arg0->unk90 = t - 1;
        if (t == 0) {
            sp5C->unk78 = 1;
            arg0->unk2C &= ~0x80;
            arg0->unk90 = 0x28;
            func_80127430(((func_80248280_StructQ *)arg0->unk24)->unk2C->unk4, ((func_80248280_StructQ *)arg0->unk24)->unk2C->unk8, ((func_80248280_StructQ *)arg0->unk24)->unk2C->unkC, 0x6C9, D_8025C5D8, 1.0f);
            func_800058DC(arg0, func_80248484);
        }
    }
}

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


typedef struct func_80248860_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80248860_StructInner;

typedef struct func_80248860_Struct {
    u8 pad0[0x5C];
    func_80248860_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80248860_Struct;


void func_80248860(func_80248860_Struct *arg0, s32 arg1)
{
  s16 temp_v0;
  void (*new_var)();
  unsigned int new_var2;
  func_80248860_StructInner *temp_a1;
  temp_a1 = arg0->unk5C;
  new_var2 = arg0->unk94;
  new_var = &func_802454C4;
  temp_v0 = ((0, arg0))->unk94;
  arg0->unk94 = arg0->unk94 - 1;
  if (new_var2 == 0)
  {
    temp_a1->unk78 = 1;
    if (D_8025C7E8 != 0)
    {
      func_800058DC(arg0, new_var);
      return;
    }
    D_8025C708 = 1;
    func_800058DC(arg0, &func_8024564C);
  }
}

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

typedef struct func_80249A58_StructTbl {
    u8 unk0;
    u8 pad1[0x13];
} func_80249A58_StructTbl;
extern func_80249A58_StructTbl D_8025C728[];

typedef struct func_8024951C_S30 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x8];
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
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_8024951C_S30;
typedef struct func_8024951C_Obj {
    u8 pad0[0x30];
    func_8024951C_S30 *unk30;
} func_8024951C_Obj;
typedef struct func_8024951C_StructA {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0x60];
    s16 unk90;
    s16 unk92;
    s16 unk94;
} func_8024951C_StructA;

void func_8024951C(func_8024951C_StructA *arg0, func_8024951C_Obj **arg1) {
    f32 k;
    s32 t;
    s32 sp34;
    f32 sp28[3];

    t = arg0->unk92;
    arg0->unk92 = t - 1;
    if (t == 0) {
        arg0->unk2C |= 0x20;
        if (D_8025C6F0 != NULL) {
            sp34 = *(s32 *)(D_8025C6F0 + 0x5C);
            func_80006214(D_8025C6F0);
            func_8013A334(sp28, (s32)arg1, sp34, 6);
            func_80006214(arg0);
        }
        func_8012C89C(arg0, 0, 3, 4);
        func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x3D0, 6);
        (*arg1)->unk30->unk24 = 0x60300;
        (*arg1)->unk30->unk30 = (s32)D_80258FE0 | 0x40000000;
        func_800062F8(*arg1, 0x80000600);
        k = D_8025C5E4;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = k;
        (*arg1)->unk30->unk20 = k;
        (*arg1)->unk30->unk48 = 0xFF;
        (*arg1)->unk30->unk49 = 0xFF;
        (*arg1)->unk30->unk4A = 0xFF;
        (*arg1)->unk30->unk4B = 0xFF;
        (*arg1)->unk30->unk4C = 0xFF;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0;
        (*arg1)->unk30->unk4 = sp28[0];
        (*arg1)->unk30->unk8 = sp28[1];
        (*arg1)->unk30->unkC = sp28[2];
        D_8025C728[arg0->unk90].unk0 = 1;
        arg0->unk92 = 2;
        arg0->unk94 = 0;
        func_80248D34((void *)arg0);
        func_800058DC(arg0, func_80249704);
    }
}

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

