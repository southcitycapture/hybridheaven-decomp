#include "context.h"

struct func_8037FCF8_Sub {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
};
struct func_8037FCF8_Obj {
    u8 pad0[0x91];
    s8 unk91;
    u8 pad92[2];
    s8 unk94;
    u8 pad95[0xF];
    struct func_8037FCF8_Sub *unkA4;
};
extern void func_80020744(s32);
extern void func_80148C60(void *, s32, s32);
extern void func_8037DA84(void *, void *);
extern void func_801498CC();
extern void func_8014AB48();
extern void func_80148E44(void *a0);
extern s32 func_80148FC4();
extern s32 func_8037FED4;
extern void func_801471DC(s32 a0);
extern s32 D_8038A9A0;
extern s32 D_8038A9A4;
extern void *D_8038A9A8;

void func_8037FCF8(struct func_8037FCF8_Obj *arg0, u8 *arg1) {
    struct func_8037FCF8_Sub *sub = arg0->unkA4;
    s8 old = arg0->unk91;
    u16 f = sub->unkC;

    if (f & 0x800) {
        arg0->unk91 = arg0->unk91 - 1;
        arg0->unk94 = 1;
    } else if (f & 0x400) {
        arg0->unk91 = arg0->unk91 + 1;
        arg0->unk94 = 1;
    }
    if (arg0->unk91 < 0) {
        arg0->unk91 = 3;
    }
    arg0->unk91 = arg0->unk91 % 4;
    if (old != arg0->unk91) {
        func_80020744(0x300);
    }
    func_80148C60(arg0, D_8038A9A0, 4);
    func_801453CC(D_8038A9A8, 0x100, 0, 0, 1, 0x22, 0x22);
    if (arg0->unk94 != 0) {
        func_801471DC(D_8038A9A4);
        func_8037DA84(arg0, arg1);
        arg0->unk94 = 0;
    }
    if (sub->unk4 & 0x4000) {
        func_801471DC(*(s32 *)(arg1 + 4));
        func_80148FC4(arg0, func_801498CC, 3, 0);
        return;
    }
    if (sub->unk4 & 0x1000) {
        func_80148E44(arg0);
        func_80148FC4(arg0, func_8014AB48, 3, 1);
    }
}
