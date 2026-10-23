#include "context.h"
void func_80144C40(u8 **arg0) { typedef struct { u16 a; u8 b; u8 c; u16 d; } func_80144C40_StructDelta; typedef struct { u8 b[0x9C]; u16 h; } func_80144C40_StructA; typedef struct { u8 b[7]; } func_80144C40_StructB; typedef struct { u8 a; u8 pad; u16 h; u8 c; u8 pad2; } func_80144C40_StructC; typedef struct { u8 pad[4]; u8 b; u8 pad2[3]; } func_80144C40_StructD; typedef struct { u8 pad[2]; u8 b; } func_80144C40_StructE; extern func_80144C40_StructDelta func_80181580; extern func_80144C40_StructDelta func_8017DDA4; extern func_80144C40_StructB func_8017DF14[]; extern func_80144C40_StructD func_8017E004[]; extern func_80144C40_StructC func_80183CE0[]; extern u8 func_8017DC40[]; extern u8 func_8017DD7C[];
    u8 i;
    func_80144C40_StructDelta temp;

    temp = func_80181580;
    *(u16 *)(func_8017DC40 + 0x9C) += func_8017DDA4.a;
    func_8017DC40[0x88] += func_8017DDA4.b;
    func_8017DC40[0x89] += func_8017DDA4.c;
    *(u16 *)(func_8017DC40 + 0x8A) += func_8017DDA4.d;
    func_8017DDA4 = temp;
    *(func_80144C40_StructA *)*arg0 = *(func_80144C40_StructA *)func_8017DC40;
    *arg0 += 0x9E;
    for (i = 0; i < 0x56; i++) {
        **arg0 = func_80183CE0[i].a;
        *arg0 += 1;
        **arg0 = *(s16 *)&func_80183CE0[i].h;
        *arg0 += 1;
        **arg0 = func_80183CE0[i].c;
        *arg0 += 1;
    }
    for (i = 0; i < 0x2D; i++) {
        **arg0 = func_8017E004[i].b;
        *arg0 += 1;
    }
    for (i = 0; i < 3; i++) {
        *(func_80144C40_StructB *)*arg0 = func_8017DF14[i];
        *arg0 += 7;
    }
    for (i = 0; i < 6; i++) {
        **arg0 = ((func_80144C40_StructE *)(func_8017DD7C + i))->b;
        *arg0 += 1;
    }
}
