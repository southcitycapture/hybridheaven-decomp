#include "context.h"

extern s32 func_80152C68(u8, void *);
extern func_801C659C_Obj *D_801CFD80[];
extern f32 D_801CCF68[][3];
extern u8 D_801CF300[];

void func_801C7C64(func_801C659C_Ret *arg0, s32 arg1) {
    s32 var_s0;
    func_801C659C_Obj30 *temp_v0;
    s32 result;
    s16 val;

    temp_v0 = D_801CFD80[arg0->unk90]->unk30;
    temp_v0->unk10 -= 0x155;
    var_s0 = arg0->unk90;
    temp_v0 = D_801CFD80[var_s0]->unk30;
    val = temp_v0->unk10;
    if (val < -0x1000) {
        temp_v0->unk10 = 0x1000;
        D_8001B204(var_s0 = arg0->unk90, (s16)((s16)D_801CCF68[var_s0][0] + 0x3E8), 0x82, D_801CF300, func_80152C68(arg0->unk90, D_801CFD80));
        D_800058DC(arg0, func_801C7D5C);
        var_s0 = arg0->unk90;
    }
    func_801C63CC(var_s0 & 0xFF);
}
