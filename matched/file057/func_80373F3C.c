#include "context.h"

struct func_80373F3C_Struct {
    f32 f[7];
    s16 h;
    s16 pad;
};
struct func_80373F3C_Big {
    struct func_80373F3C_Struct a;
    f32 g[7];
    s16 h;
    s16 pad;
};
extern void func_80373D14(void *, f32 *, f32 *, s16 *, s16 *);
extern void func_8000DDB0(u32, void *, u32);
extern struct func_80373F3C_Big D_8038CC70;

struct func_80373F3C_Struct func_80373F3C(u16 *arg1) {
    u32 *p;
    u8 pad[4];
    s64 r;
    s16 sp56;
    s16 sp54;
    f32 sp50;
    f32 sp4C;
    struct func_80373F3C_Struct s;
    s32 t;
    s32 v;
    u32 addr;

    r = func_80373BB0(arg1[0]);
    p = (u32 *)func_80373BF0(arg1[0], arg1[1]);
    func_80373D14(arg1, &sp50, &sp4C, &sp56, &sp54);
    addr = r + ((u64)(*p + ((u16)sp50 << 5)) & 0xFFFFFF);
    func_8000DDB0(addr, &D_8038CC70, sizeof(D_8038CC70));
    s = *(struct func_80373F3C_Struct *)&D_8038CC70;
    if (sp4C != 0.0f) {
        s.f[0] += (D_8038CC70.g[0] - D_8038CC70.a.f[0]) * sp4C;
        s.f[1] += (D_8038CC70.g[1] - D_8038CC70.a.f[1]) * sp4C;
        s.f[2] += (D_8038CC70.g[2] - D_8038CC70.a.f[2]) * sp4C;
        s.f[3] += (D_8038CC70.g[3] - D_8038CC70.a.f[3]) * sp4C;
        s.f[4] += (D_8038CC70.g[4] - D_8038CC70.a.f[4]) * sp4C;
        s.f[5] += (D_8038CC70.g[5] - D_8038CC70.a.f[5]) * sp4C;
        s.f[6] += (D_8038CC70.g[6] - D_8038CC70.a.f[6]) * sp4C;
        t = (s16)(D_8038CC70.h - D_8038CC70.a.h);
        if (t & 0x1000) {
            v = (t & 0x1FFF) - 0x2000;
        } else {
            v = t & 0x1FFF;
        }
        s.h = (s32)((f32)s.h + (f32)v * sp4C);
    }
    if (s.h & 0x1000) {
        s.h = (s.h & 0x1FFF) - 0x2000;
    } else {
        s.h = s.h & 0x1FFF;
    }
    return s;
}
