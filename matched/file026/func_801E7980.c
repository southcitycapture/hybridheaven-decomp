#include "context.h"

struct func_801E7980_Struct3 {
    u8 pad[0x30];
    f32 f[6];
};
struct func_801E7980_Struct2 {
    u8 pad[0x2C];
    struct func_801E7980_Struct3 *p;
};
struct func_801E7980_Struct1 {
    u8 pad[0xE8];
    struct func_801E7980_Struct2 *q;
};
extern f32 D_801FC218, D_801FC21C, D_801FC280, D_801FC284;
extern f64 D_801FC220, D_801FC228, D_801FC230, D_801FC238, D_801FC240, D_801FC248, D_801FC250, D_801FC258, D_801FC260, D_801FC268, D_801FC270, D_801FC278;
#define GG ((struct func_801E7980_Struct1 *)&D_801BBBF0)

s32 func_801E7980(s32 arg0, s32 arg1) {
    f64 t;
    f64 one;
    u64 r;

    if (func_801C0B8C(0x02F1C8C0)) {
        D_8038C158();
        return 8;
    }
    if (func_801C0B8C(0x02D34440)) {
        func_8038BD50(77.0f, D_801FC218, -42.3f);
        D_8038BD88(D_801FC21C, 14.5f, -11.7f);
        return 7;
    }
    if (func_801C0B8C(0x02C40200)) {
        r = func_801C0B2C();
        one = 1.0;
        t = (f64)(f32)(func_80034C24(r) / D_801FC220 - D_801FC228) / one;
        GG->q->p->f[0] = t * D_801FC230 + D_801FC238;
        GG->q->p->f[1] = t * D_801FC240 + 15.0;
        GG->q->p->f[2] = t * D_801FC248 + D_801FC250;
        GG->q->p->f[3] = t * D_801FC258 + D_801FC260;
        GG->q->p->f[4] = t * -0.5 + D_801FC268;
        GG->q->p->f[5] = t * D_801FC270 + D_801FC278;
        return 7;
    }
    func_8038BD50(77.0f, D_801FC280, -42.3f);
    D_8038BD88(D_801FC284, 14.5f, -11.7f);
    return 7;
}
