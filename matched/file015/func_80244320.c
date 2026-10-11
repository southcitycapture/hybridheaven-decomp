#include "context.h"

typedef struct func_80244320_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_80244320_Struct;

extern void func_800058DC(void *, void *);
extern void func_8024436C(void);

void func_80244320(func_80244320_Struct *arg0, s32 arg1) {
    s32 val;

    val = arg0->unk5C;
    if (func_80010550(arg1, val, arg0) != 0) {
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024436C);
    }
}
