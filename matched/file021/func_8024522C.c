#include "context.h"

extern void func_802453E0();
extern f64 D_80257138;

struct func_8024522C_Struct {
    u8 pad0[0x6];
    s16 unk6;
    u8 pad1[0x10 - 0x8];
    u32 unk10;
};
struct func_8024522C_Struct3 {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad1[0x4B - 0x12];
    u8 unk4B;
};
struct func_8024522C_Struct2 {
    u8 pad0[0x30];
    struct func_8024522C_Struct3 *unk30;
};
struct func_8024522C_Struct0 {
    u8 pad0[0x38];
    struct func_8024522C_Struct *unk38;
    u8 pad1[0x90 - 0x3C];
    u16 unk90;
};

#define A ((struct func_8024522C_Struct0 *)arg0)
#define B(n) (((u8 *)&D_801BBBF0)[n])

void func_8024522C(s32 arg0, struct func_8024522C_Struct2 **arg1) {
    s32 a;

    if ((A->unk38->unk10 >> 24) == 3 && func_80133A24(0x1AD) != 0 &&
        func_8012AAE8(arg0, 0x43480000, 0xC4960000, 0xC4394000, 1.0f) != 0) {
        (*arg1)->unk30->unk10 += 5;
    }
    if (D_80257138 != (f32)A->unk38->unk6 / 10.0 && 0.5 != (f32)A->unk38->unk6 / 10.0) {
        B(0xF20) += 5;
        B(0xF21) += 1;
        B(0xF22) -= 2;
        if (B(0xF20) >= 0xCD) {
            B(0xF20) = 0xCD;
        }
        if (B(0xF21) >= 0x33) {
            B(0xF21) = 0x33;
        }
        if (B(0xF22) < 3) {
            B(0xF22) = 2;
        }
    }
    (*arg1)->unk30->unk4B += 8;
    a = A->unk90;
    A->unk90 = a - 1;
    if (a == 0) {
        B(0xF20) = 0xCD;
        B(0xF21) = 0x33;
        B(0xF22) = 2;
        A->unk90 = 0x1E;
        func_800058DC(arg0, func_802453E0);
    }
}
