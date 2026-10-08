#include "common.h"

typedef struct func_801FCB44_Struct {
    u8 pad[0x18];
    u8 *unk18;
} func_801FCB44_Struct;

extern func_801FCB44_Struct *D_8038D8D0;

s32 func_801FCB44(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        D_8038D8D0->unk18[0x22] = 0;
        return 3;
    }
    return 2;
}
