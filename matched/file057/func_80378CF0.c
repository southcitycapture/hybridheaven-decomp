#include "context.h"

struct func_80378CF0_Struct {
    u8 pad[0x2D9];
    u8 unk2D9;
};

struct func_80378CF0_Entry {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

extern struct func_80378CF0_Struct D_801BC03C;
extern struct func_80378CF0_Struct D_801BC3D8;
extern u8 D_801BCC20;
extern u8 D_801840E8[];
extern struct func_80378CF0_Entry D_80183CE0[];

void func_80378CF0(void) {
    struct func_80378CF0_Struct *var_v0;
    u8 *temp_v1;
    s32 temp_a0;
    struct func_80378CF0_Entry *temp_a1;
    s16 temp_a2;

    if (D_801BCC20 == 0) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    temp_v1 = &D_801840E8[var_v0->unk2D9];
    *temp_v1 += 0x32;
    temp_v1 = &D_801840E8[var_v0->unk2D9];
    temp_a0 = *temp_v1;
    if (temp_a0 >= 0x64) {
        *temp_v1 = temp_a0 - 0x64;
        temp_a1 = &D_80183CE0[var_v0->unk2D9];
        temp_a2 = temp_a1->unk2;
        if (temp_a2 < 0xFF) {
            temp_a1->unk2 = temp_a2 + 1;
        }
    }
}
