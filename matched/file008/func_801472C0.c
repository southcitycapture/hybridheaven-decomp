#include "context.h"

typedef struct func_801472C0_Obj {
    u8 pad0[0x4C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801472C0_Obj;

typedef struct func_801472C0_Struct {
    u8 pad0[0x2C];
    func_801472C0_Obj *unk2C;
    func_801472C0_Obj *unk30;
} func_801472C0_Struct;

void func_801472C0(func_801472C0_Struct *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    if (arg0->unk2C != NULL) {
        arg0->unk2C->unk4C = arg1;
        arg0->unk2C->unk4D = arg2;
        arg0->unk2C->unk4E = arg3;
        arg0->unk2C->unk4F = arg4;
        return;
    }
    arg0->unk30->unk4C = arg1;
    arg0->unk30->unk4D = arg2;
    arg0->unk30->unk4E = arg3;
    arg0->unk30->unk4F = arg4;
}
