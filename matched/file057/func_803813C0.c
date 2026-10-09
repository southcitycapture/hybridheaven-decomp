#include "context.h"
extern u8 D_801BC03C[];
void *func_800058DC(void *, void *);

struct func_803813C0_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
};

extern void func_8001F6E4(void);
extern void func_80116E80(s32);
extern void func_80006214(void *);
extern void func_80002BAC(s32);
extern u8 func_8022B640(s32);
extern void func_80381310(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8038150C(void);
extern void func_80381D48(void);
extern u8 D_801BC3D8[];

void func_803813C0(struct func_803813C0_Struct *arg0, s32 arg1) {
    s8 sp54[4];
    s32 i;

    sp54[3] = 0;
    i = (s32)((arg0->unk90 == 0) ? D_801BC03C : D_801BC3D8);
    func_8001F6E4();
    func_80116E80(0x80);
    func_80381310(arg0, &sp54[3], 0, 0, 0x140, 0x100, 0x20, 0x20, 0x20, 0x80, 0, 0, 0, 0, 0);
    func_80006214(arg0);
    if (*(s16 *)(i + 4) < 0x65) {
        arg0->unk92 = func_8022B640(6);
    } else {
        arg0->unk92 = func_8022B640(7);
    }
    arg0->unk93 = func_8022B640(3);
    arg0->unk91 = 0;
    i = 0;
    do {
        func_80002BAC(i & 0xFF);
        i = (i + 1) & 0xFF;
    } while (i < 4);
    if (arg0->unk94 == 0) {
        func_800058DC(arg0, func_8038150C);
        return;
    }
    func_800058DC(arg0, func_80381D48);
}
