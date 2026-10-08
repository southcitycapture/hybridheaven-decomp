#include "context.h"

struct func_80246598_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern s32 func_8012D918(void *, s32, s16, s32, s32);
extern s16 D_802473F0[];

void func_80246598(void *arg0, s32 arg1) {
    struct func_80246598_Struct *s;
    s32 temp_v1;

    s = arg0;
    temp_v1 = s->unk3C++;
    func_8012D918(arg0, 0x2DD, D_802473F0[temp_v1 % 8], 0, 0);
}
