#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988
#include "context.h"

extern s32 func_8001EF38(f32, f32);
extern f32 D_8024AAD8;
extern u8 func_80243B88[];

struct func_80243A4C_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80243A4C_FSub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_80243A4C_Mid {
    u8 pad0[0x2C];
    struct func_80243A4C_Sub *unk2C;
};
struct func_80243A4C_Obj {
    u8 pad0[0x24];
    struct func_80243A4C_Mid *unk24;
    u8 pad1[0x34];
    struct func_80246478_Child *unk5C;
};

void func_80243A4C(struct func_80243A4C_Obj *arg0, s32 arg1) {
    s32 pad;
    struct func_80246478_Child *sp28;
    struct func_80243A4C_Obj *p;
    s32 t;

    sp28 = arg0->unk5C;
    p = arg0;
    if (func_80242890() == 0) {
        if (func_8012CE9C(arg1, sp28, D_802484DC, 0xA) == 0) {
            func_80010550(arg1, sp28);
            arg0 = (struct func_80243A4C_Obj *)((struct func_80243A4C_Mid *)D_801BBCD0)->unk2C;
            t = (s32)p->unk24->unk2C;
            t = (u16)((p->unk24->unk2C->unk12 - func_8001EF38(((struct func_80243A4C_FSub *)arg0)->unk4 - ((struct func_80243A4C_Sub *)t)->unk4, ((struct func_80243A4C_FSub *)arg0)->unkC - *(f32 *)&((struct func_80243A4C_Sub *)t)->unkC)) & 0x1FFF);
            if (t < 0x200 || (t >= 0x1E01 && t < 0x1FFF)) {
                sp28->unk78 = 1;
                t = (s32)p->unk24->unk2C;
                func_80127430(((struct func_80243A4C_Sub *)t)->unk4, ((struct func_80243A4C_Sub *)t)->unk8, ((struct func_80243A4C_Sub *)t)->unkC, 0x66A, D_8024AAD8, 1.0f);
                func_800058DC(p, func_80243B88);
            }
            func_8012A94C(p, 0x40);
        }
    }
}
