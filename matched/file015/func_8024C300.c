#include "context.h"

extern s32 func_8015105C(s32);
extern void func_8024C350(void);
extern s32 D_8025A2D4;
extern s32 D_8025A2D8;

void func_8024C300(s32 arg0, s32 arg1) {
    D_8025A2D4 = func_8015105C(0x30);
    D_8025A2D8 = func_8015105C(0x141);
    func_800058DC((void *) arg0, (void *) func_8024C350);
}
