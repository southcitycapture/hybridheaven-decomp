#include "context.h"

typedef struct func_8012CE9C_Arg {
    s32 w0;
    s32 w1;
    s32 w2;
} func_8012CE9C_Arg;

typedef struct func_8012CE9C_Struct {
    u8 pad[0x78];
    u16 unk78;
} func_8012CE9C_Struct;

extern s32 func_80011140(void *, void *, func_8012CE9C_Arg, u16);

s32 func_8012CE9C(void *arg0, func_8012CE9C_Struct *arg1, func_8012CE9C_Arg arg2, u16 arg3) {
    if (arg1->unk78 != 0) {
        if (func_80011140(arg0, arg1, arg2, arg3) == 0) {
            return 1;
        }
        arg1->unk78 = 0;
    }
    return 0;
}
