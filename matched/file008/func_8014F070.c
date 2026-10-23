#include "context.h"

typedef struct func_8014F070_Struct_Table {
    u8 pad[6];
    u16 unk6;
    f32 unk8;
    u8 padC[8];
} func_8014F070_Struct_Table;
typedef struct func_8014F070_Struct_G {
    u8 pad[0x198];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
} func_8014F070_Struct_G;
typedef struct func_8014F070_Struct {
    u8 pad[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x10];
    struct func_8014F940_Struct_P *unk38;
    u8 pad3C[0x54];
    u8 unk90, unk91, unk92, unk93;
    f32 unk94;
} func_8014F070_Struct;
extern s32 func_8014F358(f32, f32);
extern s32 D_801C3B5C(void);

s32 func_8014F070(func_8014F070_Struct *arg0, s32 arg1) {
    func_8014C2B0_Struct_Data *data;
    func_8014F070_Struct_Table *entry;
    s32 flag;
    u8 state;
    f32 value;

    state = arg0->unk93;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    return 1;
state1:
    {
        data = arg0->unk24->unk30;
        data->unk8 += (f64)((func_8014F070_Struct_Table *)D_8018294C)[arg0->unk90].unk8;
        entry = &((func_8014F070_Struct_Table *)D_8018294C)[arg0->unk90];
        value = (f64)arg0->unk94 + (f64)entry->unk8;
        arg0->unk94 = value;
        if (value >= (f32)(u32)entry->unk6) {
            if (func_8014F358(((func_8014F070_Struct_G *)D_801BBBF0)->unk198, ((func_8014F070_Struct_G *)D_801BBBF0)->unk1A0)) {
                arg0->unk93 = 2;
                arg0->unk94 = 0.0f;
            }
        }
    }
    goto done;
state2:
    {
        flag = 0;
        if (arg0->unk94 == 5.0f) {
            flag = 1;
        }
        arg0->unk94 += 1.0f;
        if (flag) {
            func_8014F940(arg0);
        }
        if (D_801C3B5C() == 4) {
            func_801C2F0C(1, 0);
            if (arg0->unk91 & 1) {
                arg0->unk93 = 3;
                arg0->unk94 = 0.0f;
                goto done;
            }
            arg0->unk24->unk30->unk8 = (f64)(f32)arg0->unk38->unk8 / 10.0;
            return 0;
        }
    }
    goto done;
state3:
    {
        data = arg0->unk24->unk30;
        data->unk8 -= (f64)((func_8014F070_Struct_Table *)D_8018294C)[arg0->unk90].unk8;
        entry = &((func_8014F070_Struct_Table *)D_8018294C)[arg0->unk90];
        value = (f64)arg0->unk94 + (f64)entry->unk8;
        arg0->unk94 = value;
        if (value >= (f32)(u32)entry->unk6) {
            arg0->unk24->unk30->unk8 = (f64)(f32)arg0->unk38->unk8 / 10.0;
            return 0;
        }
    }
done:
    return 1;
}
