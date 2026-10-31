#include "common.h"
#define func_8020394C func_8020394C__early
extern void func_800058DC(void *, void *);
extern void func_8001F74C();
extern void func_80020744(s32);
s32 func_8020394C(u64 arg0);                          /* extern */
typedef struct func_80241C8C_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241C8C_Struct0;
typedef struct func_80241C8C_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
} func_80241C8C_Struct2;
typedef struct func_80241C8C_Struct1 {
    u8 pad0[0x30];
    func_80241C8C_Struct2 *unk30;
} func_80241C8C_Struct1;
typedef struct func_80241C8C_Struct3 {
    u8 pad0[0x18];
    func_80241C8C_Struct1 *unk18;
} func_80241C8C_Struct3;
void func_80241C8C(func_80241C8C_Struct0 *arg0, func_80241C8C_Struct3 *arg1);


typedef struct func_802418A4_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x18 - 0x10];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802418A4_Struct2;

typedef struct func_802418A4_Struct1 {
    u8 pad0[0x30];
    func_802418A4_Struct2 *unk30;
} func_802418A4_Struct1;

typedef struct func_802418A4_Struct0 {
    u8 pad0[0x92];
    s16 unk92;
} func_802418A4_Struct0;
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D8C8(void *, s32, s32, f32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8024F130[];
extern u8 D_8024F180[];
extern u8 D_8024F1E0[];

void func_802418A4(func_802418A4_Struct0 *arg0, func_802418A4_Struct1 **arg1) {
    s32 i;

    func_8001F74C();
    for (i = 0; i < 7; i++) {
        func_80005F6C(arg0, D_80164F40);
    }
    func_80006214(arg0);
    for (i = 0; i < 5; i++) {
        func_8012C89C(arg0, i, 9, 1);
        func_800062F8(arg1[i], 0x80000500);
        arg1[i]->unk30->unk24 |= 0x100;
        arg1[i]->unk30->unk30 = (s32)D_8024F130 | 0x40000000;
        arg1[i]->unk30->unk48 = 0;
        arg1[i]->unk30->unk49 = 0xFF;
        arg1[i]->unk30->unk4A = 0;
        arg1[i]->unk30->unk4B = 0x40;
        arg1[i]->unk30->unk4 = 705.0f;
        arg1[i]->unk30->unk8 = (i + 1) * 3;
        arg1[i]->unk30->unkC = -400.0f;
        arg1[i]->unk30->unk18 = 0.005f;
        arg1[i]->unk30->unk1C = 0.01f;
        arg1[i]->unk30->unk20 = 0.005f;
    }
    func_8012C89C(arg0, 5, 9, 3);
    func_8012D8C8(arg0, 9, 0, 1.0f, 1, 5);
    arg1[5]->unk30->unk24 |= 0x300;
    arg1[5]->unk30->unk30 = (s32)D_8024F180 | 0x40000000;
    arg1[5]->unk30->unk48 = 0;
    arg1[5]->unk30->unk49 = 0xFF;
    arg1[5]->unk30->unk4A = 0;
    arg1[5]->unk30->unk4C = 0;
    arg1[5]->unk30->unk4D = 0xFF;
    arg1[5]->unk30->unk4E = 0;
    arg1[5]->unk30->unk4B = 0x80;
    arg1[5]->unk30->unk4 = 705.0f;
    arg1[5]->unk30->unk8 = 0.0f;
    arg1[5]->unk30->unkC = -400.0f;
    arg1[5]->unk30->unk18 = 0.0001f;
    arg1[5]->unk30->unk1C = 0.0f;
    arg1[5]->unk30->unk20 = 0.0001f;
    func_8012C89C(arg0, 6, 9, 4);
    arg1[6]->unk30->unk24 |= 0x100;
    func_800062F8(arg1[6], 0x80000A0A);
    arg1[6]->unk30->unk30 = (s32)D_8024F1E0 | 0x40000000;
    arg1[6]->unk30->unk48 = 0xFF;
    arg1[6]->unk30->unk49 = 0xFF;
    arg1[6]->unk30->unk4A = 0xFF;
    arg1[6]->unk30->unk4B = 0;
    arg1[6]->unk30->unk18 = 0.01f;
    arg1[6]->unk30->unk1C = 0.01f;
    arg1[6]->unk30->unk20 = 0.01f;
    arg1[6]->unk30->unk4 = 705.0f;
    arg1[6]->unk30->unk8 = 0.0f;
    arg1[6]->unk30->unkC = -400.0f;
    func_80020744(0x233);
    arg0->unk92 = 20;
    func_800058DC(arg0, func_80241C8C);
}
