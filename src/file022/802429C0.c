#include "common.h"


void *func_80005670(s32 arg0, u8 *arg1);
extern u8 D_802503B4[];

s32 func_802429C0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s8 arg4) {
    void *temp_v0;

    temp_v0 = func_80005670(arg0, D_802503B4);
    if (temp_v0 != NULL) {
        *(f32 *)((u8 *)temp_v0 + 0x90) = arg1;
        *(f32 *)((u8 *)temp_v0 + 0x94) = arg2;
        *(f32 *)((u8 *)temp_v0 + 0x98) = arg3;
        *(s8 *)((u8 *)temp_v0 + 0xA0) = arg4;
        return 1;
    }
    return 0;
}


extern f64 D_80252620;

f32 func_80242A20(f32 arg0) {
    f32 var_fv1;

    var_fv1 = (f32) ((f64) arg0 + D_80252620);
    if ((f64) var_fv1 < -10.0) {
        var_fv1 = -10.0f;
    }
    return var_fv1;
}


extern f32 func_8001EAD0(s16 arg0);

f32 func_80242A68(f32 arg0, u16 arg1, f32 arg2, u16 arg3) {
    f32 temp;

    temp = func_8001EAD0((s16)(arg1 * arg3));
    arg0 += arg2 * temp;
    return arg0;
}


s32 func_80242AB8(u16 arg0) {
    u16 t;
    s32 r;
    arg0 = arg0 % 60;
    t = arg0;
    if (t < 0x14) r = 1;
    else if (t < 0x19) r = 0;
    else if (t < 0x23) r = 1;
    else if (t < 0x32) r = 0;
    else if (t < 0x37) r = 1;
    else r = 0;
    return r;
}


s32 func_80242B3C(u16 arg0) {
    s32 result;

    arg0 %= 60;
    if (arg0 < 3) {
        result = 1;
    } else if (arg0 < 5) {
        result = 0;
    } else if (arg0 < 0xA) {
        result = 1;
    } else if (arg0 < 0x12) {
        result = 0;
    } else if (arg0 < 0x15) {
        result = 1;
    } else if (arg0 < 0x17) {
        result = 0;
    } else if (arg0 < 0x1A) {
        result = 1;
    } else if (arg0 < 0x24) {
        result = 0;
    } else if (arg0 < 0x28) {
        result = 1;
    } else if (arg0 < 0x2C) {
        result = 0;
    } else if (arg0 < 0x32) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}


extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern f64 D_80252628;
extern f64 D_80252630;
extern f64 D_80252638;
extern f64 D_80252640;
extern f32 D_80252648;
extern f32 D_8025264C;
extern f64 D_80252650;
extern f64 D_80252658;
extern f64 D_80252660;
extern f64 D_80252668;
extern f64 D_80252670;
extern f64 D_80252678;
extern f32 D_80252680;
extern f32 D_80252684;
extern f64 D_80252688;
extern f32 D_80252690;

void func_80242C38(arg0) u16 arg0; {
    u8 pad[8];
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    u16 temp_a0;
    s32 temp_s0;

    temp_a0 = arg0;
    if (temp_a0 >= 0x12D) {
        if (!(temp_a0 & 7)) {
            sp68 = func_8012C6B4(0x3E8);
            sp6C = func_8012C6B4(0x3E8);
            sp70 = func_8012C6B4(0x3E8);
            sp74 = func_8012C6B4(0x14);
            temp_s0 = func_8012C6B4(0x28);
            func_80129FB8((f32) (((f64) (sp68 - 0x1F4) / 10.0) + D_80252628), (f32) (((f64) (sp6C - 0x1F4) / 10.0) + D_80252630), (f32) ((f64) (sp70 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, sp74 + 0xEB, temp_s0 + 0xC8, 0, 0xFF, 0, 0, 0xDC, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252638), 0, 0);
            temp_s0 = func_8012C6B4(0x3E8);
            func_80129FB8((f32) (((f64) (temp_s0 - 0x1F4) / 10.0) + D_80252640), D_80252648, (f32) ((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 10.0), 0.0f, D_8025264C, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xFA, -2, 1.0f, 2, 0);
            sp68 = func_8012C6B4(0x3E8);
            sp6C = func_8012C6B4(0x3E8);
            sp70 = func_8012C6B4(0x3E8);
            sp74 = func_8012C6B4(0x14);
            temp_s0 = func_8012C6B4(0x28);
            func_80129FB8((f32) (((f64) (sp68 - 0x1F4) / 10.0) + D_80252650), (f32) (((f64) (sp6C - 0x1F4) / 10.0) + D_80252658), (f32) ((f64) (sp70 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, sp74 + 0xEB, temp_s0 + 0xC8, 0, 0xFF, 0, 0, 0xC8, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252660), 1, 0);
        }
    } else if ((temp_a0 >= 0x97) && (temp_a0 < 0xF0) && !(temp_a0 & 3)) {
        sp68 = func_8012C6B4(0x3E8);
        sp6C = func_8012C6B4(0x3E8);
        sp70 = func_8012C6B4(0x3E8);
        sp74 = func_8012C6B4(0x14);
        temp_s0 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp68 - 0x1F4) / 10.0) + D_80252668), (f32) (((f64) (sp6C - 0x1F4) / 10.0) + D_80252670), (f32) ((f64) (sp70 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, sp74 + 0xEB, temp_s0 + 0xC8, 0, 0xFF, 0, 0, 0xB4, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 0, 0);
        temp_s0 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (temp_s0 - 0x1F4) / 10.0) + D_80252678), D_80252680, (f32) ((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 10.0), 0.0f, D_80252684, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xFA, -2, 1.0f, 2, 0);
        sp74 = func_8012C6B4(0x3E8);
        temp_s0 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp74 - 0x1F4) / 10.0) + D_80252688), D_80252690, (f32) ((f64) (temp_s0 - 0x1F4) / 10.0), 0.0f, 1.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xFF, -1, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 0xA, 0);
    }
}


