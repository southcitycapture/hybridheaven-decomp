#include "context.h"

typedef struct func_80148EA4_Struct { u16 v[14]; } func_80148EA4_Struct;
extern func_80148EA4_Struct D_80181DA8;
extern s32 func_80126944(void);
extern s32 func_80126A0C(s32, u16, s32);                   /* extern */
void func_80148E70(s32 arg0);

s32 func_80148EA4(void *arg0) {
    func_80148EA4_Struct sp;
    u8 n;
    u8 i;
    s32 t;

    sp = D_80181DA8;
    n = 0xE;
    if (func_80126944() == 1) {
        n = 0xB;
    }
    for (i = 0; i < n; i++) {
        t = D_801BBBF0[0x1036];
        if (t == i) {
            D_801BBBF0[0x1036] += func_80126A0C((s32)arg0, sp.v[t], 0);
        }
    }
    if (D_801BBBF0[0x1036] >= n) {
        D_801BBBF0[0x1036] = 0;
        func_80148E70(1);
        return 1;
    }
    return 0;
}
