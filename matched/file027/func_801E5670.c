#include "common.h"

extern s32 D_801F3E38;
extern u8 *D_801DAB14;
typedef struct S5670c { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; s16 s12; } S5670c;
typedef struct S5670Root { u8 pad0[8]; struct { u8 pad[8]; struct { u8 pad[0x24]; struct { u8 pad[0x2C]; S5670c *c; } *p24; } *p8; } *p8; } S5670Root;
#define R (*(S5670Root **)&D_801DAB14)
extern s32 func_801C0B8C(u64);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_801D20A0();
extern s32 func_801D20BC(void);
s32 func_801E5670(s32 arg0, s32 arg1) {
    s32 v;

    if (R->p8->p8->p24 != NULL) {
        v = D_801F3E38;
        if (v == 0) goto c0;
        if (v == 1) goto c1;
        if (v == 2) goto c2;
        return 1;
c0:
        R->p8->p8->p24->c->f4 = 0.600000024f;
        R->p8->p8->p24->c->f8 = 0.0f;
        R->p8->p8->p24->c->fC = 32.4000015f;
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
            R->p8->p8->p24->c->f4 = (-6.4000001f);
            R->p8->p8->p24->c->f8 = 0.0f;
            R->p8->p8->p24->c->fC = (-8.30000019f);
            R->p8->p8->p24->c->s12 = 0;
            func_801D20A0(0);
            func_801CC470(1, 0x03480000, 0, 0x1001, 1.0f);
            return 2;
        }
    }
done:
    return 1;
}
