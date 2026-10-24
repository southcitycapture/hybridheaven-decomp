#define ZQ(p, l) p##_##l
#define ZP(p, l) ZQ(p, l)
#define func_80243820 ZP(zB, __LINE__)
#define func_802448C8 ZP(zC, __LINE__)
#define func_80244988 ZP(zD, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988

typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80245FE4_Sub;

typedef struct {
    u8 pad0[0x2C];
    func_80245FE4_Sub *unk2C;
} func_80245FE4_Mid;

typedef struct {
    u8 pad0[0x78];
    s16 unk78;
} func_80245FE4_Child;

typedef struct {
    u8 pad0[0x24];
    func_80245FE4_Mid *unk24;
    u8 pad1[0x34];
    func_80245FE4_Child *unk5C;
    u8 pad2[0x3C];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
} func_80245FE4_Obj;

extern u8 D_8024A94C[];
extern void func_802460F0();
extern s32 D_8013A334(f32 *, s32, void *, s32);

void func_80245FE4(func_80245FE4_Obj *arg0, s32 arg1) {
    func_80245FE4_Child *child;
    f32 vec[3];

    child = arg0->unk5C;
    D_8013A334(vec, arg1, child, 6);
    if (func_8011AAF4(D_8024A94C, 0x569, arg0, 0, 2, 4294967296.0f,
                       (f32) arg0->unk9C, (f32) arg0->unk9E, (f32) arg0->unkA0,
                       4.0f, arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8,
                       arg0->unk24->unk2C->unkC, 0.0f, 35.0f, -1, -1) == 0) {
        child->unk78 = 1;
        func_800058DC(arg0, func_802460F0);
    }
}
