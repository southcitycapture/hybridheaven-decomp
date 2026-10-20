#include "context.h"
/* starting point: func_80241484 (file022), whose assembly is 100% the same as this function's */
extern void func_800058DC(void *, void *);

typedef struct func_80241D58_Struct_Inner {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[4];
    f32 unk20;
} func_80241D58_Struct_Inner;

typedef struct func_80241D58_Struct_Obj {
    u8 pad0[0x30];
    func_80241D58_Struct_Inner *unk30;
} func_80241D58_Struct_Obj;

typedef struct func_80241D58_Struct_Arg1 {
    u8 pad0[0x14];
    func_80241D58_Struct_Obj *unk14;
} func_80241D58_Struct_Arg1;

typedef struct func_80241D58_Struct_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241D58_Struct_Arg0;

extern func_80241D58_Struct_Arg0 *D_801BCCC0;
extern f64 D_80256FC8;
extern void func_80241DEC();

void func_80241D58(func_80241D58_Struct_Arg0 *arg0, func_80241D58_Struct_Arg1 *arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80241D58_Struct_Inner *temp_v0_2;
    func_80241D58_Struct_Inner *temp_v0_3;
    func_80241D58_Struct_Arg0 *temp_v0_4;

    temp_v0 = arg0->unk92;
    arg0->unk92 = (u16) (temp_v0 - 1);
    if (temp_v0 != 0) {
        temp_f0 = D_80256FC8;
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk20 = (f32) ((f64) temp_v0_2->unk20 + temp_f0);
        return;
    }
    D_801BCCC0->unk92 = 1;
    func_800058DC(arg0, (void *) func_80241DEC);
    arg0->unk92 = 0;
}
