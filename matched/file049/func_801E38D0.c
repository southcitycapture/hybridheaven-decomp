#include "context.h"
extern struct func_801E4434_Struct *func_801BF6B0(s32);
extern void func_801C1000(s32, s32);
extern void func_8038D28C(s32);

s32 func_801E38D0(s32 arg0, s32 arg1) {
    if (*(s32 *)((u8 *)func_801BF6B0(4) + 0xC) >= 4) {
        func_801C1000(3, 1);
        func_8038D28C(0x20D);
        return 2;
    }
    return 1;
}
