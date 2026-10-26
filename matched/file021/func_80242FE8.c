#include "common.h"
extern u8 D_8017AF38[];
typedef struct func_8024345C_Inner2 {
    u8 pad0[0x22];
    u8 unk22;
} func_8024345C_Inner2;
typedef struct func_8024345C_Inner {
    u8 pad0[0x24];
    struct func_8024345C_Inner2 *unk24;
} func_8024345C_Inner;
typedef struct func_8024345C_Struct {
    u8 pad0[0xF23];
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 pad1[0x1044 - 0xF26];
    struct func_8024345C_Inner *unk1044;
} func_8024345C_Struct;
extern struct func_8024345C_Struct D_801BBBF0;
extern void func_800058DC(s32, void *);
extern void func_800062F8(void *, u32);
extern void func_8012C784(void *, s32, u32);
void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern s32 func_80133A24(s32 arg0);


typedef struct func_80242FE8_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80242FE8_StructI;

typedef struct func_80242FE8_StructO {
    u8 pad0[0x30];
    func_80242FE8_StructI *unk30;
} func_80242FE8_StructO;

typedef struct func_80242FE8_StructA {
    func_80242FE8_StructO *unk0;
    func_80242FE8_StructO *unk4;
    func_80242FE8_StructO *unk8;
} func_80242FE8_StructA;

#define F42FE8_GB(n) (((u8 *)&D_801BBBF0)[n])
extern void func_802432D4();
extern u8 D_802510A0[];
extern f32 D_80257094;
extern f32 D_80257098;
extern f32 D_8025709C;
extern f32 D_802570A0;
extern f32 D_802570A4;
extern f32 D_802570A8;
extern f32 D_802570AC;
extern f32 D_802570B0;

void func_80242FE8(s32 arg0, func_80242FE8_StructA *arg1) {
    if (func_80133A24(0x1A1) != 0) {
        (*(u8 **)(*(u8 **)&F42FE8_GB(0x1044) + 0x24))[0x22] = 0;
        func_8012C784((void *)arg0, 0, 0x17);
        func_8012D918((void *)arg0, 0x500, 0, 0, 0);
        arg1->unk0->unk30->unk4 = D_80257094;
        arg1->unk0->unk30->unk8 = -504.0f;
        arg1->unk0->unk30->unkC = D_80257098;
        arg1->unk0->unk30->unk12 = 0x5A3;
        func_800062F8(arg1->unk4, 0x80000C00);
        func_8012C89C((void *)arg0, 1, 0x501, 0x18);
        arg1->unk4->unk30->unk24 |= 0x300;
        arg1->unk4->unk30->unk30 = (s32)D_802510A0 | 0x40000000;
        arg1->unk4->unk30->unk48 = 0xFF;
        arg1->unk4->unk30->unk49 = 0xFF;
        arg1->unk4->unk30->unk4A = 0xFF;
        arg1->unk4->unk30->unk4C = 0x76;
        arg1->unk4->unk30->unk4D = 0xFF;
        arg1->unk4->unk30->unk4E = 0xFF;
        arg1->unk4->unk30->unk4B = 0xFF;
        arg1->unk4->unk30->unk18 = 1.0f;
        arg1->unk4->unk30->unk1C = 1.0f;
        arg1->unk4->unk30->unk20 = 1.0f;
        arg1->unk4->unk30->unk4 = D_8025709C;
        arg1->unk4->unk30->unk8 = -504.0f;
        arg1->unk4->unk30->unkC = D_802570A0;
        arg1->unk4->unk30->unk12 = 0x5A3;
        arg1->unk8->unk30->unk30 = (s32)D_8017AF38;
        arg1->unk8->unk30->unk24 = 0x400;
        arg1->unk8->unk30->unk4C = F42FE8_GB(0xF32);
        arg1->unk8->unk30->unk4D = F42FE8_GB(0xF33);
        arg1->unk8->unk30->unk4E = F42FE8_GB(0xF34);
        arg1->unk8->unk30->unk4F = F42FE8_GB(0xF35);
        arg1->unk8->unk30->unk4 = D_802570A4;
        arg1->unk8->unk30->unk8 = D_802570A8;
        arg1->unk8->unk30->unkC = D_802570AC;
        arg1->unk8->unk30->unk12 = 0;
        func_8012C89C((void *)arg0, 2, 0x501, 0x19);
        arg1->unk8->unk30->unk20 = D_802570B0;
        arg1->unk8->unk30->unk18 = arg1->unk8->unk30->unk1C = arg1->unk8->unk30->unk20;
        func_800058DC(arg0, func_802432D4);
    }
}
