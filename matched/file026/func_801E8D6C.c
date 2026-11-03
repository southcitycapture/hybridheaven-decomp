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
typedef struct {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801E2D94_Struct3;
typedef struct {
    u8 pad[0x2C];
    func_801E2D94_Struct3 *unk2C;
} func_801E2D94_Struct2;
typedef struct {
    u8 pad[0xE8];
    func_801E2D94_Struct2 *unkE8;
} func_801E2D94_Struct1;
#define S (*(func_801E2D94_Struct1 *)&D_801BBBF0)
extern f64 func_80034C24();
u64 func_801C0B2C();
s32 func_801C0B8C(u64 time);

extern f64 D_801FC540;
extern f64 D_801FC548;
extern f64 D_801FC550;
extern f64 D_801FC558;
extern f64 D_801FC560;
extern f64 D_801FC568;
extern f64 D_801FC570;
extern f64 D_801FC578;

s32 func_801E8D6C(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    f64 z;
    u64 t;

    if (func_801C0B8C(0x05D616FA) != 0) {
        return 0x16;
    }
    t = func_801C0B2C();
    a = (f64)(f32)(func_80034C24(t) / D_801FC540 - D_801FC548) / 2;
    S.unkE8->unk2C->unk30 = a * D_801FC550 + D_801FC558;
    S.unkE8->unk2C->unk34 = a * 1 + 10;
    z = 1.0 - 1.0;
    b = a * z;
    S.unkE8->unk2C->unk38 = a * D_801FC560 + D_801FC568;
    S.unkE8->unk2C->unk3C = b + D_801FC570;
    S.unkE8->unk2C->unk40 = b + 15.5;
    S.unkE8->unk2C->unk44 = b + D_801FC578;
    return 0x15;
}
