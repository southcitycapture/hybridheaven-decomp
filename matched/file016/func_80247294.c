#include "context.h"

struct func_80247294_StructD {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 padE[2];
    u32 unk10;
};
struct func_80247294_StructA {
    u8 pad[0x38];
    struct func_80247294_StructD *unk38;
};
struct func_80247294_StructB {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    u8 padE[2];
    f32 unk10;
};

s32 func_80247294(struct func_80247294_StructA *arg0, struct func_80247294_StructB *arg1) {
    arg1->unk0 = (f32)arg0->unk38->unk6 / 10.0;
    arg1->unk4 = (f32)arg0->unk38->unk8 / 10.0;
    arg1->unk8 = (f32)arg0->unk38->unkA / 10.0;
    arg1->unkC = arg0->unk38->unkC;
    if (func_80133A24(0xBF)) {
        arg1->unk10 = (f64)(arg0->unk38->unk10 >> 16) / 10.0;
    } else {
        arg1->unk10 = -(f32)((f64)(arg0->unk38->unk10 >> 16) / 10.0);
    }
    return 1;
}
