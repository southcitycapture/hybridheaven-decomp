#include "common.h"
extern u8 D_801BBBF0[];
typedef struct func_801C1C1C_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C1C1C_StructDC;
typedef struct func_801C2300_StructGlobal {
    u8 pad0[0xDC];
    func_801C1C1C_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[2];
    u16 unk194;
    u8 pad194[2];
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
} func_801C2300_StructGlobal;
#define G ((func_801C2300_StructGlobal *)D_801BBBF0)
extern void func_800058DC(void *a, void *b);
struct func_801C1B38_Sub {
    u8 pad[0x78];
    s16 unk78;
};
struct func_801C1B38_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C1B38_Sub *unk5C;
};
void func_801C1A34(struct func_801C1B38_Obj *arg0, s32 arg1);
extern void func_801E5010();
extern void func_802488E8();
extern void func_801C2580();
extern void func_801C3070();

void func_801C1970(void *arg0, s32 arg1)
{
    if (G->unk18E == 2) {
        G->unkEF0 &= 0xEFFF;
        switch (G->unk190) {
        case 0:
        case 5:
            func_800058DC(arg0, func_802488E8);
            break;
        case 1:
        case 4:
        case 6:
            func_800058DC(arg0, func_801C1A34);
            break;
        case 2:
            D_801BBBF0[0x230] = 0;
            func_800058DC(arg0, func_801C2580);
            break;
        case 3:
            func_800058DC(arg0, func_801C3070);
            break;
        }
    } else {
        G->unk18E = 0;
        func_800058DC(arg0, func_801E5010);
    }
}
