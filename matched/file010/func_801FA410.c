#include "context.h"

extern struct func_801FA2E0_Struct D_80217064;
extern struct func_801FA2E0_Struct D_80217078;
extern s32 D_802170B8;
extern s32 D_802170BC;

struct func_801FA410_Struct {
    u8 pad0[0x72];
    u16 unk72;
    u8 pad74[0xAC - 0x74];
    s32 unkAC;
    s32 unkB0;
};

s32 func_801FA410(struct func_801FA410_Struct *arg0) {
    if (arg0 != NULL) {
        D_802170B8 = func_8012C4D0(0, D_80217064, 1);
        if (D_802170B8 != 0) {
            ((struct func_801FA410_Struct *)D_802170B8)->unk72 = arg0->unk72;
            arg0->unkAC = D_802170B8;
        }
        D_802170BC = func_8012C4D0(0, D_80217078, 1);
        if (D_802170BC != 0) {
            ((struct func_801FA410_Struct *)D_802170BC)->unk72 = arg0->unk72;
            arg0->unkB0 = D_802170BC;
        }
        return 1;
    }
    return 0;
}
