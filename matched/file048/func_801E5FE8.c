#include "context.h"

typedef struct func_801E5FE8_StructC {
    u8 pad0[0xC];
    f32 unkC;
} func_801E5FE8_StructC;

typedef struct func_801E5FE8_StructB {
    u8 pad0[0x30];
    func_801E5FE8_StructC *unk30;
} func_801E5FE8_StructB;

typedef struct func_801E5FE8_StructA {
    u8 pad0[0x24];
    func_801E5FE8_StructB *unk24;
} func_801E5FE8_StructA;

extern f32 D_801EA5F8;

s32 func_801E5FE8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016B28BF) != 0) {
        func_801E5CE4();
        func_801C1000(3, 6);
        D_801EA5F8 = ((func_801E5FE8_StructA *) D_8038D8D0)->unk24->unk30->unkC;
        return 4;
    }
    func_801E5C00();
    return 3;
}