extern s32 func_8012C6B4();
extern f64 D_80252698;
extern f64 D_802526A0;

void func_802432FC(s32 arg0, u16 arg1) {
    u32 var_v0;

    if ((arg1 >= 0xDC) && (arg1 < 0xE9)) {
        if (func_8012C6B4(0x1F4) >= 0xC9) {
            func_802429C0(arg0, 181.0f, -760.0f, (f32) (0x30 - (((arg1 - 0xDC) & 0xFFFF) * 8)), -1);
        }
        if (func_8012C6B4(0x1F4) >= 0xC9) {
            var_v0 = (arg1 - 0xDC) & 0xFFFF;
            func_802429C0(arg0, (f32) (((f64) var_v0 * D_80252698) + D_802526A0), -760.0f, (f32) (((s32) var_v0 * 7) - 0x84), -1);
        }
    }
}

#define D_80164F40 D_80164F40__func_8024341C
#define D_8017AE98 D_8017AE98__func_8024341C
#define D_8017B608 D_8017B608__func_8024341C
#define D_801BBBF0 D_801BBBF0__func_8024341C
#define D_80250428 D_80250428__func_8024341C
#define D_802528A0 D_802528A0__func_8024341C
#define D_802528B0 D_802528B0__func_8024341C
#define D_802528C0 D_802528C0__func_8024341C
#define D_802528C1 D_802528C1__func_8024341C
#define D_802528C2 D_802528C2__func_8024341C
#define D_802528C3 D_802528C3__func_8024341C
#define D_802528C4 D_802528C4__func_8024341C
#define D_802528C5 D_802528C5__func_8024341C
#define D_802528C6 D_802528C6__func_8024341C
#define D_802528C7 D_802528C7__func_8024341C
#define D_802528C8 D_802528C8__func_8024341C
#define func_800058DC func_800058DC__func_8024341C
#define func_80005E44 func_80005E44__func_8024341C
#define func_80006214 func_80006214__func_8024341C
#define func_8000C3B0 func_8000C3B0__func_8024341C
#define func_8001F74C func_8001F74C__func_8024341C
#define func_8012C784 func_8012C784__func_8024341C
#define func_80243880 func_80243880__func_8024341C
#define func_80243880_Inner func_80243880_Inner__func_8024341C
#define func_80243880_Mid func_80243880_Mid__func_8024341C
#define func_80243880_Obj func_80243880_Obj__func_8024341C
#define func_80243880_Struct func_80243880_Struct__func_8024341C
typedef struct {
    u8 pad[0x22];
    u8 unk22;
} func_80243880_Obj;
typedef struct {
    u8 pad[0x24];
    func_80243880_Obj *unk24;
} func_80243880_Mid;
typedef struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0xDC - 4];
    func_80243880_Mid *unkDC;
    u8 padE0[0xF5 - 0xE0];
    u8 unkF5;
    u8 padF6[0xF20 - 0xF6];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
} func_80243880_Struct;
extern func_80243880_Struct D_801BBBF0;
extern u16 D_802528A0[];
extern f32 D_802528B0[];
extern u8 D_802528C0;
extern u8 D_802528C1;
extern u8 D_802528C2;
typedef struct {
    u8 pad[0x30];
    f32 *unk30;
} func_80243880_Inner;
void func_80243880(s32 arg0, func_80243880_Inner **arg1);


typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_8024341C_Copy;

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
} func_8024341C_Entry;

typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
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
    u8 unk4F;
} func_8024341C_Inner;

typedef struct {
    u8 pad[0x30];
    func_8024341C_Inner *unk30;
} func_8024341C_Obj;

typedef struct {
    u8 pad[0xF20];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 padF29[0xF32 - 0xF29];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_8024341C_Big;
extern void func_800058DC(s32, void *);
extern void func_80005E44(s32, void *);
extern s32 func_80006214(s32);
extern s32 func_8000C3B0(func_8024341C_Obj *);
extern void func_8001F74C();
extern void func_8012C784(s32, s32, u8);
extern func_8024341C_Copy D_80164F40;
extern u8 D_8017AE98[];
extern u8 D_8017B608[];
extern func_8024341C_Entry D_80250428[];
extern u8 D_802528C3;
extern u8 D_802528C4;
extern u8 D_802528C5;
extern s8 D_802528C6;
extern s8 D_802528C7;
extern s8 D_802528C8;

#define big ((func_8024341C_Big *) &D_801BBBF0)
#define e (&D_80250428[i])

void func_8024341C(s32 arg0, func_8024341C_Obj **arg1) {
    func_8024341C_Copy sp80[4];
    s32 addr;
    f32 f;
    func_8024341C_Copy *p;
    u8 i;

    func_8001F74C();
    for (i = 0; i < 4; i++) {
        p = &sp80[i];
        *p = D_80164F40;
        D_802528A0[i] = 0;
        D_802528B0[i] = 0.0f;
        switch (e->unk0) {
        case 3:
            p->unk4 = 0x80000400;
            addr = (s32) D_8017B608 | 0x40000000;
            func_80005E44(arg0, p);
            func_80006214(arg0);
            arg1[i]->unk30->unkC = 0.0f;
            arg1[i]->unk30->unk8 = f = arg1[i]->unk30->unkC;
            arg1[i]->unk30->unk4 = f;
            arg1[i]->unk30->unk12 = 0;
            arg1[i]->unk30->unk24 |= 0x100;
            arg1[i]->unk30->unk30 = addr;
            arg1[i]->unk30->unk4B = e->unk2;
            arg1[i]->unk30->unk48 = e->unk3;
            arg1[i]->unk30->unk49 = e->unk4;
            arg1[i]->unk30->unk4A = e->unk5;
            arg1[i]->unk30->unk24 |= 0x400;
            arg1[i]->unk30->unk4C = big->unkF32;
            arg1[i]->unk30->unk4D = big->unkF33;
            arg1[i]->unk30->unk4E = big->unkF34;
            arg1[i]->unk30->unk4F = big->unkF35;
            func_8012C784(arg0, i, e->unk1);
            continue;
        case 7:
            p->unk4 = 0x80000C00;
            addr = (s32) D_8017AE98;
            func_80005E44(arg0, p);
            func_80006214(arg0);
            arg1[i]->unk30->unkC = 0.0f;
            arg1[i]->unk30->unk8 = f = arg1[i]->unk30->unkC;
            arg1[i]->unk30->unk4 = f;
            arg1[i]->unk30->unk12 = 0;
            arg1[i]->unk30->unk30 = addr;
            if (e->unk2 == 1) {
                arg1[i]->unk30->unk24 = 0x13;
                arg1[i]->unk30->unk30 = func_8000C3B0(arg1[0]);
                arg1[i]->unk30->unk4C = big->unkF32;
                arg1[i]->unk30->unk4D = big->unkF33;
                arg1[i]->unk30->unk4E = big->unkF34;
                arg1[i]->unk30->unk4F = big->unkF35;
            }
            func_8012C784(arg0, i, e->unk1);
            if (e->unk3 == 0) {
                arg1[i]->unk30->unk20 = 1.0f;
                arg1[i]->unk30->unk1C = f = arg1[i]->unk30->unk20;
                arg1[i]->unk30->unk18 = f;
            } else {
                f = (f32) (u32) e->unk3 / 100.0;
                arg1[i]->unk30->unk20 = f;
                arg1[i]->unk30->unk1C = f;
                arg1[i]->unk30->unk18 = f;
            }
            break;
        }
    }
    D_802528C0 = big->unkF20;
    D_802528C1 = big->unkF21;
    D_802528C2 = big->unkF22;
    D_802528C3 = big->unkF23;
    D_802528C4 = big->unkF24;
    D_802528C5 = big->unkF25;
    D_802528C6 = big->unkF26;
    D_802528C7 = big->unkF27;
    D_802528C8 = big->unkF28;
    func_800058DC(arg0, func_80243880);
}
#undef big
#undef e
#undef D_80164F40
#undef D_8017AE98
#undef D_8017B608
#undef D_801BBBF0
#undef D_80250428
#undef D_802528A0
#undef D_802528B0
#undef D_802528C0
#undef D_802528C1
#undef D_802528C2
#undef D_802528C3
#undef D_802528C4
#undef D_802528C5
#undef D_802528C6
#undef D_802528C7
#undef D_802528C8
#undef func_800058DC
#undef func_80005E44
#undef func_80006214
#undef func_8000C3B0
#undef func_8001F74C
#undef func_8012C784
#undef func_80243880
#undef func_80243880_Inner
#undef func_80243880_Mid
#undef func_80243880_Obj
#undef func_80243880_Struct

#define D_801BBBF0 D_801BBBF0__func_80243880
#define D_801BCAE0 D_801BCAE0__func_80243880
#define D_80242C38 D_80242C38__func_80243880
#define D_802525DC D_802525DC__func_80243880
#define D_802526A8 D_802526A8__func_80243880
#define D_802526AC D_802526AC__func_80243880
#define D_802526B0 D_802526B0__func_80243880
#define D_802526B4 D_802526B4__func_80243880
#define D_802526B8 D_802526B8__func_80243880
#define D_802528A0 D_802528A0__func_80243880
#define D_802528B0 D_802528B0__func_80243880
#define D_802528C0 D_802528C0__func_80243880
#define D_802528C1 D_802528C1__func_80243880
#define D_802528C2 D_802528C2__func_80243880
#define func_80020718 func_80020718__func_80243880
#define func_8011AAF4 func_8011AAF4__func_80243880
#define func_8012FE50 func_8012FE50__func_80243880
#define func_80130264 func_80130264__func_80243880
#define func_80130290 func_80130290__func_80243880
#define func_801518D4 func_801518D4__func_80243880
#define func_801C3B10 func_801C3B10__func_80243880
#define func_801C3B2C func_801C3B2C__func_80243880
#define func_801FBB30 func_801FBB30__func_80243880
#define func_80242A20 func_80242A20__func_80243880
#define func_80242A68 func_80242A68__func_80243880
#define func_80242AB8 func_80242AB8__func_80243880
#define func_80242B3C func_80242B3C__func_80243880
#define func_802432FC func_802432FC__func_80243880
f32 func_80242A20(f32 arg0);
f32 func_80242A68(f32 arg0, u16 arg1, f32 arg2, u16 arg3);
s32 func_80242AB8(u16 arg0);
s32 func_80242B3C(u16 arg0);
void func_802432FC(s32 arg0, u16 arg1);


typedef struct {
    u8 pad[0x22];
    u8 unk22;
} func_80243880_Obj;
typedef struct {
    u8 pad[0x24];
    func_80243880_Obj *unk24;
} func_80243880_Mid;
typedef struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0xDC - 4];
    func_80243880_Mid *unkDC;
    u8 padE0[0xF5 - 0xE0];
    u8 unkF5;
    u8 padF6[0xF20 - 0xF6];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
} func_80243880_Struct;
typedef struct {
    u8 pad[0x30];
    f32 *unk30;
} func_80243880_Inner;

