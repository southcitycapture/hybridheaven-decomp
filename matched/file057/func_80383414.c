#include "context.h"

typedef struct func_80383414_StructB { u8 pad0[0x30]; u8 *unk30; } func_80383414_StructB;
typedef struct func_80383414_Struct { u8 pad0[0xC]; void *unkC; u8 pad10[0x99]; u8 unkA9; u8 pad1[0xB0 - 0xAA]; s16 unkB0; } func_80383414_Struct;

void func_80383414(func_80383414_Struct *arg0, s32 arg1) {
    f32 v;
    u32 t;
    void func_80005700();
    f32 func_8001EAD0(s16);

    if (arg0->unkA9 == 6) {
        func_80005700();
    }
    func_80006214(arg0->unkC);
    if (arg0->unkB0 < 0x21) {
        ((func_80383414_StructB *)D_8008DA88[1 + arg0->unkA9])->unk30[8] = 0xFF;
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        ((func_80383414_StructB *)D_8008DA88[1 + arg0->unkA9])->unk30[9] = (u32)(255.0f - v * 128.0f);
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        ((func_80383414_StructB *)D_8008DA88[1 + arg0->unkA9])->unk30[10] = (u32)(255.0f - v * 255.0f);
    }
    if (arg0->unkB0 < 0x11) {
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        ((func_80383414_StructB *)D_8008DA88[7 + arg0->unkA9 * 2])->unk30[8] = (u32)(v * 191.0f + 63.0f);
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        ((func_80383414_StructB *)D_8008DA88[7 + arg0->unkA9 * 2])->unk30[9] = (u32)(v * 96.0f + 32.0f);
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        t = (u32)(v * 191.0f + 63.0f);
        ((func_80383414_StructB *)D_8008DA88[8 + arg0->unkA9 * 2])->unk30[10] = t;
        ((func_80383414_StructB *)D_8008DA88[8 + arg0->unkA9 * 2])->unk30[9] = t;
        ((func_80383414_StructB *)D_8008DA88[8 + arg0->unkA9 * 2])->unk30[8] = t;
    }
    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x21) {
        func_80005700(arg0);
    }
}
