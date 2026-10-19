#include "context.h"

typedef struct func_802418C4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802418C4_StructB;
typedef struct func_802418C4_StructA {
    u8 pad0[0x30];
    func_802418C4_StructB *unk30;
} func_802418C4_StructA;
typedef struct func_802418C4_StructC {
    u8 pad[0x92];
    u16 unk92;
    u8 unk94;
} func_802418C4_StructC;
extern void func_80005F6C(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
struct func_80241A54_Struct1;
extern void func_80203830(s32, void *);
extern void func_802425AC();
extern void func_80241EB0();
extern void func_8013B570(void *, u16, s32, s32, void *);
void func_80241A54(void *arg0, struct func_80241A54_Struct1 **arg1);
extern void func_800062F8(func_802418C4_StructA *, s32);
extern u8 D_802544C0[];
extern f32 D_8025BE58;
extern f32 D_8025BE5C;

void func_802418C4(func_802418C4_StructC *arg0, func_802418C4_StructA **arg1) {
    f32 k;

    if (arg0->unk92 != 0) {
        func_8001F74C();
        func_80005F6C((s32)arg0, D_80164F40);
        func_80006214((s32)arg0);
        func_8012C89C((s32)arg0, 0, 9, 2);
        func_800062F8(*arg1, 0x80000A00);
        k = D_8025BE58;
        (*arg1)->unk30->unk24 |= 0x60300;
        (*arg1)->unk30->unk30 = (s32)D_802544C0 | 0x40000000;
        (*arg1)->unk30->unk4 = 199.0f;
        (*arg1)->unk30->unk8 = D_8025BE5C;
        (*arg1)->unk30->unkC = -230.0f;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = k;
        (*arg1)->unk30->unk20 = k;
        (*arg1)->unk30->unk48 = 0xFF;
        (*arg1)->unk30->unk49 = 0xFF;
        (*arg1)->unk30->unk4A = 0xFF;
        (*arg1)->unk30->unk4B = 0;
        (*arg1)->unk30->unk4C = 0xFF;
        (*arg1)->unk30->unk4D = 0xDC;
        (*arg1)->unk30->unk4E = 0;
        arg0->unk94 = 0x50;
        func_800058DC((s32)arg0, func_80241A54);
    }
}
