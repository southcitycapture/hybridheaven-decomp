#include "context.h"

typedef struct func_801CFF50_StructInner {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[0x18 - 0x12];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801CFF50_StructInner;

typedef struct func_801CFF50_StructOuter {
    u8 pad0[0x30];
    func_801CFF50_StructInner *unk30;
} func_801CFF50_StructOuter;

typedef struct func_801CFF50_Struct {
    u8 pad0[0x78];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x94 - 0x7B];
    u8 unk94;
} func_801CFF50_Struct;

extern f64 D_801E35B8;
extern void func_801CFFF4(void);

void func_801CFF50(func_801CFF50_Struct *arg0, func_801CFF50_StructOuter **arg1) {
    func_801CFF50_StructInner *temp_v0;
    s8 sp2B;
    f32 temp_fv0;

    sp2B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp2B) == 0) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = 0x800;
        temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * D_801E35B8);
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        temp_v0->unk18 = temp_fv0;
        func_801CD924(arg0->unk78, arg0->unk79, arg0->unk7A, 0x3F4CCCCD);
        func_800058DC(arg0, (s32) &func_801CFFF4);
    }
}
