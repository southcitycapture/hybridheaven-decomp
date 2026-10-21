#include "context.h"
extern u8 D_801BBBF0[];
extern u8 D_8038BC90[];
extern u8 D_8038BCB4[];
typedef struct { s32 *p; u8 pad[0x18]; } func_8037F5F0_Struct;
extern func_8037F5F0_Struct D_801842A0[];
extern void func_80006214();
extern void func_80002364();
extern void func_801460C8();
extern void func_800058DC(s32, void *);
struct func_8037F8C4_Struct;
void func_8037F8C4(struct func_8037F8C4_Struct *arg0, s32 *arg1);

void func_8037F5F0(struct func_8037F8C4_Struct *arg0, s32 arg1) {
    s8 sp6F;
    u8 i;
    extern void func_8001B204();

    sp6F = 0;
    func_801460C8(arg0, &sp6F, 0x3C, 0x54, 0xCE, 0x10, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
    func_8001B204(1, 0x42, 0x57, D_8038BC90, 4, 0, D_801BBBF0[0x7C1] + 1);
    for (i = 0; i < (D_801BBBF0[0x7C1] + 1); i++) {
        func_8001B204((i + 3) & 0xFF, 0x4C, (s16)(i * 0xC + 0x68), D_8038BCB4, 4, 0, i + 1, *D_801842A0[(D_801BBBF0 + i)[0x7C4]].p);
    }
    func_801460C8(arg0, &sp6F, 0xBA, 0xB4, 0x50, 0x10, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
    func_801460C8(arg0, &sp6F, 0x46, 0x66, 0xC0, D_801BBBF0[0x7C1] * 0xC + 0x10, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
    func_80006214(arg0);
    ((s8 *)arg0)[0x91] = 0;
    func_80002364(0x03000000, 0xA, 3, 0);
    func_800058DC((s32)arg0, func_8037F8C4);
}
