#include "context.h"

struct func_801FB100_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern u8 D_80217014[];
extern void func_80005670(void *, void *);

void func_801FB100(struct func_801FB100_Struct *arg0, s32 arg1) {
    if (!((++arg0->unk3C) & 0x1F)) {
        func_80005670(arg0, D_80217014);
    }
}
