#include "context.h"
s32 func_80244F28(s32 arg0);
typedef struct func_80247A1C_StructObj {
    u8 pad0[0x78];
    s16 unk78;
} func_80247A1C_StructObj;
typedef struct func_80247A1C_StructArg0 {
    u8 pad0[0x5C];
    func_80247A1C_StructObj *unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_80247A1C_StructArg0;
void func_80247A1C(func_80247A1C_StructArg0 *arg0, s32 arg1);
typedef struct func_8024C58C_StructGlobal {
    u8 pad0[0x104];
    u16 unk104;
    u8 pad106[0xBA2 - 0x106];
    u8 unkBA2;
} func_8024C58C_StructGlobal;
extern func_8024C58C_StructGlobal D_801BBBF0;

typedef struct func_8024786C_StructN {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_8024786C_StructN;
typedef struct func_8024786C_StructM {
    u8 pad0[0x2C];
    func_8024786C_StructN *unk2C;
} func_8024786C_StructM;
typedef struct func_8024786C_Struct {
    u8 pad0[0x24];
    func_8024786C_StructM *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[0x24];
    s32 unk54;
    u8 pad58[4];
    s32 unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_8024786C_Struct;
typedef struct func_8024786C_StructG {
    u8 padx[0xE0];
    func_8024786C_StructM *unkE0;
} func_8024786C_StructG;

#define G ((func_8024786C_StructG *)&D_801BBBF0)
extern u8 D_8025C300[];
extern f32 D_8025C5C8;
extern void func_8013A334(f32 *, s32, s32, s32);

void func_8024786C(func_8024786C_Struct *arg0, s32 arg1) {
    s32 sp6C;
    f32 sp60[3];
    s16 v;

    sp6C = arg0->unk5C;
    if (func_80244F28((s32)arg0) == 0) {
        if (arg0->unk90 == 0x3F) {
            arg0->unk24->unk2C->unk4 = 0.0f;
            arg0->unk24->unk2C->unk8 = 200.0f;
            arg0->unk24->unk2C->unkC = 360.0f;
            arg0->unk24->unk2C->unk12 = 0;
            G->unkE0->unk2C->unk4 = 0.0f;
            G->unkE0->unk2C->unk8 = 200.0f;
            G->unkE0->unk2C->unkC = 300.0f;
            arg0->unk54 = 0;
            arg0->unk2C = arg0->unk2C & ~0x60;
        }
        func_8013A334(sp60, arg1, sp6C, 6);
        func_8011AAF4(D_8025C300, 0x4F5, arg0, 0, 1, 4.0f, -112.0f, 217.0f, D_8025C5C8, 4294967296.0f, sp60[0], sp60[1], sp60[2], 0.0f, 35.0f, -1, -1);
        func_80010550(arg1, sp6C);
        v = arg0->unk90;
        arg0->unk90 = v - 1;
        if (v == 0) {
            func_800058DC(arg0, (void *)func_80247A1C);
        }
    }
}
