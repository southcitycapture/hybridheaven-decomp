#include "common.h"
struct func_8024C5B4_Struct {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};
extern struct func_8024C5B4_Struct D_801BBBF0;
typedef struct func_8024B350_S2 { u8 pad[8]; f32 unk8; } func_8024B350_S2;
typedef struct func_8024B350_G { u8 pad[0x2C]; func_8024B350_S2 *unk2C; } func_8024B350_G;
extern func_8024B350_G *D_801BBCD0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);


typedef struct func_8024B758_StructA {
    f32 unk0; f32 unk4; f32 unk8; s16 unkC; u8 padE[2]; s32 unk10; f32 unk14; s16 unk18; s16 unk1A; s32 unk1C;
} func_8024B758_StructA;
typedef struct func_8024B758_StructB {
    s16 unk0; u8 pad2[2]; s32 unk4; f32 unk8; s16 unkC;
} func_8024B758_StructB;
typedef struct func_8024B758_StructP {
    u8 pad[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12;
} func_8024B758_StructP;
typedef struct func_8024B758_StructO {
    u8 pad[0x30]; func_8024B758_StructP *unk30;
} func_8024B758_StructO;
typedef struct func_8024B758_StructI {
    u8 pad[6]; s16 unk6; u8 pad8[2]; s16 unkA;
} func_8024B758_StructI;
typedef struct func_8024B758_Struct {
    u8 pad0[0x24]; func_8024B758_StructO *unk24; u8 pad28[0x10]; func_8024B758_StructI *unk38;
    u8 pad3C[0x54]; u8 unk90; u8 pad91[2]; u8 unk93; f32 unk94;
} func_8024B758_Struct;
typedef struct func_8024B758_Tab { u8 pad0[6]; u16 unk6; f32 unk8; u8 pad[8]; } func_8024B758_Tab;
typedef struct func_8024B758_DC { u8 pad[0x2C]; s32 unk2C; u8 pad30[0x14]; f32 unk44; } func_8024B758_DC;
typedef struct func_8024B758_G { u8 pad[0xDC]; func_8024B758_DC *unkDC; struct { u8 pad[0x2C]; func_8024B758_StructP *unk2C; } *unkE0; } func_8024B758_G;
extern s32 func_801C2F0C(s32, void *);
extern s32 func_801C2FF8();
extern s32 func_801C3044();
extern s16 func_801FD284(s16, s32, f32);
extern void func_80133980(s32);
extern func_8024B758_Tab D_8018294C[];
extern func_8024B758_Tab D_80182952[];
extern func_8024B758_Tab D_80182954[20];
extern u8 D_802593A0[];

s32 func_8024B758(func_8024B758_Struct *arg0, s32 arg1) {
    union { func_8024B758_StructA a; func_8024B758_StructB b; } u;
    func_8024B758_DC *p;

    switch (arg0->unk93) {
    case 1:
        if ((u32)*(u16 *)((u8 *)D_80182952 + arg0->unk90 * 0x14) <= arg0->unk94 && func_801C2FF8() != 0) {
            u.a.unk0 = 100.7f;
            u.a.unk4 = 735.0f;
            u.a.unk8 = 0.0f;
            u.a.unkC = 0x1100;
            u.a.unk10 = 0x0168003E;
            u.a.unk14 = 1.0f;
            u.a.unk18 = 0;
            u.a.unk1A = 0x96;
            func_801C2F0C(2, &u.a);
            p = ((func_8024B758_G *)&D_801BBBF0)->unkDC;
            p->unk2C &= ~0x40;
            ((func_8024B758_G *)&D_801BBBF0)->unkDC->unk44 = 0.0f;
            arg0->unk93 = 4;
        } else {
            arg0->unk24->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)*(f32 *)((u8 *)D_80182954 + arg0->unk90 * 0x14);
            arg0->unk24->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)*(f32 *)((u8 *)D_80182954 + arg0->unk90 * 0x14);
            arg0->unk94 += (f64)*(f32 *)(0x80182954u + arg0->unk90 * 0x14);
        }
        break;
    case 4:
        if (func_801C3044() == 0) {
            u.b.unk0 = 0x1100;
            u.b.unk4 = 0x0348007A;
            u.b.unkC = 0xA;
            u.b.unk8 = 5.0f;
            func_801C2F0C(5, &u.b);
            arg0->unk93 = 2;
            arg0->unk94 = 0.0f;
        }
        break;
    case 2:
        ((func_8024B758_G *)&D_801BBBF0)->unkE0->unk2C->unk12 = func_801FD284(((func_8024B758_StructP *)D_801BBCD0->unk2C)->unk12, 0x1000, 0.1f);
        arg0->unk94 = arg0->unk94 + 1.0f;
        if (arg0->unk94 >= 30.0f) {
            func_8011AAF4(D_802593A0, 0x144, arg0, 0, 1, 0.0f, 100.8f, -113.9f, 749.3f, 0.0f, 100.6f, -113.9f, 735.2f, 0.0f, 35.0f, -1, -1);
            arg0->unk93 = 3;
            arg0->unk94 = 0.0f;
            func_80020718(0x122);
        }
        break;
    case 3:
        ((func_8024B758_StructP *)D_801BBCD0->unk2C)->unk12 = func_801FD284(((func_8024B758_StructP *)D_801BBCD0->unk2C)->unk12, 0x1000, 0.07f);
        arg0->unk24->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)*(f32 *)((u8 *)D_80182954 + arg0->unk90 * 0x14);
        arg0->unk24->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)D_8018294C[arg0->unk90].unk8;
        if ((arg0->unk94 += (f64)D_8018294C[arg0->unk90].unk8) >= (u32)D_8018294C[arg0->unk90].unk6) {
            arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
            arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
            func_80133980(0x80);
            return 0;
        }
        break;
    default:
        break;
    }
    return 1;
}
