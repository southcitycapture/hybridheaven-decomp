#include "context.h"
typedef struct func_801C9C48_Struct30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C9C48_Struct30;
typedef struct func_801C9C48_Struct1 {
    u8 pad0[0x30];
    func_801C9C48_Struct30 *unk30;
} func_801C9C48_Struct1;
extern void func_8012C89C(void *, s32, s32, s32);

extern u8 D_801DA798[];
extern u8 D_801DA7A8[];
extern u8 D_801D9FE8[];
extern void func_801C95AC();
void func_801C9194(s32 arg0, func_801C9C48_Struct1 **arg1);

void func_801C9194(s32 arg0, func_801C9C48_Struct1 **arg1) {
    u32 v;
    f32 *q;
    func_801C9C48_Struct30 *p;

    func_80005E44(arg0, D_801DA798);
    func_80005E44(arg0, D_801DA798);
    func_80005E44(arg0, D_801DA7A8);
    func_80006214(arg0);
    func_8012C89C((void *)arg0, 0, 0x447, 0);
    func_8012C89C((void *)arg0, 1, 0x447, 0);
    func_8012C89C((void *)arg0, 2, 0x447, 1);
#define INIT(i, a, b, pre) \
    arg1[i]->unk30->unk4 = 0.0f; \
    arg1[i]->unk30->unk8 = 0.0f; \
    pre; \
    arg1[i]->unk30->unkC = 0.0f; \
    arg1[i]->unk30->unk10 = 0; \
    arg1[i]->unk30->unk12 = 0; \
    arg1[i]->unk30->unk14 = 0; \
    arg1[i]->unk30->unk48 = a; \
    arg1[i]->unk30->unk49 = b; \
    arg1[i]->unk30->unk4A = 0; \
    arg1[i]->unk30->unk4B = 0x7F; \
    arg1[i]->unk30->unk4C = 0xFF; \
    arg1[i]->unk30->unk4D = 0x50; \
    arg1[i]->unk30->unk4E = 8; \
    arg1[i]->unk30->unk4F = 0x7F; \
    arg1[i]->unk30->unk24 |= 0x300; \
    arg1[i]->unk30->unk18 = 1.0f; \
    arg1[i]->unk30->unk1C = 1.0f; \
    arg1[i]->unk30->unk20 = 1.0f; \
    arg1[i]->unk30->unk30 = v;
    INIT(0, 0x30, 0, v = (u32)D_801D9FE8 | 0x40000000)
    INIT(1, 0x30, 0, (void)0)
    INIT(2, 0x48, 8, (void)0)
#define Q(n) ((f32 *)&D_801E04E0)[n]
    Q(8) = 0.0f; Q(7) = 0.0f; Q(6) = 0.0f;
    Q(5) = 0.0f; Q(4) = 0.0f; Q(3) = 0.0f;
    Q(0x11) = 0.0f; Q(0x10) = 0.0f; Q(0xF) = 0.0f;
    Q(0xE) = 0.0f; Q(0xD) = 0.0f; Q(0xC) = 0.0f;
    Q(0x1A) = 0.0f; Q(0x19) = 0.0f; Q(0x18) = 0.0f;
    Q(0x17) = 0.0f; Q(0x16) = 0.0f; Q(0x15) = 0.0f;
    Q(2) = 1.0f; Q(1) = 1.0f; Q(0) = 1.0f;
    Q(0xB) = 1.0f; Q(0xA) = 1.0f; Q(9) = 1.0f;
    Q(0x14) = 1.0f; Q(0x13) = 1.0f; Q(0x12) = 1.0f;
    func_800058DC(arg0, (void (*)(void))func_801C95AC);
}
