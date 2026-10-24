#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988
#include "context.h"

struct func_80244248_StructMid {
    u8 pad[0x2C];
    struct func_8024476C_Vec *unk2C;
};
struct func_80244248_StructObj {
    u8 pad[0x24];
    struct func_80244248_StructMid *unk24;
    u8 pad2[0x34];
    struct func_80246478_Child *unk5C;
};
extern s32 D_8012A94C(void *, s32);
extern f32 D_8024AAE8;
extern void func_80244328();

void func_80244248(struct func_80244248_StructObj *arg0, s32 arg1) {
    struct func_80246478_Child *sp2C;
    struct func_8024476C_Vec *temp_v0;

    sp2C = arg0->unk5C;
    if ((func_80242890(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_802484DC, 5) == 0)) {
        func_80010550(arg1, sp2C);
        if (D_8012A94C(arg0, 0x40) == 0) {
            temp_v0 = arg0->unk24->unk2C;
            func_80127430(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x66D, D_8024AAE8, 1.0f);
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80244328);
        }
    }
}
