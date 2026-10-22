#include "context.h"

void func_801F34FC(struct func_801F290C_O *arg0, s32 arg1) {
    struct func_801F290C_S *s;
    struct func_801F290C_S *p;
    f64 r;
    f64 x;
    f64 c;

    G->u24 = 0;
    s = G->uE0->u2C;
    x = s->f4;
    r = ((arg0->u38->u14 >> 16) & 0xFFF) * 5.0;
    p = arg0->u24->u30;
    c = p->f4;
    if (x < r + c && c - r < x && s->fC < r + p->fC && p->fC - r < s->fC) {
        G->u28 |= (u8)((arg0->u38->u14 >> 16) >> 12);
        return;
    }
    *(f32 *)((u8 *)arg0 + 0xA0) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0xA4) = 0.0f;
    func_800058DC((s32)arg0, func_801F2EB0);
}
