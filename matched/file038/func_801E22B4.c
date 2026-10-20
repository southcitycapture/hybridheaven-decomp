#include "context.h"
struct func_801E4E80_Struct {
    u8 pad[0xC];
    s32 unkC;
};
extern struct func_801E4E80_Struct *func_801BF6B0(s32 a0);
extern s32 func_801C1B1C(void);

s32 func_801E22B4(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 4) || (func_801C1B1C() == 0)) {
        return 11;
    }
    return 12;
}
