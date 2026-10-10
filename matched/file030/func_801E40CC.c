#include "context.h"
extern struct func_801E5060_StructC *D_8038D8D0;

s32 func_801E40CC(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + 0x222;
    return 3;
}
