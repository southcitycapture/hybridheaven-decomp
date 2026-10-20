#include "context.h"

extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

typedef struct func_8038D59C_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D59C_StructA;

typedef struct func_8038D59C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 unk30;
    u8 pad34[4];
    u32 unk38;
    u8 pad3C[0xA6 - 0x3C];
    u8 unkA6;
    u8 padA7[0x2D8 - 0xA7];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D59C_StructB;

void func_8038D59C(void *arg0, void *arg1, void *arg2) {
    func_8038D59C_StructA *a = arg0;
    func_8038D59C_StructB *b = arg1;
    func_8038D59C_StructB *c = arg2;

    if ((c->unk30 << 11 >> 30) != 0) {
        func_802294BC(b);
        a->unk9A = 8;
    } else if ((b->unk38 >> 31) != 0) {
        b->unk2D8 = 2;
        a->unk9A = 2;
        func_80229CE0(a, b, 1);
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 30.0f) && !(b->unkA6 & 4)) {
        b->unk2D8 = 11;
        b->unk2D9 = 31;
        a->unk9A |= 0x100;
    } else if ((func_8022B640(2) == 0) && (b->unk2 < b->unk0 / 5)) {
        b->unk2D8 = 0;
        func_80229CE0(a, b, 2);
    } else {
        b->unk2D8 = 1;
        func_80229CE0(a, b, func_8022B640(2) & 0xFF);
    }
    a->unkA1 = b->unk2D8;
    a->unkA2 = b->unk2D9;
}
