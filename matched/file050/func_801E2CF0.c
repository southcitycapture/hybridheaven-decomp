#include "context.h"

extern void func_801BF628(s32 arg0, void *arg1);
extern void func_8038D28C(s32 arg0);

s32 func_801E2CF0(s32 arg0, s32 arg1) {
    u8 sp18[0x1F8];

    func_801BF628(3, sp18);
    if (*(s32 *)(sp18 + 0xC) >= 2) {
        func_8038D28C(0x502);
        return 1;
    }
    return 0;
}
