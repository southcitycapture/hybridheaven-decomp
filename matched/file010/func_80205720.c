#include "context.h"
extern void func_800058DC(void *arg0, void *arg1);

struct func_80205720_Inner {
    u8 pad[0x10];
    u32 unk10;
};

struct func_80205720_Struct {
    u8 pad[0x38];
    struct func_80205720_Inner *unk38;
};

extern void func_80005700(void *);
extern s32 func_80133A24(u32, void *);
extern u8 func_8020577C[];

void func_80205720(struct func_80205720_Struct *arg0, void *arg1) {
    void **pa1;

    pa1 = &arg1;
    if (func_80133A24(arg0->unk38->unk10 >> 0x10, *pa1) != 0) {
        func_80005700(arg0);
        return;
    }
    func_800058DC(arg0, func_8020577C);
}
