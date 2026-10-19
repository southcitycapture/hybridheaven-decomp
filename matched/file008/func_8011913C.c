#include "context.h"

typedef struct func_8011913C_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x1C - 0x10];
    f32 unk1C;
    u8 pad20[0x30 - 0x20];
    f32 unk30;
    u8 pad34[0x38 - 0x34];
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_8011913C_Struct2;

typedef struct func_8011913C_Struct1 {
    u8 pad0[0x2C];
    func_8011913C_Struct2 *unk2C;
} func_8011913C_Struct1;

typedef struct func_8011913C_Struct4 {
    u8 pad0[0x22];
    u8 unk22;
} func_8011913C_Struct4;

typedef struct func_8011913C_Struct0 {
    u8 pad0[0x24];
    func_8011913C_Struct4 *unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x40 - 0x34];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_8011913C_Struct0;

typedef struct func_8011913C_Struct3 {
    u8 pad0[0x9E];
    u16 unk9E;
    u8 padA0[0xE8 - 0xA0];
    func_8011913C_Struct1 *unkE8;
    u8 padEC[0x380 - 0xEC];
    f32 unk380;
    f32 unk384;
    f32 unk388;
    u8 pad38C[0xEF0 - 0x38C];
    u16 unkEF0;
} func_8011913C_Struct3;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern void func_80117650(f32, f32, f32, f32, f32, f32);
extern void func_80118038(void *, void *);
extern void func_80119F9C(void *, void *);
extern void func_8011A148(s16, s16, s16, void *, void *, void *);
extern void func_8011E480(s16, s16, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern s32 D_801636F4;
extern u8 D_80189A14[];
extern f64 D_80189B48;
extern f32 D_801BBBB4;
extern func_8011913C_Struct1 *D_801BBCD0;
extern u8 func_801E5010[];
extern u8 func_80379970[];

#define G ((func_8011913C_Struct3 *)&D_801BBBF0)
#define YAW (*(s16 *)D_801BBB90)
#define PITCH (*(s16 *)D_801BBB92)
#define CALC() func_8001EF38(spB4 - spC0, func_8002FC20((spC4 - spB8) * (spC4 - spB8) + (spBC - spB0) * (spBC - spB0)))

void func_8011913C(func_8011913C_Struct0 *arg0) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    s16 spA2;
    s16 spA0;
    f32 sp9C;
    s32 v1;
    u8 pad[0x30];

    arg0->unk40 = 0.0f;
    arg0->unk44 = 0.0f;
    arg0->unk48 = 0.0f;
    if (G->unkEF0 & 0x1000) {
        arg0->unk24->unk22 = 1;
        func_80117CD0((s32)arg0, YAW);
        func_800058DC(arg0, func_80379970);
        return;
    }
    if (!(G->unk9E & 2) || (((func_80117610_Struct *)&D_801BBBF0)->unk18E != 0) || !(arg0->unk30 & 4)) {
        arg0->unk24->unk22 = 1;
        func_80117CD0((s32)arg0, YAW);
        func_800058DC(arg0, func_801E5010);
        return;
    }
    {
        extern void func_80117F64();
        func_80117F64(arg0);
    }
    func_80118038(D_801BBB90, D_801BBB92);
    if (PITCH >= 0x601) {
        PITCH = 0x600;
    }
    if (PITCH < -0x600) {
        PITCH = -0x600;
    }
    spC4 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk3C - ((sp9C = func_8001EB64(PITCH), func_8001EB64(YAW)) * (D_801BBBB4 * sp9C));
    spC0 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk40 - (func_8001EAD0(PITCH) * D_801BBBB4);
    spBC = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk44 - ((sp9C = func_8001EB64(PITCH), func_8001EAD0(YAW)) * (D_801BBBB4 * sp9C));
    spB8 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk3C + (D_801BBCD0->unk2C->unk4 - ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk3C) * 0.25;
    spB4 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk40 + ((D_801BBCD0->unk2C->unk8 + 15.0) - ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk40) * 0.25;
    spB0 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk44 + (D_801BBCD0->unk2C->unkC - ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk44) * 0.25;
    if (D_801636F4 != 0) {
        if (CALC() & 0x1000) {
            CALC();
        } else {
            CALC();
        }
        if (CALC() & 0x1000) {
            v1 = (CALC() & 0x1FFF) - 0x2000;
        } else {
            v1 = CALC() & 0x1FFF;
        }
        if (v1 < 0) {
            if (CALC() & 0x1000) {
                CALC();
            } else {
                CALC();
            }
        } else {
            if (CALC() & 0x1000) {
                CALC();
            } else {
                CALC();
            }
        }
    }
    func_8011E480(YAW, PITCH, &spC4, &spC0, &spBC, &spB8, &spB4, &spB0);
    spAC = (sp9C = func_8001EB64(PITCH), func_8001EB64(YAW)) * (6.5 * sp9C) + spC4;
    spA8 = func_8001EAD0(PITCH) * 6.5 + spC0;
    spA4 = (sp9C = func_8001EB64(PITCH), func_8001EAD0(YAW)) * (6.5 * sp9C) + spBC;
    if (func_801084C4(spC4, spC0, spBC, spAC, spA8, spA4) != 0) {
        spC4 += G->unk380 - spAC;
        spC0 += G->unk384 - spA8;
        spBC += G->unk388 - spA4;
    }
    spC4 = G->unkE8->unk2C->unk30 + (spC4 - G->unkE8->unk2C->unk30) * 0.25;
    spBC = G->unkE8->unk2C->unk38 + (spBC - G->unkE8->unk2C->unk38) * 0.25;
    func_80117650(spC4, spC0, spBC, spB8, spB4, spB0);
    func_8011AAF4(D_80189A14, 0x310, (s32)arg0, 0, 1, 0.0f, spC4, spC0, spBC, 0.0f, spB8, spB4, spB0, 0.0f, ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk1C, -1, -1);
    if (func_8002FC20((spC4 - D_801BBCD0->unk2C->unk4) * (spC4 - D_801BBCD0->unk2C->unk4) + (spC0 - (D_801BBCD0->unk2C->unk8 + 15.0)) * (spC0 - (D_801BBCD0->unk2C->unk8 + 15.0)) + (spBC - D_801BBCD0->unk2C->unkC) * (spBC - D_801BBCD0->unk2C->unkC)) < D_80189B48) {
        arg0->unk24->unk22 = 0;
    } else if (func_8002FC20((spC4 - D_801BBCD0->unk2C->unk4) * (spC4 - D_801BBCD0->unk2C->unk4) + (spC0 - (D_801BBCD0->unk2C->unk8 + 15.0)) * (spC0 - (D_801BBCD0->unk2C->unk8 + 15.0)) + (spBC - D_801BBCD0->unk2C->unkC) * (spBC - D_801BBCD0->unk2C->unkC)) > 12.0) {
        arg0->unk24->unk22 = 1;
    }
    func_80119F9C(&spA2, &spA0);
    func_8011A148(spA2, spA0, *(s16 *)D_801BBB94, &((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk48, &((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk48 + 1, &((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk48 + 2);
}
