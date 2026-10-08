#include "context.h"

struct func_801D7960_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad1[0x9C - 0x93];
    u8 unk9C;
};

extern void func_80020718(s32 arg0);
extern void func_801FCBA8(s32 arg0);

void func_801D7960(struct func_801D7960_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0->unk92 == 1) {
        temp_v0 = arg0->unk9C;
        if ((temp_v0 == 0) || (temp_v0 == 7)) {
            func_801FCBA8(0x39);
        }
    } else {
        temp_v0 = arg0->unk9C;
        if ((temp_v0 == 0) || (temp_v0 == 7)) {
            func_801FCBA8(0x38);
        }
        func_80020718(0x17B);
    }
}
