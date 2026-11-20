#include "common.h"
typedef s32 (*func_803714B4_Emitter)(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern s32 D_801CE330(void *a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
extern void func_800058DC(void *a0, void *a1);
struct func_8037118C_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};
void func_8037118C(struct func_8037118C_Struct *arg0, s32 arg1);

extern s32 func_8012C6B4(s32 a);
typedef struct func_803721E0_Struct { u8 pad[0x6C]; f32 u6C; f32 u70; f32 u74; u8 u78; u8 pad2[2]; u8 u7B; u8 u7C; } func_803721E0_Struct;
void func_803721E0(func_803721E0_Struct *arg0, s32 arg1) {
    f32 a; f32 b; f32 c; u8 d; s32 t; u8 e; u8 f; s32 v; u8 *p = &arg0->u7B;
    a = arg0->u6C; b = arg0->u70; c = arg0->u74; d = arg0->u78; e = arg0->u7C;
    t = func_8012C6B4(3) + 1; f = t;
    D_801CE330(arg0, 0x14, a, b, c, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, t, 0x18, (0.05f), 1);
    D_801CE330(arg0, 0x15, a, b, c, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, 1, 0x18, (0.05f), 1);
    *p += f;
    if (d != 0 || e != 0) v = 5; else v = 10;
    if (v < *p) func_800058DC(arg0, func_8037118C);
}
