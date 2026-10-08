#include "common.h"

struct func_801D6D40_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern s32 func_800058DC(void *, void *);
extern s32 func_8012D844(void *, s32, s32);
extern s32 func_8012D894(void *, s32, s32);
extern void func_801D6D98(void);

void func_801D6D40(struct func_801D6D40_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x140, 0);
        func_8012D894(arg0, 0x140, 3);
        func_800058DC(arg0, func_801D6D98);
    }
}
