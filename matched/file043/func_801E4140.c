#include "context.h"

extern s32 D_801E96B8;

s32 func_801E4140(s32 arg0, s32 arg1) {
    s32 i;
    s32 offset;

    i = 1;
    offset = 4;
    if (D_801E96B8 + 1 >= 2) {
        do {
            i += 1;
            (*(struct func_801E3CCC_Struct2 **)((u8 *)D_8038D8D0 + offset))->unk22 = 0;
            offset += 4;
        } while (D_801E96B8 >= i);
    }
    return 9;
}
