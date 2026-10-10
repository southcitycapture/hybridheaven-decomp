#include "context.h"

extern s32 func_801C0DE4(s32 a0, s32 a1, s32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);
extern f64 func_80034C24(u64 time);
extern struct func_801E3474_Global func_801DAAF0;
extern f64 D_801E5050;

typedef struct func_801E3288_Struct2C {
    u8 pad0[0x8];
    f32 unk8;
} func_801E3288_Struct2C;

typedef struct func_801E3288_Struct24 {
    u8 pad0[0x2C];
    func_801E3288_Struct2C *unk2C;
} func_801E3288_Struct24;

typedef struct func_801E3288_Struct8 {
    u8 pad0[0x24];
    func_801E3288_Struct24 *unk24;
} func_801E3288_Struct8;

typedef struct func_801E3288_Struct0 {
    u8 pad0[0x8];
    func_801E3288_Struct8 *unk8;
} func_801E3288_Struct0;

typedef struct func_801E3288_Global {
    u8 pad0[0x24];
    func_801E3288_Struct0 *unk24;
} func_801E3288_Global;

s32 func_801E3288(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 0, 0x40200000) != 0) {
        func_801C0EB0(4, 0);
        return 5;
    }
    ((func_801E3288_Global *) &func_801DAAF0)->unk24->unk8->unk24->unk2C->unk8 = (f32) ((((f32) (func_80034C24(func_801C0F18(4, 0)) / D_801E5050)) / 2.5f) * 13.0f) + -32.0f;
    return 4;
}
