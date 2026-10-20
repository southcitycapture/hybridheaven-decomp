#include "context.h"
extern f32 D_801FCEAC;
extern f32 D_801FCEB0;
extern f32 D_801FCEB4;
extern f32 D_801FCEB8;
extern f32 D_801FCEBC;
extern f32 D_801FCEC0;
extern f32 D_801FCEC4;
extern f32 D_801FCEC8;

s32 func_801F20DC(s32 arg0, s32 arg1) {
    struct func_801E1C38_Struct *p;
    if (func_801C0B8C(0x0208531F) != 0) {
        func_8038BD50(D_801FCEAC, D_801FCEB0, 29.6f);
        D_8038BD88(42.5f, D_801FCEB4, -24.3f);
        return 0xB;
    }
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk30 = p->unk30;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk34 = p->unk34 + D_801FCEB8;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk38 = p->unk38 + D_801FCEBC;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk3C = p->unk3C + D_801FCEC0;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk40 = p->unk40 + D_801FCEC4;
    p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
    p->unk44 = p->unk44 + D_801FCEC8;
    return 0xA;
}
