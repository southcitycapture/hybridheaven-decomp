#include "context.h"
extern s32 D_801DA680;
extern s32 D_801E0550[];
extern s32 D_8038D8CC;
extern void *func_80005670(s32, void *);

typedef struct func_801C7DE8_Struct {
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
    s8 unkB1;
    s8 unkB2;
    s8 unkB3;
} func_801C7DE8_Struct;

extern u8 D_801DA684[];

s32 func_801C7DE8(s32 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s32 arg9, s32 arg10) {
    func_801C7DE8_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA684);
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
    temp_v0->unkB0 = D_801DA680;
    temp_v0->unkB1 = arg9;
    temp_v0->unkB2 = arg10;
    temp_v0->unkB3 = 0;
    D_801E0550[D_801DA680] = 1;
    *arg0 = D_801DA680;
    D_801DA680 += 1;
    return 1;
}
