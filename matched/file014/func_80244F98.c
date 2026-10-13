#include "context.h"


extern void func_80244FDC();
extern void func_800058DC();

void func_80244F98(struct func_80244F98_Obj *arg0, void *arg1) {
    struct func_80244F98_Child *child;

    child = arg0->unk5C;
    child->unk78 = 1;
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_800058DC(arg0, &func_80244FDC);
}
