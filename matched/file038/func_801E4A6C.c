#include "context.h"
extern struct func_801E51CC_A *D_801DAB14;
extern s32 D_801E6B48;
extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern void func_8038D28C(s32 a0);

extern s32 func_801CE284();
extern s32 D_801E6B4C;

struct func_801E4A6C_W {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_801E4A6C_Z {
    u8 pad0[0x2C];
    struct func_801E4A6C_W *unk2C;
};
struct func_801E4A6C_Y {
    u8 pad0[0x24];
    struct func_801E4A6C_Z *unk24;
};
struct func_801E4A6C_X {
    u8 pad0[8];
    struct func_801E4A6C_Y *unk8;
};

s32 func_801E4A6C(s32 arg0, s32 arg1) {
    if (D_801E6B48 == 0) {
        if (func_801CE284() != 0) {
            ((struct func_801E4A6C_X *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0xC12;
            func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
            return 8;
        }
        if (D_801E6B4C == 0x12) {
            func_8038D28C(0x677);
        }
        D_801E6B4C = D_801E6B4C + 1;
    }
    return 7;
}
