#include "context.h"




extern f32 D_80256F98;
extern void func_80241730();

void func_802416C8(func_802416C8_Struct0 *arg0, func_802416C8_Struct1 **arg1) {
    if (arg0->unk92 != 0) {
        (*arg1)->unk2C->unk18 = 0.0f;
        (*arg1)->unk2C->unk1C = 0.0f;
        (*arg1)->unk2C->unk20 = D_80256F98;
        arg0->unk92 = 0xC8;
        func_800058DC((s32) arg0, (void *) func_80241730);
    }
}
