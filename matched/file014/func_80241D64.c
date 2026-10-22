#include "context.h"

struct func_80241D64_StructV {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
};
struct func_80241D64_StructP {
    u8 pad0[0x30];
    struct func_80241D64_StructV *unk30;
};
struct func_80241D64_Struct {
    u8 pad0[0x24];
    struct func_80241D64_StructP *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x74 - 0x4C];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[0x9C - 0x8A];
    u16 unk9C;
};

extern void func_80020718(u16);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern u8 D_802483E8[];
extern u8 D_8024A3F0[];
extern f64 D_8024A598;
extern f64 D_8024A5A0;
extern f64 D_8024A5A8;
extern f64 D_8024A5B0;
extern f32 D_8024A5B8;
void func_802420B0();
void func_80242778();

void func_80241D64(struct func_80241D64_Struct *arg0, s32 arg1) {
    struct func_80241D64_StructP *p;
    s32 sp58;
    s16 h;
    f64 k;

    sp58 = arg0->unk3C++;
    if (sp58 == 0xF) {
        func_8011AAF4(D_8024A3F0, 0x19E, (s32)arg0, 0, 1, 0.0f, 0.0f, 24.0f, 300.0f, 0.0f, 30.0f, 15.0f, 235.0f, 0.0f, 35.0f, -1, -1);
    } else {
        func_80242778((void *)arg0, sp58);
    }
    if (arg0->unk9C < 2) {
        if (!(sp58 % 2)) {
            func_80129FB8(arg0->unk24->unk30->unk4, arg0->unk24->unk30->unk8, arg0->unk24->unk30->unkC, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0x80, 0, 0x40, 0, 0, 0x50, -2, (f32)(((f64)func_8012C6B4(0x28) / D_8024A598) + D_8024A5A0), 0, 0);
        }
        func_80380F94(arg0->unk24->unk30->unk4, arg0->unk24->unk30->unk8, arg0->unk24->unk30->unkC, 0.0f, 0.0f, 0.0f, 0xE);
    }
    if (arg0->unk24->unk30->unk10 >= -0x7FF) {
        arg0->unk24->unk30->unk10 = arg0->unk24->unk30->unk10 - 0x71;
    } else {
        arg0->unk24->unk30->unk10 = -0x800;
    }
    if ((f64)arg0->unk24->unk30->unk8 <= D_8024A5A8) {
        u16 t = *(u16 *)(D_802483E8 + arg0->unk9C * 2);
        if (t != 0) {
            arg0->unk9C = arg0->unk9C + 1;
            func_80020718(t);
        }
        k = D_8024A5B0;
        arg0->unk24->unk30->unk8 = D_8024A5B8;
        arg0->unk44 = (f32)((f64)-arg0->unk44 * 0.5);
        arg0->unk40 = (f32)((f64)arg0->unk40 * k);
        arg0->unk48 = (f32)((f64)arg0->unk48 * k);
        if ((s32)arg0->unk48 == 0) {
            arg0->unk2C = 0x800;
            arg0->unk74 = func_8012C97C(0x23A, 3);
            p = arg0->unk24;
            arg0->unk78 = p->unk30->unk4;
            arg0->unk7C = p->unk30->unk8;
            arg0->unk80 = p->unk30->unkC;
            arg0->unk84 = 0;
            arg0->unk86 = p->unk30->unk12;
            arg0->unk88 = 0;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802420B0);
        }
    }
}
