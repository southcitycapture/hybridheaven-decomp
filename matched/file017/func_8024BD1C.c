#include "common.h"
extern void func_800058DC(s32, void (*)());
extern void func_80020718(s32);
extern s32 func_80133A24(s32);
extern void func_801C2F0C(s32, s32);
struct func_8024CEA0_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
    s16 unk94;
};
struct func_8024CEA0_StructSub {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x4B - 0x14];
    u8 unk4B;
};
struct func_8024CEA0_StructMid {
    u8 pad0[0x30];
    struct func_8024CEA0_StructSub *unk30;
};
struct func_8024CEA0_StructArg1 {
    u8 pad0[0x10];
    struct func_8024CEA0_StructMid *unk10;
};
void func_8024CEA0(struct func_8024CEA0_StructArg0 *arg0, struct func_8024CEA0_StructArg1 *arg1);


typedef struct func_8024BD1C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[0x20]; u32 unk30; } func_8024BD1C_In;
typedef struct func_8024BD1C_Node { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; func_8024BD1C_In *unk30; } func_8024BD1C_Node;
typedef struct func_8024BD1C_A1 { func_8024BD1C_Node *unk0; u8 pad4[8]; func_8024BD1C_Node *unkC; func_8024BD1C_Node *unk10; } func_8024BD1C_A1;
typedef struct func_8024BD1C_A0 { u8 pad0[0x3C]; u16 unk3C; u8 pad3E[0x5B]; u8 unk99; } func_8024BD1C_A0;
typedef struct func_8024BD1C_Arg { s16 a; s32 b; f32 c; u8 pad[0x14]; } func_8024BD1C_Arg;

extern f64 D_8025D008;
extern f64 D_8025D010;
extern f64 D_8025D018;
extern u8 D_80258E38[];
extern void func_8024BF7C();

void func_8024BD1C(func_8024BD1C_A0 *arg0, func_8024BD1C_A1 *arg1) {
    func_8024BD1C_Arg sp;
    s32 pad;
    s32 t;
    s32 pad2;
    s32 c;
    s32 b;
    s32 a;

    t = arg0->unk3C++;
    func_8024CEA0(arg0, arg1);
    if (t < 0x79) {
        arg1->unkC->unk30->unk4 = arg1->unkC->unk30->unk4 + D_8025D008;
        arg1->unkC->unk30->unk8 = arg1->unkC->unk30->unk8 + D_8025D010;
        arg1->unkC->unk30->unkC = arg1->unkC->unk30->unkC + D_8025D018;
    }
    if (t >= 0x96) {
        arg0->unk3C = 0;
        arg1->unk10->unk22 = 0;
        arg1->unkC->unk22 = 0;
        arg1->unk0->unk30->unk30 = (u32)D_80258E38 | 0x40000000;
        func_80020718(0x18A);
        a = func_80133A24(0x135) == 0;
        b = func_80133A24(0x134) == 0;
        c = func_80133A24(0x133) == 0;
        arg0->unk99 = 4 - (func_80133A24(0x136) == 0) - c - b - a;
        switch (arg0->unk99) {
        case 1:
            sp.a = 0x1000;
            sp.b = 0x04100043;
            sp.c = 5.0f;
            func_801C2F0C(4, (s32)&sp);
            break;
        case 2:
            sp.a = 0x1000;
            sp.b = 0x0410002C;
            sp.c = 5.0f;
            func_801C2F0C(4, (s32)&sp);
            break;
        case 3:
            sp.a = 0x1100;
            sp.b = 0x01B80026;
            sp.c = 3.0f;
            func_801C2F0C(4, (s32)&sp);
            break;
        case 4:
            sp.a = 0x1100;
            sp.b = 0x01B80032;
            sp.c = 10.0f;
            func_801C2F0C(4, (s32)&sp);
            break;
        }
        func_800058DC((s32)arg0, func_8024BF7C);
    }
}
