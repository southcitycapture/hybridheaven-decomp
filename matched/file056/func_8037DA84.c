#include "context.h"

typedef struct { s16 x, y; } func_8037DA84_P;
typedef struct { func_8037DA84_P v[6]; } func_8037DA84_SA;
typedef struct { u16 *p[4]; } func_8037DA84_SB;
typedef struct { u8 v[4][2]; } func_8037DA84_SC;
typedef struct { u8 pad[0x91]; s8 k; } func_8037DA84_S;
extern u8 func_80006214(void);
extern func_8037DA84_SA D_80388C98;
extern func_8037DA84_SB D_80388CB0;
extern func_8037DA84_SB D_80388CC0;
extern func_8037DA84_SC D_80388CD0;

#define arg0 ((func_8037DA84_S *)a0)
#define arg1 ((s32 *)a1)
void func_8037DA84(void *a0, void *a1) {
    func_8037DA84_SA a;
    s16 pad0;
    s16 s74;
    u8 pad1;
    u8 r;
    s32 i;
    func_8037DA84_SB b;
    func_8037DA84_SB c;
    func_8037DA84_SC d;
    u16 *q;

    a = D_80388C98;
    s74 = 1;
    b = D_80388CB0;
    c = D_80388CC0;
    d = D_80388CD0;
    b.p[2] = (u16 *)&s74;
    b.p[3] = (u16 *)&s74;
    r = func_80006214();
    q = c.p[arg0->k];
    for (i = 0; i < 6; i = (i + 1) & 0xFF) {
        func_8037D5C4((s32)arg0, (s32)arg1, *q, (s16)(a.v[i].x + 0x1B), a.v[i].y + 0x23, d.v[arg0->k][0], d.v[arg0->k][1], 0);
        q += 1;
    }
    D_8038A9A4 = arg1[r];
}
#undef arg0
#undef arg1
