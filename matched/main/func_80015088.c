#include "context.h"

extern void func_80014B88(void *, s16, s16, s16);
extern void func_80014E14(void *, void *, s32, s32, f32);
extern void func_80029D30(void *, s32);

struct func_80015088_Struct {
    u8 pad[0x30];
    f32 f30;
    f32 f34;
    f32 f38;
    u8 tail[4];
};

void func_80015088(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    struct func_80015088_Struct sp20;

    func_80014B88(&sp20, arg1, arg2, arg3);
    func_80014E14(&sp20, &sp20, arg4, arg5, arg6);
    sp20.f30 = arg7;
    sp20.f34 = arg8;
    sp20.f38 = arg9;
    func_80029D30(&sp20, arg0);
}
