#include "context.h"

typedef struct func_80236BD8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80236BD8_Struct;

s32 func_8012C4D0(s32, func_80236BD8_Struct, s32); /* extern */
extern s32 D_801BBC2C;
extern s32 D_8023E3C0;
extern func_80236BD8_Struct D_8023E3EC;

s32 func_80236BD8(void) {
    if (D_8023E3C0 == 0) {
        D_8023E3C0 = func_8012C4D0(D_801BBC2C, D_8023E3EC, 3);
        return 1;
    }
    return 0;
}
