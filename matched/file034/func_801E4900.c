#include "context.h"

typedef struct func_801E4900_StructC { u8 pad[4]; f32 u4; f32 u8; f32 uC; } func_801E4900_StructC;
typedef struct func_801E4900_StructB { u8 pad[0x2C]; func_801E4900_StructC *u2C; } func_801E4900_StructB;
typedef struct func_801E4900_StructA { u8 pad[0x24]; func_801E4900_StructB *u24; } func_801E4900_StructA;
typedef struct func_801E4900_Struct { u8 pad[8]; func_801E4900_StructA *u8; } func_801E4900_Struct;

extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern u32 func_801C1134(s32, s32);
extern void func_8038D33C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5);
extern f32 D_801E960C;
extern f32 D_801E9610;
extern f32 D_801E9614;
extern f32 D_801E9618;

#define G ((func_801E4900_Struct *)D_801DAB14)

s32 func_801E4900(s32 arg0, s32 arg1) {
    f32 t;
    func_801E4900_StructC *p;

    if ((func_801C1088(4, 0, 0x37) != 0) && (func_801CE284() != 0)) {
        func_801C10D8(4, 0);
        return 0x14;
    }
    t = (f32) func_801C1134(4, 0) / 55.0f;
    G->u8->u24->u2C->u4 = D_801E960C * t + -51.5f;
    G->u8->u24->u2C->uC = D_801E9610 * t + D_801E9614;
    if ((func_801CE2D0(0x02A80023, 0x1E) != 0) || (func_801CE2D0(0x02A80023, 0x32) != 0)) {
        p = G->u8->u24->u2C;
        func_8038D33C(p->u4, p->u8, *(s32 *)&p->uC, 0x665, D_801E9618, 1.0f);
    }
    return 0x13;
}
