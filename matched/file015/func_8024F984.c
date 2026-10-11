#include "context.h"

typedef struct func_8024F984_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F984_Struct;

extern s32 func_80011140(s32, s32, func_8024EF6C_Vec, s32);
extern void func_8024F9F0(s32 arg0, s32 arg1);

void func_8024F984(func_8024F984_Struct *arg0, volatile s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80011140(arg1, temp_a1, D_80254AD0, 10) != 0) {
        func_800058DC(arg0, func_8024F9F0);
    }
}
