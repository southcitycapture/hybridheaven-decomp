#include "common.h"




extern s32 func_801C2F60();
void func_801C2F24(void);
extern struct func_801E390C_Struct1 *D_8038D8D0;
extern f32 D_801F3BA0;

s32 func_801E390C(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F60(&sp1C) != 0) {
        func_801C2F24();
        return 0xB;
    }
    D_8038D8D0->unk0->unk30->unk8 = sp1C + D_801F3BA0;
    return 0xA;
}
