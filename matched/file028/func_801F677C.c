#include "context.h"

extern struct func_801FCB44_Struct *D_8038D8D0;

struct func_801F677C_Struct {
    u8 pad[0x18];
    u8 *unk18;
};

s32 func_801F677C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        ((struct func_801F677C_Struct *)D_8038D8D0)->unk18[0x22] = 1;
        return 3;
    }
    return 2;
}
