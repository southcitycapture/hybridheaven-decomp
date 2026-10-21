#include "context.h"

struct func_80380778_Struct { u8 pad0[0x4]; u16 unk4; u8 pad6[6]; u16 unkC; };
struct func_80380778_Obj { u8 pad0[0x91]; s8 unk91; u8 pad92[0x12]; struct func_80380778_Struct *unkA4; };

void func_80380778(struct func_80380778_Obj *arg0, s32 arg1) {
    struct func_80380778_Struct *sp3C;
    u16 temp_v1;
    s8 var_a2;
    struct func_8037EABC_Struct *temp_a0;

    sp3C = arg0->unkA4;
    var_a2 = 0;
    temp_v1 = sp3C->unkC;
    if (temp_v1 & 0x200) {
        if (arg0->unk91 >= 3) {
            var_a2 = -1;
        }
    } else if ((temp_v1 & 0x100) && (arg0->unk91 < 5)) {
        var_a2 = 1;
    }
    if (var_a2 != 0) {
        func_80020744(0x300);
        arg0->unk91 = arg0->unk91 + var_a2;
        func_80147DCC(3);
        func_801471DC((s32)D_8038A9C0);
        func_8037E630((func_8037E630_Struct *)arg0, (func_8037E630_Struct2 **)arg1);
    }
    temp_a0 = D_8038A9C0;
    func_801453CC(temp_a0, 0x180, 0, 0x1A, 1, 3, 0x1A);
    temp_a0 = temp_a0->unk10;
    func_801453CC(temp_a0, 0, 0, 0x1A, 1, 3, 0x1A);
    if (sp3C->unk4 & 0x4000) {
        func_801471DC((s32)D_8038A9B8);
        func_80147DCC(2);
        func_8037E38C(arg0, arg1);
        func_800058DC(arg0, func_80380584);
        return;
    }
    if (sp3C->unk4 & 0x1000) {
        func_80148E44(arg0);
        func_80148FC4(arg0, func_8014AB48, 4, 1);
    }
}
