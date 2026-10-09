#include "context.h"

typedef struct func_80241FD0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80241FD0_Struct;

void *func_8012C4D0(s32, func_80241FD0_Struct, s32); /* extern */
extern s32 D_801BBC2C;
extern func_80241FD0_Struct D_802496F0;

void *func_80241FD0(f32 arg0, f32 arg1, f32 arg2, u8 arg3) {
    void *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802496F0, 3);
    if (temp_v0 != NULL) {
        ((f32 *)temp_v0)[0x90 / 4] = arg0;
        ((f32 *)temp_v0)[0x94 / 4] = arg1;
        ((f32 *)temp_v0)[0x98 / 4] = arg2;
        ((u8 *)temp_v0)[0x9C] = arg3;
        return temp_v0;
    }
    return NULL;
}
