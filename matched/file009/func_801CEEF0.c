#include "context.h"

typedef struct func_801CEEF0_StructInner {
    u8 pad[0x30];
    func_801CE6F8_Struct *unk30;
} func_801CEEF0_StructInner;

typedef struct func_801CEEF0_StructOuter {
    u8 pad[0x94];
    u8 unk94;
} func_801CEEF0_StructOuter;

extern void func_801CEF84();

void func_801CEEF0(func_801CEEF0_StructOuter *arg0, func_801CEEF0_StructInner **arg1) {
    s32 var_s0;
    s8 sp2B;

    sp2B = 0;
    if (func_801CE0E8((void *) arg0, &sp2B) == 0) {
        var_s0 = 0;
        if ((s32) arg0->unk94 > 0) {
            do {
                func_801CE618((s32) arg0, arg1[var_s0]->unk30);
                var_s0 = (var_s0 + 1) & 0xFF;
            } while (var_s0 < (s32) arg0->unk94);
        }
        func_800058DC((void *) arg0, (s32) func_801CEF84);
    }
}
