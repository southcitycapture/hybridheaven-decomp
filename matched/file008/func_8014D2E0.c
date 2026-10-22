#ifndef GG
float func_8001EAD0(short);
float func_8001EB64(short);
#endif
#include "context.h"

typedef struct func_8014D2E0_Struct_Table {
    u8 pad[6];
    u16 limit;
    f32 speed;
    u8 padC[8];
} func_8014D2E0_Struct_Table;
typedef struct func_8014D2E0_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014D2E0_Struct_P;
typedef struct func_8014D2E0_Struct_G {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad19C[4];
    f32 unk1A0;
} func_8014D2E0_Struct_G;
typedef struct func_8014D2E0_Struct {
    u8 pad[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x10];
    func_8014D2E0_Struct_P *unk38;
    u8 pad3C[0x54];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    f32 unk94;
} func_8014D2E0_Struct;
extern s32 func_8014F358(f32, f32);
extern void func_8014F940();
extern void func_801C2F0C();
extern s32 func_801C3044();
typedef struct func_8014D2E0_Struct_Speed {
    f32 speed;
    u8 pad[16];
} func_8014D2E0_Struct_Speed;
extern func_8014D2E0_Struct_Speed D_80182954[];
#define DTI(i) (*(func_8014D2E0_Struct_Table *)((u8 *)D_8018294C + (i) * 20))
#define GD ((func_8014D2E0_Struct_G *)D_801BBBF0)

s32 func_8014D2E0(func_8014D2E0_Struct *arg0, s32 arg1) {
    u8 state;
    s32 flag;
    f32 sum;
    func_8014D2E0_Struct_Table *entry;
    state = arg0->unk93;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    return 1;
    state1: {
        arg0->unk24->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
        arg0->unk24->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
        entry = &DTI(arg0->unk90);
        sum = (f64)arg0->unk94 + (f64)entry->speed;
        arg0->unk94 = sum;
        if (sum >= (f32)(u32)entry->limit) {
            if (func_8014F358(GD->unk198, GD->unk1A0)) {
                arg0->unk93 = 2;
                arg0->unk94 = 0.0f;
            }
        }
    }
    goto done;
    state2: {
        flag = arg0->unk94 == 5.0f;
        arg0->unk94 += 1.0f;
        if (flag) {
            func_8014F940(arg0);
        }
        if (func_801C3044() == 0) {
            func_801C2F0C(1, NULL);
            if (arg0->unk91 & 1) {
                arg0->unk93 = 3;
                arg0->unk94 = 0.0f;
            } else {
                arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
                arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
                return 0;
            }
        }
    }
    goto done;
    state3: {
        arg0->unk24->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
        arg0->unk24->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
        entry = &DTI(arg0->unk90);
        sum = (f64)arg0->unk94 + (f64)entry->speed;
        arg0->unk94 = sum;
        if (sum >= (f32)(u32)entry->limit) {
            arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
            arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
            return 0;
        }
    }
done:
    return 1;
}
