#include "common.h"

extern f32 D_80130670(u16);
extern f32 D_801753A0[];
extern f32 D_801753A4[];
extern f32 D_801763A0[];
extern f32 D_801763A4[];
extern f32 D_801773A0[];
extern f32 D_801773A4[];
extern f32 D_801783A0[];
extern f32 D_801783A4[];
extern f32 D_8018D698;
extern f32 func_80014798(f32, f32);
extern f32 func_8001EAD0(s16);                             /* extern */
extern f32 func_8001EB64(s16);                             /* extern */
extern f32 func_8002FC20(f32);
extern f32 func_801306D0(s32, f32 *);                      /* extern */
extern f32 func_80130874(s32, f32 *);
extern f64 D_8018D688;
extern f64 D_8018D690;
extern f64 D_8018D6C0;
extern s32 D_801309EC(f32, f32);
#define func_801303D8 func_801303D8__decl
extern s32 func_801303D8(void);
extern u16 D_80178BAC[];
extern u8 D_80176BA8[];
extern void func_80029280(f32);
extern void func_80032720(f32);
extern void func_80130F74(f32 *);
extern void func_80131074(f32 *, f32 *, f32 *);
extern void func_80131CC4(u16 *arg0, u16 *arg1, u16 *arg2);



s32 func_80130310(u32 arg0) {
    s32 var_v1;
    s32 var_v1_2;

    var_v1_2 = 0;
    if (arg0 < 0xD42U) {
loop_2:
        if (arg0 < D_80178BAC[var_v1_2]) {
            return (D_80176BA8[arg0] + (var_v1_2 << 8)) & 0xFFFF;
        }
        var_v1_2 = (var_v1_2 + 1) & 0xFF;
        if (var_v1_2 < 0x10) {
            goto loop_2;
        }
    }
    var_v1 = 0x1F;
loop_6:
    if (arg0 >= D_80178BAC[var_v1]) {
        return (D_80176BA8[arg0] + (var_v1 << 8) + 0x100) & 0xFFFF;
    }
    var_v1 = (var_v1 - 1) & 0xFF;
    if (var_v1 < 0x10) {
        return (D_80176BA8[arg0] + 0x1000) & 0xFFFF;
    }
    goto loop_6;
}

#undef func_801303D8
#define D_8018D680 D_8018D680__func_801303D8
#define func_8002FC20 func_8002FC20__func_801303D8
#define func_80130310 func_80130310__func_801303D8
s32 func_80130310(u32 arg0);


extern f64 D_8018D680;
f32 func_8002FC20(f32, f32);

u16 func_801303D8(f32 arg0, f32 arg1) {
    f32 len;
    f32 x;
    f32 y;
    f32 alen;
    u16 r;
    s32 a;
    u16 v;

    x = arg1 < 0.0f ? -arg1 : arg1, y = arg0 < 0.0f ? -arg0 : arg0;
    len = func_8002FC20(x * x + y * y, x);
    alen = len < 0.0f ? -len : len;
    if (!((f64) alen < D_8018D680)) {
        x /= len;
        y /= len;
    }
    if (y < x) {
        if (x == 0.0f) {
            return 0;
        }
        a = (s32) ((y * 8192.0f) / x);
        if ((u32) a >= 0x2001U) {
            a = 0x2000;
        }
        r = func_80130310(a);
    } else if (x < y) {
        if (y == 0.0f) {
            return 0;
        }
        a = (s32) ((x * 8192.0f) / y);
        if ((u32) a >= 0x2001U) {
            a = 0x2000;
        }
        r = 0x4000 - func_80130310(a);
    } else {
        v = 0x2000;
        if (x == y) {
            r = v;
        }
    }
    if (arg1 < 0.0f && arg0 >= 0.0f) {
        r = 0x8000 - r;
        goto done;
    }
    if (arg1 < 0.0f && arg0 < 0.0f) {
        r = r + 0x8000;
        goto done;
    }
    if (arg1 >= 0.0f && arg0 < 0.0f) {
        r = 0x10000 - r;
    }
done:
    return r;
}
#undef D_8018D680
#undef func_8002FC20
#undef func_80130310
#define func_801303D8 func_801303D8__decl



