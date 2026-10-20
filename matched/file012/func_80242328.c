#include "context.h"

struct func_80242328_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    u16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
};

extern s32 func_800058DC(s32, void *);
extern void func_80242364(void);

void func_80242328(struct func_80242328_Struct *arg0, s32 arg1) {
    arg0->unk92 = 3;
    arg0->unk93 = 0;
    arg0->unk9A = 0;
    arg0->unkA0 = 3;
    func_800058DC(arg0, func_80242364);
}
