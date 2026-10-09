#include "context.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801D1AF8(s32 a);
extern f32 D_801FC888;
extern f32 D_801FC88C;

s32 func_801ECBA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05822A9A) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FC888;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC88C;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1A6D;
        func_801CC470(0, 0x02A80011, 0, 0x1000, 1.0f);
        return 0x11;
    }
    if (func_801C0B8C(0x0563A61A) != 0) {
        func_801D1AF8(1);
    }
    return 0x10;
}
