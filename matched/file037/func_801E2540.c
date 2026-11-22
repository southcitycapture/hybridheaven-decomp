#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
extern u8 D_801DAB14[];
typedef struct func_801E2540_StructC { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; s16 h12; } func_801E2540_StructC;
typedef struct func_801E2540_StructB { u8 pad[0x2C]; func_801E2540_StructC *p2C; } func_801E2540_StructB;
typedef struct func_801E2540_StructA { u8 pad[0x24]; func_801E2540_StructB *p24; } func_801E2540_StructA;
typedef struct func_801E2540_StructR { u8 pad[8]; func_801E2540_StructA *p8; } func_801E2540_StructR;
#define ROOT (*(func_801E2540_StructR **)D_801DAB14)
s32 func_801E2540(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.5f, -73.8f, 34.9f, 56.4000015f, (-67.9000015f), 36.9000015f, 52.5999985f, -58.0f, 20.2999992f, 66.6999969f, (-59.5999985f), 20.0f, 67.1999969f, 41.5f, 35.9000015f) != 0) {
        ROOT->p8->p24->p2C->f4 = -46.0f;
        ROOT->p8->p24->p2C->f8 = 8.0f;
        ROOT->p8->p24->p2C->fC = 58.0f;
        ROOT->p8->p24->p2C->h12 = 0xE0B;
        D_8038C158();
        return 0xC;
    }
    return 0xB;
}
