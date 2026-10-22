#include "context.h"

struct func_800059B0_Struct {
    struct func_800059B0_Struct *next;
    u8 pad4[4];
    s32 unk8;
    u8 padC[8];
    s32 unk14;
};

struct func_800059B0_Globals {
    u8 pad[0xAC];
    struct func_800059B0_Struct *free;
};

extern void D_80005A04(void *, void *, s32);

s32 func_800059B0(void *arg0, s32 arg1)
{
    struct func_800059B0_Struct *node;

    if (((struct func_800059B0_Globals *)&D_800892B0)->free != NULL) {
        node = ((struct func_800059B0_Globals *)&D_800892B0)->free;
        ((struct func_800059B0_Globals *)&D_800892B0)->free = node->next;
        D_80005A04(arg0, (node->unk8 = 0, node),node->unk14 = arg1);
        return (s32)node;
    }
    return 0;
}
