#include "context.h"

struct func_801FA624_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    u16 unk94;
};

extern struct func_801FA2E0_Struct D_8021708C;

s32 func_801FA624(s32 arg0) {
    struct func_801FA624_Struct *temp_v0;

    temp_v0 = (struct func_801FA624_Struct *) func_8012C4D0(D_801BBC2C, D_8021708C, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk3C = 5;
        temp_v0->unk94 = *(u16 *) ((u8 *) &arg0 + 2);
        return 1;
    }
    return 0;
}
