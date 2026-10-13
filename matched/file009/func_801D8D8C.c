#include "context.h"

extern u8 D_801E39D4[];

s32 func_801D8D8C(func_801D8948_Struct *arg0, s32 arg1) {
    u8 pad[8];
    f32 t;
    func_801D8948_Struct14 *e;
    func_801D8948_Arg sp68;

    if (arg0->unk93 == 1) goto c1;
    if (arg0->unk93 == 2) goto c2;
    if (arg0->unk93 == 3) goto c3;
    if (arg0->unk93 == 4) goto c4;
    return 1;
c1:
    arg0->unk24->unk30->unk4 += func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_8018294C[arg0->unk90].unk8;
    arg0->unk24->unk30->unkC -= func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)D_8018294C[arg0->unk90].unk8;
    e = &D_8018294C[arg0->unk90];
    arg0->unk94 = t = arg0->unk94 + (f64)e->unk8;
    if ((f32)(u32)e->unk6 <= t && func_8014F358(D_801BBBF0.unk198, D_801BBBF0.unk1A0) != 0) {
        arg0->unk93 = 2;
        arg0->unk94 = 0.0f;
    }
    goto end;
c2:
    if (func_801C3B5C() == 4) {
        sp68.unk0 = 0x1000;
        sp68.unk4 = 0x01680041;
        sp68.unkC = 0xA;
        sp68.unk8 = 1.0f;
        func_801C2F0C(3, &sp68);
        arg0->unk93 = 3;
        arg0->unk94 = 0.0f;
    }
    goto end;
c3:
    arg0->unk24->unk30->unk4 -= func_8001EB64(arg0->unk24->unk30->unk12) * (f64)*(f32 *)((u8 *)D_80182954 + arg0->unk90 * 20);
    arg0->unk24->unk30->unkC += func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)D_8018294C[arg0->unk90].unk8;
    e = &D_8018294C[arg0->unk90];
    arg0->unk94 = t = arg0->unk94 + (f64)e->unk8;
    if ((f32)(u32)e->unk6 <= t) {
        arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
        arg0->unk93 = 4;
        arg0->unk94 = 0.0f;
    }
    goto end;
c4:
    if (arg0->unk94++ >= 90.0f) {
        func_8011AAF4(D_801E39D4, 0x50A, arg0, 2, 1, 0.0f, D_801BBBF0.unk328, D_801BBBF0.unk32C, D_801BBBF0.unk330, 0.0f, D_801BBBF0.unkE0->unk2C->unk4, D_801BBBF0.unkE0->unk2C->unk8 + 15.0f, D_801BBBF0.unkE0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, NULL);
        return 0;
    }
end:
    return 1;
}
