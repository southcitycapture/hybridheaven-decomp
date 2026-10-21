#include "context.h"
extern f32 D_801EA570;
extern f64 D_801EA578;
extern f32 D_801EA580;
extern f32 D_801EA584;
extern f32 D_801EA588;
extern f32 D_801EA58C;
extern f32 D_801EA590;
extern struct func_801E8E80_Struct0 *D_801DAB14;
extern void func_8038D33C(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern s32 func_801CE2D0(s32, s32);

typedef struct func_801E807C_Struct3 { u8 pad[4]; f32 a; f32 b; f32 c; } func_801E807C_Struct3;
typedef struct func_801E807C_Struct2 { u8 pad[0x2C]; func_801E807C_Struct3 *p; } func_801E807C_Struct2;
typedef struct func_801E807C_Struct1 { u8 pad[0x24]; func_801E807C_Struct2 *p; } func_801E807C_Struct1;
typedef struct func_801E807C_Struct0 { u8 pad[8]; func_801E807C_Struct1 *p; } func_801E807C_Struct0;
#define func_801E807C_CHAIN (((func_801E807C_Struct0 *)D_801DAB14)->p->p->p)

s32 func_801E807C(s32 arg0, s32 arg1) {
    f32 k;
    f32 t;
    func_801E807C_Struct3 *c;

    t = (f32)(func_80034C24(func_801C0F18(4, 0)) / D_801EA578) / D_801EA570;
    k = D_801EA570;
    func_801E807C_CHAIN->a = t * D_801EA580 + D_801EA584;
    func_801E807C_CHAIN->c = t * D_801EA588 + D_801EA58C;
    if (func_801C0DE4(4, 0, k) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 6;
    }
    if (func_801CE2D0(0x01B8001B, 0xC) != 0 || func_801CE2D0(0x01B8001B, 0x1E) != 0) {
        c = func_801E807C_CHAIN;
        func_8038D33C(c->a, c->b, *(s32 *)&c->c, 0x67C, D_801EA590, 1.0f);
    }
    return 5;
}
