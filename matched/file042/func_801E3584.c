#include "common.h"
extern s32 D_801E4E9C;
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
typedef struct func_801E3474_Struct2C {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3474_Struct2C;
typedef struct func_801E3474_Struct24 {
    u8 pad0[0x2C];
    func_801E3474_Struct2C *unk2C;
} func_801E3474_Struct24;
typedef struct func_801E3474_Struct8 {
    u8 pad0[0x24];
    func_801E3474_Struct24 *unk24;
} func_801E3474_Struct8;
typedef struct func_801E3474_Struct0 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E3474_Struct0;
typedef struct func_801E3474_Global {
    u8 pad0[0x24];
    func_801E3474_Struct0 *unk24;
} func_801E3474_Global;
extern struct func_801E3474_Global func_801DAAF0;
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);

extern s32 func_801CE284(void);
extern s32 func_801CE2D0(s32, s32);

typedef struct func_801E3584_StructFl {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E3584_StructFl;

typedef struct func_801E3584_StructLow {
    u8 pad0[0x2C];
    func_801E3584_StructFl *unk2C;
} func_801E3584_StructLow;

typedef struct func_801E3584_StructMid {
    u8 pad0[0x24];
    func_801E3584_StructLow *unk24;
} func_801E3584_StructMid;

typedef struct func_801E3584_StructTop {
    u8 pad0[0x8];
    func_801E3584_StructMid *unk8;
} func_801E3584_StructTop;

s32 func_801E3584(s32 arg0, s32 arg1) {
    func_801E3584_StructFl *temp;

    switch (D_801E4E9C) {
    case 0:
        func_801CC470(0, 0x1680040, 0, 0, 1.0f);
        D_801E4E9C = 1;
        break;
    case 1:
        if (func_801CE284() != 0) {
            func_801CC470(0, 0x1680040, 0, 0, 1.0f);
            D_801E4E9C = 2;
        }
        if ((func_801CE2D0(0x1680040, 9) != 0) || (func_801CE2D0(0x1680040, 0x12) != 0)) {
            temp = ((func_801E3584_StructTop *)func_801DAAF0.unk24)->unk8->unk24->unk2C;
            func_8038D33C(temp->unk4, temp->unk8, temp->unkC, 0x677, 1.2f, 1.0f);
        }
        break;
    case 2:
        if (func_801CE284() != 0) {
            func_801CC470(0, 0x1680040, 0, 0, 1.0f);
            D_801E4E9C = 3;
        }
        if ((func_801CE2D0(0x1680040, 9) != 0) || (func_801CE2D0(0x1680040, 0x12) != 0)) {
            temp = ((func_801E3584_StructTop *)func_801DAAF0.unk24)->unk8->unk24->unk2C;
            func_8038D33C(temp->unk4, temp->unk8, temp->unkC, 0x677, 1.2f, 1.0f);
        }
        break;
    case 3:
        if (func_801CE284() != 0) {
            func_801CC470(0, 0x348004C, 0, 0, 3.0f);
            D_801E4E9C = 4;
        }
        if ((func_801CE2D0(0x1680040, 9) != 0) || (func_801CE2D0(0x1680040, 0x12) != 0)) {
            temp = ((func_801E3584_StructTop *)func_801DAAF0.unk24)->unk8->unk24->unk2C;
            func_8038D33C(temp->unk4, temp->unk8, temp->unkC, 0x677, 1.2f, 1.0f);
        }
        break;
    case 4:
        if (func_801CE284() != 0) {
            return 0xB;
        }
        break;
    default:
        break;
    }
    return 0xA;
}
