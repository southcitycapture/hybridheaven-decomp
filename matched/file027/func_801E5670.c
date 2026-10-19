#include "context.h"

typedef struct S5670c { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; s16 s12; } S5670c;
typedef struct S5670Root { u8 pad0[8]; struct { u8 pad[8]; struct { u8 pad[0x24]; struct { u8 pad[0x2C]; S5670c *c; } *p24; } *p8; } *p8; } S5670Root;

extern f32 D_801F5888;
extern f32 D_801F588C;
extern f32 D_801F5890;
extern f32 D_801F5894;

#define R (*(S5670Root **)&D_801DAB14)
s32 func_801E5670(s32 arg0, s32 arg1) {
    s32 v;

    if (R->p8->p8->p24 != NULL) {
        v = D_801F3E38;
        if (v == 0) goto c0;
        if (v == 1) goto c1;
        if (v == 2) goto c2;
        return 1;
c0:
        R->p8->p8->p24->c->f4 = D_801F5888;
        R->p8->p8->p24->c->f8 = 0.0f;
        R->p8->p8->p24->c->fC = D_801F588C;
        R->p8->p8->p24->c->s12 = 0xD55;
        func_801CC470(1, 0x0348008F, 0, 0x1001, 1.0f);
        D_801F3E38 = 1;
        goto done;
c1:
        if (func_801C0B8C(0x4F587F)) {
            func_801CC470(1, 0x0348008F, 0, 0x1000, 1.0f);
            D_801F3E38 = 2;
        }
        goto done;
c2:
        if (func_801D20BC()) {
            R->p8->p8->p24->c->f4 = D_801F5890;
            R->p8->p8->p24->c->f8 = 0.0f;
            R->p8->p8->p24->c->fC = D_801F5894;
            R->p8->p8->p24->c->s12 = 0;
            func_801D20A0(0);
            func_801CC470(1, 0x03480000, 0, 0x1001, 1.0f);
            return 2;
        }
    }
done:
    return 1;
}
