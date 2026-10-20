#include "context.h"
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);
extern f32 D_801FBD24, D_801FBD28, D_801FBD2C, D_801FBD30, D_801FBD34, D_801FBD38;

s32 func_801E2560(s32 arg0, s32 arg1) {
    func_801CCE50(0xFF, 0xFF, 0xFF);
    func_801CCE88(0, 0xFF, 0xFF, 0xFF);
    func_801CCEC8(0, 0, 0, 0x7F);
    if (func_801C0B8C(0x01769A70) != 0) {
        struct func_801E1C38_Struct *p;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk30 += D_801FBD24;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk34 += D_801FBD28;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk38 += D_801FBD2C;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk3C += D_801FBD30;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk40 += D_801FBD34;
        p = (struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C;
        p->unk44 += D_801FBD38;
        if (func_801C0B8C(0x01D9C910) != 0) {
            return 3;
        }
    }
    return 2;
}
