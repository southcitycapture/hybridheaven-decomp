#include "context.h"

s32 func_801DC250();                                /* extern */
s32 func_801DCC50(u16, u8, u16 *);                  /* extern */

typedef struct func_801DE464_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x35B - 6];
    u8 unk35B;
} func_801DE464_Struct;

extern func_801DE464_Struct D_801BBBF0;
extern u8 D_801E15E0[];
extern u8 D_801E16A0[];
extern u8 D_801E177C[];
extern f32 D_801E3F2C;

void func_801DE464(s32 arg0, s32 arg1, s32 arg2) {
    u8 temp_a1;
    u8 var_a1;
    u16 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    func_801DE464_Struct *var_v0;

    temp_v0 = func_801DC250();
    temp_a1 = temp_v0;
    if (temp_v0 == 1 || temp_v0 == 2 || temp_v0 == 3) {
        var_v0 = &D_801BBBF0;
        temp_a0 = *(u16 *)(D_801E15E0 + ((D_801E16A0[var_v0->unk4] * 0x10) + (var_v0->unk35B * 2)));
        var_a1 = temp_a1;
        temp_v0_2 = func_801DCC50(temp_a0, temp_a1, (u16 *)arg1);
        if (temp_a1 == 2) {
            *(f32 *)arg2 = 0.75f;
        }
        if (var_a1 == 3) {
            temp_a1--;
        }
        if (temp_v0_2 >= 4) {
            *(u16 *)arg1 = temp_a0;
        } else {
            *(u16 *)arg1 = *(u16 *)(D_801E177C + ((temp_a1 * 0xC) + (temp_v0_2 * 2)));
        }
        if (*(s32 *)arg0 == 0x01900220 || *(s32 *)arg0 == 0x019001E6) {
            *(f32 *)arg2 = D_801E3F2C;
        }
        return;
    }
    *(u16 *)arg1 = 0;
}
