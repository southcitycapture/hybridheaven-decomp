#include "common.h"
#define func_8024148C_StructArg void
#define func_80242F38_StructGlobal struct func_80243290_StructTriple
extern struct func_80243290_StructTriple D_80252400;
extern void func_800058DC(void *, void *);
extern s32 func_8013A1B4();
void func_80244060(void *arg0, s32 volatile arg1, s32 arg2);
typedef struct func_80244654_StructArg {
    u8 pad0[0x90];
    s16 unk90;
} func_80244654_StructArg;
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

#undef func_8024148C_StructArg
#undef func_80242F38_StructGlobal

struct func_80243290_StructTriple { s32 a; s32 b; s32 c; };

void func_80243FA8(void *arg0, void **arg1) {
    ((func_80244654_StructOuter *)*arg1)->unk2C->unk4 = -56.5f;
    ((func_80244654_StructOuter *)*arg1)->unk2C->unk8 = 0.0f;
    ((func_80244654_StructOuter *)*arg1)->unk2C->unkC = 274.0f;
    ((func_80244654_StructOuter *)*arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_80252400, 0xFFFFFF);
    ((func_80244654_StructArg *)arg0)->unk90 = 0;
    func_800058DC(arg0, (void *)func_80244060);
}
