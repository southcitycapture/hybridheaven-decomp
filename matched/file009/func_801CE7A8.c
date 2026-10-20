#include "context.h"

typedef struct func_801CE7A8_StructB {
    u8 pad0[0x30];
    struct func_801CE7A8_StructC *unk30;
} func_801CE7A8_StructB;
typedef struct func_801CE7A8_StructC {
    u8 pad0[0x3E];
    u16 unk3E;
} func_801CE7A8_StructC;
typedef struct func_801CE7A8_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE7A8_StructD;
typedef struct func_801CE7A8_Struct {
    u8 pad0[0xC];
    func_801CE7A8_StructD *unkC;
    u8 pad10[0x20];
    s32 unk30;
    u8 pad34[0x5C];
    u16 unk90;
    u16 unk92;
    u8 pad94[3];
    u8 unk97;
} func_801CE7A8_Struct;

extern void func_801CD878(void *arg0, void **arg1);
extern void func_801CE898();

void func_801CE7A8(func_801CE7A8_Struct *arg0, func_801CE7A8_StructB **arg1) {
    u16 temp_v1;
    u16 var_a2;
    u16 temp_v0_2;

    temp_v1 = (*arg1)->unk30->unk3E;
    if (arg0->unk97 >= 0xD || arg0->unk97 == 5) {
        extern void func_8012D7A8();
        func_8012D7A8(arg0);
        if (temp_v1 & 1) {
            var_a2 = 1;
        } else if (arg0->unk30 & 0x20) {
            var_a2 = 1;
        } else {
            var_a2 = 0;
        }
    } else {
        var_a2 = 1;
    }
    func_801CD878(arg0, (void **)arg1);
    if ((arg0->unk90 < arg0->unk92++ && var_a2 != 0) || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
