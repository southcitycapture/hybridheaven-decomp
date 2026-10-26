#include "context.h"

extern u64 func_80026F58();
extern u64 func_80026E58();

void func_801C0B2C(void) {
    u64 temp;

    temp = func_801C0C08();
    temp = func_80026F58(temp - D_801D8D80, 0x40);
    func_80026E58(temp, 0xBB8);
}
