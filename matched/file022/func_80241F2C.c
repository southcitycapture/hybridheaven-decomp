#include "context.h"

typedef struct func_80241F2C_Vec {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80241F2C_Vec;

typedef struct func_80241F2C_Mid {
    u8 pad0[0x2C];
    func_80241F2C_Vec *unk2C;
} func_80241F2C_Mid;

typedef struct func_80241F2C_Glob {
    u8 pad0[0xE8];
    func_80241F2C_Mid * volatile unkE8;
    u8 pad1[0x104C - 0xEC];
    s32 unk104C;
    s32 unk1050;
    s32 unk1054;
    s32 unk1058;
    s32 unk105C;
    s32 unk1060;
} func_80241F2C_Glob;

void func_80241F2C(void) {
    func_80241F2C_Glob *g = (func_80241F2C_Glob *) &D_801BBBF0;

    g->unk104C = (s32) (g->unkE8->unk2C->unk30 * 1000.0f);
    g->unk1050 = (s32) (g->unkE8->unk2C->unk34 * 1000.0f);
    g->unk1054 = (s32) (g->unkE8->unk2C->unk38 * 1000.0f);
    g->unk1058 = (s32) (g->unkE8->unk2C->unk3C * 1000.0f);
    g->unk105C = (s32) (g->unkE8->unk2C->unk40 * 1000.0f);
    g->unk1060 = (s32) (g->unkE8->unk2C->unk44 * 1000.0f);
    if (func_802039B0() != 0) {
        func_8012FE50(0x10, 0x61, 1, 6, 2);
    }
}
