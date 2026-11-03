#include "common.h"


struct func_801CBDBC_StructInner {
    u8 pad[0xC];
    u16 count;
};
struct func_801CBDBC_StructOuter {
    u8 pad[0x5C];
    struct func_801CBDBC_StructInner *inner;
};
struct func_801CBDBC_StructNode {
    u8 pad[0x28];
    u16 value;
};

void func_801CBDBC(struct func_801CBDBC_StructOuter *arg0, struct func_801CBDBC_StructNode **arg1, u16 arg2) {
    struct func_801CBDBC_StructInner *inner = arg0->inner;
    s32 i;

    for (i = 0; i < inner->count; i++) {
        arg1[i]->value = arg2;
    }
}
