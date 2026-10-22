#include "context.h"

typedef struct func_8012F41C_Struct2 { u8 pad[0x24]; s32 unk24; } func_8012F41C_Struct2;
typedef struct func_8012F41C_Gfx { u32 w0; u32 w1; } func_8012F41C_Gfx;
typedef struct func_8012F41C_Struct {
    u8 pad[0x24];
    func_8012F41C_Struct2 *unk24;
    u8 pad2[0x74];
    func_8012F41C_Gfx dl[3];
} func_8012F41C_Struct;
extern u8 D_8017B4A0[];

void *func_8012F41C(func_8012F41C_Struct *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    func_8012F41C_Gfx *gfx = arg0->dl;
    func_8012F41C_Struct2 *sub = arg0->unk24;

    sub->unk24 = 0x80000600;
    { func_8012F41C_Gfx *_g = gfx++; _g->w0 = 0xDE000000; _g->w1 = (u32)D_8017B4A0; }
    { func_8012F41C_Gfx *_g = gfx++; _g->w0 = 0xFA000000; _g->w1 = (((u32)arg1 & 0xFF) << 24) | (((u32)arg2 & 0xFF) << 16) | (((u32)arg3 & 0xFF) << 8) | ((u32)arg4 & 0xFF); }
    { func_8012F41C_Gfx *_g = gfx++; _g->w0 = 0xDF000000; _g->w1 = 0; }
    return arg0->dl;
}
