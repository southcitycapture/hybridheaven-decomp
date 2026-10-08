#include "context.h"

extern void func_80149E84(void);

typedef struct func_80149880_Inner {
    u8 pad[0x94];
    s32 unk94;
} func_80149880_Inner;

typedef struct func_80149880_Struct {
    u8 pad0[0xC];
    func_80149880_Inner *unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
    u8 pad2[0xA4 - 0x94];
    s32 unkA4;
} func_80149880_Struct;

void func_80149880(func_80149880_Struct *arg0, s32 arg1) {
    D_801BCC25 = 3;
    arg0->unk92 = 2;
    arg0->unkA4 = arg0->unkC->unk94;
    arg0->unk93 = 2;
    func_800058DC(arg0, (void *) func_80149E84);
}
