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

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80246A30/func_80246B34.s")


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
extern void func_8012C89C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80133980(s32 arg0);
extern void func_801339D0(s32 arg0);
extern s32 func_80133A24(s32 arg0);
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

#pragma GLOBAL_ASM("asm/nonmatchings/file016/80246A30/func_80247294.s")

