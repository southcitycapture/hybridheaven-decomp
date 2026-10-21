#include "context.h"

struct func_801F5BAC_Node { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801F5BAC_Mid { u8 pad0[0x2C]; struct func_801F5BAC_Node *unk2C; };
struct func_801F5BAC_In { u8 pad0[0x24]; struct func_801F5BAC_Mid *unk24; };
struct func_801F5BAC_Struct { u8 pad0[0xC]; struct func_801F5BAC_In *unkC; u8 pad1[0x3C - 0x10]; u16 unk3C; };

extern void func_80147370(void *, s32, s32, s32, s32);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_801FCAE0(f32, f32, f32, s32);
extern f64 D_80218CB0;
extern f64 D_80218CB8;
void func_801F5EFC();
extern void func_8012A94C(void *, s32);

void func_801F5BAC(struct func_801F5BAC_Struct *arg0, s32 arg1) {
    u32 t;
    f32 x, y, z;
    struct func_801F5BAC_Node *n;
    u16 k = 20;

    t = (u16)(u32)((f32)(arg0->unk3C * 0xA0) / (f32)k);
    func_80147370(arg0->unkC, (u8)(u32)(t * D_80218CB0), (u8)(u32)(t * 0.5), (u8)(u32)(t * D_80218CB8), 0xFF);
    func_8012A94C(arg0->unkC, 0x100);
    n = arg0->unkC->unk24->unk2C;
    x = n->unk4; y = n->unk8; z = n->unkC;
    func_801FCA4C(x, y, z, 300.0f, 0x1D8);
    func_801FCAE0(x, y, z, 0x1D8);
    arg0->unk3C = arg0->unk3C - 1;
    if (arg0->unk3C == 0) {
        func_800058DC(arg0, (s32)func_801F5EFC);
    }
}
