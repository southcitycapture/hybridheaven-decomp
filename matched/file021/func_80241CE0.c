#include "context.h"





extern f64 D_80256FC0;
extern void func_80020744(s32);
extern void func_80241D58();

void func_80241CE0(func_80241CE0_Struct1 *arg0, func_80241CE0_Struct4 *arg1) {
    s32 temp_v0;
    func_80241CE0_Struct3 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + D_80256FC0);
        return;
    }
    arg0->unk92 = 0x14;
    func_80020744(0x234);
    func_800058DC((s32) arg0, func_80241D58);
}
