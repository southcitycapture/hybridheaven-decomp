#define ZQ(a, b) a##_##b
#define ZP(a, b) ZQ(a, b)
#define func_800158C0 ZP(zA, __LINE__)
#define func_80015680 func_80015680_ctx
#include "context.h"
#undef func_800158C0
#undef func_80015680

typedef struct func_80015680_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x14];
    s32 unk1C;
} func_80015680_Struct;

typedef struct func_80015680_Arg {
    s32 p;
} func_80015680_Arg;

s32 func_80015680(s32 arg0, func_80015680_Arg arg1, func_80015680_Struct *arg2) {
    s32 sp54;
    s32 pad[2];
    s32 temp_t3;
    s32 temp_lo;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;

    sp54 = 0;
    arg2->unk1C = D_8008DFAC = arg1.p;
    temp_lo = arg2->unk0 * arg2->unk4;
    D_8008DFB4 = (s32)func_80016BA0(((temp_lo / 8) + 7) & ~7, &sp54);
    func_80016058((void *)arg2);
    for (var_s1 = 0; var_s1 < temp_lo; var_s1++) {
        if (func_80016B6C(D_8008DFB4, var_s1) != 0) {
            var_s3 = ((u16 *)D_8008DFAC)[var_s1];
        }
        ((u16 *)D_8008DFAC)[var_s1] = var_s3;
    }
    if (sp54 != 0) {
        func_8001F540(D_8008DFB4);
    }
    return arg1.p;
}
