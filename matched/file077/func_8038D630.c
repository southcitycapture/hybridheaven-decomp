#include "context.h"

struct func_8038D630_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D630_StructB {
    u8 pad0[0x38];
    u32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D630_StructC {
    u8 pad0[0x30];
    u32 pad30_0 : 11;
    u32 f : 2;
    u32 pad30_1 : 19;
};
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D630(void *a0, void *a1, void *a2) {
    struct func_8038D630_StructA *arg0 = a0;
    struct func_8038D630_StructB *arg1 = a1;
    struct func_8038D630_StructC *arg2 = a2;
    s32 v;

    if (arg2->f != 0) {
        func_802294BC(arg1);
        arg0->unk9A |= 8;
    } else if ((arg1->unk38 >> 31) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (*(f32 *)(D_801BC3D8 + 0x3A8) > 30.0f) {
        arg1->unk2D8 = 0x13;
        arg1->unk2D9 = 1;
    } else {
        v = func_8022B640(5);
        if (v == 0 || v == 1 || v == 2) {
            arg1->unk2D8 = 0;
            func_80229CE0(arg0, arg1, 1);
        } else {
            arg1->unk2D8 = 1;
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
