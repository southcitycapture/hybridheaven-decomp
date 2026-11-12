#include "common.h"
typedef struct func_80375A04_Pos {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80375A04_Pos;
typedef struct func_80375A04_Mid {
    u8 pad0[0x2C];
    func_80375A04_Pos *unk2C;
} func_80375A04_Mid;
typedef struct func_80375A04_Obj {
    u8 pad0[0xE];
    u16 unkE;
} func_80375A04_Obj;
typedef struct func_80375A04_Arg {
    u8 pad0[0x24];
    func_80375A04_Mid *unk24;
    u8 pad28[0x34];
    func_80375A04_Obj *unk5C;
} func_80375A04_Arg;


typedef struct func_803757E0_StructArg {
    s32 w0;
    s32 w1;
    s32 w2;
} func_803757E0_Arg;

extern func_803757E0_Arg *D_80388728[][6];
extern func_803757E0_Arg *D_80388698[][3];
extern func_803757E0_Arg *D_803885D8[][8];
extern s32 func_8012CE9C(s32, func_80375A04_Obj *, func_803757E0_Arg, s32);
extern s32 func_80010550();

s32 func_803757E0(func_80375A04_Arg *arg0, s32 arg1, u8 arg2, u8 arg3) {
    func_80375A04_Obj *obj;
    s32 var_v1;
    s32 var_t0;
    s32 adjusted;

    obj = arg0->unk5C;
    arg2 = arg2 & 0xFF;
    switch (arg2) {
    case 1:
        adjusted = arg3 & 0xF;
        var_v1 = 1;
        var_t0 = 0xA;
        arg3 = adjusted;
        break;
    case 3:
        adjusted = arg3 & 0xF;
        var_v1 = 2;
        var_t0 = 0xA;
        arg3 = adjusted;
        break;
    case 2:
        arg3 = arg3 & 0xF0;
        adjusted = arg3 >> 4;
        var_v1 = 2;
        var_t0 = 0xA;
        arg3 = adjusted;
        break;
    case 4:
        arg3 = arg3 & 0xF0;
        adjusted = arg3 >> 4;
        var_v1 = 0;
        var_t0 = 1;
        arg3 = adjusted;
        break;
    case 0:
    default:
        arg3 = arg3 & 0xF0;
        adjusted = arg3 >> 4;
        var_v1 = 0;
        var_t0 = 0xA;
        arg3 = adjusted;
        break;
    }
    switch (obj->unkE) {
    case 45:
        if (func_8012CE9C(arg1, obj, *D_80388728[var_v1][arg3], var_t0) != 0) {
            return 1;
        }
        break;
    case 47:
        if (func_8012CE9C(arg1, obj, *D_80388698[var_v1][arg3], var_t0) != 0) {
            return 1;
        }
        break;
    case 88:
    case 89:
    default:
        if (func_8012CE9C(arg1, obj, *D_803885D8[var_v1][arg3], var_t0) != 0) {
            return 1;
        }
        break;
    }
    func_80010550(arg1, obj);
    return 0;
}
