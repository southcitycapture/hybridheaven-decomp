#include "context.h"

extern s32 func_800058DC(s32, void *);
extern void func_80151AE0(void);

void func_80151A88(s32 arg0, s32 arg1) {
    u8 var_s0;

    var_s0 = 0;
    do {
        func_80151870(var_s0);
        var_s0++;
    } while (var_s0 < 2);
    func_800058DC(arg0, func_80151AE0);
}
