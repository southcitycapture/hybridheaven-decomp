#include "context.h"

typedef struct func_801C4DD4_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    s16 unkA0;
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
} func_801C4DD4_Struct;

extern void *func_80005670(void *, void *);
extern u8 D_801DA4C0[];
extern void *D_8038D8CC;

s32 func_801C4DD4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    func_801C4DD4_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA4C0);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg5;
    temp_v0->unk94 = arg6;
    temp_v0->unk98 = arg7;
    temp_v0->unk9C = arg8;
    temp_v0->unkA0 = arg0;
    temp_v0->unkA4 = arg1;
    temp_v0->unkA8 = arg2;
    temp_v0->unkAC = arg3;
    temp_v0->unkB0 = arg4;
    return 1;
}
