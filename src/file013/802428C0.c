#include "common.h"

extern s32 func_80010550(s32, void *);
extern s32 func_80126CC0(s32 arg0, void *arg1);
extern s32 func_8012CE9C();
extern s32 func_80133A24(s32 arg0);
extern void func_80005700(s32 arg0);
extern void func_800058DC();
extern void func_80020744(s32);
extern void func_80127014();
extern void func_80133980(s32);
extern void func_802428E8();
extern void func_80242958();
extern void func_802429A8();
extern void func_80242B00();
extern void func_80242BAC();
extern void func_80242C58();



void func_802428C0(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_802428E8);
}


extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

void func_802428E8(s32 arg0, s32 arg1) {
    if (func_80133A24(8) != 0) {
        func_80005700(arg0);
        return;
    }
    if (func_80126CC0(arg0, func_80127014) != 0) {
        func_8013B570(arg0, 0x51, 2, 3, func_80242958);
    }
}



typedef struct func_80242958_Struct04 {
    u8 pad0[0x4];
    f32 unk4;
} func_80242958_Struct04;

typedef struct func_80242958_Struct2C {
    u8 pad0[0x2C];
    func_80242958_Struct04 *unk2C;
} func_80242958_Struct2C;

typedef struct func_80242958_Struct5C {
    u8 pad0[0x78];
    s16 unk78;
} func_80242958_Struct5C;

typedef struct func_80242958_Struct0 {
    u8 pad0[0x24];
    func_80242958_Struct2C *unk24;
    u8 pad1[0x5C - 0x28];
    func_80242958_Struct5C *unk5C;
} func_80242958_Struct0;

void func_80242958(func_80242958_Struct0 *arg0, s32 arg1) {
    func_80242958_Struct04 *temp_v0;
    func_80242958_Struct5C *temp_v1;
    func_80242958_Struct0 *temp_t7;

    temp_v1 = arg0->unk5C;
    temp_v1->unk78 = 1;
    temp_t7 = arg0;
    temp_v0 = temp_t7->unk24->unk2C;
    temp_v0->unk4 = temp_v0->unk4 - 800.0f;
    func_800058DC(arg0, func_802429A8);
}

typedef struct func_80242A3C_StructVec {
    f32 x, y, z;
} func_80242A3C_StructVec;
void func_80242A3C(func_80242958_Struct0 *arg0, s32 arg1);

typedef struct func_802429A8_StructVec { f32 x, y, z; } func_802429A8_StructVec;
extern func_802429A8_StructVec D_80245DD4;

void func_802429A8(func_80242958_Struct0 *arg0, s32 arg1) {
    func_80242958_Struct5C *sp24;

    sp24 = arg0->unk5C;
    if (func_8012CE9C(arg1, sp24, *(func_80242A3C_StructVec *)&D_80245DD4, 0xA) == 0) {
        func_80010550(arg1, sp24);
        if (func_80133A24(8) != 0) {
            sp24->unk78 = 1;
            func_800058DC((s32)arg0, func_80242A3C);
        }
    }
}



extern func_80242A3C_StructVec D_80245DE0;

void func_80242A3C(func_80242958_Struct0 *arg0, s32 arg1) {
    func_80242958_Struct5C *sp24;
    func_80242958_Struct04 *temp_v0;
    f32 temp_fv0;

    sp24 = arg0->unk5C;
    temp_v0 = arg0->unk24->unk2C;
    temp_fv0 = temp_v0->unk4;
    if (temp_fv0 < 0.0f) {
        temp_v0->unk4 = temp_fv0 + 800.0f;
    }
    if (func_8012CE9C(arg1, sp24, D_80245DE0, 10) == 0 &&
        func_80010550(arg1, sp24) != 0) {
        sp24->unk78 = 1;
        func_800058DC((s32)arg0, func_80242B00);
    }
}


typedef struct func_80242B00_Struct5C {
    u8 pad[0x78];
    s16 unk78;
} func_80242B00_Struct5C;

typedef struct func_80242B00_Struct0 {
    u8 pad0[0x5C];
    func_80242B00_Struct5C *unk5C;
    u8 pad1[0x94 - 0x60];
    s16 unk94;
} func_80242B00_Struct0;


void func_80242B00(func_80242B00_Struct0 *arg0, s32 arg1) {
    func_80242B00_Struct5C *sp24;

    sp24 = arg0->unk5C;
    func_80010550(arg1, sp24);
    if ((func_80133A24(9) != 0) &&
        (func_8012CE9C(arg1, sp24, (&D_80245DE0)[1], 10) == 0) &&
        (func_80133A24(10) != 0)) {
        sp24->unk78 = 1;
        arg0->unk94 = 0x80;
        func_800058DC((s32)arg0, (void (*)(void))func_80242BAC);
    }
}


typedef struct func_80242BAC_StructVec {
    s32 x, y, z;
} func_80242BAC_StructVec;

typedef struct func_80242BAC_StructData {
    u8 pad[0x78];
    s16 unk78;
} func_80242BAC_StructData;

typedef struct func_80242BAC_StructObj {
    u8 pad[0x5C];
    func_80242BAC_StructData *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80242BAC_StructObj;

extern func_80242BAC_StructVec D_80245DF8;

void func_80242BAC(func_80242BAC_StructObj *arg0, s32 arg1) {
    func_80242BAC_StructData *sp24;
    s16 temp_v1;

    sp24 = arg0->unk5C;
    if (func_8012CE9C(arg1, sp24, D_80245DF8, 10) == 0) {
        func_80010550(arg1, sp24);
        temp_v1 = arg0->unk94;
        arg0->unk94 = temp_v1 - 1;
        if (temp_v1 == 0) {
            func_80133980(11);
            sp24->unk78 = 1;
            func_80020744(0x338);
            func_800058DC((s32)arg0, func_80242C58);
        }
    }
}

#define D_801BBBF0 D_801BBBF0__func_80242C58
#define D_80245E04 D_80245E04__func_80242C58
#define func_801268CC func_801268CC__func_80242C58
#define func_801270C0 func_801270C0__func_80242C58
#define func_8012CE9C func_8012CE9C__func_80242C58
#define func_80242A3C_StructVec func_80242A3C_StructVec__func_80242C58
typedef struct func_80242A3C_StructVec {
    f32 x, y, z;
} func_80242A3C_StructVec;
extern s32 func_8012CE9C(s32, void *, func_80242A3C_StructVec, s32);


typedef struct func_80242C58_Struct0 {
    u8 pad[0x5C];
    void *unk5C;
} func_80242C58_Struct0;

typedef struct func_80242C58_StructGlobal {
    u8 pad[0x12];
    s16 unk12, unk14;
} func_80242C58_StructGlobal;
extern void func_801268CC(s32);
extern s32 func_801270C0(void *);
extern func_80242C58_StructGlobal D_801BBBF0;
extern func_80242A3C_StructVec D_80245E04;

void func_80242C58(func_80242C58_Struct0 *arg0, s32 arg1) {
    void *temp_a1;

    temp_a1 = arg0->unk5C;
    if ((func_8012CE9C(arg1, temp_a1, D_80245E04, 10) == 0) &&
        (func_80010550(arg1, temp_a1) != 0) &&
        (func_801270C0(arg0) != 0)) {
        D_801BBBF0.unk12 = 0;
        D_801BBBF0.unk14 = 0;
        func_801268CC(0);
    }
}
#undef D_801BBBF0
#undef D_80245E04
#undef func_801268CC
#undef func_801270C0
#undef func_8012CE9C
#undef func_80242A3C_StructVec

void func_80242CF0(void) {
}

