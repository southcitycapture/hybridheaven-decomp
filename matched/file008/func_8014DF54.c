#include "context.h"

s32 func_8014DF54(func_8014D2E0_Struct *arg0, func_8014C2B0_Struct_Sub **arg1)
{
    register func_8014D2E0_Struct_Table *table;
    s32 flag;
    f32 value;
    f32 state2value;

    if (arg0->unk93 == 1) goto state1;
    if (arg0->unk93 == 2) goto state2;
    if (arg0->unk93 == 3) goto state3;
    return 1;
state1:
    {
        arg1[0]->unk30->unk8 += (f64)DTI(arg0->unk90).speed / 3.0;
        arg1[1]->unk30->unk8 += 2.0 * (f64)DTI(arg0->unk90).speed / 3.0;
        arg1[2]->unk30->unk8 += (f64)DTI(arg0->unk90).speed;
        table = &DTI(arg0->unk90);
        arg0->unk94 = value = (f32)((f64)arg0->unk94 + (f64)table->speed);
        if ((f32)(u32)table->limit <= value) {
            if (func_8014F358(GD->unk198, GD->unk1A0)) {
                arg0->unk93 = 2;
                arg0->unk94 = 0.0f;
            }
        }
    }
    goto end;
state2:
    {
        if (arg0->unk94++ == 5.0f) {
            func_8014F940((func_8014F940_Struct_A *)arg0);
        }
        if (func_801C3044() == 0) {
            func_801C2F0C(1, 0);
            if (arg0->unk91 & 1) {
                arg0->unk93 = 3;
                arg0->unk94 = 0.0f;
            } else {
                arg1[0]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
                arg1[1]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
                arg1[2]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
                return 0;
            }
        }
    }
    goto end;
state3:
    {
        arg1[0]->unk30->unk8 -= (f64)DTI(arg0->unk90).speed / 3.0;
        arg1[1]->unk30->unk8 -= 2.0 * (f64)DTI(arg0->unk90).speed / 3.0;
        arg1[2]->unk30->unk8 -= (f64)DTI(arg0->unk90).speed;
        value = (f64)arg0->unk94 + (f64)((func_8014D6BC_Struct_Table *)&DTI(arg0->unk90))->unk8;
        arg0->unk94 = value;
        if ((f32)(u32)DTI(arg0->unk90).limit <= value) {
            arg1[0]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
            arg1[1]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
            arg1[2]->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
            return 0;
        }
    }
end:
    return 1;
}
