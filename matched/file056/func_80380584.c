#include "context.h"

struct func_80380584_Sub {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
};
struct func_80380584_Obj {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x53];
    u8 unk91;
    u8 pad92[5];
    s8 unk97;
    u8 pad98[0xC];
    struct func_80380584_Sub *unkA4;
};
extern void func_8037E630(void *, s32);
extern void func_8037E920(void *, s32);
extern u8 D_80389A24[];
extern void func_80380778();
struct func_80380908_Obj;
void func_80380908(struct func_80380908_Obj *arg0, s32 arg1);

void func_80380584(struct func_80380584_Obj *arg0, s32 arg1) {
    s32 g;
    u16 f;
    s8 sp;

    sp = 0;
    f = arg0->unkA4->unkC;
    if (f & 0x800) {
        if (arg0->unk97 > 0) {
            sp = -1;
        }
        goto end;
    }
    if (f & 0x400) {
        if (arg0->unk97 < 4) {
            sp = 1;
        }
        goto end;
    }
    g = arg0->unkA4->unk4;
    if (g & 0x8000) {
        func_801471DC(D_8038A9B0);
        func_80147DCC(2);
        D_8038A9B8 = (void *)func_8037DC30((s32)arg0, 0x78, 0x28);
        func_8001B204(2, 0x7D0, 0x28, D_80389A24, 0xFF, 0, D_80388C04[arg0->unk97]);
        if (arg0->unk97 < 2) {
            arg0->unk91 = 2;
            func_8037E630(arg0, arg1);
            func_80020744(0x104);
            func_800058DC(arg0, func_80380778);
            return;
        }
        func_8037E920(arg0, arg1);
        func_80020744(0x104);
        func_800058DC(arg0, func_80380908);
        return;
    }
    if (g & 0x4000) {
        func_80147DCC(2);
        arg0->unk3C = 0;
        arg0->unk97 = 3;
        func_801471DC((s32)D_8038A9B8);
        func_800058DC(arg0, func_803804F0);
        return;
    }
    if (g & 0x1000) {
        func_80148E44(arg0);
        func_80148FC4(arg0, func_8014AB48, 4, 1);
        return;
    }
end:
    if (sp != 0) {
        func_80020744(0x300);
    }
    arg0->unk97 = arg0->unk97 + sp;
    func_8037DFDC((void *)arg0);
}
