#include "context.h"

typedef struct func_801D5208_StructB {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D5208_StructB;
typedef struct func_801D5208_StructC {
    u8 pad0[0x30];
    func_801D5208_StructB *unk30;
} func_801D5208_StructC;
typedef struct func_801D5208_StructA {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x2C];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D5208_StructA;
extern f64 D_801E36A0;

void func_801D5208(func_801D5208_StructA *arg0, func_801D5208_StructC **arg1) {
    func_801D5208_StructB *p;
    s32 i;
    f64 k;
    extern void func_801CD878();

    func_801CD878();
    i = 0;
    if (arg0->unk94 > 0) {
        k = D_801E36A0;
        do {
            p = arg1[i]->unk30;
            i = (i + 1) & 0xFF;
            p->unk20 = (f32)((f64)p->unk20 + (f64)arg0->unk60 * k);
            p->unk12 = p->unk12 + 0x80;
            p->unk12 = p->unk12 & 0x1FFF;
            p->unk1C = p->unk20;
            p->unk18 = p->unk20;
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ || (*(u16 *)(arg0->unkC + 0x4C) & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
