#include "context.h"
void func_80242690(u8 *arg0, void **arg1);

typedef struct func_802424F8_S3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802424F8_S3;
typedef struct func_802424F8_S2 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[8];
    func_802424F8_S3 *unk30;
} func_802424F8_S2;
typedef struct func_802424F8_S1 {
    func_802424F8_S2 *unk0;
} func_802424F8_S1;
typedef struct func_802424F8_A0 {
    u8 pad0[0x92];
    u16 unk92;
} func_802424F8_A0;

extern void func_8012D8C8(s32, s32, s32, f32, s32, s32);
extern u8 D_80250310[];

void func_802424F8(s32 arg0, func_802424F8_S1 *arg1) {
    if (func_80133A24(0x1F2) != 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 9, 3);
        func_8012D8C8(arg0, 9, 0, 1.0f, 1, 0);
        arg1->unk0->unk30->unk24 |= 0x300;
        arg1->unk0->unk30->unk30 = (s32)D_80250310 | 0x40000000;
        arg1->unk0->unk30->unk48 = 0xFF;
        arg1->unk0->unk30->unk49 = 0;
        arg1->unk0->unk30->unk4A = 0;
        arg1->unk0->unk30->unk4C = 0;
        arg1->unk0->unk30->unk4D = 0;
        arg1->unk0->unk30->unk4E = 0;
        arg1->unk0->unk30->unk4B = 0;
        arg1->unk0->unk30->unk4 = 0.0f;
        arg1->unk0->unk30->unk8 = -1000.0f;
        arg1->unk0->unk30->unkC = 0.0f;
        arg1->unk0->unk30->unk18 = 1.0f;
        arg1->unk0->unk30->unk1C = 1.0f;
        arg1->unk0->unk30->unk20 = 1.0f;
        func_800062F8(arg1->unk0, 0x80000500);
        ((func_802424F8_A0 *)arg0)->unk92 = 0x80;
        func_800058DC(arg0, func_80242690);
    }
}
