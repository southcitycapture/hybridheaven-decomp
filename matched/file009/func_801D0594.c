#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
extern void D_801CD5E0(void *, void *, f32);
#define func_801CD5E0 D_801CD5E0
extern void D_801CD728(void *, void *, f32);
#define func_801CD728 D_801CD728
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
typedef struct func_801CE6F8_Struct {
    u8 pad0[0x8];
    f32 unk8;
} func_801CE6F8_Struct;
void func_801CE6F8(s32 arg0, func_801CE6F8_Struct *arg1);
typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;
typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;
void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1);


typedef struct func_801D0594_StructB {
    u8 pad0[0x8];
    f32 unk8;
    u8 padC[0x8];
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    s32 unk30;
} func_801D0594_StructB;

typedef struct func_801D0594_StructC {
    u8 pad0[0x30];
    func_801D0594_StructB *unk30;
} func_801D0594_StructC;

typedef struct func_801D0594_Struct {
    u8 pad0[0xC];
    struct { u8 pad0[0x4C]; u16 unk4C; } *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x2C];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D0594_Struct;


void func_801D0594(func_801D0594_Struct *arg0, func_801D0594_StructC **arg1) {
    f32 temp_fs2;
    f32 temp;
    f32 k;
    f64 var_fs1;
    u32 temp_v0;
    u8 j;
    s32 i;
    func_801D0594_StructB *s0;

    for (j = 0; j < arg0->unk94; j++) {
            i = j;
            temp_v0 = (arg0->unk92 + i) % 20 & 0xFFFF;
            var_fs1 = (f64)(f32)temp_v0;
            if (var_fs1 < 10.0) {
                var_fs1 = -(var_fs1 - 10.0);
            } else {
                var_fs1 = var_fs1 - 10.0;
            }
            s0 = arg1[j]->unk30;
            if (temp_v0 == 0) {
                func_801CE6F8((s32)arg0, (func_801CE6F8_Struct *)s0);
            }
            s0->unk8 = s0->unk8 - 0.9f;
            s0->unk14 = (s16)(s32)((f64)s0->unk14 + 4096.0 * ((f64)(i - arg0->unk94 / 2) - 0.5));
            s0->unk14 = s0->unk14 & 0x1FFF;
            temp_fs2 = (f32)(var_fs1 / 10.0);
            func_801CD5E0(arg0, s0, temp_fs2);
            func_801CD728(arg0, s0, temp_fs2);
            temp = (f32)((f64)arg0->unk60 * (1.0 - (f64)temp_fs2));
            s0->unk20 = temp;
            s0->unk1C = temp;
            s0->unk18 = temp;
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0(arg0, arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
