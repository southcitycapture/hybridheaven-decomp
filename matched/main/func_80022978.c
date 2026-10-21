#include "context.h"

extern void func_80022A84(s32);

typedef struct func_80022978_Struct {
    u32 unk0;
    u8 pad4[0xD8 - 0x4];
} func_80022978_Struct;

void func_80022978(void) {
    func_80022978_Struct *ptr;
    s32 i;

    if (D_800CBAB8 != 0) {
        D_800CBAB8 = 0;
        for (i = 0, ptr = (func_80022978_Struct *)&D_801B5520; i != 16; i++, ptr++) {
            D_800CBDA4 = ptr;
            if (((func_80022978_Struct *)D_800CBDA4)->unk0 != 0) {
                func_80022A84(i & 0xFF);
            }
        }
    }
}
