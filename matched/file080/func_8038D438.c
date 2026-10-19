#include "context.h"

struct func_8038D438_Struct0 {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[7];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D438_Struct1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D438_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
};
struct func_8038D438_StructGlobal {
    u8 pad0[0xB90];
    f32 unkB90;
};
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);
extern struct func_8038D438_StructGlobal D_801BBBF0;

void func_8038D438(void *arg0, void *arg1, void *arg2) {
    struct func_8038D438_Struct0 *a = arg0;
    struct func_8038D438_Struct1 *b = arg1;
    struct func_8038D438_Struct2 *c = arg2;

    if ((c->unk30 << 11) >> 30) {
        func_802294BC(b);
        a->unk9A = 8;
        a->unk92 = 0;
    } else if (D_801BBBF0.unkB90 > 25.0f) {
        b->unk2D8 = 0x13;
        if (D_801BBBF0.unkB90 > 40.0f) {
            b->unk2D9 = 0;
        } else {
            b->unk2D9 = 5;
        }
        a->unk92 = 0;
    } else {
        b->unk2D8 = 1;
        if (func_8022B640(2) == 0) {
            b->unk2D9 = 0x23;
            a->unk92 = 0;
        } else {
            func_80229CE0(a, b, 0);
            a->unk92 = 1;
        }
    }
    a->unkA1 = b->unk2D8;
    a->unkA2 = b->unk2D9;
}
