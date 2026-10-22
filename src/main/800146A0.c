#include "common.h"

extern f32 D_80043860[];
extern f32 func_8001518C();                                /* extern */
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80014B88(void *, s16, s16, s16);
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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014990.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014F10.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001518C.s")



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

