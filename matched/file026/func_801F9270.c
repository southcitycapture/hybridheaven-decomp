#include "context.h"

extern f32 D_801FD404;
extern f32 D_801FD408;

struct func_801F9270_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801F9270_L4 {
    u8 pad0[0x2C];
    struct func_801F9270_Target *unk2C;
};
struct func_801F9270_L3 {
    u8 pad0[0x24];
    struct func_801F9270_L4 *unk24;
};
struct func_801F9270_L2 {
    u8 pad0[0x8];
    struct func_801F9270_L3 *unk8;
};
struct func_801F9270_L1 {
    u8 pad0[0x8];
    struct func_801F9270_L2 *unk8;
};

s32 func_801F9270(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x040F1FA0) != 0) {
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801FD404;
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FD408;
        ((struct func_801F9270_L1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1B60;
        func_801CC470(1, 0x01B8000B, 0, 0x1000, 1.0f);
        return 0xC;
    }
    return 0xB;
}
