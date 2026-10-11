#include "context.h"

s32 func_801E6424(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((func_801CEDE4() != 0) || (func_801C1088(4, 1, 0x1E) != 0)) {
        func_801C10D8(4, 1);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0x3A;
    }
    func_801C1134(4, 1);
    temp_v1 = *(void **) ((u8 *) *(void **) ((u8 *) *(void **) ((u8 *) *(void **) ((u8 *) *(void **) (func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C);
    *(s16 *) ((u8 *) temp_v1 + 0x12) = *(s16 *) ((u8 *) temp_v1 + 0x12) - 0x44;
    return 0x39;
}
