#include "context.h"

extern u8 D_802408A0;

struct func_8023ADBC_Sub {
    u16 unk0;
    u16 unk2;
    u16 unk4;
};

struct func_8023ADBC_Struct {
    u8 pad0[0x94];
    struct func_8023ADBC_Sub *unk94;
};

s32 func_8023ADBC(void *arg0) {
    struct func_8023ADBC_Sub *v0;
    s32 v1 = 0;
    s32 a0;
    s32 a1;

    v0 = ((struct func_8023ADBC_Struct *)arg0)->unk94;
    a1 = v0->unk4;
    if (a1 & 8) {
        v1 = 1;
    }
    if (a1 & 1) {
        v1 = 2;
    }
    a0 = a1 & 2;
    if (a1 & 4) {
        v1 = 3;
    }
    if (a0) {
        v1 = 4;
    }
    if (D_802408A0 == 4 && a0 && (v0->unk2 & 0x2000)) {
        v1 = 5;
    }
    return v1;
}
