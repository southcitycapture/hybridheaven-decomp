#include "context.h"

struct func_8037488C_StructInner {
    u8 pad0[0x30];
    u16 unk30;
    u16 unk32;
    u8 pad1[0x1C];
    f32 unk50;
};

struct func_8037488C_StructBase {
    u8 pad0[0xE4];
    struct func_8037488C_StructInner *unkE4;
};

struct func_8037488C_StructOut {
    u16 unk0;
    u16 unk2;
    s16 unk4;
    s16 pad6;
    f32 unk8;
};

extern struct func_8037488C_StructBase D_801BCC24;
extern struct func_8037488C_StructOut D_8038CCB0;

void func_8037488C(s32 arg0) {
    struct func_8037488C_StructInner *inner;

    inner = D_801BCC24.unkE4;
    D_8038CCB0.unk0 = inner->unk30;
    D_8038CCB0.unk2 = inner->unk32;
    D_8038CCB0.unk4 = 0;
    D_8038CCB0.unk8 = inner->unk50;
}
