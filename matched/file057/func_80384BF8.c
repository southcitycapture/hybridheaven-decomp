#include "context.h"

extern void func_802169AC();
extern s32 D_80006214(void *);
extern u8 D_8038CB24[];
typedef struct func_80384BF8_Struct {
    u8 pad0[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 padB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
} func_80384BF8_Struct;
typedef struct func_80384BF8_Obj {
    u8 pad0[0x30];
    func_80384BF8_Struct *unk30;
} func_80384BF8_Obj;
typedef struct func_80384BF8_Arg {
    u8 pad0[0xA1];
    u8 unkA1;
    u8 padA2[0xE];
    s16 unkB0;
} func_80384BF8_Arg;

#define G(i) (((func_80384BF8_Obj **)D_8008DA88)[i])
void func_80384BF8(s32 a0, s32 a1) {
    u8 sp4F;
    s32 c;

    func_8001B204(0, 0x486, 0xB0, D_8038CB24, 4, 0, func_8013D5F4(((func_80384BF8_Arg *)a0)->unkA1));
    func_802169AC(a0, &sp4F, 0x66, 0x50, 0xA6, 0x10, 0x20, 0, 0, 0xFF, 0xCB, 0);
    func_802169AC(a0, &sp4F, 0x76, 0x60, 0xA6, 0x80, 0x20, 0, 0, 0xFF, 0xCB, 1);
    func_802169AC(a0, &sp4F, 0x66, 0xE0, 0xA6, 0x10, 0x20, 0, 0, 0xFF, 0xCB, 2);
    D_80006214(a0);
    c = 0xC0;
    G(0)->unk30->unk8 = c;
    G(0)->unk30->unk9 = G(0)->unk30->unkA = G(0)->unk30->unk8;
    G(1)->unk30->unk8 = c;
    G(1)->unk30->unk9 = G(1)->unk30->unkA = G(1)->unk30->unk8;
    G(2)->unk30->unk8 = c;
    G(2)->unk30->unk9 = G(2)->unk30->unkA = G(2)->unk30->unk8;
    G(0)->unk30->unkC = 0;
    G(0)->unk30->unkD = G(0)->unk30->unkE = G(0)->unk30->unkC;
    G(1)->unk30->unkC = 0;
    G(1)->unk30->unkD = G(1)->unk30->unkE = G(1)->unk30->unkC;
    G(2)->unk30->unkC = 0;
    G(2)->unk30->unkD = G(2)->unk30->unkE = G(2)->unk30->unkC;
    ((func_80384BF8_Arg *)a0)->unkB0 = 0x3C;
    func_800058DC(a0, func_80384E4C);
}
