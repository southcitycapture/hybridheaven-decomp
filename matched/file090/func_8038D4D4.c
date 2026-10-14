#include "context.h"

struct func_8038D4D4_Struct0 {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D4D4_Struct1 {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0x29C];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D4D4_Struct2 {
    u8 pad0[0x30];
    s32 unk30;
};

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D4D4(struct func_8038D4D4_Struct0 *arg0, struct func_8038D4D4_Struct1 *arg1, struct func_8038D4D4_Struct2 *arg2) {
    if ((f64) *(f32 *) &D_801BC3D8[0x3A8] > 15.0) {
        arg1->unk2D8 = 0x13U;
        arg1->unk2D9 = 7U;
    } else if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2U;
        arg0->unk9A = (s16) (arg0->unk9A | 2);
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8022B640(0xA) < 7) {
        arg1->unk2D8 = 0U;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1->unk2D8 = 1U;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = (u8) arg1->unk2D8;
    arg0->unkA2 = (u8) arg1->unk2D9;
}
