#include "context.h"

struct func_8037F8C4_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
    u8 pad92[6];
    u8 unk98;
};
extern u8 D_801BBC8E[];
extern u8 D_8038BCC0[];
extern u8 D_8038BCD4[];
extern u8 D_8038BCD8[];
extern u8 D_8038BCDC[];
extern void func_80002364();
extern void func_80006088();
extern void func_80020718();
extern void func_801460C8();
extern void func_8037FAF4();
extern void func_800058DC(s32, void *);
struct func_8037FEE4_Struct;
void func_8037FEE4(struct func_8037FEE4_Struct *arg0, s32 arg1);

void func_8037F8C4(struct func_8037F8C4_Struct *arg0, s32 *arg1) {
    s8 sp67;
    s32 a, b, c, d;
    extern void func_8001B204();

    sp67 = 0;
    if (*(u16 *)(D_801BBC8E + 0xA) & 0x200) {
        func_80020718(0x300);
        arg0->unk91 ^= 1;
    } else if (*(u16 *)(D_801BBC8E + 0xA) & 0x100) {
        func_80020718(0x300);
        arg0->unk91 ^= 1;
    }
    if (arg0->unk91 == 0) a = 1; else a = 0;
    if (arg0->unk91 == 0) b = 0; else b = 3;
    if (arg0->unk91 == 1) c = 1; else c = 0;
    if (arg0->unk91 == 1) d = 0; else d = 3;
    func_8001B204(2, 0xC0, 0xB5, D_8038BCC0, a, b, c, d);
    if (*(u16 *)(D_801BBC8E + 2) & 0x8000) {
        if (arg0->unk91 == 0) {
            arg0->unk90 = 0;
            func_80006088(arg1[arg0->unk98 + 2]);
            func_8001B204(6, 0, 0, D_8038BCD4);
            func_8001B204(7, 0, 0, D_8038BCD8);
            func_8001B204(1, 0x42, 0x57, D_8038BCDC, 4, 0);
            func_801460C8(arg0, &sp67, 0x3C, 0x78, 0xA8, 0x28, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
            func_80002364(0x0C000C00, 0xA, 3, 0);
            func_800058DC((s32)arg0, func_8037FAF4);
            return;
        }
        if (arg0->unk91 != 0) {
            func_800058DC((s32)arg0, func_8037FEE4);
        }
    }
}
