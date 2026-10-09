#include "context.h"

struct func_801E3944_Struct1 {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801E3944_Struct2 {
    u8 pad0[0x30];
    struct func_801E3944_Struct1 *unk30;
};
struct func_801E3944_Struct3 {
    u8 pad0[0x8];
    struct func_801E3944_Struct2 *unk8;
};

extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
extern f64 func_80034C24(u64 arg0);
extern f64 D_801E6D80;

s32 func_801E3944(s32 arg0, s32 arg1) {
    f64 temp_f0;

    if (func_801C0DE4(3, 2, 0x41200000) != 0) {
        func_801C0EB0(3, 2);
        return 3;
    }
    temp_f0 = func_80034C24(func_801C0F18(3, 2));
    ((struct func_801E3944_Struct3 *) D_8038D8D0)->unk8->unk30->unk8 = (f32) ((((D_801E69B0 + 121.0f) - D_801E69B0) * ((f32) (temp_f0 / D_801E6D80) / 10.0f)) + D_801E69B0);
    return 2;
}
