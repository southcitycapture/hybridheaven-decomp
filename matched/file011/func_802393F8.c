#include "common.h"
typedef struct func_80239048_Copy {
    s32 v[4];
} func_80239048_Copy;
extern func_80239048_Copy D_80164F40;
extern u8 D_801BBBF0[];
extern u8 D_8023E408[];
extern u8 D_8023E468[];
extern u8 D_8023E4D0[];
typedef struct func_80235FF8_StructP { s16 x; s16 y; s16 w; s16 h; } func_80235FF8_P;
typedef struct func_80235FF8_StructS { u8 pad[0x10]; s32 unk10; u8 pad2[0x1C]; func_80235FF8_P *unk30; } func_80235FF8_S;
extern func_80235FF8_S *D_80240874;
extern func_80235FF8_S *D_80240878;
extern func_80235FF8_S *D_8024087C;
extern s32 D_8023E3B8;
struct func_80236788_Part {
    u8 pad[0x38];
    u32 unk38;
};
extern void (*D_80216D10[])(void *, s32);
struct func_80236788_Struct {
    u8 pad0[0x1C];
    void *unk1C;
    u8 pad20[0x78];
    struct func_80236788_Part *unk98;
    u8 pad9C[6];
    s8 unkA2;
    u8 padA3[2];
    s8 unkA5;
    u8 padA6[4];
    u8 unkAA;
};
#define G ((struct func_80236788_Struct *)D_8023E3B8)
extern void func_80002364(s32, s32, s32, u8);
extern void func_800058DC();
extern void func_80005E44(void *, void *);
u8 func_80006214();
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_801302CC(void);
extern void func_80145310(s32, s32, s32);
extern void func_80147218(void *);
typedef struct func_80237004_Struct {
    u8 pad[0xA2];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    u8 pad3[3];
    u8 unkA8;
    u8 unkA9;
} func_80237004_Struct;
s32 func_8023448C(func_80237004_Struct *arg0, s32 *arg1, u8 arg2, s16 arg3, s16 arg4, u8 arg5, u8 arg6);
s32 func_802345B0(s32 arg0, s32 *arg1, u8 arg2, s16 arg3, s16 arg4, u8 arg5);
extern void func_802398FC();


typedef struct func_802393F8_Struct3 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    s32 unk34;
} func_802393F8_Struct3;

typedef struct func_802393F8_Struct2 {
    u8 pad0[0x14];
    void *unk14;
    u8 pad18[0x18];
    func_802393F8_Struct3 *unk30;
} func_802393F8_Struct2;

typedef struct func_802393F8_Struct4 {
    u8 pad0[0x24];
    struct func_802393F8_Struct5 *unk24;
    u8 pad28[0x4];
    func_802393F8_Struct3 *unk2C;
} func_802393F8_Struct4;

typedef struct func_802393F8_Struct5 {
    u8 pad0[0x2C];
    func_802393F8_Struct3 *unk2C;
} func_802393F8_Struct5;

typedef struct func_802393F8_StructGlob {
    u8 pad0[0xE0];
    func_802393F8_Struct4 *unkE0;
    u8 padE4[0x448 - 0xE4];
    func_802393F8_Struct4 **unk448;
    u8 pad44C[0x1030 - 0x44C];
    u8 unk1030;
} func_802393F8_StructGlob;

typedef struct func_802393F8_Struct {
    u8 pad0[0xA3];
    s8 unkA3;
    u8 padA4;
    s8 unkA5;
    u8 padA6[0x6];
    s16 unkAC;
} func_802393F8_Struct;

#undef G
#define G ((func_802393F8_StructGlob *)D_801BBBF0)

void func_802393F8(func_802393F8_Struct *arg0, func_802393F8_Struct2 **arg1) {
    s8 i;
    f32 scale;
    func_80239048_Copy sp78;

    sp78 = D_80164F40;
    func_80147218(arg0);
    func_80002364(0x0F000000, 8, 2, G->unk1030 ^ 1);
    scale = 0.02f;
    for (i = 0; i < 2; i = (s8)(i + 1)) {
        func_80005E44(arg0, &sp78);
        func_80006214(arg0);
        func_8012C89C(arg0, i, 0x220, 0);
        arg1[i]->unk30->unk24 |= 0x300;
        if (func_801302CC() != 0) {
            arg1[i]->unk30->unk30 = (s32)D_8023E468 | 0x40000000;
            arg1[i]->unk30->unk34 = (s32)D_8023E4D0 | 0x40000000;
        } else {
            arg1[i]->unk30->unk30 = (s32)D_8023E408 | 0x40000000;
        }
        func_80145310((s32)arg1[i], 0xD, 0xD);
        if (G->unk1030 == 1) {
            arg1[i]->unk30->unk4 = G->unkE0->unk2C->unk4;
            arg1[i]->unk30->unk8 = G->unkE0->unk2C->unk8 + 1.0f;
            arg1[i]->unk30->unkC = G->unkE0->unk2C->unkC;
            arg1[i]->unk30->unk12 = G->unkE0->unk2C->unk12 + (i << 0xC) - 0x800;
        } else {
            arg1[i]->unk30->unk4 = (*G->unk448)->unk24->unk2C->unk4;
            arg1[i]->unk30->unk8 = (*G->unk448)->unk24->unk2C->unk8 + 1.0f;
            arg1[i]->unk30->unkC = (*G->unk448)->unk24->unk2C->unkC;
            arg1[i]->unk30->unk12 = (*G->unk448)->unk24->unk2C->unk12 + (i << 0xC) - 0x800;
        }
        arg1[i]->unk30->unk18 = scale;
        arg1[i]->unk30->unk1C = 0.1f;
        arg1[i]->unk30->unk20 = 0.05f;
        arg1[i]->unk30->unk10 = 0;
        arg1[i]->unk30->unk14 = 0;
    }
    func_8023448C((func_80237004_Struct *)arg0, (s32 *)arg1, 1, -0x46, 0, 1, 3);
    func_802345B0((s32)arg0, (s32 *)arg1, 0xF, -0x46, 0, 1);
    D_80240874 = (void *)arg1[i];
    D_80240878 = (void *)arg1[i + 1];
    D_8024087C = ((func_802393F8_Struct2 *)D_80240874)->unk14;
    arg0->unkAC = 0;
    arg0->unkA3 = 2;
    arg0->unkA5 = 0;
    func_800058DC(arg0, func_802398FC);
}
