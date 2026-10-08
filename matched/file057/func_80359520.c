#include "common.h"

struct func_80359520_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

void func_80005700(void);

void func_80359520(struct func_80359520_Struct *arg0, s32 arg1) {
    if (arg0->unk4C >= arg0->unk4E + 0x8002) {
        func_80005700();
    }
}
