#include "context.h"
extern f32 D_801EDE1C, D_801EDE20, D_801EDE24, D_801EDE28, D_801EDE2C, D_801EDE30;
struct func_801E8F3C_Struct { u8 pad0[4]; f32 f4; f32 f8; f32 fC; };
struct func_801E8F3C_Node { u8 pad0[8]; struct func_801E8F3C_Node *n8; u8 padC[0x18]; struct func_801E8F3C_Node *n24; u8 pad28[4]; struct func_801E8F3C_Struct *n2C; };
#undef ROOT
#undef S
#define ROOT (*(struct func_801E8F3C_Node **)D_801DAB14)
#define S ROOT->n8->n8->n24->n2C
s32 func_801E8F3C(s32 arg0, s32 arg1) {
    u32 r;
    f32 t;
    r = func_801C1134(4, 1) + 0x14;
    t = (f32)r / 25.0f;
    S->f4 = D_801EDE1C * t + D_801EDE20;
    S->f8 = func_801C87E0(r);
    S->fC = D_801EDE24 * t + D_801EDE28;
    func_801C80C8(S->f4, S->f8 + 10.5f, S->fC, 1.0f, 1.0f, 1.0f, D_801EDE2C, 0x14);
    func_801C815C(S->f4, S->f8 + 8.0f, S->fC, 1.0f, 1.0f, 1.0f, D_801EDE30, 0x14);
    if (func_801C1088(4, 1, 5) != 0) {
        func_801C10D8(4, 1);
        func_801CC4D8(1, 0x01B80036, 0, 0, 5.0f);
        func_8038D28C(0x25D);
        return 0x2E;
    }
    return 0x2D;
}
