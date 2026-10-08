#include "context.h"

struct func_80244F98_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80244F98_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_80244F98_Child *unk5C;
};

extern void func_80244FDC();

void func_80244F98(struct func_80244F98_Obj *arg0, void *arg1) {
    struct func_80244F98_Child *child;

    child = arg0->unk5C;
    child->unk78 = 1;
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_800058DC(arg0, &func_80244FDC);
}
