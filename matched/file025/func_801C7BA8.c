#include "context.h"

typedef struct func_801C7BA8_Struct {
    s32 raw[0x1B];
} func_801C7BA8_Struct;

extern func_801C7BA8_Struct D_801E04E0;

void func_801C7BA8(func_801C7BA8_Struct *arg0) {
    D_801E04E0 = *arg0;
}
