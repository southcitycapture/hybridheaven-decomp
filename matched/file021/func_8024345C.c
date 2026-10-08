#include "common.h"

typedef struct func_8024345C_Struct {
    u8 pad0[0xF23];
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 pad1[0x1044 - 0xF26];
    struct func_8024345C_Inner *unk1044;
} func_8024345C_Struct;

typedef struct func_8024345C_Inner {
    u8 pad0[0x24];
    struct func_8024345C_Inner2 *unk24;
} func_8024345C_Inner;

typedef struct func_8024345C_Inner2 {
    u8 pad0[0x22];
    u8 unk22;
} func_8024345C_Inner2;

s32 func_80133A24(s32);
void func_800058DC(s32, void *);
extern func_8024345C_Struct D_801BBBF0;
void func_802434C4(void);

void func_8024345C(s32 arg0, s32 arg1) {
    if (func_80133A24(0x1A2) != 0) {
        D_801BBBF0.unk1044->unk24->unk22 = 1;
        D_801BBBF0.unkF23 = 0x64;
        D_801BBBF0.unkF24 = 0xFF;
        D_801BBBF0.unkF25 = 0xFF;
        func_800058DC(arg0, func_802434C4);
    }
}
