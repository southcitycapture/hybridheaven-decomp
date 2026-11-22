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
struct func_801E3F24_StructB {
    u8 pad[4];
    f32 unk4;
};
struct func_801E3F24_StructA {
    u8 pad[0x30];
    struct func_801E3F24_StructB *unk30;
};
struct func_801E3F24_StructC {
    u8 pad[0xC];
    struct func_801E3F24_StructA *unkC;
};
s32 func_801E3F24(s32 arg0, s32 arg1) {
    u64 temp;

    if (func_801C0B8C(0x14FB180) != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900) != 0) {
        temp = func_801C0B2C();
        ((struct func_801E3F24_StructC *) D_8038D8D0)->unkC->unk30->unk4 =
            ((f32) ((func_80034C24(temp) / 1000000.0) - 4.0) / 18.0f) * 8.0f;
    }
    return 9;
}
