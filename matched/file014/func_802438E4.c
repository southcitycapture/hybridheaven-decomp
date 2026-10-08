#include "context.h"

struct func_802438E4_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_802438E4_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_802438E4_Child *unk5C;
};
struct func_802438E4_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern s32 func_80242890();
extern s32 func_8012CE9C(s32, void *, struct func_802438E4_Table, s32);
extern s32 func_8012A564(void *, s32);
extern void func_8012A94C(void *, s32);
extern void func_802445F8();
extern void func_80244248();
extern void func_80243A4C();
extern struct func_802438E4_Table D_802484DC;

void func_802438E4(struct func_802438E4_Obj *arg0, s32 arg1) {
    struct func_802438E4_Child *temp_s1;
    extern void func_80010550();

    temp_s1 = arg0->unk5C;
    arg0->unk2C |= 0x80;
    if (func_80242890() == 0 && func_8012CE9C(arg1, temp_s1, D_802484DC, 0xA) == 0) {
        arg0->unk2C |= 0x80;
        func_80010550(arg1, temp_s1);
        if (func_8012A564(arg0, 0x436A0000) == 0) {
            temp_s1->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_802445F8);
            return;
        }
        if (func_8012A564(arg0, 0x42580000) != 0) {
            temp_s1->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80244248);
            return;
        }
        if (func_8012A564(arg0, 0x43220000) != 0) {
            temp_s1->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80243A4C);
            return;
        }
        func_8012A94C(arg0, 0x16);
    }
}
