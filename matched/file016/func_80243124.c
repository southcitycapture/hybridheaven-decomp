#include "context.h"

extern f32 D_8024EDF4;
extern f32 D_8024EDF8;
void func_802431F8(s32 arg0, s32 arg1);

typedef struct func_80243124_StructInner {
    u8 pad[0xC];
    f32 y;
} func_80243124_StructInner;

typedef struct func_80243124_StructOuter {
    u8 pad[0x2C];
    func_80243124_StructInner *unk2C;
} func_80243124_StructOuter;

void func_80243124(s32 arg0, s32 arg1) {
    f32 y;

    y = ((func_80243124_StructOuter *)D_801BBCD0)->unk2C->y;
    B_801C3DC8(arg0, D_8024EDF4, 320.0f, y + 130.0f, D_8024EDF4, 270.0f, y, D_8024EDF8, 35.0f);
    if (func_801C3D20(342.0f, 125.0f, 0x41980000) != 0) {
        func_800058DC((void *)arg0, func_80243054);
    }
    if (func_80150584() != 0) {
        func_801BF1B0(1);
        func_800058DC((void *)arg0, func_802431F8);
    }
}
