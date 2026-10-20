#include "context.h"
struct func_801D2A0C_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D2A0C_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D2A0C_StructR { u8 pad[4]; struct func_801D2A0C_StructS *u4; };
struct func_801D2A0C_StructS { u8 pad[0x2C]; struct func_801D2A0C_StructP *u2C; };
struct func_801D2A0C_StructT { u8 pad[0x5C]; struct func_801D2A0C_StructQ *u5C; };
void func_801D2A0C(struct func_801D2A0C_StructT *arg0, struct func_801D2A0C_StructR *arg1);

extern u8 D_801D29C4[];

void func_801D29C4(struct func_801D17D0_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D2A0C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D29C4);
}
