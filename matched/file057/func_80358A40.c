#include "context.h"

struct func_80358A40_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern void func_80005700();

void func_80358A40(struct func_80358A40_Struct *arg0, s32 arg1) {
    if (arg0->unk4C >= arg0->unk4E + 0x8001) {
        func_80005700();
    }
}
