#include "context.h"

typedef struct func_80361B50_Struct {
    u8 pad0[0x2DE];
    u8 unk2DE;
    u8 pad1[0x2EC - 0x2DF];
    f32 unk2EC;
} func_80361B50_Struct;

extern void func_803602D4(s32 arg0, s32 arg1);

void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2) {
    arg2->unk2DE = 0;
    arg2->unk2EC = 1.0f;
    func_803602D4(arg0, arg1);
}
