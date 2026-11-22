#include "common.h"

extern u8 D_801DAB14[];
struct func_801E8CF4_Struct { u8 pad0[4]; f32 f4; f32 f8; f32 fC; };
struct func_801E8CF4_Node { u8 pad0[8]; struct func_801E8CF4_Node *n8; u8 padC[0x18]; struct func_801E8CF4_Node *n24; u8 pad28[4]; struct func_801E8CF4_Struct *n2C; };
#define ROOT (*(struct func_801E8CF4_Node **)D_801DAB14)
#define S ROOT->n8->n8->n24->n2C
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);
extern void func_801C80C8(f32, f32, f32, f32, f32, f32, f32, s32);
extern void func_801C815C(f32, f32, f32, f32, f32, f32, f32, s32);
extern f32 func_801C87E0(u32);
s32 func_801E8CF4(s32 arg0, s32 arg1) {
    s32 r;
    f32 t;
    r = func_801C1134(4, 1);
    t = (f32)(u32)r / 25.0f;
    S->f4 = (-182.700012f) * t + 45.4000015f;
    S->f8 = func_801C87E0(r);
    S->fC = 29.9000015f * t + 2.29999995f;
    func_801C80C8(S->f4, S->f8 + 10.5f, S->fC, 1.0f, 1.0f, 1.0f, 0.300000012f, 0x14);
    func_801C815C(S->f4, S->f8 + 8.0f, S->fC, 1.0f, 1.0f, 1.0f, 0.300000012f, 0x14);
    if (func_801C1088(4, 1, 0x14) != 0) {
        func_801C10D8(4, 1);
        return 0x2C;
    }
    return 0x2B;
}
