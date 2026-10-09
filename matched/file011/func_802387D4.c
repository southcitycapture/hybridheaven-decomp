#include "context.h"

struct func_802387D4_Struct0 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x74];
    struct func_802387D4_Struct1 *unk9C;
    u8 pad2[0x8];
    u8 unkA8;
    u8 pad3[3];
    u16 unkAC;
};
struct func_802387D4_Struct1 {
    u8 pad[0x38];
    u32 unk38;
};
struct func_802387D4_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xC];
    s32 unkEC;
    u8 pad2[0xF40];
    u8 unk1030;
};
extern void func_80146208(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s8 func_802242D0(s32);
extern void func_80006088(s32);
extern struct func_802387D4_Glob D_801BBBF0;
extern void func_80238928();
extern void func_80239048();

void func_802387D4(struct func_802387D4_Struct0 *arg0, s32 *arg1) {
    s32 a0;
    s8 sp4B;
    struct func_802387D4_Struct1 *sp44;

    sp4B = 0;
    sp44 = arg0->unk9C;
    if (arg0->unk24 == 0) {
        func_80146208(arg0, &sp4B, 0x66, 0x78, 0x7A, 0x50, 0x10, 0, 0, 0xFF, 0x220, 0x16);
    }
    if (arg0->unkAC < 0x11) {
        func_801453CC(arg0->unk24, 0x300, 4, 0xB, 1, 4, 3);
        return;
    }
    func_80020744(0x276);
    if (D_801BBBF0.unk1030 == 0) {
        a0 = D_801BBBF0.unkEC;
    } else {
        a0 = D_801BBBF0.unkDC;
    }
    arg0->unkA8 = func_802242D0(a0);
    if (arg0->unkA8 == 0 && (sp44->unk38 >> 31) == 0 && func_80236348((void *)arg0) == 0) {
        func_800058DC(arg0, func_80239048);
        return;
    }
    func_80006088(*arg1);
    func_800058DC(arg0, func_80238928);
}
