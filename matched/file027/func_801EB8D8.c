#include "context.h"

#define P(i) (((func_801E390C_Struct2 **)D_8038D8D0)[i]->unk30)

s32 func_801EB8D8(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i != 12; i += 2) {
        if ((s32)P(i + 6)->unk8 >= 0x1A4) {
            P(i + 6)->unk8 = -420.0f;
        }
        P(i + 6)->unk8 += 5.0f;
        if ((s32)P(i + 7)->unk8 >= 0x1A4) {
            P(i + 7)->unk8 = -420.0f;
        }
        P(i + 7)->unk8 += 5.0f;
    }
    return 2;
}
