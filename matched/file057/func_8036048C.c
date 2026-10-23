#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_8035AFEC LP(fA, __LINE__)
#define func_8036048C func_8036048C_ctx
#include "context.h"
#undef func_8036048C

typedef struct func_8036048C_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8036048C_Leaf;
typedef struct func_8036048C_Mid {
    u8 pad0[0x2C];
    func_8036048C_Leaf *unk2C;
} func_8036048C_Mid;
typedef struct func_8036048C_Obj {
    u8 pad0[0x24];
    func_8036048C_Mid *unk24;
} func_8036048C_Obj;
typedef struct func_8036048C_Globals {
    u8 pad0[0xDC];
    func_8036048C_Obj *unkDC;
    u8 pad1[0xEC - 0xE0];
    func_8036048C_Obj *unkEC;
    u8 pad2[0x1038 - 0xF0];
    f32 unk1038;
    f32 unk103C;
    f32 unk1040;
} func_8036048C_Globals;
typedef struct func_8036048C_Table {
    u8 pad0[0x314];
    f32 unk314;
    f32 unk318;
    f32 unk31C;
} func_8036048C_Table;

extern s32 func_8001EF38(f32, f32);

#define G8C ((func_8036048C_Globals *) D_801BBBF0)

s32 func_8036048C(func_8036048C_Obj *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_8036048C_Table *tbl;
    func_8036048C_Obj *obj;
    s32 pad;
    s16 ang;
    s32 ret;

    if (arg0 != G8C->unkDC) {
        obj = G8C->unkDC;
    } else {
        obj = G8C->unkEC;
    }
    if (arg0 == G8C->unkDC) {
        tbl = (func_8036048C_Table *) D_801BC03C;
    } else {
        tbl = (func_8036048C_Table *) D_801BC3D8;
    }
    ang = obj->unk24->unk2C->unk12;
    G8C->unk1038 = arg2 - tbl->unk314;
    G8C->unk103C = arg3 - tbl->unk318;
    G8C->unk1040 = arg4 - tbl->unk31C;
    if (G8C->unk1038 * G8C->unk1038 + G8C->unk1040 * G8C->unk1040 != 0.0f) {
        ret = ((s16) (ang - func_8001EF38(G8C->unk1038, G8C->unk1040) + 0x400) & 0x1FFF) / 2048 & 0xFF;
    } else {
        ret = 2;
    }
    return ret;
}
