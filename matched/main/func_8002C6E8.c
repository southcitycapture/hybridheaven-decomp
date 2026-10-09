#include "context.h"

extern void func_80026890(s32);
extern void func_800268C0(s32, void *);

void func_8002C6E8(void *arg0) {
    s32 var_s0;

    var_s0 = *(s32 *)((u8 *)arg0 + 0x14);
    if (var_s0 != 0) {
        do {
            func_80026890(var_s0);
            func_800268C0(var_s0, (u8 *)arg0 + 4);
            var_s0 = *(s32 *)((u8 *)arg0 + 0x14);
        } while (var_s0 != 0);
    }
}
