#define ZQ(p, l) p##_##l
#define ZP(p, l) ZQ(p, l)
#define func_80243820 ZP(zA, __LINE__)
#define func_802448C8 ZP(zB, __LINE__)
#define func_80244988 ZP(zC, __LINE__)
#define func_80245D74 ZP(zD, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988
#undef func_80245D74

struct func_80245D74_StructChild {
    u8 pad[0x78];
    s16 unk78;
};
struct func_80245D74_StructObj {
    u8 pad[0x3E];
    u8 unk3E;
    u8 pad2[0x1D];
    struct func_80245D74_StructChild *unk5C;
};
extern s16 D_801BBD84;
extern u8 D_8024A914[];
extern f32 D_8024AB30;
extern f32 D_8024AB34;

void func_80245D74(struct func_80245D74_StructObj *arg0, s32 arg1) {
    struct func_80245D74_StructChild *sp5C;
    f32 sp50[3];

    sp5C = arg0->unk5C;
    func_8013A334(sp50, arg1, sp5C, 6);
    func_8011AAF4(D_8024A914, 0x52E, arg0, 0, 1,
        4294967296.0f, 144.0f, D_8024AB30, D_8024AB34, 4.0f,
        sp50[0], sp50[1], sp50[2], 0.0f, 35.0f, -1, -1);
    if (D_80010550(arg1, sp5C) != 0) {
        sp5C->unk78 = 1;
        arg0->unk3E = 0x19;
        func_800058DC(arg0, func_802455D8);
        D_801BBD84 = 2;
    }
}
