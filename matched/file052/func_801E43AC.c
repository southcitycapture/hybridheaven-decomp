#include "context.h"

typedef struct func_801E43AC_Struct5 { u8 pad0[4]; f32 f4; f32 f8; } func_801E43AC_Struct5;
typedef struct func_801E43AC_Struct4 { u8 pad0[0x2C]; func_801E43AC_Struct5 *p2c; } func_801E43AC_Struct4;
typedef struct func_801E43AC_Struct3 { u8 pad0[0x24]; func_801E43AC_Struct4 *p24; } func_801E43AC_Struct3;
typedef struct func_801E43AC_Struct2 { u8 pad0[8]; func_801E43AC_Struct3 *p8; } func_801E43AC_Struct2;
typedef struct func_801E43AC_Struct1 { u8 pad0[8]; func_801E43AC_Struct2 *p8; } func_801E43AC_Struct1;

s32 func_801E43AC(s32 arg0, s32 arg1) {
    u32 v;
    f32 t;

    v = func_801C1134(4, 1);
    if (v >= 0x50) {
        t = (f32)(v - 0x50) / 80.0f;
        ((func_801E43AC_Struct1 *)D_801DAB14[0])->p8->p8->p24->p2c->f8 = -15.0f * t;
    }
    t = (f32)v / 160.0f;
    func_801D82B8((u32)(-255.0f * t + 255.0f) & 0xFF);
    if (func_801C1088(4, 1, 0xA0) != 0) {
        func_801C10D8(4, 1);
        ((func_801E43AC_Struct1 *)D_801DAB14[0])->p8->p8->p24->p2c->f4 = 5120.0f;
        return 6;
    }
    func_801E4284();
    return 5;
}
