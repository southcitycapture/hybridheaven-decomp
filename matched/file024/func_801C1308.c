#include "context.h"
typedef struct func_801C3C14_Struct {
    u8 pad[0x2];
    u16 unk2;
    u16 unk4;
    u8 pad2[0x4];
    u16 unkA;
    u16 unkC;
    u8 pad3[0x3A2 - 0xE];
    u16 unk3A2;
    u8 pad4[0xEF2 - 0x3A4];
    u16 unkEF2;
} func_801C3C14_Struct;
extern func_801C3C14_Struct D_801BBBF0;

typedef struct func_801C1308_Struct {
    u8 pad[0x17];
    s8 unk17;
    s8 unk18;
    s8 unk19;
    s8 unk1A;
    u8 unk1B;
    u8 unk1C;
} func_801C1308_Struct;

void func_801C1308(void) {
    func_801C1308_Struct *p = (func_801C1308_Struct *)&D_801BBBF0;

    p->unk17 = 0;
    p->unk18 = 1;
    p->unk1A = 0;
    p->unk19 = 1;
    p->unk1B = 1;
    p->unk1C = 1;
}
