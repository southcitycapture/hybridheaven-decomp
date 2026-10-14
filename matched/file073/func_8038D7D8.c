#include "context.h"

struct func_8038D7D8_StructA {
    u8 pad0[0x98];
    s16 unk98;
    s16 unk9A;
    u8 pad1[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D7D8_StructB {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D7D8_StructC {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x396 - 0x34];
    u8 unk396;
};

s32 func_8022B640(s32);
void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
extern u8 D_801BC3D8[];

void func_8038D7D8(void *arg0, void *arg1, void *arg2) {
    struct func_8038D7D8_StructA *a0 = arg0;
    struct func_8038D7D8_StructB *a1 = arg1;
    struct func_8038D7D8_StructC *a2 = arg2;

    if (((u32) a1->unk38 >> 0x1F) != 0) {
        a1->unk2D8 = 2;
        a0->unk9A = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 25.0f) && (a2->unk396 == 0) && (a0->unk98 != 0)) {
        a1->unk2D8 = 0x13;
        a1->unk2D9 = 6;
    } else if (((u32) (a2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        a0->unk9A = 8;
    } else if (func_8022B640(2) == 0) {
        a1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        a1->unk2D8 = 1;
        a1->unk2D9 = 0x23;
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}
