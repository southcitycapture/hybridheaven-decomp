#include "context.h"

typedef struct func_80244654_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
} func_80244654_StructInner;

typedef struct func_80244654_StructOuter {
    u8 pad0[0x2C];
    func_80244654_StructInner *unk2C;
} func_80244654_StructOuter;

typedef struct func_80244654_StructArg {
    u8 pad0[0x90];
    s16 unk90;
} func_80244654_StructArg;

extern f32 D_80258754;
extern f32 D_80258758;
extern struct func_80243290_StructTriple D_80252448;
extern void func_8024470C();

void func_80244654(func_80244654_StructArg *arg0, void **arg1) {
    ((func_80244654_StructOuter *) *arg1)->unk2C->unk4 = D_80258754;
    ((func_80244654_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((func_80244654_StructOuter *) *arg1)->unk2C->unkC = D_80258758;
    ((func_80244654_StructOuter *) *arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_80252448, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_8024470C);
}
