#include "context.h"

extern void func_80005670(s32, void *);
extern u8 D_80044090[];
extern void func_8021D768(void);

void func_8021D72C(s32 arg0, s32 arg1) {
    func_80005670(arg0, D_80044090);
    func_800058DC(arg0, func_8021D768);
}
