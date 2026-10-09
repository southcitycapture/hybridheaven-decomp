#include "context.h"
extern func_8024090C_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);

typedef struct func_80240B0C_StructVec {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80240B0C_StructVec;

typedef struct func_80240B0C_StructMid {
    u8 pad0[0x2C];
    func_80240B0C_StructVec *unk2C;
} func_80240B0C_StructMid;

typedef struct func_80240B0C_StructOuter {
    u8 pad0[0x24];
    func_80240B0C_StructMid *unk24;
} func_80240B0C_StructOuter;

extern s32 func_802039B0();
extern void func_801269C0(void *arg0);
extern void func_80240BB8(void);

void func_80240B0C(func_80240B0C_StructOuter *arg0) {
    s32 *g;

    g = (s32 *) ((u8 *) &D_801BBBF0 + 0x1058);
    g[0] = arg0->unk24->unk2C->unk4 * 1000.0f;
    g[1] = arg0->unk24->unk2C->unk8 * 1000.0f;
    g[2] = arg0->unk24->unk2C->unkC * 1000.0f;
    if (func_802039B0() != 0) {
        func_801269C0(arg0);
        func_800058DC(arg0, func_80240BB8);
    }
}
