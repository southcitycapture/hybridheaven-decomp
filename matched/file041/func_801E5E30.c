#include "context.h"
f64 func_80034C24(u64 arg);
s32 func_801C0DE4(s32 arg0, s32 arg1, f32 arg2);
void func_801C0EB0(s32 arg0, s32 arg1);
u64 func_801C0F18(s32 arg0, s32 arg1);
extern u8 func_801DAAF0[];

struct func_801E5E30_Out {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_801E5E30_Ext {
    u8 pad0[0x2C];
    struct func_801E5E30_Out *unk2C;
};

struct func_801E5E30_Obj2 {
    u8 pad0[0x24];
    struct func_801E5E30_Ext *unk24;
};

struct func_801E5E30_Obj {
    u8 pad0[0x8];
    struct func_801E5E30_Obj2 *unk8;
};

extern f64 D_801E8910;
extern f32 D_801E8918;

s32 func_801E5E30(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(4, 0, 5.0f) != 0) {
        func_801C0EB0(4, 0);
        return 0xF;
    }
    temp_ret = func_801C0F18(4, 0);
    (*(struct func_801E5E30_Obj **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C->unk8 = ((((f32) (func_80034C24(temp_ret) / D_801E8910)) / 5.0f) * 178.0f) + D_801E8918;
    return 0xE;
}
