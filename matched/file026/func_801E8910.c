#include "context.h"

extern void func_8038C4D8(s32 a0, s32 a1);
extern f32 D_801FC468;
extern f32 D_801FC46C;
extern f32 D_801FC470;

s32 func_801E8910(s32 arg0, s32 arg1) {
    struct func_801E7ECC_Struct3 *temp;

    if (D_801FB394 == 0) {
        goto case0;
    }
    if (D_801FB394 == 1) {
        goto case1;
    }
    return 0x11;
case0:
    if (func_801C0B8C(0x5482EDA) != 0) {
        func_8038C4D8(2, 0);
        D_801FB394 = 1;
        return 0x11;
    }
    temp = D_801BBBF0.unkE8->unk2C;
    temp->unk30 = temp->unk30 + D_801FC468;
    temp = D_801BBBF0.unkE8->unk2C;
    temp->unk34 = temp->unk34 + D_801FC46C;
    temp = D_801BBBF0.unkE8->unk2C;
    temp->unk38 = temp->unk38 + D_801FC470;
    goto ret11;
case1:
    if (func_801C0B8C(0x54CC2BA) != 0) {
        return 0x12;
    }
ret11:
    return 0x11;
}
