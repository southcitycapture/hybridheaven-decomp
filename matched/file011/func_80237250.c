#include "context.h"

typedef struct func_80237250_Struct98 {
    u8 pad[0x38];
    u32 unk38;
    u8 pad2[0x8];
    s16 unk44;
} func_80237250_Struct98;
typedef struct func_80237250_Struct94 {
    u8 pad[4];
    u16 unk4;
    u8 pad2[6];
    u16 unkC;
} func_80237250_Struct94;
typedef struct func_80237250_Struct {
    u8 pad[0x94];
    func_80237250_Struct94 *unk94;
    func_80237250_Struct98 *unk98;
    u8 pad2[0x5];
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    u8 pad3[1];
    s8 unkA5;
    u8 pad4[3];
    u8 unkA9;
    u8 pad5[1];
    u8 unkAB;
} func_80237250_Struct;

extern void func_801470E8(s32, s32, s32, s32);
extern void func_8023644C(void *, s32);
extern void func_802364E8(void *, s32);
extern u8 D_801BCC20;
extern void func_8023748C();
struct func_80239FB4_Arg0;
struct func_80239FB4_Arg1;
void func_80239FB4(struct func_80239FB4_Arg0 *arg0, struct func_80239FB4_Arg1 *arg1);
extern void func_802378DC();

void func_80237250(func_80237250_Struct *arg0, s32 arg1) {
    s8 v;
    func_80237250_Struct94 *p94 = arg0->unk94;
    func_80237250_Struct98 *p98 = arg0->unk98;

    v = arg0->unkA2;
    if (v == 0) {
        if ((p94->unkC & 0x200) && (arg0->unkA9 & 2)) {
            func_80020744(0x300);
            arg0->unkA2 = 1;
            arg0->unkA1 = -1;
            func_8023644C(arg0, arg1);
        } else if (((p94->unkC & 0x100) || (p94->unk4 & 0x8000)) && (arg0->unkA9 & 1)) {
            func_80020744(0x300);
            arg0->unkA2 = -1;
            func_802364E8(arg0, arg1);
        } else if (p94->unk4 & 0x4000) {
            if ((p98->unk38 >> 0x1F) != 0) {
                p98->unk44 = 0xA;
            } else {
                p98->unk44 = 0x14;
            }
            func_800058DC(arg0, func_80239FB4);
        } else if (func_80234D2C((void *)arg0) != 0) {
            func_801453CC(((s32 *)D_8024086C)[1], 0, D_801BCC20, 1, 0x1B, 7, 0x1B);
        }
        func_80234828((void *)arg0, (void *)arg1);
        func_801470E8(arg1, 0, 2, 1);
        v = arg0->unkA2;
    }
    if (v == 1) {
        func_801470E8(arg1, 0, 2, 0);
        func_80235394((void *)arg0, arg1, 0);
        if (arg0->unkA2 == 0) {
            arg0->unkA5 = 0;
            arg0->unkAB = 0;
            func_800058DC(arg0, func_8023748C);
        }
    } else if (v == -1) {
        func_801470E8(arg1, 0, 2, 0);
        func_80235394((void *)arg0, arg1, 0);
        if (arg0->unkA2 == 0) {
            arg0->unkA5 = (arg0->unkA3 - 1) / 2;
            func_800058DC(arg0, func_802378DC);
        }
    }
}
