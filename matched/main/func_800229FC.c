#include "context.h"

extern void func_80022A84(s32);
extern u8 D_800CBAB8;
extern void *D_800CBDA4;
extern u32 D_801B5520;

typedef struct func_800229FC_Struct {
    u32 value;
    u8 pad[0xD4];
} func_800229FC_Struct;

void func_800229FC(void) {
    s32 i;
    func_800229FC_Struct *ptr;

    if (D_800CBAB8 == 0) {
        D_800CBAB8 = 1;
        for (i = 0, ptr = (func_800229FC_Struct *)&D_801B5520; i != 0x10; i++, ptr++) {
            D_800CBDA4 = ptr;
            if (((func_800229FC_Struct *)D_800CBDA4)->value != 0) {
                func_80022A84(i & 0xFF);
            }
        }
    }
}
