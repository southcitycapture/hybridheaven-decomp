#include "common.h"

typedef struct func_801E390C_Struct3 {
    u8 pad0[8];
    f32 unk8;
} func_801E390C_Struct3;
typedef struct func_801E390C_Struct2 {
    u8 pad0[0x30];
    func_801E390C_Struct3 *unk30;
} func_801E390C_Struct2;
typedef struct func_801E390C_Struct1 {
    func_801E390C_Struct2 *unk0;
} func_801E390C_Struct1;
extern struct func_801E390C_Struct1 *D_8038D8D0;
extern f64 func_80034C24();
extern u64 func_801C0B2C();
extern s32 func_801C0B8C(u64);
typedef struct func_801E3CBC_StructC {
    u8 pad0[4];
    f32 unk4;
} func_801E3CBC_StructC;
typedef struct func_801E3CBC_StructB {
    u8 pad0[0x30];
    func_801E3CBC_StructC *unk30;
} func_801E3CBC_StructB;
typedef struct func_801E3CBC_StructA {
    u8 pad0[8];
    func_801E3CBC_StructB *unk8;
} func_801E3CBC_StructA;
s32 func_801E3CBC(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f32 two;

    two = 2.0f;
    if (func_801C0B8C(0x018CBA80) != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x016E3600) != 0) {
        temp_ret = func_801C0B2C();
        ((func_801E3CBC_StructA *) D_8038D8D0)->unk8->unk30->unk4 = (((f32) (func_80034C24(temp_ret) / 1000000.0 - 24.0)) / two) * 2.5f + -2.5f;
    }
    return 9;
}
