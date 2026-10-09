#include "context.h"
extern void func_800058DC(void *, void *);

struct func_8023C020_Struct {
    u8 pad0[0x98];
    struct func_8023C020_Inner *unk98;
};

struct func_8023C020_Inner {
    u8 pad0[0x2D8];
    u8 unk2D8;
};

extern void func_8013CD04(void *, s32, s32);
extern u8 D_8024089F;
extern void func_8023A09C(void);

void func_8023C020(struct func_8023C020_Struct *arg0, s32 arg1) {
    struct func_8023C020_Inner *temp_a0;
    s32 temp_a1;

    temp_a1 = (D_8024089F + 2) & 0xFF;
    temp_a1 = temp_a1 % 5;
    temp_a1 = temp_a1 & 0xFF;
    temp_a0 = arg0->unk98;
    temp_a0->unk2D8 = 0xA;
    func_8013CD04(temp_a0, temp_a1, 0);
    func_800058DC(arg0, func_8023A09C);
}
