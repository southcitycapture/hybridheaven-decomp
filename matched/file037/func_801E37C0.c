#include "context.h"
extern void *D_8038D8D0;
extern f64 func_80034C24(u64 arg0);
extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);

struct func_801E37C0_Struct1 {
    u8 pad0[4];
    struct func_801E37C0_Struct2 *unk4;
};
struct func_801E37C0_Struct2 {
    u8 pad0[0x30];
    struct func_801E37C0_Struct3 *unk30;
};
struct func_801E37C0_Struct3 {
    u8 pad0[4];
    f32 unk4;
};

extern f64 D_801E6D78;

s32 func_801E37C0(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x40F00000) != 0) {
        func_801C0EB0(3, 1);
        return 4;
    }
    temp_ret = func_801C0F18(3, 1);
    ((struct func_801E37C0_Struct1 *) D_8038D8D0)->unk4->unk30->unk4 = (f32) (((f32) (func_80034C24(temp_ret) / D_801E6D78) / 7.5f) * -20.0f + 40.0f);
    return 2;
}
