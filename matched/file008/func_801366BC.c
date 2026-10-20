#include "context.h"
void func_801367C8(u8 *arg0, void *arg1);
extern void func_80136898();
void func_80136898(s32 arg0, void *arg1);
void func_80136978(s32 arg0, s32 arg1);

typedef struct func_801366BC_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_801366BC_StructInner;

typedef struct func_801366BC_Struct {
    u8 pad0[0x38];
    func_801366BC_StructInner *unk38;
} func_801366BC_Struct;

void func_801366BC(func_801366BC_Struct *arg0, s32 arg1) {
    if (func_80135E60(arg0, (f32) ((arg0->unk38->unk10 >> 16) & 0xFF), 1, 0x41000000) == 0) {
        func_800058DC(arg0, &func_80136978);
        return;
    }
    if (D_801BBD86 == 1) {
        if (func_8013D4A0(0x27, 0) == 0) {
            D_801BBD82 = 1;
            func_800179B0(&D_80217F5C);
            func_80020744(0x3DB);
            func_800058DC(arg0, &func_80136898);
            return;
        }
        func_800179B0(&D_80217F5C);
        D_801BBC06 = (arg0->unk38->unk10 >> 8) & 0xFF;
        func_800058DC(arg0, &func_801367C8);
    }
}
