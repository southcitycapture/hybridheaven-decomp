#include "context.h"

typedef struct func_8013A1B4_StructVec {
    s32 x, y, z;
} func_8013A1B4_StructVec;

typedef struct func_8013A1B4_StructState {
    u8 pad0[0xD];
    u8 count;
    u8 padE[0xE];
    func_8013A1B4_StructVec pos;
    u8 pad28[0x4E];
    u8 flag;
} func_8013A1B4_StructState;

typedef struct func_8013A1B4_StructSub {
    u8 pad0[0x5C];
    func_8013A1B4_StructState *state;
} func_8013A1B4_StructSub;

typedef struct func_8013A1B4_StructTransform {
    u8 pad0[0x5C];
    func_8013A1B4_StructVec pos;
} func_8013A1B4_StructTransform;

typedef struct func_8013A1B4_StructObject {
    u8 pad0[0x18];
    func_8013A1B4_StructSub *sub;
    u8 pad1C[0x10];
    func_8013A1B4_StructTransform *transform;
} func_8013A1B4_StructObject;

void func_8013A1B4(arg0, arg1, arg4)
    func_8013A1B4_StructObject **arg0;
    func_8013A1B4_StructVec arg1;
    u32 arg4;
{
    func_8013A1B4_StructSub *sub;
    func_8013A1B4_StructState *state;
    u8 count;
    u8 i;

    sub = arg0[0]->sub;
    state = sub->state;
    count = state->count;
    i = 1;
    if (arg4 & 1) {
        state->flag = 1;
        state->pos = arg1;
        arg0[0]->transform->pos = arg1;
    }
    while (arg4 != 0 && i < count) {
        if (arg4 & 1) {
            arg0[i]->transform->pos = arg1;
        }
        arg4 >>= 1;
        i++;
    }
}
