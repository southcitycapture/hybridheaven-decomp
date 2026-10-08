#include "context.h"

typedef struct func_80234DD4_Struct {
    u8 pad[0xA9];
    u8 unkA9;
} func_80234DD4_Struct;

typedef struct func_80234DD4_Struct1 {
    u8 pad[0x10];
    s32 unk10;
} func_80234DD4_Struct1;

void func_80234DD4(func_80234DD4_Struct *arg0, func_80234DD4_Struct1 *arg1) {
    s32 var_v0;

    var_v0 = arg0->unkA9;
    if (!(var_v0 & 1)) {
        func_801451C0(arg1->unk10, 2);
        var_v0 = arg0->unkA9;
    }
    if (!(var_v0 & 2)) {
        func_801451C0((s32)arg1, 2);
    }
}
