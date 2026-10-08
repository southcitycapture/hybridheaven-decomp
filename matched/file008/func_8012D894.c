#include "context.h"

typedef struct func_8012D894_StructB {
    u8 pad0[0x2C];
    s32 unk2C;
} func_8012D894_StructB;

typedef struct func_8012D894_StructA {
    u8 pad0[0x24];
    func_8012D894_StructB *unk24;
} func_8012D894_StructA;

void func_8012D894(void *arg0, u16 arg1, s32 arg2) {
    func_8012D894_StructA *a = arg0;

    func_8012CF8C(arg0, (u8 *)a->unk24->unk2C + 0x44, arg1, arg2);
}
