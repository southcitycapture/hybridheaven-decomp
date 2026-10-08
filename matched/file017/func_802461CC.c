#include "context.h"

struct func_802461CC_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_801C3044();
extern void func_801C2F0C();
extern void func_800058DC();
extern void func_80246214();

void func_802461CC(struct func_802461CC_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80246214);
    }
}
