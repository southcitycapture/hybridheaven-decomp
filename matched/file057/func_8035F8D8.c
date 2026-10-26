#include "common.h"
extern u8 D_8008DA88[];
extern u8 D_801BBBF0[];
void func_800058DC(void *arg0, void *arg1);
extern void func_800112B0(s32, s32, s32, void *);

typedef struct func_8035F8D8_Struct { u8 pad[0x5C]; s32 unk5C; } func_8035F8D8_Struct;
extern void func_8035D660();
extern void func_8035DF74();
void func_8035F8D8(func_8035F8D8_Struct *arg0, s32 arg1) {
    s32 pad;
    s32 sp28;
    s32 sp24;
    func_8035F8D8_Struct *s0;
    extern void func_800112B0();

    if (arg0 != *(func_8035F8D8_Struct **)(D_801BBBF0 + 0xDC)) {
        s0 = *(func_8035F8D8_Struct **)(D_801BBBF0 + 0xDC);
    } else {
        s0 = *(func_8035F8D8_Struct **)(D_801BBBF0 + 0xEC);
    }
    sp28 = arg0->unk5C;
    sp24 = s0->unk5C;
    func_802254F8(s0, 0x14, 2);
    func_800112B0(arg1, sp28 + 0x22);
    func_80006214(s0);
    func_800112B0(D_8008DA88, sp24 + 0x22);
    func_80006214(arg0);
    func_800058DC(arg0, func_8035D660);
    func_800058DC(s0, func_8035DF74);
}
