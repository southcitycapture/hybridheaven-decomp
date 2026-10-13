#include "context.h"

typedef struct func_80243A2C_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x18 - 0x10];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80243A2C_Leaf;

typedef struct func_80243A2C_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_80243A2C_Leaf *unk30;
} func_80243A2C_Mid;

typedef struct func_80243A2C_Arg1 {
    func_80243A2C_Mid *unk0;
    func_80243A2C_Mid *unk4;
    func_80243A2C_Mid *unk8;
} func_80243A2C_Arg1;

typedef struct func_80243A2C_Sub {
    u8 pad0[0x10];
    u32 unk10;
} func_80243A2C_Sub;

typedef struct func_80243A2C_Arg0 {
    u8 pad0[0x38];
    func_80243A2C_Sub *unk38;
} func_80243A2C_Arg0;

struct func_802440B4_Outer;
void func_802440B4(s32 arg0, struct func_802440B4_Outer *arg1);
extern void func_80244458();
extern void func_80005700();

extern f64 D_802570D8;
extern f64 D_802570E0;
extern f64 D_802570E8;

void func_80243A2C(func_80243A2C_Arg0 *arg0, func_80243A2C_Arg1 *arg1) {
    func_8001F74C();
    if (func_80126CC0((s32)arg0, func_80126EAC) != 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80005F6C(arg0, D_80164F40);
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);

        arg1->unk0->unk30->unk24 |= 0x60300;
        arg1->unk0->unk30->unk30 = (s32)D_80250F40 | 0x40000000;
        arg1->unk0->unk30->unk48 = 0xFF;
        arg1->unk0->unk30->unk49 = 0xFF;
        arg1->unk0->unk30->unk4A = 0xFF;
        arg1->unk0->unk30->unk4C = 0xFF;
        arg1->unk0->unk30->unk4D = 0xFF;
        arg1->unk0->unk30->unk4E = 0xFF;
        arg1->unk0->unk30->unk4B = 0x55;
        func_800062F8(arg1->unk0, 0x80000500);
        func_8012C89C(arg0, 0, 3, 4);
        func_8012D918(arg0, 0x502, 6, 0, 0);
        arg1->unk0->unk30->unk18 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk0->unk30->unk1C = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0 / D_802570D8;
        arg1->unk0->unk30->unk20 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;

        arg1->unk4->unk30->unk24 |= 0x60300;
        arg1->unk4->unk30->unk30 = (s32)D_80250F40 | 0x40000000;
        arg1->unk4->unk30->unk48 = 0xFF;
        arg1->unk4->unk30->unk49 = 0xFF;
        arg1->unk4->unk30->unk4A = 0xFF;
        arg1->unk4->unk30->unk4C = 0xFF;
        arg1->unk4->unk30->unk4D = 0xFF;
        arg1->unk4->unk30->unk4E = 0xFF;
        arg1->unk4->unk30->unk4B = 0x55;
        func_800062F8(arg1->unk4, 0x80000500);
        func_8012C89C(arg0, 1, 3, 4);
        func_8012D918(arg0, 0x502, 6, 1, 0);
        arg1->unk4->unk30->unk18 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk4->unk30->unk1C = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0 / D_802570E0;
        arg1->unk4->unk30->unk20 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk4->unk30->unk4 = arg1->unk0->unk30->unk4 + 3.0f;
        arg1->unk4->unk30->unkC = arg1->unk0->unk30->unkC + 3.0f;
        arg1->unk4->unk30->unk8 = arg1->unk0->unk30->unk8 - 3.0f;

        arg1->unk8->unk30->unk24 |= 0x60300;
        arg1->unk8->unk30->unk30 = (s32)D_80250F40 | 0x40000000;
        arg1->unk8->unk30->unk48 = 0xFF;
        arg1->unk8->unk30->unk49 = 0xFF;
        arg1->unk8->unk30->unk4A = 0xFF;
        arg1->unk8->unk30->unk4C = 0xFF;
        arg1->unk8->unk30->unk4D = 0xFF;
        arg1->unk8->unk30->unk4E = 0xFF;
        arg1->unk8->unk30->unk4B = 0x55;
        func_800062F8(arg1->unk8, 0x80000500);
        func_8012C89C(arg0, 2, 3, 4);
        func_8012D918(arg0, 0x502, 6, 2, 0);
        arg1->unk8->unk30->unk18 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk8->unk30->unk1C = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0 / D_802570E8;
        arg1->unk8->unk30->unk20 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk8->unk30->unk4 = arg1->unk0->unk30->unk4 - 3.0f;
        arg1->unk8->unk30->unkC = arg1->unk0->unk30->unkC - 3.0f;
        arg1->unk8->unk30->unk8 = arg1->unk0->unk30->unk8 - 6.0f;

        arg1->unk0->unk22 = 0;
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 0;
        if (func_80133A24(0x1A5) != 0) {
            func_800058DC((s32)arg0, func_80244458);
        } else {
            func_800058DC((s32)arg0, func_802440B4);
        }
    }
}
