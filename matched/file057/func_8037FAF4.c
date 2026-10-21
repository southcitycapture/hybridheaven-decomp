#include "context.h"
struct func_8037FAF4_Pair { s32 a; s32 b; };
extern struct func_8037FAF4_Pair D_80389794;
extern u8 D_801BBC8E[];
extern u8 D_801BC03C[];
extern u8 D_8038BD28[], D_8038BD3C[], D_8038BD44[], D_8038BD4C[], D_8038BD54[], D_8038BD60[], D_8038BD6C[];
extern s32 func_8013D16C(s32, void *);
struct func_8037FAF4_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
};
extern s32 D_8001B204();
extern void D_8037F448();
#define PAD (*(u16 *)&D_801BBC8E[0xA])
void func_8037FAF4(struct func_8037FAF4_Struct *arg0, s32 arg1) {
    struct func_8037FAF4_Pair sp48;
    extern void func_8001B204();
    extern void func_800058DC();

    sp48 = D_80389794;
    if (PAD & 0x800) {
        func_80020718(0x300);
        arg0->unk90 = arg0->unk90 - 1;
    } else if (PAD & 0x400) {
        func_80020718(0x300);
        arg0->unk90 = arg0->unk90 + 1;
    }
    if (PAD & 0x200) {
        func_80020718(0x300);
        arg0->unk91 = arg0->unk91 ^ 1;
    } else if (PAD & 0x100) {
        func_80020718(0x300);
        arg0->unk91 = arg0->unk91 ^ 1;
    }
    D_8001B204(2, 0xC0, 0xB5, D_8038BD28, arg0->unk91 == 0 ? 1 : 0, arg0->unk91 == 0 ? 0 : 3, arg0->unk91 == 1 ? 1 : 0, arg0->unk91 == 1 ? 0 : 3);
    if (arg0->unk90 < 0) {
        arg0->unk90 = 2;
    } else if (arg0->unk90 >= 3) {
        arg0->unk90 = 0;
    }
    func_8001B204(3, 0x42, 0x79, D_8038BD3C, 1, (arg0->unk90 == 0 && arg0->unk91 == 0) ? 0 : 3, func_8013D16C(0, D_801BC03C));
    func_8001B204(4, 0x42, 0x85, D_8038BD44, 1, (arg0->unk90 == 1 && arg0->unk91 == 0) ? 0 : 3, func_8013D16C(1, D_801BC03C));
    func_8001B204(5, 0x42, 0x91, D_8038BD4C, 1, (arg0->unk90 == 2 && arg0->unk91 == 0) ? 0 : 3, func_8013D16C(2, D_801BC03C));
    func_8001B204(6, 0x7A, 0x79, D_8038BD54, 1, (arg0->unk90 == 0 && arg0->unk91 == 0) ? 0 : 3, sp48.b);
    func_8001B204(7, 0x7A, 0x85, D_8038BD60, 1, (arg0->unk90 == 1 && arg0->unk91 == 0) ? 0 : 3, sp48.b);
    func_8001B204(8, 0x7A, 0x91, D_8038BD6C, 1, (arg0->unk90 == 2 && arg0->unk91 == 0) ? 0 : 3, sp48.b);
    if (*(u16 *)&D_801BBC8E[2] & 0x8000) {
        func_80020718(0x104);
        if (arg0->unk91 != 0) {
            func_800058DC(arg0, func_8037FEE4);
        } else {
            D_8037F448((u8)arg0->unk90, D_801BC03C);
            func_800058DC(arg0, func_8037FEE4);
        }
    }
}
