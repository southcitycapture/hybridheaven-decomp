#include "context.h"
extern void func_802294BC();
extern void func_80229CE0();
extern s32 func_8022B640();
typedef struct func_8038D800_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038D800_StructA;
typedef struct func_8038D800_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 flag:1;
    u8 pad3C[0x29F];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D800_StructB;
typedef struct func_8038D800_StructC {
    u8 pad[0x30];
    u32 pre:11;
    u32 f:2;
} func_8038D800_StructC;

s32 func_8038D800(func_8038D800_StructA *arg0, func_8038D800_StructB *arg1, func_8038D800_StructC *arg2) {
    if (arg1->flag != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, (u8)func_8022B640(2));
    } else if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 3;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else if (arg2->f != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((f64)*(f32 *)(&D_801BC3D8 + 0x3A8) > 20.0) {
        arg1->unk2D8 = 0x13;
        arg1->unk2D9 = func_8022B640(5);
    } else if (func_8022B640(2) == 0) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, 1);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
