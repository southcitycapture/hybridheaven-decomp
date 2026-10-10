#include "context.h"

s32 func_8020EAA0(s32 arg0, struct func_8020C0A0_Outer **arg1) {
    struct func_8020C0A0_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 0x10);
    if ((s32) (*arg1)->unk30->unk4B < 0x19) {
        return 0;
    }
    return 1;
}
