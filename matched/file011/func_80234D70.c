#include "context.h"

typedef struct func_80234D70_Struct {
    u8 pad[0xA9];
    u8 unkA9;
} func_80234D70_Struct;

typedef struct func_80234D70_Struct2 {
    u8 pad[0x10];
    s32 unk10;
} func_80234D70_Struct2;

void func_80234D70(func_80234D70_Struct *arg0, func_80234D70_Struct2 *arg1) {
    s32 var_v0;

    var_v0 = arg0->unkA9;
    if (!(var_v0 & 1)) {
        func_80145310(arg1->unk10, 8, 9);
        var_v0 = arg0->unkA9;
    }
    if (!(var_v0 & 2)) {
        func_80145310((s32)arg1, 8, 9);
    }
}
