#include "common.h"

typedef struct func_8038D918_StructA {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0x9A - 0x93];
    s16 unk9A;
    u8 pad9C[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
} func_8038D918_StructA;

typedef struct func_8038D918_StructB {
    u8 pad0[0x30];
    u32 unk30;
} func_8038D918_StructB;

typedef struct func_8038D918_StructC {
    u8 pad0[0x38];
    u32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D918_StructC;

extern s32 func_8012C6B4(s32);
extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D918(func_8038D918_StructA *arg0, func_8038D918_StructC *arg1, func_8038D918_StructB *arg2) {
    if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = (s16) (arg0->unk9A | 2);
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8012C6B4(3) == 0) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 0);
        arg0->unk92 = 0;
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        arg0->unk92 = 1;
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
