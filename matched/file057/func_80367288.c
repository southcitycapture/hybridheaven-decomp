#include "context.h"
typedef struct func_80367288_Vec { f32 x, y, z; } func_80367288_Vec;
typedef struct func_80367288_Ent { u8 pad0[0x2D8]; u8 unk2D8; u8 pad2D9[0x365-0x2D9]; u8 unk365; u8 pad366[2]; f32 unk368; u8 pad36C[4]; f32 unk370; } func_80367288_Ent;
typedef struct func_80367288_Ent2 { u8 pad0[0x314]; f32 unk314; f32 unk318; f32 unk31C; } func_80367288_Ent2;
typedef struct func_80367288_Base { u8 pad0[0xDC]; s32 unkDC; u8 padE0[0xC]; s32 unkEC; } func_80367288_Base;
extern void func_80360400();
extern void func_803671A0(s32, void *, func_80367288_Vec, u8);

void func_80367288(s32 arg0, s32 arg1, u8 arg2) {
    s32 sp44;
    u8 *sp40;
    void *sp3C;
    func_80367288_Vec sp30;
    u8 pad[8];

    if (arg0 != ((func_80367288_Base *)&D_801BBBF0)->unkDC) {
        sp44 = ((func_80367288_Base *)&D_801BBBF0)->unkDC;
    } else {
        sp44 = ((func_80367288_Base *)&D_801BBBF0)->unkEC;
    }
    if (arg0 == ((func_80367288_Base *)&D_801BBBF0)->unkDC) {
        sp40 = (u8 *)&D_801BC03C;
    } else {
        sp40 = (u8 *)&D_801BC3D8;
    }
    if (arg0 != ((func_80367288_Base *)&D_801BBBF0)->unkDC) {
        sp3C = &D_801BC03C;
    } else {
        sp3C = &D_801BC3D8;
    }
    if (sp40[0x2D8] == 0xA || sp40[0x2D8] == 9) {
        ((func_80367288_Ent *)sp3C)->unk370 = 0.0f;
        ((func_80367288_Ent *)sp40)->unk365 = 0;
        ((func_80367288_Ent *)sp40)->unk368 = 0.0f;
        ((func_80367288_Ent *)sp40)->unk370 = 0.0f;
        return;
    }
    func_80360400(&sp30, arg0, arg1);
    sp30.x -= ((func_80367288_Ent2 *)sp40)->unk314;
    sp30.y -= ((func_80367288_Ent2 *)sp40)->unk318;
    sp30.z -= ((func_80367288_Ent2 *)sp40)->unk31C;
    func_803671A0(sp44, sp3C, sp30, arg2);
}
