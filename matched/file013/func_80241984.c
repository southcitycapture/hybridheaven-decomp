#include "context.h"

struct func_80241984_Struct {
    u8 pad[0x94];
    s16 unk94;
};

extern void func_802419B4();

void func_80241984(struct func_80241984_Struct *arg0, s32 arg1) {
    arg0->unk94 = 0xA;
    func_800058DC(arg0, func_802419B4);
}
