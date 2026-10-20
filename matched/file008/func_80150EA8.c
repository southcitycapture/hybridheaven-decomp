#define func_80150EA8 func_80150EA8_context_reference
#include "context.h"
#undef func_80150EA8

extern void func_80005700();

typedef struct func_80150EA8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80150EA8_Struct;

void func_80150EA8(func_80150EA8_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x1E) {
        func_80005700();
    }
}
