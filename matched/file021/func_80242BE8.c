#include "context.h"

struct func_80242BE8_Struct {
    u8 pad[0x90];
    u16 unk90;
};

extern void func_8024286C(void *arg0);
extern void func_80242C38(void);

void func_80242BE8(void *arg0, s32 arg1)
{
    s32 temp_v0;
    struct func_80242BE8_Struct *s;

    s = arg0;
    func_80242810(arg0);
    temp_v0 = s->unk90;
    s->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_8024286C(arg0);
        func_800058DC((s32) arg0, (void *) func_80242C38);
    }
}
