#include "context.h"
typedef struct func_80241928_StructInner {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
} func_80241928_StructInner;
typedef struct func_80241928_StructOuter {
    u8 pad0[0xDC];
    func_80241928_StructInner *unkDC;
} func_80241928_StructOuter;
extern void func_800058DC(void *, void *);
extern func_80241928_StructOuter D_801BBBF0;
extern void func_801C2F0C(s32, s16 *);
extern void func_800179B0(void *);
extern void func_800058DC(void *, void *);

extern u8 D_80252014[];
extern void func_80241214(void);

typedef struct func_8024148C_StructInner {
    u8 pad0[0xC];
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_8024148C_StructInner;

typedef struct func_8024148C_StructNode {
    u8 pad0[0x2C];
    func_8024148C_StructInner *unk2C;
} func_8024148C_StructNode;

typedef struct func_8024148C_StructArg {
    u8 pad0[0x3C];
    u16 unk3C;
} func_8024148C_StructArg;

typedef struct func_8024148C_StructLoc {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0x12];
} func_8024148C_StructLoc;

void func_8024148C(func_8024148C_StructArg *arg0, s32 arg1) {
    extern void func_801C2F0C();
    func_8024148C_StructLoc loc;
    u16 var_v1;
    func_8024148C_StructInner *inner;

    var_v1 = arg0->unk3C;
    if (var_v1 == 0) {
        (*(func_8024148C_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C->unk12 = 0x1000;
        inner = (*(func_8024148C_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C;
        inner->unkC = inner->unkC + 10.0f;
        var_v1 = arg0->unk3C;
    }
    if ((s32) arg0->unk3C++ >= 0x15) {
        loc.unk0 = 0;
        loc.unk4 = 0x01680041;
        loc.unkC = 0xA;
        loc.unk8 = 1.0f;
        func_801C2F0C(3, &loc.unk0, arg0);
        func_800179B0(D_80252014);
        func_800058DC(arg0, (void *) func_80241214);
    }
}
