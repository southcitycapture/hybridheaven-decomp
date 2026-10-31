#include "common.h"
typedef struct func_80379244_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80379244_StructB;
typedef struct func_80379244_StructG {
    u8 pad0[0x2C];
    func_80379244_StructB *unk2C;
} func_80379244_StructG;
extern func_80379244_StructG *D_801BBCD0;
typedef struct func_803794DC_StructG {
    u8 pad0[0x2C];
    s32 unk2C;
} func_803794DC_StructG;
extern func_803794DC_StructG *D_801BBCD8;
extern u8 D_801BBE22[];
extern s16 D_803889AC;
extern s32 D_8038A900;
extern void func_800058DC(s32, void *);
extern void func_8014B4A0(u16, f32 *);
extern s32 func_8014C1F0(u16);
void func_803790F0(s32 arg0, s32 arg1);
typedef struct func_803794DC_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_803794DC_StructB;
typedef struct func_803794DC_StructA {
    u8 pad0[0x30];
    func_803794DC_StructB *unk30;
} func_803794DC_StructA;


extern void D_80130E34(s32, s32, f32, s32, f32 *, f32 *);
extern s32 D_8014C1F0(u16, f32 *);
extern void func_8014C194(u16);
extern void func_80006088(s32);
extern void func_80149684();
extern void func_801170DC(s32);
extern const f64 D_80389500;
extern const f64 D_80389508;
extern u8 D_803889B0;

#define OBJ ((func_803794DC_StructA *)D_8038A900)

void func_80378CD8(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp48[3];
    f32 sp44;
    f32 sp40;
    f32 dx;
    f32 dy;
    u8 pad2[4];
    void *sp28;

    sp44 = 160.0f;
    sp40 = 120.0f;
    if (D_8038A900 != 0) {
        *(s16 *)((u8 *)OBJ->unk30 + 0x12) += 0x80;
        if (D_803889AC < 0x14) {
#define k 0.85
            dx = (225.0f - OBJ->unk30->unk4) / 10.0f;
            dy = (80.0f - OBJ->unk30->unk8) / 10.0f;
            OBJ->unk30->unk4 += dx;
            OBJ->unk30->unk8 += dy;
            OBJ->unk30->unk18 = OBJ->unk30->unk18 / k;
            OBJ->unk30->unk1C = OBJ->unk30->unk1C / k;
            OBJ->unk30->unk20 = OBJ->unk30->unk20 / k;
        } else if (D_803889AC >= 0x33) {
            if (D_803889B0 != 0) {
                func_8014B4A0(*(u16 *)(D_801BBE22 + 0x12), sp48);
                if (!(func_8014C1F0(*(u16 *)(D_801BBE22 + 0x12)) & 0xFF)) {
                    D_80130E34(D_801BBCD8->unk2C, *(s32 *)&sp48[0], sp48[1] + 5.0f, *(s32 *)&sp48[2], &sp44, &sp40);
                } else {
                    D_80130E34(D_801BBCD8->unk2C, *(s32 *)&sp48[0], sp48[1] + 15.0f, *(s32 *)&sp48[2], &sp44, &sp40);
                }
            } else if (!(func_8014C1F0(*(u16 *)(D_801BBE22 + 0x12)) & 0xFF)) {
                D_80130E34(D_801BBCD8->unk2C, *(s32 *)&D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 8.0f, *(s32 *)&D_801BBCD0->unk2C->unkC, &sp44, &sp40);
            } else {
                D_80130E34(D_801BBCD8->unk2C, *(s32 *)&D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 15.0f, *(s32 *)&D_801BBCD0->unk2C->unkC, &sp44, &sp40);
            }
            if (sp44 < 0.0f) {
                sp44 = 0.0f;
            }
            if (sp40 < 0.0f) {
                sp40 = 0.0f;
            }
#undef k
#define k 0.85
            dx = (sp44 - OBJ->unk30->unk4) / 10.0f;
            dy = (sp40 - OBJ->unk30->unk8) / 10.0f;
            OBJ->unk30->unk4 += dx;
            OBJ->unk30->unk8 += dy;
            OBJ->unk30->unk18 = OBJ->unk30->unk18 * k;
            OBJ->unk30->unk1C = OBJ->unk30->unk1C * k;
            OBJ->unk30->unk20 = OBJ->unk30->unk20 * k;
        }
    } else {
        func_800058DC(arg0, func_803790F0);
    }
    if (D_803889AC++ >= 0x47) {
        sp28 = func_803790F0;
        func_80006088(D_8038A900);
        func_80149684();
        func_801170DC(0x10);
        if (D_803889B0 != 0) {
            func_8014C194(*(u16 *)(D_801BBE22 + 0x12));
        }
        func_800058DC(arg0, sp28);
    }
}
