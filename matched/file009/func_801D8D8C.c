#include "common.h"
typedef struct {
    u8 pad0[6];
    u16 unk6;
    f32 unk8;
    u8 pad1[0x14 - 0xC];
} func_801D8948_Struct14;
extern func_801D8948_Struct14 D_8018294C[];
extern f32 D_80182954[];
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
extern void func_8011AAF4(void *a0, s32 a1, void *a2, s32 a3, s32 a4, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8, f32 f9, f32 f10, s32 a16, s32 a17);
extern s32 func_8014F358(f32, f32);
extern void func_801C2F0C(s32, void *);
extern s32 func_801C3B5C(void);
typedef struct {
    u8 pad0[0x30];
    func_801D8948_Struct30 *unk30;
} func_801D8948_Struct24;
typedef struct {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801D8948_Struct38;
typedef struct {
    u8 pad0[0x24];
    func_801D8948_Struct24 *unk24;
    u8 pad1[0x38 - 0x28];
    func_801D8948_Struct38 *unk38;
    u8 pad2[0x90 - 0x3C];
    u8 unk90;
    u8 pad3[2];
    u8 unk93;
    f32 unk94;
} func_801D8948_Struct;


extern u8 D_801E39D4[];

typedef struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    s32 unk14;
} func_801D8D8C_StructArg;

s32 func_801D8D8C(func_801D8948_Struct *arg0, s32 arg1) {
    f32 t;
    func_801D8948_Struct14 *e;
    func_801D8D8C_StructArg sp68;

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
