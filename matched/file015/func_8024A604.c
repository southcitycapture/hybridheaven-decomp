#include "common.h"
extern void func_800058DC(void *, void *);


typedef struct func_8024A604_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024A604_Struct;
extern void func_8024A644();

void func_8024A604(func_8024A604_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x16) {
        func_800058DC(arg0, func_8024A644);
    }
}
