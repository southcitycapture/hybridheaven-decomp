#include "common.h"


extern u8 D_801BBC0D;

s32 func_80376D10(void) {
    if (D_801BBC0D == 0) {
        return 0x4F;
    }
    if (D_801BBC0D == 1) {
        return 0x59;
    }
    return 0x63;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80376D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_8037797C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_8037865C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_803789B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378B48.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378EBC.s")


extern u8 D_80388410[];

void func_80378F64(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(u16 *)(arg0 + 0x82);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x6A) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0x944);
    } else {
        *(u16 *)(arg0 + 0x6A) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x84);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x6C) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xA0A);
    } else {
        *(u16 *)(arg0 + 0x6C) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x86);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x6E) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xAD0);
    } else {
        *(u16 *)(arg0 + 0x6E) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x88);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x70) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xB96);
    } else {
        *(u16 *)(arg0 + 0x70) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x8A);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x72) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xC5C);
    } else {
        *(u16 *)(arg0 + 0x72) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x8C);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x74) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xD22);
        return;
    }
    *(u16 *)(arg0 + 0x74) = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80379054.s")

