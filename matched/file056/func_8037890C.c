#include "common.h"
extern u8 D_801BBE22[];
extern s32 D_8038A900;
extern s32 D_8038A90C;
extern s32 func_80005670(s32, void *);
extern void func_800058DC(s32, void *);
extern s32 func_8014B3F0(s32);
extern s32 func_8014C068(u16);
extern s32 func_8014C1F0(u16);
typedef struct func_803787F0_S1 {
    u8 pad0[0x1C];
    s32 unk1C;
} func_803787F0_S1;
typedef struct func_803787F0_S0 {
    u8 pad0[0x5C];
    func_803787F0_S1 *unk5C;
} func_803787F0_S0;


typedef struct func_8037890C_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_8037890C_StructB;
typedef struct func_8037890C_StructA {
    u8 pad0[0x30];
    func_8037890C_StructB *unk30;
} func_8037890C_StructA;
typedef struct func_8037890C_StructG {
    u8 pad0[0x2C];
    s32 unk2C;
} func_8037890C_StructG;
typedef struct func_8037890C_Vec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037890C_Vec;

extern void D_8001B204();
extern void D_80130E34(s32, s32, f32, s32, f32 *, f32 *);
extern void func_80133980(s32);
extern void D_8013A28C(s32, func_8037890C_Vec);
extern s32 func_8013D520(u8, s32, s32);
extern s32 func_8013D5F4(u8);
extern s32 D_801494A4(s32, u8, s32, s32, f32, s32);
extern void func_80149580(s32, void *, u8);
extern void func_8014B034(u16, s32);
extern void func_8014B3B0(u16, s32);
extern void func_8014B4A0(u16, f32 *);
extern func_8037890C_StructG *B_801BBCD8;
extern u8 D_80388968[];
extern func_8037890C_Vec D_80388988;
extern func_8037890C_Vec D_803889A0;
extern u8 D_803889B0;
extern u8 D_80389454[];
extern u8 D_8038947C[];
extern u8 D_80389484[];
extern u8 D_803894A0[];
extern u8 D_803894C8[];
extern f32 D_803894FC;
extern u8 func_80378CD8[];

void func_8037890C(s32 arg0, s32 arg1) {
    func_803787F0_S1 *sp6C;
    s32 pad68;
    u8 sp67;
    s32 pad5C[2];
    f32 sp58;
    f32 sp54;
    s32 pad40[5];
    f32 sp34[3];

    sp6C = ((func_803787F0_S0 *)arg0)->unk5C;
    sp58 = 160.0f;
    sp54 = 120.0f;
    sp67 = (u8)func_8014B3F0(*(u16 *)(D_801BBE22 + 0x12));
    D_8038A90C = func_80005670(arg0, D_80388968);
    D_803889B0 = 0;
    if (func_8014C068(*(u16 *)(D_801BBE22 + 0x12)) != 0) {
        if ((sp67 & 0xFF) != 0) {
            D_8038A900 = D_801494A4(arg0, sp67, 0x43610000, 0x42A00000, 0.0f, 1);
            func_8014B4A0(*(u16 *)(D_801BBE22 + 0x12), sp34);
            if (!(func_8014C1F0(*(u16 *)(D_801BBE22 + 0x12)) & 0xFF)) {
                D_80130E34(B_801BBCD8->unk2C, *(s32 *)&sp34[0], sp34[1] + 5.0f, *(s32 *)&sp34[2], &sp58, &sp54);
            } else {
                D_80130E34(B_801BBCD8->unk2C, *(s32 *)&sp34[0], sp34[1] + 15.0f, *(s32 *)&sp34[2], &sp58, &sp54);
            }
            if (sp58 < 0.0f) {
                sp58 = 0.0f;
            }
            if (sp54 < 0.0f) {
                sp54 = 0.0f;
            }
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk4 = sp58;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk8 = sp54;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk20 = D_803894FC;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk18 = ((func_8037890C_StructA *)D_8038A900)->unk30->unk1C = ((func_8037890C_StructA *)D_8038A900)->unk30->unk20;
            if (func_8013D520(sp67, 1, 0) != 0) {
                D_8001B204(0xF, 0x7D0, 0xB0, D_80389454, 4, 0);
                D_803889B0 = 1;
            } else {
                D_8001B204(0xF, 0x7D0, 0xB0, D_8038947C, 4, 0, func_8013D5F4(sp67));
                func_8014B3B0(*(u16 *)(D_801BBE22 + 0x12), 0);
            }
            func_80149580(arg0, (void *)D_8038A900, sp67);
        } else {
            D_8001B204(0xF, 0x7D0, 0xB0, D_80389484, 4, 0);
        }
    } else if (func_8013D520(sp67, 1, 0) != 0) {
        D_8001B204(0xF, 0x7D0, 0xB0, D_803894A0, 4, 0);
    } else {
        D_8001B204(0xF, 0x7D0, 0xB0, D_803894C8, 4, 0, func_8013D5F4(sp67));
        func_8014B034(*(u16 *)(D_801BBE22 + 0x12), 0);
        if (sp67 == 0x26) {
            func_80133980(0x272);
        }
    }
    if (sp6C->unk1C == 0x0168003C) {
        D_8013A28C(arg1, D_80388988);
    } else {
        D_8013A28C(arg1, D_803889A0);
    }
    func_800058DC(arg0, func_80378CD8);
}
