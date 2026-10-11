#include "common.h"

typedef struct func_801FA3A0_Struct {
    s32 w[9];
} func_801FA3A0_Struct;

s32 func_801C18CC(s32 arg0, func_801FA3A0_Struct *arg1);
extern func_801FA3A0_Struct D_802075FC;

s32 func_801FA3A0(s32 arg0, s32 arg1) {
    func_801FA3A0_Struct sp1C;

    sp1C = D_802075FC;
    func_801C18CC(3, &sp1C);
    return 35;
}
