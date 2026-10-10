#include "context.h"
extern struct func_8022B4A4_StructBase D_801BBBF0;

typedef struct func_80228C20_StructPos {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
} func_80228C20_StructPos;

typedef struct func_80228C20_StructObj {
    u8 pad0[0x2C];
    func_80228C20_StructPos *unk2C;
} func_80228C20_StructObj;

typedef struct func_80228C20_StructMid {
    u8 pad0[0x24];
    func_80228C20_StructObj *unk24;
} func_80228C20_StructMid;

typedef struct func_80228C20_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    func_80228C20_StructObj *unkE0;
    u8 pad1[0x448 - 0xE4];
    func_80228C20_StructMid **unk448;
} func_80228C20_StructGlobal;

typedef struct func_80228C20_StructArgC {
    u8 pad0[0xC];
    s32 unkC;
} func_80228C20_StructArgC;

typedef struct func_80228C20_StructArg {
    u8 pad0[0xC];
    func_80228C20_StructArgC *unkC;
} func_80228C20_StructArg;

void func_8001EF38(f32, f32);

s32 func_80228C20(arg0)
func_80228C20_StructArg *arg0;
{
    func_80228C20_StructPos *temp_v0;
    func_80228C20_StructPos *temp_v1;

    if (arg0->unkC->unkC == ((func_80228C20_StructGlobal *)&D_801BBBF0)->unkDC) {
        temp_v0 = (*((func_80228C20_StructGlobal *)&D_801BBBF0)->unk448)->unk24->unk2C;
        temp_v1 = ((func_80228C20_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
        func_8001EF38(temp_v0->unkC - temp_v1->unkC, temp_v0->unk4 - temp_v1->unk4);
    } else {
        temp_v1 = ((func_80228C20_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
        temp_v0 = (*((func_80228C20_StructGlobal *)&D_801BBBF0)->unk448)->unk24->unk2C;
        func_8001EF38(temp_v1->unkC - temp_v0->unkC, temp_v1->unk4 - temp_v0->unk4);
    }
}
