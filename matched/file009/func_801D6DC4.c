#include "context.h"

struct func_801D6DC4_Struct {
    u8 pad0[0x91];
    u8 unk91;
};

void func_801D6DC4(struct func_801D6DC4_Struct *arg0, s32 arg1) {
    if (arg0->unk91 & 0x40) {
        if (func_80133A24(0x11D) != 0) {
            arg0->unk91 = arg0->unk91 & 0xFFBF;
        }
    }
}
