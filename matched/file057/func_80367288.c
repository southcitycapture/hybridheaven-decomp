#include "common.h"
typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
typedef struct func_803671A0_Vec { f32 x, y, z; } func_803671A0_Vec;
void func_803671A0(s32 arg0, void *arg1, func_803671A0_Vec arg2, u8 arg3);

typedef struct func_80367288_StructEnt { u8 pad0[0x2D8]; u8 unk2D8; u8 pad2D9[0x365-0x2D9]; u8 unk365; u8 pad366[2]; f32 unk368; u8 pad36C[4]; f32 unk370; } func_80367288_StructEnt;
typedef struct func_80367288_StructEnt2 { u8 pad0[0x314]; f32 unk314; f32 unk318; f32 unk31C; } func_80367288_StructEnt2;
typedef struct func_80367288_StructBase { u8 pad0[0xDC]; s32 unkDC; u8 padE0[0xC]; s32 unkEC; } func_80367288_StructBase;
typedef struct func_80367288_StructInput { s32 entity, joint; } func_80367288_StructInput;
extern void func_80360400();

void func_80367288(s32 arg0, s32 arg1, u8 arg2) {
    s32 sp44;
    u8 *sp40;
    void *sp3C;
    func_803671A0_Vec sp30;
    u8 state;
    func_80367288_StructInput input;

    input.entity = arg0;
    input.joint = arg1;
    if (arg0 != ((func_80367288_StructBase *)&D_801BBBF0)->unkDC) {
        sp44 = ((func_80367288_StructBase *)&D_801BBBF0)->unkDC;
    } else {
        sp44 = ((func_80367288_StructBase *)&D_801BBBF0)->unkEC;
    }
    if (arg0 == ((func_80367288_StructBase *)&D_801BBBF0)->unkDC) {
        sp40 = (u8 *)&D_801BC03C;
    } else {
        sp40 = (u8 *)&D_801BC3D8;
    }
    if (arg0 != ((func_80367288_StructBase *)&D_801BBBF0)->unkDC) {
        sp3C = &D_801BC03C;
    } else {
        sp3C = &D_801BC3D8;
    }
    state = sp40[0x2D8];
    if (state == 0xA || state == 9) {
        ((func_80367288_StructEnt *)sp3C)->unk370 = 0.0f;
        ((func_80367288_StructEnt *)sp40)->unk365 = 0;
        ((func_80367288_StructEnt *)sp40)->unk368 = 0.0f;
        ((func_80367288_StructEnt *)sp40)->unk370 = 0.0f;
        return;
    }
    func_80360400(&sp30, input.entity, input.joint);
    sp30.x -= ((func_80367288_StructEnt2 *)sp40)->unk314;
    sp30.y -= ((func_80367288_StructEnt2 *)sp40)->unk318;
    sp30.z -= ((func_80367288_StructEnt2 *)sp40)->unk31C;
    func_803671A0(sp44, sp3C, sp30, arg2);
}
