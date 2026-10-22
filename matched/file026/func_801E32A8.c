#include "context.h"
extern f32 D_801FBF64, D_801FBF68, D_801FBF6C, D_801FBF70, D_801FBF74;
extern s32 D_801CC470(s32, s32, s32, s32, f32);

s32 func_801E32A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x090E1D7F) != 0) {
        func_8038BE98(40.0f);
        func_8038BD50(D_801FBF64, D_801FBF68, 19.9f);
        D_8038BD88(D_801FBF6C, D_801FBF70, -1.6f);
        D_801CC470(0, 0x01B80014, 0, 0x1100, 1.0f);
        N->unk8->unk24->unk2C->unk4 = D_801FBF74;
        N->unk8->unk24->unk2C->unk8 = 0.0f;
        N->unk8->unk24->unk2C->unkC = 8.0f;
        N->unk8->unk24->unk2C->unk12 = 0;
        D_8038C158();
        return 0xD;
    }
    return 0xC;
}
