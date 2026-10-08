#include "context.h"

struct func_80147250_Obj {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_80147250_Struct {
    u8 pad0[0x2C];
    struct func_80147250_Obj *unk2C;
    struct func_80147250_Obj *unk30;
};

void func_80147250(struct func_80147250_Struct *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    struct func_80147250_Obj *temp_v0;

    temp_v0 = arg0->unk2C;
    if (temp_v0 != NULL) {
        temp_v0->unk48 = arg1;
        arg0->unk2C->unk49 = arg2;
        arg0->unk2C->unk4A = arg3;
        arg0->unk2C->unk4B = arg4;
        return;
    }
    arg0->unk30->unk48 = arg1;
    arg0->unk30->unk49 = arg2;
    arg0->unk30->unk4A = arg3;
    arg0->unk30->unk4B = arg4;
}
