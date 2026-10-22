#include "context.h"

typedef struct {
    u8 pad0[0x24];
    func_801D8948_Struct24 *unk24;
    u8 pad1[0x38 - 0x28];
    func_801D8948_Struct38 *unk38;
    u8 pad2[0x90 - 0x3C];
    u8 unk90;
    u8 unk91;
    u8 pad3;
    u8 unk93;
    f32 unk94;
} func_801D91D0_Struct;
extern void func_8014F940(void *);

s32 func_801D91D0(func_801D91D0_Struct *arg0, s32 arg1) {
    s32 v;
    f32 t;
    func_801D8948_Struct14 *p;

    if (arg0->unk93 == 1) goto c1;
    if (arg0->unk93 == 2) goto c2;
    if (arg0->unk93 == 3) goto c3;
    return 1;
c1:
    arg0->unk24->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_8018294C[arg0->unk90].unk8;
    arg0->unk24->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)D_8018294C[arg0->unk90].unk8;
    p = &D_8018294C[arg0->unk90];
    t = (f64)arg0->unk94 + (f64)p->unk8;
    arg0->unk94 = t;
    if (p->unk6 <= t) {
        if (func_8014F358(D_801BBBF0.unk198, D_801BBBF0.unk1A0) != 0) {
            arg0->unk93 = 2;
            arg0->unk94 = 0.0f;
        }
    }
    goto end;
c2:
    v = 0;
    if (arg0->unk94 == 5.0f) {
        v = 1;
    }
    arg0->unk94 = arg0->unk94 + 1.0f;
    if (v != 0) {
        if (func_80133A24(0x7A) != 0) {
            func_8014F940(arg0);
        }
    }
    if (func_801C3B5C() == 4) {
        func_801C2F0C(1, 0);
        if (arg0->unk91 & 1) {
            arg0->unk93 = 3;
            arg0->unk94 = 0.0f;
        } else {
            arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
            arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
            return 0;
        }
    }
    goto end;
c3:
    arg0->unk24->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)*(f32 *)((u8 *)D_80182954 + arg0->unk90 * 0x14);
    arg0->unk24->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)D_8018294C[arg0->unk90].unk8;
    p = &D_8018294C[arg0->unk90];
    t = (f64)arg0->unk94 + (f64)p->unk8;
    arg0->unk94 = t;
    if (p->unk6 <= t) {
        arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
        return 0;
    }
end:
    return 1;
}
