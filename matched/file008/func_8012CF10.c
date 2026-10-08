#include "common.h"

struct func_8012CF10_Arg {
    s32 w0;
    s32 w1;
    s32 w2;
};

extern s32 func_80010D08(void *, void *, struct func_8012CF10_Arg, u16, s32);

struct func_8012CF10_Struct {
    u8 pad[0x78];
    u16 unk78;
};

s32 func_8012CF10(void *arg1, struct func_8012CF10_Struct *arg2, struct func_8012CF10_Arg arg3, u16 arg4, s32 arg5) {
    if (arg2->unk78 != 0) {
        if (func_80010D08(arg1, arg2, arg3, arg4, arg5) == 0) {
            return 1;
        }
        arg2->unk78 = 0;
    }
    return 0;
}
