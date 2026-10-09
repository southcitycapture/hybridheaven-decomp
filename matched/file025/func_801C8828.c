#include "context.h"

extern u8 D_801DA724[];

struct func_801C8828_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u8 pad9C[8];
    u16 unkA4;
    u8 padA6[2];
    u16 unkA8;
    u16 unkAA;
    f32 unkAC;
    f32 unkB0;
};

s32 func_801C8828(f32 arg0, f32 arg1, f32 arg2) {
    struct func_801C8828_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA724);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unkA4 = 0;
    temp_v0->unkA8 = 0;
    temp_v0->unkAA = 0;
    temp_v0->unkAC = 0.0f;
    temp_v0->unkB0 = 0.0f;
    return 1;
}
