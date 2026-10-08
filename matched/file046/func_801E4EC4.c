#include "context.h"

typedef struct func_801E4EC4_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E4EC4_Inner;

typedef struct func_801E4EC4_Mid {
    u8 pad0[0x30];
    func_801E4EC4_Inner *unk30;
} func_801E4EC4_Mid;

typedef struct func_801E4EC4_Outer {
    u8 pad0[0x10];
    func_801E4EC4_Mid *unk10;
} func_801E4EC4_Outer;

extern f32 D_801EB3A0;
extern f32 D_801EB3A4;

s32 func_801E4EC4(s32 arg0, s32 arg1) {
    ((func_801E4EC4_Outer *) D_8038D8D0)->unk10->unk30->unk4 = D_801EB3A0;
    ((func_801E4EC4_Outer *) D_8038D8D0)->unk10->unk30->unk8 = 18.0f;
    ((func_801E4EC4_Outer *) D_8038D8D0)->unk10->unk30->unkC = D_801EB3A4;
    return 2;
}
