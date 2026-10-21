#include "context.h"

extern void func_801CF758();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_801CF5F0(u8 *arg0, s32 *arg1) {
    f32 *s0;
    s16 temp_s2;
    s16 temp_s3;
    u8 i;
    s8 pad1;
    s8 sp45;

    sp45 = 0;
    if (func_801CE0E8(arg0, &sp45) == 0) {
        temp_s3 = func_8012C6B4(0x2000);
        for (i = 0; i < arg0[0x94]; i++) {
            temp_s2 = (s16)((i << 13) / arg0[0x94] + temp_s3) & 0x1FFF;
            s0 = (f32 *)*(s32 *)(arg1[i] + 0x30);
            s0[1] += 6.5 * func_8001EB64(temp_s2);
            s0[3] += 6.5 * func_8001EAD0(temp_s2);
        }
        func_800058DC(arg0, (s32)func_801CF758);
    }
}
