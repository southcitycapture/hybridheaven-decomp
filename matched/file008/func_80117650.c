#include "common.h"
typedef struct func_80117610_Struct {
    u8 pad0[0x18E];
    u16 unk18E;
    u16 unk190;
    u8 pad1[0x1D8 - 0x192];
    u16 unk1D8;
    u8 pad2[2];
    u16 unk1DC;
} func_80117610_Struct;
extern func_80117610_Struct D_801BBBF0;
extern f32 func_8002FC20(f32);

extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_8001DFFC(s32, s32, s32, void *, s32, s32, s32, s32);
extern u8 D_80189540[];

void func_80117650(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 d;
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    f32 sp58;
    f32 sp54;

    x = arg0 - arg3;
    y = arg1 - arg4;
    z = arg2 - arg5;
    sp50 = x * x;
    sp4C = z * z;
    d = func_8002FC20(x * x + y * y + sp4C);
    sp58 = 0.0f;
    sp48 = arg3 - arg0;
    sp44 = arg5 - arg2;
    if (func_8010843C(arg0, arg1, arg2, (sp48 / d) * 100.0f + arg0, ((arg4 - arg1) / d) * 100.0f + arg1, (sp44 / d) * 100.0f + arg2) != 0) {
        x = arg0 - *(f32 *)((u8 *)&D_801BBBF0 + 0x380);
        y = arg1 - *(f32 *)((u8 *)&D_801BBBF0 + 0x384);
        w = arg2 - *(f32 *)((u8 *)&D_801BBBF0 + 0x388);
        sp58 = func_8002FC20(x * x + y * y + w * w);
    }
    d = func_8002FC20(sp50 + sp4C);
    sp54 = 0.0f;
    if (func_8010843C(arg0, arg1, arg2, (sp48 / d) * 100.0f + arg0, arg1, (sp44 / d) * 100.0f + arg2) != 0) {
        x = arg0 - *(f32 *)((u8 *)&D_801BBBF0 + 0x380);
        y = arg1 - *(f32 *)((u8 *)&D_801BBBF0 + 0x384);
        w = arg2 - *(f32 *)((u8 *)&D_801BBBF0 + 0x388);
        sp54 = func_8002FC20(x * x + y * y + w * w);
    }
    func_8001DFFC(9, 0x14, 0x78, D_80189540, (s32)sp58, (s32)((f64)sp58 * 10.0) % 10, (s32)sp54, (s32)((f64)sp54 * 10.0) % 10);
}
