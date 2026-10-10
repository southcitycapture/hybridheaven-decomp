#include "context.h"

struct func_80242364_Struct {
    u8 pad[0x94];
    s16 unk94;
};

extern u8 D_801BCAE0[];
extern void func_802423C0(void);

void func_80242364(struct func_80242364_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        *(s32 *) (D_801BCAE0 + 0x20) = 0x2A80003;
        arg0->unk94 = 0x1F;
        func_80020744(0x1BE);
        func_800058DC(arg0, (void *) func_802423C0);
    }
}
