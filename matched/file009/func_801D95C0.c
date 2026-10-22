#include "context.h"

struct func_801D95C0_C { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_801D95C0_B { u8 pad0[0x30]; struct func_801D95C0_C *unk30; };
struct func_801D95C0_D { u8 pad0[6]; s16 unk6; u8 pad8[2]; s16 unkA; };
struct func_801D95C0_Struct {
    u8 pad0[0x24]; struct func_801D95C0_B *unk24;
    u8 pad28[0xC]; u16 unk34; u16 unk36; struct func_801D95C0_D *unk38;
    u8 pad3C[0x90 - 0x3C];
    u8 unk90; u8 unk91; u8 pad92; u8 unk93; f32 unk94; s32 unk98;
};
extern s32 func_8014F330(void *);
extern void func_801C3B7C(s32);

s32 func_801D95C0(struct func_801D95C0_Struct *arg0, s32 arg1) {
    func_801D8948_Struct14 *e;
    f32 t;

    if (func_80133A24(0x7F) != 0) {
        func_80150314(arg0, 0x2A);
        arg0->unk91 = 0;
        arg0->unk98 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295A + arg0->unk90 * 0x14));
        return 0;
    }
    if (arg0->unk93 == 0) goto c0;
    if (arg0->unk93 == 1) goto c1;
    if (arg0->unk93 == 2) goto c2;
    if (arg0->unk93 != 3) goto end;
    goto c3;
c0:
    if (func_8014F330(arg0) != 0) {
        func_801C3B7C(0);
        arg0->unk93 = 1;
        arg0->unk94 = 0.0f;
        func_80020718(0x122);
    }
    goto end;
c1:
    arg0->unk24->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * D_8018294C[arg0->unk90].unk8;
    arg0->unk24->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * D_8018294C[arg0->unk90].unk8;
    e = &D_8018294C[arg0->unk90];
    t = (f64)arg0->unk94 + (f64)e->unk8;
    arg0->unk94 = t;
    if ((f32)e->unk6 <= t) {
        arg0->unk93 = 2;
        arg0->unk94 = 0.0f;
    }
    goto end;
c2:
    if (func_8014F330(arg0) != 0) {
        func_801C3B7C(0);
        arg0->unk93 = 3;
        arg0->unk94 = 0.0f;
        func_80020718(0x122);
    }
    goto end;
c3:
    arg0->unk24->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * *(f32 *)((u8 *)D_80182954 + arg0->unk90 * 20);
    arg0->unk24->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * D_8018294C[arg0->unk90].unk8;
    e = &D_8018294C[arg0->unk90];
    t = (f64)arg0->unk94 + (f64)e->unk8;
    arg0->unk94 = t;
    if ((f32)e->unk6 <= t) {
        arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
        arg0->unk93 = 0;
        arg0->unk94 = 0.0f;
    }
end:
    return 1;
}
