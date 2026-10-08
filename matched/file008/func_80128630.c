#include "context.h"

typedef struct func_80128630_StructB {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x4B - 0x28];
    u8 unk4B;
} func_80128630_StructB;

typedef struct func_80128630_StructA {
    u8 pad0[0x30];
    func_80128630_StructB *unk30;
} func_80128630_StructA;

typedef struct func_80128630_StructD {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad1[0x30 - 0x20];
    s32 unk30;
} func_80128630_StructD;

typedef struct func_80128630_StructC {
    u8 pad0[0x30];
    func_80128630_StructD *unk30;
} func_80128630_StructC;

typedef struct func_80128630_StructArg {
    u8 pad0[0x24];
    func_80128630_StructA *unk24;
    u8 pad1[0x4];
    u32 unk2C;
    u8 pad2[0x3C - 0x30];
    u16 unk3C;
    u8 pad3[0x90 - 0x3E];
    u8 unk90;
    u8 pad4[0x94 - 0x91];
    f32 unk94;
} func_80128630_StructArg;

extern s32 func_8000C3B0(void *);
extern void func_8012D844(void *, s32, s32);
extern void func_80128714(void);

void func_80128630(func_80128630_StructArg *arg0, func_80128630_StructC **arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        arg0->unk90 = 0xF8;
        func_8012C89C(arg0, 0, 3, 2);
        func_8012D844(arg0, 1, 0);
        arg0->unk24->unk30->unk24 = 0x6000F;
        (*arg1)->unk30->unk30 = func_8000C3B0(arg0->unk24);
        arg0->unk24->unk30->unk4B = 0x80;
        arg0->unk2C |= 0x20;
        (*arg1)->unk30->unk18 = 0.0f;
        (*arg1)->unk30->unk1C = 0.0f;
        arg0->unk94 = (f32) (f64) arg0->unk94;
        func_800058DC(arg0, (void *) func_80128714);
    }
}
