#include "context.h"

void func_802569D0(s32 arg0, func_80251820_Args *arg1) {
    func_80251820_Inner *temp_v0;

    temp_v0 = arg1->unk0->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 2);
    if ((s32) arg1->unk0->unk30->unk4B < 2) {
        func_80005700(arg0, (void **) arg1);
    }
}
