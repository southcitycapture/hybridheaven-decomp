#include "common.h"
#define CTX_CAT2(a, b) a##b
#define CTX_CAT(a, b) CTX_CAT2(a, b)
extern s32 func_800058DC(void *, void *);
extern void func_80020718(s32);
extern s32 func_80133A24(s32);
void func_802463EC(s32 arg0, s32 arg1);


typedef struct func_80246388_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
} func_80246388_Struct;

void func_80246388(func_80246388_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 2) {
        if (func_80133A24(0x73) != 0) {
            func_800058DC(arg0, func_802463EC);
            func_80020718(7);
        }
    }
}
