#include "common.h"

typedef struct func_80135678_StructB { u8 pad0[0x10]; u32 unk10; u32 unk14; } func_80135678_StructB;
typedef struct func_80135678_StructC { u8 pad0[0x30]; u8 *unk30; } func_80135678_StructC;
typedef struct func_80135678_StructA { u8 pad0[0x38]; func_80135678_StructB *unk38; u8 pad3C[0x5C-0x3C]; s16 unk5C; u16 unk5E; } func_80135678_StructA;

void func_80135678(func_80135678_StructA *arg0, func_80135678_StructC **arg1) {
    u32 v;
    u32 a;
    u8 c;
    f32 t;
    s16 *p;
    v = (arg0->unk38->unk14 >> 24) & 0xFF;
    a = (arg0->unk38->unk10 >> 8) & 0xFF;
    c = arg0->unk38->unk10 & 0xFF;
    t = ((f64)arg0->unk5C + 1.0) / ((f64)v + 1.0);
    p = &arg0->unk5C;
    (*arg1)->unk30[0x4B] = (u32)((f32)a + ((f32)(u32)c - (f32)a) * t);
    if (arg0->unk5E == 0) {
        *p = *p + 1;
        if (*p >= (s32)v) {
            arg0->unk5E = 1;
            *p = v;
        }
    } else {
        *p = *p - 1;
        if (*p <= 0) {
            arg0->unk5E = 0;
            *p = 0;
        }
    }
}
