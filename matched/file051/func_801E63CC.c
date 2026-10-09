#include "context.h"

typedef struct func_801E63CC_Struct {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E63CC_Struct;

extern s32 func_801D7634(s32 arg0, s32 arg1);
extern void func_8038D33C(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5);
extern f32 D_801E7938;

s32 func_801E63CC(s32 arg0, s32 arg1) {
    func_801E63CC_Struct *temp_v0;
    u8 *temp_t6;
    u8 *temp_t7;
    u8 *temp_t8;
    u8 *temp_t9;
    u8 *temp_t0;
    u8 *temp_t1;

    func_801C1000(4, 3);
    if ((func_801D7634(0x01B80047, 6) != 0) || (func_801D7634(0x01B80047, 0x24) != 0)) {
        temp_v0 = (func_801E63CC_Struct *)*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 8) + 8) + 8) + 8) + 0x24) + 0x2C);
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x654, D_801E7938, 1.0f);
    }
    return 0x12;
}
