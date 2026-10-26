#include "common.h"
struct func_801E7ECC_Struct3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};
struct func_801E7ECC_Struct2 {
    u8 pad[0x2C];
    struct func_801E7ECC_Struct3 *unk2C;
};
struct func_801E7ECC_Struct1 {
    u8 pad[0xE8];
    struct func_801E7ECC_Struct2 *unkE8;
};
extern struct func_801E7ECC_Struct1 D_801BBBF0;
extern f64 func_80034C24();
u64 func_801C0B2C();
s32 func_801C0B8C(u64 time);
struct func_801E1C38_Struct {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};


extern f64 D_801FC488__load_func_801E8A7C;
extern f64 D_801FC490__load_func_801E8A7C;
extern f64 D_801FC498__load_func_801E8A7C;
extern f64 D_801FC4A0__load_func_801E8A7C;
extern f64 D_801FC4A8__load_func_801E8A7C;
extern f64 D_801FC4B0__load_func_801E8A7C;
extern f64 D_801FC4B8__load_func_801E8A7C;
extern f64 D_801FC4C0__load_func_801E8A7C;
extern f64 D_801FC4C8__load_func_801E8A7C;
extern f64 D_801FC4D0__load_func_801E8A7C;
extern f64 D_801FC4D8__load_func_801E8A7C;

s32 func_801E8A7C(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    u64 r;
    f64 h = 2.0;

    if (func_801C0B8C(0x05990DFA) != 0) {
        return 0x14;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC488__load_func_801E8A7C) - D_801FC490__load_func_801E8A7C) / h;
    D_801BBBF0.unkE8->unk2C->unk30 = (f32)((t * D_801FC498__load_func_801E8A7C) + D_801FC4A0__load_func_801E8A7C);
    D_801BBBF0.unkE8->unk2C->unk34 = (f32)((t * D_801FC4A8__load_func_801E8A7C) + D_801FC4B0__load_func_801E8A7C);
    z = 1.0 - 1.0;
    z = t * z;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32)((t * D_801FC4B8__load_func_801E8A7C) + D_801FC4C0__load_func_801E8A7C);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32)(z + D_801FC4C8__load_func_801E8A7C);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32)(z + D_801FC4D0__load_func_801E8A7C);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32)(z + D_801FC4D8__load_func_801E8A7C);
    return 0x13;
}
