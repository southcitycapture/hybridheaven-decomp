#include "common.h"

typedef struct func_801E2054_StructC {
    u8 pad0[4];
    f32 unk4;
} func_801E2054_StructC;

typedef struct func_801E2054_StructB {
    u8 pad0[0x2C];
    func_801E2054_StructC *unk2C;
} func_801E2054_StructB;

typedef struct func_801E2054_StructA {
    u8 pad0[0x24];
    func_801E2054_StructB *unk24;
} func_801E2054_StructA;

typedef struct func_801E2054_StructV {
    u8 pad0[8];
    func_801E2054_StructA *unk8;
} func_801E2054_StructV;

extern void D_8038C158(void);
extern f32 D_801E9CA8;
extern u8 func_801DAAF0[];

s32 func_801E2054(s32 arg0, s32 arg1) {
    func_801E2054_StructV *v;

    if (func_801C0B8C(0x019F09FE) != 0) {
        D_8038C158();
        v = *(func_801E2054_StructV **)(func_801DAAF0 + 0x24);
        D_801E9CA8 = v->unk8->unk24->unk2C->unk4;
        v = *(func_801E2054_StructV **)(func_801DAAF0 + 0x24);
        v->unk8->unk24->unk2C->unk4 = 5120.0f;
        return 9;
    }
    return 8;
}
