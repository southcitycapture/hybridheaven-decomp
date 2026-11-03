#include "common.h"

extern f32 D_80043860[];
#define func_8001518C func_8001518C__decl
extern f32 func_8001518C();                                /* extern */
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80014B88(void *, s16, s16, s16);
#define func_80014E14 func_80014E14__decl
extern void func_80014E14(void *, void *, s32, s32, f32);
extern void func_80029D30(void *, s32);


f32 func_800146A0(f32 arg0) {
    f64 t2;
    f64 t0;
    f64 x;
    f64 a;
    f64 b;
    f64 i;
    f64 r;
    f64 k;

    r = 0.0;
    k = 2.0;
    x = (f64) arg0;
    if (x < 0.0) {
        a = -x;
    } else {
        a = x;
    }
    if (a <= 1.0) {
        b = x;
    } else {
        b = 1.0 / x;
    }
    for (i = 19.0; i >= 1.0; i -= 1.0) {
        t2 = 1.0 + r + (k * i);
        t0 = i * b * i;
        r = (t0 * b) / t2;
    }
    b = b / (1.0 + r);
    if (x > 1.0) {
        return (f32) (1.5707963705062866 - b);
    }
    if (x < -1.0) {
        return (f32) (-1.5707963705062866 - b);
    }
    return (f32) b;
}



f32 func_80014798(f32 arg0, f32 arg1) {
    s32 i;
    f32 a;
    f32 b;
    f32 r;

    if (arg1 < 0.0f) {
        a = -arg1;
    } else {
        a = arg1;
    }
    if (arg0 < 0.0f) {
        b = -arg0;
    } else {
        b = arg0;
    }
    if (b < a) {
        if (arg1 == 0.0f) {
            return 0.0f;
        }
        i = (s32)(((f64)b * 512.0) / (f64)a);
        if ((u32)i >= 0x201U) {
            i = 0x200;
        }
        r = D_80043860[i];
    } else if (a < b) {
        if (arg0 == 0.0f) {
            return 0.0f;
        }
        i = (s32)(((f64)a * 512.0) / (f64)b);
        if ((u32)i >= 0x201U) {
            i = 0x200;
        }
        r = (f32)(1.5707963267948966 - (f64)D_80043860[i]);
    } else if (a == b) {
        r = 0.7853982f;
    }
    if ((arg1 < 0.0f) && (arg0 >= 0.0f)) {
        r = (f32)(3.141592653589793 - (f64)r);
    } else if ((arg1 < 0.0f) && (arg0 < 0.0f)) {
        r = (f32)((f64)r + 3.141592653589793);
    } else if ((arg1 >= 0.0f) && (arg0 < 0.0f)) {
        r = (f32)(6.283185307179586 - (f64)r);
    }
    return r;
}




typedef struct {
    f32 f0, f4, f8, fC, f10, f14, f18, f1C, f20, f24, f28, f2C, f30, f34, f38, f3C;
} func_80014990_Struct;

void func_80014990(void *a0, f32 a1, f32 a2, f32 a3, s32 a4, s32 a5, s32 a6) {
    func_80014990_Struct *m = a0;
    f32 sp40;
    f32 sp3C;
    f32 t0;
    f32 sp34;
    f32 s0;
    f32 s1;
    f32 n1;
    f32 c;

    s1 = func_8001EAD0(*(s16 *)((u8 *)&a4 + 2));
    s0 = func_8001EB64(*(s16 *)((u8 *)&a4 + 2));
    sp40 = func_8001EAD0(*(s16 *)((u8 *)&a5 + 2));
    sp34 = func_8001EB64(*(s16 *)((u8 *)&a5 + 2));
    sp3C = func_8001EAD0(*(s16 *)((u8 *)&a6 + 2));
    c = func_8001EB64(*(s16 *)((u8 *)&a6 + 2));
    n1 = -s1;
    m->f0 = sp34 * c;
    m->f4 = s1 * sp40 * c + s0 * sp3C;
    m->f8 = -s0 * sp40 * c + s1 * sp3C;
    m->fC = 0.0f;
    m->f10 = -sp34 * sp3C;
    m->f14 = n1 * sp40 * sp3C + s0 * c;
    m->f18 = s0 * sp40 * sp3C + s1 * c;
    m->f1C = 0.0f;
    m->f20 = sp40;
    m->f24 = n1 * sp34;
    m->f28 = s0 * sp34;
    m->f2C = 0.0f;
    m->f30 = m->f20 * a3 + (m->f0 * a1 + m->f10 * a2);
    m->f34 = a2;
    m->f38 = m->f28 * a3 + (m->f8 * a1 + m->f18 * a2);
    m->f3C = 1.0f;
}


void func_80014990(void *a0, f32 a1, f32 a2, f32 a3, s32 a4, s32 a5, s32 a6);

void func_80014B2C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, s16 arg5, s16 arg6) {
    s32 sp28[16];

    func_80014990(sp28, arg1, arg2, arg3, arg4, arg5, arg6);
    func_80029D30(sp28, arg0);
}



