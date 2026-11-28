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
extern s32 func_8014F358(f32, f32);
extern void func_8014F940(void *);
extern void func_801C2F0C(s32, void *);
typedef struct {
    u8 pad0[0x30];
    func_801D8948_Struct30 *unk30;
} func_801D8948_Struct24;
typedef struct func_801DA304_StructTable {
    u8 pad[6];
    u16 unk6;
    f32 unk8;
    u8 padC[6];
    u16 unk12;
} func_801DA304_StructTable;
extern void func_801FC830(f32, f32, f32, f32, s32);


typedef struct {
    u8 pad0[6];
    s16 unk6, unk8, unkA;
} func_801D996C_Struct38;

typedef struct {
    u8 pad0[0x24];
    func_801D8948_Struct24 *unk24;
    u8 pad1[0x38 - 0x28];
    func_801D996C_Struct38 *unk38;
    u8 pad2[0x90 - 0x3C];
    u8 unk90, pad3, unk92, unk93;
    f32 unk94;
} func_801D996C_Struct;
extern s32 func_801C3044(void);

u32 func_801D996C(func_801D996C_Struct *arg0, s32 arg1) {
    s32 id;
    u16 sw;
    s32 st;
    f32 v;
    func_801D8948_Struct14 *speed;
    f32 sinValue;
    func_801D8948_Struct14 *entry;
    func_801D8948_Struct14 *entry3;
    func_801D8948_Struct30 *pos2;
    s32 effect;
    f64 product;
    func_801D8948_Struct30 *pos;

    st = arg0->unk93;
    if (st == 1) goto c1;
    if (st == 2) goto c2;
    if (st == 3) goto c3;
    return 1;
c1:
    arg0->unk24->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * D_8018294C[arg0->unk90].unk8;
    arg0->unk24->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * D_8018294C[arg0->unk90].unk8;
    entry = &D_8018294C[arg0->unk90];
    v = arg0->unk94 = (f64)arg0->unk94 + (f64)entry->unk8;
    if ((f32)entry->unk6 <= v) {
        if (func_8014F358(D_801BBBF0.unk198, D_801BBBF0.unk1A0) != 0) {
            arg0->unk93 = 2;
            arg0->unk94 = 0.0f;
        }
    }
    goto end;
c2:
    if (arg0->unk92 == 2) {
        if (arg0->unk94++ == 5.0f) func_8014F940(arg0);
    }
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        if (arg0->unk92 == 1) {
            arg0->unk93 = 3;
            arg0->unk94 = 0.0f;
            id = ((func_801DA304_StructTable *)D_8018294C)[arg0->unk90].unk12;
            sw = id;
            if (((func_801DA304_StructTable *)D_8018294C)[arg0->unk90].unk12 == 0) goto end;
            if ((effect = ((func_801DA304_StructTable *)D_8018294C)[arg0->unk90].unk12) != 0x127) goto effect_other;
            sw = 0x21D;
            func_801FC830((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, 500.0f, sw);
            return 1;
effect_other:
            if (effect != 0x128) goto effect_default;
            func_801FC830((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, 500.0f, 0x21E);
            return 1;
effect_default:
            func_801FC830((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, 500.0f, ((func_801DA304_StructTable *)D_8018294C)[arg0->unk90].unk12);
            return 1;
        }
        arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
        return 0;
    }
    goto end;
c3:
    sinValue = func_8001EB64(arg0->unk24->unk30->unk12);
    pos = arg0->unk24->unk30;
    product = (f64)sinValue;
    product *= (f64)*(f32 *)((u8 *)D_80182954 + arg0->unk90 * 0x14);
    pos->unk4 -= product + product;
    sinValue = func_8001EAD0(arg0->unk24->unk30->unk12);
    st = (s32)arg0->unk24->unk30;
    product = (f64)sinValue;
    product *= (f64)D_8018294C[arg0->unk90].unk8;
    ((func_801D8948_Struct30 *)st)->unkC += product + product;
    speed = &D_8018294C[arg0->unk90];
    entry3 = &D_8018294C[arg0->unk90];
    if ((arg0->unk94 = (f64)arg0->unk94 + speed->unk8 * 2.0) >= (f32)(u32)entry3->unk6) {
        arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
        return 0;
    }
end:
    return 1;
}
