#include "context.h"
extern void func_800058DC(void *, void *);
void func_802432C0(void *arg0, void *arg1);
void func_802435AC(s32 arg0, s32 arg1);
extern s32 func_80133A24();

struct func_80243260_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

void func_80243260(struct func_80243260_Struct *arg0, s32 arg1) {
    arg0->unk3C = 0;
    if (func_80133A24(0x16F) == 0) {
        func_800058DC(arg0, &func_802432C0);
        return;
    }
    func_800058DC(arg0, &func_802435AC);
}
