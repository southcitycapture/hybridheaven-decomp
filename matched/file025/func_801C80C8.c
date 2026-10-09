#include "context.h"

typedef struct func_801C80C8_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    u8 padAC[4];
    u16 unkB0;
    u16 unkB2;
} func_801C80C8_Struct;

extern u8 D_801DA6B0[];
extern u8 func_8038D8B8[];

s32 func_801C80C8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u16 arg7) {
    func_801C80C8_Struct *temp_v1;

    temp_v1 = func_80005670(*(s32 *)(func_8038D8B8 + 0x14), D_801DA6B0);
    if (temp_v1 == NULL) {
        return 0;
    }
    temp_v1->unk90 = arg0;
    temp_v1->unk94 = arg1;
    temp_v1->unk98 = arg2;
    temp_v1->unk9C = arg3;
    temp_v1->unkA0 = arg4;
    temp_v1->unkA4 = arg5;
    temp_v1->unkA8 = arg6;
    temp_v1->unkB0 = 0;
    temp_v1->unkB2 = arg7;
    return 1;
}
