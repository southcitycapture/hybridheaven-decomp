#include "context.h"

struct func_8024DF34_Struct {
    u8 pad[0x90];
    u16 unk90;
};

extern void func_8015115C(s32, void *);
extern void func_8024DFA4(void);
extern u8 D_802545D4[];
extern u8 D_8025422C[];

void func_8024DF34(struct func_8024DF34_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x1C) {
        func_800179B0(D_802545D4);
        func_8015115C(D_8025A2E4, D_8025422C);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DFA4);
    }
}
