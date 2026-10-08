#include "common.h"

typedef struct func_801E442C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E442C_Struct;

extern func_801E442C_Struct *func_801BF6B0(s32 arg0);
extern void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E442C(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 3) {
        func_801CC4D8(0, 0x0168003F, 0, 0, 5.0f);
        return 0xB;
    }
    return 0xA;
}
