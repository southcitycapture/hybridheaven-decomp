#include "context.h"
struct func_801E1ED0_Struct *func_801BF6B0(s32);
s32 func_801C1B1C(void);
void func_801CF514(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

/* context.h cannot be included: its lines 149 and 152 declare func_801CF514 as both
   s32 and void, so every compile of it fails. Declare only what this function uses. */
struct func_801EAA78_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801EAA78(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB3) || (func_801C1B1C() == 0)) {
        return 0x33;
    }
    return 0x34;
}
