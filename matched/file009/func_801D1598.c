#include "context.h"

typedef struct func_801D1598_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D1598_Struct;
typedef struct func_801D1598_Inner {
    u8 pad[0x30];
    f32 *unk30;
} func_801D1598_Inner;

void func_801D1598(func_801D1598_Struct *arg0, func_801D1598_Inner **arg1) {
    f32 *p;
    s8 sp43;
    u8 i;

    sp43 = 0;
    if (func_801CE0E8(arg0, &sp43) == 0) {
        for (i = 0; i < arg0->unk94; i++) {
            p = arg1[i]->unk30;
            p[1] += ((f32)func_8012C6B4(0xC8) - 100.0) / 10.0;
            p[3] += ((f32)func_8012C6B4(0xC8) - 100.0) / 10.0;
        }
        func_800058DC(arg0, (s32)func_801CE7A8);
    }
}
