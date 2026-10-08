#include "context.h"

struct func_80242E58_Struct {
    u8 pad0[0x30];
    void *unk30;
    s32 unk34;
    void *unk38;
    s16 unk3C;
    s16 unk3E;
};

struct func_80242E58_Arg {
    u8 pad0[0x68];
    s32 unk68;
};

struct func_80242E58_Table {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

extern void *func_80005670(void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80248F20[];

void *func_80242E58(void *arg0) {
    struct func_80242E58_Table *var_v1;
    struct func_80242E58_Struct *temp_v0;

    temp_v0 = func_80005670(arg0, D_80248F20);
    if (temp_v0 != NULL) {
        if ((s32) arg0 == D_801BBCCC) {
            var_v1 = (struct func_80242E58_Table *) D_801BC03C;
        } else {
            var_v1 = (struct func_80242E58_Table *) D_801BC3D8;
        }
        temp_v0->unk30 = arg0;
        temp_v0->unk34 = ((struct func_80242E58_Arg *) arg0)->unk68;
        temp_v0->unk38 = var_v1;
        temp_v0->unk3C = var_v1->unk2D8;
        temp_v0->unk3E = var_v1->unk2D9;
    }
    return temp_v0;
}
