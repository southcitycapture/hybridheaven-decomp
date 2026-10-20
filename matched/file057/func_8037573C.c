#include "context.h"

typedef struct func_8037573C_Struct {
    u8 pad[0x2C];
    void *unk2C;
    u8 unk30;
    u8 unk31;
} func_8037573C_Struct;
extern func_8037573C_Struct *func_80005670(void *, void *);
extern void *D_801BBCCC;
extern u8 D_803883E0[];
extern void func_801479A8(s32);

void func_8037573C(func_80375688_Struct *arg0, s32 arg1) {
    u8 pad[4];
    func_80375688_StructData *sp20;
    u8 pad2[4];
    u8 sp1B;
    func_8037573C_Struct *t;

    sp20 = arg0->data;
    if ((void *)arg0 == D_801BBCCC) {
        sp1B = 0;
    } else {
        sp1B = 1;
    }
    func_801479A8(arg0);
    t = func_80005670(arg0, D_803883E0);
    t->unk30 = sp1B;
    t->unk2C = arg0;
    t->unk31 = sp20->count;
}
