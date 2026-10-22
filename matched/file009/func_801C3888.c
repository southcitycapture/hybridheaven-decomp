#include "context.h"

extern void func_801E5010();
extern void func_801C3A1C(void *arg0, s32 arg1);

typedef struct func_801C3888_StructObj {
    u8 pad0[0x24];
    func_801C36F8_StructLink *unk24;
    u8 pad1[0x54 - 0x28];
    s32 unk54;
    u8 pad2[4];
    struct func_801C3174_Sub *unk5C;
} func_801C3888_StructObj;

typedef struct func_801C3888_StructGlobal {
    u8 pad0[0xDC];
    func_801C31FC_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[6];
    s32 unk198;
    u8 pad3[4];
    s32 unk1A0;
    u8 pad4[0x1DA - 0x1A4];
    u16 unk1DA;
    u8 pad5[0xEF0 - 0x1DC];
    u16 unkEF0;
    u8 pad6[0xEFC - 0xEF2];
    s32 unkEFC;
    u8 pad7[4];
    s32 unkF04;
    u8 pad8[4];
    u16 unkF0C;
} func_801C3888_StructGlobal;

#define G ((func_801C3888_StructGlobal *)D_801BBBF0)

void func_801C3888(func_801C3888_StructObj *arg0, s32 arg1) {
    struct func_801C3174_Sub *temp_s1;
    func_801C36F8_StructRot *temp_v0;

    temp_v0 = arg0->unk24->unk2C;
    temp_s1 = arg0->unk5C;
    temp_v0->unk12 += G->unkF0C;
    func_8012A7F4(arg0, G->unk198, G->unk1A0, 0x80);
    func_8012AEE0(arg0, G->unkF04);
    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk12 -= G->unkF0C;
    if (G->unk1DA == 2) {
        G->unk18E = 3;
        G->unk190 = 0;
        G->unkEF0 &= 0xFFBF;
        G->unkDC->unk2C |= 0x40;
        arg0->unk54 = G->unkEFC;
        func_800058DC(arg0, func_801E5010);
    } else if (G->unk1DA == 1U) {
        temp_s1->unk78 = 1;
        func_800058DC(arg0, func_801C3174);
    } else if (func_8012AE54(arg0, G->unk198, G->unk1A0, 3.0f) == 0) {
        temp_s1->unk78 = 1;
        func_800058DC(arg0, func_801C3A1C);
    } else if (func_8012CE9C(arg1, (s32)temp_s1, D_801E0B20, 10) == 0) {
        func_80010550(arg1, temp_s1);
    }
}