void func_80130610(u16 arg0) {
    func_80029280((f32) ((f64) ((f32) arg0 / 32768.0f) * D_8018D688));
}



void func_80130670(u16 arg0) {
    u32 temp_a0;

    temp_a0 = arg0;
    func_80032720((f32) ((f64) ((f32) temp_a0 / 32768.0f) * D_8018D690));
}



f32 func_801306D0(s32 arg0, f32 *arg1) {
    u16 a;
    *(*(f32 **)(&arg0 + 1)) = D_80130670((a = ((u16 *)&arg0)[1], *(f32 **)(&arg0 + 1) = arg1, a));
    func_80130610(((u16 *)&arg0)[1]);
}



f32 func_80130708(s32 arg0) {
    f32 temp_fv1;
    f32 sp18;

    if (&arg0 == NULL) {
        return 0.0f;
    }
    temp_fv1 = func_801306D0(arg0 & 0xFFFF, &sp18);
    if (sp18 == 0.0f) {
        return 0.0f;
    }
    return temp_fv1 / sp18;
}



f32 func_80130754(u16 arg0) {
    u16 temp_v0;

    arg0 = arg0 & 0x3FF;
    arg0 = (arg0 * 2) & 0xFFFF;
    temp_v0 = arg0;
    if (arg0 < 0x200) {
        return D_801763A0[arg0];
    }
    if (temp_v0 < 0x400) {
        return *(f32 *)((u8 *)D_801773A0 + (-(temp_v0 * 4)));
    }
    if (temp_v0 < 0x600) {
        return -*(f32 *)((u8 *)D_801753A0 + temp_v0 * 4);
    }
    return -*(f32 *)((u8 *)D_801783A0 + (-(temp_v0 * 4)));
}



f32 func_801307E4(u16 arg0) {
    u16 temp_v0;

    arg0 = arg0 & 0x3FF;
    arg0 = (arg0 * 2) & 0xFFFF;
    temp_v0 = arg0;
    if (arg0 < 0x200) {
        return D_801763A4[arg0];
    }
    if (temp_v0 < 0x400) {
        return -*(f32 *)((u8 *)D_801773A4 + (-(temp_v0 * 4)));
    }
    if (temp_v0 < 0x600) {
        return -*(f32 *)((u8 *)D_801753A4 + temp_v0 * 4);
    }
    return *(f32 *)((u8 *)D_801783A4 + (-(temp_v0 * 4)));
}

