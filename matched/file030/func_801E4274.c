#include "common.h"

extern u32 D_801EB778;
extern struct func_801E5060_StructC *D_8038D8D0;
extern f64 func_80034C24();
extern s32 func_801C0B8C(u64);
extern s32 func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
struct func_801E4378_Struct3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_801E4378_Struct2 {
    u8 pad0[0x30];
    struct func_801E4378_Struct3 *unk30;
};
s32 func_801E4274(s32 arg0, s32 arg1) {
    u64 t;
    if (func_801C0B8C(0x90F560) != 0) {
        (*(struct func_801E4378_Struct2 **)D_8038D8D0)->unk30->unk12 = 0x1E66;
        func_801C0EB0(3, 0);
        D_801EB778 = 0;
        return 0xB;
    }
    t = func_801C0F18(3, 0);
    (*(struct func_801E4378_Struct2 **)D_8038D8D0)->unk30->unk12 += (s16)((2048.0f * (f32)(((func_80034C24(t) / 1000000.0 / 7.0) * -18.0) + 24.0)) / 90.0f);
    return 0xA;
}
