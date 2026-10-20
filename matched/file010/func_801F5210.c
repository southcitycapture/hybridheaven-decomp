#include "context.h"

typedef struct func_801F5210_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    s32 unk54;
} func_801F5210_Struct;

void func_801F5210(void *arg0) {
    func_801F5210_Struct *obj = arg0;

    obj->unk2C |= 0x60;
    obj->unk2C |= 0xB00;
    obj->unk54 = 1;
}
