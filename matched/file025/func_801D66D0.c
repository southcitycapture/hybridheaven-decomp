#include "context.h"

typedef struct func_801D66D0_Struct {
    u8 pad[0x24];
    s32 unk24;
} func_801D66D0_Struct;

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void *);
extern void func_801D672C(void);

void func_801D66D0(func_801D66D0_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x28, 4);
        func_800058DC(arg0, func_801D672C);
        return;
    }
    func_800058DC(arg0, func_801D66D0);
}
