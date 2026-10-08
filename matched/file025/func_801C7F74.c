#include "common.h"

typedef struct func_801C7F74_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    s8 unkB0;
    u8 padB1[2];
    s8 unkB3;
} func_801C7F74_Struct;

extern void *func_80005670(s32, void *);
extern void func_8038C4D8(s32, s32, s32 *);
extern s32 D_801DA698;
extern u8 D_801DA69C[];
extern s32 D_801E05D0[];
extern s32 D_8038D8CC;

s32 func_801C7F74(s32 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    func_801C7F74_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA69C);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg1;
    temp_v0->unk94 = arg2;
    temp_v0->unk98 = arg3;
    temp_v0->unk9C = arg4;
    temp_v0->unkA0 = arg5;
    temp_v0->unkA4 = arg6;
    temp_v0->unkA8 = arg7;
    temp_v0->unkAC = arg8;
    temp_v0->unkB0 = D_801DA698;
    temp_v0->unkB3 = 0;
    D_801E05D0[D_801DA698] = 1;
    *arg0 = D_801DA698;
    D_801DA698 += 1;
    func_8038C4D8(2, 0, &D_801DA698);
    return 1;
}
