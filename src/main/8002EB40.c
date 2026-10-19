#include "common.h"


typedef struct func_8002EB40_Struct {
    struct func_8002EB40_Struct2 *p0;
    u8 pad4[0x14];
    f32 f18;
    s32 i1C;
    f32 f20;
    s32 i24;
    u8 pad28[8];
    s32 i30;
} func_8002EB40_Struct;

struct func_8002EB40_Struct2 {
    u8 pad[8];
    s32 (*fn)();
};

s32 func_8002EB40(func_8002EB40_Struct *arg0, s32 arg1, s32 arg2) {
    u8 pad[8];
    s32 sp1C;

    switch (arg1) {
    case 1:
        arg0->p0 = (struct func_8002EB40_Struct2 *)arg2;
        break;
    case 4:
        arg0->i24 = 1;
        arg0->i30 = 0;
        arg0->i1C = 0;
        arg0->f20 = 0.0f;
        if (arg0->p0 != NULL) {
            arg0->p0->fn(arg0->p0, 4, 0);
        }
        break;
    case 9:
        arg0->i30 = 1;
        if (arg0->p0 != NULL) {
            arg0->p0->fn(arg0->p0, 9, 0);
        }
        break;
    case 7:
        sp1C = arg2;
        arg0->f18 = *(f32 *)&sp1C;
        break;
    case 8:
        arg0->i1C = 1;
        break;
    default:
        if (arg0->p0 != NULL) {
            arg0->p0->fn(arg0->p0);
        }
        break;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002EB40/func_8002EC2C.s")

