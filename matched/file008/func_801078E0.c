#include "context.h"
extern s32 func_800058DC(s32, void *);
void func_80107968(s32 arg0, s32 arg1);

extern void func_80005624(void *);
extern u16 D_80089474[];
extern u8 D_80163504[];
extern u8 D_801BB600;

void func_801078E0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (D_80089474[1] & 0x1000) {
        var_v0 = 1;
        D_801BB600 += 1;
    }
    if (var_v0 == 1) {
        if (D_801BB600 >= 0xB) {
            func_80005624(D_80163504);
        }
    } else {
        func_800058DC(arg0, (void *) func_80107968);
    }
}
