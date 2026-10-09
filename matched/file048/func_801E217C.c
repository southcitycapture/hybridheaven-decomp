#include "context.h"

extern f32 D_801E9CA8;
extern f32 D_801EA4F0;
extern f32 D_801EA4F4;
extern f32 D_801EA4F8;
extern f32 D_801EA4FC;

s32 func_801E217C(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64) 0x0246E2BC) != 0) {
        func_8038BE98(D_801EA4F0);
        func_8038BD50(D_801EA4F4, D_801EA4F8, 27.9f);
        D_8038BD88(0.5f, D_801EA4FC, 49.9f);
        (*(func_801E2054_StructV **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C->unk4 = D_801E9CA8;
        return 0xB;
    }
    return 0xA;
}