/* hh-block asm/nonmatchings/file008/80130310/_mrg_keep_text_func_80130874.s {"functions":["func_80130874"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/_mrg_keep_text_func_80130874.s")



f32 func_8013099C(s32 arg0) {
    f32 temp_fv1;
    f32 sp18;

    temp_fv1 = func_80130874((*(s32 *) &arg0) & 0x3FF & 0xFFFF, &sp18);
    if (sp18 == 0.0f) {
        return 0.0f;
    }
    return temp_fv1 / sp18;
}

s32 func_801309EC(void) {
    return ((s32) (func_801303D8() + 0x20) >> 6) & 0x3FF & 0xFFFF;
}



f32 func_80130A18(f32 arg0) {
    f64 temp_fv1;

    temp_fv1 = (f64) func_8002FC20(1.0f - (arg0 * arg0));
    if (temp_fv1 != 0.0) {
        return func_80014798(arg0, (f32) temp_fv1);
    }
    if (arg0 > 0.0f) {
        return D_8018D698;
    }
    return 0.0f;
}


void func_80130AA0(s16 arg0, s16 arg1, s16 arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 sa, ca, sb, cb, sc, cc;
    s32 angle;
    f32 sasb;
    f32 ox, oy, oz;

    angle = arg0;
    sa = func_8001EAD0(angle);
    ca = func_8001EB64(angle);
    angle = arg1;
    sb = func_8001EAD0(angle);
    cb = func_8001EB64(angle);
    angle = arg2;
    sc = func_8001EAD0(angle);
    cc = func_8001EB64(angle);
    sasb = sa * sb;
    ox = cb * cc * *arg3 + (sasb * cc - ca * sc) * *arg4 + (ca * sb * cc + sa * sc) * *arg5;
    oy = cb * sc * *arg3 + (sasb * sc + ca * cc) * *arg4 + (ca * sb * sc - sa * cc) * *arg5;
    oz = -sb * *arg3 + sa * cb * *arg4 + ca * cb * *arg5;
    *arg3 = ox;
    *arg4 = oy;
    *arg5 = oz;
}



void func_80130C40(s16 arg0, f32 *arg1, f32 *arg2) {
    f32 sp1C;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;

    sp1C = func_8001EAD0(arg0);
    temp_fv0 = func_8001EB64(arg0);
    temp_fv1 = *arg1;
    temp_fa0 = *arg2;
    *arg1 = (temp_fv1 * temp_fv0) + (temp_fa0 * -sp1C);
    *arg2 = (temp_fv1 * sp1C) + (temp_fa0 * temp_fv0);
}



typedef struct func_80130CBC_Struct {
    u8 pad0[0x1C];
    f32 f1C;
    u8 pad20[0x10];
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
} func_80130CBC_Struct;

f32 func_80130CBC(func_80130CBC_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5) {
    f32 sp44[3];
    f32 sp38[3];
    f32 sp2C[3];
    f32 r;
    f32 sp24;

    sp44[0] = arg0->f30 - arg0->f3C;
    sp44[1] = arg0->f34 - arg0->f40;
    sp44[2] = arg0->f38 - arg0->f44;
    sp38[0] = arg1 - arg0->f30;
    sp38[1] = arg2 - arg0->f34;
    sp38[2] = arg3 - arg0->f38;
    func_80130F74(sp44);
    func_80131074(sp38, sp2C, sp44);
    sp24 = func_8001EB64((s16) (s32) (((arg0->f1C / (f32)2.0) * 8192.0f) / 360.0f));
    r = (-sp2C[2] * func_8001EAD0((s16) (s32) (((arg0->f1C / (f32)2.0) * 8192.0f) / 360.0f))) / sp24;
    if (r < 0.0f) {
        return r;
    }
    *arg4 = sp2C[0] / r;
    *arg5 = sp2C[1] / r;
    return r;
}

#define func_80001060 func_80001060__func_80130E34
#define func_80130CBC func_80130CBC__func_80130E34
#define func_80130CBC_Struct func_80130CBC_Struct__func_80130E34
typedef struct func_80130CBC_Struct {
    u8 pad0[0x1C];
    f32 f1C;
    u8 pad20[0x10];
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
} func_80130CBC_Struct;
f32 func_80130CBC(func_80130CBC_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5);


typedef struct func_80130E34_Struct {
    u8 pad0[8];
    s16 scale[2];
    u8 padC[4];
    s16 offset[2];
} func_80130E34_Struct;

typedef struct func_80130E34_StructY {
    u8 pad0[0xA];
    s16 scale[1];
    u8 padC[6];
    s16 offset[1];
} func_80130E34_StructY;
extern s32 func_80001060(void);

f32 func_80130E34(func_80130E34_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5) {
    f32 sp20;
    f32 result;

    result = func_80130CBC((func_80130CBC_Struct *)arg0, arg1, arg2, arg3, arg4, arg5);
    if (result < 0.0f) {
        return result;
    }
    *arg4 = (f32)(((*arg4 * (f32)arg0->scale[0] * 0.75f) + arg0->offset[0]) * 0.25);
    *arg5 = (f32)(((-*arg5 * (f32)((func_80130E34_StructY *)arg0)->scale[0]) + ((func_80130E34_StructY *)arg0)->offset[0]) * 0.25);
    if (func_80001060() != 0) {
        *arg4 = (f32)((f64)*arg4 * 0.5);
        *arg5 = (f32)((f64)*arg5 * 0.5);
    }
    return result;
}
#undef func_80001060
#undef func_80130CBC
#undef func_80130CBC_Struct

/* hh-block asm/nonmatchings/file008/80130310/_mrg_keep_text_func_80130F74.s {"functions":["func_80130F74"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/_mrg_keep_text_func_80130F74.s")

/* hh-block asm/nonmatchings/file008/80130310/_mrg_keep_text_func_80131074.s {"functions":["func_80131074"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/_mrg_keep_text_func_80131074.s")

/* hh-block asm/nonmatchings/file008/80130310/_mrg_keep_text_func_801311F8.s {"functions":["func_801311F8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/_mrg_keep_text_func_801311F8.s")


typedef struct func_801315A8_Struct {
    u16 f0;
    u16 f2;
    u16 f4;
} func_801315A8_Struct;

void func_801315A8(func_801315A8_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10) {
    f32 v;

    arg0->f2 = D_801309EC(arg1, arg2);
    if (arg2 < 0.0f) {
        v = -arg2;
    } else {
        v = arg2;
    }
    if ((f64) v < D_8018D6C0) {
        if ((arg2 > 0.0f) || ((arg2 == 0.0f) && (arg0->f0 & 0x200))) {
            arg0->f0 = 0;
            arg0->f4 = D_801309EC((arg5 * arg7 * arg10) - (arg6 * arg9), -arg5 * arg8);
        } else {
            arg0->f0 = 0x200;
            arg0->f4 = D_801309EC(-((arg5 * arg7 * arg10) - (arg6 * arg9)), -(-arg5 * arg8));
        }
    } else {
        arg0->f0 = D_801309EC(((arg5 * arg7 * arg9) + (arg6 * arg10)) / arg2, ((arg6 * arg7 * arg9) - (arg5 * arg10)) / arg2);
        arg0->f4 = D_801309EC(arg3 / arg2, arg4 / arg2);
    }
}

/* hh-block asm/nonmatchings/file008/80130310/_mrg_keep_text_func_8013173C.s {"functions":["func_8013173C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/_mrg_keep_text_func_8013173C.s")

/* hh-block asm/nonmatchings/file008/80130310/_mrg_keep_text_func_801318D8.s {"functions":["func_801318D8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/_mrg_keep_text_func_801318D8.s")



#define ADIFF(a, b) ((((a) - (b)) & 0x200) ? ((b) - (a)) : ((a) - (b)))

void func_80131B24(u16 *arg0, u16 *arg1, u16 *arg2, u16 arg3, u16 arg4, u16 arg5) {
    u16 sum;
    u16 sum2;
    u16 pad;
    u16 x;
    u16 y;
    u16 z;

    sum = ADIFF(*arg0, arg3) & 0x3FF;
    sum += (u16)ADIFF(*arg1, arg4) & 0x3FF;
    sum += (u16)ADIFF(*arg2, arg5) & 0x3FF;
    x = *arg0;
    y = *arg1;
    z = *arg2;
    func_80131CC4(&x, &y, &z);
    sum2 = ADIFF(x, arg3) & 0x3FF;
    sum2 += (u16)ADIFF(y, arg4) & 0x3FF;
    sum2 += (u16)ADIFF(z, arg5) & 0x3FF;
    if (sum >= sum2) {
        *arg0 = x;
        *arg1 = y;
        *arg2 = z;
    }
}


void func_80131CC4(u16 *arg0, u16 *arg1, u16 *arg2) {
    *arg1 = (0x200 - *arg1) & 0x3FF;
    *arg0 = (*arg0 + 0x200) & 0x3FF;
    *arg2 = (*arg2 + 0x200) & 0x3FF;
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_80130310[] = {
    0x3E, 0xB0, 0xC6, 0xF7, 0xA0, 0xB5, 0xED, 0x8D, 0x40, 0x09, 0x21, 0xFB, 0x54, 0x44, 0x2D, 0x18,
    0x40, 0x09, 0x21, 0xFB, 0x54, 0x44, 0x2D, 0x18, 0x3F, 0xC9, 0x0F, 0xDB, 0x00, 0x00, 0x00, 0x00,
    0x54, 0x52, 0x41, 0x4E, 0x53, 0x20, 0x44, 0x41, 0x4D, 0x45, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3E, 0xB0, 0xC6, 0xF7, 0xA0, 0xB5, 0xED, 0x8D, 0x3E, 0xB0, 0xC6, 0xF7, 0xA0, 0xB5, 0xED, 0x8D,
    0x3E, 0xB0, 0xC6, 0xF7, 0xA0, 0xB5, 0xED, 0x8D, 0x3E, 0xB0, 0xC6, 0xF7, 0xA0, 0xB5, 0xED, 0x8D,
    0x3E, 0xB0, 0xC6, 0xF7, 0xA0, 0xB5, 0xED, 0x8D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
