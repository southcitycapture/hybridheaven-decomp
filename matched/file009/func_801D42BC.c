#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
u8 func_801CD500(u8 arg0, u8 arg1, f32 arg2);
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
extern void func_801CE898();


typedef struct func_801D42BC_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x4B - 0x14];
    u8 unk4B;
} func_801D42BC_StructB;
typedef struct func_801D42BC_StructC {
    u8 pad0[0x30];
    func_801D42BC_StructB *unk30;
} func_801D42BC_StructC;
typedef struct func_801D42BC_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D42BC_StructD;
typedef struct func_801D42BC_Struct {
    u8 pad0[0xC];
    func_801D42BC_StructD *unkC;
    u8 pad10[0x6C - 0x10];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[0x90 - 0x78];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D42BC_Struct;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_801D42BC(func_801D42BC_Struct *arg0, func_801D42BC_StructC **arg1) {
    u8 i;
    f32 sp60;

    sp60 = (f32)((f64)(f32)((f64)(u32)arg0->unk92 + 1.0) / ((f64)(u32)arg0->unk90 + 1.0));
    for (i = 0; (s32)i < arg0->unk94; i++) {
        f32 fv1;
        f32 fs4;
        f32 step;
        f64 fs2;
        f64 fv0;
        f64 fs0;
        s16 s2;
        s16 offset;
        func_801D42BC_StructB *s0;

        fv1 = (f32)((f64)(f32)((f64)(u32)i + 1.0) / ((f64)(u32)arg0->unk94 + 1.0));
        s0 = arg1[i]->unk30;
        fs2 = fv1;
        step = 256.0f * fv1;
        s0->unk12 = (s16)(s32)((f32)s0->unk12 + step);
        s0->unk12 = s0->unk12 & 0x1FFF;
        fv0 = fs2 * 5.0;
        fs0 = (fv0 < 2.0) ? -(fv0 - 2.0) : fv0 - 2.0;
        offset = (s32)(4096.0f * fv1);
        s2 = (s16)(arg0->unk92 * 0x30) + offset;
        fs4 = (f32)(fs0 * 0.2 + 1.0);
        s0->unk4 = func_8001EAD0(s2) * fs4 + arg0->unk6C;
        s0->unkC = func_8001EB64(s2) * fs4 + arg0->unk74;
        s0->unk4B = func_801CD500((u32)((1.0 - fs2) * 255.0), 0, sp60);
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
