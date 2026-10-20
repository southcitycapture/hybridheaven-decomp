#include "context.h"

struct func_801E48EC_StructC { u8 pad[4]; f32 f4; f32 f8; f32 fC; };
struct func_801E48EC_StructB { u8 pad[0x2C]; struct func_801E48EC_StructC *p2C; };
struct func_801E48EC_StructA { u8 pad[0x24]; struct func_801E48EC_StructB *p24; };
struct func_801E48EC_StructR { u8 pad[8]; struct func_801E48EC_StructA *p8; };

extern s32 func_801CE2D0();
extern f32 D_801E9958;
extern f32 D_801E995C;
extern f32 D_801E9960;

s32 func_801E48EC(s32 arg0, s32 arg1) {
    u32 t;
    f32 q;
    t = func_801C1134(4, 0);
    q = (f32)t / 15.0f;
    (*(struct func_801E48EC_StructR **)&D_801DAB14)->p8->p24->p2C->fC = D_801E9958 * q + D_801E995C;
    if (func_801C1088(4, 0, 0xF) != 0) {
        func_801C10D8(4, 0);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0x14;
    }
    if (func_801CE2D0(0x0168003F, 0xA) != 0 || func_801CE2D0(0x0168003F, 0x16) != 0) {
        struct func_801E48EC_StructC *c = (*(struct func_801E48EC_StructR **)&D_801DAB14)->p8->p24->p2C;
        func_8038D33C(c->f4, c->f8, *(s32 *)&c->fC, 0x67B, D_801E9960, 1.0f);
    }
    return 0x13;
}
