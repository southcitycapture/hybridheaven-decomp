#include "context.h"

extern void *func_801505AC(s32);
extern void func_801C3B7C(void *);

void func_80240928(void) {
    u8 *temp_v0;

    temp_v0 = func_801505AC(6);
    temp_v0[0x92] = temp_v0[0x92] | 0x40;
    func_801C3B7C(func_801505AC(7));
}
