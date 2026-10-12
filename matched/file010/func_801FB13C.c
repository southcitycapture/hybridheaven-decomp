#include "context.h"

struct func_801FB13C_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_80005700(s32);
extern s32 func_801FA248(void *, s32);
extern s32 func_801FA624();
extern s32 D_802170C0;

void func_801FB13C(struct func_801FB13C_Struct *arg0, s32 arg1) {
    if (func_801FA248(arg0->unk24, 5) == 0) {
        func_80005700(arg0);
        D_802170C0 = 0;
        func_801FA624(0x12A);
    }
}
