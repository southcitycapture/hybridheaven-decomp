#include "context.h"

struct func_801F9438_Struct_S5 {
    u8 pad0[0x4];
    f32 unk4;
};

struct func_801F9438_Struct_S4 {
    u8 pad0[0x2C];
    struct func_801F9438_Struct_S5 *unk2C;
};

struct func_801F9438_Struct_S3 {
    u8 pad0[0x24];
    struct func_801F9438_Struct_S4 *unk24;
};

struct func_801F9438_Struct_S2 {
    u8 pad0[0x8];
    struct func_801F9438_Struct_S3 *unk8;
};

s32 func_801F9438(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x043440D5) != 0) {
        ((struct func_801F9438_Struct_S2 *)func_801DAAF0.unk24->unk8)->unk8->unk24->unk2C->unk4 = 5120.0f;
        return 0xE;
    }
    return 0xD;
}
