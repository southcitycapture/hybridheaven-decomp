#include "context.h"

typedef struct func_8037D508_Struct {
    s32 unk0[5];
} func_8037D508_Struct;

extern s32 func_8012C4D0(s32, func_8037D508_Struct, s32);
extern s32 D_80388C60;
extern func_8037D508_Struct D_80388C64;

s32 func_8037D508(void) {
    if (D_80388C60 == 0) {
        D_80388C60 = func_8012C4D0(0, D_80388C64, 3);
        if (D_80388C60 != 0) {
            return 1;
        }
    }
    return 0;
}
