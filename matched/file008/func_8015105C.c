#include "context.h"

typedef struct func_8015105C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    u8 unk90;
    u8 unk91;
    u16 unk92;
} func_8015105C_Struct;

typedef struct func_8015105C_Vals {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_8015105C_Vals;

extern void func_8001F790(void *);
extern func_8015105C_Struct *func_8012C4D0(s32, func_8015105C_Vals, s32);
extern func_8015105C_Vals D_80183300;
extern s32 D_801BBC2C;

func_8015105C_Struct *func_8015105C(u16 arg0) {
    func_8015105C_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80183300, 1);
    if (temp_v0 != NULL) {
        func_8001F790(temp_v0);
        temp_v0->unk2C = temp_v0->unk2C | 0x20;
        temp_v0->unk90 = 1;
        temp_v0->unk91 = 0;
        temp_v0->unk92 = arg0;
        temp_v0->unk40 = 0.0f;
        temp_v0->unk44 = 0.0f;
        temp_v0->unk48 = 0.0f;
        return temp_v0;
    }
    return NULL;
}
