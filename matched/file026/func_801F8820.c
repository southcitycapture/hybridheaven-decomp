#include "context.h"

extern f32 D_801FB9CC;

s32 func_801F8820(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04ECE275) != 0) {
        func_801CC470(0, 0x02A80012, 0x17, 0x1000, 1.0f);
        func_801CC4D8(0, 0x02A80014, 0, 0, 150.0f);
        D_801FB9CC = func_801DAAF0.unk24->unk8->unk24->unk2C->unk8;
        return 0x18;
    }
    return 0x17;
}
