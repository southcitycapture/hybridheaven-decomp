#include "context.h"

struct func_8038D630_Struct0 {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D630_Struct1 {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    u32 unk30;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D630_Struct2 {
    u8 pad0[0x9E];
    u16 unk9E;
    u8 pad9E[0x396 - 0xA0];
    u8 unk396;
};

s32 func_8022B640(s32, void *);                     /* extern */

void func_8038D630(struct func_8038D630_Struct0 *arg0, struct func_8038D630_Struct1 *arg1, struct func_8038D630_Struct2 *arg2) {
    s32 temp_v0;

    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0) && (((arg1->unk30 << 0x1B) >> 0x1E) == 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 4;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else {
        arg1->unk2D8 = 0x13;
        temp_v0 = func_8022B640(5, arg1);
        if (temp_v0 == 0) {
            goto case0;
        }
        if (temp_v0 == 1) {
            goto case1;
        }
        arg1->unk2D9 = 0;
        goto done;
case0:
        if (arg2->unk396 == 0) {
            arg1->unk2D9 = 1;
        } else {
            arg1->unk2D9 = 0;
        }
        goto done;
case1:
        if (arg2->unk9E == 0) {
            arg1->unk2D9 = 2;
        } else {
            arg1->unk2D9 = 0;
        }
done:;
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
