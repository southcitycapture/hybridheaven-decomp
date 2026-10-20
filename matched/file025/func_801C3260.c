#define func_801C3260 func_801C3260_decl
#include "context.h"
#undef func_801C3260

typedef struct func_801C3260_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801C3260_Struct3;

typedef struct func_801C3260_Struct2 {
    u8 pad0[0x30];
    func_801C3260_Struct3 *unk30;
} func_801C3260_Struct2;

typedef struct func_801C3260_Struct {
    u8 pad0[0x90];
    s8 unk90;
    s8 unk91;
    s8 unk92;
    u8 pad93[9];
    u16 unk9C;
    u8 pad9E[10];
    func_801C3260_Struct2 *unkA8;
} func_801C3260_Struct;

extern s32 D_801DA2A0[];

void func_801C3260(func_801C3260_Struct *arg0, func_801C3260_Struct2 **arg1) {
    s8 temp_v1;
    s8 temp_a1;
    s8 temp_a2;
    func_801C3260_Struct2 *temp_v0;
    u32 temp_idx;

    temp_idx = arg0->unk9C % 3U;
    func_8012CF8C(arg0, (u8 *)arg1[0]->unk30 + 0x40, 0x2DC, D_801DA2A0[temp_idx]);
    temp_v1 = arg0->unk90;
    temp_v0 = arg0->unkA8;
    temp_a1 = arg0->unk91;
    temp_a2 = arg0->unk92;
    arg1[0]->unk30->unk4 = temp_v0->unk30->unk4 + (f32)temp_v1;
    arg1[0]->unk30->unk8 = temp_v0->unk30->unk8 + (f32)temp_a1;
    arg1[0]->unk30->unkC = temp_v0->unk30->unkC + (f32)temp_a2;
    if (arg1[0]->unk30->unk8 < 0.0f) {
        func_80005700(arg0, temp_a1, temp_a2);
    }
    arg0->unk9C = arg0->unk9C + 1;
    arg0->unk9C = arg0->unk9C & 3;
}
