#include "common.h"

struct func_801E663C_Struct {
    u8 pad[0xC];
    s32 unkC;
};
extern struct func_801E663C_Struct *func_801BF6B0(s32 a0);
extern s32 func_801C1B1C(void);

s32 func_801E663C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x11) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}
