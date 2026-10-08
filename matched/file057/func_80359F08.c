#include "context.h"

extern void func_80359F54(void);

void func_80359F08(void *arg0, s32 arg1) {
    func_80358964_StructA *temp_v0;
    s32 temp_v1;

    temp_v0 = D_8038CC10;
    temp_v1 = (u16) temp_v0->unk4C;
    if (temp_v1 >= 5) {
        temp_v0->unk4C = (u16) (temp_v1 | 0x8000);
        D_801BCC25 = 0;
        func_800058DC(arg0, &func_80359F54);
    }
}
