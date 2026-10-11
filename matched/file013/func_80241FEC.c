#include "context.h"

extern void func_80242064();

struct func_80241FEC_Struct0 {
    u8 pad0[0x94];
    s16 unk94;
    u8 pad1[2];
    f32 unk98;
};

struct func_80241FEC_Struct2 {
    u8 pad0[0x4D];
    s8 unk4D;
};

struct func_80241FEC_Struct1 {
    u8 pad0[0x30];
    struct func_80241FEC_Struct2 *unk30;
};

struct func_80241FEC_Struct3 {
    u8 pad0[4];
    struct func_80241FEC_Struct1 *unk4;
};

void func_80241FEC(struct func_80241FEC_Struct0 *arg0, struct func_80241FEC_Struct3 *arg1) {
    s16 temp_v0;

    arg0->unk98 = arg0->unk98 - 9.0f;
    arg1->unk4->unk30->unk4D = (s32) arg0->unk98 % 32;
    temp_v0 = arg0->unk94;
    arg0->unk94 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC(arg0, func_80242064);
    }
}
