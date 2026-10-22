#include "context.h"

struct func_8037532C_Struct2 {
    u8 pad0[0x5C];
    u8 *unk5C;
};
struct func_8037532C_Struct {
    u8 pad0[0x2C];
    struct func_8037532C_Struct2 *unk2C;
    u16 unk30;
    u16 unk32;
    u8 pad34[0x20];
    u16 *unk54;
    u16 *unk58;
};
struct func_8037532C_StructG {
    u8 pad0[0x1118];
    struct func_8037532C_Struct *unk1118;
};
extern s32 func_80011590(u16, void *, void *);
extern void func_803753C4();

void func_8037532C(s32 arg0, s32 arg1) {
    struct func_8037532C_Struct2 *q = ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk2C;
    u8 *sp20 = q->unk5C;
    u16 *a1 = ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk54;
    u16 *a2 = ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk58;

    if ((s32)*(u16 *)(sp20 + 0x20) >= func_80011590(a1[1], a1, a2)) {
        ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk30 = a2[0];
        ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk32 = a2[1];
        func_8037488C(arg0);
        func_800058DC(arg0, func_803753C4);
    }
}
