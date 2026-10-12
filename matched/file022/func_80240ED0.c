#include "context.h"

typedef struct func_80240ED0_Struct {
    u8 pad[0x92];
    u16 unk92;
    u8 unk94;
} func_80240ED0_Struct;

extern void func_80240F14();

void func_80240ED0(func_80240ED0_Struct *arg0, s32 arg1) {
    arg0->unk94 = arg0->unk94 + 1;
    if (arg0->unk92 != 0) {
        arg0->unk92 = 0xA;
        func_800058DC((s32) arg0, (void *) func_80240F14);
    }
}
