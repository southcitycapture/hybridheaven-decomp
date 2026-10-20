#include "context.h"
extern f32 D_801EDE50, D_801EDE54, D_801EDE58, D_801EDE5C, D_801EDE60, D_801EDE64;
struct func_801E93B8_Struct { u8 pad0[4]; f32 f4; f32 f8; f32 fC; };
struct func_801E93B8_Node { u8 pad0[8]; struct func_801E93B8_Node *n8; u8 padC[0x18]; struct func_801E93B8_Node *n24; u8 pad28[4]; struct func_801E93B8_Struct *n2C; };
#define ROOT93 (*(struct func_801E93B8_Node **)D_801DAB14)
#define S93 ROOT93->n8->n8->n24->n2C
s32 func_801E93B8(s32 arg0, s32 arg1) {
    u32 r;
    f32 t;
    r = func_801C1134(4, 1) + 0x14;
    t = (f32)r / 25.0f;
    S93->f4 = D_801EDE50 * t + D_801EDE54;
    S93->f8 = func_801C87E0(r);
    S93->fC = D_801EDE58 * t + D_801EDE5C;
    func_801C80C8(S93->f4, S93->f8 + 10.5f, S93->fC, 1.0f, 1.0f, 1.0f, D_801EDE60, 0x14);
    func_801C815C(S93->f4, S93->f8 + 8.0f, S93->fC, 1.0f, 1.0f, 1.0f, D_801EDE64, 0x14);
    if (func_801C1088(4, 1, 5) != 0) {
        func_801C10D8(4, 1);
        func_8038D28C(0x25D);
        func_801CC4D8(1, 0x01B80036, 0, 0, 5.0f);
        return 0x34;
    }
    return 0x33;
}
