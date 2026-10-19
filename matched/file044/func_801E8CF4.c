#include "context.h"
extern f32 D_801EDE04, D_801EDE08, D_801EDE0C, D_801EDE10, D_801EDE14, D_801EDE18;
extern f32 func_801C87E0(s32);
extern void func_801C80C8(f32, f32, f32, f32, f32, f32, f32, s32);
extern void func_801C815C(f32, f32, f32, f32, f32, f32, f32, s32);
struct func_801E8CF4_Struct { u8 pad0[4]; f32 f4; f32 f8; f32 fC; };
struct func_801E8CF4_Node { u8 pad0[8]; struct func_801E8CF4_Node *n8; u8 padC[0x18]; struct func_801E8CF4_Node *n24; u8 pad28[4]; struct func_801E8CF4_Struct *n2C; };
#define ROOT (*(struct func_801E8CF4_Node **)D_801DAB14)
#define S ROOT->n8->n8->n24->n2C
s32 func_801E8CF4(s32 arg0, s32 arg1) {
    s32 r;
    f32 t;
    r = func_801C1134(4, 1);
    t = (f32)(u32)r / 25.0f;
    S->f4 = D_801EDE04 * t + D_801EDE08;
    S->f8 = func_801C87E0(r);
    S->fC = D_801EDE0C * t + D_801EDE10;
    func_801C80C8(S->f4, S->f8 + 10.5f, S->fC, 1.0f, 1.0f, 1.0f, D_801EDE14, 0x14);
    func_801C815C(S->f4, S->f8 + 8.0f, S->fC, 1.0f, 1.0f, 1.0f, D_801EDE18, 0x14);
    if (func_801C1088(4, 1, 0x14) != 0) {
        func_801C10D8(4, 1);
        return 0x2C;
    }
    return 0x2B;
}
