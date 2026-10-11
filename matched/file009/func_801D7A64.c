#include "context.h"

extern void func_80020718(s32 arg0);

typedef struct {
    u8 pad0[0x92];
    u8 unk92;
} func_801D7A64_Struct;

void func_801D7A64(func_801D7A64_Struct *arg0, s32 arg1) {
    if (arg0->unk92 == 1) {
        func_80020718(0x17C);
    }
}
