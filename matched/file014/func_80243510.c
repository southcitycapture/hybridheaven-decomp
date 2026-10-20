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
void func_80243564(struct func_80244F98_Obj *arg0, s32 arg1);
extern void func_80020744(s32, void *, void *);

struct func_80243510_StructObj {
    u8 pad[0x5C];
    void *unk5C;
};

void func_80243510(struct func_80243510_StructObj *arg0, s32 arg1) {
    extern void func_80020744();
    void *child;

    child = arg0->unk5C;
    func_80010550(arg1, child);
    if (func_80133A24(0x48) != 0) {
        func_80020744(0x66B);
        func_800058DC(arg0, (void *)func_80243564);
    }
}
