#include "common.h"
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
extern void func_800058DC(void *, void *);
struct func_802438E4_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_8012CE9C(s32, void *, struct func_802438E4_Table, s32);
extern void func_8013A334(f32 *, s32, void *, s32);
extern s32 func_80242890();
extern u8 func_80244988[];
struct func_80244F98_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80244F98_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_80244F98_Child *unk5C;
};


extern struct func_802438E4_Table D_80248518;
extern s32 D_80010550(s32, void *);

void func_802448C8(struct func_80244F98_Obj *arg0, s32 arg1) {
    struct func_80244F98_Child *s0;

    s0 = arg0->unk5C;
    if (func_80242890(arg0) == 0) {
        f32 sp28[3];

        func_8013A334(sp28, arg1, s0, 0xC);
        if (func_8012CE9C(arg1, s0, D_80248518, 0xA) == 0) {
            if (D_80010550(arg1, s0) != 0) {
                s0->unk78 = 1;
                arg0->unk2C &= ~0x80;
                func_800058DC(arg0, func_80244988);
            }
        }
    }
}
