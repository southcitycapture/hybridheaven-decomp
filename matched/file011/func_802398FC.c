#include "context.h"

extern void func_80235FF8(void *, s32 *, s32);
extern void func_80147218(void *);
extern void func_80239A18();

struct func_802398FC_Part {
    u8 pad0[0x4];
    u16 unk4;
    u8 pad1[0x6];
    u16 unkC;
};

struct func_802398FC_Struct {
    u8 pad0[0x94];
    struct func_802398FC_Part *unk94;
    u8 pad1[0xD];
    s8 unkA5;
};

void func_802398FC(struct func_802398FC_Struct *arg0, s32 *arg1) {
    struct func_802398FC_Part *sp24;
    u16 sp22;
    s32 var_v0;

    sp24 = arg0->unk94;
    sp22 = sp24->unkC;
    func_80235FF8(arg0, arg1, 0xF);
    if (sp22 & 0x100) {
        arg0->unkA5--;
        func_80020744(0x300);
        if (arg0->unkA5 < 0) {
            arg0->unkA5 = 1;
        }
    } else if (sp22 & 0x200) {
        func_80020744(0x300);
        arg0->unkA5++;
    }
    arg0->unkA5 = arg0->unkA5 % 2;
    func_8023466C((struct func_8023466C_Struct *) arg0, arg1);
    var_v0 = sp24->unk4;
    if (var_v0 & 0x4000) {
        func_80147218(arg0);
        arg0->unkA5 = 0;
        func_800058DC(arg0, func_80238928);
        var_v0 = sp24->unk4;
    }
    if (var_v0 & 0x8000) {
        func_80020744(0x104);
        func_800058DC(arg0, func_80239A18);
    }
}
