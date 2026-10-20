#include "context.h"

typedef struct func_801334A4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x35];
    u8 unk4B;
} func_801334A4_StructB;

typedef struct func_801334A4_StructC {
    u8 pad[0x30];
    func_801334A4_StructB *unk30;
} func_801334A4_StructC;

typedef struct func_801334A4_Struct {
    u8 pad[0x91];
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
} func_801334A4_Struct;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_801334A4(func_801334A4_Struct *arg0, func_801334A4_StructC **arg1) {
    f64 d;
    f32 r;
    s32 i;
    s32 a;
    s16 k;
    s16 t;
    s32 div;
    func_801334A4_StructC **p;

    arg0->unk96 = arg0->unk96 + 1;
    div = 38;
    i = 1;
    if (arg0->unk91 > 0) {
        p = arg1 + 1;
        a = 0x2000;
        do {
            (*p)->unk30->unk4B = arg0->unk94 * 2;
            d = (f64)(a / div);
            t = (s32)(d + d);
            r = func_8001EAD0(t);
            (*p)->unk30->unk4 = (f64)(*p)->unk30->unk4 + (f64)r;
            r = func_8001EB64(t);
            (*p)->unk30->unk8 = (f64)(*p)->unk30->unk8 + (f64)r;
            k = (s32)(d * 1.5);
            (*p)->unk30->unkC = (*p)->unk30->unkC + 1.0f;
            r = func_8001EAD0(k) * 56.0f;
            (*p)->unk30->unk10 = (f64)(*p)->unk30->unk10 + (f64)r;
            r = func_8001EB64(k) * 56.0f;
            (*p)->unk30->unk12 = (f64)(*p)->unk30->unk12 + (f64)r;
            r = func_8001EB64(k) * 56.0f;
            (*p)->unk30->unk14 = (f64)(*p)->unk30->unk14 + (f64)r;
            i++;
            p++;
            a += 0x2000;
        } while (arg0->unk91 >= i);
    }
    arg0->unk94 = arg0->unk94 - 2;
    if (arg0->unk94 == 0) {
        D_80089356 = 0;
        func_80005700(arg0);
    }
}
