#include "context.h"

typedef struct func_801D51C0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D51C0_Struct;

extern void func_801D5208(void);

void func_801D51C0(func_801D51C0_Struct *arg0, s32 arg1) {
    s8 sp1F;

    sp1F = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801D5208);
    }
}
