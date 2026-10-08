#include "context.h"

typedef struct func_8012A774_Vec {
    u8 pad0[0x12];
    s16 unk12;
} func_8012A774_Vec;

typedef struct func_8012A774_Obj {
    u8 pad0[0x2C];
    func_8012A774_Vec *unk2C;
} func_8012A774_Obj;

typedef struct func_8012A774_Arg {
    u8 pad0[0x24];
    func_8012A774_Obj *unk24;
} func_8012A774_Arg;

s32 func_8012A774(func_8012A774_Arg *arg0, s16 arg1, s16 arg2) {
    func_8012A774_Vec *temp_v1;
    s16 temp_v0;
    s32 temp_a3;
    s32 var_a0;

    temp_v1 = arg0->unk24->unk2C;
    temp_v0 = temp_v1->unk12;
    temp_a3 = temp_v0 - arg1;
    if (temp_a3 < 0) {
        var_a0 = -temp_a3;
    } else {
        var_a0 = temp_a3;
    }
    if (arg2 >= (var_a0 & 0x1FFF)) {
        temp_v1->unk12 = arg1;
        return 1;
    }
    if (((arg1 - temp_v0) & 0x1FFF) >= 0x1000) {
        temp_v1->unk12 = (s16) (temp_v0 - arg2);
    } else {
        temp_v1->unk12 = (s16) (temp_v0 + arg2);
    }
    return 0;
}
