#include "context.h"

void func_80023A74(void) {
    s32 i;
    u32 cmd;

    if (D_800CBAB6 != 0) {
        func_80023D04();
        return;
    }
    if (D_800CBAC2 != 0) {
        func_80023D04();
        return;
    }
    cmd = *(s32 *)D_800CBDA4 & 0x7FFF;
    if ((cmd < 0x100U) && ((D_800CBABE != 0) || (D_800CBACD != 0))) {
        func_80023D04();
        return;
    }
    for (i = 0; i < 1; i++) {
        if (cmd == D_800CBAC8[i]) {
            func_80023D04();
            return;
        }
    }
}
