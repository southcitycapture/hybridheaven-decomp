#include "common.h"
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);
extern void func_800058DC(void *arg0, s32 arg1);
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
typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;
typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;
void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1);


typedef struct func_801CF2D4_Obj {
    u8 pad0[8];
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801CF2D4_Obj;
typedef struct func_801CF2D4_Slot {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801CF2D4_Obj *unk30;
} func_801CF2D4_Slot;
typedef struct func_801CF2D4_Struct {
    u8 pad0[0xC];
    func_801CE1C8_StructA *unkC;
    u8 pad10[0x3C];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x10];
    f32 unk60;
    u8 pad64[0x8];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x15];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801CF2D4_Struct;

extern f64 D_801E3598;
extern f32 D_801E35A0;

void func_801CF2D4(func_801CF2D4_Struct *arg0, func_801CF2D4_Slot **arg1) {
    s32 pad;
    s32 pad2;
    u16 pad3;
    u16 sp8C;
    f32 fs2;
    f32 s;
    u16 tv;
    u8 i;
    s32 v;
    s16 t;
    func_801CF2D4_Obj *o;

    sp8C = (u32)((f64)arg0->unk90 * D_801E3598);
    i = 0;
    if (arg0->unk94 > 0) {
        fs2 = D_801E35A0;
        do {
            t = arg0->unk92 - i * sp8C;
            if (t < 0 || arg0->unk90 < t) {
                arg1[i]->unk22 = 0;
            } else {
                s = ((f64)(f32)t + 1.0) / ((f64)(f32)arg0->unk90 + 1.0);
                arg1[i]->unk22 = 1;
                o = arg1[i]->unk30;
                D_801CD5E0(arg0, o, s);
                D_801CD728(arg0, o, s);
                o->unk18 = o->unk1C = o->unk20 = arg0->unk60 * s;
                if (t == arg0->unk90) {
                    func_801CE330((func_801CE1C8_StructA *)arg0, 6, arg0->unk6C, o->unk8, arg0->unk74, arg0->unk78, arg0->unk79, arg0->unk7A, 0x80, arg0->unk78, arg0->unk79, arg0->unk7A, 0, 8, 0x18, fs2, 9);
                }
            }
        } while (++i < arg0->unk94);
    }
    if ((arg0->unk94 * sp8C + arg0->unk90 < arg0->unk92++ && arg0->unk4C >= arg0->unk4E) || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
