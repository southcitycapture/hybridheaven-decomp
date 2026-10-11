#include "context.h"

extern struct func_80241790_Vals D_802585A4;
extern s32 D_801BBC2C;

void *func_80241854(f32 arg0, f32 arg1, f32 arg2, u16 arg3, u16 arg4, u16 arg5, u16 arg6) {
    struct func_80241790_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802585A4, 2);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
        temp_v0->unk9E = arg4;
        temp_v0->unkA0 = arg5;
        temp_v0->unkA2 = arg6;
        return temp_v0;
    }
    return NULL;
}
