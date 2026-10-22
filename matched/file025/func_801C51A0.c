#include "context.h"

typedef struct func_801C51A0_StructVec { f32 x, y, z; } func_801C51A0_StructVec;
typedef struct func_801C51A0_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[0x18];
    void *unk28;
} func_801C51A0_StructPos;
typedef struct func_801C51A0_StructNode {
    u8 pad[0x2C];
    func_801C51A0_StructPos *unk2C;
} func_801C51A0_StructNode;
typedef struct func_801C51A0_StructRet {
    u8 pad[0x24];
    func_801C51A0_StructNode *unk24;
} func_801C51A0_StructRet;
typedef struct func_801C51A0_StructArg {
    u8 pad[0x90];
    f32 x, y, z;
    u8 pad9C[4];
    u16 index;
    u8 padA2[2];
    func_801C51A0_StructRet *(*unkA4)();
    u8 padA8[4];
    func_801C51A0_StructVec *(*unkAC)();
    func_801C51A0_StructVec *(*unkB0)();
} func_801C51A0_StructArg;
typedef struct func_801C51A0_StructObj {
    u8 pad[0x30];
    func_801C51A0_StructPos *unk30;
} func_801C51A0_StructObj;
typedef struct func_801C51A0_StructOut {
    u8 pad[0x10];
    s16 x, y, z;
    u8 pad16[0x3A];
    s16 x2, y2, z2;
} func_801C51A0_StructOut;
extern u8 D_801DF7A0[];

void func_801C51A0(func_801C51A0_StructArg *arg0, func_801C51A0_StructObj **arg1) {
    s32 *base;
    func_801C51A0_StructOut *out;
    s32 index;
    func_801C51A0_StructRet *(*fn0)();
    func_801C51A0_StructVec *(*fn1)();
    func_801C51A0_StructVec *(*fn2)();
    func_801C51A0_StructRet *ret;
    func_801C51A0_StructVec pos1;
    func_801C51A0_StructVec pos2;

    index = arg0->index;
    base = (s32 *)(D_801DF7A0 + index * 0x348);
    if (*base == 0) {
        *base = 1;
        out = (func_801C51A0_StructOut *)((u8 *)base + 0x68);
        (*arg1)->unk30->unk28 = (u8 *)base + 0x208;
    } else {
        *base = 0;
        out = (func_801C51A0_StructOut *)((u8 *)base + 8);
        (*arg1)->unk30->unk28 = (u8 *)base + 0xC8;
    }
    fn0 = arg0->unkA4;
    fn1 = arg0->unkAC;
    fn2 = arg0->unkB0;
    ret = fn0();
    pos1 = *fn1();
    pos2 = *fn2();
    out->x = (s32)((pos1.x - (*arg1)->unk30->x) * 10.0f);
    out->y = (s32)arg0->y;
    out->z = (s32)((pos1.z - (*arg1)->unk30->z) * 10.0f);
    out->x2 = (s32)((pos2.x - (*arg1)->unk30->x) * 10.0f);
    out->y2 = (s32)arg0->y;
    out->z2 = (s32)((pos2.z - (*arg1)->unk30->z) * 10.0f);
    (*arg1)->unk30->x = arg0->x + ret->unk24->unk2C->x;
    (*arg1)->unk30->y = arg0->y + ret->unk24->unk2C->y;
    (*arg1)->unk30->z = arg0->z + ret->unk24->unk2C->z;
}
