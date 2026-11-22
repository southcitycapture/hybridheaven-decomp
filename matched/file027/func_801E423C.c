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
struct func_801E423C_Leaf {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_801E423C_Mid {
    u8 pad0[0x30];
    struct func_801E423C_Leaf *unk30;
};
struct func_801E423C_Top {
    u8 pad0[0x14];
    struct func_801E423C_Mid *unk14;
};
s32 func_801E423C(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0B8C(0x14FB180) != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0xC65D40) != 0) {
        temp_ret = func_801C0B2C();
        ((struct func_801E423C_Top *)D_8038D8D0)->unk14->unk30->unk12 =
            (s16)(s32)(((f32)(((f64)func_80034C24(temp_ret) / 1000000.0) - 13.0) / 9.0f) * 180.0f * 2048.0f / 90.0f);
    }
    return 9;
}
