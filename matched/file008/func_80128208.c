#include "context.h"

typedef struct func_80128208_Struct {
    u8 pad0[0x30];
    s32 unk30;
} func_80128208_Struct;

void func_80128208(func_80128208_Struct *arg0, s32 arg1) {
    if (arg0->unk30 & 0x20) {
        func_80005700(arg0);
    }
}
