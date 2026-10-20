#include "context.h"

struct func_8022CABC_Struct {
    u32 words[0x39C / 4];
};

void func_8022CABC(void) {
    *(struct func_8022CABC_Struct *)D_801BC3D8 =
        *(struct func_8022CABC_Struct *)D_801BC03C;
}
