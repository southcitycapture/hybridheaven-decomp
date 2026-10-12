#include "context.h"
extern f32 D_801E8854;
extern f32 D_801E8858;
extern f32 D_801E885C;

struct func_801E3660_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E3660_Mid {
    u8 pad[0x30];
    struct func_801E3660_Obj *unk30;
};

struct func_801E3660_Top {
    u8 pad[4];
    struct func_801E3660_Mid *unk4;
};

s32 func_801E3660(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE4E1C0) != 0) {
        ((struct func_801E3660_Top *) D_8038D8D0)->unk4->unk30->unk4 = D_801E8854;
        ((struct func_801E3660_Top *) D_8038D8D0)->unk4->unk30->unk8 = D_801E8858;
        ((struct func_801E3660_Top *) D_8038D8D0)->unk4->unk30->unkC = D_801E885C;
        ((struct func_801E3660_Top *) D_8038D8D0)->unk4->unk30->unk12 = 0x1000;
        return 6;
    }
    return 5;
}
