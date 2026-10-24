#include "context.h"

typedef struct func_80236A48_StructA { u16 v[3]; } func_80236A48_StructA;
typedef struct func_80236A48_StructB { u16 v[4]; } func_80236A48_StructB;
extern func_80236A48_StructA D_8023E500;
extern func_80236A48_StructB D_8023E508;
extern func_80236A48_StructB D_8023E510;
extern u16 D_801BBC1C;
extern s32 func_80126A0C(s32, u16, s32);

#define func_80236A48_CUR (*(u8 *)&D_8023E3B0)

s32 func_80236A48(s32 arg0) {
    func_80236A48_StructA a = D_8023E500;
    func_80236A48_StructB b = D_8023E508;
    func_80236A48_StructB c = D_8023E510;
    u16 *p;
    u8 n;
    u8 i;
    s32 cur;

    if (D_801BBC1C == 0xA || D_801BBC1C == 0xB) {
        p = c.v;
        n = 4;
    } else if (func_80236C9C() != 0) {
        p = b.v;
        n = 4;
    } else {
        p = a.v;
        n = 3;
    }
    for (i = 0; i < n; i++) {
        cur = func_80236A48_CUR;
        if (cur == i) {
            func_80236A48_CUR += func_80126A0C(arg0, p[cur], 0);
        }
    }
    if (func_80236A48_CUR >= n) {
        func_80236A48_CUR = 0xFF;
        return 1;
    }
    return 0;
}

#undef func_80236A48_CUR
