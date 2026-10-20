#include "context.h"
extern u8 D_8008D558[];
extern void func_801269C0();
extern void func_80126930(s32);
extern void func_80146B04();
extern void func_801F3B5C(s32);

void func_8021D6A4(s32 arg0, s32 arg1) {
    if (*(s32 *)(D_801BBBF0 + 0x188) == 0) {
        if (D_801BBBF0[0x181] == 0) {
            if (*(u32 *)(D_8008D558 + 0x28) > 0x2000) {
                D_801BBBF0[0x181] = 1;
                return;
            }
            D_801BBBF0[0x181] = 1;
            func_801269C0();
            func_80126930(0);
            func_80146B04();
            func_801F3B5C(0);
            func_80005700((void *)arg0);
        }
    }
}
