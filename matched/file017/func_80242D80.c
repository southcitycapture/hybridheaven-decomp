#include "context.h"
struct func_80242EEC_Struct;
extern void func_80243CC0(void *, s32);
extern void func_800058DC(void *, void *);
extern void func_80242EEC(struct func_80242EEC_Struct *, s32);
struct func_80242D80_SA { u8 pad[0x30]; struct func_80242D80_SB *p30; };
struct func_80242D80_SB { u8 pad[8]; f32 f8; };
struct func_80242D80_SC { u8 pad[0x3C]; s16 s3C; u8 pad2[0x56]; f32 f94; };
struct func_80242D80_SD { u8 pad[0x2C]; struct func_80242D80_SB *p2C; };
extern u8 D_8025C4E4[];
extern f32 D_8025C744;
extern f64 D_8025C748;

void func_80242D80(struct func_80242D80_SC *arg0, struct func_80242D80_SA **arg1) {
    f32 v;
    arg1[0]->p30->f8 = arg1[0]->p30->f8 + arg0->f94;
    func_8011AAF4(D_8025C4E4, 0x34C, arg0, 0, 1, 0.0f, -153.0f, D_8025C744, -206.0f, 0.0f, 0.0f, arg1[0]->p30->f8, 0.0f, 0.0f, 55.0f, -1, -1);
    if (arg0->f94 > 0.5) {
        arg0->f94 = arg0->f94 - D_8025C748;
    }
    v = arg1[0]->p30->f8;
    if (v >= -360.0f) {
        arg1[0]->p30->f8 = -360.0f;
        arg0->s3C = 0;
        func_800058DC(arg0, func_80242EEC);
        v = arg1[0]->p30->f8;
    }
    ((struct func_80242D80_SD *)D_801BBCD0)->p2C->f8 = v;
    func_80243CC0(arg0, (s32)arg1);
}
