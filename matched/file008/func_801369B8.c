#include "context.h"

extern f32 D_8018DB70;

typedef struct func_801369B8_Inner {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
} func_801369B8_Inner;
typedef struct func_801369B8_Mid {
    u8 pad0[0x30];
    func_801369B8_Inner *unk30;
} func_801369B8_Mid;
typedef struct func_801369B8_Struct {
    u8 pad0[0x24];
    func_801369B8_Mid *unk24;
    u8 pad1[0x10];
    func_801361C8_StructInner *unk38;
} func_801369B8_Struct;
typedef struct func_801369B8_Bss {
    u8 pad0[0x192];
    s16 unk192;
    u8 pad1[4];
    f32 unk198;
    u8 pad2[4];
    f32 unk1A0;
    u8 pad3[0xF00 - 0x1A4];
    s16 unkF00;
    u8 pad4[2];
    f32 unkF04;
    f32 unkF08;
    s16 unkF0C;
    u8 pad5[2];
    s32 unkF10;
    f32 unkF14;
    f32 unkF18;
} func_801369B8_Bss;
#define B ((func_801369B8_Bss *)&D_801BBBF0)

extern s32 D_801268F4(s32);
extern s32 D_80135E60(void *, f32, s32, f32);
void func_80136B0C(func_801361C8_Struct *arg0, s32 arg1);

void func_801369B8(func_801369B8_Struct *arg0, s32 arg1) {
    s32 t;

    if (D_80135E60(arg0, (f32)((arg0->unk38->unk10 >> 16) & 0xFF), 0, 0.0f) != 0) {
        t = D_801268F4(0);
        B->unk192 = 5;
        if (t) {}
        B->unk198 = func_8001EAD0(arg0->unk24->unk30->unk12) * 20.0f + arg0->unk24->unk30->unk4;
        B->unk1A0 = func_8001EB64(arg0->unk24->unk30->unk12) * 20.0f + arg0->unk24->unk30->unkC;
        B->unkF14 = arg0->unk24->unk30->unk4;
        B->unkF18 = arg0->unk24->unk30->unkC;
        B->unkF04 = D_8018DB70;
        B->unkF08 = 1.0f;
        B->unkF10 = 0x0168003E;
        B->unkF0C = 0;
        B->unkF00 = 0x1100;
        func_800058DC(arg0, func_80136B0C);
    }
}
