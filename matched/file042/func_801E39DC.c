#include "common.h"

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32 a0, s32 a1, s32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);
typedef struct func_801E3474_Struct2C {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3474_Struct2C;
typedef struct func_801E3474_Struct24 {
    u8 pad0[0x2C];
    func_801E3474_Struct2C *unk2C;
} func_801E3474_Struct24;
typedef struct func_801E3474_Struct8 {
    u8 pad0[0x24];
    func_801E3474_Struct24 *unk24;
} func_801E3474_Struct8;
typedef struct func_801E3474_Struct0 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E3474_Struct0;
typedef struct func_801E3474_Global {
    u8 pad0[0x24];
    func_801E3474_Struct0 *unk24;
} func_801E3474_Global;
extern struct func_801E3474_Global func_801DAAF0;
s32 func_801E39DC(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 1, 0x40200000) != 0) {
        func_801C0EB0(4, 1);
        return 4;
    }
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *) func_801DAAF0.unk24 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = (f32) ((((f32) (func_80034C24(func_801C0F18(4, 1)) / 1000000.0) / 2.5f) * 13.0f) + -32.0f);
    return 3;
}
