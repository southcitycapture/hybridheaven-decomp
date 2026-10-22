#include "context.h"
extern s32 func_8012C6B4(s32 a);
extern f32 D_8038B428;
extern f32 D_8038B42C;
typedef struct func_803721E0_Struct { u8 pad[0x6C]; f32 u6C; f32 u70; f32 u74; u8 u78; u8 pad2[2]; u8 u7B; u8 u7C; } func_803721E0_Struct;
void func_803721E0(func_803721E0_Struct *arg0, s32 arg1) {
    f32 a; f32 b; f32 c; u8 d; s32 pad1; u8 e; u8 f; s32 v; s32 t; u8 *p = &arg0->u7B;
    a = arg0->u6C; b = arg0->u70; c = arg0->u74; d = arg0->u78; e = arg0->u7C;
    t = func_8012C6B4(3) + 1; f = t;
    D_801CE330(arg0, 0x14, a, b, c, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, t, 0x18, D_8038B428, 1);
    D_801CE330(arg0, 0x15, a, b, c, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, 1, 0x18, D_8038B42C, 1);
    *p += f;
    if (d != 0 || e != 0) v = 5; else v = 10;
    if (v < *p) func_800058DC(arg0, func_8037118C);
}
