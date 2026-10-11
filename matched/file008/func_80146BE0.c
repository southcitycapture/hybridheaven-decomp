#include "context.h"

typedef struct func_80146BE0_Obj {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    s8 unk4C;
    s8 unk4D;
    s8 unk4E;
} func_80146BE0_Obj;

typedef struct func_80146BE0_Struct {
    u8 pad0[0x30];
    func_80146BE0_Obj *unk30;
} func_80146BE0_Struct;

void func_80146BE0(s16 arg0, func_80146BE0_Struct *arg1) {
    if (arg0 >= 0x800) {
        func_801451C0((void *) arg1, 0x1C);
    } else if (arg0 >= 0x400 && arg0 < 0x800) {
        func_80146B2C(0);
        func_801451C0((void *) arg1, 5);
    } else if (arg0 >= 0 && arg0 < 0x400) {
        func_80146B2C(1);
        func_801451C0((void *) arg1, 3);
    }
    arg1->unk30->unk4C = arg1->unk30->unk48 / 2;
    arg1->unk30->unk4D = arg1->unk30->unk49 / 2;
    arg1->unk30->unk4E = arg1->unk30->unk4A / 2;
}
