#include "context.h"
extern f64 func_80034C24(u64);
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern s32 func_801CE2D0(s32, s32);
extern s32 D_801E9FFC;
extern f64 D_801EA598;
extern f32 D_801EA5A0;
extern f32 D_801EA5A4;
extern f32 D_801EA5A8;
extern f32 D_801EA5AC;

typedef struct func_801E8358_S3 { u8 pad[4]; f32 a; f32 b; f32 c; } func_801E8358_S3;
typedef struct func_801E8358_S2 { u8 pad[0x2C]; func_801E8358_S3 *p; } func_801E8358_S2;
typedef struct func_801E8358_S1 { u8 pad[0x24]; func_801E8358_S2 *p; } func_801E8358_S1;
typedef struct func_801E8358_S0 { u8 pad[8]; func_801E8358_S1 *p; } func_801E8358_S0;
typedef struct func_801E8358_S { u8 pad[0x24]; func_801E8358_S0 *p; } func_801E8358_S;

#define CH (((func_801E8358_S0 *)D_801DAB14)->p->p->p)

s32 func_801E8358(s32 arg0, s32 arg1) {
    f32 t;
    u64 r;
    r = func_801C0F18(4, 0);
    t = (f32)(func_80034C24(r) / D_801EA598) / 3.0f;
    CH->a = t * D_801EA5A0 + 4.5f;
    CH->c = t * D_801EA5A4 + D_801EA5A8;
    if (func_801C0DE4(4, 0, 3.0f) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x0348005E, 0, 0, 3.0f);
        D_801E9FFC = 0;
        return 0xB;
    }
    if (func_801CE2D0(0x01B8001B, 0xC) != 0 || func_801CE2D0(0x01B8001B, 0x1E) != 0) {
        func_8038D33C(CH->a, CH->b, *(s32 *)&CH->c, 0x67C, D_801EA5AC, 1.0f);
    }
    return 0xA;
}
