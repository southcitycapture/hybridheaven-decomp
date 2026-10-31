#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
void func_801CD878(void *arg0, void **arg1);
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


extern const f64 D_801E3578;

typedef struct func_801CE9DC_StructB {
    u8 pad[0x10];
    s16 unk10;
} func_801CE9DC_StructB;
typedef struct func_801CE9DC_StructA {
    u8 pad[0x30];
    func_801CE9DC_StructB *unk30;
} func_801CE9DC_StructA;
typedef struct func_801CE9DC_Struct {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
    u8 pad10[0x80];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801CE9DC_Struct;

void func_801CE9DC(func_801CE9DC_Struct *arg0, func_801CE9DC_StructA **arg1) {
    u8 i;
    func_801CE9DC_StructB *p;

    func_801CD878(arg0, (void **)arg1);
    i = 0;
    if (i < arg0->unk94) {
        f64 bias = D_801E3578;

        do {
            p = arg1[i]->unk30;
            p->unk10 += 16.0 * ((f64)(i - arg0->unk94 / 2) - bias);
            p->unk10 &= 0x1FFF;
            i++;
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
