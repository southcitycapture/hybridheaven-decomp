#include "context.h"

typedef struct { u8 b[0x9C]; u16 h; } func_80144E68_StructA;
typedef struct { u8 b[7]; } func_80144E68_StructB;
typedef struct { u8 a; u8 pad; u16 h; u8 c; u8 pad2; } func_80144E68_StructC;
typedef struct { u8 pad[4]; u8 b; u8 pad2[3]; } func_80144E68_StructD;
typedef struct { u8 pad[2]; u8 b; } func_80144E68_StructE;

extern u8 D_8017DC40[];
extern u8 D_8017DD7C[];
extern func_80144E68_StructB D_8017DF14[];
extern func_80144E68_StructD D_8017E004[];
extern func_80144E68_StructC D_80183CE0[];

void func_80144E68(u8 **arg0) {
    u8 i;
    u8 *p;

    *(func_80144E68_StructA *)D_8017DC40 = *(func_80144E68_StructA *)*arg0;
    *arg0 += 0x9E;
    for (i = 0; i < 0x56; i++) {
        D_80183CE0[i].a = *(*arg0)++;
        D_80183CE0[i].h = *(*arg0)++;
        D_80183CE0[i].c = *(*arg0)++;
    }
    for (i = 0; i < 0x2D; i++) {
        D_8017E004[i].b = *(*arg0)++;
    }
    for (i = 0; i < 3; i++) {
        D_8017DF14[i] =*(func_80144E68_StructB *)*arg0;
        *arg0 += 7;
    }
    for (i = 0; i < 6; i++) {
        p = D_8017DD7C + i;
        p[2] = *(*arg0)++;
    }
}
