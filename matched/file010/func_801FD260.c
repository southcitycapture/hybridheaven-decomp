#include "common.h"

extern void func_801FD0F0(void);

struct func_801FD260_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x72 - 0x30];
    u16 unk72;
    u8 pad2[0x8C - 0x74];
    void (*unk8C)(void);
};

void func_801FD260(struct func_801FD260_Struct *arg0, struct func_801FD260_Struct *arg1) {
    void (*temp)(void);

    temp = func_801FD0F0;
    arg0->unk2C = arg0->unk2C | 0x8000;
    arg0->unk72 = arg1->unk72;
    arg0->unk8C = temp;
}
