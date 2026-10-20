#include "context.h"
extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
extern u8 D_801DAB14[];
extern f32 D_801E6CA0;
extern f32 D_801E6CA4;
extern f32 D_801E6CA8;
extern f32 D_801E6CAC;
extern f32 D_801E6CB0;
extern f32 D_801E6CB4;
extern f32 D_801E6CB8;
extern f32 D_801E6CBC;
extern f32 D_801E6CC0;

typedef struct func_801E2540_StructC { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; s16 h12; } func_801E2540_StructC;
typedef struct func_801E2540_StructB { u8 pad[0x2C]; func_801E2540_StructC *p2C; } func_801E2540_StructB;
typedef struct func_801E2540_StructA { u8 pad[0x24]; func_801E2540_StructB *p24; } func_801E2540_StructA;
typedef struct func_801E2540_StructR { u8 pad[8]; func_801E2540_StructA *p8; } func_801E2540_StructR;

#define ROOT (*(func_801E2540_StructR **)D_801DAB14)

s32 func_801E2540(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.5f, -73.8f, 34.9f, D_801E6CA0, D_801E6CA4, D_801E6CA8, D_801E6CAC, -58.0f, D_801E6CB0, D_801E6CB4, D_801E6CB8, 20.0f, D_801E6CBC, 41.5f, D_801E6CC0) != 0) {
        ROOT->p8->p24->p2C->f4 = -46.0f;
        ROOT->p8->p24->p2C->f8 = 8.0f;
        ROOT->p8->p24->p2C->fC = 58.0f;
        ROOT->p8->p24->p2C->h12 = 0xE0B;
        D_8038C158();
        return 0xC;
    }
    return 0xB;
}
