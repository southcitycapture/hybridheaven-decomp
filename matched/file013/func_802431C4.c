#include "common.h"
extern u8 D_80246C64[];
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern s32 func_8012C6B4();
void func_80242F80(void *, void *);
typedef struct func_80242FD0_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80242FD0_StructB;
typedef struct func_80242FD0_StructC {
    u8 pad0[0x2C];
    func_80242FD0_StructB *unk2C;
} func_80242FD0_StructC;
typedef struct func_80242FD0_StructA {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
} func_80242FD0_StructA;
s32 func_80242FD0(func_80242FD0_StructA *arg0);
typedef struct func_8024342C_E {
    u8 pad0[0x78];
    u16 unk78;
} func_8024342C_E;
typedef struct func_8024342C_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_8024342C_E *unk5C;
    u8 pad60[0x90 - 0x60];
    u8 unk90;
    u8 pad91[4];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    u8 pad9A[2];
    s16 unk9C;
} func_8024342C_Struct;
void func_8024342C(func_8024342C_Struct *arg0, s32 arg1);
typedef struct func_80243688_StructE {
    u8 pad0[0x78];
    u16 unk78;
} func_80243688_StructE;
typedef struct func_80243A70_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_80243688_StructE *unk5C;
    u8 pad60[0x70 - 0x60];
    u16 unk70;
    u8 pad72[0x91 - 0x72];
    u8 unk91;
    u8 unk92;
} func_80243A70_Struct;
void func_80243578(func_80243A70_Struct *arg0, s32 arg1);


typedef struct func_802431C4_StructP {
    u8 pad0[0x78];
    u16 unk78;
} func_802431C4_StructP;
typedef struct func_802431C4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_802431C4_StructB;
typedef struct func_802431C4_Vec {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} func_802431C4_Vec;
typedef struct func_802431C4_StructC {
    u8 pad0[0x2C];
    func_802431C4_StructB *unk2C;
} func_802431C4_StructC;
typedef struct func_802431C4_Struct {
    u8 pad0[0x24];
    func_802431C4_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_802431C4_StructP *unk5C;
    u8 pad60[0x90 - 0x60];
    u8 unk90;
    u8 pad91;
    u8 unk92;
    u8 pad93;
    u8 unk94;
    u8 pad95;
    u8 unk96;
    u8 pad97;
    s16 unk98;
    u8 pad9A[6];
    s16 unkA0;
} func_802431C4_Struct;
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_801475C8(f32 *);
extern f32 D_80249B40;

void func_802431C4(func_802431C4_Struct *arg0, s32 arg1) {
    func_802431C4_StructP *sp44;
    func_802431C4_Vec d;
    func_802431C4_StructB *v;
    u8 v1;

    sp44 = arg0->unk5C;
    v1 = arg0->unk94;
    if ((v1 % 70) == 0) {
        v = arg0->unk24->unk2C;
        func_80127430(v->unk4, v->unk8, *(s32 *)&v->unkC, 0x65E, D_80249B40, 1.0f);
        v1 = arg0->unk94;
    }
    arg0->unk94 = v1 - 1;
    if (arg0->unk90 != 0) {
        v = arg0->unk24->unk2C;
        *(s16 *)((u8 *)v + 0x12) += 0x1000;
        arg0->unk90 = 0;
    }
    d.x = arg0->unk24->unk2C->unk4;
    d.y = arg0->unk24->unk2C->unk8;
    d.z = arg0->unk24->unk2C->unkC;
    func_80010550(arg1, sp44);
    d.x = arg0->unk24->unk2C->unk4 - d.x;
    d.y = arg0->unk24->unk2C->unk8 - d.y;
    d.z = arg0->unk24->unk2C->unkC - d.z;
    func_801475C8((f32 *)&d);
    arg0->unkA0 = arg0->unkA0 - 1;
    if (arg0->unkA0 < 0) {
        arg0->unkA0 = 0;
    }
    v = arg0->unk24->unk2C;
    if (func_8010843C(v->unk4, v->unk8, v->unkC, v->unk4 + d.x * 20.0f, v->unk8 + d.y * 20.0f, v->unkC + d.z * 20.0f) != 0) {
        arg0->unk96 = 0;
        sp44->unk78 = 1;
        arg0->unk98 = (s32)arg0->unk24->unk2C->unk4;
        func_800058DC(arg0, func_8024342C);
        return;
    }
    if ((func_80242FD0((void *)arg0) != 0) && (arg0->unkA0 == 0)) {
        func_80242F80(arg0, D_80246C64 + 0x18);
        arg0->unk98 = (s32)arg0->unk24->unk2C->unk4;
        arg0->unk92 = func_8012C6B4(0x78) + 0x3C;
        sp44->unk78 = 1;
        *((u8 *)sp44 + 0x76) = 1;
        func_800058DC(arg0, func_80243578);
    }
}
