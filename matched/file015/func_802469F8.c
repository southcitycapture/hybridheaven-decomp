#include "context.h"

typedef struct func_802469F8_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_802469F8_Struct;

extern s32 func_800058DC(void *, void *);
extern void func_80246A44();

void func_802469F8(func_802469F8_Struct *arg0, s32 arg1) {
    s32 val;

    val = arg0->unk5C;
    if (func_80010550(arg1, val, arg0) != 0) {
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80246A44);
    }
}
