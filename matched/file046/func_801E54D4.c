#include "context.h"

typedef struct func_801E54D4_Z {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E54D4_Z;

typedef struct func_801E54D4_Y {
    u8 pad0[0x30];
    func_801E54D4_Z *unk30;
} func_801E54D4_Y;

typedef struct func_801E54D4_X {
    u8 pad0[0x18];
    func_801E54D4_Y *unk18;
} func_801E54D4_X;

extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern u32 func_801C1134(s32, s32);
extern void func_801E51C0();
extern f32 D_801EB3B0;

s32 func_801E54D4(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 ratio;
    s32 max;
    u32 val;

    max = 0x6F;
    if (func_801C1088(3, 6, max) != 0) {
        func_801C10D8(3, 6);
        return 0x10;
    }
    val = func_801C1134(3, 6);
    ratio = (f32) val / (f32) max;
    temp_fv0 = (D_801EB3B0 * ratio) + 1.0f;
    ((func_801E54D4_X *) D_8038D8D0)->unk18->unk30->unk18 = temp_fv0;
    ((func_801E54D4_X *) D_8038D8D0)->unk18->unk30->unk1C = temp_fv0;
    ((func_801E54D4_X *) D_8038D8D0)->unk18->unk30->unk20 = temp_fv0;
    func_801E51C0();
    return 0xF;
}
