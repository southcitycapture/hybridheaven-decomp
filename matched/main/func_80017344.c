#include "context.h"

s32 func_80017344(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_800174CC(arg0);
    if (temp_v0 == -1) {
        return 0;
    }
    func_800173E4(temp_v0);
    return arg0;
}
