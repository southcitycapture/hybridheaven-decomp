#include "context.h"

struct func_8022474C_Mid {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8022474C_Obj {
    u8 pad0[0x24];
    struct {
        u8 pad0[0x2C];
        struct func_8022474C_Mid *unk2C;
    } *unk24;
};

#define SPD(p) ((s14 > 0.0 ? s14 : (p)->unk10))
#define RAW(p) ((s16)(s32)(SPD(p) * 128.0f))
#define WRAP(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

s32 func_8022474C(s32 arg0, s16 arg1) {
    func_80225664_Struct *p;
    struct func_8022474C_Mid *m;
    s16 cur;
    s16 d;
    s16 a;
    s16 lim;
    s32 q;
    s32 t;
    f32 s14;

    if (arg0 == D_801BBCCC) {
        p = &D_801BC03C;
    } else {
        p = &D_801BC3D8;
    }
    m = ((struct func_8022474C_Obj *)arg0)->unk24->unk2C;
    cur = m->unk12;
    d = cur - arg1;
    a = WRAP(d);
    s14 = *(f32 *)&p->pad14;
    lim = (WRAP(RAW(p)) < 0) ? -WRAP(RAW(p)) : WRAP(RAW(p));
    if (a < -lim) {
        m->unk12 = (s16)(cur + lim) & 0x1FFF;
    } else if (lim < a) {
        m->unk12 = (s16)(cur - lim) & 0x1FFF;
    } else {
        m->unk12 = arg1 & 0x1FFF;
    }
    return (u8)((a / lim < 0) ? -(a / lim) : (a / lim));
}
#undef SPD
#undef RAW
#undef WRAP
