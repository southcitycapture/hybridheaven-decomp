#include "context.h"

extern void func_800207D0(u16, u8, u8);
extern f32 D_8012FFDC(f32, f32, f32, f32, f32, f32);
extern f64 D_80218F68;

typedef struct func_801FC830_Struct {
    s16 angle;
    u8 pad[6];
    s32 vol;
    u8 pad2[4];
} func_801FC830_Struct;

void func_801FC830(f32 arg0, f32 arg1, f32 arg2, f32 arg3, u16 arg4) {
    func_801FC830_Struct s;
    f32 fv0;
    f32 fv1;

    s.angle = func_8001EF38(D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38);
    s.vol = (s32)(func_8001EAD0((s16)(s.angle - func_8001EF38(arg0 - D_801BBCD8->unk2C->unk30, arg2 - D_801BBCD8->unk2C->unk38)) & 0x1FFF) * 63.0f + 64.0f);
    fv0 = D_8012FFDC(arg0, arg1, arg2, D_801BBCD8->unk2C->unk30, *(f32 *)((u8 *)D_801BBCD8->unk2C + 0x34), D_801BBCD8->unk2C->unk38);
    if (arg3 == 0.0f) {
        func_800207D0(arg4, s.vol, 0);
        return;
    }
    if (arg3 < 0.0f) {
        arg3 = -arg3;
    }
    fv1 = (f32)(D_80218F68 / (f64)arg3);
    if ((s32)(255.0f - fv1 * fv0) > 0) {
        func_800207D0(arg4, s.vol, (s32)(255.0f - fv1 * fv0));
    }
}
