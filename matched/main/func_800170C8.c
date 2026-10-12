#include "context.h"
s32 func_8001703C(s32 arg0);
s32 func_80017064(s32);
void func_800173E4(s32);
extern s32 func_8001F540();

s32 func_800170C8(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v0;
    s32 *temp_a0;

    temp_a0 = &arg0;
    temp_v0_2 = func_80017064(arg0 & 0xFFFF);
    if (temp_v0_2 == -1) {
        return 0;
    }
    temp_v0 = func_8001F540(func_8001703C(temp_v0_2));
    func_800173E4(temp_v0_2);
    return temp_v0;
}
