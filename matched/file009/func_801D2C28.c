#include "common.h"
typedef struct func_801D35BC_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801D35BC_StructPos;
typedef struct func_801D35BC_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801D35BC_StructPos *unk30;
} func_801D35BC_StructObj;
extern struct func_801D35BC_StructObj *D_8008DA88[];
extern void func_800058DC(void *arg0, s32 arg1);
extern s32 func_80006214(void *);
extern void D_801CD5E0(void *, void *, f32);
#define func_801CD5E0 D_801CD5E0
extern void D_801CD728(void *, void *, f32);
#define func_801CD728 D_801CD728
typedef struct func_801CE1C8_StructA {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CE1C8_StructA;
void func_801CE330(func_801CE1C8_StructA *arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 a5, u8 a6, u8 a7, u8 a8, u8 a9, u8 a10, u8 a11, u8 a12, u8 a13, u16 a14, f32 a15, u8 a16);
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
extern void func_801CE898();
typedef struct func_801D2F78_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D2F78_StructInner;
typedef struct func_801D2F78_StructOuter {
    u8 pad0[0xC];
    func_801D2F78_StructInner *unkC;
    u8 pad10[0x4C - 0x10];
    u16 unk4C;
    u16 unk4E;
} func_801D2F78_StructOuter;
void func_801D2F78(func_801D2F78_StructOuter *arg0, s32 *arg1);


typedef struct func_801D2C28_StructIn {
    u8 pad0[0x4C];
    u16 unk4C;
    u8 pad4E[0x7C - 0x4E];
    u8 unk7C;
    u8 unk7D;
    u8 pad7E[0x90 - 0x7E];
    struct func_801D2C28_Struct *unk90;
} func_801D2C28_StructIn;
typedef struct func_801D2C28_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801D2C28_Vec;
typedef struct func_801D2C28_Elem {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_801D2C28_Vec *unk30;
} func_801D2C28_Elem;
typedef struct func_801D2C28_Struct {
    u8 pad0[0xC];
    func_801D2C28_StructIn *unkC;
    u8 pad10[0x54 - 0x10];
    f32 unk54;
    f32 unk58;
    f32 unk5C;
    u8 pad60[0x78 - 0x60];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x92 - 0x7B];
    u16 unk92;
    u8 unk94;
} func_801D2C28_Struct;
extern f32 func_8002FC20(f32);
extern void func_8013A334(f32 *, void *, s32, s32);
extern f32 D_801E3648;
extern int abs(int);

void func_801D2C28(func_801D2C28_Struct *arg0, func_801D2C28_Elem **arg1) {
    f32 fs0, fs1, fs2, fv0, k;
    s32 i;
    s32 v;
    s32 m;
    func_801D2C28_Elem **p;
    func_801D2C28_Vec *s0;
    f32 sp[3];
    s32 u1, u2;

    if (arg0->unkC->unk7C != 0) {
        s0 = (func_801D2C28_Vec *)*(s32 *)((u8 *)arg0->unkC->unk90 + 0x5C);
        func_80006214(arg0->unkC->unk90);
        func_8013A334(sp, D_8008DA88, (s32)s0, 0x1A);
        arg0->unk54 = sp[0];
        arg0->unk58 = sp[1];
        arg0->unk5C = sp[2];
        func_80006214(arg0);
    }
    i = 0;
    p = arg1;
    if (arg0->unk94 > 0) {
        k = D_801E3648;
        do {
            s0 = (*p)->unk30;
            m = arg0->unk92 % 9;
            fs0 = (f32)((f64)(f32)((m - 4) < 0 ? -(m - 4) : (m - 4)) * 0.25);
            func_801CD5E0(arg0, s0, fs0);
            func_801CD728(arg0, s0, fs0);
            fs0 = arg0->unk54 - s0->unk4;
            fs1 = arg0->unk58 - s0->unk8;
            fs2 = arg0->unk5C - s0->unkC;
            fv0 = func_8002FC20(fs0 * fs0 + fs1 * fs1 + fs2 * fs2);
            if (fv0 < 5.0f) {
                arg0->unkC->unk7D = 1;
                (*p)->unk22 = 0;
                s0->unk4 = arg0->unk54;
                s0->unk8 = arg0->unk58;
                s0->unkC = arg0->unk5C;
            } else {
                s0->unk4 = s0->unk4 + 5.0f * fs0 / fv0;
                s0->unk8 = s0->unk8 + 5.0f * fs1 / fv0;
                s0->unkC = s0->unkC + 5.0f * fs2 / fv0;
            }
            if ((arg0->unk92++ % 2) == 1) {
                func_801CE330((void *)arg0, 0x1C, s0->unk4, s0->unk8, s0->unkC, arg0->unk78, arg0->unk79, arg0->unk7A, 0x80, arg0->unk78, arg0->unk79, arg0->unk7A, 0, 1, 0x18, k, 5);
            }
            i++;
            p++;
        } while (i < arg0->unk94);
    }
    if (arg0->unkC->unk4C & 0x8000) {
        arg0->unkC->unk7D = 1;
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)&func_801CE898);
        return;
    }
    if (arg0->unkC->unk7D != 0) {
        func_800058DC(arg0, (s32)&func_801D2F78);
    }
}
