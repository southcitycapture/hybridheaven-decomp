#include "common.h"
extern void *func_80005670(void *, void *);
extern u8 func_8038D8B8[];


/* object returned by func_80005670 */
extern u8 D_801DA53C[];

typedef struct func_801C64F4_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    u8 padA8[8];
    u16 unkB0;
    u16 unkB2;
} func_801C64F4_Struct;

s32 func_801C64F4(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5, s32 arg6)
{
    func_801C64F4_Struct *temp_v0;
    f32 *args;

    args = &arg0;
    temp_v0 = func_80005670(*(void **) (func_8038D8B8 + 0x14), D_801DA53C);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = args[0];
    temp_v0->unk94 = args[1];
    temp_v0->unk98 = args[2];
    temp_v0->unk9C = args[3];
    temp_v0->unkA0 = args[4];
    temp_v0->unkA4 = args[5];
    temp_v0->unkB0 = 0;
    temp_v0->unkB2 = arg6;
    return 1;
}
