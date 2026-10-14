#include "context.h"

typedef struct func_8038D664_Struct0 {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
} func_8038D664_Struct0;

typedef struct func_8038D664_Struct1 {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D664_Struct1;

typedef struct func_8038D664_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
} func_8038D664_Struct2;

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640();

s32 func_8038D664(func_8038D664_Struct0 *arg0, func_8038D664_Struct1 *arg1, func_8038D664_Struct2 *arg2) {
    if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = 8;
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (*(f32 *) (D_801BC3D8 + 0x3A8) > 25.0f) {
        arg1->unk2D8 = 0xC;
        arg1->unk2D9 = 0x14;
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 1;
        } else {
            arg1->unk2D8 = 0;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
