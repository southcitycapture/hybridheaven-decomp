#include "common.h"

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801CE2D0(s32 arg0, s32 arg1);
extern u8 func_801DAAF0[];
struct func_801E4744_E {
    u8 pad0[0xC];
    f32 unkC;
};
struct func_801E4744_D {
    u8 pad0[0x2C];
    struct func_801E4744_E *unk2C;
};
struct func_801E4744_C {
    u8 pad0[0x24];
    struct func_801E4744_D *unk24;
};
struct func_801E4744_B {
    u8 pad0[0x8];
    struct func_801E4744_C *unk8;
};
struct func_801E4744_A {
    u8 pad0[0x24];
    struct func_801E4744_B *unk24;
};
extern void func_8038D28C();
s32 func_801E4744(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(4, 0, 0x40000000) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x0348005E, 0, 0, 8.0f);
        return 4;
    }
    temp_ret = func_801C0F18(4, 0);
    ((struct func_801E4744_A *)func_801DAAF0)->unk24->unk8->unk24->unk2C->unkC =
        (f32) (((f32) (func_80034C24(temp_ret) / 1000000.0) * 0.5f * 58.0f) + -60.0f);
    if ((func_801CE2D0(0x01680040, 9) != 0) || (func_801CE2D0(0x01680040, 0x12) != 0)) {
        func_8038D28C(0x677);
    }
    return 3;
}
