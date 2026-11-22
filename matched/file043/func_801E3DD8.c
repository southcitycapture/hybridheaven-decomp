#include "common.h"

struct func_801E3CCC_Struct1 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E3CCC_Struct2 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E3CCC_Struct1 *unk30;
};
struct func_801E3CCC_Struct3 {
    u8 pad0[4];
    struct func_801E3CCC_Struct2 *unk4;
};
extern struct func_801E3CCC_Struct3 *D_8038D8D0;
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
s32 func_801E3DD8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x3FA00004) != 0) {
        func_801C0EB0(3, 1);
        return 4;
    }
    temp_ret = func_801C0F18(3, 1);
    D_8038D8D0->unk4->unk30->unk4 = (f32) ((((f32) (func_80034C24(temp_ret) / 1000000.0) / 1.25000048f) * -93.0f) + 198.0f);
    return 3;
}
