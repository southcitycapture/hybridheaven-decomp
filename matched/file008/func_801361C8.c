#include "context.h"

extern s32 func_80135E60(void *, f32, s32, s32);
extern s32 func_8013D4A0(s32, s32);
extern void func_801364B4();
extern void func_801363C8();
extern void func_801362DC();
extern s8 D_801BBC06;
extern s16 D_801BBD82;
extern u16 D_801BBD86;
extern u8 D_80217F5C[];

typedef struct func_801361C8_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_801361C8_StructInner;

typedef struct func_801361C8_Struct {
    u8 pad0[0x38];
    func_801361C8_StructInner *unk38;
} func_801361C8_Struct;

void func_801361C8(func_801361C8_Struct *arg0, s32 arg1) {
    if (func_80135E60(arg0, (f32) ((arg0->unk38->unk10 >> 16) & 0xFF), 1, 0x41000000) == 0) {
        func_800058DC(arg0, &func_801364B4);
        return;
    }
    if (D_801BBD86 == 1) {
        if (func_8013D4A0(0x27, 0) == 0) {
            D_801BBD82 = 1;
            func_800179B0(&D_80217F5C);
            func_80020744(0x3DB);
            func_800058DC(arg0, &func_801363C8);
            return;
        }
        func_800179B0(&D_80217F5C);
        func_80020744(0x3DB);
        D_801BBC06 = (arg0->unk38->unk10 >> 8) & 0xFF;
        func_800058DC(arg0, &func_801362DC);
    }
}
