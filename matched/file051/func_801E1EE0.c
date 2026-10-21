#include "context.h"

extern f32 D_801E7828;
extern f32 D_801E782C;
extern f32 D_801E7830;
extern f32 D_801E7834;
extern f32 D_801E7838;
extern f32 D_801E7950[];
extern f32 D_801E7960[];

s32 func_801E1EE0(s32 arg0, s32 arg1) {
    f32 k = D_801E7828;
    if (D_8038C17C(0.0f, D_801E782C, D_801E7950[0], D_801E7950[1], D_801E7950[2], 0.0f, D_801E7830, D_801E7834, D_801E7960[0], D_801E7960[1], D_801E7960[2], 0.0f, 13.0f, D_801E7838, k, k) != 0) {
        D_801E7950[0] = ((f32 *)D_801BBCD8->unk2C)[0xC];
        D_801E7950[1] = ((f32 *)D_801BBCD8->unk2C)[0xD];
        D_801E7950[2] = ((f32 *)D_801BBCD8->unk2C)[0xE];
        D_801E7960[0] = ((f32 *)D_801BBCD8->unk2C)[0xF];
        D_801E7960[1] = ((f32 *)D_801BBCD8->unk2C)[0x10];
        D_801E7960[2] = ((f32 *)D_801BBCD8->unk2C)[0x11];
        return 4;
    }
    func_801E1C28();
    return 3;
}
