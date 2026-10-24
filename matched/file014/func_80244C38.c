#define func_80020744 func_80020744_ctx
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
#define func_80243820 LP(rn3820_, __LINE__)
#define func_802448C8 LP(rn48C8_, __LINE__)
#define func_80244988 LP(rn4988_, __LINE__)
#include "context.h"
#undef func_80020744
extern void func_80020744(s32);

struct func_80244C38_Sub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80244C38_Mid {
    u8 pad0[0x2C];
    struct func_80244C38_Sub *unk2C;
};
struct func_80244C38_Obj {
    u8 pad0[0x24];
    struct func_80244C38_Mid *unk24;
    u8 pad1[4];
    u32 unk2C;
    u8 pad2[0x2C];
    struct func_80246478_Child *unk5C;
};
extern f32 D_8024AAF0;
extern f32 D_8024AAF4;
extern f32 D_8024AAF8;
extern void func_80244CE0();

void func_80244C38(struct func_80244C38_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *c = arg0->unk5C;
    arg0->unk24->unk2C->unk4 = D_8024AAF0;
    arg0->unk24->unk2C->unk8 = D_8024AAF4;
    arg0->unk24->unk2C->unkC = D_8024AAF8;
    arg0->unk24->unk2C->unk12 = 0;
    arg0->unk2C &= ~0x3C0;
    c->unk78 = 1;
    D_801BBF7C[0x10] = 0;
    func_80020744(0x13E);
    func_800058DC(arg0, func_80244CE0);
}
