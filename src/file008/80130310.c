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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130670.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_801307E4.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130A18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130C40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130CBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130E34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80130F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80131074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_801311F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_801315A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_8013173C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_801318D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80130310/func_80131B24.s")


void func_80131CC4(u16 *arg0, u16 *arg1, u16 *arg2) {
    *arg1 = (0x200 - *arg1) & 0x3FF;
    *arg0 = (*arg0 + 0x200) & 0x3FF;
    *arg2 = (*arg2 + 0x200) & 0x3FF;
}

