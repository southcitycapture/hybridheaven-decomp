#include "common.h"


extern u8 D_80176BA8[];
extern u16 D_80178BAC[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_801303D8.s")


extern f64 D_8018D688;
extern void func_80029280(f32);

void func_80130610(u16 arg0) {
    func_80029280((f32) ((f64) ((f32) arg0 / 32768.0f) * D_8018D688));
}


extern void func_80032720(f32);
extern f64 D_8018D690;

void func_80130670(u16 arg0) {
    u32 temp_a0;

    temp_a0 = arg0;
    func_80032720((f32) ((f64) ((f32) temp_a0 / 32768.0f) * D_8018D690));
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_801306D0.s")


f32 func_801306D0(s32, f32 *);                      /* extern */

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


extern f32 D_801753A0[];
extern f32 D_801763A0[];
extern f32 D_801773A0[];
extern f32 D_801783A0[];

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


extern f32 D_801753A4[];
extern f32 D_801763A4[];
extern f32 D_801773A4[];
extern f32 D_801783A4[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130874.s")


f32 func_80130874(s32, f32 *);

f32 func_8013099C(s32 arg0) {
    f32 temp_fv1;
    f32 sp18;

    temp_fv1 = func_80130874((*(s32 *) &arg0) & 0x3FF & 0xFFFF, &sp18);
    if (sp18 == 0.0f) {
        return 0.0f;
    }
    return temp_fv1 / sp18;
}

extern s32 func_801303D8(void);
s32 func_801309EC(void) {
    return ((s32) (func_801303D8() + 0x20) >> 6) & 0x3FF & 0xFFFF;
}


extern f32 func_80014798(f32, f32);
extern f32 func_8002FC20(f32);
extern f32 D_8018D698;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130AA0.s")


f32 func_8001EAD0(s16);                             /* extern */
f32 func_8001EB64(s16);                             /* extern */

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


extern void func_80130F74(f32 *);
extern void func_80131074(f32 *, f32 *, f32 *);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130E34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80131074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_801311F8.s")


extern f64 D_8018D6C0;
extern s32 D_801309EC(f32, f32);
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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_8013173C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_801318D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80131B24.s")


void func_80131CC4(u16 *arg0, u16 *arg1, u16 *arg2) {
    *arg1 = (0x200 - *arg1) & 0x3FF;
    *arg0 = (*arg0 + 0x200) & 0x3FF;
    *arg2 = (*arg2 + 0x200) & 0x3FF;
}

