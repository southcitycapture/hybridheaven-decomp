#include "context.h"
typedef struct { s32 a[39]; u16 h; } func_80152608_StructA;
extern func_80152240_S9E D_801837E4;
extern func_80152240_S15 D_80183884;
extern func_80152240_S204 D_8018389C;
extern func_80152240_S28 D_80183AA0;

void func_80152608(void) {
    func_80152240_S9E a;
    func_80152240_S15 b;
    func_80152240_S204 c;
    func_80152240_S28 d;
    u8 i;
    a = D_801837E4;
    b = D_80183884;
    c = D_8018389C;
    d = D_80183AA0;
    D_8017DC40[0] = a;
    for (i = 0; i < 0x25; i++) {
        ((func_80152240_SE004 *)D_8017E004)[i].f = (i % 4) + 1;
    }
    for (i = 0; i < 3; i++) {
        D_8017DF14[i] = b.e[i];
    }
    for (i = 0; i < 0x56; i++) {
        D_80183CE0[0][i] = c.e[i];
        D_801840E8[i] = 0;
    }
    D_8017DD7C = d;
}
