#include "context.h"
extern s32 B_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);

typedef struct func_80242F80_StructInner {
    u8 pad0[0xC];
    f32 unkC;
} func_80242F80_StructInner;

typedef struct func_80242F80_StructOuter {
    u8 pad0[0x2C];
    func_80242F80_StructInner *unk2C;
} func_80242F80_StructOuter;

extern f32 D_8024EDDC;
extern f32 D_8024EDE0;
void func_80243054(void *arg0, void *arg1);
void func_802431F8(s32 arg0, s32 arg1);

void func_80242F80(void *arg0, s32 arg1) {
    f32 t;

    t = ((func_80242F80_StructOuter *)D_801BBCD0)->unk2C->unkC;
    B_801C3DC8((s32)arg0, D_8024EDDC, 320.0f, t + 130.0f, D_8024EDDC, 270.0f, t, D_8024EDE0, 35.0f);
    if (func_801C3D20(-588.0f, 125.0f, 0x41980000) != 0) {
        func_800058DC(arg0, func_80243054);
    }
    if (func_80150584() != 0) {
        func_801BF1B0(1);
        func_800058DC(arg0, func_802431F8);
    }
}
