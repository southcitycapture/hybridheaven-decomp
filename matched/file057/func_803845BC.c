#include "common.h"
extern u8 D_8008DA88[];
typedef struct func_80385208_Globals {
    u8 pad0[0xA0];
    u16 unkA0;
    u8 pad1[6];
    u16 unkA8;
    u8 pad2[0x16];
    u16 unkC0;
    u8 pad3[6];
    u16 unkC8;
} func_80385208_Globals;
extern struct func_80385208_Globals D_801BBBF0;
extern void func_80006214(void *);
typedef struct func_80383414_Struct { u8 pad0[0xC]; void *unkC; u8 pad10[0x99]; u8 unkA9; u8 pad1[0xB0 - 0xAA]; s16 unkB0; } func_80383414_Struct;
typedef struct func_80383414_StructB { u8 pad0[0x30]; u8 *unk30; } func_80383414_StructB;

extern f32 func_8001EAD0(s16);
extern u16 D_801BBC20;
typedef struct func_803845BC_StructB { u8 pad[0x30]; u16 unk30; } func_803845BC_StructB;

void func_803845BC(func_80383414_Struct *arg0, s32 arg1) {
    func_80383414_StructB **table = (func_80383414_StructB **)D_8008DA88;

    func_80006214(arg0->unkC);
    table[arg0->unkA9]->unk30[9] = table[arg0->unkA9]->unk30[0xA] =
        (func_8001EAD0(((func_803845BC_StructB *)&D_801BBBF0)->unk30 << 7) < 0.0f ?
        -func_8001EAD0(((func_803845BC_StructB *)&D_801BBBF0)->unk30 << 7) :
        func_8001EAD0(((func_803845BC_StructB *)&D_801BBBF0)->unk30 << 7)) * 192.0f;
}
