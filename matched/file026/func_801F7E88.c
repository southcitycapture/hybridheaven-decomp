#include "context.h"

extern f32 D_801FD3B4;
extern f32 D_801FD3B8;

struct func_801F7E88_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801F7E88(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01607A5F) != 0) {
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unk4 = D_801FD3B4;
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unk8 = 0.0f;
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unkC = D_801FD3B8;
        ((struct func_801F7E88_Struct *) D_801DAB14->unk8->unk24->unk2C)->unk12 = 0x1800;
        func_801CC470(0, 0x02A8000D, 0, 0, 3.0f);
        return 0xA;
    }
    return 9;
}
