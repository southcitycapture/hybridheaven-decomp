#include "context.h"

extern s32 D_801EB7D0;
extern f64 D_801EC6E0;

typedef struct func_801E47C0_Struct3 {
    u8 pad[0x12];
    s16 unk12;
} func_801E47C0_Struct3;
typedef struct func_801E47C0_Struct2 {
    u8 pad[0x30];
    func_801E47C0_Struct3 *unk30;
} func_801E47C0_Struct2;
typedef struct func_801E47C0_Struct1 {
    u8 pad[4];
    func_801E47C0_Struct2 *unk4;
} func_801E47C0_Struct1;

s32 func_801E47C0(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f64 time;
    func_801E47C0_Struct3 *obj;

    if (func_801C0B8C(0x90F560) != 0) {
        ((func_801E47C0_Struct1 *)D_8038D8D0)->unk4->unk30->unk12 = 0x1E66;
        func_801C0EB0(3, 1);
        D_801EB7D0 = 0;
        return 10;
    }
    temp_ret = func_801C0F18(3, 1);
    time = func_80034C24(temp_ret);
    obj = ((func_801E47C0_Struct1 *)D_8038D8D0)->unk4->unk30;
    obj->unk12 = obj->unk12 + (s16)(s32)((2048.0f * (f32)((((time / D_801EC6E0) / 7.0) * -18.0) + 24.0)) / 90.0f);
    return 9;
}
