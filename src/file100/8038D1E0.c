#include "common.h"

#define func_8038D7D4 func_8038D7D4__func_8038D1E0

extern void func_801BF6C4(s32 a0);
extern s32 func_8038D7D4(s32 arg0, s32 arg1);
extern s32 D_8038E150;
extern s32 D_8038DBFC;
extern s32 D_8038DC00;

void func_8038D1E0(void) {
    D_8038E150 = 0;
    func_8038D7D4(D_8038DBFC, D_8038DC00);
    func_801BF6C4(8);
    D_8038E150 = 1;
}
#undef func_8038D7D4

#define func_8038D7E4 func_8038D7E4__func_8038D224

extern s32 func_801BF968(void);
extern void func_801BF850(void *a0, s32 a1, void *a2);
extern s32 func_8038D7E4(void);
extern u8 D_8038DBF0[];
extern u8 D_8038E190[];

void func_8038D224(void) {
    if (func_801BF968() != 0) {
        D_8038DBFC = 0;
        D_8038DC00 = 0;
        func_801BF850(D_8038DBF0, 8, D_8038E190);
        func_8038D7E4();
    }
}
#undef func_8038D7E4



s32 func_8038D278(void) {
    return D_8038E150;
}


s32 func_8038D284(void) {
    return 0x1;
}


extern void func_80020718(s32);

void func_8038D28C(s32 arg0) {
    s32 *p = &arg0;
    func_80020718(arg0 & 0xFFFF);
}


extern void func_80020BF8(s32);

void func_8038D2B0(s32 arg0) {
    s32 *p = &arg0;
    func_80020BF8(arg0 & 0xFFFF);
}


s32 func_80020DAC(s32);                             /* extern */

s32 func_8038D2D4(s32 arg0) {
    s32 var_v1;
    s32 *unused;

    unused = &arg0;
    if (func_80020DAC(arg0 & 0xFFFF) != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}


s32 func_80020D3C();

s32 func_8038D308(s32 arg0) {
    s32 var_v1;

    if (func_80020D3C(0) != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038D1E0/D_8038DD10.s")

#define D_801BBCD8 D_801BBCD8__func_8038D33C
#define func_8001EAD0 func_8001EAD0__func_8038D33C
#define func_8001EF38 func_8001EF38__func_8038D33C
#define func_800207D0 func_800207D0__func_8038D33C
#define func_8002FC20 func_8002FC20__func_8038D33C



struct func_8038D33C_StructB {
    u8 pad0[0x30];
    f32 x;
    f32 y;
    f32 z;
    f32 u3C;
    f32 u40;
    f32 u44;
};
struct func_8038D33C_StructA {
    u8 pad0[0x2C];
    struct func_8038D33C_StructB *p;
};
extern struct func_8038D33C_StructA *D_801BBCD8;
extern f32 func_8002FC20(f32);
extern s16 func_8001EF38(f32, f32);
extern f32 func_8001EAD0(s16, s32);
extern void func_800207D0(u16, s32, u8);

void func_8038D33C(f32 arg0, f32 arg1, f32 arg2, u16 arg3, f32 arg4, f32 arg5) {
    s32 pad1;
    u8 sp23;
    s32 pad0;
    s16 sp1A;
    struct func_8038D33C_StructB *p;
    s16 t;
    s32 a;
    f32 dx, dy, dz, v, x;

    arg4 = (arg4 < 0.0f) ? 0.0f : arg4;
    p = D_801BBCD8->p;
    dx = arg0 - p->x;
    dy = arg1 - p->y;
    dz = arg2 - p->z;
    v = func_8002FC20(dx * dx + dy * dy + dz * dz) * arg5;
    if (v < 21.0f) {
        sp23 = 0xC8;
    } else {
        x = (39800.0f / (v + 178.0f)) * arg4;
        if (255.0f < x) {
            x = 255.0f;
        }
        sp23 = (u32)x;
    }
    p = D_801BBCD8->p;
    sp1A = func_8001EF38(arg2 - p->z, arg0 - p->x);
    p = D_801BBCD8->p;
    t = sp1A - func_8001EF38(p->u44 - p->z, p->u3C - p->x);
    if (t & 0x1000) {
        a = (t & 0x1FFF) - 0x2000;
    } else {
        a = t & 0x1FFF;
    }
    func_800207D0(arg3, (u32)((f64)func_8001EAD0(a, a) * 63.0 + 64.0) & 0xFF, sp23);
}
#undef D_801BBCD8
#undef func_8001EAD0
#undef func_8001EF38
#undef func_800207D0
#undef func_8002FC20


struct func_8038D5F4_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
};

extern struct func_8038D5F4_Struct D_8038E158;

void func_8038D5F4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    D_8038E158.unk0 = arg0;
    D_8038E158.unk4 = arg1;
    D_8038E158.unk2C = 0;
    D_8038E158.unk30 = 0;
    D_8038E158.unk8 = arg2;
    D_8038E158.unkC = arg3;
    D_8038E158.unk10 = arg4;
    D_8038E158.unk14 = arg5;
    D_8038E158.unk18 = arg6;
    D_8038E158.unk1C = arg7;
    D_8038E158.unk20 = arg8;
    D_8038E158.unk24 = arg9;
    D_8038E158.unk28 = arg10;
}


extern void func_8038D33C(f32 a, f32 b, f32 c, u16 d, f32 e, f32 f);

s32 func_8038D660(void) {
    u8 pad[8];
    f32 sp24;
    f32 sp20;
    f32 t;
    f32 z;

    if ((u32)D_8038E158.unk18 >= (u32)D_8038E158.unk2C) {
        t = (f32)(u32)D_8038E158.unk2C / (f32)(u32)D_8038E158.unk18;
        sp20 = (D_8038E158.unkC - D_8038E158.unk0) * t + D_8038E158.unk0;
        sp24 = (D_8038E158.unk10 - D_8038E158.unk4) * t + D_8038E158.unk4;
        z = (D_8038E158.unk14 - D_8038E158.unk8) * t + D_8038E158.unk8;
        if (D_8038E158.unk30 == D_8038E158.unk20) {
            func_8038D33C(sp20, sp24, z, *(u16 *)((u8 *)&D_8038E158 + 0x1E), 1.20000005f, 1.0f);
        } else if (D_8038E158.unk30 == D_8038E158.unk24) {
            func_8038D33C(sp20, sp24, z, *(u16 *)((u8 *)&D_8038E158 + 0x1E), 1.20000005f, 1.0f);
        }
        D_8038E158.unk30++;
        if ((u32)D_8038E158.unk28 < (u32)D_8038E158.unk30) {
            D_8038E158.unk30 = 0;
        }
        D_8038E158.unk2C = (u32)D_8038E158.unk2C + 1;
        return 0;
    }
    return 1;
}


s32 func_8038D7D4(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_8038D7E4(void) {
    return 0x1;
}


void func_8038D7EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_8038D7F8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_8038D804(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

