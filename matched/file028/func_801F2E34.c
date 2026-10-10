#include "context.h"

extern struct func_801FCB44_Struct *D_8038D8D0;
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24(u64);
extern f64 D_80208A28;
extern f64 D_80208A30;
extern f64 D_80208A38;
extern f64 D_80208A40;

struct func_801F2E34_Struct3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_801F2E34_Struct2 {
    u8 pad0[0x30];
    struct func_801F2E34_Struct3 *unk30;
};
struct func_801F2E34_Struct1 {
    u8 pad0[4];
    struct func_801F2E34_Struct2 *unk4;
};

s32 func_801F2E34(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x40C00000) != 0) {
        func_801C0EB0(3, 1);
        return 4;
    }
    temp_ret = func_801C0F18(3, 1);
    ((struct func_801F2E34_Struct1 *) D_8038D8D0)->unk4->unk30->unk12 = (s16) (s32) (((f32) ((((f64) (f32) (func_80034C24(temp_ret) / D_80208A28) / D_80208A30) * D_80208A38) + D_80208A40) * 2048.0f) / 90.0f);
    return 3;
}
