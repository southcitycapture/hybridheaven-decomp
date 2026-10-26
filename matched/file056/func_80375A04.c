#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
typedef struct func_80377140_Struct {
    u8 pad[6];
    u16 unk6;
    u16 unk8;
} func_80377140_Struct;


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

typedef struct func_80375A04_Glob {
    u8 pad0[0xE0];
    func_80375A04_Mid *unkE0;
    u8 padE4[0xE10];
    u8 unkEF4;
} func_80375A04_Glob;

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

extern func_80375A04_Glob D_801BBBF0__func_80375A04;
extern struct func_80377140_Struct CAT(D_801BBBF, 0);
#define func_80375A04_GG D_801BBBF0__func_80375A04
#define func_80375A04_GC ((func_80375A04_Glob *)&CAT(D_801BBBF, 0))
extern s32 func_8001EF38(f32, f32, void *);
extern s32 D_8012A630(void *, f32, void *, s16);

s32 func_80375A04(void *arg0) {
    func_80375A04_Obj *obj;
    s32 pad;
    s16 angle;

    obj = ((func_80375A04_Arg *)arg0)->unk5C;
    angle = (s16)(func_80375A04_GG.unkE0->unk2C->unk12 - func_8001EF38(func_80375A04_GC->unkE0->unk2C->unk4 - ((func_80375A04_Arg *)arg0)->unk24->unk2C->unk4, func_80375A04_GC->unkE0->unk2C->unkC - ((func_80375A04_Arg *)arg0)->unk24->unk2C->unkC, func_80375A04_GC)) & 0x1FFF;
    if (obj->unkE == 0x2D) {
        if (D_8012A630(arg0, 12.0f, &func_80375A04_GG, angle) != 0) {
            func_80375A04_GG.unkEF4 |= 0x10;
            if (func_80375A04_GG.unkEF4 & 1) {
                if (angle > 0x800 && angle < 0x1800) {
                    func_80375A04_GG.unkEF4 &= ~1;
                    return 1;
                }
                func_80375A04_GG.unkEF4 &= ~1;
            }
        }
    } else {
        if (D_8012A630(arg0, 12.0f, &func_80375A04_GG, angle) != 0) {
            func_80375A04_GG.unkEF4 |= 0x10;
            if (func_80375A04_GG.unkEF4 & 1) {
                if (angle > 0x800 && angle < 0x1800) {
                    func_80375A04_GG.unkEF4 &= ~1;
                    return 1;
                }
                func_80375A04_GG.unkEF4 &= ~1;
            }
        } else {
            func_80375A04_GG.unkEF4 &= ~0x10;
        }
    }
    return 0;
}
