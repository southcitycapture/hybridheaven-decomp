#include "common.h"
typedef struct func_801F63E0_Struct3 { s32 w0; s32 w1; s32 w2; } func_801F63E0_Struct3;
extern s32 D_8012CE9C(s32, s32, func_801F63E0_Struct3, s32);
extern void (*D_80216D10[])(void *, s32);
void func_800058DC(void *, s32);                    /* extern */
extern s32 func_80010550();
void func_80020744(s32);
typedef struct func_801F5F5C_Inner {
    u8 pad0[0x14];
    s32 unk14;
} func_801F5F5C_Inner;
typedef struct func_801F5F5C_Struct {
    u8 pad0[0x38];
    func_801F5F5C_Inner *unk38;
    u8 pad1[0xAF - 0x3C];
    u8 unkAF;
} func_801F5F5C_Struct;
void func_801F5F5C(func_801F5F5C_Struct *arg0, s32 arg1);
typedef struct func_801F74FC_Struct {
    s32 w0;
    s32 w1;
    s32 w2;
} func_801F74FC_Struct;
extern s32 func_801FA2E0();


typedef struct func_801F8974_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    s32 unk5C;
    u8 pad60[0x70 - 0x60];
    u16 unk70;
} func_801F8974_Struct;

extern func_801F74FC_Struct D_80216F18;

void func_801F8974(func_801F8974_Struct *arg0, s32 arg1)
{
    s32 temp_a1;
    s32 sp2C;
    s32 var_v1;

    temp_a1 = arg0->unk5C;
    sp2C = temp_a1;
    if (D_8012CE9C(arg1, temp_a1, *(func_801F63E0_Struct3 *)&D_80216F18, 0) == 0) {
        if (arg0->unk70 == 3) {
            func_80020744(0x13C);
        }
        func_80010550(arg1, sp2C);
        var_v1 = ++arg0->unk3C;
        if (var_v1 == 0xA) {
            func_801FA2E0();
            var_v1 = arg0->unk3C;
        }
        if (var_v1 == 0x1C) {
            func_800058DC(arg0, (s32)func_801F5F5C);
        }
    }
}
