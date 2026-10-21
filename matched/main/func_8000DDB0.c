#include "context.h"

extern void func_80001FE8(u32, void *, s32);
extern u8 D_8008DC18;

void func_8000DDB0(u32 a0, void *a1, s32 a2) {
    s32 i = 0x10;

    D_8008DC18 = 1;
    func_80001FE8(a0, a1, a2);
    while (i--) {
    }
    D_8008DC18 = 0;
}
