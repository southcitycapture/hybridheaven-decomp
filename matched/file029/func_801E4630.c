#include "context.h"
extern f32 D_801E6B2C;
extern f32 D_801E6B30;
extern s32 func_801D5250(s32, s32);

typedef struct func_801E4630_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E4630_Struct;

#define CH ((func_801E4630_Struct *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)((s32)D_801DAB14 + 8) + 8) + 0x24) + 0x2C)))

s32 func_801E4630(s32 arg0, s32 arg1) {
    func_801E4630_Struct *p;
    if (func_801C0DE4(4, 1, 0x40F9999A) != 0) {
        func_801C0EB0(4, 1);
        p = CH;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x214, D_801E6B2C, 1.0f);
        CH->unk4 = 5120.0f;
        return 0xF;
    }
    if (func_801D5250(0x03480052, 0x14) != 0 || func_801D5250(0x03480052, 0x38) != 0) {
        p = CH;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x676, D_801E6B30, 1.0f);
    }
    return 0xE;
}
