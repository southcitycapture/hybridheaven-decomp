#include "context.h"




extern f32 D_8025250C;
extern void func_80240E54();

void func_80240DEC(func_80240DEC_Struct0 *arg0, func_80240DEC_Struct1 **arg1) {
    if (arg0->unk92 != 0) {
        (*arg1)->unk2C->unk18 = 0.0f;
        (*arg1)->unk2C->unk1C = 0.0f;
        (*arg1)->unk2C->unk20 = D_8025250C;
        arg0->unk92 = 0xC8;
        func_800058DC((s32) arg0, (void *) func_80240E54);
    }
}
