#include "common.h"

extern void func_80030610(void *, void *, s32);
extern void func_8002FB60(s32, void *, s32);
extern void func_80027F20(void *, u8 *, void *);
extern void func_800023A8(s32 arg0);
extern u8 D_8005CE20[];
extern u8 D_8005CE38[];
extern u8 D_8005CE40[];
extern u8 D_800892B0[];

void func_800020B0(void) {
    u8 sp40[0x18];
    s32 sp3C;
    s32 i;
    u8 sp37;
    u8 *p;

    func_80030610(sp40, &sp3C, 1);
    func_8002FB60(5, sp40, 1);
    func_80027F20(sp40, &sp37, D_8005CE40);
    func_80030610(D_8005CE20, D_8005CE38, 1);
    func_8002FB60(5, D_8005CE20, 0);
    p = D_800892B0;
    for (i = 0; i != 4; i++) {
        func_800023A8(i & 0xFF);
        if ((sp37 & (1 << i)) && !(D_8005CE40[i * 4 + 3] & 8)) {
            *(s16 *)(p + 0x1C4) = 1;
        } else {
            *(s16 *)(p + 0x1C4) = 0;
        }
        p += 0x20;
    }
}


typedef struct func_800021B4_Out {
    u8 pad0[2];
    u16 u2;
    u16 u4;
    s16 u6;
    s16 u8;
    u16 uA;
    u16 uC;
    u8 padE[2];
    s32 u10;
    u8 pad14[0xC];
} func_800021B4_Out;

typedef struct func_800021B4_In {
    u16 u0;
    s8 u2;
    s8 u3;
    u8 pad4[2];
} func_800021B4_In;

extern void func_8000242C();
extern void func_800266B0(void *, s32, s32);
extern void func_800283B0(void *);
extern void func_80028434(void *);
extern u8 func_80151BC4(void);
extern s32 func_80151BFC();
extern void func_80151DA4(func_800021B4_Out *);
extern void func_801521C8();
extern func_800021B4_In D_8005CE50[];
extern u8 D_8005CE68[];
extern func_800021B4_Out D_80089474[];
extern u8 D_801BBBF0[];

void func_800021B4(void) {
    func_800021B4_Out *o;
    func_800021B4_In *i;
    u16 t;
    u16 t2;
    u16 v;
    s32 s;
    s32 n;

    func_800283B0(D_8005CE20);
    func_800266B0(D_8005CE20, 0, 1);
    func_80028434(D_8005CE20 + 0x30);
    o = D_80089474;
    for (n = 0; n < 4; n++, o++) {
        i = &D_8005CE50[n];
        v = i->u0;
        o->u4 = (o->u2 ^ v) & v;
        o->u2 = v;
        o->u6 = i->u2;
        o->u8 = i->u3;
        if (i == D_8005CE50 && func_80151BC4() == 2) if (*(u16 *)(D_801BBBF0 + 0x2C) == 5) {
            if (func_80151BFC() == 0) {
                func_80151DA4(o);
                s = o->u4;
                if (s & 0x4000) {
                }
            } else {
                func_801521C8();
            }
        }
        s = o->u6;
        v = 0;
        if (s < -0x28) v = 0x200;
        if (s >= 0x29) v |= 0x100;
        s = o->u8;
        if (s >= 0x29) v |= 0x800;
        if (s < -0x28) v |= 0x400;
        o->uC = (o->uA ^ v) & v;
        o->uA = v;
        if (o->u10 != 0) func_8000242C((void *)o);
    }
}

extern u8 D_800692B0[];

typedef struct func_80002364_Struct {
    u8 pad[0x1D2];
    s16 unk1D2;
    s32 unk1D4;
    s32 unk1D8;
    s16 unk1DC;
    s16 unk1DE;
    u8 unk1E0;
} func_80002364_Struct;

void func_80002364(s32 arg0, u16 arg1, u16 arg2, u8 arg3) {
    func_80002364_Struct *temp_v0;

    temp_v0 = (func_80002364_Struct *)(D_800692B0 + ((arg3 << 5) + 0x20000));
    temp_v0->unk1D8 = 0;
    temp_v0->unk1D4 = arg0;
    temp_v0->unk1DC = arg1;
    temp_v0->unk1DE = arg2;
    temp_v0->unk1D2 = 0;
    temp_v0->unk1E0 = 0;
}



void func_800023A8(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_p;

    temp_p = &arg0;
    arg0 &= 0xFF;
    temp_v0 = (arg0 << 5) + 0x20000 + D_800692B0;
    *(s32 *)(temp_v0 + 0x1D8) = 0;
    *(s32 *)(temp_v0 + 0x1D4) = 0;
    *(s16 *)(temp_v0 + 0x1DC) = 0xA;
    *(s16 *)(temp_v0 + 0x1DE) = 2;
    *(s16 *)(temp_v0 + 0x1D2) = 0;
    *(u8 *)(temp_v0 + 0x1E0) = 0;
}



void func_800023EC(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_800023A8(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 4);
}


typedef struct func_8000242C_Struct {
    u8 pad0[2];
    u16 unk2;
    u16 unk4;
    u8 pad6[4];
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u32 unk10;
    u32 unk14;
    u16 unk18;
    u16 unk1A;
    u8 unk1C;
} func_8000242C_Struct;

void func_8000242C(func_8000242C_Struct *arg0) {
    u16 var_v0;
    u32 temp_v1;

    if (arg0->unk1C == 1) {
        var_v0 = arg0->unk1A;
    } else {
        var_v0 = arg0->unk18;
    }
    temp_v1 = ((arg0->unkA << 0x10) | arg0->unk2) & arg0->unk10;
    if (arg0->unk14 & temp_v1) {
        arg0->unkE = (u16) (arg0->unkE + 1);
    } else {
        arg0->unk1C = 0U;
        arg0->unkE = 0U;
    }
    if ((s32) var_v0 < (s32) arg0->unkE) {
        arg0->unk1C = 1U;
        arg0->unk4 |= (u16) (temp_v1 & 0xFFFF);
        arg0->unkC |= (temp_v1 >> 0x10) & 0xFFFF;
        arg0->unkE = 0U;
    }
    arg0->unk14 = temp_v1;
}

