#include "context.h"

struct func_801FA2E0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern struct func_801FA2E0_Struct D_80217028;
extern s32 D_801BBC2C;
extern s32 D_802170B4;
s32 func_8012C4D0(s32, struct func_801FA2E0_Struct, s32);

s32 func_801FA2E0(void) {
    if (D_802170B4 == 0) {
        D_802170B4 = func_8012C4D0(D_801BBC2C, D_80217028, 8);
        if (D_802170B4 != 0) {
            return 1;
        }
    }
    return 0;
}
