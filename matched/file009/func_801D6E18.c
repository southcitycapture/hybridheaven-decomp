#include "context.h"

struct func_801D6E18_Struct {
    u8 pad0[0x91];
    u8 unk91;
};

void func_801D6E18(struct func_801D6E18_Struct *arg0, s32 arg1) {
    if (arg0->unk91 & 0x40) {
        if (func_80133A24(0x122) != 0) {
            arg0->unk91 = arg0->unk91 & 0xFFBF;
        }
    }
}