extern func_80243880_Struct D_801BBBF0;
extern s16 D_801BCAE0;
extern u16 D_802528A0[];
extern f32 D_802528B0[];
extern u8 D_802528C0;
extern u8 D_802528C1;
extern u8 D_802528C2;
extern void func_80020718();
extern void func_801FBB30();
extern void func_801C3B2C();
extern void func_801C3B10();
extern s32 func_801518D4();
extern s32 func_80130264();
extern s32 func_80130290();
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012FE50();
extern u8 D_802525DC[];
extern f32 D_802526A8;
extern f32 D_802526AC;
extern f32 D_802526B0;
extern f32 D_802526B4;
extern f32 D_802526B8;
extern void D_80242C38(u16);

void func_80243880(s32 arg0, func_80243880_Inner **arg1) {
    f32 fv1;
    f32 sp70;
    u8 i;
    u16 v;
    u16 speed;

    if (D_801BBBF0.unkDC != NULL) {
        if (D_801BBBF0.unkDC->unk24 != NULL && D_801BBBF0.unkF5 != 0) {
            D_801BBBF0.unkDC->unk24->unk22 = 0;
            func_801FBB30();
            D_801BCAE0 = 0x10;
            func_801C3B2C(0);
            func_801C3B10(0);
            if (D_802528A0[4] == 0x5A) {
                func_80020718(0x270);
            } else if (D_802528A0[4] == 0x12C) {
                D_802528A0[3] = 1;
            } else if (D_802528A0[4] == 0x140) {
                D_802528A0[0] = 1;
            } else if (D_802528A0[4] == 0x168) {
                D_802528A0[2] = 1;
                D_802528A0[1] = 1;
            }
            for (i = 0; i < 4; i++) {
                                if (D_802528A0[i] >= 0xA1) {
                    D_802528B0[i] = func_80242A20(D_802528B0[i]);
                    arg1[i]->unk30[2] += D_802528B0[i];
                    D_802528A0[i]++;
                } else if (D_802528A0[i] >= 0x15) {
                    arg1[i]->unk30[2] = func_80242A68(arg1[i]->unk30[2], D_802528A0[i] - 0x14, 1.0f, 0x800);
                    D_802528A0[i]++;
                } else if (D_802528A0[i] > 0) {
                    D_802528A0[i]++;
                } else {
                }
            }
            if ((D_802528A0[4] >= 0x96 && D_802528A0[4] < 0x12C) || D_802528A0[4] >= 0x12C) {
                if (func_80242AB8(D_802528A0[4]) != 0) {
                    D_801BBBF0.unkF20 += (0xFF - D_801BBBF0.unkF20) * 0.25;
                    D_801BBBF0.unkF21 += (0x64 - D_801BBBF0.unkF21) * 0.25;
                    D_801BBBF0.unkF22 += (0x64 - D_801BBBF0.unkF22) * 0.25;
                } else {
                    D_801BBBF0.unkF20 += (D_802528C0 - D_801BBBF0.unkF20) * 0.25;
                    D_801BBBF0.unkF21 += (D_802528C1 - D_801BBBF0.unkF21) * 0.25;
                    D_801BBBF0.unkF22 += (D_802528C2 - D_801BBBF0.unkF22) * 0.25;
                }
            }
            D_80242C38(D_802528A0[4]);
            func_802432FC(arg0, D_802528A0[4]);
            if (D_802528A0[4] == 0x5A) {
                func_801518D4(0, 0, 0x3C);
            }
            if (D_802528A0[4] == 0x96) {
                func_801518D4(0, 3, 0x5A);
            }
            if (D_802528A0[4] == 0xF0) {
                func_801518D4(0, 1, 0x3C);
            }
            if (D_802528A0[4] >= 0x12C) {
                if (func_80242B3C(D_802528A0[4]) != 0) {
                    func_801518D4(0, 7, 0xA);
                } else {
                    func_801518D4(0, 0, 0xA);
                }
            }
            if (func_80130264() != 0) {
                if (func_80130290() != 0) {
                    speed = 0x900;
                } else {
                    speed = 0x700;
                }
            } else {
                speed = 0x800;
            }
            if (D_802528A0[4] >= 0x12D) {
                sp70 = func_80242A68(-652.0f, D_802528A0[4], 3.0f, speed);
                fv1 = func_80242A68(D_802526A8, D_802528A0[4], 3.0f, speed);
            } else if (D_802528A0[4] >= 0x97) {
                sp70 = func_80242A68(-652.0f, D_802528A0[4], 2.0f, speed);
                fv1 = func_80242A68(D_802526AC, D_802528A0[4], 2.0f, speed);
            } else if (D_802528A0[4] >= 0x5B) {
                sp70 = func_80242A68(-652.0f, D_802528A0[4], 1.0f, speed);
                fv1 = func_80242A68(D_802526B0, D_802528A0[4], 1.0f, speed);
            } else {
                sp70 = -652.0f;
                fv1 = D_802526B4;
            }
            func_8011AAF4(D_802525DC, 0x1F1, arg0, 0, 1, 10.0f, D_802526B8, sp70, 114.0f, 10.0f, 195.0f, fv1, -100.0f, 0.0f, 35.0f, -1, -1);
            if (D_802528A0[4]++ == 0x258) {
                D_801BBBF0.unk2 = 2;
                func_8012FE50(0xF, 0x5B, 2, 2, 2);
            }
        }
    }
}
#undef D_801BBBF0
#undef D_801BCAE0
#undef D_80242C38
#undef D_802525DC
#undef D_802526A8
#undef D_802526AC
#undef D_802526B0
#undef D_802526B4
#undef D_802526B8
#undef D_802528A0
#undef D_802528B0
#undef D_802528C0
#undef D_802528C1
#undef D_802528C2
#undef func_80020718
#undef func_8011AAF4
#undef func_8012FE50
#undef func_80130264
#undef func_80130290
#undef func_801518D4
#undef func_801C3B10
#undef func_801C3B2C
#undef func_801FBB30
#undef func_80242A20
#undef func_80242A68
#undef func_80242AB8
#undef func_80242B3C
#undef func_802432FC

