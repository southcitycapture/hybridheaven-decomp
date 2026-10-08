#include "context.h"

typedef struct func_80360394_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360394_Struct;

typedef struct func_80360394_Quad {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80360394_Quad;

extern func_80360394_Quad D_803863EC;
void func_8013A334(void *, s32, s32, u16);

void func_80360394(void *arg0, func_80360394_Struct *arg1, s32 arg2, u8 arg3) {
    s32 val;
    func_80360394_Quad local;

    val = arg1->unk5C;
    local = D_803863EC;
    func_8013A334(arg0, arg2, val, ((u16 *) &local)[arg3]);
}
