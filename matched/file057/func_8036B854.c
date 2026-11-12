#include "common.h"
#define ABS(x) (((x) < 0) ? -(x) : (x))
struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};
struct func_80369C7C_Obj1 {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
};
struct func_80369C7C_Struct {
    u8 pad0[0xDC];
    struct func_80369C7C_Obj1 *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_80369C7C_Obj1 *unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};
extern struct func_80369C7C_Struct D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define WRAP(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))

#undef D_801BBBF0

typedef struct func_8036B854_StructState {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
} func_8036B854_StructState;

s32 func_8036B854(struct func_80369C7C_Obj1 *arg0) {
    func_8036B854_StructState *var_v1;
    func_8036B854_StructState *var_a1;
    s16 var_v0;
    s32 result;
    s32 var_v1b;
    s16 temp_a1;
    s16 temp_a2;

    if ((void *) arg0 == (void *) D_801BBBF0.unkDC) {
        var_v1 = (func_8036B854_StructState *) D_801BC03C;
    } else {
        var_v1 = (func_8036B854_StructState *) D_801BC3D8;
    }
    if ((void *) arg0 != (void *) D_801BBBF0.unkDC) {
        var_a1 = (func_8036B854_StructState *) D_801BC03C;
    } else {
        var_a1 = (func_8036B854_StructState *) D_801BC3D8;
    }
    switch (var_a1->unk2D8) {
    case 8:
        var_v0 = ((void *) arg0 == (void *) D_801BBBF0.unkDC) ? 0 : 0x1000;
        temp_a1 = var_v0;
        temp_a1 = (s16) (temp_a1 + D_801BBBF0.unkB98) & 0x1FFF;
        temp_a2 = arg0->unk24->unk2C->unk12;
        if ((((u32) var_v1->unk30 << 0xB) >> 0x1E) == 1) {
            result = (s16) (temp_a1 - temp_a2);
            result = ABS(WRAP(result));
            if (result >= 0x801) {
                return 0;
            }
            return 2;
        } else {
            result = (s16) (temp_a1 - temp_a2);
            result = ABS(WRAP(result));
            if ((f64) result > 3276.8) {
                var_v1b = 3;
            } else {
                var_v1b = 1;
            }
            return var_v1b;
        }
    case 7:
        return 3;
    case 5:
        return 2;
    case 6:
        return 1;
    case 4:
    default:
        return 0;
    }
}