void func_80014B88(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    f32 sx;
    f32 cx;
    f32 sy;
    f32 cy;
    f32 sz;
    f32 cz;
    f32 t1;
    f32 t2;
    f32 t3;
    f32 t4;
    f32 pad1, pad2, pad3, pad4;

    sx = func_8001EAD0(arg1);
    cx = func_8001EB64(arg1);
    sy = func_8001EAD0(arg2);
    cy = func_8001EB64(arg2);
    sz = func_8001EAD0(arg3);
    cz = func_8001EB64(arg3);
    ((f32 *)arg0)[0] = cy * cz;
    ((f32 *)arg0)[1] = cy * sz;
    t2 = sx * sz;
    t1 = sx * cz;
    ((f32 *)arg0)[2] = -sy;
    t3 = cx * sz;
    ((f32 *)arg0)[4] = t1 * sy - t3;
    t4 = cx * cz;
    ((f32 *)arg0)[5] = t2 * sy + t4;
    ((f32 *)arg0)[6] = sx * cy;
    ((f32 *)arg0)[8] = t4 * sy + t2;
    ((f32 *)arg0)[9] = t3 * sy - t1;
    ((f32 *)arg0)[10] = cx * cy;
    ((f32 *)arg0)[3] = 0.0f;
    ((f32 *)arg0)[7] = 0.0f;
    ((f32 *)arg0)[11] = 0.0f;
    ((f32 *)arg0)[12] = 0.0f;
    ((f32 *)arg0)[13] = 0.0f;
    ((f32 *)arg0)[14] = 0.0f;
    ((f32 *)arg0)[15] = 1.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014CCC.s")

#undef func_80014E14


void func_80014E14(f32 *src, f32 *dst, f32 x, f32 y, f32 z)
{
    s32 i;

    for (i = 0; i < 4; i++) {
        dst[i] = src[i] * x;
        dst[i + 4] = src[i + 4] * y;
        dst[i + 8] = src[i + 8] * z;
        dst[i + 12] = src[i + 12];
    }
}
#define func_80014E14 func_80014E14__decl



void func_80014F10(f32 arg0[][4], f32 arg1[][4], f32 arg2, f32 arg3, f32 arg4) {
    s32 i;

    for (i = 0; i < 4; i += 2) {
        arg1[i][0] = arg0[i][0] * arg2;
        arg1[i][1] = arg0[i][1] * arg3;
        arg1[i][2] = arg0[i][2] * arg4;
        arg1[i][3] = arg0[i][3];
        arg1[i + 1][0] = arg0[i + 1][0] * arg2;
        arg1[i + 1][1] = arg0[i + 1][1] * arg3;
        arg1[i + 1][2] = arg0[i + 1][2] * arg4;
        arg1[i + 1][3] = arg0[i + 1][3];
    }
}


struct func_8001500C_Struct {
    u8 pad[0x30];
    f32 f30;
    f32 f34;
    f32 f38;
};

void func_8001500C(struct func_8001500C_Struct *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    func_80014B88(arg0, arg1, arg2, arg3);
    func_80014E14(arg0, arg0, arg4, arg5, arg6);
    arg0->f30 = arg7;
    arg0->f34 = arg8;
    arg0->f38 = arg9;
}



struct func_80015088_Struct {
    u8 pad[0x30];
    f32 f30;
    f32 f34;
    f32 f38;
    u8 tail[4];
};

void func_80015088(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    struct func_80015088_Struct sp20;

    func_80014B88(&sp20, arg1, arg2, arg3);
    func_80014E14(&sp20, &sp20, arg4, arg5, arg6);
    sp20.f30 = arg7;
    sp20.f34 = arg8;
    sp20.f38 = arg9;
    func_80029D30(&sp20, arg0);
}


struct func_80015110_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    s32 unk18;
    s32 unk1C;
    f32 unk20;
};

struct func_80015110_Local {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    u8 pad3C[4];
};


void func_80015110(s32 arg0, struct func_80015110_Struct *arg1) {
    struct func_80015110_Local sp28;

    func_80014B88(&sp28, arg1->unk10, arg1->unk12, arg1->unk14);
    func_80014E14(&sp28, &sp28, arg1->unk18, arg1->unk1C, arg1->unk20);
    sp28.unk30 = arg1->unk4;
    sp28.unk34 = arg1->unk8;
    sp28.unk38 = arg1->unkC;
    func_80029D30(&sp28, arg0);
}

#undef func_8001518C


f32 func_8001518C(f32 arg0) {
    s16 n;

    if ((arg0 < 0.0) || (arg0 >= 360.0)) {
        n = arg0 / 360.0;
        if (arg0 < 0.0) {
            n--;
        }
        arg0 -= n * 360.0;
    }
    return arg0;
}
#define func_8001518C func_8001518C__decl



f32 func_80015214(f32 arg0) {
    if (((f64) arg0 < -180.0) || (180.0 <= (f64) arg0)) {
        if (((f64) arg0 < 0.0) || (360.0 <= (f64) arg0)) {
            arg0 = func_8001518C();
        }
        if (180.0 <= (f64) arg0) {
            arg0 = (f32) ((f64) arg0 - 360.0);
        }
    }
    return arg0;
}


f64 func_800152C8(f64 arg0, f64 *arg2) {
    f64 var_fa1;
    f64 var_fv1;
    s32 temp_ft1;

    if (arg0 < 0.0f) {
        var_fv1 = -arg0;
    } else {
        var_fv1 = arg0;
    }
    if (arg0 < 0.0) {
        temp_ft1 = (s32) var_fv1;
        var_fa1 = (f64) temp_ft1;
        *arg2 = (f64) -temp_ft1;
    } else {
        var_fa1 = (f64) (s32) var_fv1;
        *arg2 = var_fa1;
    }
    if (arg0 < 0.0) {
        return -(var_fv1 - var_fa1);
    }
    return var_fv1 - var_fa1;
}

