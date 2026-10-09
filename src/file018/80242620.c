#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242714.s")


struct func_80242868_Inner {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80242868_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x5C - 0x30];
    struct func_80242868_Inner *unk5C;
};

struct func_80242868_Elem {
    u8 a;
    u8 pad1[0x13];
    u8 b;
    u8 pad2[0x13];
    u8 c;
    u8 pad3[0x13];
    u8 d;
    u8 pad4[0x13];
};

extern s32 func_80126CC0(void *, void *);
extern void func_8001F74C(void *);
extern s32 func_8013B570(void *, s32, s32, s32, void *);
extern void func_802429C0(void);
extern void func_80243F08(void);
extern u8 D_801BBC0D;
extern s32 D_8025C6E0;
extern s32 D_8025C6E4;
extern void *D_8025C6EC;
extern s8 D_8025C6F8;
extern s8 D_8025C6F9;
extern s8 D_8025C6FA;
extern s8 D_8025C6FB;
extern s8 D_8025C6FC;
extern s8 D_8025C6FD;
extern s32 D_8025C700;
extern s8 D_8025C704;
extern s32 D_8025C708;
extern struct func_80242868_Elem D_8025C728[];

s32 func_80242868(struct func_80242868_Struct *arg0, s32 arg1) {
    s32 ret;
    struct func_80242868_Inner *p;
    s32 i;

    ret = func_80126CC0(arg0, func_80243F08);
    if (ret != 0) {
        func_8001F74C(arg0);
        if (D_801BBC0D == 0) {
            D_8025C6E0 = 0x28;
            D_8025C6E4 = 3;
        } else if (D_801BBC0D == 1) {
            D_8025C6E0 = 0x50;
            D_8025C6E4 = 6;
        } else {
            D_8025C6E0 = 0xA0;
            D_8025C6E4 = 0xC;
        }
        D_8025C6F8 = 0;
        D_8025C6F9 = 0;
        D_8025C6FA = 0;
        D_8025C6FB = 0;
        D_8025C6FC = 0;
        D_8025C6FD = 0;
        D_8025C700 = 0;
        D_8025C708 = 0;
        D_8025C704 = 0;
        for (i = 0; i < 2; i++) {
            D_8025C728[i].b = 0;
            D_8025C728[i].c = 0;
            D_8025C728[i].d = 0;
            D_8025C728[i].a = 0;
        }
        D_8025C6EC = arg0;
        arg0->unk2C |= 0x80;
        ret = func_8013B570(arg0, 0xF8, 2, 4, func_802429C0);
        p = arg0->unk5C;
        p->unk78 = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802429C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242BC4.s")

void func_800058DC(void *, void (*)());
s32 func_80133A24(s32);

struct func_80242C60_Cfg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern struct func_80242C60_Cfg D_80258D8C;
extern s32 D_80258DF8[];
extern void func_80242D98();
s32 func_8012CE9C(s32, void *, struct func_80242C60_Cfg, s32);
void func_80010550(s32, void *);

struct func_80242C60_Body {
    u8 pad0[0x12];
    u16 unk12;
    u8 pad1[0x24 - 0x14];
    s32 unk24;
    u8 pad2[0x30 - 0x28];
    s32 unk30;
    u8 pad3[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_80242C60_Node {
    u8 pad0[0x2C];
    struct func_80242C60_Body *unk2C;
};

struct func_80242C60_Sub {
    u8 pad0[0xC];
    u16 unkC;
};

struct func_80242C60_Arg0 {
    u8 pad0[0x24];
    struct func_80242C60_Node *unk24;
    u8 pad1[0x5C - 0x28];
    struct func_80242C60_Sub *unk5C;
};

void func_80242C60(struct func_80242C60_Arg0 *arg0, s32 arg1) {
    struct func_80242C60_Body *temp_a0;
    struct func_80242C60_Sub *temp_s0;
    struct func_80242C60_Node **var_v0;
    s32 var_a1;

    temp_s0 = arg0->unk5C;
    arg0->unk24->unk2C->unk12 = 0x1000;
    if (func_8012CE9C(arg1, temp_s0, D_80258D8C, 0x14) == 0) {
        func_80010550(arg1, temp_s0);
        if (func_80133A24(0x140) != 0) {
            var_a1 = 1;
            var_v0 = (struct func_80242C60_Node **) arg1 + 1;
            if (temp_s0->unkC >= 2) {
                do {
                    var_a1 += 1;
                    var_v0 += 1;
                    temp_a0 = var_v0[-1]->unk2C;
                    temp_a0->unk24 |= 0x100;
                    var_v0[-1]->unk2C->unk30 = (s32) D_80258DF8 | 0x40000000;
                    var_v0[-1]->unk2C->unk48 = 0xFF;
                    var_v0[-1]->unk2C->unk49 = 0xFF;
                    var_v0[-1]->unk2C->unk4A = 0xFF;
                    var_v0[-1]->unk2C->unk4B = 0xFF;
                } while (var_a1 < (s32) temp_s0->unkC);
            }
            func_800058DC(arg0, func_80242D98);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242D98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024312C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802431FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024339C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024368C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802437C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802438BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243B94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243F08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243F68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802442FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80244418.s")


struct func_80244458_Struct1 {
    u8 pad0[0x2C];
    s32 unk2C;
};
struct func_80244458_Struct0 {
    u8 pad0[0x24];
    struct func_80244458_Struct1 *unk24;
};

extern void func_8013E5C4(s32, s32, s32, s32, s32);

void func_80244458(void *arg0, s32 *arg1)
{
  s32 temp_v0;
  func_800058DC(arg0, func_80243F08);
  D_8025C6F8 = 1;
  D_8025C6FA = 0;
  D_8025C6EC = 0;
  ;
  func_8013E5C4(*arg1, 0, ((struct func_80244458_Struct0 *) arg0)->unk24->unk2C + 4, ((struct func_80244458_Struct0 *) arg0)->unk24->unk2C + 8, ((struct func_80244458_Struct0 *) arg0)->unk24->unk2C + 0xC);
  D_8025C704 = 1;
}

void func_802444D4(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802444DC.s")


struct func_802445BC_Struct1 {
    u8 pad0[0x30];
    f32 unk30_f;
};

struct func_802445BC_Struct0 {
    u8 pad0[0x24];
    struct func_802445BC_Inner *unk24;
};

struct func_802445BC_Inner {
    u8 pad0[0x30];
    struct func_802445BC_Leaf *unk30;
};

struct func_802445BC_Leaf {
    u8 pad0[0x4];
    f32 unk4;
};

extern f32 D_8025BF7C;

void func_802445BC(struct func_802445BC_Struct0 *arg0, s32 arg1) {
    if (func_80133A24(0x144) != 0) {
        arg0->unk24->unk30->unk4 = D_8025BF7C;
    }
}


struct func_80244600_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_80244600_Struct1 {
    u8 pad0[0x30];
    struct func_80244600_Struct2 *unk30;
};

struct func_80244600_Struct0 {
    u8 pad0[0x90];
    s16 unk90;
};

void func_80005F6C(void *, void *);
void func_80006214(void *);
void func_8012C89C(void *, s32, s32, s32);
void func_8012C2DC(s32);
extern u8 D_80164F40[];
extern f32 D_8025BF80;
extern void func_802446CC();

void func_80244600(struct func_80244600_Struct0 *arg0, struct func_80244600_Struct1 **arg1) {
    if (func_80133A24(0x146) == 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x3CB, 5);
        func_8012C2DC(0);
        (*arg1)->unk30->unk4 = D_8025BF80;
        (*arg1)->unk30->unk8 = 200.0f;
        (*arg1)->unk30->unkC = 240.0f;
        (*arg1)->unk30->unk12 = 0;
        arg0->unk90 = 0x30;
        func_800058DC(arg0, func_802446CC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802446CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80244714.s")


struct func_80244788_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80244788_Mid {
    u8 pad0[0x30];
    struct func_80244788_Inner *unk30;
};

struct func_80244788_Struct {
    u8 pad0[0x24];
    struct func_80244788_Mid *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
};

void func_80244788(struct func_80244788_Struct *arg0, s32 arg1) {
    struct func_80244788_Inner *temp_v0;
    extern s32 func_80133A24();

    if (func_80133A24(0x146, arg0) == 0) {
        if (arg0->unk90 != 0) {
            arg0->unk90 = arg0->unk90 - 1;
            temp_v0 = arg0->unk24->unk30;
            temp_v0->unk8 = temp_v0->unk8 - 2.0f;
        }
    }
}


extern void func_8012C228(s32, s32, s32);
extern void func_802448BC(void);
extern s32 D_8025C6F4;

void func_802447F0(s32 arg0, struct func_80244600_Struct1 **arg1) {
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    D_8025C6F4 = arg0;
    func_8012C89C((void *) arg0, 0, 0x3CB, 6);
    func_8012C2DC(0);
    (*arg1)->unk30->unk4 = 0.0f;
    (*arg1)->unk30->unk8 = 200.0f;
    (*arg1)->unk30->unkC = 404.0f;
    (*arg1)->unk30->unk12 = 0x1000;
    func_8012C228(arg0, 0x3CB, 0xA);
    func_800058DC((void *) arg0, func_802448BC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802448BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024490C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024495C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802449AC.s")


extern void func_80005700(void);

typedef struct func_802449FC_StructB {
    u8 pad0[0x8];
    f32 unk8;
    f32 unkC;
    s16 unk10;
} func_802449FC_StructB;

typedef struct func_802449FC_StructC {
    u8 pad0[0x30];
    func_802449FC_StructB *unk30;
} func_802449FC_StructC;

typedef struct func_802449FC_StructA {
    u8 pad0[0x24];
    func_802449FC_StructC *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
} func_802449FC_StructA;

void func_802449FC(func_802449FC_StructA *arg0, s32 arg1) {
    func_802449FC_StructB *temp_v0;

    arg0->unk90 = arg0->unk90 + 1;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unkC = temp_v0->unkC + 1.0f;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = temp_v0->unk10 - 0x80;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - (f32) ((s32) arg0->unk90 / 10);
    if (arg0->unk24->unk30->unk8 < -800.0f) {
        func_80005700();
    }
}

