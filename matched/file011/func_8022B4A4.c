#include "common.h"

typedef struct func_8022B4A4_StructArg {
    u8 pad0[0xC];
    s32 unkC;
} func_8022B4A4_StructArg;

typedef struct func_8022B4A4_StructBase {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8022B4A4_StructBase;

typedef struct func_8022B4A4_StructEntry {
    u8 pad0[0x30];
    u32 unk30;
} func_8022B4A4_StructEntry;

void func_80005700(void);
extern func_8022B4A4_StructBase D_801BBBF0;
extern func_8022B4A4_StructEntry D_801BC03C;
extern func_8022B4A4_StructEntry D_801BC3D8;

void func_8022B4A4(func_8022B4A4_StructArg *arg0, s32 arg1) {
    func_8022B4A4_StructEntry *var_v0;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    if ((((var_v0->unk30 * 2) >> 0x1E) != 0) || (D_801BBBF0.unk1031 == 0xE)) {
        func_80005700();
    }
}
