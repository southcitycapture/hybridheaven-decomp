#include "context.h"

extern f32 D_801FD3CC;
extern f32 D_801FD3D0;

struct func_801F8744_Hdr {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801F8744(s32 arg0, s32 arg1) {
    struct func_801F8744_Hdr *hdr;

    hdr = (struct func_801F8744_Hdr *)func_801BF6B0(0);
    if (hdr->unkC >= 0x14) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FD3CC;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 19.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FD3D0;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x02A80012, 0, 0x1000, 6.0f);
        return 0x17;
    }
    return 0x16;
}
