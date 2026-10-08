#include "common.h"

typedef struct func_80241730_Struct1 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241730_Struct1;

typedef struct func_80241730_Struct3 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
} func_80241730_Struct3;

typedef struct func_80241730_Struct2 {
    u8 pad0[0x2C];
    func_80241730_Struct3 *unk2C;
} func_80241730_Struct2;

extern void func_800058DC(void *, void *);
extern f64 D_80256FA0;
extern void func_802417AC(void);

void func_80241730(func_80241730_Struct1 *arg0, func_80241730_Struct2 **arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80241730_Struct3 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_f0 = D_80256FA0;
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + temp_f0);
        return;
    }
    arg0->unk92 = 0;
    func_800058DC(arg0, func_802417AC);
}
