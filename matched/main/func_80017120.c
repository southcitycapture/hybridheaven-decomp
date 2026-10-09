#include "context.h"

s32 func_80017064(s32);
void func_800173E4(s32);

s32 func_80017120(s32 arg0) {
    s32 temp_v0;
    s32 *pad_ptr;

    pad_ptr = &arg0;
    temp_v0 = func_80017064(arg0 & 0xFFFF);
    if (temp_v0 == -1) {
        return 0;
    }
    func_800173E4(temp_v0);
    return 0;
}
