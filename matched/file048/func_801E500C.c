#include "context.h"
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

struct func_801E500C_Leaf {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
};

struct func_801E500C_Mid {
    u8 pad0[0x30];
    struct func_801E500C_Leaf *unk30;
};

struct func_801E500C_Top {
    u8 pad0[0x10];
    struct func_801E500C_Mid *unk10;
};

s32 func_801E500C(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 temp_f0;

    if (func_801C1088(3, 3, 0x1E) != 0) {
        func_801C10D8(3, 3);
        return 3;
    }
    temp_f0 = (f32) func_801C1134(3, 3) / 30.0f;
    temp_v1 = (u32) (255.0f * temp_f0);
    ((struct func_801E500C_Top *) D_8038D8D0)->unk10->unk30->unk48 = (u8) temp_v1;
    ((struct func_801E500C_Top *) D_8038D8D0)->unk10->unk30->unk49 = (u8) temp_v1;
    ((struct func_801E500C_Top *) D_8038D8D0)->unk10->unk30->unk4A = (u8) temp_v1;
    return 2;
}
