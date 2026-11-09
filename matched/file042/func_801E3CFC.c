#include "common.h"
extern s32 D_801E4EE0;
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

extern s32 func_801CEDE4(void);
extern s32 func_801CEE30(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);

typedef struct func_801E3CFC_StructA {
    u8 pad0[8];
    func_801E3474_Struct8 *unk8;
} func_801E3CFC_StructA;

typedef struct func_801E3CFC_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E3CFC_StructB;

s32 func_801E3CFC(s32 arg0, s32 arg1) {
    func_801E3CFC_StructB *temp_v0;

    switch (D_801E4EE0) {
    case 0:
        func_801CC470(1, 0x01680040, 0, 0, 1.0f);
        D_801E4EE0 = 1;
        break;
    case 1:
        if (func_801CEDE4() != 0) {
            func_801CC470(1, 0x01680040, 0, 0, 1.0f);
            D_801E4EE0 = 2;
        }
        if ((func_801CEE30(0x01680040, 9) != 0) || (func_801CEE30(0x01680040, 0x12) != 0)) {
            temp_v0 = (func_801E3CFC_StructB *) ((func_801E3CFC_StructA *) func_801DAAF0.unk24->unk8)->unk8->unk24->unk2C;
            func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x4A2, 1.2f, 1.0f);
        }
        break;
    case 2:
        if (func_801CEDE4() != 0) {
            func_801CC470(1, 0x01680040, 0, 0, 1.0f);
            D_801E4EE0 = 3;
        }
        if ((func_801CEE30(0x01680040, 9) != 0) || (func_801CEE30(0x01680040, 0x12) != 0)) {
            temp_v0 = (func_801E3CFC_StructB *) ((func_801E3CFC_StructA *) func_801DAAF0.unk24->unk8)->unk8->unk24->unk2C;
            func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x4A2, 1.2f, 1.0f);
        }
        break;
    case 3:
        if (func_801CEDE4() != 0) {
            func_801CC470(1, 0x0348004C, 0, 0x10, 5.0f);
            D_801E4EE0 = 4;
        }
        if ((func_801CEE30(0x01680040, 9) != 0) || (func_801CEE30(0x01680040, 0x12) != 0)) {
            temp_v0 = (func_801E3CFC_StructB *) ((func_801E3CFC_StructA *) func_801DAAF0.unk24->unk8)->unk8->unk24->unk2C;
            func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x4A2, 1.2f, 1.0f);
        }
        break;
    case 4:
        if (func_801CEDE4() != 0) {
            return 0xA;
        }
        break;
    }
    return 9;
}
