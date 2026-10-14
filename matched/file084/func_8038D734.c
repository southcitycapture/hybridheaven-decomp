#include "context.h"

struct func_8038D734_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D734_StructB {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0xA6 - 0x3C];
    u8 unkA6;
    u8 pad2[0x2D8 - 0xA7];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D734_StructC {
    u8 pad0[0x30];
    u32 unk30;
};

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D734(struct func_8038D734_StructA *arg0, struct func_8038D734_StructB *arg1, struct func_8038D734_StructC *arg2) {
    if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if ((*(f32 *) ((u8 *) &D_801BC3D8 + 0x3A8) > 30.0f) && !(arg1->unkA6 & 1)) {
        arg1->unk2D8 = 0xBU;
        arg1->unk2D9 = 0x1EU;
        arg0->unk9A = (s16) (arg0->unk9A | 0x100);
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2U;
        arg0->unk9A = (s16) (arg0->unk9A | 2);
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0U;
        } else {
            arg1->unk2D8 = 1U;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = (u8) arg1->unk2D8;
    arg0->unkA2 = (u8) arg1->unk2D9;
}
