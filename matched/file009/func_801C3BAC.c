#include "context.h"

struct func_801C3BAC_Struct {
    u8 pad[2];
    s16 unk2;
};

extern struct func_801C3BAC_Struct D_801BBDA0;

void func_801C3BAC(u16 arg0) {
    D_801BBDA0.unk2 = arg0;
}
