#include "context.h"

typedef struct func_801270C0_StructObj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x4C - 0x30];
    u8 unk4C, unk4D, unk4E, unk4F;
    u8 pad2[4];
    s32 unk54;
} func_801270C0_StructObj;
typedef struct func_801270C0_StructPos {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801270C0_StructPos;
typedef struct func_801270C0_StructMid {
    u8 pad[0x2C];
    func_801270C0_StructPos *unk2C;
} func_801270C0_StructMid;
typedef struct func_801270C0_StructGlobal {
    u8 pad0[0x58];
    s32 unk58;
    u8 pad1[0x1031 - 0x5C];
    u8 unk1031;
} func_801270C0_StructGlobal;
extern void func_801FBB20(void);
extern void func_80005670(s32, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C3B10(s32);
extern void func_8021D8D0(void);
extern u8 D_8018C734[];
extern u8 D_8023C250[];
extern s32 D_801BBCCC;
extern func_801270C0_StructMid *D_801BBCD8;

s32 func_801270C0(func_801270C0_StructObj *arg0) {

    func_801FBB20();
    ((func_801270C0_StructGlobal *)&D_801BBBF0)->unk1031 = 0;
    func_80005670(((func_801270C0_StructGlobal *)&D_801BBBF0)->unk58, D_8023C250);
    func_8011AAF4(D_8018C734, 0x674, arg0, 3, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
    arg0->unk2C = 0x83E0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x14;
    arg0->unk4E = 0xA;
    arg0->unk4F = 0;
    arg0->unk54 |= 0xE1;
    func_800058DC((s32)arg0, (void *)func_8021D8D0);
    func_801C3B10(0);
    func_800058DC(D_801BBCCC, (void *)func_8021D8D0);
    return 1;
}
