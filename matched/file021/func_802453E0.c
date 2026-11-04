#include "common.h"
struct func_8024522C_Struct {
    u8 pad0[0x6];
    s16 unk6;
    u8 pad1[0x10 - 0x8];
    u32 unk10;
};
struct func_8024522C_Struct0 {
    u8 pad0[0x38];
    struct func_8024522C_Struct *unk38;
    u8 pad1[0x90 - 0x3C];
    u16 unk90;
};
#define A ((struct func_8024522C_Struct0 *)arg0)
typedef struct func_8024345C_Inner2 {
    u8 pad0[0x22];
    u8 unk22;
} func_8024345C_Inner2;
typedef struct func_8024345C_Inner {
    u8 pad0[0x24];
    struct func_8024345C_Inner2 *unk24;
} func_8024345C_Inner;
typedef struct func_8024345C_Struct {
    u8 pad0[0xF23];
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 pad1[0x1044 - 0xF26];
    struct func_8024345C_Inner *unk1044;
} func_8024345C_Struct;
extern struct func_8024345C_Struct D_801BBBF0;
extern void func_800058DC(s32, void *);
extern s32 func_8012AAE8(s32, s32, s32, s32, f32);
extern s32 func_80133A24(s32 arg0);
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
void func_8024522C(s32 arg0, struct func_8024522C_Struct2 **arg1);


extern f64 D_80257140;

struct func_802453E0_Global {
    u8 pad[0xF20];
    u8 red;
    u8 green;
    u8 blue;
};
#define COLOR ((struct func_802453E0_Global *)&D_801BBBF0)

void func_802453E0(s32 arg0, struct func_8024522C_Struct2 **arg1) {
    struct func_8024522C_Struct3 *y;
    s32 old_timer;

    if ((A->unk38->unk10 >> 24) == 3) {
        if (func_80133A24(0x1AD) != 0) {
            if (func_8012AAE8(arg0, 0x43480000, 0xC4960000, 0xC4394000, 1.0f) != 0) {
                y = (*arg1)->unk30;
                y->unk10 = y->unk10 + 5;
            }
        }
    }
    if (210.0 != (f32)A->unk38->unk6 / 10.0 && (f32)A->unk38->unk6 / 10.0 != 0.5) {
        COLOR->red = COLOR->red - 5;
        COLOR->green = COLOR->green - 1;
        COLOR->blue = COLOR->blue + 2;
        if (COLOR->red < 0x29) {
            COLOR->red = 0x28;
        }
        if (COLOR->green < 0x29) {
            COLOR->green = 0x28;
        }
        if (COLOR->blue >= 0x28) {
            COLOR->blue = 0x28;
        }
    }
    y = (*arg1)->unk30;
    y->unk4B = y->unk4B - 8;
    old_timer = A->unk90;
    A->unk90 = old_timer - 1;
    if (old_timer == 0) {
        A->unk90 = 0x1E;
        COLOR->red = 0x28;
        COLOR->green = 0x28;
        COLOR->blue = 0x28;
        func_800058DC(arg0, func_8024522C);
    }
}
