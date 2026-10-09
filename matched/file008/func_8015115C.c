#include "context.h"

s32 func_801517CC();

typedef struct func_8015115C_Vec {
    s32 x;
    s32 y;
    s32 z;
} func_8015115C_Vec;

typedef struct func_8015115C_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 pad1[0x6];
    func_8015115C_Vec unk98;
} func_8015115C_Struct;

s32 func_8015115C(func_8015115C_Struct *arg0, func_8015115C_Vec *arg1) {
    if (func_801517CC() != 0) {
        arg0->unk90 = arg0->unk90 | 2;
        arg0->unk91 = 1;
        arg0->unk98 = *arg1;
        return 1;
    }
    return 0;
}
