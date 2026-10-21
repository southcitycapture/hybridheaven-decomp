#include "context.h"

typedef struct func_8037B86C_StructV { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_8037B86C_StructV;
typedef struct func_8037B86C_StructW { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; } func_8037B86C_StructW;
typedef struct func_8037B86C_StructP { u8 pad[0x2C]; func_8037B86C_StructV *unk2C; } func_8037B86C_StructP;
typedef struct func_8037B86C_StructQ { u8 pad[0x2C]; func_8037B86C_StructW *unk2C; } func_8037B86C_StructQ;
typedef struct func_8037B86C_StructG { u8 pad[4]; u16 unk4; u8 pad2[0xDA]; func_8037B86C_StructP *unkE0; u8 pad3[4]; func_8037B86C_StructQ *unkE8; } func_8037B86C_StructG;
typedef struct func_8037B86C_Struct { u8 pad[0x40]; f32 x; f32 y; f32 z; u8 pad2[0x10]; u8 *unk5C; } func_8037B86C_Struct;
extern u8 D_803896E8[];
extern s16 D_80089356;
extern void func_800023EC(void);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_8037B9E4();
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#define FUNC_8037B86C_G ((func_8037B86C_StructG *)&D_801BBBF0)

void func_8037B86C(func_8037B86C_Struct *arg0, s32 arg1) {
    u8 *t0;

    t0 = arg0->unk5C;
    if (FUNC_8037B86C_G->unk4 != 0x38) {
        func_8011AAF4(D_803896E8, 0x39C, arg0, 0, 1, 10.0f, FUNC_8037B86C_G->unkE8->unk2C->unk30, FUNC_8037B86C_G->unkE8->unk2C->unk34, FUNC_8037B86C_G->unkE8->unk2C->unk38, 10.0f, arg0->x + FUNC_8037B86C_G->unkE0->unk2C->unk4, arg0->y + FUNC_8037B86C_G->unkE0->unk2C->unk8, arg0->z + FUNC_8037B86C_G->unkE0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
    }
    if ((*(u8 *)&D_8038A93C)++ > 20) {
        ((func_8037A320_StructE *)(t0 += 0x1C))->h6 = 0x100;
        func_8013A28C(arg1, *(func_8037A320_StructE *)t0);
        D_80089356 = 0;
        func_800023EC();
        func_8012FE50(8, 0x75, 4, 4, 0);
        func_800058DC(arg0, func_8037B9E4);
    }
}
