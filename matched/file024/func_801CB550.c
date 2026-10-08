#include "context.h"

extern void func_8012FE50(s32, s32, s32, s32, s32);
extern u16 D_80089474[];

void func_801CB550(s32 arg0, s32 arg1) {
    if (D_80089474[2] & 0xB000) {
        func_8012FE50(0x17, 0x73, 1, 1, 0);
    }
}
