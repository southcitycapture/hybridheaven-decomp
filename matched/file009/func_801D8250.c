#include "common.h"
typedef struct {
    u8 pad0[6];
    u16 unk6;
    f32 unk8;
    u8 pad1[0x14 - 0xC];
} func_801D8948_Struct14;
extern func_801D8948_Struct14 D_8018294C[];
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801D8948_Struct30;
typedef struct {
    u8 pad0[0x2C];
    func_801D8948_Struct30 *unk2C;
} func_801D8948_StructE0;
typedef struct {
    u8 pad0[0xE0];
    func_801D8948_StructE0 *unkE0;
    u8 pad1[0x198 - 0xE4];
    f32 unk198;
    u8 pad2[4];
    f32 unk1A0;
    u8 pad3[0x328 - 0x1A4];
    f32 unk328;
    f32 unk32C;
    f32 unk330;
} func_801D8948_StructBBF0;
extern func_801D8948_StructBBF0 D_801BBBF0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_801C2F0C(s32, void *);


typedef struct { u8 pad0[0x4]; f32 unk4; u8 pad8[4]; f32 unkC; } func_801D8250_In;
typedef struct { u8 pad0[0x30]; func_801D8250_In *unk30; } func_801D8250_Mid;
typedef struct { u8 pad0[0x12]; s16 unk12; } func_801D8250_Sub;
typedef struct { u8 pad0[0x24]; struct { u8 pad[0x30]; func_801D8250_Sub *unk30; } *unk24; u8 pad28[0x90-0x28]; u8 unk90; u8 pad91[2]; u8 unk93; f32 unk94; } func_801D8250_Obj;
typedef struct { s16 a; s32 b; f32 c; s16 d; } func_801D8250_Loc;
extern void func_8012FE50(s32, u16, s32, s32, s32);

s32 func_801D8250(func_801D8250_Obj *arg0, func_801D8250_Mid **arg1) {
    u8 pad[16];
    func_801D8250_Loc sp;
    s32 hit;

    if (arg0->unk93 == 1) goto c1;
    if (arg0->unk93 != 2) goto end;
    goto c2;
c1:
    (*arg1)->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * D_8018294C[arg0->unk90].unk8;
    (*arg1)->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * D_8018294C[arg0->unk90].unk8;
    (*(arg1 + 1))->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * D_8018294C[arg0->unk90].unk8;
    (*(arg1 + 1))->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * D_8018294C[arg0->unk90].unk8;
    if ((arg0->unk94 += (f64)D_8018294C[arg0->unk90].unk8) >= (f32)D_8018294C[arg0->unk90].unk6) {
        sp.a = 0x1100;
        sp.b = 0x0168003E;
        sp.d = 0xA;
        sp.c = 1.0f;
        func_801C2F0C(5, &sp);
        arg0->unk93 = 2;
        arg0->unk94 = 0.0f;
    }
    goto end;
c2:
    hit = 0;
    if (arg0->unk94 == 15.0f) hit = 1;
    arg0->unk94 += 1.0f;
    if (hit) {
        *(s16 *)((u8 *)&D_801BBBF0 + 4) = 0x105;
        func_8012FE50(0x10, *(s16 *)((u8 *)&D_801BBBF0 + 4), 6, 1, 0);
    }
end:
    return 1;
}
