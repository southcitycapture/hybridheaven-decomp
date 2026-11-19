#include "common.h"
typedef struct func_801CF2D4_Obj {
    u8 pad0[8];
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801CF2D4_Obj;
typedef struct func_801CF2D4_Slot {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801CF2D4_Obj *unk30;
} func_801CF2D4_Slot;
typedef struct func_801CE1C8_StructA {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CE1C8_StructA;
typedef struct func_801CF2D4_Struct {
    u8 pad0[0xC];
    func_801CE1C8_StructA *unkC;
    u8 pad10[0x3C];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x10];
    f32 unk60;
    u8 pad64[0x8];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x15];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801CF2D4_Struct;
void func_801CF2D4(func_801CF2D4_Struct *arg0, func_801CF2D4_Slot **arg1);

extern void func_800058DC(void *arg0, s32 arg1);
s32 func_801CE0E8(void *arg0, s8 *a1);


extern f64 D_801E3590;

typedef struct func_801CF1D0_Struct2 {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801CF1D0_Struct2;

typedef struct func_801CF1D0_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    func_801CF1D0_Struct2 *unk30;
} func_801CF1D0_Struct1;

typedef struct func_801CF1D0_Struct {
    u8 pad0[0x60];
    f32 unk60;
    u8 pad1[0x30];
    u8 unk94;
} func_801CF1D0_Struct;

void func_801CF1D0(func_801CF1D0_Struct *arg0, func_801CF1D0_Struct1 **arg1) {
    s8 flags[8];
    s32 i;
    func_801CF1D0_Struct2 *p;
    f32 t;

    flags[3] = 0;
    if (func_801CE0E8(arg0, &flags[3]) == 0) {
        for (i = 0; i < arg0->unk94; i++) {
            arg1[i]->unk22 = 0;
            p = arg1[i]->unk30;
            p->unk8 = p->unk8 + (1.0 + ((f64)i * 20.0) / (f64)(u32)arg0->unk94);
            t = arg0->unk60 * 0.001;
            p->unk20 = t;
            p->unk1C = t;
            p->unk18 = t;
        }
        func_800058DC(arg0, (s32)func_801CF2D4);
    }
}
