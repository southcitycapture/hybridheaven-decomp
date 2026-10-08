#include "context.h"

extern s32 func_801D7634(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern f32 D_801E7934;

typedef struct func_801E6314_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6314_Struct;

typedef struct func_801E6314_Vec {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E6314_Vec;

s32 func_801E6314(s32 arg0, s32 arg1) {
    u8 *temp_t7;
    u8 *temp_t8;
    u8 *temp_t9;
    u8 *temp_t0;
    u8 *temp_t1;
    u8 *temp_t2;
    func_801E6314_Vec *temp_v0;

    if (((func_801E6314_Struct *)func_801BF6B0(0))->unkC >= 0x17) {
        return 0x11;
    }
    if ((func_801D7634(0x01B80047, 6) != 0) || (func_801D7634(0x01B80047, 0x24) != 0)) {
        temp_v0 = *(func_801E6314_Vec **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)func_801DAAF0[9] + 8) + 8) + 8) + 8) + 0x24) + 0x2C);
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x654, D_801E7934, 1.0f);
    }
    return 0x10;
}
