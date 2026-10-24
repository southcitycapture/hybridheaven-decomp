#define ZQ(p, l) p##_##l
#define ZP(p, l) ZQ(p, l)
#define func_80243820 ZP(zA, __LINE__)
#define func_802448C8 ZP(zB, __LINE__)
#define func_80244988 ZP(zC, __LINE__)
#define func_8024412C ZP(zD, __LINE__)
#include "context.h"
#undef func_8024412C
#undef func_80243820

extern struct func_802438E4_Table D_802484F4;
extern void func_80244518();

void func_8024412C(struct func_802438E4_Obj *arg0, s32 arg1) {
    struct func_802438E4_Child *s1;
    u32 f;

    s1 = arg0->unk5C;
    if (func_80242890() == 0) {
        f = *(u32 *)((u8 *)arg0 + 0x30);
        if ((f & 8) || (f & 0x80)) {
            s1->unk78 = 1;
            ((struct func_80246478_Obj *)arg0)->unk94 = 0x40;
            func_800058DC(arg0, func_80244518);
            return;
        }
        if (func_8012CE9C(arg1, s1, D_802484F4, 1) == 0) {
            struct func_80246478_Obj *o = (struct func_80246478_Obj *)arg0;
            D_80010550(arg1, s1);
            if (o->unk94-- == 0) {
                s1->unk78 = 1;
                func_800058DC(arg0, func_802438E4);
                return;
            }
            if (func_8012A564(arg0, 0x43340000) == 0) {
                s1->unk78 = 1;
                func_800058DC(arg0, func_802438E4);
            }
        }
    }
}
