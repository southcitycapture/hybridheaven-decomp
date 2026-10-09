#include "context.h"

extern void *func_80005670(s32, void *);
extern s32 D_8038D8CC;
extern u8 D_801DA704[];

typedef struct func_801C86FC_Struct {
    u8 pad[0x90];
    s16 unk90;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    s16 unkA8;
    u16 unkAA;
} func_801C86FC_Struct;

s32 func_801C86FC(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6) {
    struct func_801C86FC_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA704);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = arg3;
    temp_v0->unkA0 = arg4;
    temp_v0->unkA4 = arg5;
    temp_v0->unkA8 = 0;
    temp_v0->unkAA = arg6;
    return 1;
}
