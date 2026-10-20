#include "context.h"

typedef struct func_80241CB4_Vec {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80241CB4_Vec;

typedef struct func_80241CB4_Mid {
    u8 pad0[0x2C];
    func_80241CB4_Vec *unk2C;
} func_80241CB4_Mid;

typedef struct func_80241CB4_Glob {
    u8 pad0[2];
    s16 unk2;
    u8 padx[0xE8 - 4];
    func_80241CB4_Mid * volatile unkE8;
    u8 pad1[0x104C - 0xEC];
    s32 unk104C;
    s32 unk1050;
    s32 unk1054;
    s32 unk1058;
    s32 unk105C;
    s32 unk1060;
} func_80241CB4_Glob;

void func_80241CB4(void) {
#define g ((func_80241CB4_Glob *) &D_801BBBF0)

    g->unk104C = (s32) (g->unkE8->unk2C->unk30 * 1000.0f);
    g->unk1050 = (s32) (g->unkE8->unk2C->unk34 * 1000.0f);
    g->unk1054 = (s32) (g->unkE8->unk2C->unk38 * 1000.0f);
    g->unk1058 = (s32) (g->unkE8->unk2C->unk3C * 1000.0f);
    g->unk105C = (s32) (g->unkE8->unk2C->unk40 * 1000.0f);
    g->unk1060 = (s32) (g->unkE8->unk2C->unk44 * 1000.0f);
    if (func_802039B0() != 0) {
        g->unk2 = 2;
        func_8012FE50(0x10, 0x60, 1, 6, 2);
    }
}
#undef g
