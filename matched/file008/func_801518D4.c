#include "context.h"

extern s32 func_80151BC4(void);
s32 func_80002B44(u8);
extern u8 D_801BF194[];

s32 func_801518D4(u8 arg0, u8 arg1, s32 arg2) {
    if (func_80151BC4() == 2) {
        return 0;
    }
    if (arg0 >= 2) {
        goto end;
    }
    if ((u16)arg2 == 0) {
        if (func_80002BAC(arg0) == 0) {
            D_801BF190[arg0] = 0;
            return 1;
        }
        goto end;
    }
    if (func_80002B44(arg0) == 0) {
        D_801BF190[arg0] = ((u16 *)&arg2)[1];
        D_801BF194[arg0] = arg1;
        return 1;
    }
end:
    return 0;
}
