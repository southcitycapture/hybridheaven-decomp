#include "context.h"

struct func_801FD168_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad1[0x90 - 0x4C];
    u8 unk90;
    u8 unk91;
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    s16 unkA0;
    s16 unkA2;
    s16 unkA4;
    s16 unkA6;
    s32 unkA8;
    u8 unkAC;
};

struct func_801FD168_Src {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern s32 D_801BBC2C;
extern struct func_801FD168_Src D_802172A4;
void *func_8012C4D0(s32, struct func_801FD168_Src, s32);

void *func_801FD168(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, s16 arg7, s16 arg8, u8 arg9, u8 arg10, s32 arg11) {
    struct func_801FD168_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802172A4, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = 2;
        temp_v0->unk91 = arg9;
        temp_v0->unk94 = arg0;
        temp_v0->unk98 = arg1;
        temp_v0->unk9C = arg2;
        temp_v0->unk40 = arg3;
        temp_v0->unk44 = arg4;
        temp_v0->unk48 = arg5;
        temp_v0->unkA0 = arg6;
        temp_v0->unkA2 = arg7;
        temp_v0->unkA4 = arg8;
        temp_v0->unk3C = 0;
        temp_v0->unk92 = 0;
        temp_v0->unkA6 = 0;
        temp_v0->unkAC = arg10;
        temp_v0->unkA8 = arg11;
        return temp_v0;
    }
    return NULL;
}
