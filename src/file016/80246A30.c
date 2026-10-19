#include "common.h"


extern void func_80005670(s32 arg0, u8 *arg1);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8001F74C(s32 arg0);
extern u8 D_80249B94[];
extern f32 D_8024F128;
extern f32 D_8024F500;
extern void func_80246A84(s32 arg0, s32 arg1);

void func_80246A30(s32 arg0, s32 arg1) {
    D_8024F500 = D_8024F128;
    func_80005670(arg0, D_80249B94);
    func_8001F74C(arg0);
    func_800058DC(arg0, func_80246A84);
}


extern void func_80020718(s32);
s32 func_80126944(void);
extern f32 D_8024F12C;
extern void func_80246ADC(s32 arg0, s32 arg1);

void func_80246A84(s32 arg0, s32 arg1) {
    D_8024F500 = D_8024F12C;
    if (func_80126944() == 1) {
        func_80020718(0x65B);
        func_800058DC(arg0, func_80246ADC);
    }
}


extern f32 D_8024F130;

void func_80246ADC(s32 arg0, s32 arg1) {
    D_8024F500 = D_8024F130;
    if (func_80126944() != 1) {
        func_80020718(0x173);
        func_800058DC(arg0, func_80246A84);
    }
}


struct func_80246B34_StructInit {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80246B34_StructData {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80246B34_StructObj {
    u8 pad[0x30];
    struct func_80246B34_StructData *unk30;
};
extern struct func_80246B34_StructInit D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_80133A24(s32 arg0);
extern void func_80246C90(s32 arg0, s32 arg1);

void func_80246B34(s32 arg0, struct func_80246B34_StructObj **arg1) {
    struct func_80246B34_StructInit sp20 = D_80164F40;

    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    if (func_80133A24(0xBF) != 0) {
        func_8012C89C((void *)arg0, 0, 0x3A0, 0xA);
    } else {
        func_8012C89C((void *)arg0, 0, 0x3A0, 9);
    }
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk4 = 0.0f;
    (*arg1)->unk30->unk8 = 0.0f;
    (*arg1)->unk30->unkC = 0.0f;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    func_800058DC(arg0, func_80246C90);
}


extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FBB30(void);
extern void func_80246CF8();

void func_80246C90(s32 arg0, s32 arg1) {
    if (func_801C3D20(18.0f, -18.0f, 10.0f) != 0) {
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        func_800058DC(arg0, func_80246CF8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80246A30/func_80246CF8.s")


extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, s16 *);
extern void func_80246E00();

struct func_80246D90_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x20 - 0x0E];
};

void func_80246D90(void *arg0, s32 arg1) {
    struct func_80246D90_Struct sp;

    if (func_801C3044() == 0) {
        sp.a = 0x1000;
        sp.b = 0x0168002D;
        sp.c = 3.0f;
        sp.d = 0xF;
        func_801C2F0C(5, &sp.a);
        ((s16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_80246E00);
    }
}


struct func_80246E00_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_80246ED4();
extern void func_80133980(s32 arg0);
extern void func_801339D0(s32 arg0);
extern s32 func_801FBB20();

void func_80246E00(struct func_80246E00_Struct *arg0, s32 arg1) {
    s32 flag;

    if (func_801C3044() == 0) {
        if (arg0->unk3C == 0) {
            func_80020718(0x14E);
            if (func_80133A24(0xBF) == 0) {
                func_80133980(0xBF);
                func_8012C89C(arg0, 0, 0x3A0, 0xA);
            } else {
                func_801339D0(0xBF);
                func_8012C89C(arg0, 0, 0x3A0, 9);
            }
        }
        flag = arg0->unk3C >= 0xF;
        arg0->unk3C = arg0->unk3C + 1;
        if (flag) {
            func_801FBB20();
            func_801C2F0C(1, 0);
            func_800058DC((s32)arg0, func_80246ED4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80246A30/func_80246ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80246A30/func_80246F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80246A30/func_802470A0.s")


struct func_80247294_StructD {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 padE[2];
    u32 unk10;
};
struct func_80247294_StructA {
    u8 pad[0x38];
    struct func_80247294_StructD *unk38;
};
struct func_80247294_StructB {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    u8 padE[2];
    f32 unk10;
};

s32 func_80247294(struct func_80247294_StructA *arg0, struct func_80247294_StructB *arg1) {
    arg1->unk0 = (f32)arg0->unk38->unk6 / 10.0;
    arg1->unk4 = (f32)arg0->unk38->unk8 / 10.0;
    arg1->unk8 = (f32)arg0->unk38->unkA / 10.0;
    arg1->unkC = arg0->unk38->unkC;
    if (func_80133A24(0xBF)) {
        arg1->unk10 = (f64)(arg0->unk38->unk10 >> 16) / 10.0;
    } else {
        arg1->unk10 = -(f32)((f64)(arg0->unk38->unk10 >> 16) / 10.0);
    }
    return 1;
}

