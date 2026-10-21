#include "context.h"

typedef struct func_801C8220_Struct {
    u8 pad[0x90];
    u8 unk90;
} func_801C8220_Struct;
typedef struct func_801C8220_StructCopy {
    u16 data[57];
} func_801C8220_StructCopy;

extern s32 func_80126A0C(void *, u16, s32);
extern void func_8013B268(void *, u16, s32, u8, void (*)(), s32);
extern u16 func_80152980(u8, u8);
extern u16 **D_80171CEC[];
extern u16 D_801CD0C0[];
extern u8 D_801CD0C4[];
extern func_801C8220_StructCopy D_801CD1A0;
extern u16 D_801CFDAC[];
extern void func_801C8328();

void func_801C8220(func_801C8220_Struct *arg0, s32 arg1)
{
    func_801C8220_StructCopy copy = D_801CD1A0;
    u8 pad[4];
    u16 saved;

    saved = D_801CFDAC[arg0->unk90] = func_80152980(arg0->unk90, D_801CFDA8[arg0->unk90]);
    if (func_80126A0C(arg0, **D_80171CEC[saved], 0)) {
        func_8013B268(arg0, saved, 0, D_801CD0C4[arg0->unk90], func_801C8328, D_801CD0C0[arg0->unk90]);
    }
}
