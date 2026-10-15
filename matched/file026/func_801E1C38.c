#include "context.h"
s32 func_801C0B8C(u64 time);
extern struct func_801E7ECC_Struct1 D_801BBBF0;
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
s32 func_801C0B8C(u64 time);

extern f32 D_801FBCBC;
extern f32 D_801FBCC0;
extern f32 D_801FBCC4;
extern f32 D_801FBCC8;
extern f32 D_801FBCCC;
extern f32 D_801FBCD0;

struct func_801E1C38_Struct {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

s32 func_801E1C38(s32 arg0, s32 arg1) {
    struct func_801E1C38_Struct *temp_v1;

    if (func_801C0B8C(0x01312D00) != 0) {
        return 2;
    }
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk30 = temp_v1->unk30 + D_801FBCBC;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk34 = temp_v1->unk34 + D_801FBCC0;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk38 = temp_v1->unk38 + D_801FBCC4;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk3C = temp_v1->unk3C + D_801FBCC8;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk40 = temp_v1->unk40 + D_801FBCCC;
    temp_v1 = *(struct func_801E1C38_Struct **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    temp_v1->unk44 = temp_v1->unk44 + D_801FBCD0;
    return 1;
}
