#include "context.h"

typedef struct func_80248E34_StructB {
    u8 pad0[0x30];
    func_802474E4_StructNode *unk30;
} func_80248E34_StructB;
typedef struct func_80248E34_StructA {
    u8 pad0[0x24];
    func_80248E34_StructB *unk24;
} func_80248E34_StructA;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32, void *);
extern void func_8002096C(s32, s32, s16);

void func_80248E34(func_80248E34_StructA *arg0) {
    s32 sp34;
    u8 pad[24];
    f32 sp18;
    f32 a;
    f32 b;
    func_802474E4_StructNode *n;
    func_802472C8_StructB *p;
    s32 r;

    p = D_801BBCD8->unk2C;
    sp34 = (s16)(func_8001EF38(p->f[0] - arg0->unk24->unk30->unk4, p->f[2] - arg0->unk24->unk30->unkC) -arg0->unk24->unk30->unk12) & 0x1FFF;
    n = arg0->unk24->unk30;
    p = D_801BBCD8->unk2C;
    a =n->unk4 - p->f[0];
    b = n->unkC - p->f[2];
    sp18 = func_8002FC20(a * a + b * b, n);
    func_8002096C(0x238, 1, (s16)(s32)(((func_8001EAD0(sp34) * sp18) / 50.0f) * -64.0f));
    p = D_801BBCD8->unk2C;
    r = (s16)(func_8001EF38(p->f[3] - p->f[0], p->f[5] - p->f[2]) - arg0->unk24->unk30->unk12) & 0x1FFF;
    func_8002096C(0x238, 2, (s16)(s32)(func_8001EB64(r) * 127.0f));
}
