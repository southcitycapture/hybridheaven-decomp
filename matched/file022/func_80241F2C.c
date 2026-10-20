#include "context.h"




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
