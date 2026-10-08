#include "context.h"

struct func_8038D470_Struct0 {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    u16 unk9A;
    u8 pad9C[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D470_Struct1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D470_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
};

extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern f32 D_801BC3D8[];

void func_8038D470(void *arg0, void *arg1, void *arg2) {
    struct func_8038D470_Struct0 *a0 = arg0;
    struct func_8038D470_Struct1 *a1 = arg1;
    struct func_8038D470_Struct2 *a2 = arg2;
    u8 temp_v0;

    if (((a2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        a0->unk9A = 8;
    } else if ((f64) *(f32 *) ((u8 *) D_801BC3D8 + 0x3A8) > 20.0) {
        a1->unk2D8 = 0x13;
        a1->unk2D9 = 0;
    } else {
        a1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 2);
        temp_v0 = a0->unk92;
        a0->unk92 = temp_v0 + 1;
        a0->unk93 = temp_v0;
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}
