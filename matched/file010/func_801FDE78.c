#include "context.h"

struct func_801FDE78_Struct {
    u8 pad0[0xB0];
    u16 unkB0;
};

extern void func_80002BAC(s32);
extern void func_80020718(s32);
extern void func_800058DC(void *, void *);
extern void func_801FDEDC(void);

void func_801FDE78(struct func_801FDE78_Struct *arg0, void *arg1) {
    s32 var_s0;

    arg0->unkB0 = 0;
    var_s0 = 0;
    do {
        func_80002BAC(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 4);
    func_80020718(0xF);
    func_800058DC(arg0, func_801FDEDC);
}
