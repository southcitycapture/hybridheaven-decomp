#include "context.h"
void func_802419B4(s32 arg0, s32 arg1);
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

void func_802418B4(s32 arg0) {
    ((func_80241F2C_Glob *)&D_801BBBF0)->unk104C = (s32) (((func_80241F2C_Glob *)&D_801BBBF0)->unkE8->unk2C->unk30 * 1000.0f);
    ((func_80241F2C_Glob *)&D_801BBBF0)->unk1050 = (s32) (((func_80241F2C_Glob *)&D_801BBBF0)->unkE8->unk2C->unk34 * 1000.0f);
    ((func_80241F2C_Glob *)&D_801BBBF0)->unk1054 = (s32) (((func_80241F2C_Glob *)&D_801BBBF0)->unkE8->unk2C->unk38 * 1000.0f);
    ((func_80241F2C_Glob *)&D_801BBBF0)->unk1058 = (s32) (((func_80241F2C_Glob *)&D_801BBBF0)->unkE8->unk2C->unk3C * 1000.0f);
    ((func_80241F2C_Glob *)&D_801BBBF0)->unk105C = (s32) (((func_80241F2C_Glob *)&D_801BBBF0)->unkE8->unk2C->unk40 * 1000.0f);
    ((func_80241F2C_Glob *)&D_801BBBF0)->unk1060 = (s32) (((func_80241F2C_Glob *)&D_801BBBF0)->unkE8->unk2C->unk44 * 1000.0f);
    if (func_802039B0() != 0) {
        func_800058DC(arg0, &func_802419B4);
    }
}
