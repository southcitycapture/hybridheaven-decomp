#include "common.h"

struct func_801FA29C_Inner {
    u8 pad0[0xB];
    u8 unkB;
};

struct func_801FA29C_Struct {
    u8 pad0[0x10];
    struct func_801FA29C_Struct *unk10;
    u8 pad14[0x22 - 0x14];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FA29C_Inner *unk30;
};

void func_801FA29C(struct func_801FA29C_Struct *arg0) {
    s16 temp_v0;

    if (arg0 != NULL) {
        do {
            temp_v0 = arg0->unk30->unkB - 0x11;
            if (temp_v0 < 0) {
                arg0->unk22 = 0;
            }
            arg0->unk30->unkB = (u8) temp_v0;
            arg0 = arg0->unk10;
        } while (arg0 != NULL);
    }
}
