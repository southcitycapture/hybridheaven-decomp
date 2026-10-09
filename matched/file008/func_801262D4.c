#include "context.h"

typedef struct func_801262D4_Struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
} func_801262D4_Struct;

extern s32 func_80005204(u16);
extern void func_80126198(s32, u16, ...);
extern func_801262D4_Struct *D_80175490[];

void func_801262D4(u16 arg0, u16 arg1) {
    func_801262D4_Struct *temp_v0;
    func_801262D4_Struct *sp24;
    s32 sp1C;

    temp_v0 = D_80175490[arg0];
    if (temp_v0 != NULL) {
        if (temp_v0->unk0 != 0) {
            sp24 = temp_v0;
            func_80126198(temp_v0->unk0, arg1);
        }
        if (temp_v0->unk8 != 0) {
            sp1C = temp_v0->unk4 & 0xFFFFFF;
            func_80126198(func_80005204(temp_v0->unk8) + sp1C, arg1, sp1C);
        }
    }
}
