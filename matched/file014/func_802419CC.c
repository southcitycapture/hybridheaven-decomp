#include "common.h"
extern void func_800058DC(void *, void *);
extern void func_80020718(u16);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
struct func_80241960_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0xA0 - 0x3E];
    f32 unkA0;
};
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
void func_80241D64(struct func_80241D64_Struct *arg0, s32 arg1);
struct func_80242778_StructC { u8 pad[0xA0]; f32 unkA0; };
void func_80242778(struct func_80242778_StructC *arg0, s32 arg1);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

extern f64 D_8024A580;
extern f64 D_8024A588;
extern f32 D_8024A590;

void func_802419CC(struct func_80241960_StructArg0 *arg0, s32 arg1) {
    s32 pad0;
    f32 sp70[1];
    f32 var_fa1;
    s32 sp68[1];
    s32 pad1;
    s32 sp60;
    s32 t;
    u16 a1;
    f32 zero;

    zero = 0;
    a1 = arg0->unk3C;
    arg0->unk3C = a1 + 1;
    sp68[0] = a1;
    func_80242778((struct func_80242778_StructC *)arg0, a1);
    if ((sp68[0] < 0x5A) && !(sp68[0] % 2)) {
        t = func_8012C6B4(3);
        if (t != 0) {
            if (t != 1) {
                if (t != 2) goto def;
                goto c2;
            }
            goto c1;
        }
        sp70[0] = 30.0f;
        var_fa1 = (f32)(f64)(f32)func_8012C6B4(0xA);
        goto join;
    c1:
        sp70[0] = (f32)((f64)(f32)func_8012C6B4(0xA) + 30.0);
        var_fa1 = 10.0f;
        goto join;
    c2:
        sp70[0] = 40.0f;
        var_fa1 = (f32)(f64)(f32)func_8012C6B4(0xA);
        goto join;
    def:
        sp70[0] = 35.0f;
        var_fa1 = 5.0f;
    join:
        sp60 = func_8012C6B4(0x32);
        func_80129FB8(sp70[0],var_fa1, 310.0f, zero, zero, zero, zero, 0x60, 0x60, 0x60, 0x40, 0x40, 0x40, 0xFF, -6, (f32)(((f64)sp60 / D_8024A580) + D_8024A588), func_8012C6B4(1), 0);
    }
    if (sp68[0] == 0x1E) {
        func_80020718(0x147);
        arg0->unkA0 = 2.0f;
        func_80380F94(30.0f, 1.5f, 310.0f, zero, zero, zero, 0xC);
        func_80380F94(40.0f, 1.5f, 310.0f, zero, zero, zero, 0xC);
    }
    if (sp68[0] == 0x2A) {
        func_80020718(0x147);
        arg0->unkA0 = 2.0f;
        func_80380F94(30.0f, 8.0f, 310.0f, zero, zero, zero, 0xC);
    }
    if (sp68[0] == 0x30) {
        func_80020718(0x147);
        func_80380F94(40.0f, 8.0f, 310.0f, zero, zero, zero, 0xC);
    }
    if (sp68[0] == 0x36) {
        func_80020718(0x147);
        arg0->unkA0 = 12.0f;
        func_80380F94(35.0f, 5.0f, 310.0f, zero, zero, zero, 0xD);
    }
    if (sp68[0] >= 0x38) {
        *(s32 *)((u8 *)arg0 + 0x2C) = 0x60;
        *((u8 *)arg0 + 0x3E) = 5;
        *(f32 *)((u8 *)arg0 + 0x40) = zero;
        *(f32 *)((u8 *)arg0 + 0x44) = 2.5f;
        *(f32 *)((u8 *)arg0 + 0x48) = D_8024A590;
        arg0->unk3C = 0;
        *(s16 *)((u8 *)arg0 + 0x9C) = 0;
        func_800058DC(arg0, func_80241D64);
    }
}
