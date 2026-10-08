#include "context.h"

extern u8 D_80217CA8;

struct func_80212A28_Struct {
    u8 pad0[0xAD];
    u8 unkAD;
};

void func_80212A28(struct func_80212A28_Struct *arg0) {
    arg0->unkAD = D_80217CA8;
    D_80217CA8 += 1;
}
