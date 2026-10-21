#include "context.h"
typedef struct func_802397A8_StructA { u8 b[9]; } func_802397A8_StructA;
extern func_802397A8_StructA D_8023E51C;
typedef struct func_802397A8_StructB { u8 pad[0xC]; u16 unkC; } func_802397A8_StructB;
typedef struct func_802397A8_StructC { u8 pad[4]; u16 unk4; } func_802397A8_StructC;
typedef struct func_802397A8_Struct {
    u8 pad[0x94];
    func_802397A8_StructC *unk94;
    u8 pad2[0xA5-0x98];
    s8 unkA5;
    u8 pad3[2];
    u8 unkA8;
} func_802397A8_Struct;

void func_802397A8(func_802397A8_Struct *arg0, s32 *arg1) {
    func_802397A8_StructC *sp3C;
    u16 sp3A;
    u8 pad[4];
    func_802397A8_StructA sp28;
    u8 pad2[4];
    sp3C = arg0->unk94;
    sp3A = ((func_802397A8_StructB *)sp3C)->unkC;
    sp28 = D_8023E51C;
    func_80235FF8(arg0, arg1, 0xC);
    if (sp3A & 0x100) {
        arg0->unkA5 = arg0->unkA5 - 1;
        func_80020744(0x300);
        if (arg0->unkA5 < 0) {
            arg0->unkA5 = 7;
        }
    } else if (sp3A & 0x200) {
        func_80020744(0x300);
        arg0->unkA5 = arg0->unkA5 + 1;
    }
    arg0->unkA5 = arg0->unkA5 % 8;
    func_8023466C((void *)arg0, arg1);
    if ((sp3C->unk4 & 0x4000) && (arg0->unkA8 != 0)) {
        func_80147218(arg0);
        arg0->unkA5 = 2;
        func_800058DC(arg0, func_80238928);
    }
    if (sp3C->unk4 & 0x8000) {
        func_80020744(0x104);
        func_800058DC(arg0, func_80239A18);
    }
}
