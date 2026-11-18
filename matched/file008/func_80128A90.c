#include "context.h"

typedef struct func_80128A90_Struct30 {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    u8 pad20[0x2B];
    u8 b4B;
} func_80128A90_Struct30;
typedef struct func_80128A90_StructB {
    u8 pad0[0x30];
    func_80128A90_Struct30 *p30;
} func_80128A90_StructB;
typedef struct func_80128A90_StructArg {
    u8 pad0[0x90];
    u8 b90;
    u8 pad91;
    s16 s92;
    f32 f94;
} func_80128A90_StructArg;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
void func_80128A90(func_80128A90_StructArg *arg0, func_80128A90_StructB **arg1) {
    arg0->b90 -= (6.888888888888889);
    (*arg1)->p30->b4B = arg0->b90;
    if (arg0->f94 < (0.05)) {
        arg0->f94 = arg0->f94 + (0.001);
    }
    arg0->s92 = arg0->s92 + 0x14;
    if (arg0->s92 < 0x169) {
        arg0->s92 = arg0->s92 - 0x168;
    }
    (*arg1)->p30->f18 += arg0->f94 * ((0.3) + 0.5 * func_8001EAD0((s16)(arg0->s92 / (0.0439453125))));
    (*arg1)->p30->f1C += arg0->f94 * ((0.3) + 0.5 * func_8001EB64((s16)(arg0->s92 / (0.0439453125))));
    if (arg0->b90 < (6.888888888888889)) {
        func_80005700(arg0);
    }
}
