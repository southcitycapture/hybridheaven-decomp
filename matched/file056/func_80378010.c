#include "common.h"

extern void func_800058DC(void *arg0, s32 arg1);

typedef struct func_80378010_Struct {
    u8 pad[0x8C];
    s32 unk8C;
} func_80378010_Struct;

void func_80378010(func_80378010_Struct *arg0, s32 arg1) {
    func_800058DC(arg0, arg0->unk8C);
}