/* hh-block asm/nonmatchings/file022/802429C0/_mrg_keep_text_func_80244218.s {"functions":["func_80244218"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file022/802429C0/_mrg_keep_text_func_80244218.s")


extern s32 func_80005700();

struct func_80244444_Struct {
    u8 pad[0xA0];
    s8 unkA0;
};

struct func_80244444_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80244444_Outer {
    u8 pad[0x30];
    struct func_80244444_Inner *unk30;
};

void func_80244444(struct func_80244444_Struct *arg0, struct func_80244444_Outer **arg1) {
    s32 var_v0;
    s8 temp_v1;
    struct func_80244444_Inner *temp_a0;

    temp_v1 = arg0->unkA0;
    if (temp_v1 != 0) {
        temp_a0 = (*arg1)->unk30;
        var_v0 = temp_a0->unk4B;
        var_v0 += temp_v1;
        if (var_v0 < 0) {
            func_80005700(arg0, arg1);
            return;
        }
        if (var_v0 >= 0x100) {
            var_v0 = 0xFF;
        }
        temp_a0->unk4B = (u8) var_v0;
    }
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_802429C0[] = {
    0x25, 0x64, 0x20, 0xB8, 0xC4, 0xCC, 0xDC, 0xA4, 0xCE, 0xA5, 0xAA, 0xA5, 0xD6, 0xA5, 0xB8, 0xA5,
    0xA7, 0xBA, 0xEE, 0xC0, 0xAE, 0x0A, 0x00, 0x00, 0x74, 0x69, 0x6D, 0x65, 0x72, 0x20, 0x25, 0x64,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xCF, 0xA5, 0xA4, 0xA5, 0xEC, 0xA5, 0xBE, 0xA4, 0xC7, 0xA4, 0xB9,
    0xA1, 0xA3, 0x0A, 0x00, 0xA5, 0xB7, 0xA5, 0xCD, 0xA5, 0xB9, 0xA5, 0xB3, 0xA4, 0xCE, 0xA5, 0xCF,
    0xA5, 0xA4, 0xA5, 0xEC, 0xA5, 0xBE, 0xA4, 0xC7, 0xA4, 0xB9, 0xA1, 0xA3, 0x0A, 0x00, 0x00, 0x00,
    0xC9, 0xB8, 0xBD, 0xE0, 0xA4, 0xC7, 0xA4, 0xB9, 0xA1, 0xA3, 0x0A, 0x00, 0x2F, 0x68, 0x64, 0x69,
    0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31,
    0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73,
    0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x61, 0x31, 0x30, 0x5F, 0x73, 0x30, 0x31, 0x5F, 0x65, 0x78,
    0x70, 0x6C, 0x6F, 0x64, 0x65, 0x64, 0x65, 0x6D, 0x6F, 0x2E, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xBF, 0xD3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x40, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x86, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x40, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x36, 0x80, 0x00, 0x3F, 0x19, 0x99, 0x9A,
    0x40, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x86, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0xF3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x40, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x86, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC4, 0x36, 0x80, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x40, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC4, 0x3B, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x10, 0x51, 0xEB, 0x85, 0x1E, 0xB8, 0x52,
    0x40, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x38, 0xC0, 0x00, 0xC4, 0x38, 0xC0, 0x00,
    0xC4, 0x38, 0xC0, 0x00, 0xC4, 0x38, 0xC0, 0x00, 0x44, 0x0C, 0x40, 0x00, 0x3E, 0x99, 0x99, 0x9A,
    0x3E, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
