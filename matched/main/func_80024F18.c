#include "context.h"

struct func_80024F18_Struct {
    u8 pad0[0x93];
    u8 unk93;
    u8 pad94;
    u8 unk95;
    u8 pad96[3];
    u8 unk99;
    u16 unk9A;
    u8 pad9C[2];
    u8 unk9E;
    u8 pad9F;
    s16 unkA0;
};
#define P ((struct func_80024F18_Struct *)D_800CBDA4)

void func_80024F18(void) {
    s32 a;
    u8 v;

    v = *D_800CBDA0;
    D_800CBDA0 += 1;
    if ((s32) v < 0x64) {
        P->unk93 = v;
    } else {
        P->unk93 = 0U;
        P->unk9E = (u8) (v - 0x64);
    }
    v = *D_800CBDA0;
    D_800CBDA0 += 1;
    if (v < 0x40) {
        if (v < 0x20) {
            P->unk99 = 1;
            v = v * 8;
        } else {
            P->unk99 = 2;
            v = v * 4;
        }
    } else if (v < 0x80) {
        v = v * 2;
        P->unk99 = 4;
    } else if (v == 0xFF) {
        P->unk99 = 0x10;
    } else {
        P->unk99 = 8;
    }
    P->unk95 = v;
    P->unk9A = (u16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
    a = P->unk9E;
    if (a != 0) {
        P->unkA0 = (s16) ((s32) P->unk9A / a);
    }
}
