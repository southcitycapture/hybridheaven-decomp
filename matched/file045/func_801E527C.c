#include "context.h"

extern u8 D_801DB300[];
extern u8 D_801DB320[];

s32 func_801E527C(s32 arg0, s32 arg1) {
    func_80005670(func_801DAAF0.unk24, func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(func_801DAAF0.unk24->unk8, D_801DAD14);
    func_80005670(func_801DAAF0.unk24->unk8->unk8, D_801DB300);
    func_80005670(func_801DAAF0.unk24->unk8->unk8->unk8, D_801DB320);
    func_801CC530();
    return 2;
}
