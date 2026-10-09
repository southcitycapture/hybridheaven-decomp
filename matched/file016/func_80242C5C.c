#include "context.h"

typedef struct func_80242C5C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
} func_80242C5C_Struct;

extern u8 func_802429F8[];
extern f32 D_8024EDBC;
extern f32 D_8024EDC0;
extern f32 D_8024EDC4;
extern f32 D_8024EDC8;

void func_80242C5C(func_80242C5C_Struct *arg0, void *arg1) {
    s32 temp_v1;

    func_801C3DC8((s32) arg0, 0xC32D0000, 0xC1933333, 0x42BC0000, D_8024EDBC, D_8024EDC0, D_8024EDC4, D_8024EDC8, 35.0f);
    temp_v1 = (arg0->unk3C < 0x4B) ^ 1;
    arg0->unk3C = arg0->unk3C + 1;
    if (temp_v1) {
        func_800058DC(arg0, func_802429F8);
    }
}
