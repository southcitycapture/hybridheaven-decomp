#include "common.h"

struct func_801E3500_Obj {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E3500_Mid {
    u8 pad[0x30];
    struct func_801E3500_Obj *unk30;
};

extern f64 func_80034C24(u64 time);
extern s32 func_801C0DE4(s32 a0, s32 a1, s32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);

extern f64 D_801E8848;
extern f32 D_801E8850;
extern struct func_801E3500_Mid **D_8038D8D0;

s32 func_801E3500(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 0, 0x40A00000) != 0) {
        func_801C0EB0(3, 0);
        return 8;
    }
    temp_ret = func_801C0F18(3, 0);
    (*D_8038D8D0)->unk30->unk8 = (f32) (((f32) (func_80034C24(temp_ret) / D_801E8848) / 5.0f) * 178.0f) + D_801E8850;
    return 7;
}
