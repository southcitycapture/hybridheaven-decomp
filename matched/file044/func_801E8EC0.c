#include "context.h"

typedef struct func_801E8EC0_StructF {
    u8 pad0[0x12];
    s16 unk12;
} func_801E8EC0_StructF;

typedef struct func_801E8EC0_StructE {
    u8 pad0[0x2C];
    func_801E8EC0_StructF *unk2C;
} func_801E8EC0_StructE;

typedef struct func_801E8EC0_StructD {
    u8 pad0[0x24];
    func_801E8EC0_StructE *unk24;
} func_801E8EC0_StructD;

typedef struct func_801E8EC0_StructC {
    u8 pad0[0x8];
    func_801E8EC0_StructD *unk8;
} func_801E8EC0_StructC;

typedef struct func_801E8EC0_StructB {
    u8 pad0[0x8];
    func_801E8EC0_StructC *unk8;
} func_801E8EC0_StructB;

typedef struct func_801E8EC0_StructA {
    u8 pad0[0x24];
    func_801E8EC0_StructB *unk24;
} func_801E8EC0_StructA;

s32 func_801E8EC0(s32 arg0, s32 arg1) {
    func_801E8EC0_StructA *a;

    if (func_801C0B8C(0x1E3660) != 0) {
        a = (func_801E8EC0_StructA *)func_801DAAF0;
        a->unk24->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801C1000(4, 1);
        func_801C8794(10.0f, 0x19);
        return 0x2D;
    }
    return 0x2C;
}
