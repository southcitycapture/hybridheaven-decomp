#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_8037AC08 LP(fA_, __LINE__)
#define func_8037B118 LP(fB_, __LINE__)
#define func_8037B64C D_8037B64C
#include "context.h"
#undef func_8037AC08
#undef func_8037B118
#undef func_8037B64C

typedef struct func_8037B64C_StructV { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_8037B64C_StructV;
typedef struct func_8037B64C_StructW { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; } func_8037B64C_StructW;
typedef struct func_8037B64C_StructP { u8 pad[0x2C]; func_8037B64C_StructV *unk2C; } func_8037B64C_StructP;
typedef struct func_8037B64C_StructQ { u8 pad[0x2C]; func_8037B64C_StructW *unk2C; } func_8037B64C_StructQ;
typedef struct func_8037B64C_StructG { u8 pad[4]; u16 unk4; u8 pad2[0xDA]; func_8037B64C_StructP *unkE0; u8 pad3[4]; func_8037B64C_StructQ *unkE8; } func_8037B64C_StructG;
typedef struct func_8037B64C_Struct { u8 pad[0x40]; f32 x; f32 y; f32 z; } func_8037B64C_Struct;
#define FUNC_8037B64C_G ((func_8037B64C_StructG *)&D_801BBBF0)

extern u8 D_8038965C[];
extern u8 func_8037B758[];
extern void func_801DFE50(void *, s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_8037B64C(func_8037B64C_Struct *arg0, s32 arg1) {
    func_8037B64C_StructW *temp_v0;

    D_8038A93C = 0;
    if (FUNC_8037B64C_G->unk4 != 0x38) {
        func_8011AAF4(D_8038965C, 0x36E, arg0, 0, 1, 10.0f,
            (temp_v0 = FUNC_8037B64C_G->unkE8->unk2C)->unk30, temp_v0->unk34, temp_v0->unk38, 10.0f,
            arg0->x + FUNC_8037B64C_G->unkE0->unk2C->unk4, arg0->y + FUNC_8037B64C_G->unkE0->unk2C->unk8,
            arg0->z + FUNC_8037B64C_G->unkE0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
    }
    func_801DFE50(arg0, 6);
    func_800058DC(arg0, func_8037B758);
}
