#include "context.h"

struct func_8002C6D0_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};

extern struct func_8002C6D0_Struct *D_800498F0;

void func_8002C6D0(s32 *arg0) {
    struct func_8002C6D0_Struct *temp_v0;

    temp_v0 = D_800498F0;
    *arg0 = temp_v0->unk2C;
    temp_v0->unk2C = (s32)arg0;
}
