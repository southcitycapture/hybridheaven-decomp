#include "common.h"
typedef struct func_80379190_Globals {
    u8 pad0[0xEF0];
    u16 unkEF0;
} func_80379190_Globals;
extern struct func_80379190_Globals D_801BBBF0;
typedef struct func_803790F0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_803790F0_Struct2;
extern struct func_803790F0_Struct2 D_80388994;
extern s16 D_803889AC;
extern s16 D_803889B4;
extern s32 D_8038A90C;
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
extern func_803794DC_StructA *D_8038A910;
extern s32 D_8038A900;
#define OBJ ((func_803794DC_StructA *)D_8038A900)
extern s32 func_80005700(s32);
extern void func_80006088(s32);
extern void func_8001B204(s32, s32, s32, void *);
extern void func_801170DC(s32);
extern void func_80126E88(s32);
extern void func_80149684();


typedef struct func_80379690_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    u8 padC[6];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80379690_StructB;

typedef struct func_80379690_StructA {
    u8 pad0[0x30];
    func_80379690_StructB *unk30;
} func_80379690_StructA;

typedef struct func_80379690_Pos {
    u8 pad0[4];
    s32 unk4;
    f32 unk8;
    s32 unkC;
} func_80379690_Pos;

typedef struct func_80379690_Cam {
    u8 pad0[0x2C];
    func_80379690_Pos *unk2C;
} func_80379690_Cam;

typedef struct func_80379690_CamB {
    u8 pad0[0x2C];
    s32 unk2C;
} func_80379690_CamB;

extern void D_80130E34(s32, s32, f32, s32, f32 *, f32 *);
extern u8 D_803894F8[];
extern u8 D_80379690[];
#define OBJ ((func_80379690_StructA *)D_8038A910)
#define GB ((u8 *)&D_801BBBF0)
#define CAMA (*(func_80379690_Cam **)(GB + 0xE0))
#define CAMB (*(func_80379690_CamB **)(GB + 0xE8))

void func_80379690(s32 arg0, s32 arg1) {
    f32 sp44;
    f32 sp40;
    u8 pad[4];
    f32 t;
    f32 u;
    s32 v;
    s32 c;

    if (D_8038A910 != NULL) {
        OBJ->unk30->unk12 += 0x80;
        v = D_803889B4;
        if (D_803889B4 < 0x14) {
            t = (225.0f - OBJ->unk30->unk4) / 10.0f;
            u = (80.0f - OBJ->unk30->unk8) / 10.0f;
            OBJ->unk30->unk4 = OBJ->unk30->unk4 + t;
            OBJ->unk30->unk8 = OBJ->unk30->unk8 + u;
            OBJ->unk30->unk18 = OBJ->unk30->unk18 / 0.85;
            OBJ->unk30->unk1C = OBJ->unk30->unk1C / 0.85;
            OBJ->unk30->unk20 = OBJ->unk30->unk20 / 0.85;
            v = *(s16 *)((u8 *)&D_803889AC + 8);
        } else if (D_803889B4 >= 0x33) {
            D_80130E34(CAMB->unk2C, CAMA->unk2C->unk4, CAMA->unk2C->unk8 + 14.0f, CAMA->unk2C->unkC, &sp44, &sp40);
            if (sp44 < 0.0f) {
                sp44 = 0.0f;
            }
            if (sp40 < 0.0f) {
                sp40 = 0.0f;
            }
            t = (sp44 - OBJ->unk30->unk4) / 10.0f;
            u = (sp40 - OBJ->unk30->unk8) / 10.0f;
            OBJ->unk30->unk4 = OBJ->unk30->unk4 + t;
            OBJ->unk30->unk8 = OBJ->unk30->unk8 + u;
            OBJ->unk30->unk18 = OBJ->unk30->unk18 * 0.85;
            OBJ->unk30->unk1C = OBJ->unk30->unk1C * 0.85;
            OBJ->unk30->unk20 = OBJ->unk30->unk20 * 0.85;
            v = *(s16 *)((u8 *)&D_80388994 + 0x20);
        }
    } else {
        func_80005700(arg0);
        v = D_803889B4;
    }
    c = D_803889B4++ >= 0x47;
    if (c) {
        func_8001B204(0xF, 0, 0, D_803894F8);
        func_80005700(D_8038A90C);
        func_80006088((s32)D_8038A910);
        func_80149684();
        func_801170DC(0x10);
        func_80126E88(0xC1);
        func_80005700(arg0);
    }
}
