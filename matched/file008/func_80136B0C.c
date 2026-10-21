#include "context.h"

typedef struct func_80136B0C_StructState {
    u8 pad[0x192];
    u16 unk192;
    u16 unk194;
    u16 unk196;
} func_80136B0C_StructState;

extern s32 D_8017AC24[];
extern s32 D_80135E60(void *, f32, s32, f32);
void func_80136BE0(func_801361C8_Struct *arg0, s32 arg1);
void func_80136C68(s32 arg0, s32 arg1);

void func_80136B0C(func_801361C8_Struct *arg0, s32 arg1) {
    if (D_80135E60(arg0, (f32)((arg0->unk38->unk10 >> 16) & 0xFF), 1, 0.0f) == 0) {
        func_800058DC(arg0, func_80136C68);
        return;
    }
    if (((func_80136B0C_StructState *)&D_801BBBF0)->unk196 == 1) {
        ((func_80136B0C_StructState *)&D_801BBBF0)->unk192 = 1;
        func_800179B0(D_8017AC24[(arg0->unk38->unk10 >> 8) & 0xFF]);
        func_800058DC(arg0, func_80136BE0);
    }
}
