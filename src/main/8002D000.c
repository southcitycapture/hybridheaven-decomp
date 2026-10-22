#include "common.h"


struct func_8002D000_Struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[0x4];
    s32 *unk1C;
};

s32 func_8002D000(struct func_8002D000_Struct *arg0, s32 arg1, s32 arg2) {
    s32 *temp_v0;

    temp_v0 = arg0->unk1C;
    if (arg1 == 2) {
        temp_v0[arg0->unk14] = arg2;
        arg0->unk14 = arg0->unk14 + 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D150.s")


s32 func_8002D490(s32 *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 1) {
        *arg0 = arg2;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002D924.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002DABC.s")


struct func_8002DC50_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x24];
    s32 unk28;
    s32 unk2C;
};

typedef struct {
    u32 w0;
    u32 w1;
} func_8002DC50_Gfx;

s32 func_80028A10(s32);

func_8002DC50_Gfx *func_8002DC50(struct func_8002DC50_Struct *arg0, s32 arg1, s32 arg2, func_8002DC50_Gfx *arg3) {
    func_8002DC50_Gfx *gfx;
    u32 w0;
    u32 w1;

    arg3[0].w0 = (arg1 & 0xFFFF) | 0x08000000; arg3[0].w1 = ((arg1 & 0xFFFF) << 16) | ((arg2 * 2) & 0xFFFF);
    arg3[1].w0 = 0x0B000020;
    gfx = arg3 + 2;
    arg3[1].w1 = func_80028A10((s32)arg0 + 8);
    {
        func_8002DC50_Gfx *_g = gfx++;
        _g->w0 = ((arg0->unk2C & 0xFF) << 16) | 0x0E000000 | (arg0->unk2 & 0xFFFF);
        _g->w1 = func_80028A10(arg0->unk28);
    }
    arg0->unk2C = 0;
    return gfx;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002D000/func_8002DD00.s")

