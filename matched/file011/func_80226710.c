#include "context.h"

typedef struct func_80226710_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_80226710_StructVec;

typedef struct func_80226710_StructC {
    u8 pad0[0x4];
    f32 x;
    f32 y;
    f32 z;
} func_80226710_StructC;

typedef struct func_80226710_StructB {
    u8 pad0[0x2C];
    func_80226710_StructC *unk2C;
} func_80226710_StructB;

typedef struct func_80226710_StructA {
    u8 pad0[0x24];
    func_80226710_StructB *unk24;
} func_80226710_StructA;

extern void func_801DC9C4(func_80226710_StructVec v, u16 w, f32 f);

void func_80226710(func_80226710_StructA *arg0, u16 arg1, f32 arg2) {
    func_80226710_StructC *temp_v0;
    func_80226710_StructVec sp20;

    temp_v0 = arg0->unk24->unk2C;
    sp20.x = temp_v0->x;
    sp20.y = temp_v0->y;
    sp20.z = temp_v0->z;
    func_801DC9C4(sp20, arg1, arg2);
}
