#include "context.h"

typedef struct func_8038D77C_StructA {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad34[0x6A];
    u16 unk9E;
} func_8038D77C_StructA;
typedef struct func_8038D77C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D77C_StructB;
typedef struct func_8038D77C_StructC {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D77C_StructC;
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D77C(func_8038D77C_StructC *arg0, func_8038D77C_StructB *arg1, func_8038D77C_StructA *arg2) {
    if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 20.0f) && (arg2->unk9E == 0)) {
        arg1->unk2D8 = 0x13;
        arg1->unk2D9 = 7;
    } else if (((arg2->unk30 << 11) >> 30) != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((arg1->unk38 >> 31) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((func_8022B640(2) == 0) && (arg1->unk2 < (arg1->unk0 / 5))) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 2);
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
