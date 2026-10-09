#include "context.h"
extern u8 D_801E0A48[];
extern s32 func_801C2420(s32 arg0, void *arg1);
extern void func_801CC318(void);
extern void func_801CC458(s32 a0, void *a1);
extern u8 func_801DAE70[];


s32 func_801EB9D0(s32 arg0, s32 arg1) {
    func_801C2420(0x11C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAE70 + 0x5C);
    return 1;
}
