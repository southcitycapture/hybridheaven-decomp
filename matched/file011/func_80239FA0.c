#include "common.h"

typedef struct func_80239FA0_Struct {
    u8 pad[0xAC];
    u16 unkAC;
} func_80239FA0_Struct;

void func_80239FA0(func_80239FA0_Struct *arg0, s32 arg1) {
    arg0->unkAC = arg0->unkAC + 1;
}
