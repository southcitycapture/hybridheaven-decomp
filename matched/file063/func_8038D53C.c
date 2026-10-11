#include "context.h"

struct func_8038D53C_Struct0 {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 unk9C[0xA0 - 0x9C];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D53C_Struct1 {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x38 - 0x4];
    s32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D53C_Struct2 {
    u8 pad0[0x30];
    s32 unk30;
};

void func_80229404(void *arg0);
void func_80229CE0(void *arg0, void *arg1, s32 arg2);
s32 func_8022B640(s32 arg0);

void func_8038D53C(struct func_8038D53C_Struct0 *arg0, struct func_8038D53C_Struct1 *arg1, struct func_8038D53C_Struct2 *arg2) {
    if ((arg1->unk2 < ((s16) arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xBU;
        arg1->unk2D9 = 1U;
        arg0->unkA0 = (u8) (arg0->unkA0 - 1);
        arg0->unk9A = (s16) (arg0->unk9A | 0x20);
    } else if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg0->unk9A = (s16) (arg0->unk9A | 2);
        arg1->unk2D8 = 2U;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8022B640(2) != 0) {
        arg1->unk2D8 = 0U;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else {
        arg1->unk2D8 = 1U;
        func_80229CE0(arg0, arg1, 1);
    }
    arg0->unkA1 = (u8) arg1->unk2D8;
    arg0->unkA2 = (u8) arg1->unk2D9;
}
