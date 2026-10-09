#include "context.h"
extern void func_800058DC(void *, void *);
void func_80020744(s32 arg0);

extern void func_80241484(void);
extern f64 D_80252530;

typedef struct func_8024140C_Struct4 {
    u8 pad0[0x1C];
    f32 unk1C;
} func_8024140C_Struct4;

typedef struct func_8024140C_Struct3 {
    u8 pad0[0x30];
    func_8024140C_Struct4 *unk30;
} func_8024140C_Struct3;

typedef struct func_8024140C_Struct2 {
    u8 pad0[0x14];
    func_8024140C_Struct3 *unk14;
} func_8024140C_Struct2;

typedef struct func_8024140C_Struct {
    u8 pad0[0x92];
    u16 unk92;
} func_8024140C_Struct;

void func_8024140C(func_8024140C_Struct *arg0, func_8024140C_Struct2 *arg1) {
    s32 temp_v0;
    func_8024140C_Struct4 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + D_80252530);
        return;
    }
    arg0->unk92 = 0x14;
    func_80020744(0x234);
    func_800058DC(arg0, &func_80241484);
}
