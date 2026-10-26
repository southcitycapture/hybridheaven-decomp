#include "common.h"


typedef struct func_801C220C_Struct1 { u8 pad[0xB]; u8 unkB; } func_801C220C_Struct1;
typedef struct func_801C220C_Struct0 { u8 pad[0x30]; func_801C220C_Struct1 *unk30; } func_801C220C_Struct0;
typedef struct func_801C220C_Struct2 { u8 pad[0x3C]; u16 unk3C; } func_801C220C_Struct2;
extern func_801C220C_Struct0 *D_801CFD08;
extern void func_801C1040();

void func_801C220C(func_801C220C_Struct2 *arg0, s32 arg1) {
    s32 v;
    v = D_801CFD08->unk30->unkB;
    if (arg0->unk3C >= 0x33) {
        v = (s16)(v + 3);
        if (v >= 0x100) {
            v = 0xFF;
        }
        func_801C1040(D_801CFD08, (s8)v, 5);
        return;
    }
    arg0->unk3C++;
}
