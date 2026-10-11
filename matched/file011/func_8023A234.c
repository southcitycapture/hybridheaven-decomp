#include "context.h"

typedef struct func_8023A234_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_8023A234_Struct;

s32 func_8012C4D0(s32, func_8023A234_Struct, s32); /* extern */
extern s32 D_801BBC2C;
extern s32 D_8023E544;
extern func_8023A234_Struct D_8023E530;

s32 func_8023A234(void) {
    if (D_8023E544 == 0) {
        D_8023E544 = func_8012C4D0(D_801BBC2C, D_8023E530, 8);
        return 1;
    }
    return 0;
}
