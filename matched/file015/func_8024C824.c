#include "context.h"

extern f32 D_80259774;
extern f32 D_80259778;
extern void func_800058DC(void *, void *);
void func_8024C87C();

typedef struct func_8024C824_Inner {
    u8 pad[0x4];
    f32 unk4;
    u8 pad2[0x4];
    f32 unkC;
} func_8024C824_Inner;

typedef struct func_8024C824_Mid {
    u8 pad[0x2C];
    func_8024C824_Inner *unk2C;
} func_8024C824_Mid;

typedef struct func_8024C824_Outer {
    u8 pad[0xE0];
    func_8024C824_Mid *unkE0;
} func_8024C824_Outer;

void func_8024C824(s32 arg0, s32 arg1) {
    ((func_8024C824_Outer *) &D_801BBBF0)->unkE0->unk2C->unk4 = D_80259774;
    ((func_8024C824_Outer *) &D_801BBBF0)->unkE0->unk2C->unkC = D_80259778;
    func_800058DC((void *) arg0, (void *) &func_8024C87C);
}
