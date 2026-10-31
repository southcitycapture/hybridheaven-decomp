#include "common.h"
extern s8 D_801BBD54;
extern void func_800058DC(s32, void (*)(void));
void func_8013222C(void *arg0, s32 arg1);
void func_8013234C(s32 arg0, s32 arg1);


typedef struct func_80131DD0_Struct30 {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
} func_80131DD0_Struct30;
typedef struct func_80131DD0_Struct24 {
    u8 pad0[0x24];
    u32 unk24;
    s16 unk28;
    u8 pad2A[6];
    func_80131DD0_Struct30 *unk30;
} func_80131DD0_Struct24;
typedef struct func_80131DD0_Struct {
    u8 pad0[0x24];
    func_80131DD0_Struct24 *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[0x62];
    s16 unk92, unk94, unk96, unk98;
} func_80131DD0_Struct;
typedef struct func_80131DD0_StructGlobal {
    u8 pad0[0x54];
    void *unk54;
    u8 pad58[0x110];
    s16 unk168;
} func_80131DD0_StructGlobal;
extern s32 func_80005E44(void *, void *);
extern s32 func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_80178C94[];
extern u8 D_8017AE58[];
extern u8 D_8017B2A0[];
extern f32 D_8018D754;
extern f32 D_8018D758;
extern f32 D_8018D75C;
extern func_80131DD0_StructGlobal D_801BBBF0;

void func_80131DD0(func_80131DD0_Struct *arg0, func_80131DD0_Struct24 **arg1) {
    s16 temp_v0;
    func_80131DD0_Struct30 *temp;
    f32 scale;

    D_801BBBF0.unk168 = 1;
    if (arg0->unk98 == 4) {
        func_80005E44(D_801BBBF0.unk54, D_80178C94);
        func_800058DC((s32)arg0, (void (*)(void))func_8013234C);
        return;
    }
    if (func_80005E44(arg0, D_80164F40) != 0) {
        func_80006214(arg0);
        (*arg1)->unk28 = 1;
        D_801BBD54 = 1;
        if (arg0->unk92 != 0) {
            arg0->unk94 = 0;
            arg0->unk96 = 4;
        } else {
            arg0->unk94 = 0x90;
            arg0->unk96 = -4;
        }
        scale = D_8018D754;
        arg0->unk2C |= 0x20;
        (*arg1)->unk30->unk18 = scale;
        (*arg1)->unk30->unk1C = scale;
        (*arg1)->unk30->unk20 = scale;
        temp_v0 = arg0->unk98;
        if (temp_v0 == 0) goto case0;
        if (temp_v0 == 1U) goto case1;
        if (temp_v0 == 2) goto case2;
        if (temp_v0 != 3) goto end;
        goto case3;
        case0: {
            scale = D_8018D758;
            (*arg1)->unk30->unk18 = scale;
            (*arg1)->unk30->unk1C = scale;
            (*arg1)->unk30->unk20 = scale;
            func_8012C89C(arg0, 0, 5, 0);
            (*arg1)->unk30->unk30 = (u32)D_8017B2A0 | 0x40000000;
            (*arg1)->unk24 = 0x80000000;
            temp = (*arg1)->unk30;
            temp->unk24 |= 0x1000;
            arg0->unk24->unk30->unk4 = (f32)arg0->unk94;
            arg0->unk24->unk30->unk8 = 7.0f;
            arg0->unk24->unk30->unkC = 60.0f;
            arg0->unk24->unk30->unk12 = 0x1000;
            func_800058DC((s32)arg0, (void (*)(void))func_8013222C);
            return;
        }
        case1: {
            (*arg1)->unk24 = 0x80000100;
            (*arg1)->unk30->unk30 = (u32)D_8017AE58 | 0x40000000;
            (*arg1)->unk30->unk24 = 0;
            func_8012C89C(arg0, 0, 5, 2);
            func_800058DC((s32)arg0, (void (*)(void))func_8013222C);
            arg0->unk24->unk30->unk4 = (f32)arg0->unk94;
            arg0->unk24->unk30->unk8 = 7.0f;
            arg0->unk24->unk30->unkC = 110.0f;
            arg0->unk24->unk30->unk12 = 0x1000;
            return;
        }
        case2: {
            scale = D_8018D75C;
            (*arg1)->unk30->unk18 = scale;
            (*arg1)->unk30->unk1C = scale;
            (*arg1)->unk30->unk20 = scale;
            func_8012C89C(arg0, 0, 5, 1);
            (*arg1)->unk24 = 0x80000000;
            (*arg1)->unk30->unk30 = (u32)D_8017B2A0 | 0x40000000;
            temp = (*arg1)->unk30;
            temp->unk24 |= 0x1000;
            arg0->unk24->unk30->unk4 = (f32)-arg0->unk94;
            arg0->unk24->unk30->unk8 = 7.0f;
            arg0->unk24->unk30->unkC = 60.0f;
            arg0->unk24->unk30->unk12 = 0x1000;
            func_800058DC((s32)arg0, (void (*)(void))func_8013222C);
            return;
        }
        case3: {
            (*arg1)->unk24 = 0x80000100;
            (*arg1)->unk30->unk30 = (u32)D_8017AE58 | 0x40000000;
            (*arg1)->unk30->unk24 = 0;
            func_8012C89C(arg0, 0, 5, 3);
            func_800058DC((s32)arg0, (void (*)(void))func_8013222C);
            arg0->unk24->unk30->unk4 = (f32)-arg0->unk94;
            arg0->unk24->unk30->unk8 = 7.0f;
            arg0->unk24->unk30->unkC = 110.0f;
            arg0->unk24->unk30->unk12 = 0x1000;
        }
    }
end:;
}
